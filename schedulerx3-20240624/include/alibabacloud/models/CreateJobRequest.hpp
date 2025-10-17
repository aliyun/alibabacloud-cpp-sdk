// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestNoticeConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestNoticeContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_TO_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_FROM_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->attemptInterval_ == nullptr && return this->calendar_ == nullptr && return this->childJobId_ == nullptr && return this->clusterId_ == nullptr && return this->description_ == nullptr
        && return this->executorBlockStrategy_ == nullptr && return this->jobHandler_ == nullptr && return this->jobType_ == nullptr && return this->maxAttempt_ == nullptr && return this->maxConcurrency_ == nullptr
        && return this->name_ == nullptr && return this->noticeConfig_ == nullptr && return this->noticeContacts_ == nullptr && return this->parameters_ == nullptr && return this->priority_ == nullptr
        && return this->routeStrategy_ == nullptr && return this->script_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->timeExpression_ == nullptr
        && return this->timeType_ == nullptr && return this->timezone_ == nullptr && return this->weight_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t attemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline CreateJobRequest& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline CreateJobRequest& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string childJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline CreateJobRequest& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline int32_t executorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, 0) };
    inline CreateJobRequest& setExecutorBlockStrategy(int32_t executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string jobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline CreateJobRequest& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t maxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline CreateJobRequest& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline CreateJobRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // noticeConfig Field Functions 
    bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
    void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
    inline const CreateJobRequestNoticeConfig & noticeConfig() const { DARABONBA_PTR_GET_CONST(noticeConfig_, CreateJobRequestNoticeConfig) };
    inline CreateJobRequestNoticeConfig noticeConfig() { DARABONBA_PTR_GET(noticeConfig_, CreateJobRequestNoticeConfig) };
    inline CreateJobRequest& setNoticeConfig(const CreateJobRequestNoticeConfig & noticeConfig) { DARABONBA_PTR_SET_VALUE(noticeConfig_, noticeConfig) };
    inline CreateJobRequest& setNoticeConfig(CreateJobRequestNoticeConfig && noticeConfig) { DARABONBA_PTR_SET_RVALUE(noticeConfig_, noticeConfig) };


    // noticeContacts Field Functions 
    bool hasNoticeContacts() const { return this->noticeContacts_ != nullptr;};
    void deleteNoticeContacts() { this->noticeContacts_ = nullptr;};
    inline const vector<CreateJobRequestNoticeContacts> & noticeContacts() const { DARABONBA_PTR_GET_CONST(noticeContacts_, vector<CreateJobRequestNoticeContacts>) };
    inline vector<CreateJobRequestNoticeContacts> noticeContacts() { DARABONBA_PTR_GET(noticeContacts_, vector<CreateJobRequestNoticeContacts>) };
    inline CreateJobRequest& setNoticeContacts(const vector<CreateJobRequestNoticeContacts> & noticeContacts) { DARABONBA_PTR_SET_VALUE(noticeContacts_, noticeContacts) };
    inline CreateJobRequest& setNoticeContacts(vector<CreateJobRequestNoticeContacts> && noticeContacts) { DARABONBA_PTR_SET_RVALUE(noticeContacts_, noticeContacts) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateJobRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t routeStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline CreateJobRequest& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateJobRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateJobRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline CreateJobRequest& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline CreateJobRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateJobRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> attemptInterval_ = nullptr;
    std::shared_ptr<string> calendar_ = nullptr;
    std::shared_ptr<string> childJobId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> executorBlockStrategy_ = nullptr;
    std::shared_ptr<string> jobHandler_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<int32_t> maxAttempt_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateJobRequestNoticeConfig> noticeConfig_ = nullptr;
    std::shared_ptr<vector<CreateJobRequestNoticeContacts>> noticeContacts_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> routeStrategy_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
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
