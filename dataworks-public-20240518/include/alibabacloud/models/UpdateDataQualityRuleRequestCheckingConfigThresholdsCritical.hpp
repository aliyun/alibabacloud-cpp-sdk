// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDSCRITICAL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIGTHRESHOLDSCRITICAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical(const UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical(UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical &&) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical() = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& operator=(const UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical &) = default ;
    UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& operator=(UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical &&) = default ;
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
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfigThresholdsCritical& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
