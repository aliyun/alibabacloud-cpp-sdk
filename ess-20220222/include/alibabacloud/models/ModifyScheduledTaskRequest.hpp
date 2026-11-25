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
      DARABONBA_PTR_TO_JSON(WarmPoolCapacityOptions, warmPoolCapacityOptions_);
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
      DARABONBA_PTR_FROM_JSON(WarmPoolCapacityOptions, warmPoolCapacityOptions_);
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
    class WarmPoolCapacityOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarmPoolCapacityOptions& obj) { 
        DARABONBA_PTR_TO_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
        DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, WarmPoolCapacityOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
        DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      };
      WarmPoolCapacityOptions() = default ;
      WarmPoolCapacityOptions(const WarmPoolCapacityOptions &) = default ;
      WarmPoolCapacityOptions(WarmPoolCapacityOptions &&) = default ;
      WarmPoolCapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarmPoolCapacityOptions() = default ;
      WarmPoolCapacityOptions& operator=(const WarmPoolCapacityOptions &) = default ;
      WarmPoolCapacityOptions& operator=(WarmPoolCapacityOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desiredGroupPreparedCapacity_ == nullptr
        && this->minCapacity_ == nullptr; };
      // desiredGroupPreparedCapacity Field Functions 
      bool hasDesiredGroupPreparedCapacity() const { return this->desiredGroupPreparedCapacity_ != nullptr;};
      void deleteDesiredGroupPreparedCapacity() { this->desiredGroupPreparedCapacity_ = nullptr;};
      inline int32_t getDesiredGroupPreparedCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredGroupPreparedCapacity_, 0) };
      inline WarmPoolCapacityOptions& setDesiredGroupPreparedCapacity(int32_t desiredGroupPreparedCapacity) { DARABONBA_PTR_SET_VALUE(desiredGroupPreparedCapacity_, desiredGroupPreparedCapacity) };


      // minCapacity Field Functions 
      bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
      void deleteMinCapacity() { this->minCapacity_ = nullptr;};
      inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
      inline WarmPoolCapacityOptions& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    protected:
      // The expected number of prepared instances. The system maintains the sum of the current number of instances in the scaling group and the number of instances in the warm pool at this value. Default value: the maximum number of instances in the scaling group, which is specified by MaxSize.
      shared_ptr<int32_t> desiredGroupPreparedCapacity_ {};
      // The minimum number of instances in the warm pool. The system always retains at least this number of prepared instances in the warm pool to ensure that instances can be quickly added from the warm pool during scale-out. Default value: 0.
      shared_ptr<int32_t> minCapacity_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->desiredCapacity_ == nullptr && this->launchExpirationTime_ == nullptr && this->launchTime_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->recurrenceEndTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingGroupId_ == nullptr && this->scheduledAction_ == nullptr
        && this->scheduledTaskId_ == nullptr && this->scheduledTaskName_ == nullptr && this->taskEnabled_ == nullptr && this->warmPoolCapacityOptions_ == nullptr; };
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


    // warmPoolCapacityOptions Field Functions 
    bool hasWarmPoolCapacityOptions() const { return this->warmPoolCapacityOptions_ != nullptr;};
    void deleteWarmPoolCapacityOptions() { this->warmPoolCapacityOptions_ = nullptr;};
    inline const ModifyScheduledTaskRequest::WarmPoolCapacityOptions & getWarmPoolCapacityOptions() const { DARABONBA_PTR_GET_CONST(warmPoolCapacityOptions_, ModifyScheduledTaskRequest::WarmPoolCapacityOptions) };
    inline ModifyScheduledTaskRequest::WarmPoolCapacityOptions getWarmPoolCapacityOptions() { DARABONBA_PTR_GET(warmPoolCapacityOptions_, ModifyScheduledTaskRequest::WarmPoolCapacityOptions) };
    inline ModifyScheduledTaskRequest& setWarmPoolCapacityOptions(const ModifyScheduledTaskRequest::WarmPoolCapacityOptions & warmPoolCapacityOptions) { DARABONBA_PTR_SET_VALUE(warmPoolCapacityOptions_, warmPoolCapacityOptions) };
    inline ModifyScheduledTaskRequest& setWarmPoolCapacityOptions(ModifyScheduledTaskRequest::WarmPoolCapacityOptions && warmPoolCapacityOptions) { DARABONBA_PTR_SET_RVALUE(warmPoolCapacityOptions_, warmPoolCapacityOptions) };


  protected:
    // The description of the scheduled task. The description must be 2 to 200 characters in length.
    shared_ptr<string> description_ {};
    // The expected number of instances in the scaling group. This parameter is required when the scaling method of the scheduled task is set to specify the number of instances in the scaling group.
    // > The scaling group must support the expected number of instances. This means that DesiredCapacity must be specified when the scaling group is created.
    shared_ptr<int32_t> desiredCapacity_ {};
    // The retry period during which Auto Scaling continues to attempt to execute the scheduled task after the triggered operation fails. Unit: seconds. Valid values: 0 to 1800.
    // 
    // Default value: 600.
    shared_ptr<int32_t> launchExpirationTime_ {};
    // The time at which the scheduled task is executed. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format. The time must be in UTC. You cannot specify a time that is later than 90 days from the date of modification.
    // 
    // - If RecurrenceType is specified, the time specified by this parameter is the default time for recurring execution.
    // 
    // - If RecurrenceType is not specified, the task is executed only once at the specified date and time.
    shared_ptr<string> launchTime_ {};
    // The maximum number of instances in the scaling group. This parameter is required when the scaling method of the scheduled task is set to specify the number of instances in the scaling group.
    shared_ptr<int32_t> maxValue_ {};
    // The minimum number of instances in the scaling group. This parameter is required when the scaling method of the scheduled task is set to specify the number of instances in the scaling group.
    shared_ptr<int32_t> minValue_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The end time of the scheduled task that is executed repeatedly. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format. The time must be in UTC. You cannot specify a time that is later than 365 days from the date of modification.
    shared_ptr<string> recurrenceEndTime_ {};
    // The recurrence type of the scheduled task. Valid values:
    //  
    // - Daily: The scheduled task is executed once every specified number of days.
    // - Weekly: The scheduled task is executed on specified days of each week.
    // - Monthly: The scheduled task is executed on specified days of each month.
    // - Cron: The scheduled task is executed based on the specified cron expression.
    // 
    // After modification, both RecurrenceType and RecurrenceValue must be valid.
    shared_ptr<string> recurrenceType_ {};
    // The recurrence value of the scheduled task.
    // 
    // - If RecurrenceType is set to Daily, you can specify only one value. Valid values: 1 to 31.
    // - If RecurrenceType is set to Weekly, you can specify multiple values separated by commas (,). For example, the values for Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday are 0,1,2,3,4,5,6.
    // - If RecurrenceType is set to Monthly, the format is A-B. Valid values of A and B: 1 to 31. B must be greater than or equal to A.
    // - If RecurrenceType is set to Cron, the value specifies a cron expression in UTC. The expression supports five fields: minute, hour, day, month, and week. It supports wildcards such as commas (,), question marks (?), hyphens (-), asterisks (*), number signs (#), forward slashes (/), L, and W.
    // 
    // After modification, both RecurrenceType and RecurrenceValue must be valid.
    shared_ptr<string> recurrenceValue_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group in which you want to modify the number of instances or adjust the warm pool capacity when the scheduled task is triggered.
    // 
    // After you specify ScalingGroupId, the scaling method of the scheduled task is set to specify the number of instances in the scaling group or adjust the warm pool capacity.
    // 
    // - Specify the number of instances in the scaling group: You must specify at least one of the MinValue, MaxValue, and DesiredCapacity parameters.
    // - Adjust the warm pool capacity: You must specify WarmPoolCapacityOptions.
    // 
    // > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
    shared_ptr<string> scalingGroupId_ {};
    // The ID of the scaling rule to execute. This parameter is available only when the scaling method is set to execute an existing scaling rule. You can view the ID on the details page of the scaling rule.
    // 
    // > You cannot specify both ScheduledAction and ScalingGroupId at the same time.
    shared_ptr<string> scheduledAction_ {};
    // The ID of the scheduled task.
    // 
    // This parameter is required.
    shared_ptr<string> scheduledTaskId_ {};
    // The name of the scheduled task. The name must be 2 to 64 characters in length and can contain periods (.), underscores (_), and hyphens (-). It must start with a letter, digit, or Chinese character. The name must be unique within the same region and Alibaba Cloud account.
    shared_ptr<string> scheduledTaskName_ {};
    // Specifies whether to enable the scheduled task. Valid values:
    // 
    // - true: enables the scheduled task.
    // - false: disables the scheduled task.
    // 
    // Default value: true.
    shared_ptr<bool> taskEnabled_ {};
    // The warm pool capacity configuration of the scaling group. This parameter is valid only when a warm pool is configured for the scaling group.
    // 
    // > You must specify ScalingGroupId when you specify this parameter.
    shared_ptr<ModifyScheduledTaskRequest::WarmPoolCapacityOptions> warmPoolCapacityOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
