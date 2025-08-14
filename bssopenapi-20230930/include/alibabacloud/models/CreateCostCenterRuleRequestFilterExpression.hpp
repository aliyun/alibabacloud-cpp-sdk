// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERRULEREQUESTFILTEREXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERRULEREQUESTFILTEREXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCostCenterRuleRequestFilterExpressionFilterValues.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterRuleRequestFilterExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterRuleRequestFilterExpression& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
      DARABONBA_ANY_TO_JSON(Operand, operand_);
      DARABONBA_PTR_TO_JSON(Operands, operands_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterRuleRequestFilterExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
      DARABONBA_ANY_FROM_JSON(Operand, operand_);
      DARABONBA_PTR_FROM_JSON(Operands, operands_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
    };
    CreateCostCenterRuleRequestFilterExpression() = default ;
    CreateCostCenterRuleRequestFilterExpression(const CreateCostCenterRuleRequestFilterExpression &) = default ;
    CreateCostCenterRuleRequestFilterExpression(CreateCostCenterRuleRequestFilterExpression &&) = default ;
    CreateCostCenterRuleRequestFilterExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterRuleRequestFilterExpression() = default ;
    CreateCostCenterRuleRequestFilterExpression& operator=(const CreateCostCenterRuleRequestFilterExpression &) = default ;
    CreateCostCenterRuleRequestFilterExpression& operator=(CreateCostCenterRuleRequestFilterExpression &&) = default ;
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
    inline CreateCostCenterRuleRequestFilterExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const Models::CreateCostCenterRuleRequestFilterExpressionFilterValues & filterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, Models::CreateCostCenterRuleRequestFilterExpressionFilterValues) };
    inline Models::CreateCostCenterRuleRequestFilterExpressionFilterValues filterValues() { DARABONBA_PTR_GET(filterValues_, Models::CreateCostCenterRuleRequestFilterExpressionFilterValues) };
    inline CreateCostCenterRuleRequestFilterExpression& setFilterValues(const Models::CreateCostCenterRuleRequestFilterExpressionFilterValues & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline CreateCostCenterRuleRequestFilterExpression& setFilterValues(Models::CreateCostCenterRuleRequestFilterExpressionFilterValues && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


    // operand Field Functions 
    bool hasOperand() const { return this->operand_ != nullptr;};
    void deleteOperand() { this->operand_ = nullptr;};
    inline     const Darabonba::Json & operand() const { DARABONBA_GET(operand_) };
    Darabonba::Json & operand() { DARABONBA_GET(operand_) };
    inline CreateCostCenterRuleRequestFilterExpression& setOperand(const Darabonba::Json & operand) { DARABONBA_SET_VALUE(operand_, operand) };
    inline CreateCostCenterRuleRequestFilterExpression& setOperand(Darabonba::Json & operand) { DARABONBA_SET_RVALUE(operand_, operand) };


    // operands Field Functions 
    bool hasOperands() const { return this->operands_ != nullptr;};
    void deleteOperands() { this->operands_ = nullptr;};
    inline const vector<Darabonba::Json> & operands() const { DARABONBA_PTR_GET_CONST(operands_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> operands() { DARABONBA_PTR_GET(operands_, vector<Darabonba::Json>) };
    inline CreateCostCenterRuleRequestFilterExpression& setOperands(const vector<Darabonba::Json> & operands) { DARABONBA_PTR_SET_VALUE(operands_, operands) };
    inline CreateCostCenterRuleRequestFilterExpression& setOperands(vector<Darabonba::Json> && operands) { DARABONBA_PTR_SET_RVALUE(operands_, operands) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline CreateCostCenterRuleRequestFilterExpression& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


  protected:
    std::shared_ptr<string> expressionType_ = nullptr;
    std::shared_ptr<Models::CreateCostCenterRuleRequestFilterExpressionFilterValues> filterValues_ = nullptr;
    Darabonba::Json operand_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> operands_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
