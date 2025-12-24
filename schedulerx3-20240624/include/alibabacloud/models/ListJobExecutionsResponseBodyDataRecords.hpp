// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTIONSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTIONSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListJobExecutionsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutionsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Attempt, attempt_);
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(WorkAddr, workAddr_);
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutionsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Attempt, attempt_);
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(WorkAddr, workAddr_);
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
    };
    ListJobExecutionsResponseBodyDataRecords() = default ;
    ListJobExecutionsResponseBodyDataRecords(const ListJobExecutionsResponseBodyDataRecords &) = default ;
    ListJobExecutionsResponseBodyDataRecords(ListJobExecutionsResponseBodyDataRecords &&) = default ;
    ListJobExecutionsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutionsResponseBodyDataRecords() = default ;
    ListJobExecutionsResponseBodyDataRecords& operator=(const ListJobExecutionsResponseBodyDataRecords &) = default ;
    ListJobExecutionsResponseBodyDataRecords& operator=(ListJobExecutionsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->attempt_ == nullptr && return this->dataTime_ == nullptr && return this->duration_ == nullptr && return this->endTime_ == nullptr && return this->executor_ == nullptr
        && return this->jobExecutionId_ == nullptr && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->jobType_ == nullptr && return this->parameters_ == nullptr
        && return this->result_ == nullptr && return this->routeStrategy_ == nullptr && return this->scheduleTime_ == nullptr && return this->serverIp_ == nullptr && return this->status_ == nullptr
        && return this->timeType_ == nullptr && return this->totalTokens_ == nullptr && return this->triggerType_ == nullptr && return this->workAddr_ == nullptr && return this->workflowExecutionId_ == nullptr
        && return this->workflowId_ == nullptr && return this->workflowName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attempt Field Functions 
    bool hasAttempt() const { return this->attempt_ != nullptr;};
    void deleteAttempt() { this->attempt_ = nullptr;};
    inline int32_t attempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListJobExecutionsResponseBodyDataRecords& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListJobExecutionsResponseBodyDataRecords& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t routeStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline ListJobExecutionsResponseBodyDataRecords& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // workAddr Field Functions 
    bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
    void deleteWorkAddr() { this->workAddr_ = nullptr;};
    inline string workAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline string workflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setWorkflowExecutionId(string workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListJobExecutionsResponseBodyDataRecords& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string workflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline ListJobExecutionsResponseBodyDataRecords& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> attempt_ = nullptr;
    std::shared_ptr<string> dataTime_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> executor_ = nullptr;
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<int32_t> routeStrategy_ = nullptr;
    std::shared_ptr<string> scheduleTime_ = nullptr;
    std::shared_ptr<string> serverIp_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> timeType_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
    std::shared_ptr<int32_t> triggerType_ = nullptr;
    std::shared_ptr<string> workAddr_ = nullptr;
    std::shared_ptr<string> workflowExecutionId_ = nullptr;
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    std::shared_ptr<string> workflowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
