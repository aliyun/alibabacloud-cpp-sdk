// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
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
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
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
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
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
    class Zone : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zone& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, Zone& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ip, ip_);
      };
      Zone() = default ;
      Zone(const Zone &) = default ;
      Zone(Zone &&) = default ;
      Zone(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zone() = default ;
      Zone& operator=(const Zone &) = default ;
      Zone& operator=(Zone &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipv6Address_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr && this->ip_ == nullptr; };
      // ipv6Address Field Functions 
      bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
      void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
      inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
      inline Zone& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Zone& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Zone& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      // The IPv6 address of the zone where the endpoint is deployed.
      // 
      // >  You can specify this parameter only if AddressIpVersion is set to DualStack.
      shared_ptr<string> ipv6Address_ {};
      // The ID of the vSwitch for which you want to create the endpoint elastic network interface (ENI) in the zone. You can specify up to 10 vSwitches.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone where the endpoint service is deployed.
      // 
      // You can specify up to 10 zones.
      shared_ptr<string> zoneId_ {};
      // The IP address of the zone where the endpoint is deployed.
      shared_ptr<string> ip_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag to add to the resource.
      shared_ptr<string> key_ {};
      // The value of the tag to add to the resource.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->clientToken_ == nullptr && this->crossRegionBandwidth_ == nullptr && this->dryRun_ == nullptr && this->endpointDescription_ == nullptr && this->endpointName_ == nullptr
        && this->endpointType_ == nullptr && this->policyDocument_ == nullptr && this->protectedEnabled_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceRegionId_ == nullptr && this->tag_ == nullptr
        && this->vpcId_ == nullptr && this->zone_ == nullptr && this->zoneAffinityEnabled_ == nullptr && this->zonePrivateIpAddressCount_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionBandwidth Field Functions 
    bool hasCrossRegionBandwidth() const { return this->crossRegionBandwidth_ != nullptr;};
    void deleteCrossRegionBandwidth() { this->crossRegionBandwidth_ = nullptr;};
    inline int32_t getCrossRegionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(crossRegionBandwidth_, 0) };
    inline CreateVpcEndpointRequest& setCrossRegionBandwidth(int32_t crossRegionBandwidth) { DARABONBA_PTR_SET_VALUE(crossRegionBandwidth_, crossRegionBandwidth) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcEndpointRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline CreateVpcEndpointRequest& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline CreateVpcEndpointRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateVpcEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreateVpcEndpointRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // protectedEnabled Field Functions 
    bool hasProtectedEnabled() const { return this->protectedEnabled_ != nullptr;};
    void deleteProtectedEnabled() { this->protectedEnabled_ = nullptr;};
    inline bool getProtectedEnabled() const { DARABONBA_PTR_GET_DEFAULT(protectedEnabled_, false) };
    inline CreateVpcEndpointRequest& setProtectedEnabled(bool protectedEnabled) { DARABONBA_PTR_SET_VALUE(protectedEnabled_, protectedEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline CreateVpcEndpointRequest& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateVpcEndpointRequest& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateVpcEndpointRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline CreateVpcEndpointRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcEndpointRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcEndpointRequest::Tag>) };
    inline vector<CreateVpcEndpointRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcEndpointRequest::Tag>) };
    inline CreateVpcEndpointRequest& setTag(const vector<CreateVpcEndpointRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcEndpointRequest& setTag(vector<CreateVpcEndpointRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<CreateVpcEndpointRequest::Zone> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<CreateVpcEndpointRequest::Zone>) };
    inline vector<CreateVpcEndpointRequest::Zone> getZone() { DARABONBA_PTR_GET(zone_, vector<CreateVpcEndpointRequest::Zone>) };
    inline CreateVpcEndpointRequest& setZone(const vector<CreateVpcEndpointRequest::Zone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline CreateVpcEndpointRequest& setZone(vector<CreateVpcEndpointRequest::Zone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zonePrivateIpAddressCount Field Functions 
    bool hasZonePrivateIpAddressCount() const { return this->zonePrivateIpAddressCount_ != nullptr;};
    void deleteZonePrivateIpAddressCount() { this->zonePrivateIpAddressCount_ = nullptr;};
    inline int64_t getZonePrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(zonePrivateIpAddressCount_, 0L) };
    inline CreateVpcEndpointRequest& setZonePrivateIpAddressCount(int64_t zonePrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(zonePrivateIpAddressCount_, zonePrivateIpAddressCount) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **DualStack**
    // 
    // >  An endpoint supports dual-stack if its associated endpoint service and VPC both support dual-stack.
    shared_ptr<string> addressIpVersion_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    shared_ptr<int32_t> crossRegionBandwidth_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The description of the endpoint.
    // 
    // The description must be 2 to 256 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> endpointDescription_ {};
    // The name of the endpoint.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> endpointName_ {};
    // The endpoint type. Valid values:
    // 
    // *   **Interface** You can specify an Application Load Balancer (ALB) instance, a Classic Load Balancer (CLB) instance, or a Network Load Balancer (NLB) instance.
    // *   **Reverse** You can specify a Virtual Private Cloud (VPC) NAT gateway.
    // 
    // >  Services that support reverse endpoints are provided by Alibaba Cloud or Alibaba Cloud partners. To create such a service on your own, contact your account manager.
    shared_ptr<string> endpointType_ {};
    shared_ptr<string> policyDocument_ {};
    // Specifies whether to enable user authentication. This parameter is available in Security Token Service (STS) mode. Valid values:
    // 
    // *   **true**: enables user authentication. After user authentication is enabled, only the user who creates the endpoint can modify or delete the endpoint in STS mode.
    // *   **false** (default): disables user authentication.
    shared_ptr<bool> protectedEnabled_ {};
    // The region ID of the endpoint.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of security groups that are associated with the endpoint elastic network interface (ENI).
    shared_ptr<vector<string>> securityGroupId_ {};
    // The ID of the endpoint service with which the endpoint is associated.
    shared_ptr<string> serviceId_ {};
    // The name of the endpoint service with which the endpoint is associated.
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> serviceRegionId_ {};
    // The tags to add to the resource.
    shared_ptr<vector<CreateVpcEndpointRequest::Tag>> tag_ {};
    // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zones where the endpoint is deployed.
    shared_ptr<vector<CreateVpcEndpointRequest::Zone>> zone_ {};
    shared_ptr<bool> zoneAffinityEnabled_ {};
    // The number of private IP addresses that are assigned to an elastic network interface (ENI) in each zone. Set the value to **1**.
    shared_ptr<int64_t> zonePrivateIpAddressCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
