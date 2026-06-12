// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GenerateServicePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServicePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServicePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    GenerateServicePolicyShrinkRequest() = default ;
    GenerateServicePolicyShrinkRequest(const GenerateServicePolicyShrinkRequest &) = default ;
    GenerateServicePolicyShrinkRequest(GenerateServicePolicyShrinkRequest &&) = default ;
    GenerateServicePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServicePolicyShrinkRequest() = default ;
    GenerateServicePolicyShrinkRequest& operator=(const GenerateServicePolicyShrinkRequest &) = default ;
    GenerateServicePolicyShrinkRequest& operator=(GenerateServicePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationTypes_ == nullptr
        && this->parametersShrink_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr && this->serviceVersion_ == nullptr && this->templateName_ == nullptr
        && this->trialType_ == nullptr; };
    // operationTypes Field Functions 
    bool hasOperationTypes() const { return this->operationTypes_ != nullptr;};
    void deleteOperationTypes() { this->operationTypes_ = nullptr;};
    inline const vector<string> & getOperationTypes() const { DARABONBA_PTR_GET_CONST(operationTypes_, vector<string>) };
    inline vector<string> getOperationTypes() { DARABONBA_PTR_GET(operationTypes_, vector<string>) };
    inline GenerateServicePolicyShrinkRequest& setOperationTypes(const vector<string> & operationTypes) { DARABONBA_PTR_SET_VALUE(operationTypes_, operationTypes) };
    inline GenerateServicePolicyShrinkRequest& setOperationTypes(vector<string> && operationTypes) { DARABONBA_PTR_SET_RVALUE(operationTypes_, operationTypes) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline GenerateServicePolicyShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateServicePolicyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GenerateServicePolicyShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GenerateServicePolicyShrinkRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GenerateServicePolicyShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GenerateServicePolicyShrinkRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The types of operations for which to generate policy information.
    shared_ptr<vector<string>> operationTypes_ {};
    shared_ptr<string> parametersShrink_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The service version.
    shared_ptr<string> serviceVersion_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The trial type. The default value is NotTrial. Valid values:
    // 
    // - Trial: The service supports trial use.
    // 
    // - NotTrial: The service does not support trial use.
    shared_ptr<string> trialType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
