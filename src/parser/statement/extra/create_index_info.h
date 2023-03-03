//
// Created by jinhai on 23-3-3.
//

#pragma once

#include "extra_ddl_info.h"

namespace infinity {

class CreateIndexInfo final : public ExtraDDLInfo {
public:
    explicit
    CreateIndexInfo() : ExtraDDLInfo(DDLType::kIndex) {}

    ~CreateIndexInfo() final;

    [[nodiscard]] String
    ToString() const final;

    String index_name_{};
    String schema_name_{"Default"};
    String table_name_{};

    Vector<String>* column_names_{nullptr};
};

}
