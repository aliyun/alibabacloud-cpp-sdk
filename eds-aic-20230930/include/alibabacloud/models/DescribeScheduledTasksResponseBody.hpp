// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeScheduledTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
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
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(LastExecutionAt, lastExecutionAt_);
        DARABONBA_PTR_TO_JSON(NextExecutionAt, nextExecutionAt_);
        DARABONBA_PTR_TO_JSON(RunConfig, runConfig_);
        DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskConfigId, taskConfigId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TotalExecutions, totalExecutions_);
        DARABONBA_PTR_TO_JSON(TotalFailures, totalFailures_);
        DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(LastExecutionAt, lastExecutionAt_);
        DARABONBA_PTR_FROM_JSON(NextExecutionAt, nextExecutionAt_);
        DARABONBA_PTR_FROM_JSON(RunConfig, runConfig_);
        DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskConfigId, taskConfigId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TotalExecutions, totalExecutions_);
        DARABONBA_PTR_FROM_JSON(TotalFailures, totalFailures_);
        DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RunConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
          DARABONBA_PTR_TO_JSON(MaxSteps, maxSteps_);
          DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, RunConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
          DARABONBA_PTR_FROM_JSON(MaxSteps, maxSteps_);
          DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        RunConfig() = default ;
        RunConfig(const RunConfig &) = default ;
        RunConfig(RunConfig &&) = default ;
        RunConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunConfig() = default ;
        RunConfig& operator=(const RunConfig &) = default ;
        RunConfig& operator=(RunConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extraParams_ == nullptr
        && this->maxSteps_ == nullptr && this->timeoutSeconds_ == nullptr; };
        // extraParams Field Functions 
        bool hasExtraParams() const { return this->extraParams_ != nullptr;};
        void deleteExtraParams() { this->extraParams_ = nullptr;};
        inline string getExtraParams() const { DARABONBA_PTR_GET_DEFAULT(extraParams_, "") };
        inline RunConfig& setExtraParams(string extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };


        // maxSteps Field Functions 
        bool hasMaxSteps() const { return this->maxSteps_ != nullptr;};
        void deleteMaxSteps() { this->maxSteps_ = nullptr;};
        inline int32_t getMaxSteps() const { DARABONBA_PTR_GET_DEFAULT(maxSteps_, 0) };
        inline RunConfig& setMaxSteps(int32_t maxSteps) { DARABONBA_PTR_SET_VALUE(maxSteps_, maxSteps) };


        // timeoutSeconds Field Functions 
        bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
        void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
        inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
        inline RunConfig& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


      protected:
        // The extra parameters.
        shared_ptr<string> extraParams_ {};
        // The maximum number of steps.
        shared_ptr<int32_t> maxSteps_ {};
        // The timeout period, in seconds.
        shared_ptr<int32_t> timeoutSeconds_ {};
      };

      virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceIds_ == nullptr && this->lastExecutionAt_ == nullptr && this->nextExecutionAt_ == nullptr
        && this->runConfig_ == nullptr && this->scheduledId_ == nullptr && this->status_ == nullptr && this->taskConfigId_ == nullptr && this->taskName_ == nullptr
        && this->totalExecutions_ == nullptr && this->totalFailures_ == nullptr && this->userPrompt_ == nullptr && this->version_ == nullptr; };
      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Tasks& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Tasks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Tasks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline Tasks& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline Tasks& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // lastExecutionAt Field Functions 
      bool hasLastExecutionAt() const { return this->lastExecutionAt_ != nullptr;};
      void deleteLastExecutionAt() { this->lastExecutionAt_ = nullptr;};
      inline string getLastExecutionAt() const { DARABONBA_PTR_GET_DEFAULT(lastExecutionAt_, "") };
      inline Tasks& setLastExecutionAt(string lastExecutionAt) { DARABONBA_PTR_SET_VALUE(lastExecutionAt_, lastExecutionAt) };


      // nextExecutionAt Field Functions 
      bool hasNextExecutionAt() const { return this->nextExecutionAt_ != nullptr;};
      void deleteNextExecutionAt() { this->nextExecutionAt_ = nullptr;};
      inline string getNextExecutionAt() const { DARABONBA_PTR_GET_DEFAULT(nextExecutionAt_, "") };
      inline Tasks& setNextExecutionAt(string nextExecutionAt) { DARABONBA_PTR_SET_VALUE(nextExecutionAt_, nextExecutionAt) };


      // runConfig Field Functions 
      bool hasRunConfig() const { return this->runConfig_ != nullptr;};
      void deleteRunConfig() { this->runConfig_ = nullptr;};
      inline const Tasks::RunConfig & getRunConfig() const { DARABONBA_PTR_GET_CONST(runConfig_, Tasks::RunConfig) };
      inline Tasks::RunConfig getRunConfig() { DARABONBA_PTR_GET(runConfig_, Tasks::RunConfig) };
      inline Tasks& setRunConfig(const Tasks::RunConfig & runConfig) { DARABONBA_PTR_SET_VALUE(runConfig_, runConfig) };
      inline Tasks& setRunConfig(Tasks::RunConfig && runConfig) { DARABONBA_PTR_SET_RVALUE(runConfig_, runConfig) };


      // scheduledId Field Functions 
      bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
      void deleteScheduledId() { this->scheduledId_ = nullptr;};
      inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
      inline Tasks& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskConfigId Field Functions 
      bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
      void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
      inline string getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, "") };
      inline Tasks& setTaskConfigId(string taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Tasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // totalExecutions Field Functions 
      bool hasTotalExecutions() const { return this->totalExecutions_ != nullptr;};
      void deleteTotalExecutions() { this->totalExecutions_ = nullptr;};
      inline int64_t getTotalExecutions() const { DARABONBA_PTR_GET_DEFAULT(totalExecutions_, 0L) };
      inline Tasks& setTotalExecutions(int64_t totalExecutions) { DARABONBA_PTR_SET_VALUE(totalExecutions_, totalExecutions) };


      // totalFailures Field Functions 
      bool hasTotalFailures() const { return this->totalFailures_ != nullptr;};
      void deleteTotalFailures() { this->totalFailures_ = nullptr;};
      inline int64_t getTotalFailures() const { DARABONBA_PTR_GET_DEFAULT(totalFailures_, 0L) };
      inline Tasks& setTotalFailures(int64_t totalFailures) { DARABONBA_PTR_SET_VALUE(totalFailures_, totalFailures) };


      // userPrompt Field Functions 
      bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
      void deleteUserPrompt() { this->userPrompt_ = nullptr;};
      inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
      inline Tasks& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Tasks& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The cron expression.
      shared_ptr<string> cronExpression_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The list of associated instance IDs.
      shared_ptr<vector<string>> instanceIds_ {};
      // The last execution time.
      shared_ptr<string> lastExecutionAt_ {};
      // The next execution time.
      shared_ptr<string> nextExecutionAt_ {};
      // The run configuration.
      shared_ptr<Tasks::RunConfig> runConfig_ {};
      // The scheduled task ID.
      shared_ptr<string> scheduledId_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The task configuration ID.
      shared_ptr<string> taskConfigId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The total number of executions.
      shared_ptr<int64_t> totalExecutions_ {};
      // The total number of failures.
      shared_ptr<int64_t> totalFailures_ {};
      // The user prompt or task description.
      shared_ptr<string> userPrompt_ {};
      // The CAS version number.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScheduledTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeScheduledTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScheduledTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScheduledTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduledTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeScheduledTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeScheduledTasksResponseBody::Tasks>) };
    inline vector<DescribeScheduledTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeScheduledTasksResponseBody::Tasks>) };
    inline DescribeScheduledTasksResponseBody& setTasks(const vector<DescribeScheduledTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeScheduledTasksResponseBody& setTasks(vector<DescribeScheduledTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScheduledTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code of the operation.
    shared_ptr<string> code_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token that indicates the position from which to start reading. Leave this parameter empty to read from the beginning.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of scheduled tasks.
    shared_ptr<vector<DescribeScheduledTasksResponseBody::Tasks>> tasks_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
