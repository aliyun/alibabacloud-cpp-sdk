// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv4PrefixSets.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv6PrefixSets.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv6Sets.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyPrivateIpSets.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodySecurityGroupIds.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody(CreateNetworkInterfaceResponseBody &&) = default ;
    CreateNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody& operator=(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody& operator=(CreateNetworkInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ipv4PrefixSets_ != nullptr && this->ipv6PrefixSets_ != nullptr && this->ipv6Sets_ != nullptr && this->macAddress_ != nullptr && this->networkInterfaceId_ != nullptr
        && this->networkInterfaceName_ != nullptr && this->ownerId_ != nullptr && this->privateIpAddress_ != nullptr && this->privateIpSets_ != nullptr && this->requestId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->serviceID_ != nullptr && this->serviceManaged_ != nullptr && this->sourceDestCheck_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr
        && this->zoneId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkInterfaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipv4PrefixSets Field Functions 
    bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
    void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodyIpv4PrefixSets & ipv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, CreateNetworkInterfaceResponseBodyIpv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBodyIpv4PrefixSets ipv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, CreateNetworkInterfaceResponseBodyIpv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv4PrefixSets(const CreateNetworkInterfaceResponseBodyIpv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv4PrefixSets(CreateNetworkInterfaceResponseBodyIpv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodyIpv6PrefixSets & ipv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, CreateNetworkInterfaceResponseBodyIpv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBodyIpv6PrefixSets ipv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, CreateNetworkInterfaceResponseBodyIpv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6PrefixSets(const CreateNetworkInterfaceResponseBodyIpv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6PrefixSets(CreateNetworkInterfaceResponseBodyIpv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodyIpv6Sets & ipv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, CreateNetworkInterfaceResponseBodyIpv6Sets) };
    inline CreateNetworkInterfaceResponseBodyIpv6Sets ipv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, CreateNetworkInterfaceResponseBodyIpv6Sets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6Sets(const CreateNetworkInterfaceResponseBodyIpv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6Sets(CreateNetworkInterfaceResponseBodyIpv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline CreateNetworkInterfaceResponseBody& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateNetworkInterfaceResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodyPrivateIpSets & privateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, CreateNetworkInterfaceResponseBodyPrivateIpSets) };
    inline CreateNetworkInterfaceResponseBodyPrivateIpSets privateIpSets() { DARABONBA_PTR_GET(privateIpSets_, CreateNetworkInterfaceResponseBodyPrivateIpSets) };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpSets(const CreateNetworkInterfaceResponseBodyPrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpSets(CreateNetworkInterfaceResponseBodyPrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkInterfaceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodySecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, CreateNetworkInterfaceResponseBodySecurityGroupIds) };
    inline CreateNetworkInterfaceResponseBodySecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, CreateNetworkInterfaceResponseBodySecurityGroupIds) };
    inline CreateNetworkInterfaceResponseBody& setSecurityGroupIds(const CreateNetworkInterfaceResponseBodySecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateNetworkInterfaceResponseBody& setSecurityGroupIds(CreateNetworkInterfaceResponseBodySecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t serviceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline CreateNetworkInterfaceResponseBody& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline CreateNetworkInterfaceResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool sourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline CreateNetworkInterfaceResponseBody& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateNetworkInterfaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, CreateNetworkInterfaceResponseBodyTags) };
    inline CreateNetworkInterfaceResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, CreateNetworkInterfaceResponseBodyTags) };
    inline CreateNetworkInterfaceResponseBody& setTags(const CreateNetworkInterfaceResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateNetworkInterfaceResponseBody& setTags(CreateNetworkInterfaceResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateNetworkInterfaceResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNetworkInterfaceResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNetworkInterfaceResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateNetworkInterfaceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The description of the ENI.
    std::shared_ptr<string> description_ = nullptr;
    // The IPv4 prefixes assigned to the ENI.
    std::shared_ptr<CreateNetworkInterfaceResponseBodyIpv4PrefixSets> ipv4PrefixSets_ = nullptr;
    // The IPv6 prefixes assigned to the ENI.
    std::shared_ptr<CreateNetworkInterfaceResponseBodyIpv6PrefixSets> ipv6PrefixSets_ = nullptr;
    // The IPv6 addresses assigned to the ENI.
    std::shared_ptr<CreateNetworkInterfaceResponseBodyIpv6Sets> ipv6Sets_ = nullptr;
    // The media access control (MAC) address of the ENI.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The name of the ENI.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The ID of the account to which the ENI belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The private IP address of the ENI.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The private IP addresses.
    std::shared_ptr<CreateNetworkInterfaceResponseBodyPrivateIpSets> privateIpSets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the ENI belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of the security groups to which the ENI belongs.
    std::shared_ptr<CreateNetworkInterfaceResponseBodySecurityGroupIds> securityGroupIds_ = nullptr;
    // The ID of the distributor to which the ENI belongs.
    std::shared_ptr<int64_t> serviceID_ = nullptr;
    // Indicates whether the user of the ENI is an Alibaba Cloud service or a distributor.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> sourceDestCheck_ = nullptr;
    // The state of the ENI.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the ENI.
    std::shared_ptr<CreateNetworkInterfaceResponseBodyTags> tags_ = nullptr;
    // The type of the ENI.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch to which the ENI is connected.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the ENI belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID of the ENI.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
