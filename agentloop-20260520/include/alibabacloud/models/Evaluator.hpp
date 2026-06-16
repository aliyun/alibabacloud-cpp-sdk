// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#define ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#include <darabonba/Core.hpp>
#include <map>
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
        && this->type_ == nullptr && this->variableMapping_ == nullptr; };
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


    // variableMapping Field Functions 
    bool hasVariableMapping() const { return this->variableMapping_ != nullptr;};
    void deleteVariableMapping() { this->variableMapping_ = nullptr;};
    inline const map<string, string> & getVariableMapping() const { DARABONBA_PTR_GET_CONST(variableMapping_, map<string, string>) };
    inline map<string, string> getVariableMapping() { DARABONBA_PTR_GET(variableMapping_, map<string, string>) };
    inline Evaluator& setVariableMapping(const map<string, string> & variableMapping) { DARABONBA_PTR_SET_VALUE(variableMapping_, variableMapping) };
    inline Evaluator& setVariableMapping(map<string, string> && variableMapping) { DARABONBA_PTR_SET_RVALUE(variableMapping_, variableMapping) };


  protected:
    Darabonba::Json config_ {};
    shared_ptr<string> evaluatorRef_ {};
    Darabonba::Json filters_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> resultName_ {};
    shared_ptr<string> resultType_ {};
    shared_ptr<string> type_ {};
    shared_ptr<map<string, string>> variableMapping_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
