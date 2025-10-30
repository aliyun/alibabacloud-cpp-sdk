// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVpcEndpointRequestTag.hpp>
#include <alibabacloud/models/CreateVpcEndpointRequestZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(ProtectedEnabled, protectedEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(ProtectedEnabled, protectedEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_FROM_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    CreateVpcEndpointRequest() = default ;
    CreateVpcEndpointRequest(const CreateVpcEndpointRequest &) = default ;
    CreateVpcEndpointRequest(CreateVpcEndpointRequest &&) = default ;
    CreateVpcEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointRequest() = default ;
    CreateVpcEndpointRequest& operator=(const CreateVpcEndpointRequest &) = default ;
    CreateVpcEndpointRequest& operator=(CreateVpcEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->endpointDescription_ == nullptr && return this->endpointName_ == nullptr && return this->endpointType_ == nullptr
        && return this->policyDocument_ == nullptr && return this->protectedEnabled_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->tag_ == nullptr && return this->vpcId_ == nullptr && return this->zone_ == nullptr
        && return this->zoneAffinityEnabled_ == nullptr && return this->zonePrivateIpAddressCount_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcEndpointRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string endpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline CreateVpcEndpointRequest& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline CreateVpcEndpointRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateVpcEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreateVpcEndpointRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // protectedEnabled Field Functions 
    bool hasProtectedEnabled() const { return this->protectedEnabled_ != nullptr;};
    void deleteProtectedEnabled() { this->protectedEnabled_ = nullptr;};
    inline bool protectedEnabled() const { DARABONBA_PTR_GET_DEFAULT(protectedEnabled_, false) };
    inline CreateVpcEndpointRequest& setProtectedEnabled(bool protectedEnabled) { DARABONBA_PTR_SET_VALUE(protectedEnabled_, protectedEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline CreateVpcEndpointRequest& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateVpcEndpointRequest& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateVpcEndpointRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcEndpointRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcEndpointRequestTag>) };
    inline vector<CreateVpcEndpointRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcEndpointRequestTag>) };
    inline CreateVpcEndpointRequest& setTag(const vector<CreateVpcEndpointRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcEndpointRequest& setTag(vector<CreateVpcEndpointRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<CreateVpcEndpointRequestZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<CreateVpcEndpointRequestZone>) };
    inline vector<CreateVpcEndpointRequestZone> zone() { DARABONBA_PTR_GET(zone_, vector<CreateVpcEndpointRequestZone>) };
    inline CreateVpcEndpointRequest& setZone(const vector<CreateVpcEndpointRequestZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline CreateVpcEndpointRequest& setZone(vector<CreateVpcEndpointRequestZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zonePrivateIpAddressCount Field Functions 
    bool hasZonePrivateIpAddressCount() const { return this->zonePrivateIpAddressCount_ != nullptr;};
    void deleteZonePrivateIpAddressCount() { this->zonePrivateIpAddressCount_ = nullptr;};
    inline int64_t zonePrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(zonePrivateIpAddressCount_, 0L) };
    inline CreateVpcEndpointRequest& setZonePrivateIpAddressCount(int64_t zonePrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(zonePrivateIpAddressCount_, zonePrivateIpAddressCount) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **DualStack**
    // 
    // >  An endpoint supports dual-stack if its associated endpoint service and VPC both support dual-stack.
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The description of the endpoint.
    // 
    // The description must be 2 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> endpointDescription_ = nullptr;
    // The name of the endpoint.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The endpoint type. Valid values:
    // 
    // *   **Interface** You can specify an Application Load Balancer (ALB) instance, a Classic Load Balancer (CLB) instance, or a Network Load Balancer (NLB) instance.
    // *   **Reverse** You can specify a Virtual Private Cloud (VPC) NAT gateway.
    // 
    // >  Services that support reverse endpoints are provided by Alibaba Cloud or Alibaba Cloud partners. To create such a service on your own, contact your account manager.
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> policyDocument_ = nullptr;
    // Specifies whether to enable user authentication. This parameter is available in Security Token Service (STS) mode. Valid values:
    // 
    // *   **true**: enables user authentication. After user authentication is enabled, only the user who creates the endpoint can modify or delete the endpoint in STS mode.
    // *   **false** (default): disables user authentication.
    std::shared_ptr<bool> protectedEnabled_ = nullptr;
    // The region ID of the endpoint.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of security groups that are associated with the endpoint elastic network interface (ENI).
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
    // The ID of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The tags to add to the resource.
    std::shared_ptr<vector<CreateVpcEndpointRequestTag>> tag_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zones where the endpoint is deployed.
    std::shared_ptr<vector<CreateVpcEndpointRequestZone>> zone_ = nullptr;
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
    // The number of private IP addresses that are assigned to an elastic network interface (ENI) in each zone. Set the value to **1**.
    std::shared_ptr<int64_t> zonePrivateIpAddressCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
