// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_TO_JSON(TaskEnabled, taskEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_FROM_JSON(TaskEnabled, taskEnabled_);
    };
    CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest(CreateScheduledTaskRequest &&) = default ;
    CreateScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest& operator=(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest& operator=(CreateScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->desiredCapacity_ != nullptr && this->launchExpirationTime_ != nullptr && this->launchTime_ != nullptr && this->maxValue_ != nullptr && this->minValue_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->recurrenceEndTime_ != nullptr && this->recurrenceType_ != nullptr && this->recurrenceValue_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr && this->scheduledAction_ != nullptr && this->scheduledTaskName_ != nullptr
        && this->taskEnabled_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScheduledTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline CreateScheduledTaskRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t launchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline CreateScheduledTaskRequest& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline string launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
    inline CreateScheduledTaskRequest& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline CreateScheduledTaskRequest& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline CreateScheduledTaskRequest& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScheduledTaskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScheduledTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recurrenceEndTime Field Functions 
    bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
    void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
    inline string recurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
    inline CreateScheduledTaskRequest& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline CreateScheduledTaskRequest& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline CreateScheduledTaskRequest& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScheduledTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScheduledTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScheduledTaskRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scheduledAction Field Functions 
    bool hasScheduledAction() const { return this->scheduledAction_ != nullptr;};
    void deleteScheduledAction() { this->scheduledAction_ = nullptr;};
    inline string scheduledAction() const { DARABONBA_PTR_GET_DEFAULT(scheduledAction_, "") };
    inline CreateScheduledTaskRequest& setScheduledAction(string scheduledAction) { DARABONBA_PTR_SET_VALUE(scheduledAction_, scheduledAction) };


    // scheduledTaskName Field Functions 
    bool hasScheduledTaskName() const { return this->scheduledTaskName_ != nullptr;};
    void deleteScheduledTaskName() { this->scheduledTaskName_ = nullptr;};
    inline string scheduledTaskName() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskName_, "") };
    inline CreateScheduledTaskRequest& setScheduledTaskName(string scheduledTaskName) { DARABONBA_PTR_SET_VALUE(scheduledTaskName_, scheduledTaskName) };


    // taskEnabled Field Functions 
    bool hasTaskEnabled() const { return this->taskEnabled_ != nullptr;};
    void deleteTaskEnabled() { this->taskEnabled_ = nullptr;};
    inline bool taskEnabled() const { DARABONBA_PTR_GET_DEFAULT(taskEnabled_, false) };
    inline CreateScheduledTaskRequest& setTaskEnabled(bool taskEnabled) { DARABONBA_PTR_SET_VALUE(taskEnabled_, taskEnabled) };


  protected:
    // The description of the scheduled task. The description must be 2 to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The expected number of instances in the scaling group if you specify the ScalingGroupId parameter.
    // 
    // > You must specify the `DesiredCapacity` parameter when you create a scaling group.
    std::shared_ptr<int32_t> desiredCapacity_ = nullptr;
    // The time period during which the failed scheduled task can be retried. Unit: seconds. Valid values: 0 to 1800.
    // 
    // Default value: 600.
    std::shared_ptr<int32_t> launchExpirationTime_ = nullptr;
    // The point in time at which the scheduled task is triggered. Specify the time in the ISO 8601 standard. The time must be in UTC. You cannot trigger a scheduled task more than 90 days after its creation.
    // 
    // *   If you specify `RecurrenceType`, the scheduled task is repeatedly triggered at the point in time that is specified by LaunchTime.
    // *   If you do not specify `RecurrenceType`, the scheduled task is triggered only once at the time point that is specified by LaunchTime.
    std::shared_ptr<string> launchTime_ = nullptr;
    // The maximum number of instances in the scaling group if you specify the ScalingGroupId parameter.
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    // The minimum number of instances in the scaling group if you specify the ScalingGroupId parameter.
    std::shared_ptr<int32_t> minValue_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The end time of the scheduled task. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format.
    // 
    // The time must be in UTC. You cannot enter a point in time that is later than 365 days from the point in time at which the scheduled task is created.
    std::shared_ptr<string> recurrenceEndTime_ = nullptr;
    // The interval at which the scheduled task is repeated. Valid values:
    // 
    // *   Daily: The scheduled task is executed once every specified number of days.
    // *   Weekly: The scheduled task is executed on each specified day of the week.
    // *   Monthly: The scheduled task is executed on each specified day of the month.
    // *   Cron: The scheduled task is executed based on the specified cron expression.
    // 
    // You must specify the `RecurrenceType` and `RecurrenceValue` parameters at the same time.
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // The number of recurrences of the scheduled task.
    // 
    // *   If you set the `RecurrenceType` parameter to `Daily`, you can specify only one value for this parameter. Valid values: 1 to 31.
    // *   If you set the `RecurrenceType` parameter to `Weekly`, you can specify multiple values for this parameter. Separate the values with commas (,). The values that correspond to Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday are 0, 1, 2, 3, 4, 5, and 6.``
    // *   If you set the `RecurrenceType` parameter to `Monthly`, you can specify two values in the `A-B` format for this parameter. Valid values of A and B: 1 to 31. B must be greater than or equal to A.
    // *   If you set the `RecurrenceType` parameter to `Cron`, you can specify a cron expression. A cron expression is written in UTC time and consists of the following fields: minute, hour, day, month, and week. The expression can contain the letters L and W and the following wildcard characters: commas (,), question marks (?), hyphens (-), asterisks (\\*), number signs (#), and forward slashes (/).
    // 
    // You must specify both the `RecurrenceType` parameter and the `RecurrenceValue` parameter.
    std::shared_ptr<string> recurrenceValue_ = nullptr;
    // The region ID of the scheduled task.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group. If you specify this parameter, the number of instances in the scaling group will be changed when the scheduled task is triggered.
    // 
    // If you specify `ScalingGroupId`, you must also specify at least one of the following parameters: `MinValue`, `MaxValue`, and `DesiredCapacity`. You cannot specify `ScheduledAction` and `ScalingGroupId` at the same time.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scaling rule that you want to execute when the scheduled task is triggered. Specify the unique identifier of the scaling rule.
    // 
    // If you specify `ScheduledAction`, the scheduled task uses an existing scaling rule. You cannot specify `ScheduledAction` and `ScalingGroupId` at the same time.
    std::shared_ptr<string> scheduledAction_ = nullptr;
    // The name of the scheduled task. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit. The name of the scheduled task must be unique in the region and within the Alibaba Cloud account.
    // 
    // If you do not specify this parameter, the value of the `ScheduledTaskId` parameter is used.
    std::shared_ptr<string> scheduledTaskName_ = nullptr;
    // Specifies whether to enable the scheduled task.
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    std::shared_ptr<bool> taskEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
