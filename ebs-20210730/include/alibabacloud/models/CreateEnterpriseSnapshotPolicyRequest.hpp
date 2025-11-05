// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo.hpp>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestRetainRule.hpp>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestSchedule.hpp>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules.hpp>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestStorageRule.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnterpriseSnapshotPolicyRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRule_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRule_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateEnterpriseSnapshotPolicyRequest() = default ;
    CreateEnterpriseSnapshotPolicyRequest(const CreateEnterpriseSnapshotPolicyRequest &) = default ;
    CreateEnterpriseSnapshotPolicyRequest(CreateEnterpriseSnapshotPolicyRequest &&) = default ;
    CreateEnterpriseSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequest() = default ;
    CreateEnterpriseSnapshotPolicyRequest& operator=(const CreateEnterpriseSnapshotPolicyRequest &) = default ;
    CreateEnterpriseSnapshotPolicyRequest& operator=(CreateEnterpriseSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->crossRegionCopyInfo_ == nullptr && return this->desc_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->retainRule_ == nullptr && return this->schedule_ == nullptr && return this->specialRetainRules_ == nullptr && return this->state_ == nullptr && return this->storageRule_ == nullptr
        && return this->tag_ == nullptr && return this->targetType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionCopyInfo Field Functions 
    bool hasCrossRegionCopyInfo() const { return this->crossRegionCopyInfo_ != nullptr;};
    void deleteCrossRegionCopyInfo() { this->crossRegionCopyInfo_ = nullptr;};
    inline const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo & crossRegionCopyInfo() const { DARABONBA_PTR_GET_CONST(crossRegionCopyInfo_, CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo) };
    inline CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo crossRegionCopyInfo() { DARABONBA_PTR_GET(crossRegionCopyInfo_, CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo) };
    inline CreateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(const CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo & crossRegionCopyInfo) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };
    inline CreateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo && crossRegionCopyInfo) { DARABONBA_PTR_SET_RVALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retainRule Field Functions 
    bool hasRetainRule() const { return this->retainRule_ != nullptr;};
    void deleteRetainRule() { this->retainRule_ = nullptr;};
    inline const CreateEnterpriseSnapshotPolicyRequestRetainRule & retainRule() const { DARABONBA_PTR_GET_CONST(retainRule_, CreateEnterpriseSnapshotPolicyRequestRetainRule) };
    inline CreateEnterpriseSnapshotPolicyRequestRetainRule retainRule() { DARABONBA_PTR_GET(retainRule_, CreateEnterpriseSnapshotPolicyRequestRetainRule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setRetainRule(const CreateEnterpriseSnapshotPolicyRequestRetainRule & retainRule) { DARABONBA_PTR_SET_VALUE(retainRule_, retainRule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setRetainRule(CreateEnterpriseSnapshotPolicyRequestRetainRule && retainRule) { DARABONBA_PTR_SET_RVALUE(retainRule_, retainRule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const CreateEnterpriseSnapshotPolicyRequestSchedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, CreateEnterpriseSnapshotPolicyRequestSchedule) };
    inline CreateEnterpriseSnapshotPolicyRequestSchedule schedule() { DARABONBA_PTR_GET(schedule_, CreateEnterpriseSnapshotPolicyRequestSchedule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setSchedule(const CreateEnterpriseSnapshotPolicyRequestSchedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setSchedule(CreateEnterpriseSnapshotPolicyRequestSchedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // specialRetainRules Field Functions 
    bool hasSpecialRetainRules() const { return this->specialRetainRules_ != nullptr;};
    void deleteSpecialRetainRules() { this->specialRetainRules_ = nullptr;};
    inline const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules & specialRetainRules() const { DARABONBA_PTR_GET_CONST(specialRetainRules_, CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules) };
    inline CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules specialRetainRules() { DARABONBA_PTR_GET(specialRetainRules_, CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules) };
    inline CreateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(const CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules & specialRetainRules) { DARABONBA_PTR_SET_VALUE(specialRetainRules_, specialRetainRules) };
    inline CreateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules && specialRetainRules) { DARABONBA_PTR_SET_RVALUE(specialRetainRules_, specialRetainRules) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRule Field Functions 
    bool hasStorageRule() const { return this->storageRule_ != nullptr;};
    void deleteStorageRule() { this->storageRule_ = nullptr;};
    inline const CreateEnterpriseSnapshotPolicyRequestStorageRule & storageRule() const { DARABONBA_PTR_GET_CONST(storageRule_, CreateEnterpriseSnapshotPolicyRequestStorageRule) };
    inline CreateEnterpriseSnapshotPolicyRequestStorageRule storageRule() { DARABONBA_PTR_GET(storageRule_, CreateEnterpriseSnapshotPolicyRequestStorageRule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setStorageRule(const CreateEnterpriseSnapshotPolicyRequestStorageRule & storageRule) { DARABONBA_PTR_SET_VALUE(storageRule_, storageRule) };
    inline CreateEnterpriseSnapshotPolicyRequest& setStorageRule(CreateEnterpriseSnapshotPolicyRequestStorageRule && storageRule) { DARABONBA_PTR_SET_RVALUE(storageRule_, storageRule) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEnterpriseSnapshotPolicyRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEnterpriseSnapshotPolicyRequestTag>) };
    inline vector<CreateEnterpriseSnapshotPolicyRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateEnterpriseSnapshotPolicyRequestTag>) };
    inline CreateEnterpriseSnapshotPolicyRequest& setTag(const vector<CreateEnterpriseSnapshotPolicyRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEnterpriseSnapshotPolicyRequest& setTag(vector<CreateEnterpriseSnapshotPolicyRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateEnterpriseSnapshotPolicyRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Snapshot replication destination information.
    std::shared_ptr<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo> crossRegionCopyInfo_ = nullptr;
    // The description of the policy.
    std::shared_ptr<string> desc_ = nullptr;
    // The name of the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which to assign the snapshot policy.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The snapshot retention rule.
    // 
    // This parameter is required.
    std::shared_ptr<CreateEnterpriseSnapshotPolicyRequestRetainRule> retainRule_ = nullptr;
    // The rule for scheduling.
    // 
    // This parameter is required.
    std::shared_ptr<CreateEnterpriseSnapshotPolicyRequestSchedule> schedule_ = nullptr;
    // The special snapshot retention rules.
    std::shared_ptr<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules> specialRetainRules_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // - ENABLED: Enable snapshot policy execution.
    // 
    // - DISABLED: Disable snapshot policy execution.
    std::shared_ptr<string> state_ = nullptr;
    // Advanced snapshot features.
    std::shared_ptr<CreateEnterpriseSnapshotPolicyRequestStorageRule> storageRule_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<CreateEnterpriseSnapshotPolicyRequestTag>> tag_ = nullptr;
    // Binding target type, valid value:
    // 
    // - DISK
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
