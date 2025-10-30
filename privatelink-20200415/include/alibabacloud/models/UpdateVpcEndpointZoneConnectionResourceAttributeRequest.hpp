// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTZONECONNECTIONRESOURCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTZONECONNECTIONRESOURCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class UpdateVpcEndpointZoneConnectionResourceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointZoneConnectionResourceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceAllocateMode, resourceAllocateMode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceReplaceMode, resourceReplaceMode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointZoneConnectionResourceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceAllocateMode, resourceAllocateMode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceReplaceMode, resourceReplaceMode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest() = default ;
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &) = default ;
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest(UpdateVpcEndpointZoneConnectionResourceAttributeRequest &&) = default ;
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcEndpointZoneConnectionResourceAttributeRequest() = default ;
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest& operator=(const UpdateVpcEndpointZoneConnectionResourceAttributeRequest &) = default ;
    UpdateVpcEndpointZoneConnectionResourceAttributeRequest& operator=(UpdateVpcEndpointZoneConnectionResourceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dryRun_ == nullptr && return this->endpointId_ == nullptr && return this->regionId_ == nullptr && return this->resourceAllocateMode_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceReplaceMode_ == nullptr && return this->resourceType_ == nullptr && return this->serviceId_ == nullptr && return this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAllocateMode Field Functions 
    bool hasResourceAllocateMode() const { return this->resourceAllocateMode_ != nullptr;};
    void deleteResourceAllocateMode() { this->resourceAllocateMode_ = nullptr;};
    inline string resourceAllocateMode() const { DARABONBA_PTR_GET_DEFAULT(resourceAllocateMode_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setResourceAllocateMode(string resourceAllocateMode) { DARABONBA_PTR_SET_VALUE(resourceAllocateMode_, resourceAllocateMode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceReplaceMode Field Functions 
    bool hasResourceReplaceMode() const { return this->resourceReplaceMode_ != nullptr;};
    void deleteResourceReplaceMode() { this->resourceReplaceMode_ = nullptr;};
    inline string resourceReplaceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceReplaceMode_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setResourceReplaceMode(string resourceReplaceMode) { DARABONBA_PTR_SET_VALUE(resourceReplaceMode_, resourceReplaceMode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateVpcEndpointZoneConnectionResourceAttributeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The endpoint ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The region ID of the endpoint connection whose bandwidth you want to modify.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource allocation mode. You can change the resource allocation mode only if the endpoint connection is in the **Disconnected** state. Valid values:
    // 
    // *   **Auto**: automatically and randomly allocates service resources. In this mode, the specified service resource is deleted.
    // *   **Manual**: manually allocates service resources. If you set the value to Manual, you must also specify the **ResourceId** and **ResourceType** parameters.
    std::shared_ptr<string> resourceAllocateMode_ = nullptr;
    // The ID of the service resource that you want to manually allocate or migrate in the zone where the endpoint connection is deployed.
    // 
    // > If **ResourceAllocateMode** is set to **Mannual**, or **ResourceReplaceMode** is set, this parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The migration mode of the service resource. Valid values:
    // 
    // *   **Graceful**: smooth migration. Service resources in the zone are smoothly migrated.
    // *   **Force**: forced migration. Service resources in the zone are forcefully migrated.
    // 
    // >  You need to specify this parameter only if you want to migrate service resources and the endpoint connection is in the **Connected** state. If you specify this parameter, you must also specify the **ResourceId** and **ResourceType** parameters.
    std::shared_ptr<string> resourceReplaceMode_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: a CLB instance that supports PrivateLink. In addition, the CLB instance is deployed in a VPC.
    // *   **alb**: an Application Load Balancer (ALB) instance that supports PrivateLink. In addition, the ALB instance is deployed in a VPC.
    // 
    // > If **ResourceAllocateMode** is set to **Mannual**, or **ResourceReplaceMode** is set, this parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The endpoint service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The zone ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
