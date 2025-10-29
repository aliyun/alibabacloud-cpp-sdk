// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDSWARNED_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIGTHRESHOLDSWARNED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned(const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned(UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned &&) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& operator=(const UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& operator=(UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholdsWarned& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The threshold expression.
    // 
    // If the template specified by the TemplateCode parameter is about fluctuation, you must use an expression to represent the threshold for fluctuation. Examples:
    // 
    // *   $checkValue > 0.01
    // *   $checkValue < -0.01
    // *   abs($checkValue) > 0.01
    // 
    // If the template specified by the TemplateCode parameter is about fixed value, you can also use an expression to represent the threshold. If you configure the Expression, Operator, and Value parameters for the threshold at the same time, the Expression parameter takes precedence over the Operator and Value parameters.
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
