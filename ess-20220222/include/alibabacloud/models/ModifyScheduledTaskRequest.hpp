// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecurrenceEndTime, recurrenceEndTime_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_TO_JSON(TaskEnabled, taskEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecurrenceEndTime, recurrenceEndTime_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_FROM_JSON(TaskEnabled, taskEnabled_);
    };
    ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest(ModifyScheduledTaskRequest &&) = default ;
    ModifyScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest& operator=(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest& operator=(ModifyScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->desiredCapacity_ == nullptr && this->launchExpirationTime_ == nullptr && this->launchTime_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->recurrenceEndTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingGroupId_ == nullptr && this->scheduledAction_ == nullptr
        && this->scheduledTaskId_ == nullptr && this->scheduledTaskName_ == nullptr && this->taskEnabled_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyScheduledTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline ModifyScheduledTaskRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t getLaunchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline ModifyScheduledTaskRequest& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline string getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
    inline ModifyScheduledTaskRequest& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline ModifyScheduledTaskRequest& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline ModifyScheduledTaskRequest& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScheduledTaskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScheduledTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recurrenceEndTime Field Functions 
    bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
    void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
    inline string getRecurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
    inline ModifyScheduledTaskRequest& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ModifyScheduledTaskRequest& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline ModifyScheduledTaskRequest& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyScheduledTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScheduledTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScheduledTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ModifyScheduledTaskRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scheduledAction Field Functions 
    bool hasScheduledAction() const { return this->scheduledAction_ != nullptr;};
    void deleteScheduledAction() { this->scheduledAction_ = nullptr;};
    inline string getScheduledAction() const { DARABONBA_PTR_GET_DEFAULT(scheduledAction_, "") };
    inline ModifyScheduledTaskRequest& setScheduledAction(string scheduledAction) { DARABONBA_PTR_SET_VALUE(scheduledAction_, scheduledAction) };


    // scheduledTaskId Field Functions 
    bool hasScheduledTaskId() const { return this->scheduledTaskId_ != nullptr;};
    void deleteScheduledTaskId() { this->scheduledTaskId_ = nullptr;};
    inline string getScheduledTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskId_, "") };
    inline ModifyScheduledTaskRequest& setScheduledTaskId(string scheduledTaskId) { DARABONBA_PTR_SET_VALUE(scheduledTaskId_, scheduledTaskId) };


    // scheduledTaskName Field Functions 
    bool hasScheduledTaskName() const { return this->scheduledTaskName_ != nullptr;};
    void deleteScheduledTaskName() { this->scheduledTaskName_ = nullptr;};
    inline string getScheduledTaskName() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskName_, "") };
    inline ModifyScheduledTaskRequest& setScheduledTaskName(string scheduledTaskName) { DARABONBA_PTR_SET_VALUE(scheduledTaskName_, scheduledTaskName) };


    // taskEnabled Field Functions 
    bool hasTaskEnabled() const { return this->taskEnabled_ != nullptr;};
    void deleteTaskEnabled() { this->taskEnabled_ = nullptr;};
    inline bool getTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(taskEnabled_, false) };
    inline ModifyScheduledTaskRequest& setTaskEnabled(bool taskEnabled) { DARABONBA_PTR_SET_VALUE(taskEnabled_, taskEnabled) };


  protected:
    // The description of the scheduled task. The description must be 2 to 200 characters in length.
    shared_ptr<string> description_ {};
    // The expected number of instances in the scaling group if you specify the ScalingGroupId parameter.
    // 
    // > You must specify the `DesiredCapacity` parameter when you create a scaling group.
    shared_ptr<int32_t> desiredCapacity_ {};
    // The time period during which the failed scheduled task is retried. Unit: seconds. Valid values: 0 to 1800.
    // 
    // Default value: 600.
    shared_ptr<int32_t> launchExpirationTime_ {};
    // The point in time at which the scheduled task is triggered. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format. The time must be in UTC. You cannot enter a time point later than 90 days from the point in time at which the scheduled task is modified.
    // 
    // *   If you specify the `RecurrenceType` parameter, the task is repeatedly executed at the time point that is specified by the LaunchTime parameter.
    // *   If you do not specify the `RecurrenceType` parameter, the task is executed only once at the point in time that is specified by the LaunchTime parameter.
    shared_ptr<string> launchTime_ {};
    // The maximum number of instances in the scaling group if you specify the ScalingGroupId parameter.
    shared_ptr<int32_t> maxValue_ {};
    // The minimum number of instances in the scaling group if you specify the ScalingGroupId parameter.
    shared_ptr<int32_t> minValue_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The end time of the scheduled task. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format. The time must be in UTC. You cannot enter a point in time that is later than 365 days from the point in time at which the scheduled task is modified.
    shared_ptr<string> recurrenceEndTime_ {};
    // The interval at which the scheduled task is repeated. Valid values:
    // 
    // *   Daily: The scheduled task is executed once every specified number of days.
    // *   Weekly: The scheduled task is executed on each specified day of the week.
    // *   Monthly: The scheduled task is executed on each specified day of the month.
    // *   Cron: The scheduled task is executed based on the specified cron expression.
    // 
    // After you modify the scheduled task, the values that you specify for the `RecurrenceType` and `RecurrenceValue` parameters must be valid at the same time.
    shared_ptr<string> recurrenceType_ {};
    // The number of recurrences of the scheduled task.
    // 
    // *   If you set the `RecurrenceType` parameter to `Daily`, you can specify only one value for this parameter. Valid values: 1 to 31.
    // *   If you set the `RecurrenceType` parameter to `Weekly`, you can specify multiple values for this parameter. Separate the values with commas (,). The values that correspond to Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday are 0, 1, 2, 3, 4, 5, and 6.``
    // *   If you set the `RecurrenceType` parameter to `Monthly`, you can specify two values in the `A-B` format for this parameter. Valid values of A and B: 1 to 31. B must be greater than or equal to A.
    // *   If you set the `RecurrenceType` parameter to `Cron`, you can specify a cron expression. A cron expression is written in UTC time and consists of the following fields: minute, hour, day, month, and week. The expression can contain the letters L and W and the following wildcard characters: commas (,), question marks (?), hyphens (-), asterisks (\\*), number signs (#), and forward slashes (/).
    // 
    // After you modify the scheduled task, the values that you specify for the `RecurrenceType` and `RecurrenceValue` parameters must be valid at the same time.
    shared_ptr<string> recurrenceValue_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group whose number of instances must be modified when the scheduled task is triggered. If you specify the `ScalingGroupId` parameter for a scheduled task, you must specify the minimum, maximum, or expected numbers of instances for a scaling group in the scheduled task. That is, you must specify at least one of the `MinValue`, `MaxValue`, and `DesiredCapacity` parameters.
    // 
    // > You cannot specify the `ScheduledAction` and `ScalingGroupId` parameters at the same time.
    shared_ptr<string> scalingGroupId_ {};
    // The scaling rule that you want to execute when the scheduled task is triggered. Enter the ID of the scaling rule. To obtain the ID of a scaling rule, go to the scaling rule details page. If you specify `ScheduledAction`, you must select an existing scaling rule for the scheduled task.
    // 
    // >  You can specify only one of `ScheduledAction` and `ScalingGroupId`.
    shared_ptr<string> scheduledAction_ {};
    // The ID of the scheduled task.
    // 
    // This parameter is required.
    shared_ptr<string> scheduledTaskId_ {};
    // The name of the scheduled task. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or a digit. The name of the scheduled task must be unique in the region and within the Alibaba Cloud account.
    shared_ptr<string> scheduledTaskName_ {};
    // Specifies whether to enable the scheduled task. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    shared_ptr<bool> taskEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
