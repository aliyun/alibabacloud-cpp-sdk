// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobConfigResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobConfigResponseBodyParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobConfigResponseBodyParameters& obj) { 
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
    DescribeDtsJobConfigResponseBodyParameters() = default ;
    DescribeDtsJobConfigResponseBodyParameters(const DescribeDtsJobConfigResponseBodyParameters &) = default ;
    DescribeDtsJobConfigResponseBodyParameters(DescribeDtsJobConfigResponseBodyParameters &&) = default ;
    DescribeDtsJobConfigResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobConfigResponseBodyParameters() = default ;
    DescribeDtsJobConfigResponseBodyParameters& operator=(const DescribeDtsJobConfigResponseBodyParameters &) = default ;
    DescribeDtsJobConfigResponseBodyParameters& operator=(DescribeDtsJobConfigResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingCode_ == nullptr
        && return this->defaultValue_ == nullptr && return this->description_ == nullptr && return this->forceRestart_ == nullptr && return this->modifiable_ == nullptr && return this->module_ == nullptr
        && return this->name_ == nullptr && return this->recommendValue_ == nullptr && return this->runningValue_ == nullptr && return this->valueType_ == nullptr; };
    // checkingCode Field Functions 
    bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
    void deleteCheckingCode() { this->checkingCode_ = nullptr;};
    inline string checkingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forceRestart Field Functions 
    bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
    void deleteForceRestart() { this->forceRestart_ = nullptr;};
    inline string forceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


    // modifiable Field Functions 
    bool hasModifiable() const { return this->modifiable_ != nullptr;};
    void deleteModifiable() { this->modifiable_ = nullptr;};
    inline string modifiable() const { DARABONBA_PTR_GET_DEFAULT(modifiable_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setModifiable(string modifiable) { DARABONBA_PTR_SET_VALUE(modifiable_, modifiable) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendValue Field Functions 
    bool hasRecommendValue() const { return this->recommendValue_ != nullptr;};
    void deleteRecommendValue() { this->recommendValue_ = nullptr;};
    inline string recommendValue() const { DARABONBA_PTR_GET_DEFAULT(recommendValue_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setRecommendValue(string recommendValue) { DARABONBA_PTR_SET_VALUE(recommendValue_, recommendValue) };


    // runningValue Field Functions 
    bool hasRunningValue() const { return this->runningValue_ != nullptr;};
    void deleteRunningValue() { this->runningValue_ = nullptr;};
    inline string runningValue() const { DARABONBA_PTR_GET_DEFAULT(runningValue_, "") };
    inline DescribeDtsJobConfigResponseBodyParameters& setRunningValue(string runningValue) { DARABONBA_PTR_SET_VALUE(runningValue_, runningValue) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline int32_t valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
    inline DescribeDtsJobConfigResponseBodyParameters& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> checkingCode_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> forceRestart_ = nullptr;
    std::shared_ptr<string> modifiable_ = nullptr;
    std::shared_ptr<string> module_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recommendValue_ = nullptr;
    std::shared_ptr<string> runningValue_ = nullptr;
    std::shared_ptr<int32_t> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
