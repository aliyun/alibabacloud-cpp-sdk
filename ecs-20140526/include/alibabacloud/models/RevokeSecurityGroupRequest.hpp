// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKESECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKESECURITYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RevokeSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(NicType, nicType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
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
    friend void from_json(const Darabonba::Json& j, RevokeSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(NicType, nicType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
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
    RevokeSecurityGroupRequest() = default ;
    RevokeSecurityGroupRequest(const RevokeSecurityGroupRequest &) = default ;
    RevokeSecurityGroupRequest(RevokeSecurityGroupRequest &&) = default ;
    RevokeSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeSecurityGroupRequest() = default ;
    RevokeSecurityGroupRequest& operator=(const RevokeSecurityGroupRequest &) = default ;
    RevokeSecurityGroupRequest& operator=(RevokeSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
        DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
        DARABONBA_PTR_TO_JSON(NicType, nicType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_TO_JSON(SourceGroupId, sourceGroupId_);
        DARABONBA_PTR_TO_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
        DARABONBA_PTR_TO_JSON(SourceGroupOwnerId, sourceGroupOwnerId_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_TO_JSON(SourcePrefixListId, sourcePrefixListId_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
        DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(NicType, nicType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
        DARABONBA_PTR_FROM_JSON(SourceGroupId, sourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
        DARABONBA_PTR_FROM_JSON(SourceGroupOwnerId, sourceGroupOwnerId_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_FROM_JSON(SourcePrefixListId, sourcePrefixListId_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr && this->ipv6SourceCidrIp_ == nullptr && this->nicType_ == nullptr
        && this->policy_ == nullptr && this->portRange_ == nullptr && this->portRangeListId_ == nullptr && this->priority_ == nullptr && this->sourceCidrIp_ == nullptr
        && this->sourceGroupId_ == nullptr && this->sourceGroupOwnerAccount_ == nullptr && this->sourceGroupOwnerId_ == nullptr && this->sourcePortRange_ == nullptr && this->sourcePrefixListId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Permissions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destCidrIp Field Functions 
      bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
      void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
      inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
      inline Permissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline Permissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // ipv6DestCidrIp Field Functions 
      bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
      void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
      inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
      inline Permissions& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


      // ipv6SourceCidrIp Field Functions 
      bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
      void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
      inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
      inline Permissions& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


      // nicType Field Functions 
      bool hasNicType() const { return this->nicType_ != nullptr;};
      void deleteNicType() { this->nicType_ = nullptr;};
      inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
      inline Permissions& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Permissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline Permissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // portRangeListId Field Functions 
      bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
      void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
      inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
      inline Permissions& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Permissions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline Permissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


      // sourceGroupId Field Functions 
      bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
      void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
      inline string getSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
      inline Permissions& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


      // sourceGroupOwnerAccount Field Functions 
      bool hasSourceGroupOwnerAccount() const { return this->sourceGroupOwnerAccount_ != nullptr;};
      void deleteSourceGroupOwnerAccount() { this->sourceGroupOwnerAccount_ = nullptr;};
      inline string getSourceGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerAccount_, "") };
      inline Permissions& setSourceGroupOwnerAccount(string sourceGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerAccount_, sourceGroupOwnerAccount) };


      // sourceGroupOwnerId Field Functions 
      bool hasSourceGroupOwnerId() const { return this->sourceGroupOwnerId_ != nullptr;};
      void deleteSourceGroupOwnerId() { this->sourceGroupOwnerId_ = nullptr;};
      inline int64_t getSourceGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerId_, 0L) };
      inline Permissions& setSourceGroupOwnerId(int64_t sourceGroupOwnerId) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerId_, sourceGroupOwnerId) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline Permissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


      // sourcePrefixListId Field Functions 
      bool hasSourcePrefixListId() const { return this->sourcePrefixListId_ != nullptr;};
      void deleteSourcePrefixListId() { this->sourcePrefixListId_ = nullptr;};
      inline string getSourcePrefixListId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListId_, "") };
      inline Permissions& setSourcePrefixListId(string sourcePrefixListId) { DARABONBA_PTR_SET_VALUE(sourcePrefixListId_, sourcePrefixListId) };


    protected:
      // The description of the security group rule. The description must be 1 to 512 characters in length.
      shared_ptr<string> description_ {};
      // The destination IPv4 CIDR block. CIDR blocks and IPv4 address range are supported.
      // 
      // This parameter is used for quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
      shared_ptr<string> destCidrIp_ {};
      // The protocol type. The value is case-insensitive. Valid values: 
      //          
      // - TCP.
      // - UDP.
      // - ICMP.
      // - ICMPv6.
      // - GRE.
      // - ALL: all protocols.
      shared_ptr<string> ipProtocol_ {};
      // The destination IPv6 CIDR block. CIDR blocks and IPv6 address range are supported.
      // 
      // This parameter is used for quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
      // 
      // > This parameter is valid only for VPC-type ECS instances that support IPv6. You cannot specify both this parameter and `DestCidrIp`.
      shared_ptr<string> ipv6DestCidrIp_ {};
      // The source IPv6 Classless Inter-Domain Routing (CIDR) block from which you want to revoke access permissions. CIDR format and IPv6 address range are supported.
      // 
      // > This parameter is valid only for VPC-type ECS instances that support IPv6. You cannot specify both this parameter and `SourceCidrIp`.
      shared_ptr<string> ipv6SourceCidrIp_ {};
      // The network interface controller (NIC) type of the security group rule. For VPC-type security groups, you do not need to set the network type. The default value is intranet, and only intranet is supported.
      // 
      // > The classic network feature has been taken offline. For details, see [Retirement notice](https://help.aliyun.com/document_detail/2833134.html). For classic network-type security group rules, valid values are:
      // > - internet: public network interface controller (NIC).
      // > - intranet: internal network interface controller (NIC).
      shared_ptr<string> nicType_ {};
      // The access permissions. Valid values: 
      //          
      // - accept: Accepts access.
      // - drop: Deny access without returning any denial information. The request appears to timeout or the connection cannot be established.
      // 
      // Default value: accept.
      shared_ptr<string> policy_ {};
      // The range of destination ports that correspond to the transport layer protocol. Valid values:
      //          
      // - TCP/UDP: Valid values are 1 to 65535. Separate the start port and the end port with a forward slash (/). Example: 1/200.
      // - ICMP: -1/-1.
      // - GRE: -1/-1.
      // - ALL: -1/-1.
      shared_ptr<string> portRange_ {};
      // The port list ID.
      // 
      // You can call `DescribePortRangeLists` to query available port list IDs.
      // 
      // If you specify `Permissions.N.PortRange`, this parameter is ignored.
      // 
      // For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
      shared_ptr<string> portRangeListId_ {};
      // The priority of the security group rule. A smaller value indicates a higher priority. Valid values: 1 to 100.
      // 
      // Default value: 1.
      shared_ptr<string> priority_ {};
      // The source IPv4 Classless Inter-Domain Routing (CIDR) block from which you want to revoke access permissions. CIDR format and IPv4 address range are supported.
      shared_ptr<string> sourceCidrIp_ {};
      // The ID of the source security group from which you want to revoke access permissions.
      // 
      // - Set at least one of `SourceGroupId`, `SourceCidrIp`, `Ipv6SourceCidrIp`, or `SourcePrefixListId`.
      // 
      // - If you specify `SourceGroupId` but do not specify the `SourceCidrIp` or `Ipv6SourceCidrIp` parameter, set NicType to intranet.
      // 
      // - If you specify both `SourceGroupId` and `SourceCidrIp`, `SourceCidrIp` takes precedence by default.
      // 
      // Note:
      // 
      // - Advanced security groups do not support authorization by security group access.
      // 
      // - A maximum of 20 security groups can be authorized for a basic security group.
      shared_ptr<string> sourceGroupId_ {};
      // The Alibaba Cloud account that owns the source security group when you revoke a cross-account authorization security group rule.
      // 
      // - If neither `SourceGroupOwnerAccount` nor `SourceGroupOwnerId` is set, the access permissions for another security group within your account are revoked.
      // - If the `SourceCidrIp` parameter is set, the `SourceGroupOwnerAccount` parameter is ignored.
      shared_ptr<string> sourceGroupOwnerAccount_ {};
      // The ID of the Alibaba Cloud account that owns the source security group when you revoke a cross-account authorization security group rule.
      // 
      // - If neither `SourceGroupOwnerId` nor `SourceGroupOwnerAccount` is set, the access permissions for another security group within your account are revoked.
      // - If the `SourceCidrIp` parameter is set, the `SourceGroupOwnerId` parameter is ignored.
      shared_ptr<int64_t> sourceGroupOwnerId_ {};
      // The range of source ports that correspond to the transport layer protocol. Valid values: 
      //          
      // - TCP/UDP: Valid values are 1 to 65535. Separate the start port and the end port with a forward slash (/). Example: 1/200.
      // - ICMP: -1/-1.
      // - GRE: -1/-1.
      // - ALL: -1/-1.
      // 
      // This parameter is used for quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
      shared_ptr<string> sourcePortRange_ {};
      // The ID of the source prefix list from which you want to revoke access permissions. You can invoke [DescribePrefixLists](https://help.aliyun.com/document_detail/205046.html) to query available prefix list IDs.
      // 
      // Note:
      // 
      // If you specify `SourceCidrIp`, `Ipv6SourceCidrIp`, or `SourceGroupId`, this parameter is ignored.
      // 
      // For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
      shared_ptr<string> sourcePrefixListId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->destCidrIp_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr && this->ipv6SourceCidrIp_ == nullptr
        && this->nicType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->permissions_ == nullptr && this->policy_ == nullptr
        && this->portRange_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupRuleId_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourceGroupId_ == nullptr && this->sourceGroupOwnerAccount_ == nullptr
        && this->sourceGroupOwnerId_ == nullptr && this->sourcePortRange_ == nullptr && this->sourcePrefixListId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RevokeSecurityGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RevokeSecurityGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline RevokeSecurityGroupRequest& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline RevokeSecurityGroupRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline RevokeSecurityGroupRequest& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline RevokeSecurityGroupRequest& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline RevokeSecurityGroupRequest& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RevokeSecurityGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RevokeSecurityGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<RevokeSecurityGroupRequest::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<RevokeSecurityGroupRequest::Permissions>) };
    inline vector<RevokeSecurityGroupRequest::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<RevokeSecurityGroupRequest::Permissions>) };
    inline RevokeSecurityGroupRequest& setPermissions(const vector<RevokeSecurityGroupRequest::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline RevokeSecurityGroupRequest& setPermissions(vector<RevokeSecurityGroupRequest::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline RevokeSecurityGroupRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline RevokeSecurityGroupRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline RevokeSecurityGroupRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeSecurityGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RevokeSecurityGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RevokeSecurityGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RevokeSecurityGroupRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupRuleId Field Functions 
    bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
    void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
    inline const vector<string> & getSecurityGroupRuleId() const { DARABONBA_PTR_GET_CONST(securityGroupRuleId_, vector<string>) };
    inline vector<string> getSecurityGroupRuleId() { DARABONBA_PTR_GET(securityGroupRuleId_, vector<string>) };
    inline RevokeSecurityGroupRequest& setSecurityGroupRuleId(const vector<string> & securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };
    inline RevokeSecurityGroupRequest& setSecurityGroupRuleId(vector<string> && securityGroupRuleId) { DARABONBA_PTR_SET_RVALUE(securityGroupRuleId_, securityGroupRuleId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline RevokeSecurityGroupRequest& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourceGroupId Field Functions 
    bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
    void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
    inline string getSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
    inline RevokeSecurityGroupRequest& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


    // sourceGroupOwnerAccount Field Functions 
    bool hasSourceGroupOwnerAccount() const { return this->sourceGroupOwnerAccount_ != nullptr;};
    void deleteSourceGroupOwnerAccount() { this->sourceGroupOwnerAccount_ = nullptr;};
    inline string getSourceGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerAccount_, "") };
    inline RevokeSecurityGroupRequest& setSourceGroupOwnerAccount(string sourceGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerAccount_, sourceGroupOwnerAccount) };


    // sourceGroupOwnerId Field Functions 
    bool hasSourceGroupOwnerId() const { return this->sourceGroupOwnerId_ != nullptr;};
    void deleteSourceGroupOwnerId() { this->sourceGroupOwnerId_ = nullptr;};
    inline int64_t getSourceGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerId_, 0L) };
    inline RevokeSecurityGroupRequest& setSourceGroupOwnerId(int64_t sourceGroupOwnerId) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerId_, sourceGroupOwnerId) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline RevokeSecurityGroupRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // sourcePrefixListId Field Functions 
    bool hasSourcePrefixListId() const { return this->sourcePrefixListId_ != nullptr;};
    void deleteSourcePrefixListId() { this->sourcePrefixListId_ = nullptr;};
    inline string getSourcePrefixListId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListId_, "") };
    inline RevokeSecurityGroupRequest& setSourcePrefixListId(string sourcePrefixListId) { DARABONBA_PTR_SET_VALUE(sourcePrefixListId_, sourcePrefixListId) };


  protected:
    // A client token used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Deprecated. Use `Permissions.N.Description` to specify the rule description.
    shared_ptr<string> description_ {};
    // Deprecated. Use `Permissions.N.DestCidrIp` to specify the destination IPv4 CIDR block.
    shared_ptr<string> destCidrIp_ {};
    // Deprecated. Use `Permissions.N.IpProtocol` to specify the protocol type.
    shared_ptr<string> ipProtocol_ {};
    // Deprecated. Use `Permissions.N.Ipv6DestCidrIp` to specify the destination IPv6 CIDR block.
    shared_ptr<string> ipv6DestCidrIp_ {};
    // Deprecated. Use `Permissions.N.Ipv6SourceCidrIp` to specify the source IPv6 Classless Inter-Domain Routing (CIDR) block.
    shared_ptr<string> ipv6SourceCidrIp_ {};
    // Deprecated. Use `Permissions.N.NicType` to specify the network interface type.
    shared_ptr<string> nicType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The security group rules. Array length: 0 to 100.
    shared_ptr<vector<RevokeSecurityGroupRequest::Permissions>> permissions_ {};
    // Deprecated. Use `Permissions.N.Policy` to set the access permissions.
    shared_ptr<string> policy_ {};
    // Deprecated. Use `Permissions.N.PortRange` to specify the port range.
    shared_ptr<string> portRange_ {};
    // Deprecated. Use `Permissions.N.Priority` to specify the rule priority.
    shared_ptr<string> priority_ {};
    // The region ID of the security group. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The security group ID.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The IDs of security group rules. Array length: 0 to 100.
    shared_ptr<vector<string>> securityGroupRuleId_ {};
    // Deprecated. Use `Permissions.N.SourceCidrIp` to specify the source IPv4 Classless Inter-Domain Routing (CIDR) block.
    shared_ptr<string> sourceCidrIp_ {};
    // Deprecated. Use `Permissions.N.SourceGroupId` to specify the source security group ID.
    shared_ptr<string> sourceGroupId_ {};
    // Deprecated. Use `Permissions.N.SourceGroupOwnerAccount` to specify the Alibaba Cloud account that owns the source security group.
    shared_ptr<string> sourceGroupOwnerAccount_ {};
    // Deprecated. Use `Permissions.N.SourceGroupOwnerId` to specify the ID of the Alibaba Cloud account that owns the source security group.
    shared_ptr<int64_t> sourceGroupOwnerId_ {};
    // Deprecated. Use `Permissions.N.SourcePortRange` to specify the source port range.
    shared_ptr<string> sourcePortRange_ {};
    // Deprecated. Use `Permissions.N.SourcePrefixListId` to specify the source prefix list ID.
    shared_ptr<string> sourcePrefixListId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
