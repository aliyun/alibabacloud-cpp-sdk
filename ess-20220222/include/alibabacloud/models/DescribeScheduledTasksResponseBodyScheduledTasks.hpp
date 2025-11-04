// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODYSCHEDULEDTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODYSCHEDULEDTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScheduledTasksResponseBodyScheduledTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTasksResponseBodyScheduledTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(RecurrenceEndTime, recurrenceEndTime_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_TO_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_TO_JSON(TaskEnabled, taskEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTasksResponseBodyScheduledTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(RecurrenceEndTime, recurrenceEndTime_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledAction, scheduledAction_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskId, scheduledTaskId_);
      DARABONBA_PTR_FROM_JSON(ScheduledTaskName, scheduledTaskName_);
      DARABONBA_PTR_FROM_JSON(TaskEnabled, taskEnabled_);
    };
    DescribeScheduledTasksResponseBodyScheduledTasks() = default ;
    DescribeScheduledTasksResponseBodyScheduledTasks(const DescribeScheduledTasksResponseBodyScheduledTasks &) = default ;
    DescribeScheduledTasksResponseBodyScheduledTasks(DescribeScheduledTasksResponseBodyScheduledTasks &&) = default ;
    DescribeScheduledTasksResponseBodyScheduledTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduledTasksResponseBodyScheduledTasks() = default ;
    DescribeScheduledTasksResponseBodyScheduledTasks& operator=(const DescribeScheduledTasksResponseBodyScheduledTasks &) = default ;
    DescribeScheduledTasksResponseBodyScheduledTasks& operator=(DescribeScheduledTasksResponseBodyScheduledTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->desiredCapacity_ == nullptr && return this->launchExpirationTime_ == nullptr && return this->launchTime_ == nullptr && return this->maxValue_ == nullptr && return this->minValue_ == nullptr
        && return this->recurrenceEndTime_ == nullptr && return this->recurrenceType_ == nullptr && return this->recurrenceValue_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scheduledAction_ == nullptr
        && return this->scheduledTaskId_ == nullptr && return this->scheduledTaskName_ == nullptr && return this->taskEnabled_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t launchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline string launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // recurrenceEndTime Field Functions 
    bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
    void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
    inline string recurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scheduledAction Field Functions 
    bool hasScheduledAction() const { return this->scheduledAction_ != nullptr;};
    void deleteScheduledAction() { this->scheduledAction_ = nullptr;};
    inline string scheduledAction() const { DARABONBA_PTR_GET_DEFAULT(scheduledAction_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setScheduledAction(string scheduledAction) { DARABONBA_PTR_SET_VALUE(scheduledAction_, scheduledAction) };


    // scheduledTaskId Field Functions 
    bool hasScheduledTaskId() const { return this->scheduledTaskId_ != nullptr;};
    void deleteScheduledTaskId() { this->scheduledTaskId_ = nullptr;};
    inline string scheduledTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskId_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setScheduledTaskId(string scheduledTaskId) { DARABONBA_PTR_SET_VALUE(scheduledTaskId_, scheduledTaskId) };


    // scheduledTaskName Field Functions 
    bool hasScheduledTaskName() const { return this->scheduledTaskName_ != nullptr;};
    void deleteScheduledTaskName() { this->scheduledTaskName_ = nullptr;};
    inline string scheduledTaskName() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskName_, "") };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setScheduledTaskName(string scheduledTaskName) { DARABONBA_PTR_SET_VALUE(scheduledTaskName_, scheduledTaskName) };


    // taskEnabled Field Functions 
    bool hasTaskEnabled() const { return this->taskEnabled_ != nullptr;};
    void deleteTaskEnabled() { this->taskEnabled_ = nullptr;};
    inline bool taskEnabled() const { DARABONBA_PTR_GET_DEFAULT(taskEnabled_, false) };
    inline DescribeScheduledTasksResponseBodyScheduledTasks& setTaskEnabled(bool taskEnabled) { DARABONBA_PTR_SET_VALUE(taskEnabled_, taskEnabled) };


  protected:
    // The description of the scheduled task.
    std::shared_ptr<string> description_ = nullptr;
    // The expected number of instances in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
    std::shared_ptr<int32_t> desiredCapacity_ = nullptr;
    // The time window during which the scheduled task can be retried. Unit: seconds. Valid values: 0 to 21600.
    std::shared_ptr<int32_t> launchExpirationTime_ = nullptr;
    // The point in time at which the scheduled task is triggered.
    std::shared_ptr<string> launchTime_ = nullptr;
    // The maximum number of instances that must be contained in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    // The minimum number of instances that must be contained in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
    std::shared_ptr<int32_t> minValue_ = nullptr;
    // The end time of the recurrence of the scheduled task.
    std::shared_ptr<string> recurrenceEndTime_ = nullptr;
    // The recurring interval of the scheduled task.
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // The frequency of recurrence of the scheduled task.
    std::shared_ptr<string> recurrenceValue_ = nullptr;
    // The ID of the scaling group to which the scheduled task belongs.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scaling rule of the scheduled task. A value is returned for this parameter only after you specify ScheduledActions.
    std::shared_ptr<string> scheduledAction_ = nullptr;
    // The ID of the scheduled task.
    std::shared_ptr<string> scheduledTaskId_ = nullptr;
    // The name of the scheduled task.
    std::shared_ptr<string> scheduledTaskName_ = nullptr;
    // Indicates whether the scheduled task is enabled.
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
