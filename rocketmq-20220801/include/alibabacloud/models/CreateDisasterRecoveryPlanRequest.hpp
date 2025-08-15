// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISASTERRECOVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDisasterRecoveryPlanRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateDisasterRecoveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(planDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(planType, planType_);
      DARABONBA_PTR_TO_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDisasterRecoveryPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSyncCheckpoint, autoSyncCheckpoint_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(planDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(planType, planType_);
      DARABONBA_PTR_FROM_JSON(syncCheckpointEnabled, syncCheckpointEnabled_);
    };
    CreateDisasterRecoveryPlanRequest() = default ;
    CreateDisasterRecoveryPlanRequest(const CreateDisasterRecoveryPlanRequest &) = default ;
    CreateDisasterRecoveryPlanRequest(CreateDisasterRecoveryPlanRequest &&) = default ;
    CreateDisasterRecoveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDisasterRecoveryPlanRequest() = default ;
    CreateDisasterRecoveryPlanRequest& operator=(const CreateDisasterRecoveryPlanRequest &) = default ;
    CreateDisasterRecoveryPlanRequest& operator=(CreateDisasterRecoveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSyncCheckpoint_ != nullptr
        && this->instances_ != nullptr && this->planDesc_ != nullptr && this->planName_ != nullptr && this->planType_ != nullptr && this->syncCheckpointEnabled_ != nullptr; };
    // autoSyncCheckpoint Field Functions 
    bool hasAutoSyncCheckpoint() const { return this->autoSyncCheckpoint_ != nullptr;};
    void deleteAutoSyncCheckpoint() { this->autoSyncCheckpoint_ = nullptr;};
    inline bool autoSyncCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(autoSyncCheckpoint_, false) };
    inline CreateDisasterRecoveryPlanRequest& setAutoSyncCheckpoint(bool autoSyncCheckpoint) { DARABONBA_PTR_SET_VALUE(autoSyncCheckpoint_, autoSyncCheckpoint) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<CreateDisasterRecoveryPlanRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<CreateDisasterRecoveryPlanRequestInstances>) };
    inline vector<CreateDisasterRecoveryPlanRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<CreateDisasterRecoveryPlanRequestInstances>) };
    inline CreateDisasterRecoveryPlanRequest& setInstances(const vector<CreateDisasterRecoveryPlanRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateDisasterRecoveryPlanRequest& setInstances(vector<CreateDisasterRecoveryPlanRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline CreateDisasterRecoveryPlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // syncCheckpointEnabled Field Functions 
    bool hasSyncCheckpointEnabled() const { return this->syncCheckpointEnabled_ != nullptr;};
    void deleteSyncCheckpointEnabled() { this->syncCheckpointEnabled_ = nullptr;};
    inline bool syncCheckpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncCheckpointEnabled_, false) };
    inline CreateDisasterRecoveryPlanRequest& setSyncCheckpointEnabled(bool syncCheckpointEnabled) { DARABONBA_PTR_SET_VALUE(syncCheckpointEnabled_, syncCheckpointEnabled) };


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
    // The instances involved in the Global Replicator task. You must specify this parameter.
    std::shared_ptr<vector<CreateDisasterRecoveryPlanRequestInstances>> instances_ = nullptr;
    // The description of the Global Replicator task.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The name of the Global Replicator task. You must specify this parameter.
    std::shared_ptr<string> planName_ = nullptr;
    // The type of the Global Replicator task. You must specify this parameter. For more information, see [Global Replicator](https://help.aliyun.com/document_detail/2843187.html). Valid values:
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
