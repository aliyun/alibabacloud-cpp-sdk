// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo.hpp>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestRetainRule.hpp>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestSchedule.hpp>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules.hpp>
#include <alibabacloud/models/UpdateEnterpriseSnapshotPolicyRequestStorageRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class UpdateEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageRule, storageRule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionCopyInfo, crossRegionCopyInfo_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainRule, retainRule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SpecialRetainRules, specialRetainRules_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageRule, storageRule_);
    };
    UpdateEnterpriseSnapshotPolicyRequest() = default ;
    UpdateEnterpriseSnapshotPolicyRequest(const UpdateEnterpriseSnapshotPolicyRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyRequest(UpdateEnterpriseSnapshotPolicyRequest &&) = default ;
    UpdateEnterpriseSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseSnapshotPolicyRequest() = default ;
    UpdateEnterpriseSnapshotPolicyRequest& operator=(const UpdateEnterpriseSnapshotPolicyRequest &) = default ;
    UpdateEnterpriseSnapshotPolicyRequest& operator=(UpdateEnterpriseSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->crossRegionCopyInfo_ == nullptr && return this->desc_ == nullptr && return this->name_ == nullptr && return this->policyId_ == nullptr && return this->regionId_ == nullptr
        && return this->retainRule_ == nullptr && return this->schedule_ == nullptr && return this->specialRetainRules_ == nullptr && return this->state_ == nullptr && return this->storageRule_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionCopyInfo Field Functions 
    bool hasCrossRegionCopyInfo() const { return this->crossRegionCopyInfo_ != nullptr;};
    void deleteCrossRegionCopyInfo() { this->crossRegionCopyInfo_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo & crossRegionCopyInfo() const { DARABONBA_PTR_GET_CONST(crossRegionCopyInfo_, UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo crossRegionCopyInfo() { DARABONBA_PTR_GET(crossRegionCopyInfo_, UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(const UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo & crossRegionCopyInfo) { DARABONBA_PTR_SET_VALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setCrossRegionCopyInfo(UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo && crossRegionCopyInfo) { DARABONBA_PTR_SET_RVALUE(crossRegionCopyInfo_, crossRegionCopyInfo) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainRule Field Functions 
    bool hasRetainRule() const { return this->retainRule_ != nullptr;};
    void deleteRetainRule() { this->retainRule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequestRetainRule & retainRule() const { DARABONBA_PTR_GET_CONST(retainRule_, UpdateEnterpriseSnapshotPolicyRequestRetainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequestRetainRule retainRule() { DARABONBA_PTR_GET(retainRule_, UpdateEnterpriseSnapshotPolicyRequestRetainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRetainRule(const UpdateEnterpriseSnapshotPolicyRequestRetainRule & retainRule) { DARABONBA_PTR_SET_VALUE(retainRule_, retainRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setRetainRule(UpdateEnterpriseSnapshotPolicyRequestRetainRule && retainRule) { DARABONBA_PTR_SET_RVALUE(retainRule_, retainRule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequestSchedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, UpdateEnterpriseSnapshotPolicyRequestSchedule) };
    inline UpdateEnterpriseSnapshotPolicyRequestSchedule schedule() { DARABONBA_PTR_GET(schedule_, UpdateEnterpriseSnapshotPolicyRequestSchedule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSchedule(const UpdateEnterpriseSnapshotPolicyRequestSchedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSchedule(UpdateEnterpriseSnapshotPolicyRequestSchedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // specialRetainRules Field Functions 
    bool hasSpecialRetainRules() const { return this->specialRetainRules_ != nullptr;};
    void deleteSpecialRetainRules() { this->specialRetainRules_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules & specialRetainRules() const { DARABONBA_PTR_GET_CONST(specialRetainRules_, UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules specialRetainRules() { DARABONBA_PTR_GET(specialRetainRules_, UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(const UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules & specialRetainRules) { DARABONBA_PTR_SET_VALUE(specialRetainRules_, specialRetainRules) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setSpecialRetainRules(UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules && specialRetainRules) { DARABONBA_PTR_SET_RVALUE(specialRetainRules_, specialRetainRules) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateEnterpriseSnapshotPolicyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageRule Field Functions 
    bool hasStorageRule() const { return this->storageRule_ != nullptr;};
    void deleteStorageRule() { this->storageRule_ = nullptr;};
    inline const UpdateEnterpriseSnapshotPolicyRequestStorageRule & storageRule() const { DARABONBA_PTR_GET_CONST(storageRule_, UpdateEnterpriseSnapshotPolicyRequestStorageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequestStorageRule storageRule() { DARABONBA_PTR_GET(storageRule_, UpdateEnterpriseSnapshotPolicyRequestStorageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setStorageRule(const UpdateEnterpriseSnapshotPolicyRequestStorageRule & storageRule) { DARABONBA_PTR_SET_VALUE(storageRule_, storageRule) };
    inline UpdateEnterpriseSnapshotPolicyRequest& setStorageRule(UpdateEnterpriseSnapshotPolicyRequestStorageRule && storageRule) { DARABONBA_PTR_SET_RVALUE(storageRule_, storageRule) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Snapshot replication destination information.
    std::shared_ptr<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo> crossRegionCopyInfo_ = nullptr;
    // The description of the policy.
    std::shared_ptr<string> desc_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The id of the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The region ID . You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which snapshot policy is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Snapshot retention rule.
    std::shared_ptr<UpdateEnterpriseSnapshotPolicyRequestRetainRule> retainRule_ = nullptr;
    // The rule for scheduling.
    std::shared_ptr<UpdateEnterpriseSnapshotPolicyRequestSchedule> schedule_ = nullptr;
    // The special snapshot retention rules.
    std::shared_ptr<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules> specialRetainRules_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **ENABLED**: Enable snapshot policy execution.
    // *   **DISABLED**: Disable snapshot policy execution.
    std::shared_ptr<string> state_ = nullptr;
    // Advanced snapshot features.
    std::shared_ptr<UpdateEnterpriseSnapshotPolicyRequestStorageRule> storageRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
