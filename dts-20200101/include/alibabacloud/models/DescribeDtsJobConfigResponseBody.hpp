// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDtsJobConfigResponseBody() = default ;
    DescribeDtsJobConfigResponseBody(const DescribeDtsJobConfigResponseBody &) = default ;
    DescribeDtsJobConfigResponseBody(DescribeDtsJobConfigResponseBody &&) = default ;
    DescribeDtsJobConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobConfigResponseBody() = default ;
    DescribeDtsJobConfigResponseBody& operator=(const DescribeDtsJobConfigResponseBody &) = default ;
    DescribeDtsJobConfigResponseBody& operator=(DescribeDtsJobConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_TO_JSON(Modifiable, modifiable_);
        DARABONBA_PTR_TO_JSON(Module, module_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RecommendValue, recommendValue_);
        DARABONBA_PTR_TO_JSON(RunningValue, runningValue_);
        DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
        DARABONBA_PTR_FROM_JSON(Modifiable, modifiable_);
        DARABONBA_PTR_FROM_JSON(Module, module_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RecommendValue, recommendValue_);
        DARABONBA_PTR_FROM_JSON(RunningValue, runningValue_);
        DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->forceRestart_ == nullptr && this->modifiable_ == nullptr && this->module_ == nullptr
        && this->name_ == nullptr && this->recommendValue_ == nullptr && this->runningValue_ == nullptr && this->valueType_ == nullptr; };
      // checkingCode Field Functions 
      bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
      void deleteCheckingCode() { this->checkingCode_ = nullptr;};
      inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
      inline Parameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline Parameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Parameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // forceRestart Field Functions 
      bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
      void deleteForceRestart() { this->forceRestart_ = nullptr;};
      inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
      inline Parameters& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


      // modifiable Field Functions 
      bool hasModifiable() const { return this->modifiable_ != nullptr;};
      void deleteModifiable() { this->modifiable_ = nullptr;};
      inline string getModifiable() const { DARABONBA_PTR_GET_DEFAULT(modifiable_, "") };
      inline Parameters& setModifiable(string modifiable) { DARABONBA_PTR_SET_VALUE(modifiable_, modifiable) };


      // module Field Functions 
      bool hasModule() const { return this->module_ != nullptr;};
      void deleteModule() { this->module_ = nullptr;};
      inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
      inline Parameters& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // recommendValue Field Functions 
      bool hasRecommendValue() const { return this->recommendValue_ != nullptr;};
      void deleteRecommendValue() { this->recommendValue_ = nullptr;};
      inline string getRecommendValue() const { DARABONBA_PTR_GET_DEFAULT(recommendValue_, "") };
      inline Parameters& setRecommendValue(string recommendValue) { DARABONBA_PTR_SET_VALUE(recommendValue_, recommendValue) };


      // runningValue Field Functions 
      bool hasRunningValue() const { return this->runningValue_ != nullptr;};
      void deleteRunningValue() { this->runningValue_ = nullptr;};
      inline string getRunningValue() const { DARABONBA_PTR_GET_DEFAULT(runningValue_, "") };
      inline Parameters& setRunningValue(string runningValue) { DARABONBA_PTR_SET_VALUE(runningValue_, runningValue) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline int32_t getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
      inline Parameters& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    protected:
      shared_ptr<string> checkingCode_ {};
      shared_ptr<string> defaultValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> forceRestart_ {};
      shared_ptr<string> modifiable_ {};
      shared_ptr<string> module_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> recommendValue_ {};
      shared_ptr<string> runningValue_ {};
      shared_ptr<int32_t> valueType_ {};
    };

    virtual bool empty() const override { return this->parameters_ == nullptr
        && this->requestId_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeDtsJobConfigResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeDtsJobConfigResponseBody::Parameters>) };
    inline vector<DescribeDtsJobConfigResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeDtsJobConfigResponseBody::Parameters>) };
    inline DescribeDtsJobConfigResponseBody& setParameters(const vector<DescribeDtsJobConfigResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeDtsJobConfigResponseBody& setParameters(vector<DescribeDtsJobConfigResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsJobConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDtsJobConfigResponseBody::Parameters>> parameters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
