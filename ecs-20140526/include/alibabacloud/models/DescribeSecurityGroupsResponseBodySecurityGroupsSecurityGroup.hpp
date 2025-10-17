// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(GroupToGroupRuleCount, groupToGroupRuleCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(GroupToGroupRuleCount, groupToGroupRuleCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &&) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& operator=(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& operator=(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableInstanceAmount_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->ecsCount_ == nullptr && return this->groupToGroupRuleCount_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->ruleCount_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupName_ == nullptr && return this->securityGroupType_ == nullptr && return this->serviceID_ == nullptr
        && return this->serviceManaged_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr; };
    // availableInstanceAmount Field Functions 
    bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
    void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
    inline int32_t availableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // groupToGroupRuleCount Field Functions 
    bool hasGroupToGroupRuleCount() const { return this->groupToGroupRuleCount_ != nullptr;};
    void deleteGroupToGroupRuleCount() { this->groupToGroupRuleCount_ = nullptr;};
    inline int32_t groupToGroupRuleCount() const { DARABONBA_PTR_GET_DEFAULT(groupToGroupRuleCount_, 0) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setGroupToGroupRuleCount(int32_t groupToGroupRuleCount) { DARABONBA_PTR_SET_VALUE(groupToGroupRuleCount_, groupToGroupRuleCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    // securityGroupType Field Functions 
    bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
    void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
    inline string securityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t serviceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags) };
    inline Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setTags(const Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setTags(Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of private IP addresses that can be added to the security group. For more information, see the "Security group capacity" section in [Basic security groups and advanced security groups](~~605897#section-kj9-e46-6v5~~).
    // 
    // If you set IsQueryEcsCount to True, the return value of AvailableInstanceAmount is valid.
    // 
    // >  This parameter is deprecated. The returned quantity is provided only for reference. The actual quantity may differ from the returned quantity.
    std::shared_ptr<int32_t> availableInstanceAmount_ = nullptr;
    // The time when the security group was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The number of private IP addresses that are contained in the security group. For more information, see the "Security group capacity" section in [Basic security groups and advanced security groups](~~605897#section-kj9-e46-6v5~~).
    // 
    // If you set IsQueryEcsCount to True, the return value of EcsCount is valid.
    // 
    // >  This parameter is deprecated. The returned quantity is provided only for reference. The actual quantity may differ from the returned quantity.
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    // The number of rules that reference security groups in the security group.
    std::shared_ptr<int32_t> groupToGroupRuleCount_ = nullptr;
    // The ID of the resource group to which the security group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of rules in the security group.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
    // The type of the security group. Valid values:
    // 
    // *   normal: basic security group
    // *   enterprise: advanced security group
    std::shared_ptr<string> securityGroupType_ = nullptr;
    // The ID of the distributor to which the security group belongs.
    std::shared_ptr<int64_t> serviceID_ = nullptr;
    // Indicates whether the user of the security group is an Alibaba Cloud service or a distributor.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The tags of the security group.
    std::shared_ptr<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags> tags_ = nullptr;
    // The ID of the VPC to which the security group belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
