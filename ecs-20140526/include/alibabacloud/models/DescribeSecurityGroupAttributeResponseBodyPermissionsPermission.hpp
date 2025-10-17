// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONSPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONSPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBodyPermissionsPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_TO_JSON(DestGroupId, destGroupId_);
      DARABONBA_PTR_TO_JSON(DestGroupName, destGroupName_);
      DARABONBA_PTR_TO_JSON(DestGroupOwnerAccount, destGroupOwnerAccount_);
      DARABONBA_PTR_TO_JSON(DestPrefixListId, destPrefixListId_);
      DARABONBA_PTR_TO_JSON(DestPrefixListName, destPrefixListName_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_TO_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_TO_JSON(NicType, nicType_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SecurityGroupRuleId, securityGroupRuleId_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_TO_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceGroupName, sourceGroupName_);
      DARABONBA_PTR_TO_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(SourcePrefixListId, sourcePrefixListId_);
      DARABONBA_PTR_TO_JSON(SourcePrefixListName, sourcePrefixListName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidrIp, destCidrIp_);
      DARABONBA_PTR_FROM_JSON(DestGroupId, destGroupId_);
      DARABONBA_PTR_FROM_JSON(DestGroupName, destGroupName_);
      DARABONBA_PTR_FROM_JSON(DestGroupOwnerAccount, destGroupOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(DestPrefixListId, destPrefixListId_);
      DARABONBA_PTR_FROM_JSON(DestPrefixListName, destPrefixListName_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Ipv6DestCidrIp, ipv6DestCidrIp_);
      DARABONBA_PTR_FROM_JSON(Ipv6SourceCidrIp, ipv6SourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(NicType, nicType_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupRuleId, securityGroupRuleId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      DARABONBA_PTR_FROM_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceGroupName, sourceGroupName_);
      DARABONBA_PTR_FROM_JSON(SourceGroupOwnerAccount, sourceGroupOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(SourcePrefixListId, sourcePrefixListId_);
      DARABONBA_PTR_FROM_JSON(SourcePrefixListName, sourcePrefixListName_);
    };
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &&) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBodyPermissionsPermission() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& operator=(const DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& operator=(DescribeSecurityGroupAttributeResponseBodyPermissionsPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->destCidrIp_ == nullptr && return this->destGroupId_ == nullptr && return this->destGroupName_ == nullptr && return this->destGroupOwnerAccount_ == nullptr
        && return this->destPrefixListId_ == nullptr && return this->destPrefixListName_ == nullptr && return this->direction_ == nullptr && return this->ipProtocol_ == nullptr && return this->ipv6DestCidrIp_ == nullptr
        && return this->ipv6SourceCidrIp_ == nullptr && return this->nicType_ == nullptr && return this->policy_ == nullptr && return this->portRange_ == nullptr && return this->portRangeListId_ == nullptr
        && return this->portRangeListName_ == nullptr && return this->priority_ == nullptr && return this->securityGroupRuleId_ == nullptr && return this->sourceCidrIp_ == nullptr && return this->sourceGroupId_ == nullptr
        && return this->sourceGroupName_ == nullptr && return this->sourceGroupOwnerAccount_ == nullptr && return this->sourcePortRange_ == nullptr && return this->sourcePrefixListId_ == nullptr && return this->sourcePrefixListName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidrIp Field Functions 
    bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
    void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
    inline string destCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


    // destGroupId Field Functions 
    bool hasDestGroupId() const { return this->destGroupId_ != nullptr;};
    void deleteDestGroupId() { this->destGroupId_ = nullptr;};
    inline string destGroupId() const { DARABONBA_PTR_GET_DEFAULT(destGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestGroupId(string destGroupId) { DARABONBA_PTR_SET_VALUE(destGroupId_, destGroupId) };


    // destGroupName Field Functions 
    bool hasDestGroupName() const { return this->destGroupName_ != nullptr;};
    void deleteDestGroupName() { this->destGroupName_ = nullptr;};
    inline string destGroupName() const { DARABONBA_PTR_GET_DEFAULT(destGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestGroupName(string destGroupName) { DARABONBA_PTR_SET_VALUE(destGroupName_, destGroupName) };


    // destGroupOwnerAccount Field Functions 
    bool hasDestGroupOwnerAccount() const { return this->destGroupOwnerAccount_ != nullptr;};
    void deleteDestGroupOwnerAccount() { this->destGroupOwnerAccount_ = nullptr;};
    inline string destGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerAccount_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestGroupOwnerAccount(string destGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(destGroupOwnerAccount_, destGroupOwnerAccount) };


    // destPrefixListId Field Functions 
    bool hasDestPrefixListId() const { return this->destPrefixListId_ != nullptr;};
    void deleteDestPrefixListId() { this->destPrefixListId_ = nullptr;};
    inline string destPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestPrefixListId(string destPrefixListId) { DARABONBA_PTR_SET_VALUE(destPrefixListId_, destPrefixListId) };


    // destPrefixListName Field Functions 
    bool hasDestPrefixListName() const { return this->destPrefixListName_ != nullptr;};
    void deleteDestPrefixListName() { this->destPrefixListName_ = nullptr;};
    inline string destPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListName_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDestPrefixListName(string destPrefixListName) { DARABONBA_PTR_SET_VALUE(destPrefixListName_, destPrefixListName) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipv6DestCidrIp Field Functions 
    bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
    void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
    inline string ipv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


    // ipv6SourceCidrIp Field Functions 
    bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
    void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
    inline string ipv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


    // nicType Field Functions 
    bool hasNicType() const { return this->nicType_ != nullptr;};
    void deleteNicType() { this->nicType_ = nullptr;};
    inline string nicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // portRangeListName Field Functions 
    bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
    void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
    inline string portRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // securityGroupRuleId Field Functions 
    bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
    void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
    inline string securityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    // sourceGroupId Field Functions 
    bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
    void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
    inline string sourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


    // sourceGroupName Field Functions 
    bool hasSourceGroupName() const { return this->sourceGroupName_ != nullptr;};
    void deleteSourceGroupName() { this->sourceGroupName_ = nullptr;};
    inline string sourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourceGroupName(string sourceGroupName) { DARABONBA_PTR_SET_VALUE(sourceGroupName_, sourceGroupName) };


    // sourceGroupOwnerAccount Field Functions 
    bool hasSourceGroupOwnerAccount() const { return this->sourceGroupOwnerAccount_ != nullptr;};
    void deleteSourceGroupOwnerAccount() { this->sourceGroupOwnerAccount_ = nullptr;};
    inline string sourceGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerAccount_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourceGroupOwnerAccount(string sourceGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerAccount_, sourceGroupOwnerAccount) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // sourcePrefixListId Field Functions 
    bool hasSourcePrefixListId() const { return this->sourcePrefixListId_ != nullptr;};
    void deleteSourcePrefixListId() { this->sourcePrefixListId_ = nullptr;};
    inline string sourcePrefixListId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListId_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourcePrefixListId(string sourcePrefixListId) { DARABONBA_PTR_SET_VALUE(sourcePrefixListId_, sourcePrefixListId) };


    // sourcePrefixListName Field Functions 
    bool hasSourcePrefixListName() const { return this->sourcePrefixListName_ != nullptr;};
    void deleteSourcePrefixListName() { this->sourcePrefixListName_ = nullptr;};
    inline string sourcePrefixListName() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListName_, "") };
    inline DescribeSecurityGroupAttributeResponseBodyPermissionsPermission& setSourcePrefixListName(string sourcePrefixListName) { DARABONBA_PTR_SET_VALUE(sourcePrefixListName_, sourcePrefixListName) };


  protected:
    // The time when the security group rule was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block for outbound access control.
    std::shared_ptr<string> destCidrIp_ = nullptr;
    // The ID of the destination security group for outbound access control.
    std::shared_ptr<string> destGroupId_ = nullptr;
    // The name of the destination security group.
    std::shared_ptr<string> destGroupName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the destination security group belongs.
    std::shared_ptr<string> destGroupOwnerAccount_ = nullptr;
    // The ID of the destination prefix list for outbound access control.
    std::shared_ptr<string> destPrefixListId_ = nullptr;
    // The name of the destination prefix list.
    std::shared_ptr<string> destPrefixListName_ = nullptr;
    // The direction in which the security group rule is applied.
    std::shared_ptr<string> direction_ = nullptr;
    // The transport layer protocol.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The destination IPv6 CIDR block.
    std::shared_ptr<string> ipv6DestCidrIp_ = nullptr;
    // The source IPv6 CIDR block.
    std::shared_ptr<string> ipv6SourceCidrIp_ = nullptr;
    // The network type.
    std::shared_ptr<string> nicType_ = nullptr;
    // The access control policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The port range.
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the port list.
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The name of the port list.
    std::shared_ptr<string> portRangeListName_ = nullptr;
    // The priority of the rule.
    std::shared_ptr<string> priority_ = nullptr;
    // The ID of the security group rule.
    std::shared_ptr<string> securityGroupRuleId_ = nullptr;
    // The source CIDR block for inbound access control.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
    // The source security group for inbound access control.
    std::shared_ptr<string> sourceGroupId_ = nullptr;
    // The name of the source security group.
    std::shared_ptr<string> sourceGroupName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the source security group belongs.
    std::shared_ptr<string> sourceGroupOwnerAccount_ = nullptr;
    // The source port range.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
    // The ID of the source prefix list for inbound access control.
    std::shared_ptr<string> sourcePrefixListId_ = nullptr;
    // The name of the source prefix list.
    std::shared_ptr<string> sourcePrefixListName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
