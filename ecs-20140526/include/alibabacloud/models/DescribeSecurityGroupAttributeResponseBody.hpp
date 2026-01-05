// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSecurityGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyIds, snapshotPolicyIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyIds, snapshotPolicyIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    DescribeSecurityGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotPolicyIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotPolicyIds& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotPolicyIds& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      };
      SnapshotPolicyIds() = default ;
      SnapshotPolicyIds(const SnapshotPolicyIds &) = default ;
      SnapshotPolicyIds(SnapshotPolicyIds &&) = default ;
      SnapshotPolicyIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotPolicyIds() = default ;
      SnapshotPolicyIds& operator=(const SnapshotPolicyIds &) = default ;
      SnapshotPolicyIds& operator=(SnapshotPolicyIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->snapshotPolicyId_ == nullptr; };
      // snapshotPolicyId Field Functions 
      bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
      void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
      inline const vector<string> & getSnapshotPolicyId() const { DARABONBA_PTR_GET_CONST(snapshotPolicyId_, vector<string>) };
      inline vector<string> getSnapshotPolicyId() { DARABONBA_PTR_GET(snapshotPolicyId_, vector<string>) };
      inline SnapshotPolicyIds& setSnapshotPolicyId(const vector<string> & snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };
      inline SnapshotPolicyIds& setSnapshotPolicyId(vector<string> && snapshotPolicyId) { DARABONBA_PTR_SET_RVALUE(snapshotPolicyId_, snapshotPolicyId) };


    protected:
      shared_ptr<vector<string>> snapshotPolicyId_ {};
    };

    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(Permission, permission_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
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
      class Permission : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Permission& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Permission& obj) { 
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
        Permission() = default ;
        Permission(const Permission &) = default ;
        Permission(Permission &&) = default ;
        Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Permission() = default ;
        Permission& operator=(const Permission &) = default ;
        Permission& operator=(Permission &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->destCidrIp_ == nullptr && this->destGroupId_ == nullptr && this->destGroupName_ == nullptr && this->destGroupOwnerAccount_ == nullptr
        && this->destPrefixListId_ == nullptr && this->destPrefixListName_ == nullptr && this->direction_ == nullptr && this->ipProtocol_ == nullptr && this->ipv6DestCidrIp_ == nullptr
        && this->ipv6SourceCidrIp_ == nullptr && this->nicType_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->portRangeListId_ == nullptr
        && this->portRangeListName_ == nullptr && this->priority_ == nullptr && this->securityGroupRuleId_ == nullptr && this->sourceCidrIp_ == nullptr && this->sourceGroupId_ == nullptr
        && this->sourceGroupName_ == nullptr && this->sourceGroupOwnerAccount_ == nullptr && this->sourcePortRange_ == nullptr && this->sourcePrefixListId_ == nullptr && this->sourcePrefixListName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Permission& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Permission& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destCidrIp Field Functions 
        bool hasDestCidrIp() const { return this->destCidrIp_ != nullptr;};
        void deleteDestCidrIp() { this->destCidrIp_ = nullptr;};
        inline string getDestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destCidrIp_, "") };
        inline Permission& setDestCidrIp(string destCidrIp) { DARABONBA_PTR_SET_VALUE(destCidrIp_, destCidrIp) };


        // destGroupId Field Functions 
        bool hasDestGroupId() const { return this->destGroupId_ != nullptr;};
        void deleteDestGroupId() { this->destGroupId_ = nullptr;};
        inline string getDestGroupId() const { DARABONBA_PTR_GET_DEFAULT(destGroupId_, "") };
        inline Permission& setDestGroupId(string destGroupId) { DARABONBA_PTR_SET_VALUE(destGroupId_, destGroupId) };


        // destGroupName Field Functions 
        bool hasDestGroupName() const { return this->destGroupName_ != nullptr;};
        void deleteDestGroupName() { this->destGroupName_ = nullptr;};
        inline string getDestGroupName() const { DARABONBA_PTR_GET_DEFAULT(destGroupName_, "") };
        inline Permission& setDestGroupName(string destGroupName) { DARABONBA_PTR_SET_VALUE(destGroupName_, destGroupName) };


        // destGroupOwnerAccount Field Functions 
        bool hasDestGroupOwnerAccount() const { return this->destGroupOwnerAccount_ != nullptr;};
        void deleteDestGroupOwnerAccount() { this->destGroupOwnerAccount_ = nullptr;};
        inline string getDestGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(destGroupOwnerAccount_, "") };
        inline Permission& setDestGroupOwnerAccount(string destGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(destGroupOwnerAccount_, destGroupOwnerAccount) };


        // destPrefixListId Field Functions 
        bool hasDestPrefixListId() const { return this->destPrefixListId_ != nullptr;};
        void deleteDestPrefixListId() { this->destPrefixListId_ = nullptr;};
        inline string getDestPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListId_, "") };
        inline Permission& setDestPrefixListId(string destPrefixListId) { DARABONBA_PTR_SET_VALUE(destPrefixListId_, destPrefixListId) };


        // destPrefixListName Field Functions 
        bool hasDestPrefixListName() const { return this->destPrefixListName_ != nullptr;};
        void deleteDestPrefixListName() { this->destPrefixListName_ = nullptr;};
        inline string getDestPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(destPrefixListName_, "") };
        inline Permission& setDestPrefixListName(string destPrefixListName) { DARABONBA_PTR_SET_VALUE(destPrefixListName_, destPrefixListName) };


        // direction Field Functions 
        bool hasDirection() const { return this->direction_ != nullptr;};
        void deleteDirection() { this->direction_ = nullptr;};
        inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
        inline Permission& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline Permission& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // ipv6DestCidrIp Field Functions 
        bool hasIpv6DestCidrIp() const { return this->ipv6DestCidrIp_ != nullptr;};
        void deleteIpv6DestCidrIp() { this->ipv6DestCidrIp_ = nullptr;};
        inline string getIpv6DestCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6DestCidrIp_, "") };
        inline Permission& setIpv6DestCidrIp(string ipv6DestCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6DestCidrIp_, ipv6DestCidrIp) };


        // ipv6SourceCidrIp Field Functions 
        bool hasIpv6SourceCidrIp() const { return this->ipv6SourceCidrIp_ != nullptr;};
        void deleteIpv6SourceCidrIp() { this->ipv6SourceCidrIp_ = nullptr;};
        inline string getIpv6SourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(ipv6SourceCidrIp_, "") };
        inline Permission& setIpv6SourceCidrIp(string ipv6SourceCidrIp) { DARABONBA_PTR_SET_VALUE(ipv6SourceCidrIp_, ipv6SourceCidrIp) };


        // nicType Field Functions 
        bool hasNicType() const { return this->nicType_ != nullptr;};
        void deleteNicType() { this->nicType_ = nullptr;};
        inline string getNicType() const { DARABONBA_PTR_GET_DEFAULT(nicType_, "") };
        inline Permission& setNicType(string nicType) { DARABONBA_PTR_SET_VALUE(nicType_, nicType) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline Permission& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline Permission& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // portRangeListId Field Functions 
        bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
        void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
        inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
        inline Permission& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


        // portRangeListName Field Functions 
        bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
        void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
        inline string getPortRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
        inline Permission& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline Permission& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // securityGroupRuleId Field Functions 
        bool hasSecurityGroupRuleId() const { return this->securityGroupRuleId_ != nullptr;};
        void deleteSecurityGroupRuleId() { this->securityGroupRuleId_ = nullptr;};
        inline string getSecurityGroupRuleId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupRuleId_, "") };
        inline Permission& setSecurityGroupRuleId(string securityGroupRuleId) { DARABONBA_PTR_SET_VALUE(securityGroupRuleId_, securityGroupRuleId) };


        // sourceCidrIp Field Functions 
        bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
        void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
        inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
        inline Permission& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


        // sourceGroupId Field Functions 
        bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
        void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
        inline string getSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
        inline Permission& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


        // sourceGroupName Field Functions 
        bool hasSourceGroupName() const { return this->sourceGroupName_ != nullptr;};
        void deleteSourceGroupName() { this->sourceGroupName_ = nullptr;};
        inline string getSourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupName_, "") };
        inline Permission& setSourceGroupName(string sourceGroupName) { DARABONBA_PTR_SET_VALUE(sourceGroupName_, sourceGroupName) };


        // sourceGroupOwnerAccount Field Functions 
        bool hasSourceGroupOwnerAccount() const { return this->sourceGroupOwnerAccount_ != nullptr;};
        void deleteSourceGroupOwnerAccount() { this->sourceGroupOwnerAccount_ = nullptr;};
        inline string getSourceGroupOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupOwnerAccount_, "") };
        inline Permission& setSourceGroupOwnerAccount(string sourceGroupOwnerAccount) { DARABONBA_PTR_SET_VALUE(sourceGroupOwnerAccount_, sourceGroupOwnerAccount) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline Permission& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


        // sourcePrefixListId Field Functions 
        bool hasSourcePrefixListId() const { return this->sourcePrefixListId_ != nullptr;};
        void deleteSourcePrefixListId() { this->sourcePrefixListId_ = nullptr;};
        inline string getSourcePrefixListId() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListId_, "") };
        inline Permission& setSourcePrefixListId(string sourcePrefixListId) { DARABONBA_PTR_SET_VALUE(sourcePrefixListId_, sourcePrefixListId) };


        // sourcePrefixListName Field Functions 
        bool hasSourcePrefixListName() const { return this->sourcePrefixListName_ != nullptr;};
        void deleteSourcePrefixListName() { this->sourcePrefixListName_ = nullptr;};
        inline string getSourcePrefixListName() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefixListName_, "") };
        inline Permission& setSourcePrefixListName(string sourcePrefixListName) { DARABONBA_PTR_SET_VALUE(sourcePrefixListName_, sourcePrefixListName) };


      protected:
        // The time when the security group rule was created. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The description of the security group.
        shared_ptr<string> description_ {};
        // The destination CIDR block for outbound access control.
        shared_ptr<string> destCidrIp_ {};
        // The ID of the destination security group for outbound access control.
        shared_ptr<string> destGroupId_ {};
        // The name of the destination security group.
        shared_ptr<string> destGroupName_ {};
        // The ID of the Alibaba Cloud account to which the destination security group belongs.
        shared_ptr<string> destGroupOwnerAccount_ {};
        // The ID of the destination prefix list for outbound access control.
        shared_ptr<string> destPrefixListId_ {};
        // The name of the destination prefix list.
        shared_ptr<string> destPrefixListName_ {};
        // The direction in which the security group rule is applied.
        shared_ptr<string> direction_ {};
        // The transport layer protocol.
        shared_ptr<string> ipProtocol_ {};
        // The destination IPv6 CIDR block.
        shared_ptr<string> ipv6DestCidrIp_ {};
        // The source IPv6 CIDR block.
        shared_ptr<string> ipv6SourceCidrIp_ {};
        // The network type.
        shared_ptr<string> nicType_ {};
        // The access control policy.
        shared_ptr<string> policy_ {};
        // The port range.
        shared_ptr<string> portRange_ {};
        // The ID of the port list.
        shared_ptr<string> portRangeListId_ {};
        // The name of the port list.
        shared_ptr<string> portRangeListName_ {};
        // The priority of the rule.
        shared_ptr<string> priority_ {};
        // The ID of the security group rule.
        shared_ptr<string> securityGroupRuleId_ {};
        // The source CIDR block for inbound access control.
        shared_ptr<string> sourceCidrIp_ {};
        // The source security group for inbound access control.
        shared_ptr<string> sourceGroupId_ {};
        // The name of the source security group.
        shared_ptr<string> sourceGroupName_ {};
        // The ID of the Alibaba Cloud account to which the source security group belongs.
        shared_ptr<string> sourceGroupOwnerAccount_ {};
        // The source port range.
        shared_ptr<string> sourcePortRange_ {};
        // The ID of the source prefix list for inbound access control.
        shared_ptr<string> sourcePrefixListId_ {};
        // The name of the source prefix list.
        shared_ptr<string> sourcePrefixListName_ {};
      };

      virtual bool empty() const override { return this->permission_ == nullptr; };
      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline const vector<Permissions::Permission> & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, vector<Permissions::Permission>) };
      inline vector<Permissions::Permission> getPermission() { DARABONBA_PTR_GET(permission_, vector<Permissions::Permission>) };
      inline Permissions& setPermission(const vector<Permissions::Permission> & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
      inline Permissions& setPermission(vector<Permissions::Permission> && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    protected:
      shared_ptr<vector<Permissions::Permission>> permission_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->innerAccessPolicy_ == nullptr && this->nextToken_ == nullptr && this->permissions_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupName_ == nullptr && this->snapshotPolicyIds_ == nullptr && this->vpcId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // innerAccessPolicy Field Functions 
    bool hasInnerAccessPolicy() const { return this->innerAccessPolicy_ != nullptr;};
    void deleteInnerAccessPolicy() { this->innerAccessPolicy_ = nullptr;};
    inline string getInnerAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(innerAccessPolicy_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setInnerAccessPolicy(string innerAccessPolicy) { DARABONBA_PTR_SET_VALUE(innerAccessPolicy_, innerAccessPolicy) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBody::Permissions & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, DescribeSecurityGroupAttributeResponseBody::Permissions) };
    inline DescribeSecurityGroupAttributeResponseBody::Permissions getPermissions() { DARABONBA_PTR_GET(permissions_, DescribeSecurityGroupAttributeResponseBody::Permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(const DescribeSecurityGroupAttributeResponseBody::Permissions & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(DescribeSecurityGroupAttributeResponseBody::Permissions && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    // snapshotPolicyIds Field Functions 
    bool hasSnapshotPolicyIds() const { return this->snapshotPolicyIds_ != nullptr;};
    void deleteSnapshotPolicyIds() { this->snapshotPolicyIds_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds & getSnapshotPolicyIds() const { DARABONBA_PTR_GET_CONST(snapshotPolicyIds_, DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds getSnapshotPolicyIds() { DARABONBA_PTR_GET(snapshotPolicyIds_, DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBody& setSnapshotPolicyIds(const DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds & snapshotPolicyIds) { DARABONBA_PTR_SET_VALUE(snapshotPolicyIds_, snapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBody& setSnapshotPolicyIds(DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds && snapshotPolicyIds) { DARABONBA_PTR_SET_RVALUE(snapshotPolicyIds_, snapshotPolicyIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The description of the security group.
    shared_ptr<string> description_ {};
    // The access control policy of the security group. Valid values:
    // 
    // *   Accept: All instances in the security group can communicate with each other.
    // *   Drop: All instances in the security group are isolated from each other.
    shared_ptr<string> innerAccessPolicy_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If the return value of this parameter is empty when you specify `MaxResults` and `NextToken` for a paged query, no more results are to be returned.
    shared_ptr<string> nextToken_ {};
    // Details about the security group rules.
    shared_ptr<DescribeSecurityGroupAttributeResponseBody::Permissions> permissions_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The name of the security group.
    shared_ptr<string> securityGroupName_ {};
    shared_ptr<DescribeSecurityGroupAttributeResponseBody::SnapshotPolicyIds> snapshotPolicyIds_ {};
    // The ID of the VPC. If a VPC ID is returned, the network type of the security group is VPC. If no VPC ID is returned, the network type of the security group is classic network.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
