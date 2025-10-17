// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZESECURITYGROUPEGRESSREQUESTPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZESECURITYGROUPEGRESSREQUESTPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AuthorizeSecurityGroupEgressRequestPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeSecurityGroupEgressRequestPermissions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AuthorizeSecurityGroupEgressRequestPermissions& obj) { 
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
    AuthorizeSecurityGroupEgressRequestPermissions() = default ;
    AuthorizeSecurityGroupEgressRequestPermissions(const AuthorizeSecurityGroupEgressRequestPermissions &) = default ;
    AuthorizeSecurityGroupEgressRequestPermissions(AuthorizeSecurityGroupEgressRequestPermissions &&) = default ;
    AuthorizeSecurityGroupEgressRequestPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeSecurityGroupEgressRequestPermissions() = default ;
    AuthorizeSecurityGroupEgressRequestPermissions& operator=(const AuthorizeSecurityGroupEgressRequestPermissions &) = default ;
    AuthorizeSecurityGroupEgressRequestPermissions& operator=(AuthorizeSecurityGroupEgressRequestPermissions &&) = default ;
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
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // destGroupId Field Functions 
    bool hasDestGroupId() const { return this->destGroupId_ != nullptr;};
    void deleteDestGroupId() { this->destGroupId_ = nullptr;};
    inline string destGroupId() const { DARABONBA_PTR_GET_DEFAULT(destGroupId_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDestGroupId(string destGroupId) { DARABONBA_PTR_SET_VALUE(destGroupId_, destGroupId) };


    // destGroupOwnerAccount Field Functions 
    bool hasDestGroupOwnerAccount() const { return this->destGroupOwnerAccount_ != nullptr;};
    void deleteDestGroupOwnerAccount() { this->destGroupOwnerAccount_ = nullptr;};
    inline string destGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerAccount_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDestGroupOwnerAccount(string destGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(destGroupOwnerAccount_, destGroupOwnerAccount) };


    // destGroupOwnerId Field Functions 
    bool hasDestGroupOwnerId() const { return this->destGroupOwnerId_ != nullptr;};
    void deleteDestGroupOwnerId() { this->destGroupOwnerId_ = nullptr;};
    inline int64_t destGroupOwnerId() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerId_, 0L) };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDestGroupOwnerId(int64_t destGroupOwnerId) { DARABONBA_PTR_SET_VALUE(destGroupOwnerId_, destGroupOwnerId) };


    // destPrefixListId Field Functions 
    bool hasDestPrefixListId() const { return this->destPrefixListId_ != nullptr;};
    void deleteDestPrefixListId() { this->destPrefixListId_ = nullptr;};
    inline string destPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListId_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setDestPrefixListId(string destPrefixListId) { DARABONBA_PTR_SET_VALUE(destPrefixListId_, destPrefixListId) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string ipv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string nicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline AuthorizeSecurityGroupEgressRequestPermissions& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The description of the security group rule. The description must be 1 to 512 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The destination IPv4 CIDR block of the security group rule. IPv4 CIDR blocks and IPv4 addresses are supported.
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // The ID of the destination security group.
    // 
    // *   You must specify at least one of the following parameters: `DestGroupId`, `DestCidrIp`, `Ipv6DestCidrIp`, and `DestPrefixListId`.
    // *   If you specify `DestGroupId` but do not specify `DestCidrIp`, you must set `NicType` to intranet.
    // *   If you specify both `DestGroupId` and `DestCidrIp`, `DestCidrIp` takes precedence.
    std::shared_ptr<string> destGroupId_ = nullptr;
    // The Alibaba Cloud account that manages the destination security group.
    // 
    // *   If both `DestGroupOwnerAccount` and `DestGroupOwnerId` are empty, the rule is created to control access to another security group in your Alibaba Cloud account.
    // *   If `DestCidrIp` is configured, `DestGroupOwnerAccount` is ignored.
    std::shared_ptr<string> destGroupOwnerAccount_ = nullptr;
    // The ID of the Alibaba Cloud account that manages the destination security group.
    // 
    // *   If both `DestGroupOwnerId` and `DestGroupOwnerAccount` are empty, the rule is created to control access to another security group in your Alibaba Cloud account.
    // *   If you specify `DestCidrIp`, `DestGroupOwnerId` is ignored.
    std::shared_ptr<int64_t> destGroupOwnerId_ = nullptr;
    // The ID of the destination prefix list. You can call the [DescribePrefixLists](https://help.aliyun.com/document_detail/205046.html) operation to query the IDs of available prefix lists.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   If a security group resides in the classic network, you cannot specify prefix lists in the rules of the security group. For information about the limits on security groups and prefix lists, see the [Security group limits](~~25412#SecurityGroupQuota1~~) section of the "Limits and quotas" topic.
    // *   If you specify `DestCidrIp`, `Ipv6DestCidrIp`, or `DestGroupId`, this parameter is ignored.
    std::shared_ptr<string> destPrefixListId_ = nullptr;
    // The protocol. The values of this parameter are case-insensitive. Specifies whether to check that the CPU tag set of the source host is the subset of the CPU tag set of the destination host. Valid values:
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
    // >  This parameter is valid only for ECS instances that reside in virtual private clouds (VPCs) and support IPv6 CIDR blocks. You cannot specify this parameter and `DestCidrIp` in the same request.
    std::shared_ptr<string> ipv6DestCidrIp_ = nullptr;
    // The source IPv6 CIDR block or IPv6 address.
    // 
    // This parameter is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    // 
    // >  This parameter is valid only for ECS instances that reside in VPCs and support IPv6 CIDR blocks. You cannot specify this parameter and `DestCidrIp` in the same request.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The network interface controller (NIC) type of the security group rule if the security group resides in the classic network. Specifies whether to check that the CPU tag set of the source host is the subset of the CPU tag set of the destination host. Valid values:
    // 
    // *   internet: public NIC.
    // 
    // *   intranet: internal NIC.
    // 
    //     *   If the security group resides in a VPC, this parameter is set to intranet by default and cannot be changed.
    //     *   If you specify only DestGroupId to create a rule that controls access to the specified security group, you must set this parameter to intranet.
    // 
    // Default value: internet.
    std::shared_ptr<string> nicType_ = nullptr;
    // The action of the security group rule. Specifies whether to check that the CPU tag set of the source host is the subset of the CPU tag set of the destination host. Valid values:
    // 
    // *   accept: allows outbound access.
    // *   drop: denies outbound access and returns no responses. In this case, the request times out or the connection cannot be established.
    // 
    // Default value: accept.
    std::shared_ptr<string> policy_ = nullptr;
    // The range of destination port numbers for the protocols specified in the security group rule. Specifies whether to check that the CPU tag set of the source host is the subset of the CPU tag set of the destination host. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Specify a port number range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
    // *   If the IpProtocol parameter is set to GRE, the port number range is -1/-1, which indicates all ports.
    // *   If you set IpProtocol to ALL, the port number range is -1/-1.
    std::shared_ptr<string> portRange_ = nullptr;
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The priority of the security group rule. A smaller value specifies a higher priority. Valid values: 1 to 100.
    // 
    // Default value: 1.
    std::shared_ptr<string> priority_ = nullptr;
    // The source IPv4 CIDR blocks and IPv4 addresses are supported.
    // 
    // This parameter is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The range of source port numbers for the protocols specified in the security group rule. Specifies whether to check that the CPU tag set of the source host is the subset of the CPU tag set of the destination host. Valid values:
    // 
    // *   If you set IpProtocol to TCP or UDP, the port number range is 1 to 65535. Specify a port number range in the format of \\<Start port number>/\\<End port number>. Example: 1/200.
    // *   If you set IpProtocol to ICMP, the port number range is -1/-1.
    // *   If you set IpProtocol to GRE, the port number range is -1/-1.
    // *   If you set IpProtocol to ALL, the port number range is -1/-1.
    // 
    // This property is used to support quintuple rules. For more information, see [Security group quintuple rules](https://help.aliyun.com/document_detail/97439.html).
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
