// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#define ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EvaluatorVariableExtractorMappingValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class Evaluator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Evaluator& obj) { 
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(evaluatorRef, evaluatorRef_);
      DARABONBA_ANY_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resultName, resultName_);
      DARABONBA_PTR_TO_JSON(resultType, resultType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(variableExtractorMapping, variableExtractorMapping_);
      DARABONBA_PTR_TO_JSON(variableMapping, variableMapping_);
    };
    friend void from_json(const Darabonba::Json& j, Evaluator& obj) { 
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(evaluatorRef, evaluatorRef_);
      DARABONBA_ANY_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resultName, resultName_);
      DARABONBA_PTR_FROM_JSON(resultType, resultType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(variableExtractorMapping, variableExtractorMapping_);
      DARABONBA_PTR_FROM_JSON(variableMapping, variableMapping_);
    };
    Evaluator() = default ;
    Evaluator(const Evaluator &) = default ;
    Evaluator(Evaluator &&) = default ;
    Evaluator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Evaluator() = default ;
    Evaluator& operator=(const Evaluator &) = default ;
    Evaluator& operator=(Evaluator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->evaluatorRef_ == nullptr && this->filters_ == nullptr && this->name_ == nullptr && this->resultName_ == nullptr && this->resultType_ == nullptr
        && this->type_ == nullptr && this->variableExtractorMapping_ == nullptr && this->variableMapping_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline Evaluator& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline Evaluator& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // evaluatorRef Field Functions 
    bool hasEvaluatorRef() const { return this->evaluatorRef_ != nullptr;};
    void deleteEvaluatorRef() { this->evaluatorRef_ = nullptr;};
    inline string getEvaluatorRef() const { DARABONBA_PTR_GET_DEFAULT(evaluatorRef_, "") };
    inline Evaluator& setEvaluatorRef(string evaluatorRef) { DARABONBA_PTR_SET_VALUE(evaluatorRef_, evaluatorRef) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline     const Darabonba::Json & getFilters() const { DARABONBA_GET(filters_) };
    Darabonba::Json & getFilters() { DARABONBA_GET(filters_) };
    inline Evaluator& setFilters(const Darabonba::Json & filters) { DARABONBA_SET_VALUE(filters_, filters) };
    inline Evaluator& setFilters(Darabonba::Json && filters) { DARABONBA_SET_RVALUE(filters_, filters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Evaluator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resultName Field Functions 
    bool hasResultName() const { return this->resultName_ != nullptr;};
    void deleteResultName() { this->resultName_ = nullptr;};
    inline string getResultName() const { DARABONBA_PTR_GET_DEFAULT(resultName_, "") };
    inline Evaluator& setResultName(string resultName) { DARABONBA_PTR_SET_VALUE(resultName_, resultName) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline Evaluator& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Evaluator& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // variableExtractorMapping Field Functions 
    bool hasVariableExtractorMapping() const { return this->variableExtractorMapping_ != nullptr;};
    void deleteVariableExtractorMapping() { this->variableExtractorMapping_ = nullptr;};
    inline const map<string, EvaluatorVariableExtractorMappingValue> & getVariableExtractorMapping() const { DARABONBA_PTR_GET_CONST(variableExtractorMapping_, map<string, EvaluatorVariableExtractorMappingValue>) };
    inline map<string, EvaluatorVariableExtractorMappingValue> getVariableExtractorMapping() { DARABONBA_PTR_GET(variableExtractorMapping_, map<string, EvaluatorVariableExtractorMappingValue>) };
    inline Evaluator& setVariableExtractorMapping(const map<string, EvaluatorVariableExtractorMappingValue> & variableExtractorMapping) { DARABONBA_PTR_SET_VALUE(variableExtractorMapping_, variableExtractorMapping) };
    inline Evaluator& setVariableExtractorMapping(map<string, EvaluatorVariableExtractorMappingValue> && variableExtractorMapping) { DARABONBA_PTR_SET_RVALUE(variableExtractorMapping_, variableExtractorMapping) };


    // variableMapping Field Functions 
    bool hasVariableMapping() const { return this->variableMapping_ != nullptr;};
    void deleteVariableMapping() { this->variableMapping_ = nullptr;};
    inline const map<string, string> & getVariableMapping() const { DARABONBA_PTR_GET_CONST(variableMapping_, map<string, string>) };
    inline map<string, string> getVariableMapping() { DARABONBA_PTR_GET(variableMapping_, map<string, string>) };
    inline Evaluator& setVariableMapping(const map<string, string> & variableMapping) { DARABONBA_PTR_SET_VALUE(variableMapping_, variableMapping) };
    inline Evaluator& setVariableMapping(map<string, string> && variableMapping) { DARABONBA_PTR_SET_RVALUE(variableMapping_, variableMapping) };


  protected:
    // The runtime configuration of the evaluator. For inline LLM evaluators, this must include configurations such as prompt. When referencing an existing evaluator, this parameter is typically not required and should only be specified when runtime parameters such as version need to be set.
    Darabonba::Json config_ {};
    // The reference name of a registered evaluator. When specified, the evaluator definition is loaded by this reference with higher priority. Both built-in evaluators and custom evaluators are supported.
    shared_ptr<string> evaluatorRef_ {};
    // The evaluator-level data filter conditions. These take effect together with the task-level dataFilter.query.
    Darabonba::Json filters_ {};
    // The evaluator name. Required for inline evaluators when evaluatorRef is not specified. The evaluatorRef or name must be unique within the same task.
    shared_ptr<string> name_ {};
    // The field name for the evaluation result. Required for inline evaluators. When referencing an existing evaluator, the metricName defined in the evaluator definition is used if this parameter is not specified.
    shared_ptr<string> resultName_ {};
    // The evaluation result type. Required for inline evaluators. When referencing an existing evaluator, defaults to score if not specified.
    shared_ptr<string> resultType_ {};
    // The evaluator type. Defaults to LLM if not specified. Inline CODE evaluators are not currently supported. For the CODE type, reference a previously created evaluator by using evaluatorRef.
    shared_ptr<string> type_ {};
    // The variable extraction rule mapping that maps evaluator variables to a portion of the content within an evaluation data field. This is applicable when the variable value is not the entire field but a subset of the field content. This parameter shares the same variable name key space as variableMapping. Each variable can use only one of the two. Duplicate configurations cause an error. When referencing an existing evaluator, the variable names must exist in the evaluator definition. Call ListTraceFieldExtractionsPreview to perform a trial run for validation before saving.
    shared_ptr<map<string, EvaluatorVariableExtractorMappingValue>> variableExtractorMapping_ {};
    // The variable mapping that maps evaluator variables to evaluation data fields. Required for LLM/AGENT inline evaluators. When referencing an existing evaluator, the variable names must exist in the evaluator definition.
    shared_ptr<map<string, string>> variableMapping_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
