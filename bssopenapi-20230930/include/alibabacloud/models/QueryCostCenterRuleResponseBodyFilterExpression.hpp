// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULERESPONSEBODYFILTEREXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULERESPONSEBODYFILTEREXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCostCenterRuleResponseBodyFilterExpressionFilterValues.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterRuleResponseBodyFilterExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterRuleResponseBodyFilterExpression& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
      DARABONBA_ANY_TO_JSON(Operand, operand_);
      DARABONBA_PTR_TO_JSON(Operands, operands_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterRuleResponseBodyFilterExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
      DARABONBA_ANY_FROM_JSON(Operand, operand_);
      DARABONBA_PTR_FROM_JSON(Operands, operands_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
    };
    QueryCostCenterRuleResponseBodyFilterExpression() = default ;
    QueryCostCenterRuleResponseBodyFilterExpression(const QueryCostCenterRuleResponseBodyFilterExpression &) = default ;
    QueryCostCenterRuleResponseBodyFilterExpression(QueryCostCenterRuleResponseBodyFilterExpression &&) = default ;
    QueryCostCenterRuleResponseBodyFilterExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterRuleResponseBodyFilterExpression() = default ;
    QueryCostCenterRuleResponseBodyFilterExpression& operator=(const QueryCostCenterRuleResponseBodyFilterExpression &) = default ;
    QueryCostCenterRuleResponseBodyFilterExpression& operator=(QueryCostCenterRuleResponseBodyFilterExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressionType_ != nullptr
        && this->filterValues_ != nullptr && this->operand_ != nullptr && this->operands_ != nullptr && this->operatorType_ != nullptr; };
    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string expressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues & filterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues) };
    inline Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues filterValues() { DARABONBA_PTR_GET(filterValues_, Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setFilterValues(const Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setFilterValues(Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


    // operand Field Functions 
    bool hasOperand() const { return this->operand_ != nullptr;};
    void deleteOperand() { this->operand_ = nullptr;};
    inline     const Darabonba::Json & operand() const { DARABONBA_GET(operand_) };
    Darabonba::Json & operand() { DARABONBA_GET(operand_) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setOperand(const Darabonba::Json & operand) { DARABONBA_SET_VALUE(operand_, operand) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setOperand(Darabonba::Json & operand) { DARABONBA_SET_RVALUE(operand_, operand) };


    // operands Field Functions 
    bool hasOperands() const { return this->operands_ != nullptr;};
    void deleteOperands() { this->operands_ = nullptr;};
    inline const vector<Darabonba::Json> & operands() const { DARABONBA_PTR_GET_CONST(operands_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> operands() { DARABONBA_PTR_GET(operands_, vector<Darabonba::Json>) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setOperands(const vector<Darabonba::Json> & operands) { DARABONBA_PTR_SET_VALUE(operands_, operands) };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setOperands(vector<Darabonba::Json> && operands) { DARABONBA_PTR_SET_RVALUE(operands_, operands) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline QueryCostCenterRuleResponseBodyFilterExpression& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


  protected:
    std::shared_ptr<string> expressionType_ = nullptr;
    std::shared_ptr<Models::QueryCostCenterRuleResponseBodyFilterExpressionFilterValues> filterValues_ = nullptr;
    Darabonba::Json operand_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> operands_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
