// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListJobsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(Calendar, calendar_);
      DARABONBA_PTR_TO_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_TO_JSON(CleanMode, cleanMode_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CurrentExecuteStatus, currentExecuteStatus_);
      DARABONBA_PTR_TO_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_TO_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(LastExecuteEndTime, lastExecuteEndTime_);
      DARABONBA_PTR_TO_JSON(LastExecuteStatus, lastExecuteStatus_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_TO_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(Xattrs, xattrs_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(Calendar, calendar_);
      DARABONBA_PTR_FROM_JSON(ChildJobId, childJobId_);
      DARABONBA_PTR_FROM_JSON(CleanMode, cleanMode_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CurrentExecuteStatus, currentExecuteStatus_);
      DARABONBA_PTR_FROM_JSON(DataOffset, dataOffset_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutorBlockStrategy, executorBlockStrategy_);
      DARABONBA_PTR_FROM_JSON(JobHandler, jobHandler_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(LastExecuteEndTime, lastExecuteEndTime_);
      DARABONBA_PTR_FROM_JSON(LastExecuteStatus, lastExecuteStatus_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_PTR_FROM_JSON(NoticeContacts, noticeContacts_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(Xattrs, xattrs_);
    };
    ListJobsResponseBodyDataRecords() = default ;
    ListJobsResponseBodyDataRecords(const ListJobsResponseBodyDataRecords &) = default ;
    ListJobsResponseBodyDataRecords(ListJobsResponseBodyDataRecords &&) = default ;
    ListJobsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataRecords() = default ;
    ListJobsResponseBodyDataRecords& operator=(const ListJobsResponseBodyDataRecords &) = default ;
    ListJobsResponseBodyDataRecords& operator=(ListJobsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->attemptInterval_ == nullptr && return this->calendar_ == nullptr && return this->childJobId_ == nullptr && return this->cleanMode_ == nullptr && return this->creator_ == nullptr
        && return this->currentExecuteStatus_ == nullptr && return this->dataOffset_ == nullptr && return this->dependentStrategy_ == nullptr && return this->description_ == nullptr && return this->executorBlockStrategy_ == nullptr
        && return this->jobHandler_ == nullptr && return this->jobId_ == nullptr && return this->jobType_ == nullptr && return this->lastExecuteEndTime_ == nullptr && return this->lastExecuteStatus_ == nullptr
        && return this->maxAttempt_ == nullptr && return this->maxConcurrency_ == nullptr && return this->name_ == nullptr && return this->nodeType_ == nullptr && return this->noticeConfig_ == nullptr
        && return this->noticeContacts_ == nullptr && return this->parameters_ == nullptr && return this->priority_ == nullptr && return this->routeStrategy_ == nullptr && return this->script_ == nullptr
        && return this->startTimeType_ == nullptr && return this->status_ == nullptr && return this->timeExpression_ == nullptr && return this->timeType_ == nullptr && return this->timeZone_ == nullptr
        && return this->timezone_ == nullptr && return this->updater_ == nullptr && return this->weight_ == nullptr && return this->workflowId_ == nullptr && return this->xattrs_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListJobsResponseBodyDataRecords& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t attemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline ListJobsResponseBodyDataRecords& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // calendar Field Functions 
    bool hasCalendar() const { return this->calendar_ != nullptr;};
    void deleteCalendar() { this->calendar_ = nullptr;};
    inline string calendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
    inline ListJobsResponseBodyDataRecords& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


    // childJobId Field Functions 
    bool hasChildJobId() const { return this->childJobId_ != nullptr;};
    void deleteChildJobId() { this->childJobId_ = nullptr;};
    inline string childJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
    inline ListJobsResponseBodyDataRecords& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


    // cleanMode Field Functions 
    bool hasCleanMode() const { return this->cleanMode_ != nullptr;};
    void deleteCleanMode() { this->cleanMode_ = nullptr;};
    inline string cleanMode() const { DARABONBA_PTR_GET_DEFAULT(cleanMode_, "") };
    inline ListJobsResponseBodyDataRecords& setCleanMode(string cleanMode) { DARABONBA_PTR_SET_VALUE(cleanMode_, cleanMode) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobsResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // currentExecuteStatus Field Functions 
    bool hasCurrentExecuteStatus() const { return this->currentExecuteStatus_ != nullptr;};
    void deleteCurrentExecuteStatus() { this->currentExecuteStatus_ = nullptr;};
    inline int32_t currentExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(currentExecuteStatus_, 0) };
    inline ListJobsResponseBodyDataRecords& setCurrentExecuteStatus(int32_t currentExecuteStatus) { DARABONBA_PTR_SET_VALUE(currentExecuteStatus_, currentExecuteStatus) };


    // dataOffset Field Functions 
    bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
    void deleteDataOffset() { this->dataOffset_ = nullptr;};
    inline int32_t dataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
    inline ListJobsResponseBodyDataRecords& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t dependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline ListJobsResponseBodyDataRecords& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListJobsResponseBodyDataRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executorBlockStrategy Field Functions 
    bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
    void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
    inline string executorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, "") };
    inline ListJobsResponseBodyDataRecords& setExecutorBlockStrategy(string executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


    // jobHandler Field Functions 
    bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
    void deleteJobHandler() { this->jobHandler_ = nullptr;};
    inline string jobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
    inline ListJobsResponseBodyDataRecords& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListJobsResponseBodyDataRecords& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobsResponseBodyDataRecords& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // lastExecuteEndTime Field Functions 
    bool hasLastExecuteEndTime() const { return this->lastExecuteEndTime_ != nullptr;};
    void deleteLastExecuteEndTime() { this->lastExecuteEndTime_ = nullptr;};
    inline string lastExecuteEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteEndTime_, "") };
    inline ListJobsResponseBodyDataRecords& setLastExecuteEndTime(string lastExecuteEndTime) { DARABONBA_PTR_SET_VALUE(lastExecuteEndTime_, lastExecuteEndTime) };


    // lastExecuteStatus Field Functions 
    bool hasLastExecuteStatus() const { return this->lastExecuteStatus_ != nullptr;};
    void deleteLastExecuteStatus() { this->lastExecuteStatus_ = nullptr;};
    inline int32_t lastExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteStatus_, 0) };
    inline ListJobsResponseBodyDataRecords& setLastExecuteStatus(int32_t lastExecuteStatus) { DARABONBA_PTR_SET_VALUE(lastExecuteStatus_, lastExecuteStatus) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t maxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline ListJobsResponseBodyDataRecords& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline ListJobsResponseBodyDataRecords& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListJobsResponseBodyDataRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline int32_t nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
    inline ListJobsResponseBodyDataRecords& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // noticeConfig Field Functions 
    bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
    void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
    inline string noticeConfig() const { DARABONBA_PTR_GET_DEFAULT(noticeConfig_, "") };
    inline ListJobsResponseBodyDataRecords& setNoticeConfig(string noticeConfig) { DARABONBA_PTR_SET_VALUE(noticeConfig_, noticeConfig) };


    // noticeContacts Field Functions 
    bool hasNoticeContacts() const { return this->noticeContacts_ != nullptr;};
    void deleteNoticeContacts() { this->noticeContacts_ = nullptr;};
    inline string noticeContacts() const { DARABONBA_PTR_GET_DEFAULT(noticeContacts_, "") };
    inline ListJobsResponseBodyDataRecords& setNoticeContacts(string noticeContacts) { DARABONBA_PTR_SET_VALUE(noticeContacts_, noticeContacts) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListJobsResponseBodyDataRecords& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListJobsResponseBodyDataRecords& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeStrategy Field Functions 
    bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
    void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
    inline int32_t routeStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
    inline ListJobsResponseBodyDataRecords& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline ListJobsResponseBodyDataRecords& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // startTimeType Field Functions 
    bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
    void deleteStartTimeType() { this->startTimeType_ = nullptr;};
    inline int32_t startTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, 0) };
    inline ListJobsResponseBodyDataRecords& setStartTimeType(int32_t startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListJobsResponseBodyDataRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeExpression Field Functions 
    bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
    void deleteTimeExpression() { this->timeExpression_ = nullptr;};
    inline string timeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
    inline ListJobsResponseBodyDataRecords& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline ListJobsResponseBodyDataRecords& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListJobsResponseBodyDataRecords& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ListJobsResponseBodyDataRecords& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline string updater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
    inline ListJobsResponseBodyDataRecords& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListJobsResponseBodyDataRecords& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListJobsResponseBodyDataRecords& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // xattrs Field Functions 
    bool hasXattrs() const { return this->xattrs_ != nullptr;};
    void deleteXattrs() { this->xattrs_ = nullptr;};
    inline string xattrs() const { DARABONBA_PTR_GET_DEFAULT(xattrs_, "") };
    inline ListJobsResponseBodyDataRecords& setXattrs(string xattrs) { DARABONBA_PTR_SET_VALUE(xattrs_, xattrs) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> attemptInterval_ = nullptr;
    std::shared_ptr<string> calendar_ = nullptr;
    std::shared_ptr<string> childJobId_ = nullptr;
    std::shared_ptr<string> cleanMode_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int32_t> currentExecuteStatus_ = nullptr;
    std::shared_ptr<int32_t> dataOffset_ = nullptr;
    std::shared_ptr<int32_t> dependentStrategy_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executorBlockStrategy_ = nullptr;
    std::shared_ptr<string> jobHandler_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> lastExecuteEndTime_ = nullptr;
    std::shared_ptr<int32_t> lastExecuteStatus_ = nullptr;
    std::shared_ptr<int32_t> maxAttempt_ = nullptr;
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> nodeType_ = nullptr;
    std::shared_ptr<string> noticeConfig_ = nullptr;
    std::shared_ptr<string> noticeContacts_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> routeStrategy_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<int32_t> startTimeType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> timeExpression_ = nullptr;
    std::shared_ptr<int32_t> timeType_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
    std::shared_ptr<string> updater_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    std::shared_ptr<string> xattrs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
