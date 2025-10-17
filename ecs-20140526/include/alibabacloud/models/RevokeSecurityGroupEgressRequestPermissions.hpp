// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKESECURITYGROUPEGRESSREQUESTPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_REVOKESECURITYGROUPEGRESSREQUESTPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RevokeSecurityGroupEgressRequestPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeSecurityGroupEgressRequestPermissions& obj) { 
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
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeSecurityGroupEgressRequestPermissions& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    RevokeSecurityGroupEgressRequestPermissions() = default ;
    RevokeSecurityGroupEgressRequestPermissions(const RevokeSecurityGroupEgressRequestPermissions &) = default ;
    RevokeSecurityGroupEgressRequestPermissions(RevokeSecurityGroupEgressRequestPermissions &&) = default ;
    RevokeSecurityGroupEgressRequestPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeSecurityGroupEgressRequestPermissions() = default ;
    RevokeSecurityGroupEgressRequestPermissions& operator=(const RevokeSecurityGroupEgressRequestPermissions &) = default ;
    RevokeSecurityGroupEgressRequestPermissions& operator=(RevokeSecurityGroupEgressRequestPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destCidrIp_ == nullptr && return this->destGroupId_ == nullptr && return this->destGroupOwnerAccount_ == nullptr && return this->destGroupOwnerId_ == nullptr && return this->destPrefixListId_ == nullptr
        && return this->ipProtocol_ == nullptr && return this->ipv6DestCidrIp_ == nullptr && return this->ipv6SourceCidrIp_ == nullptr && return this->nicType_ == nullptr && return this->policy_ == nullptr
        && return this->portRange_ == nullptr && return this->portRangeListId_ == nullptr && return this->priority_ == nullptr && return this->sourceCidrIp_ == nullptr && return this->sourcePortRange_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // destGroupId Field Functions 
    bool hasDestGroupId() const { return this->destGroupId_ != nullptr;};
    void deleteDestGroupId() { this->destGroupId_ = nullptr;};
    inline string destGroupId() const { DARABONBA_PTR_GET_DEFAULT(destGroupId_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDestGroupId(string destGroupId) { DARABONBA_PTR_SET_VALUE(destGroupId_, destGroupId) };


    // destGroupOwnerAccount Field Functions 
    bool hasDestGroupOwnerAccount() const { return this->destGroupOwnerAccount_ != nullptr;};
    void deleteDestGroupOwnerAccount() { this->destGroupOwnerAccount_ = nullptr;};
    inline string destGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerAccount_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDestGroupOwnerAccount(string destGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(destGroupOwnerAccount_, destGroupOwnerAccount) };


    // destGroupOwnerId Field Functions 
    bool hasDestGroupOwnerId() const { return this->destGroupOwnerId_ != nullptr;};
    void deleteDestGroupOwnerId() { this->destGroupOwnerId_ = nullptr;};
    inline string destGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerId_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDestGroupOwnerId(string destGroupOwnerId) { DARABONBA_PTR_SET_VALUE(destGroupOwnerId_, destGroupOwnerId) };


    // destPrefixListId Field Functions 
    bool hasDestPrefixListId() const { return this->destPrefixListId_ != nullptr;};
    void deleteDestPrefixListId() { this->destPrefixListId_ = nullptr;};
    inline string destPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListId_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setDestPrefixListId(string destPrefixListId) { DARABONBA_PTR_SET_VALUE(destPrefixListId_, destPrefixListId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string ipv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string nicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline RevokeSecurityGroupEgressRequestPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The description of the security group rule. The description must be 1 to 512 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The destination IPv4 CIDR block of the security group rule. IPv4 CIDR blocks and IPv4 addresses are supported.
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // The ID of the destination security group of the security group rule.
    // 
    // *   You must specify at least one of the following parameters: `DestGroupId`, `DestCidrIp`, `Ipv6DestCidrIp`, and `DestPrefixListId`.
    // *   If you specify `DestGroupId` but do not specify `DestCidrIp`, you must set `NicType` to intranet.
    // *   If you specify both `DestGroupId` and `DestCidrIp`, `DestCidrIp` takes precedence.
    // 
    // Take note of the following items:
    // 
    // *   Advanced security groups do not support security group rules that reference security groups as authorization objects.
    // *   Each basic security group can contain up to 20 security group rules that reference security groups as authorization objects.
    std::shared_ptr<string> destGroupId_ = nullptr;
    // The Alibaba Cloud account that manages the destination security group specified in the security group rule.
    // 
    // *   If you leave `DestGroupOwnerAccount` and `DestGroupOwnerId` empty, access control configurations are removed from another security group managed by your Alibaba Cloud account.
    // *   If you specify `DestCidrIp`, `DestGroupOwnerAccount` is invalid.
    std::shared_ptr<string> destGroupOwnerAccount_ = nullptr;
    // The ID of the Alibaba Cloud account that manages the destination security group specified in the security group rule.
    // 
    // *   If you leave `DestGroupOwnerId` and `DestGroupOwnerAccount` empty, access control configurations are removed from another security group managed by your Alibaba Cloud account.
    // *   If you specify `DestCidrIp`, `DestGroupOwnerId` is invalid.
    std::shared_ptr<string> destGroupOwnerId_ = nullptr;
    // The ID of the destination prefix list of the security group rule. You can call the [DescribePrefixLists](https://help.aliyun.com/document_detail/205046.html) operation to query the IDs of available prefix lists.
    // 
    // Take note of the following items:
    // 
    // *   If a security group resides in the classic network, you cannot reference prefix lists in the rules of the security group. For information about the limits on security groups and prefix lists, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section of the "Limits and quotas" topic.
    // *   If you specify `DestCidrIp`, `Ipv6DestCidrIp`, or `DestGroupId`, this parameter is ignored.
    std::shared_ptr<string> destPrefixListId_ = nullptr;
    // The protocol type. The values of this parameter are case-insensitive. Valid values:
    // 
    // *   TCP.
    // *   UDP.
    // *   ICMP.
    // *   ICMPv6.
    // *   GRE.
    // *   ALL: All protocols are supported.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The destination IPv6 CIDR block of the security group rule. IPv6 CIDR blocks and IPv6 addresses are supported.
    // 
    // >  This parameter is valid only for Elastic Compute Service (ECS) instances that reside in virtual private clouds (VPCs) and support IPv6 CIDR blocks. You cannot specify both this parameter and `DestCidrIp` in the same request.
    std::shared_ptr<string> ipv6DestCidrIp_ = nullptr;
    // The source IPv6 CIDR block of the security group rule. IPv6 CIDR blocks and IPv6 addresses are supported.
    // 
    // This parameter is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    // 
    // >  This parameter is valid only for ECS instances that reside in VPCs and support IPv6 CIDR blocks. You cannot specify both this parameter and `DestCidrIp` in the same request.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The network interface controller (NIC) type of the security group rule if the security group resides in the classic network. Valid values:
    // 
    // *   internet: public NIC.
    // *   intranet: internal NIC.
    // 
    // If the security group resides in a VPC, this parameter is set to intranet by default and cannot be modified.
    // 
    // If you specify `DestGroupId` to delete outbound security group rules that reference the specified security group as an authorization object, you must set this parameter to intranet.
    // 
    // Default value: internet.
    std::shared_ptr<string> nicType_ = nullptr;
    // The action of the security group rule. Valid values:
    // 
    // *   accept: allows access.
    // *   drop: denies access and returns no responses. In this case, the request times out or the connection cannot be established.
    // 
    // Default value: accept.
    std::shared_ptr<string> policy_ = nullptr;
    // The destination port range of the security group rule. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the valid values of this parameter are 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port range is -1/-1.
    // *   If you set IpProtocol to GRE, the port range is -1/-1.
    // *   If you set IpProtocol to ALL, the port range is -1/-1.
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the port list. You can call the `DescribePortRangeLists` operation to query the IDs of available prefix lists.
    // 
    // *   If you specify `Permissions.N.PortRange`, this parameter is ignored.
    // *   If a security group resides in the classic network, you cannot reference port lists in the rules of the security group. For information about the limits on security groups and port lists, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section of the "Limits and quotas" topic.
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The priority of the security group rule. A smaller value specifies a higher priority. Valid values: 1 to 100.
    // 
    // Default value: 1.
    std::shared_ptr<string> priority_ = nullptr;
    // The source IPv4 CIDR block of the security group rule. IPv4 CIDR blocks and IPv4 addresses are supported.
    // 
    // This parameter is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The source port range of the security group rule. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the valid values of this parameter are 1 to 65535. Specify a port range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port range is -1/-1.
    // *   If you set IpProtocol to GRE, the port range is -1/-1.
    // *   If you set IpProtocol to ALL, the port range is -1/-1.
    // 
    // This parameter is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
