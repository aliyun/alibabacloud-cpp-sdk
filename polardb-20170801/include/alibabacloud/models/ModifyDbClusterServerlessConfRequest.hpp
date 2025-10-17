// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSERVERLESSCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSERVERLESSCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterServerlessConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterServerlessConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_TO_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterServerlessConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_FROM_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyDBClusterServerlessConfRequest() = default ;
    ModifyDBClusterServerlessConfRequest(const ModifyDBClusterServerlessConfRequest &) = default ;
    ModifyDBClusterServerlessConfRequest(ModifyDBClusterServerlessConfRequest &&) = default ;
    ModifyDBClusterServerlessConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterServerlessConfRequest() = default ;
    ModifyDBClusterServerlessConfRequest& operator=(const ModifyDBClusterServerlessConfRequest &) = default ;
    ModifyDBClusterServerlessConfRequest& operator=(ModifyDBClusterServerlessConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowShutDown_ == nullptr
        && return this->crontabJobId_ == nullptr && return this->DBClusterId_ == nullptr && return this->fromTimeService_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->plannedEndTime_ == nullptr && return this->plannedStartTime_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scaleApRoNumMax_ == nullptr
        && return this->scaleApRoNumMin_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->scaleRoNumMax_ == nullptr && return this->scaleRoNumMin_ == nullptr
        && return this->secondsUntilAutoPause_ == nullptr && return this->serverlessRuleCpuEnlargeThreshold_ == nullptr && return this->serverlessRuleCpuShrinkThreshold_ == nullptr && return this->serverlessRuleMode_ == nullptr && return this->taskId_ == nullptr; };
    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string allowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline ModifyDBClusterServerlessConfRequest& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // crontabJobId Field Functions 
    bool hasCrontabJobId() const { return this->crontabJobId_ != nullptr;};
    void deleteCrontabJobId() { this->crontabJobId_ = nullptr;};
    inline string crontabJobId() const { DARABONBA_PTR_GET_DEFAULT(crontabJobId_, "") };
    inline ModifyDBClusterServerlessConfRequest& setCrontabJobId(string crontabJobId) { DARABONBA_PTR_SET_VALUE(crontabJobId_, crontabJobId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterServerlessConfRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool fromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline ModifyDBClusterServerlessConfRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterServerlessConfRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterServerlessConfRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string plannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterServerlessConfRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string plannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterServerlessConfRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterServerlessConfRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterServerlessConfRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleApRoNumMax Field Functions 
    bool hasScaleApRoNumMax() const { return this->scaleApRoNumMax_ != nullptr;};
    void deleteScaleApRoNumMax() { this->scaleApRoNumMax_ = nullptr;};
    inline string scaleApRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMax_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleApRoNumMax(string scaleApRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMax_, scaleApRoNumMax) };


    // scaleApRoNumMin Field Functions 
    bool hasScaleApRoNumMin() const { return this->scaleApRoNumMin_ != nullptr;};
    void deleteScaleApRoNumMin() { this->scaleApRoNumMin_ = nullptr;};
    inline string scaleApRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMin_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleApRoNumMin(string scaleApRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMin_, scaleApRoNumMin) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string scaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string scaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline ModifyDBClusterServerlessConfRequest& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // secondsUntilAutoPause Field Functions 
    bool hasSecondsUntilAutoPause() const { return this->secondsUntilAutoPause_ != nullptr;};
    void deleteSecondsUntilAutoPause() { this->secondsUntilAutoPause_ = nullptr;};
    inline string secondsUntilAutoPause() const { DARABONBA_PTR_GET_DEFAULT(secondsUntilAutoPause_, "") };
    inline ModifyDBClusterServerlessConfRequest& setSecondsUntilAutoPause(string secondsUntilAutoPause) { DARABONBA_PTR_SET_VALUE(secondsUntilAutoPause_, secondsUntilAutoPause) };


    // serverlessRuleCpuEnlargeThreshold Field Functions 
    bool hasServerlessRuleCpuEnlargeThreshold() const { return this->serverlessRuleCpuEnlargeThreshold_ != nullptr;};
    void deleteServerlessRuleCpuEnlargeThreshold() { this->serverlessRuleCpuEnlargeThreshold_ = nullptr;};
    inline string serverlessRuleCpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuEnlargeThreshold_, "") };
    inline ModifyDBClusterServerlessConfRequest& setServerlessRuleCpuEnlargeThreshold(string serverlessRuleCpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuEnlargeThreshold_, serverlessRuleCpuEnlargeThreshold) };


    // serverlessRuleCpuShrinkThreshold Field Functions 
    bool hasServerlessRuleCpuShrinkThreshold() const { return this->serverlessRuleCpuShrinkThreshold_ != nullptr;};
    void deleteServerlessRuleCpuShrinkThreshold() { this->serverlessRuleCpuShrinkThreshold_ = nullptr;};
    inline string serverlessRuleCpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuShrinkThreshold_, "") };
    inline ModifyDBClusterServerlessConfRequest& setServerlessRuleCpuShrinkThreshold(string serverlessRuleCpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuShrinkThreshold_, serverlessRuleCpuShrinkThreshold) };


    // serverlessRuleMode Field Functions 
    bool hasServerlessRuleMode() const { return this->serverlessRuleMode_ != nullptr;};
    void deleteServerlessRuleMode() { this->serverlessRuleMode_ = nullptr;};
    inline string serverlessRuleMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleMode_, "") };
    inline ModifyDBClusterServerlessConfRequest& setServerlessRuleMode(string serverlessRuleMode) { DARABONBA_PTR_SET_VALUE(serverlessRuleMode_, serverlessRuleMode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyDBClusterServerlessConfRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Specifies whether to enable No-activity Suspension. Default value: false. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> allowShutDown_ = nullptr;
    // Cycle policy ID.
    std::shared_ptr<string> crontabJobId_ = nullptr;
    // The ID of the serverless cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies an immediate or scheduled task to modify parameters and restart the cluster. Valid values:
    // 
    // *   false: scheduled task
    // *   true: immediate task
    std::shared_ptr<bool> fromTimeService_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The latest start time for upgrading the specifications within the scheduled time period. Specify the time in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // > * The value of this parameter must be at least 30 minutes later than the value of PlannedStartTime.
    // >*   If you specify PlannedStartTime but do not specify PlannedEndTime, the latest start time of the task is set to a value that is calculated by using the following formula: `PlannedEndTime value + 30 minutes`. For example, if you set PlannedStartTime to `2021-01-14T09:00:00Z` and you do not specify PlannedEndTime, the latest start time of the task is set to `2021-01-14T09:30:00Z`.
    std::shared_ptr<string> plannedEndTime_ = nullptr;
    // The earliest start time of the scheduled task for adding the read-only node. The scheduled task specifies that the task is run in the required period. Specify the time in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // 
    // > *   The earliest start time of the scheduled task can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a point in time between `2021-01-14T09:00:00Z` and `2021-01-15T09:00:00Z`.
    // >*   If you leave this parameter empty, the task for adding the read-only node is immediately run by default.
    std::shared_ptr<string> plannedStartTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The maximum number of stable AP read-only nodes. Valid values: 0 to 7.
    std::shared_ptr<string> scaleApRoNumMax_ = nullptr;
    // The minimum number of stable AP read-only nodes. Valid values: 0 to 7.
    std::shared_ptr<string> scaleApRoNumMin_ = nullptr;
    // The maximum number of PCUs per node for scaling. Valid values: 1 PCU to 32 PCUs.
    std::shared_ptr<string> scaleMax_ = nullptr;
    // The minimum number of PCUs per node for scaling. Valid values: 1 PCU to 31 PCUs.
    std::shared_ptr<string> scaleMin_ = nullptr;
    // The maximum number of read-only nodes for scaling. Valid values: 0 to 15.
    std::shared_ptr<string> scaleRoNumMax_ = nullptr;
    // The minimum number of read-only nodes for scaling. Valid values: 0 to 15.
    std::shared_ptr<string> scaleRoNumMin_ = nullptr;
    // The detection period for No-activity Suspension. Valid values: 5 to 1440. Unit: minutes. The detection duration must be a multiple of 5 minutes.
    std::shared_ptr<string> secondsUntilAutoPause_ = nullptr;
    // CPU burst threshold
    std::shared_ptr<string> serverlessRuleCpuEnlargeThreshold_ = nullptr;
    // CPU downscale threshold
    std::shared_ptr<string> serverlessRuleCpuShrinkThreshold_ = nullptr;
    // Elastic sensitivity. Values: - normal: standard - flexible: sensitive
    std::shared_ptr<string> serverlessRuleMode_ = nullptr;
    // Asynchronous task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
