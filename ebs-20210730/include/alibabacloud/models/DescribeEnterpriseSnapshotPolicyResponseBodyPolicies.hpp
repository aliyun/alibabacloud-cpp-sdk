// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule.hpp>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule.hpp>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules.hpp>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule.hpp>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(ManagedForEcs, managedForEcs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRule_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetCount, targetCount_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(ManagedForEcs, managedForEcs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRule_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetCount, targetCount_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies(const DescribeEnterpriseSnapshotPolicyResponseBodyPolicies &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies(DescribeEnterpriseSnapshotPolicyResponseBodyPolicies &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPolicies() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPolicies &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->crossRegionCopyInfo_ == nullptr && return this->desc_ == nullptr && return this->diskIds_ == nullptr && return this->managedForEcs_ == nullptr && return this->name_ == nullptr
        && return this->policyId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->retainRule_ == nullptr && return this->schedule_ == nullptr && return this->specialRetainRules_ == nullptr
        && return this->state_ == nullptr && return this->storageRule_ == nullptr && return this->tags_ == nullptr && return this->targetCount_ == nullptr && return this->targetType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossRegionCopyInfo Field Functions 
    bool hasCrossRegionCopyInfo() const { return this->crossRegionCopyInfo_ != nullptr;};
    void deleteCrossRegionCopyInfo() { this->crossRegionCopyInfo_ = nullptr;};
    inline const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo & crossRegionCopyInfo() const { DARABONBA_PTR_GET_CONST(crossRegionCopyInfo_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo) };
    inline Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo crossRegionCopyInfo() { DARABONBA_PTR_GET(crossRegionCopyInfo_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setCrossRegionCopyInfo(const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo & crossRegionCopyInfo) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setCrossRegionCopyInfo(Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo && crossRegionCopyInfo) { DARABONBA_PTR_SET_RVALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & diskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> diskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // managedForEcs Field Functions 
    bool hasManagedForEcs() const { return this->managedForEcs_ != nullptr;};
    void deleteManagedForEcs() { this->managedForEcs_ = nullptr;};
    inline bool managedForEcs() const { DARABONBA_PTR_GET_DEFAULT(managedForEcs_, false) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setManagedForEcs(bool managedForEcs) { DARABONBA_PTR_SET_VALUE(managedForEcs_, managedForEcs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retainRule Field Functions 
    bool hasRetainRule() const { return this->retainRule_ != nullptr;};
    void deleteRetainRule() { this->retainRule_ = nullptr;};
    inline const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule & retainRule() const { DARABONBA_PTR_GET_CONST(retainRule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule) };
    inline Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule retainRule() { DARABONBA_PTR_GET(retainRule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setRetainRule(const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule & retainRule) { DARABONBA_PTR_SET_VALUE(retainRule_, retainRule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setRetainRule(Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule && retainRule) { DARABONBA_PTR_SET_RVALUE(retainRule_, retainRule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule) };
    inline Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule schedule() { DARABONBA_PTR_GET(schedule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setSchedule(const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setSchedule(Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // specialRetainRules Field Functions 
    bool hasSpecialRetainRules() const { return this->specialRetainRules_ != nullptr;};
    void deleteSpecialRetainRules() { this->specialRetainRules_ = nullptr;};
    inline const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules & specialRetainRules() const { DARABONBA_PTR_GET_CONST(specialRetainRules_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules) };
    inline Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules specialRetainRules() { DARABONBA_PTR_GET(specialRetainRules_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setSpecialRetainRules(const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules & specialRetainRules) { DARABONBA_PTR_SET_VALUE(specialRetainRules_, specialRetainRules) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setSpecialRetainRules(Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules && specialRetainRules) { DARABONBA_PTR_SET_RVALUE(specialRetainRules_, specialRetainRules) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRule Field Functions 
    bool hasStorageRule() const { return this->storageRule_ != nullptr;};
    void deleteStorageRule() { this->storageRule_ = nullptr;};
    inline const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule & storageRule() const { DARABONBA_PTR_GET_CONST(storageRule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule) };
    inline Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule storageRule() { DARABONBA_PTR_GET(storageRule_, Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setStorageRule(const Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule & storageRule) { DARABONBA_PTR_SET_VALUE(storageRule_, storageRule) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setStorageRule(Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule && storageRule) { DARABONBA_PTR_SET_RVALUE(storageRule_, storageRule) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags>) };
    inline vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags>) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setTags(const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setTags(vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetCount Field Functions 
    bool hasTargetCount() const { return this->targetCount_ != nullptr;};
    void deleteTargetCount() { this->targetCount_ = nullptr;};
    inline int32_t targetCount() const { DARABONBA_PTR_GET_DEFAULT(targetCount_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setTargetCount(int32_t targetCount) { DARABONBA_PTR_SET_VALUE(targetCount_, targetCount) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPolicies& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the enterprise-level snapshot policy was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The replication rule of snapshots in the enterprise-level snapshot policy.
    std::shared_ptr<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo> crossRegionCopyInfo_ = nullptr;
    // The description of the enterprise-level snapshot policy.
    std::shared_ptr<string> desc_ = nullptr;
    // The disks that are associated with the snapshot policy.
    std::shared_ptr<vector<string>> diskIds_ = nullptr;
    // Indicates whether snapshots are managed.
    std::shared_ptr<bool> managedForEcs_ = nullptr;
    // The name of the enterprise-level snapshot policy.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the enterprise-level snapshot policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // the resource group
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retention rule of the enterprise-level snapshot policy.
    std::shared_ptr<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule> retainRule_ = nullptr;
    // The scheduling rule of the enterprise-level snapshot policy.
    std::shared_ptr<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule> schedule_ = nullptr;
    // The special retention rules of the enterprise-level snapshot policy.
    std::shared_ptr<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules> specialRetainRules_ = nullptr;
    // The status of the enterprise-level snapshot policy.
    std::shared_ptr<string> state_ = nullptr;
    // The storage rule of snapshots in the enterprise-level snapshot policy.
    std::shared_ptr<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule> storageRule_ = nullptr;
    // the pair tags
    std::shared_ptr<vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags>> tags_ = nullptr;
    // The number of objects that are associated with the enterprise-level snapshot policy.
    std::shared_ptr<int32_t> targetCount_ = nullptr;
    // The type of the enterprise-level snapshot policy.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
