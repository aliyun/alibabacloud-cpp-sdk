// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Coordinate, coordinateShrink_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Coordinate, coordinateShrink_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest(CreateJobShrinkRequest &&) = default ;
    CreateJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest& operator=(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest& operator=(CreateJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->attemptInterval_ == nullptr && return this->calendar_ == nullptr && return this->childJobId_ == nullptr && return this->clusterId_ == nullptr && return this->coordinateShrink_ == nullptr
        && return this->dependentStrategy_ == nullptr && return this->description_ == nullptr && return this->executorBlockStrategy_ == nullptr && return this->jobHandler_ == nullptr && return this->jobType_ == nullptr
        && return this->maxAttempt_ == nullptr && return this->maxConcurrency_ == nullptr && return this->name_ == nullptr && return this->noticeConfigShrink_ == nullptr && return this->noticeContactsShrink_ == nullptr
        && return this->parameters_ == nullptr && return this->priority_ == nullptr && return this->routeStrategy_ == nullptr && return this->script_ == nullptr && return this->startTime_ == nullptr
        && return this->startTimeType_ == nullptr && return this->status_ == nullptr && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr && return this->timezone_ == nullptr
        && return this->weight_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateJobShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t attemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline CreateJobShrinkRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline CreateJobShrinkRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string childJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline CreateJobShrinkRequest& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coordinateShrink Field Functions 
    bool hasCoordinateShrink() const { return this->coordinateShrink_ != nullptr;};
    void deleteCoordinateShrink() { this->coordinateShrink_ = nullptr;};
    inline string coordinateShrink() const { DARABONBA_PTR_GET_DEFAULT(coordinateShrink_, "") };
    inline CreateJobShrinkRequest& setCoordinateShrink(string coordinateShrink) { DARABONBA_PTR_SET_VALUE(coordinateShrink_, coordinateShrink) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t dependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline CreateJobShrinkRequest& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateJobShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline int32_t executorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, 0) };
    inline CreateJobShrinkRequest& setExecutorBlockStrategy(int32_t executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string jobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline CreateJobShrinkRequest& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateJobShrinkRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t maxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline CreateJobShrinkRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline CreateJobShrinkRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noticeConfigShrink Field Functions 
    bool hasNoticeConfigShrink() const { return this->noticeConfigShrink_ != nullptr;};
    void deleteNoticeConfigShrink() { this->noticeConfigShrink_ = nullptr;};
    inline string noticeConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(noticeConfigShrink_, "") };
    inline CreateJobShrinkRequest& setNoticeConfigShrink(string noticeConfigShrink) { DARABONBA_PTR_SET_VALUE(noticeConfigShrink_, noticeConfigShrink) };


    // noticeContactsShrink Field Functions 
    bool hasNoticeContactsShrink() const { return this->noticeContactsShrink_ != nullptr;};
    void deleteNoticeContactsShrink() { this->noticeContactsShrink_ = nullptr;};
    inline string noticeContactsShrink() const { DARABONBA_PTR_GET_DEFAULT(noticeContactsShrink_, "") };
    inline CreateJobShrinkRequest& setNoticeContactsShrink(string noticeContactsShrink) { DARABONBA_PTR_SET_VALUE(noticeContactsShrink_, noticeContactsShrink) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateJobShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t routeStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline CreateJobShrinkRequest& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateJobShrinkRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateJobShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline int32_t startTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, 0) };
    inline CreateJobShrinkRequest& setStartTimeType(int32_t startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateJobShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline CreateJobShrinkRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline CreateJobShrinkRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateJobShrinkRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateJobShrinkRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> attemptInterval_ = nullptr;
    std::shared_ptr<string> calendar_ = nullptr;
    std::shared_ptr<string> childJobId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> coordinateShrink_ = nullptr;
    std::shared_ptr<int32_t> dependentStrategy_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> executorBlockStrategy_ = nullptr;
    std::shared_ptr<string> jobHandler_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<int32_t> maxAttempt_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> noticeConfigShrink_ = nullptr;
    std::shared_ptr<string> noticeContactsShrink_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> routeStrategy_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> startTimeType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> timeExpression_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timeType_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
