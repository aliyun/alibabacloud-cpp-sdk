// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYREQUEST_HPP_
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
  class GenerateServicePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServicePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServicePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    GenerateServicePolicyRequest() = default ;
    GenerateServicePolicyRequest(const GenerateServicePolicyRequest &) = default ;
    GenerateServicePolicyRequest(GenerateServicePolicyRequest &&) = default ;
    GenerateServicePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServicePolicyRequest() = default ;
    GenerateServicePolicyRequest& operator=(const GenerateServicePolicyRequest &) = default ;
    GenerateServicePolicyRequest& operator=(GenerateServicePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationTypes_ != nullptr
        && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->serviceVersion_ != nullptr && this->templateName_ != nullptr && this->trialType_ != nullptr; };
    // operationTypes Field Functions 
    bool hasOperationTypes() const { return this->operationTypes_ != nullptr;};
    void deleteOperationTypes() { this->operationTypes_ = nullptr;};
    inline const vector<string> & operationTypes() const { DARABONBA_PTR_GET_CONST(operationTypes_, vector<string>) };
    inline vector<string> operationTypes() { DARABONBA_PTR_GET(operationTypes_, vector<string>) };
    inline GenerateServicePolicyRequest& setOperationTypes(const vector<string> & operationTypes) { DARABONBA_PTR_SET_VALUE(operationTypes_, operationTypes) };
    inline GenerateServicePolicyRequest& setOperationTypes(vector<string> && operationTypes) { DARABONBA_PTR_SET_RVALUE(operationTypes_, operationTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateServicePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GenerateServicePolicyRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GenerateServicePolicyRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GenerateServicePolicyRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GenerateServicePolicyRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The type of operation N for which you want to generate the policy information.
    // 
    // Valid values:
    // 
    // *   CreateServiceInstance: creates a serviceInstance by calling the CreateServiceInstance operation.
    // *   UpdateServiceInstance: updates a serviceInstance by calling the UpdateServiceInstance operation.
    // *   DeleteServiceInstance: deletes a serviceInstance by calling the DeleteServiceInstance operation.
    // 
    // >  The default value is the combination of all valid values.
    std::shared_ptr<vector<string>> operationTypes_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
