// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServiceInstanceRequestCommodity.hpp>
#include <alibabacloud/models/CreateServiceInstanceRequestOperationMetadata.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceAutoPay, resourceAutoPay_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceAutoPay, resourceAutoPay_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    CreateServiceInstanceRequest() = default ;
    CreateServiceInstanceRequest(const CreateServiceInstanceRequest &) = default ;
    CreateServiceInstanceRequest(CreateServiceInstanceRequest &&) = default ;
    CreateServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceRequest() = default ;
    CreateServiceInstanceRequest& operator=(const CreateServiceInstanceRequest &) = default ;
    CreateServiceInstanceRequest& operator=(CreateServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->commodity_ != nullptr && this->contactGroup_ != nullptr && this->dryRun_ != nullptr && this->enableInstanceOps_ != nullptr && this->enableUserPrometheus_ != nullptr
        && this->name_ != nullptr && this->operationMetadata_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr && this->resourceAutoPay_ != nullptr
        && this->resourceGroupId_ != nullptr && this->serviceId_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceVersion_ != nullptr && this->specificationCode_ != nullptr
        && this->specificationName_ != nullptr && this->tag_ != nullptr && this->templateName_ != nullptr && this->trialType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const CreateServiceInstanceRequestCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, CreateServiceInstanceRequestCommodity) };
    inline CreateServiceInstanceRequestCommodity commodity() { DARABONBA_PTR_GET(commodity_, CreateServiceInstanceRequestCommodity) };
    inline CreateServiceInstanceRequest& setCommodity(const CreateServiceInstanceRequestCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline CreateServiceInstanceRequest& setCommodity(CreateServiceInstanceRequestCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline string contactGroup() const { DARABONBA_PTR_GET_DEFAULT(contactGroup_, "") };
    inline CreateServiceInstanceRequest& setContactGroup(string contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServiceInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableInstanceOps Field Functions 
    bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
    void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
    inline bool enableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
    inline CreateServiceInstanceRequest& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool enableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline CreateServiceInstanceRequest& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline const CreateServiceInstanceRequestOperationMetadata & operationMetadata() const { DARABONBA_PTR_GET_CONST(operationMetadata_, CreateServiceInstanceRequestOperationMetadata) };
    inline CreateServiceInstanceRequestOperationMetadata operationMetadata() { DARABONBA_PTR_GET(operationMetadata_, CreateServiceInstanceRequestOperationMetadata) };
    inline CreateServiceInstanceRequest& setOperationMetadata(const CreateServiceInstanceRequestOperationMetadata & operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };
    inline CreateServiceInstanceRequest& setOperationMetadata(CreateServiceInstanceRequestOperationMetadata && operationMetadata) { DARABONBA_PTR_SET_RVALUE(operationMetadata_, operationMetadata) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline CreateServiceInstanceRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline CreateServiceInstanceRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAutoPay Field Functions 
    bool hasResourceAutoPay() const { return this->resourceAutoPay_ != nullptr;};
    void deleteResourceAutoPay() { this->resourceAutoPay_ = nullptr;};
    inline bool resourceAutoPay() const { DARABONBA_PTR_GET_DEFAULT(resourceAutoPay_, false) };
    inline CreateServiceInstanceRequest& setResourceAutoPay(bool resourceAutoPay) { DARABONBA_PTR_SET_VALUE(resourceAutoPay_, resourceAutoPay) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServiceInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceInstanceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline CreateServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline CreateServiceInstanceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // specificationCode Field Functions 
    bool hasSpecificationCode() const { return this->specificationCode_ != nullptr;};
    void deleteSpecificationCode() { this->specificationCode_ = nullptr;};
    inline string specificationCode() const { DARABONBA_PTR_GET_DEFAULT(specificationCode_, "") };
    inline CreateServiceInstanceRequest& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline CreateServiceInstanceRequest& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServiceInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServiceInstanceRequestTag>) };
    inline vector<CreateServiceInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateServiceInstanceRequestTag>) };
    inline CreateServiceInstanceRequest& setTag(const vector<CreateServiceInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServiceInstanceRequest& setTag(vector<CreateServiceInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateServiceInstanceRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline CreateServiceInstanceRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The information about the order placed in Alibaba Cloud Marketplace. You do not need to specify this parameter if the service is not published in Alibaba Cloud Marketplace or uses the pay-as-you-go billing method.
    std::shared_ptr<CreateServiceInstanceRequestCommodity> commodity_ = nullptr;
    // The alert contact group.
    std::shared_ptr<string> contactGroup_ = nullptr;
    // Specifies whether to perform only a dry run for the request to check information such as the permissions and instance status. Valid values:
    // 
    // *   **true**: performs a dry run for the request, but does not create a service instance.
    // *   **false**: performs a dry run for the request, and creates a service instance if the request passes the dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether the service instance supports the hosted O\\&M feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableInstanceOps_ = nullptr;
    // Specifies whether to enable the Prometheus monitoring feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableUserPrometheus_ = nullptr;
    // The serviceInstance name.
    std::shared_ptr<string> name_ = nullptr;
    // The operation metadata.
    std::shared_ptr<CreateServiceInstanceRequestOperationMetadata> operationMetadata_ = nullptr;
    // The parameters that the customer specifies to deploy the service instance.
    // 
    // >  If region information is required to create a service instance, you must specify the region ID in the value of Parameters.
    Darabonba::Json parameters_ = nullptr;
    // The region ID. Valid values:
    // 
    // *   cn-hangzhou: China (Hangzhou).
    // *   ap-southeast-1: Singapore.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to automatically deduct the resource fees from the account balance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> resourceAutoPay_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The trial service instance id witch you want to convert to formal
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // Specification code.
    std::shared_ptr<string> specificationCode_ = nullptr;
    // The package name.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateServiceInstanceRequestTag>> tag_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The trial type of the service instance. Valid values:
    // 
    // *   **Trial**: Trials are supported.
    // *   **NotTrial**: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
