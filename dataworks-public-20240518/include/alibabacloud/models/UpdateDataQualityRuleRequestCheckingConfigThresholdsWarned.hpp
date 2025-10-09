// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDSWARNED_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDSWARNED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned(const UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned(UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned &&) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& operator=(const UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& operator=(UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expression_ != nullptr
        && this->operator_ != nullptr && this->value_ != nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsWarned& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The threshold expression.
    // 
    // The volatility type rule must use an expression to represent the volatility threshold. For example:
    // 
    // - Fluctuation rise greater than 0.01: $checkValue > 0.01
    // - Fluctuation drop greater than 0.01:$checkValue < -0.01
    // - Absolute volatility: abs($checkValue) > 0.01
    // 
    // You can also use expressions to configure thresholds for fixed-Value rules. If you configure them at the same time, the expression priority is higher than Operator and Value.
    std::shared_ptr<string> expression_ = nullptr;
    // The comparison operator. Valid values:
    // 
    // *   \\>
    // *   \\>=
    // *   <
    // *   <=
    // *   !=
    // *   \\=
    std::shared_ptr<string> operator_ = nullptr;
    // The threshold value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
