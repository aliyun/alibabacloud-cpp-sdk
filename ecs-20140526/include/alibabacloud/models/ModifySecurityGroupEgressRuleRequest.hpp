// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPEGRESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPEGRESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifySecurityGroupEgressRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupEgressRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(DestGroupId, destGroupId_);
      DARABONBA_PTR_TO_JSON(DestGroupOwnerAccount, destGroupOwnerAccount_);
      DARABONBA_PTR_TO_JSON(DestGroupOwnerId, destGroupOwnerId_);
      DARABONBA_PTR_TO_JSON(DestPrefixListId, destPrefixListId_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(NicType, nicType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupRuleId, securityGroupRuleId_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupEgressRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(DestGroupId, destGroupId_);
      DARABONBA_PTR_FROM_JSON(DestGroupOwnerAccount, destGroupOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(DestGroupOwnerId, destGroupOwnerId_);
      DARABONBA_PTR_FROM_JSON(DestPrefixListId, destPrefixListId_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(NicType, nicType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupRuleId, securityGroupRuleId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    ModifySecurityGroupEgressRuleRequest() = default ;
    ModifySecurityGroupEgressRuleRequest(const ModifySecurityGroupEgressRuleRequest &) = default ;
    ModifySecurityGroupEgressRuleRequest(ModifySecurityGroupEgressRuleRequest &&) = default ;
    ModifySecurityGroupEgressRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupEgressRuleRequest() = default ;
    ModifySecurityGroupEgressRuleRequest& operator=(const ModifySecurityGroupEgressRuleRequest &) = default ;
    ModifySecurityGroupEgressRuleRequest& operator=(ModifySecurityGroupEgressRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->destCidrIp_ == nullptr && this->destGroupId_ == nullptr && this->destGroupOwnerAccount_ == nullptr && this->destGroupOwnerId_ == nullptr
        && this->destPrefixListId_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr && this->ipv6SourceCidrIp_ == nullptr && this->nicType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->portRangeListId_ == nullptr
        && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityGroupId_ == nullptr
        && this->securityGroupRuleId_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourcePortRange_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // destGroupId Field Functions 
    bool hasDestGroupId() const { return this->destGroupId_ != nullptr;};
    void deleteDestGroupId() { this->destGroupId_ = nullptr;};
    inline string getDestGroupId() const { DARABONBA_PTR_GET_DEFAULT(destGroupId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setDestGroupId(string destGroupId) { DARABONBA_PTR_SET_VALUE(destGroupId_, destGroupId) };


    // destGroupOwnerAccount Field Functions 
    bool hasDestGroupOwnerAccount() const { return this->destGroupOwnerAccount_ != nullptr;};
    void deleteDestGroupOwnerAccount() { this->destGroupOwnerAccount_ = nullptr;};
    inline string getDestGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerAccount_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setDestGroupOwnerAccount(string destGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(destGroupOwnerAccount_, destGroupOwnerAccount) };


    // destGroupOwnerId Field Functions 
    bool hasDestGroupOwnerId() const { return this->destGroupOwnerId_ != nullptr;};
    void deleteDestGroupOwnerId() { this->destGroupOwnerId_ = nullptr;};
    inline int64_t getDestGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerId_, 0L) };
    inline ModifySecurityGroupEgressRuleRequest& setDestGroupOwnerId(int64_t destGroupOwnerId) { DARABONBA_PTR_SET_VALUE(destGroupOwnerId_, destGroupOwnerId) };


    // destPrefixListId Field Functions 
    bool hasDestPrefixListId() const { return this->destPrefixListId_ != nullptr;};
    void deleteDestPrefixListId() { this->destPrefixListId_ = nullptr;};
    inline string getDestPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setDestPrefixListId(string destPrefixListId) { DARABONBA_PTR_SET_VALUE(destPrefixListId_, destPrefixListId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySecurityGroupEgressRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityGroupEgressRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupRuleId Field Functions 
    bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
    void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
    inline string getSecurityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline ModifySecurityGroupEgressRuleRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // Ensures the idempotency of the request. The value is generated by a client and must be unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotency](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the security group rule. The description must be 1 to 512 characters in length.
    shared_ptr<string> description_ {};
    // The destination IPv4 CIDR block. CIDR format and IPv4 format are supported.
    // 
    // Default value: none.
    shared_ptr<string> destCidrIp_ {};
    // The ID of the destination security group to which you want to set access permissions. At least one of `DestGroupId` or `DestCidrIp` must be specified.
    // 
    // - At least one of the DestGroupId, DestCidrIp, Ipv6DestCidrIp, or DestPrefixListId parameters must be specified.
    // - If DestGroupId is specified without DestCidrIp, the NicType parameter can only be set to intranet.
    // - If both DestGroupId and DestCidrIp are specified, DestCidrIp takes precedence by default.
    shared_ptr<string> destGroupId_ {};
    // The Alibaba Cloud account that owns the destination security group when you set security group rules across accounts.
    shared_ptr<string> destGroupOwnerAccount_ {};
    // The ID of the Alibaba Cloud account that owns the destination security group when you set security group rules across accounts.
    shared_ptr<int64_t> destGroupOwnerId_ {};
    // The ID of the destination prefix list. You can call [DescribePrefixLists](https://help.aliyun.com/document_detail/205046.html) to query available prefix list IDs.
    // 
    // This parameter is ignored when any of the `DestCidrIp`, `Ipv6DestCidrIp`, or `DestGroupId` parameters is specified.
    shared_ptr<string> destPrefixListId_ {};
    // The network/transport layer protocol. Two types of values are supported:
    // 1. Case-insensitive protocol names. Valid values:
    // - ICMP
    // - GRE
    // - TCP
    // - UDP
    // - ALL: supports all protocols.
    // 2. Protocol numbers that comply with IANA specifications, which are integers from 0 to 255. Currently available regions:
    // - Philippines
    // - UK (London)
    // - Malaysia
    // - Hohhot
    // - Qingdao
    // - US West
    // - Singapore
    shared_ptr<string> ipProtocol_ {};
    // The destination IPv6 CIDR block. CIDR format and IPv6 format are supported.
    // 
    // > Only VPC-type IP addresses are supported. This parameter and `DestCidrIp` cannot be specified at the same time.
    // 
    // Default value: none.
    shared_ptr<string> ipv6DestCidrIp_ {};
    // The source IPv6 CIDR block. CIDR format and IPv6 format are supported.
    // 
    // > Only VPC-type IP addresses are supported. This parameter and `SourceCidrIp` cannot be specified at the same time.
    // 
    // Default value: none.
    shared_ptr<string> ipv6SourceCidrIp_ {};
    // The NIC type.
    // 
    // 
    // > When modifying a rule by security group rule ID, this parameter cannot be modified. If modification is needed, we recommend that you add a new rule first and then delete the current rule.
    shared_ptr<string> nicType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The access control policy. Valid values:
    // 
    // - accept: accepts access requests.
    // - drop: denies access requests without returning a rejection response.
    // 
    // Default value: accept.
    shared_ptr<string> policy_ {};
    // The range of destination ports relevant to the transport layer protocol. Valid values:
    // 
    // - TCP/UDP protocol: Valid values are 1 to 65535. Use a forward slash (/) to separate the start port and the end port. Example: 1/200.
    // - ICMP protocol: -1/-1.
    // - GRE protocol: -1/-1.
    // - ALL: -1/-1.
    shared_ptr<string> portRange_ {};
    // The port range list ID.
    // You can call `DescribePortRangeLists` to query available port range list IDs.
    // - This parameter is ignored when the PortRange parameter is specified.
    // - Port range lists are not supported for security groups of the classic network type. For more information about the usage limits of security groups and port range lists, see [Security group limits](~~25412#SecurityGroupQuota1~~).
    shared_ptr<string> portRangeListId_ {};
    // The priority of the security group rule. Valid values: 1 to 100.
    // 
    // Default value: 1.
    shared_ptr<string> priority_ {};
    // The region ID of the source security group. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the latest region list of Alibaba Cloud.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The security group ID.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The security group rule ID. You can call [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/2679845.html) to query security group rule IDs.
    shared_ptr<string> securityGroupRuleId_ {};
    // The source IPv4 CIDR block. CIDR format and IPv4 format are supported.
    // 
    // Default value: none.
    shared_ptr<string> sourceCidrIp_ {};
    // The range of source ports relevant to the transport layer protocol. Valid values:
    // 
    // - TCP/UDP protocol: Valid values are 1 to 65535. Use a forward slash (/) to separate the start port and the end port. Example: 1/200.
    // - ICMP protocol: -1/-1.
    // - GRE protocol: -1/-1.
    // - ALL: -1/-1.
    shared_ptr<string> sourcePortRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
