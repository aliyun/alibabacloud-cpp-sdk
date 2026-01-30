// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScheduledTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduledTasks, scheduledTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduledTasks, scheduledTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScheduledTasksResponseBody() = default ;
    DescribeScheduledTasksResponseBody(const DescribeScheduledTasksResponseBody &) = default ;
    DescribeScheduledTasksResponseBody(DescribeScheduledTasksResponseBody &&) = default ;
    DescribeScheduledTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduledTasksResponseBody() = default ;
    DescribeScheduledTasksResponseBody& operator=(const DescribeScheduledTasksResponseBody &) = default ;
    DescribeScheduledTasksResponseBody& operator=(DescribeScheduledTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduledTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduledTasks& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ScheduledTasks& obj) { 
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
      ScheduledTasks() = default ;
      ScheduledTasks(const ScheduledTasks &) = default ;
      ScheduledTasks(ScheduledTasks &&) = default ;
      ScheduledTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduledTasks() = default ;
      ScheduledTasks& operator=(const ScheduledTasks &) = default ;
      ScheduledTasks& operator=(ScheduledTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->desiredCapacity_ == nullptr && this->launchExpirationTime_ == nullptr && this->launchTime_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr
        && this->recurrenceEndTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->scalingGroupId_ == nullptr && this->scheduledAction_ == nullptr
        && this->scheduledTaskId_ == nullptr && this->scheduledTaskName_ == nullptr && this->taskEnabled_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScheduledTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desiredCapacity Field Functions 
      bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
      void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
      inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
      inline ScheduledTasks& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


      // launchExpirationTime Field Functions 
      bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
      void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
      inline int32_t getLaunchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
      inline ScheduledTasks& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


      // launchTime Field Functions 
      bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
      void deleteLaunchTime() { this->launchTime_ = nullptr;};
      inline string getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
      inline ScheduledTasks& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


      // maxValue Field Functions 
      bool hasMaxValue() const { return this->maxValue_ != nullptr;};
      void deleteMaxValue() { this->maxValue_ = nullptr;};
      inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
      inline ScheduledTasks& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


      // minValue Field Functions 
      bool hasMinValue() const { return this->minValue_ != nullptr;};
      void deleteMinValue() { this->minValue_ = nullptr;};
      inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
      inline ScheduledTasks& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


      // recurrenceEndTime Field Functions 
      bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
      void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
      inline string getRecurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
      inline ScheduledTasks& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


      // recurrenceType Field Functions 
      bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
      void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
      inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
      inline ScheduledTasks& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


      // recurrenceValue Field Functions 
      bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
      void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
      inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
      inline ScheduledTasks& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScheduledTasks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scheduledAction Field Functions 
      bool hasScheduledAction() const { return this->scheduledAction_ != nullptr;};
      void deleteScheduledAction() { this->scheduledAction_ = nullptr;};
      inline string getScheduledAction() const { DARABONBA_PTR_GET_DEFAULT(scheduledAction_, "") };
      inline ScheduledTasks& setScheduledAction(string scheduledAction) { DARABONBA_PTR_SET_VALUE(scheduledAction_, scheduledAction) };


      // scheduledTaskId Field Functions 
      bool hasScheduledTaskId() const { return this->scheduledTaskId_ != nullptr;};
      void deleteScheduledTaskId() { this->scheduledTaskId_ = nullptr;};
      inline string getScheduledTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskId_, "") };
      inline ScheduledTasks& setScheduledTaskId(string scheduledTaskId) { DARABONBA_PTR_SET_VALUE(scheduledTaskId_, scheduledTaskId) };


      // scheduledTaskName Field Functions 
      bool hasScheduledTaskName() const { return this->scheduledTaskName_ != nullptr;};
      void deleteScheduledTaskName() { this->scheduledTaskName_ = nullptr;};
      inline string getScheduledTaskName() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskName_, "") };
      inline ScheduledTasks& setScheduledTaskName(string scheduledTaskName) { DARABONBA_PTR_SET_VALUE(scheduledTaskName_, scheduledTaskName) };


      // taskEnabled Field Functions 
      bool hasTaskEnabled() const { return this->taskEnabled_ != nullptr;};
      void deleteTaskEnabled() { this->taskEnabled_ = nullptr;};
      inline bool getTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(taskEnabled_, false) };
      inline ScheduledTasks& setTaskEnabled(bool taskEnabled) { DARABONBA_PTR_SET_VALUE(taskEnabled_, taskEnabled) };


    protected:
      // The description of the scheduled task.
      shared_ptr<string> description_ {};
      // The expected number of instances in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
      shared_ptr<int32_t> desiredCapacity_ {};
      // The time window during which the scheduled task can be retried. Unit: seconds. Valid values: 0 to 21600.
      shared_ptr<int32_t> launchExpirationTime_ {};
      // The point in time at which the scheduled task is triggered.
      shared_ptr<string> launchTime_ {};
      // The maximum number of instances that must be contained in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
      shared_ptr<int32_t> maxValue_ {};
      // The minimum number of instances that must be contained in the scaling group. If you set `Scaling Method` to `Configure Number of Instances in Scaling Group`, you can specify this parameter.
      shared_ptr<int32_t> minValue_ {};
      // The end time of the recurrence of the scheduled task.
      shared_ptr<string> recurrenceEndTime_ {};
      // The recurring interval of the scheduled task.
      shared_ptr<string> recurrenceType_ {};
      // The frequency of recurrence of the scheduled task.
      shared_ptr<string> recurrenceValue_ {};
      // The ID of the scaling group to which the scheduled task belongs.
      shared_ptr<string> scalingGroupId_ {};
      // The scaling rule of the scheduled task. A value is returned for this parameter only after you specify ScheduledActions.
      shared_ptr<string> scheduledAction_ {};
      // The ID of the scheduled task.
      shared_ptr<string> scheduledTaskId_ {};
      // The name of the scheduled task.
      shared_ptr<string> scheduledTaskName_ {};
      // Indicates whether the scheduled task is enabled.
      // 
      // *   true
      // *   false
      // 
      // Default value: true.
      shared_ptr<bool> taskEnabled_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scheduledTasks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScheduledTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScheduledTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduledTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduledTasks Field Functions 
    bool hasScheduledTasks() const { return this->scheduledTasks_ != nullptr;};
    void deleteScheduledTasks() { this->scheduledTasks_ = nullptr;};
    inline const vector<DescribeScheduledTasksResponseBody::ScheduledTasks> & getScheduledTasks() const { DARABONBA_PTR_GET_CONST(scheduledTasks_, vector<DescribeScheduledTasksResponseBody::ScheduledTasks>) };
    inline vector<DescribeScheduledTasksResponseBody::ScheduledTasks> getScheduledTasks() { DARABONBA_PTR_GET(scheduledTasks_, vector<DescribeScheduledTasksResponseBody::ScheduledTasks>) };
    inline DescribeScheduledTasksResponseBody& setScheduledTasks(const vector<DescribeScheduledTasksResponseBody::ScheduledTasks> & scheduledTasks) { DARABONBA_PTR_SET_VALUE(scheduledTasks_, scheduledTasks) };
    inline DescribeScheduledTasksResponseBody& setScheduledTasks(vector<DescribeScheduledTasksResponseBody::ScheduledTasks> && scheduledTasks) { DARABONBA_PTR_SET_RVALUE(scheduledTasks_, scheduledTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScheduledTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information collection of the scheduled tasks.
    shared_ptr<vector<DescribeScheduledTasksResponseBody::ScheduledTasks>> scheduledTasks_ {};
    // The total number of scheduled tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
