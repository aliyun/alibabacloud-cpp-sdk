// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfoShrink_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRuleShrink_);
      DARABONBA_PTR_TO_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRulesShrink_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRuleShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRulesShrink_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateEnterpriseSnapshotPolicyShrinkRequest() = default ;
    CreateEnterpriseSnapshotPolicyShrinkRequest(const CreateEnterpriseSnapshotPolicyShrinkRequest &) = default ;
    CreateEnterpriseSnapshotPolicyShrinkRequest(CreateEnterpriseSnapshotPolicyShrinkRequest &&) = default ;
    CreateEnterpriseSnapshotPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyShrinkRequest() = default ;
    CreateEnterpriseSnapshotPolicyShrinkRequest& operator=(const CreateEnterpriseSnapshotPolicyShrinkRequest &) = default ;
    CreateEnterpriseSnapshotPolicyShrinkRequest& operator=(CreateEnterpriseSnapshotPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be 0 to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // Each tag key must have a unique tag value. You can specify at most 20 tag values in each call.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->crossRegionCopyInfoShrink_ == nullptr && this->desc_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->retainRuleShrink_ == nullptr && this->scheduleShrink_ == nullptr && this->specialRetainRulesShrink_ == nullptr && this->state_ == nullptr && this->storageRuleShrink_ == nullptr
        && this->tag_ == nullptr && this->targetType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionCopyInfoShrink Field Functions 
    bool hasCrossRegionCopyInfoShrink() const { return this->crossRegionCopyInfoShrink_ != nullptr;};
    void deleteCrossRegionCopyInfoShrink() { this->crossRegionCopyInfoShrink_ = nullptr;};
    inline string getCrossRegionCopyInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(crossRegionCopyInfoShrink_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setCrossRegionCopyInfoShrink(string crossRegionCopyInfoShrink) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfoShrink_, crossRegionCopyInfoShrink) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retainRuleShrink Field Functions 
    bool hasRetainRuleShrink() const { return this->retainRuleShrink_ != nullptr;};
    void deleteRetainRuleShrink() { this->retainRuleShrink_ = nullptr;};
    inline string getRetainRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(retainRuleShrink_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setRetainRuleShrink(string retainRuleShrink) { DARABONBA_PTR_SET_VALUE(retainRuleShrink_, retainRuleShrink) };


    // scheduleShrink Field Functions 
    bool hasScheduleShrink() const { return this->scheduleShrink_ != nullptr;};
    void deleteScheduleShrink() { this->scheduleShrink_ = nullptr;};
    inline string getScheduleShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleShrink_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setScheduleShrink(string scheduleShrink) { DARABONBA_PTR_SET_VALUE(scheduleShrink_, scheduleShrink) };


    // specialRetainRulesShrink Field Functions 
    bool hasSpecialRetainRulesShrink() const { return this->specialRetainRulesShrink_ != nullptr;};
    void deleteSpecialRetainRulesShrink() { this->specialRetainRulesShrink_ = nullptr;};
    inline string getSpecialRetainRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(specialRetainRulesShrink_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setSpecialRetainRulesShrink(string specialRetainRulesShrink) { DARABONBA_PTR_SET_VALUE(specialRetainRulesShrink_, specialRetainRulesShrink) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRuleShrink Field Functions 
    bool hasStorageRuleShrink() const { return this->storageRuleShrink_ != nullptr;};
    void deleteStorageRuleShrink() { this->storageRuleShrink_ = nullptr;};
    inline string getStorageRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(storageRuleShrink_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setStorageRuleShrink(string storageRuleShrink) { DARABONBA_PTR_SET_VALUE(storageRuleShrink_, storageRuleShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag>) };
    inline vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag>) };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setTag(const vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setTag(vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateEnterpriseSnapshotPolicyShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Snapshot replication destination information.
    shared_ptr<string> crossRegionCopyInfoShrink_ {};
    // The description of the policy.
    shared_ptr<string> desc_ {};
    // The name of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the snapshot policy.
    shared_ptr<string> resourceGroupId_ {};
    // The snapshot retention rule.
    // 
    // This parameter is required.
    shared_ptr<string> retainRuleShrink_ {};
    // The rule for scheduling.
    // 
    // This parameter is required.
    shared_ptr<string> scheduleShrink_ {};
    // The special snapshot retention rules.
    shared_ptr<string> specialRetainRulesShrink_ {};
    // The status of the policy. Valid values:
    // 
    // - ENABLED: Enable snapshot policy execution.
    // 
    // - DISABLED: Disable snapshot policy execution.
    shared_ptr<string> state_ {};
    // Advanced snapshot features.
    shared_ptr<string> storageRuleShrink_ {};
    // The list of tags.
    shared_ptr<vector<CreateEnterpriseSnapshotPolicyShrinkRequest::Tag>> tag_ {};
    // Binding target type, valid value:
    // 
    // - DISK
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
