// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATORVARIABLEEXTRACTORMAPPINGVALUE_HPP_
#define ALIBABACLOUD_MODELS_EVALUATORVARIABLEEXTRACTORMAPPINGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class EvaluatorVariableExtractorMappingValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatorVariableExtractorMappingValue& obj) { 
      DARABONBA_PTR_TO_JSON(originField, originField_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatorVariableExtractorMappingValue& obj) { 
      DARABONBA_PTR_FROM_JSON(originField, originField_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
    };
    EvaluatorVariableExtractorMappingValue() = default ;
    EvaluatorVariableExtractorMappingValue(const EvaluatorVariableExtractorMappingValue &) = default ;
    EvaluatorVariableExtractorMappingValue(EvaluatorVariableExtractorMappingValue &&) = default ;
    EvaluatorVariableExtractorMappingValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatorVariableExtractorMappingValue() = default ;
    EvaluatorVariableExtractorMappingValue& operator=(const EvaluatorVariableExtractorMappingValue &) = default ;
    EvaluatorVariableExtractorMappingValue& operator=(EvaluatorVariableExtractorMappingValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originField_ == nullptr
        && this->type_ == nullptr && this->expression_ == nullptr; };
    // originField Field Functions 
    bool hasOriginField() const { return this->originField_ != nullptr;};
    void deleteOriginField() { this->originField_ = nullptr;};
    inline string getOriginField() const { DARABONBA_PTR_GET_DEFAULT(originField_, "") };
    inline EvaluatorVariableExtractorMappingValue& setOriginField(string originField) { DARABONBA_PTR_SET_VALUE(originField_, originField) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline EvaluatorVariableExtractorMappingValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline EvaluatorVariableExtractorMappingValue& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


  protected:
    // The evaluation data field from which content is extracted. The extraction expression is applied to the content of this field. Required when saving with the evaluation task. For the trial run API, this parameter can be omitted and the backend derives it from the expression. Multiple variables can share the same source field.
    shared_ptr<string> originField_ {};
    // The extraction method. jsonpath extracts values from the JSON content of the field by using JSONPath. regex performs regular expression matching on the full text of the field. When capturing groups are present, the first capturing group is returned. When no capturing group is present, the entire match is returned.
    shared_ptr<string> type_ {};
    // The extraction expression. Its meaning is determined by type. When type is jsonpath, specify a JSONPath expression. You can use either a relative path relative to originField (such as $.order.expected) or an absolute path from the root (such as $trace.output.order.expected). When type is regex, specify a regular expression. Note that backslashes must be escaped in JSON. The expression syntax is validated upon saving. For regular expressions, RE2 compatibility is additionally validated. Patterns such as lookahead assertions, lookbehind assertions, backreferences, named groups, atomic groups, and possessive quantifiers are rejected.
    shared_ptr<string> expression_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
