// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVpcEndpointServiceRequestResource.hpp>
#include <alibabacloud/models/CreateVpcEndpointServiceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    CreateVpcEndpointServiceRequest() = default ;
    CreateVpcEndpointServiceRequest(const CreateVpcEndpointServiceRequest &) = default ;
    CreateVpcEndpointServiceRequest(CreateVpcEndpointServiceRequest &&) = default ;
    CreateVpcEndpointServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointServiceRequest() = default ;
    CreateVpcEndpointServiceRequest& operator=(const CreateVpcEndpointServiceRequest &) = default ;
    CreateVpcEndpointServiceRequest& operator=(CreateVpcEndpointServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->payer_ == nullptr && return this->regionId_ == nullptr
        && return this->resource_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceDescription_ == nullptr && return this->serviceResourceType_ == nullptr && return this->serviceSupportIPv6_ == nullptr
        && return this->tag_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointServiceRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline CreateVpcEndpointServiceRequest& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcEndpointServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcEndpointServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string payer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline CreateVpcEndpointServiceRequest& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcEndpointServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<CreateVpcEndpointServiceRequestResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<CreateVpcEndpointServiceRequestResource>) };
    inline vector<CreateVpcEndpointServiceRequestResource> resource() { DARABONBA_PTR_GET(resource_, vector<CreateVpcEndpointServiceRequestResource>) };
    inline CreateVpcEndpointServiceRequest& setResource(const vector<CreateVpcEndpointServiceRequestResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateVpcEndpointServiceRequest& setResource(vector<CreateVpcEndpointServiceRequestResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointServiceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline CreateVpcEndpointServiceRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string serviceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline CreateVpcEndpointServiceRequest& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline CreateVpcEndpointServiceRequest& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcEndpointServiceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcEndpointServiceRequestTag>) };
    inline vector<CreateVpcEndpointServiceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcEndpointServiceRequestTag>) };
    inline CreateVpcEndpointServiceRequest& setTag(const vector<CreateVpcEndpointServiceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcEndpointServiceRequest& setTag(vector<CreateVpcEndpointServiceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointServiceRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **DualStack**
    // 
    // >  You can set the protocol to DualStack only for endpoint services whose backend resource type is NLB. An endpoint service supports dual-stack only if its backend resources support dual-stack.
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Specifies whether to automatically accept endpoint connection requests. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request.
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The payer. Valid values:
    // 
    // *   **Endpoint**: service consumer
    // *   **EndpointService**: service provider
    std::shared_ptr<string> payer_ = nullptr;
    // The region ID of the endpoint service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service resources of the endpoint service. You can create at most 10 resources. After the resource is created, you can continue to add service resources to the endpoint.
    std::shared_ptr<vector<CreateVpcEndpointServiceRequestResource>> resource_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The description of the endpoint service.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: Classic Load Balancer (CLB) instance
    // *   **alb**: Application Load Balancer (ALB) instance
    // *   **nlb**: Network Load Balancer (NLB) instance
    // 
    // >  You cannot access TCP/SSL listeners configured for NLB instances.
    std::shared_ptr<string> serviceResourceType_ = nullptr;
    // Specifies whether to enable IPv6 for the endpoint service. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // The tags to add to the resource.
    std::shared_ptr<vector<CreateVpcEndpointServiceRequestTag>> tag_ = nullptr;
    // Specifies whether to first resolve the domain name of the nearest endpoint that is associated with the endpoint service. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
