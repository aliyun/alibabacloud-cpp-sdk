// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifySecurityGroupRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
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
      DARABONBA_PTR_TO_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SourceGroupOwnerId, sourceGroupOwnerId_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(SourcePrefixListId, sourcePrefixListId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
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
      DARABONBA_PTR_FROM_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SourceGroupOwnerId, sourceGroupOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(SourcePrefixListId, sourcePrefixListId_);
    };
    ModifySecurityGroupRuleRequest() = default ;
    ModifySecurityGroupRuleRequest(const ModifySecurityGroupRuleRequest &) = default ;
    ModifySecurityGroupRuleRequest(ModifySecurityGroupRuleRequest &&) = default ;
    ModifySecurityGroupRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupRuleRequest() = default ;
    ModifySecurityGroupRuleRequest& operator=(const ModifySecurityGroupRuleRequest &) = default ;
    ModifySecurityGroupRuleRequest& operator=(ModifySecurityGroupRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr && this->ipv6SourceCidrIp_ == nullptr
        && this->nicType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->portRangeListId_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupRuleId_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourceGroupId_ == nullptr && this->sourceGroupOwnerAccount_ == nullptr
        && this->sourceGroupOwnerId_ == nullptr && this->sourcePortRange_ == nullptr && this->sourcePrefixListId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifySecurityGroupRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifySecurityGroupRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline ModifySecurityGroupRuleRequest& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifySecurityGroupRuleRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline ModifySecurityGroupRuleRequest& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline ModifySecurityGroupRuleRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline ModifySecurityGroupRuleRequest& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySecurityGroupRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySecurityGroupRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifySecurityGroupRuleRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ModifySecurityGroupRuleRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline ModifySecurityGroupRuleRequest& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifySecurityGroupRuleRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySecurityGroupRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySecurityGroupRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySecurityGroupRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifySecurityGroupRuleRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupRuleId Field Functions 
    bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
    void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
    inline string getSecurityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
    inline ModifySecurityGroupRuleRequest& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline ModifySecurityGroupRuleRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourceGroupId Field Functions 
    bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
    void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
    inline string getSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
    inline ModifySecurityGroupRuleRequest& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


    // sourceGroupOwnerAccount Field Functions 
    bool hasSourceGroupOwnerAccount() const { return this->sourceGroupOwnerAccount_ != nullptr;};
    void deleteSourceGroupOwnerAccount() { this->sourceGroupOwnerAccount_ = nullptr;};
    inline string getSourceGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerAccount_, "") };
    inline ModifySecurityGroupRuleRequest& setSourceGroupOwnerAccount(string sourceGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerAccount_, sourceGroupOwnerAccount) };


    // sourceGroupOwnerId Field Functions 
    bool hasSourceGroupOwnerId() const { return this->sourceGroupOwnerId_ != nullptr;};
    void deleteSourceGroupOwnerId() { this->sourceGroupOwnerId_ = nullptr;};
    inline int64_t getSourceGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerId_, 0L) };
    inline ModifySecurityGroupRuleRequest& setSourceGroupOwnerId(int64_t sourceGroupOwnerId) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerId_, sourceGroupOwnerId) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline ModifySecurityGroupRuleRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // sourcePrefixListId Field Functions 
    bool hasSourcePrefixListId() const { return this->sourcePrefixListId_ != nullptr;};
    void deleteSourcePrefixListId() { this->sourcePrefixListId_ = nullptr;};
    inline string getSourcePrefixListId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListId_, "") };
    inline ModifySecurityGroupRuleRequest& setSourcePrefixListId(string sourcePrefixListId) { DARABONBA_PTR_SET_VALUE(sourcePrefixListId_, sourcePrefixListId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the security group rule. The description must be 1 to 512 characters in length.
    shared_ptr<string> description_ {};
    // The destination IPv4 CIDR block. IPv4 CIDR blocks and IPv4 addresses are supported.
    // 
    // By default, this parameter is left empty.
    shared_ptr<string> destCidrIp_ {};
    // Network Layer /transport layer protocol. Two types of assignments are supported:
    // 
    // 1.  The case-insensitive protocol name. Valid values:
    // 
    // *   ICMP
    // *   GRE
    // *   TCP
    // *   UDP
    // *   ALL: supports all protocols.
    // 
    // 2.  The value of the IANA-compliant protocol number, which is an integer from 0 to 255. List of regions currently available:
    // 
    // *   Philippines (Manila)
    // *   UK (London)
    // *   Malaysia (Kuala Lumpur)
    // *   China (Hohhot)
    // *   China (Qingdao)
    // *   US (Silicon Valley)
    // *   Singapore
    shared_ptr<string> ipProtocol_ {};
    // The destination IPv6 CIDR block. IPv6 CIDR blocks and IPv6 addresses are supported.
    // 
    // >  Only the IP addresses of instances in VPCs are supported. You cannot specify both Ipv6DestCidrIp and `DestCidrIp`.
    // 
    // By default, this parameter is left empty.
    shared_ptr<string> ipv6DestCidrIp_ {};
    // The source IPv6 CIDR block. IPv6 CIDR blocks and IPv6 addresses are supported.
    // 
    // >  Only the IP addresses of instances in virtual private clouds (VPCs) are supported. You cannot specify both Ipv6SourceCidrIp and `SourceCidrIp`.
    // 
    // By default, this parameter is left empty.
    shared_ptr<string> ipv6SourceCidrIp_ {};
    // The type of the network interface controller (NIC).
    // 
    // >  You cannot modify this parameter when you modify a security group rule by specifying the ID of the rule. If you want to change the NIC type of a security group rule, you can create a security group rule of a desired NIC type and delete the existing rule.
    shared_ptr<string> nicType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The action of the security group rule. Valid values:
    // 
    // *   accept: allows access.
    // *   drop: denies access and returns no responses.
    // 
    // Default value: accept.
    shared_ptr<string> policy_ {};
    // The range of destination ports that correspond to the transport layer protocol. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Separate the start port number and the end port number with a forward slash (/). Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
    // *   If you set IpProtocol to GRE, the port number range is -1/-1.
    // *   If you set IpProtocol to ALL, the port number range is -1/-1.
    shared_ptr<string> portRange_ {};
    // The ID of the port list. You can call the `DescribePortRangeLists` operation to query the IDs of available port lists.
    // 
    // *   If you specify PortRange, this parameter is ignored.
    // *   If a security group is in the classic network, you cannot configure port lists in the rules of the security group. For information about the limits on security groups and port lists, see [Security group limits](~~25412#SecurityGroupQuota1~~).
    shared_ptr<string> portRangeListId_ {};
    // The priority of the security group rule. Valid values: 1 to 100.
    // 
    // Default value: 1.
    shared_ptr<string> priority_ {};
    // The region ID of the security group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The security group ID.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the security group rule. You can call the [DescribeSecurityGroupAttribute](https://help.aliyun.com/document_detail/2679845.html) operation to query the IDs of security group rules in a security group.
    shared_ptr<string> securityGroupRuleId_ {};
    // The source IPv4 CIDR block. IPv4 CIDR blocks and IPv4 addresses are supported.
    // 
    // By default, this parameter is left empty.
    shared_ptr<string> sourceCidrIp_ {};
    // The source security group ID. You must specify either `SourceGroupId` or `SourceCidrIp` or specify both of them.
    // 
    // *   If `SourceGroupId` is specified but `SourceCidrIp` is not specified, the value of `NicType` must be set to intranet.
    // *   If both `SourceGroupId` and `SourceCidrIp` are specified, the value of `SourceCidrIp` prevails by default.
    shared_ptr<string> sourceGroupId_ {};
    // The Alibaba Cloud account that manages the source security group when you configure a security group rule across accounts.
    // 
    // *   If both `SourceGroupOwnerId` and `SourceGroupOwnerAccount` are empty, access permissions are configured for another security group managed by your account.
    // *   If `SourceCidrIp` is specified, `SourceGroupOwnerAccount` is ignored.
    shared_ptr<string> sourceGroupOwnerAccount_ {};
    // The ID of the Alibaba Cloud account that manages the source security group when you configure a security group rule across accounts.
    // 
    // *   If both `SourceGroupOwnerId` and `SourceGroupOwnerAccount` are empty, access permissions are configured for another security group managed by your account.
    // *   If `SourceCidrIp` is specified, `SourceGroupOwnerId` is ignored.
    shared_ptr<int64_t> sourceGroupOwnerId_ {};
    // The range of source ports that correspond to the transport layer protocol. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Separate the start port number and the end port number with a forward slash (/). Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
    // *   If you set IpProtocol to GRE, the port number range is -1/-1.
    // *   If you set IpProtocol to ALL, the port number range is -1/-1.
    shared_ptr<string> sourcePortRange_ {};
    // The ID of the source prefix list to which you want to control access. You can call the [DescribePrefixLists](https://help.aliyun.com/document_detail/205046.html) operation to query the IDs of available prefix lists.
    // 
    // If you specify `SourceCidrIp`, `Ipv6SourceCidrIp`, or `SourceGroupId`, this parameter is ignored.
    shared_ptr<string> sourcePrefixListId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
