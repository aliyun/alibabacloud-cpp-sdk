// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
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
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->attemptInterval_ == nullptr && this->calendar_ == nullptr && this->childJobId_ == nullptr && this->cleanMode_ == nullptr && this->creator_ == nullptr
        && this->currentExecuteStatus_ == nullptr && this->dataOffset_ == nullptr && this->dependentStrategy_ == nullptr && this->description_ == nullptr && this->executorBlockStrategy_ == nullptr
        && this->jobHandler_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->lastExecuteEndTime_ == nullptr && this->lastExecuteStatus_ == nullptr
        && this->maxAttempt_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->nodeType_ == nullptr && this->noticeConfig_ == nullptr
        && this->noticeContacts_ == nullptr && this->parameters_ == nullptr && this->priority_ == nullptr && this->routeStrategy_ == nullptr && this->script_ == nullptr
        && this->startTimeType_ == nullptr && this->status_ == nullptr && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->timeZone_ == nullptr
        && this->timezone_ == nullptr && this->updater_ == nullptr && this->weight_ == nullptr && this->workflowId_ == nullptr && this->xattrs_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Records& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // attemptInterval Field Functions 
        bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
        void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
        inline int32_t getAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
        inline Records& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


        // calendar Field Functions 
        bool hasCalendar() const { return this->calendar_ != nullptr;};
        void deleteCalendar() { this->calendar_ = nullptr;};
        inline string getCalendar() const { DARABONBA_PTR_GET_DEFAULT(calendar_, "") };
        inline Records& setCalendar(string calendar) { DARABONBA_PTR_SET_VALUE(calendar_, calendar) };


        // childJobId Field Functions 
        bool hasChildJobId() const { return this->childJobId_ != nullptr;};
        void deleteChildJobId() { this->childJobId_ = nullptr;};
        inline string getChildJobId() const { DARABONBA_PTR_GET_DEFAULT(childJobId_, "") };
        inline Records& setChildJobId(string childJobId) { DARABONBA_PTR_SET_VALUE(childJobId_, childJobId) };


        // cleanMode Field Functions 
        bool hasCleanMode() const { return this->cleanMode_ != nullptr;};
        void deleteCleanMode() { this->cleanMode_ = nullptr;};
        inline string getCleanMode() const { DARABONBA_PTR_GET_DEFAULT(cleanMode_, "") };
        inline Records& setCleanMode(string cleanMode) { DARABONBA_PTR_SET_VALUE(cleanMode_, cleanMode) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Records& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // currentExecuteStatus Field Functions 
        bool hasCurrentExecuteStatus() const { return this->currentExecuteStatus_ != nullptr;};
        void deleteCurrentExecuteStatus() { this->currentExecuteStatus_ = nullptr;};
        inline int32_t getCurrentExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(currentExecuteStatus_, 0) };
        inline Records& setCurrentExecuteStatus(int32_t currentExecuteStatus) { DARABONBA_PTR_SET_VALUE(currentExecuteStatus_, currentExecuteStatus) };


        // dataOffset Field Functions 
        bool hasDataOffset() const { return this->dataOffset_ != nullptr;};
        void deleteDataOffset() { this->dataOffset_ = nullptr;};
        inline int32_t getDataOffset() const { DARABONBA_PTR_GET_DEFAULT(dataOffset_, 0) };
        inline Records& setDataOffset(int32_t dataOffset) { DARABONBA_PTR_SET_VALUE(dataOffset_, dataOffset) };


        // dependentStrategy Field Functions 
        bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
        void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
        inline int32_t getDependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
        inline Records& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Records& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // executorBlockStrategy Field Functions 
        bool hasExecutorBlockStrategy() const { return this->executorBlockStrategy_ != nullptr;};
        void deleteExecutorBlockStrategy() { this->executorBlockStrategy_ = nullptr;};
        inline string getExecutorBlockStrategy() const { DARABONBA_PTR_GET_DEFAULT(executorBlockStrategy_, "") };
        inline Records& setExecutorBlockStrategy(string executorBlockStrategy) { DARABONBA_PTR_SET_VALUE(executorBlockStrategy_, executorBlockStrategy) };


        // jobHandler Field Functions 
        bool hasJobHandler() const { return this->jobHandler_ != nullptr;};
        void deleteJobHandler() { this->jobHandler_ = nullptr;};
        inline string getJobHandler() const { DARABONBA_PTR_GET_DEFAULT(jobHandler_, "") };
        inline Records& setJobHandler(string jobHandler) { DARABONBA_PTR_SET_VALUE(jobHandler_, jobHandler) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
        inline Records& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline Records& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // lastExecuteEndTime Field Functions 
        bool hasLastExecuteEndTime() const { return this->lastExecuteEndTime_ != nullptr;};
        void deleteLastExecuteEndTime() { this->lastExecuteEndTime_ = nullptr;};
        inline string getLastExecuteEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteEndTime_, "") };
        inline Records& setLastExecuteEndTime(string lastExecuteEndTime) { DARABONBA_PTR_SET_VALUE(lastExecuteEndTime_, lastExecuteEndTime) };


        // lastExecuteStatus Field Functions 
        bool hasLastExecuteStatus() const { return this->lastExecuteStatus_ != nullptr;};
        void deleteLastExecuteStatus() { this->lastExecuteStatus_ = nullptr;};
        inline int32_t getLastExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteStatus_, 0) };
        inline Records& setLastExecuteStatus(int32_t lastExecuteStatus) { DARABONBA_PTR_SET_VALUE(lastExecuteStatus_, lastExecuteStatus) };


        // maxAttempt Field Functions 
        bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
        void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
        inline int32_t getMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
        inline Records& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


        // maxConcurrency Field Functions 
        bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
        void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
        inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
        inline Records& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline int32_t getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
        inline Records& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // noticeConfig Field Functions 
        bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
        void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
        inline string getNoticeConfig() const { DARABONBA_PTR_GET_DEFAULT(noticeConfig_, "") };
        inline Records& setNoticeConfig(string noticeConfig) { DARABONBA_PTR_SET_VALUE(noticeConfig_, noticeConfig) };


        // noticeContacts Field Functions 
        bool hasNoticeContacts() const { return this->noticeContacts_ != nullptr;};
        void deleteNoticeContacts() { this->noticeContacts_ = nullptr;};
        inline string getNoticeContacts() const { DARABONBA_PTR_GET_DEFAULT(noticeContacts_, "") };
        inline Records& setNoticeContacts(string noticeContacts) { DARABONBA_PTR_SET_VALUE(noticeContacts_, noticeContacts) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Records& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Records& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // routeStrategy Field Functions 
        bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
        void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
        inline int32_t getRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
        inline Records& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline Records& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


        // startTimeType Field Functions 
        bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
        void deleteStartTimeType() { this->startTimeType_ = nullptr;};
        inline int32_t getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, 0) };
        inline Records& setStartTimeType(int32_t startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Records& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeExpression Field Functions 
        bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
        void deleteTimeExpression() { this->timeExpression_ = nullptr;};
        inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
        inline Records& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


        // timeType Field Functions 
        bool hasTimeType() const { return this->timeType_ != nullptr;};
        void deleteTimeType() { this->timeType_ = nullptr;};
        inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
        inline Records& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        // timeZone Field Functions 
        bool hasTimeZone() const { return this->timeZone_ != nullptr;};
        void deleteTimeZone() { this->timeZone_ = nullptr;};
        inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
        inline Records& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Records& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        // updater Field Functions 
        bool hasUpdater() const { return this->updater_ != nullptr;};
        void deleteUpdater() { this->updater_ = nullptr;};
        inline string getUpdater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
        inline Records& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Records& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline Records& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


        // xattrs Field Functions 
        bool hasXattrs() const { return this->xattrs_ != nullptr;};
        void deleteXattrs() { this->xattrs_ = nullptr;};
        inline string getXattrs() const { DARABONBA_PTR_GET_DEFAULT(xattrs_, "") };
        inline Records& setXattrs(string xattrs) { DARABONBA_PTR_SET_VALUE(xattrs_, xattrs) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<int32_t> attemptInterval_ {};
        shared_ptr<string> calendar_ {};
        shared_ptr<string> childJobId_ {};
        shared_ptr<string> cleanMode_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<int32_t> currentExecuteStatus_ {};
        shared_ptr<int32_t> dataOffset_ {};
        shared_ptr<int32_t> dependentStrategy_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> executorBlockStrategy_ {};
        shared_ptr<string> jobHandler_ {};
        shared_ptr<int64_t> jobId_ {};
        shared_ptr<string> jobType_ {};
        shared_ptr<string> lastExecuteEndTime_ {};
        shared_ptr<int32_t> lastExecuteStatus_ {};
        shared_ptr<int32_t> maxAttempt_ {};
        shared_ptr<int32_t> maxConcurrency_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> nodeType_ {};
        shared_ptr<string> noticeConfig_ {};
        shared_ptr<string> noticeContacts_ {};
        shared_ptr<string> parameters_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<int32_t> routeStrategy_ {};
        shared_ptr<string> script_ {};
        shared_ptr<int32_t> startTimeType_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> timeExpression_ {};
        shared_ptr<int32_t> timeType_ {};
        shared_ptr<string> timeZone_ {};
        shared_ptr<string> timezone_ {};
        shared_ptr<string> updater_ {};
        shared_ptr<int32_t> weight_ {};
        shared_ptr<int64_t> workflowId_ {};
        shared_ptr<string> xattrs_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      // -
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListJobsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobsResponseBody::Data) };
    inline ListJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobsResponseBody::Data) };
    inline ListJobsResponseBody& setData(const ListJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobsResponseBody& setData(ListJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<ListJobsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
