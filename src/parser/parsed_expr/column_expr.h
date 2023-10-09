//
// Created by jinhai on 23-2-28.
//

#pragma once

#include "common/types/alias/containers.h"
#include "parsed_expr.h"

namespace infinity {

class ColumnExpr : public ParsedExpr {
public:
    explicit ColumnExpr() : ParsedExpr(ParsedExprType::kColumn) {}

    ~ColumnExpr() override;

    [[nodiscard]] String ToString() const override;

public:
    Vector<String> names_{};
    bool star_{false};

    // Used to indicate the columnm expr is generated by unfolding star expr and should be destroyed by BindContext
    // destructor but not parsed syntax tree.
    bool generated_{false};
};

} // namespace infinity
