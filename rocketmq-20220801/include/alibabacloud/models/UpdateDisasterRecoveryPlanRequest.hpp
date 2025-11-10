// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDisasterRecoveryPlanRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateDisasterRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(planDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(planType, planType_);
      DARABONBA_PTR_TO_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(planDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(planType, planType_);
      DARABONBA_PTR_FROM_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    UpdateDisasterRecoveryPlanRequest() = default ;
    UpdateDisasterRecoveryPlanRequest(const UpdateDisasterRecoveryPlanRequest &) = default ;
    UpdateDisasterRecoveryPlanRequest(UpdateDisasterRecoveryPlanRequest &&) = default ;
    UpdateDisasterRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDisasterRecoveryPlanRequest() = default ;
    UpdateDisasterRecoveryPlanRequest& operator=(const UpdateDisasterRecoveryPlanRequest &) = default ;
    UpdateDisasterRecoveryPlanRequest& operator=(UpdateDisasterRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSyncCheckpoint_ == nullptr
        && return this->instances_ == nullptr && return this->planDesc_ == nullptr && return this->planName_ == nullptr && return this->planType_ == nullptr && return this->syncCheckpointEnabled_ == nullptr; };
    // autoSyncCheckpoint Field Functions 
    bool hasAutoSyncCheckpoint() const { return this->autoSyncCheckpoint_ != nullptr;};
    void deleteAutoSyncCheckpoint() { this->autoSyncCheckpoint_ = nullptr;};
    inline bool autoSyncCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(autoSyncCheckpoint_, false) };
    inline UpdateDisasterRecoveryPlanRequest& setAutoSyncCheckpoint(bool autoSyncCheckpoint) { DARABONBA_PTR_SET_VALUE(autoSyncCheckpoint_, autoSyncCheckpoint) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UpdateDisasterRecoveryPlanRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UpdateDisasterRecoveryPlanRequestInstances>) };
    inline vector<UpdateDisasterRecoveryPlanRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<UpdateDisasterRecoveryPlanRequestInstances>) };
    inline UpdateDisasterRecoveryPlanRequest& setInstances(const vector<UpdateDisasterRecoveryPlanRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UpdateDisasterRecoveryPlanRequest& setInstances(vector<UpdateDisasterRecoveryPlanRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline UpdateDisasterRecoveryPlanRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateDisasterRecoveryPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline UpdateDisasterRecoveryPlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // syncCheckpointEnabled Field Functions 
    bool hasSyncCheckpointEnabled() const { return this->syncCheckpointEnabled_ != nullptr;};
    void deleteSyncCheckpointEnabled() { this->syncCheckpointEnabled_ = nullptr;};
    inline bool syncCheckpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncCheckpointEnabled_, false) };
    inline UpdateDisasterRecoveryPlanRequest& setSyncCheckpointEnabled(bool syncCheckpointEnabled) { DARABONBA_PTR_SET_VALUE(syncCheckpointEnabled_, syncCheckpointEnabled) };


  protected:
    // Specifies whether to enable automatic consumer progress synchronization.
    // 
    // >  This parameter takes effect only when you set `syncCheckpointEnabled` to true.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoSyncCheckpoint_ = nullptr;
    // The instances involved in the Global Replicator task. After you create a Global Replicator task, you cannot change the instances involved in the task. You can change only the message attribute and authentication type of the task.
    std::shared_ptr<vector<UpdateDisasterRecoveryPlanRequestInstances>> instances_ = nullptr;
    // The description of the Global Replicator task.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The name of the Global Replicator task.
    std::shared_ptr<string> planName_ = nullptr;
    // The type of the Global Replicator task. After you create a Global Replicator task, you cannot change the type of the task. Valid values:
    // 
    // *   ACTIVE_PASSIVE: one-way backup
    // *   ACTIVE_ACTIVE: two-way backup
    std::shared_ptr<string> planType_ = nullptr;
    // Specifies whether to enable consumer progress synchronization.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> syncCheckpointEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
