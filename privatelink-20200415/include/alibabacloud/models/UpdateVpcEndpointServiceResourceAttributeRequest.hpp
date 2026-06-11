// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICERESOURCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICERESOURCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class UpdateVpcEndpointServiceResourceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointServiceResourceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAllocatedEnabled, autoAllocatedEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointServiceResourceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAllocatedEnabled, autoAllocatedEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateVpcEndpointServiceResourceAttributeRequest() = default ;
    UpdateVpcEndpointServiceResourceAttributeRequest(const UpdateVpcEndpointServiceResourceAttributeRequest &) = default ;
    UpdateVpcEndpointServiceResourceAttributeRequest(UpdateVpcEndpointServiceResourceAttributeRequest &&) = default ;
    UpdateVpcEndpointServiceResourceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcEndpointServiceResourceAttributeRequest() = default ;
    UpdateVpcEndpointServiceResourceAttributeRequest& operator=(const UpdateVpcEndpointServiceResourceAttributeRequest &) = default ;
    UpdateVpcEndpointServiceResourceAttributeRequest& operator=(UpdateVpcEndpointServiceResourceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAllocatedEnabled_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->serviceId_ == nullptr
        && this->zoneId_ == nullptr; };
    // autoAllocatedEnabled Field Functions 
    bool hasAutoAllocatedEnabled() const { return this->autoAllocatedEnabled_ != nullptr;};
    void deleteAutoAllocatedEnabled() { this->autoAllocatedEnabled_ = nullptr;};
    inline bool getAutoAllocatedEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAllocatedEnabled_, false) };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setAutoAllocatedEnabled(bool autoAllocatedEnabled) { DARABONBA_PTR_SET_VALUE(autoAllocatedEnabled_, autoAllocatedEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateVpcEndpointServiceResourceAttributeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable automatic resource allocation. Valid values:
    // 
    // - **true**: Enables automatic resource allocation.
    // 
    // - **false**: Disables automatic resource allocation.
    // 
    // This parameter is required.
    shared_ptr<bool> autoAllocatedEnabled_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure that the value is unique among different requests. **ClientToken** can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: sends a check request without modifying the properties of the service resource. The system checks the required parameters, request format, and service limits. If the request fails the check, an error is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): sends a normal request. After the request passes the check, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the region where you want to modify the service resource.
    // 
    // Call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the service resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The ID of the endpoint service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The zone where the service resource is located. This parameter is required if the service resource is an Application Load Balancer (ALB), a Network Load Balancer (NLB), or a Gateway Load Balancer (GWLB).
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
