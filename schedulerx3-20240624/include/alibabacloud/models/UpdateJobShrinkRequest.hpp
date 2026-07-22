// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NoticeConfig, noticeConfigShrink_);
      DARABONBA_PTR_TO_JSON(NoticeContacts, noticeContactsShrink_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NoticeConfig, noticeConfigShrink_);
      DARABONBA_PTR_FROM_JSON(NoticeContacts, noticeContactsShrink_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
    };
    UpdateJobShrinkRequest() = default ;
    UpdateJobShrinkRequest(const UpdateJobShrinkRequest &) = default ;
    UpdateJobShrinkRequest(UpdateJobShrinkRequest &&) = default ;
    UpdateJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobShrinkRequest() = default ;
    UpdateJobShrinkRequest& operator=(const UpdateJobShrinkRequest &) = default ;
    UpdateJobShrinkRequest& operator=(UpdateJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appName_ == nullptr && this->attemptInterval_ == nullptr && this->calendar_ == nullptr && this->childJobId_ == nullptr && this->clusterId_ == nullptr
        && this->dependentStrategy_ == nullptr && this->description_ == nullptr && this->executorBlockStrategy_ == nullptr && this->jobHandler_ == nullptr && this->jobId_ == nullptr
        && this->maxAttempt_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->noticeConfigShrink_ == nullptr && this->noticeContactsShrink_ == nullptr
        && this->parameters_ == nullptr && this->priority_ == nullptr && this->routeStrategy_ == nullptr && this->script_ == nullptr && this->startTime_ == nullptr
        && this->startTimeType_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timezone_ == nullptr && this->weight_ == nullptr
        && this->XAttrs_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline UpdateJobShrinkRequest& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateJobShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline UpdateJobShrinkRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline UpdateJobShrinkRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string getChildJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline UpdateJobShrinkRequest& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateJobShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t getDependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline UpdateJobShrinkRequest& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline int32_t getExecutorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, 0) };
    inline UpdateJobShrinkRequest& setExecutorBlockStrategy(int32_t executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string getJobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline UpdateJobShrinkRequest& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateJobShrinkRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline UpdateJobShrinkRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateJobShrinkRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noticeConfigShrink Field Functions 
    bool hasNoticeConfigShrink() const { return this->noticeConfigShrink_ != nullptr;};
    void deleteNoticeConfigShrink() { this->noticeConfigShrink_ = nullptr;};
    inline string getNoticeConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(noticeConfigShrink_, "") };
    inline UpdateJobShrinkRequest& setNoticeConfigShrink(string noticeConfigShrink) { DARABONBA_PTR_SET_VALUE(noticeConfigShrink_, noticeConfigShrink) };


    // noticeContactsShrink Field Functions 
    bool hasNoticeContactsShrink() const { return this->noticeContactsShrink_ != nullptr;};
    void deleteNoticeContactsShrink() { this->noticeContactsShrink_ = nullptr;};
    inline string getNoticeContactsShrink() const { DARABONBA_PTR_GET_DEFAULT(noticeContactsShrink_, "") };
    inline UpdateJobShrinkRequest& setNoticeContactsShrink(string noticeContactsShrink) { DARABONBA_PTR_SET_VALUE(noticeContactsShrink_, noticeContactsShrink) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateJobShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateJobShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t getRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline UpdateJobShrinkRequest& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline UpdateJobShrinkRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateJobShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline string getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
    inline UpdateJobShrinkRequest& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline UpdateJobShrinkRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline UpdateJobShrinkRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateJobShrinkRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateJobShrinkRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline UpdateJobShrinkRequest& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    shared_ptr<int64_t> appGroupId_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The retry interval upon node failure.
    shared_ptr<int32_t> attemptInterval_ {};
    // The custom calendar.
    shared_ptr<string> calendar_ {};
    // The child node IDs, separated by commas.
    shared_ptr<string> childJobId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The dependency strategy.
    shared_ptr<int32_t> dependentStrategy_ {};
    // The node description.
    shared_ptr<string> description_ {};
    // The client blocking strategy. Valid values:
    // - 1: serial execution on a single machine
    // - 2: ignore subsequent scheduling
    // - 3: override previous scheduling
    shared_ptr<int32_t> executorBlockStrategy_ {};
    // The JobHandler name.
    shared_ptr<string> jobHandler_ {};
    // The node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    // The maximum number of retry attempts upon node failure.
    shared_ptr<int32_t> maxAttempt_ {};
    // The maximum number of concurrent instances for the node.
    // >The maximum number of instances that can run simultaneously for the same node. A value of 1 indicates that repeated execution is not allowed. If the concurrency limit is exceeded, the current scheduling is skipped.
    shared_ptr<int32_t> maxConcurrency_ {};
    // The node name.
    shared_ptr<string> name_ {};
    // The notification configuration.
    shared_ptr<string> noticeConfigShrink_ {};
    // The notification contact configuration.
    shared_ptr<string> noticeContactsShrink_ {};
    // The node parameters.
    shared_ptr<string> parameters_ {};
    // The node execution priority. Valid values:
    // 
    // - 1: low
    // - 5: medium
    // - 10: high
    // - 15: very high
    shared_ptr<int32_t> priority_ {};
    // The routing strategy. Valid values:
    // 
    // - 1: round robin
    // - 2: random
    // - 3: first
    // - 4: last
    // - 5: least frequently used
    // - 6: least recently used
    // - 7: consistent hashing
    // - 8: shard broadcast
    shared_ptr<int32_t> routeStrategy_ {};
    // The script content for non-BEAN nodes. Use this field to configure the script.
    shared_ptr<string> script_ {};
    // The scheduling start time.
    shared_ptr<int64_t> startTime_ {};
    // The start time type.
    shared_ptr<string> startTimeType_ {};
    // The time expression. Set the time expression based on the selected time type.
    // 
    // - none: No value is required.
    // - cron: Specify a standard cron expression. Online verification is supported.
    // - api: No value is required.
    // - fixed_rate: Specify a fixed frequency value in seconds. For example, 30 indicates that the node is triggered every 30 seconds.
    // - one_time: Specify a scheduling time in the format of yyyy-MM-dd HH:mm:ss or a timestamp in milliseconds. For example, "2022-10-10 10:10:00".
    shared_ptr<string> timeExpression_ {};
    // The time type. Valid values:
    // 
    // - -1: none
    // - 1: cron
    // - 3: fix_rate
    // - 5: one_time
    // - 100: api
    shared_ptr<int32_t> timeType_ {};
    // The time zone.
    // > The default value is the time zone of the SchedulerX server.
    shared_ptr<string> timezone_ {};
    // The node weight.
    shared_ptr<int32_t> weight_ {};
    shared_ptr<string> XAttrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
