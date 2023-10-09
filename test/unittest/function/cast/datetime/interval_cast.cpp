//
// Created by jinhai on 22-12-23.
//

#include "function/cast/interval_cast.h"
#include "base_test.h"
#include "common/column_vector/column_vector.h"
#include "common/types/value.h"
#include "main/infinity.h"
#include "main/logger.h"
#include "main/stats/global_resource_usage.h"
#include <gtest/gtest.h>

class IntervalCastTest : public BaseTest {
    void SetUp() override {
        infinity::GlobalResourceUsage::Init();
        std::shared_ptr<std::string> config_path = nullptr;
        infinity::Infinity::instance().Init(config_path);
    }

    void TearDown() override {
        infinity::Infinity::instance().UnInit();
        EXPECT_EQ(infinity::GlobalResourceUsage::GetObjectCount(), 0);
        EXPECT_EQ(infinity::GlobalResourceUsage::GetRawMemoryCount(), 0);
        infinity::GlobalResourceUsage::UnInit();
    }
};

TEST_F(IntervalCastTest, date_cast0) {
    using namespace infinity;
    LOG_TRACE("Test name: {}.{}", test_info_->test_case_name(), test_info_->name());

    // Try to cast Interval type to wrong type.
    {
        IntervalT source;
        TinyIntT target;
        EXPECT_THROW(IntervalTryCastToVarlen::Run(source, target, nullptr), FunctionException);
    }
    {
        IntervalT source;
        VarcharT target;

        SharedPtr<DataType> data_type = MakeShared<DataType>(LogicalType::kVarchar);
        SharedPtr<ColumnVector> col_varchar_ptr = MakeShared<ColumnVector>(data_type);
        col_varchar_ptr->Initialize();

        EXPECT_THROW(IntervalTryCastToVarlen::Run(source, target, col_varchar_ptr), NotImplementException);
    }
}

TEST_F(IntervalCastTest, date_cast1) {
    using namespace infinity;
    LOG_TRACE("Test name: {}.{}", test_info_->test_case_name(), test_info_->name());

    // Call BindIntervalCast with wrong type of parameters
    {
        DataType target_type(LogicalType::kDecimal);
        EXPECT_THROW(BindTimeCast(target_type), TypeException);
    }

    SharedPtr<DataType> source_type = MakeShared<DataType>(LogicalType::kInterval);
    SharedPtr<ColumnVector> col_source = MakeShared<ColumnVector>(source_type);
    col_source->Initialize();
    for (i64 i = 0; i < DEFAULT_VECTOR_SIZE; ++i) {
        Value v = Value::MakeInterval(IntervalT(static_cast<i32>(i)));
        col_source->AppendValue(v);
        Value vx = col_source->GetValue(i);
    }
    for (i64 i = 0; i < DEFAULT_VECTOR_SIZE; ++i) {
        Value vx = col_source->GetValue(i);
        EXPECT_EQ(vx.type().type(), LogicalType::kInterval);
        EXPECT_FLOAT_EQ(vx.value_.interval.value, static_cast<i32>(i));
    }
    // cast interval column vector to varchar column vector
    {
        SharedPtr<DataType> target_type = MakeShared<DataType>(LogicalType::kVarchar);
        auto source2target_ptr = BindTimeCast(*target_type);
        EXPECT_NE(source2target_ptr.function, nullptr);

        SharedPtr<ColumnVector> col_target = MakeShared<ColumnVector>(target_type);
        col_target->Initialize();

        CastParameters cast_parameters;
        EXPECT_THROW(source2target_ptr.function(col_source, col_target, DEFAULT_VECTOR_SIZE, cast_parameters), NotImplementException);
    }
}