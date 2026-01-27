// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class UpdateEnterpriseSnapshotPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseSnapshotPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfoShrink_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRuleShrink_);
      DARABONBA_PTR_TO_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRulesShrink_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRuleShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseSnapshotPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Schedule, scheduleShrink_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRulesShrink_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRuleShrink_);
    };
    UpdateEnterpriseSnapshotPolicyShrinkRequest() = default ;
    UpdateEnterpriseSnapshotPolicyShrinkRequest(const UpdateEnterpriseSnapshotPolicyShrinkRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyShrinkRequest(UpdateEnterpriseSnapshotPolicyShrinkRequest &&) = default ;
    UpdateEnterpriseSnapshotPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseSnapshotPolicyShrinkRequest() = default ;
    UpdateEnterpriseSnapshotPolicyShrinkRequest& operator=(const UpdateEnterpriseSnapshotPolicyShrinkRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyShrinkRequest& operator=(UpdateEnterpriseSnapshotPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->crossRegionCopyInfoShrink_ == nullptr && this->desc_ == nullptr && this->name_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr
        && this->retainRuleShrink_ == nullptr && this->scheduleShrink_ == nullptr && this->specialRetainRulesShrink_ == nullptr && this->state_ == nullptr && this->storageRuleShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionCopyInfoShrink Field Functions 
    bool hasCrossRegionCopyInfoShrink() const { return this->crossRegionCopyInfoShrink_ != nullptr;};
    void deleteCrossRegionCopyInfoShrink() { this->crossRegionCopyInfoShrink_ = nullptr;};
    inline string getCrossRegionCopyInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(crossRegionCopyInfoShrink_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setCrossRegionCopyInfoShrink(string crossRegionCopyInfoShrink) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfoShrink_, crossRegionCopyInfoShrink) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainRuleShrink Field Functions 
    bool hasRetainRuleShrink() const { return this->retainRuleShrink_ != nullptr;};
    void deleteRetainRuleShrink() { this->retainRuleShrink_ = nullptr;};
    inline string getRetainRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(retainRuleShrink_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setRetainRuleShrink(string retainRuleShrink) { DARABONBA_PTR_SET_VALUE(retainRuleShrink_, retainRuleShrink) };


    // scheduleShrink Field Functions 
    bool hasScheduleShrink() const { return this->scheduleShrink_ != nullptr;};
    void deleteScheduleShrink() { this->scheduleShrink_ = nullptr;};
    inline string getScheduleShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleShrink_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setScheduleShrink(string scheduleShrink) { DARABONBA_PTR_SET_VALUE(scheduleShrink_, scheduleShrink) };


    // specialRetainRulesShrink Field Functions 
    bool hasSpecialRetainRulesShrink() const { return this->specialRetainRulesShrink_ != nullptr;};
    void deleteSpecialRetainRulesShrink() { this->specialRetainRulesShrink_ = nullptr;};
    inline string getSpecialRetainRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(specialRetainRulesShrink_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setSpecialRetainRulesShrink(string specialRetainRulesShrink) { DARABONBA_PTR_SET_VALUE(specialRetainRulesShrink_, specialRetainRulesShrink) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRuleShrink Field Functions 
    bool hasStorageRuleShrink() const { return this->storageRuleShrink_ != nullptr;};
    void deleteStorageRuleShrink() { this->storageRuleShrink_ = nullptr;};
    inline string getStorageRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(storageRuleShrink_, "") };
    inline UpdateEnterpriseSnapshotPolicyShrinkRequest& setStorageRuleShrink(string storageRuleShrink) { DARABONBA_PTR_SET_VALUE(storageRuleShrink_, storageRuleShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Snapshot replication destination information.
    shared_ptr<string> crossRegionCopyInfoShrink_ {};
    // The description of the policy.
    shared_ptr<string> desc_ {};
    // The name of the policy.
    shared_ptr<string> name_ {};
    // The id of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Snapshot retention rule.
    shared_ptr<string> retainRuleShrink_ {};
    // The rule for scheduling.
    shared_ptr<string> scheduleShrink_ {};
    // The special snapshot retention rules.
    shared_ptr<string> specialRetainRulesShrink_ {};
    // The status of the policy. Valid values:
    // 
    // *   **ENABLED**: Enable snapshot policy execution.
    // *   **DISABLED**: Disable snapshot policy execution.
    shared_ptr<string> state_ {};
    // Advanced snapshot features.
    shared_ptr<string> storageRuleShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
