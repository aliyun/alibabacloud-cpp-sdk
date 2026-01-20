// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#define ALIBABACLOUD_MODELS_EVALUATOR_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Evaluator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Evaluator& obj) { 
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataScope, dataScope_);
      DARABONBA_PTR_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resultName, resultName_);
      DARABONBA_PTR_TO_JSON(resultType, resultType_);
      DARABONBA_PTR_TO_JSON(variableMapping, variableMapping_);
    };
    friend void from_json(const Darabonba::Json& j, Evaluator& obj) { 
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataScope, dataScope_);
      DARABONBA_PTR_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resultName, resultName_);
      DARABONBA_PTR_FROM_JSON(resultType, resultType_);
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
        && this->dataScope_ == nullptr && this->filters_ == nullptr && this->name_ == nullptr && this->resultName_ == nullptr && this->resultType_ == nullptr
        && this->variableMapping_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline Evaluator& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline Evaluator& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // dataScope Field Functions 
    bool hasDataScope() const { return this->dataScope_ != nullptr;};
    void deleteDataScope() { this->dataScope_ = nullptr;};
    inline string getDataScope() const { DARABONBA_PTR_GET_DEFAULT(dataScope_, "") };
    inline Evaluator& setDataScope(string dataScope) { DARABONBA_PTR_SET_VALUE(dataScope_, dataScope) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const map<string, string> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, map<string, string>) };
    inline map<string, string> getFilters() { DARABONBA_PTR_GET(filters_, map<string, string>) };
    inline Evaluator& setFilters(const map<string, string> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline Evaluator& setFilters(map<string, string> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


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


    // variableMapping Field Functions 
    bool hasVariableMapping() const { return this->variableMapping_ != nullptr;};
    void deleteVariableMapping() { this->variableMapping_ = nullptr;};
    inline const map<string, string> & getVariableMapping() const { DARABONBA_PTR_GET_CONST(variableMapping_, map<string, string>) };
    inline map<string, string> getVariableMapping() { DARABONBA_PTR_GET(variableMapping_, map<string, string>) };
    inline Evaluator& setVariableMapping(const map<string, string> & variableMapping) { DARABONBA_PTR_SET_VALUE(variableMapping_, variableMapping) };
    inline Evaluator& setVariableMapping(map<string, string> && variableMapping) { DARABONBA_PTR_SET_RVALUE(variableMapping_, variableMapping) };


  protected:
    Darabonba::Json config_ {};
    shared_ptr<string> dataScope_ {};
    shared_ptr<map<string, string>> filters_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> resultName_ {};
    shared_ptr<string> resultType_ {};
    shared_ptr<map<string, string>> variableMapping_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
