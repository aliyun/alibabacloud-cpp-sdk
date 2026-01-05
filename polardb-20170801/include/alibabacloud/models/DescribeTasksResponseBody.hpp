// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody(DescribeTasksResponseBody &&) = default ;
    DescribeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody& operator=(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody& operator=(DescribeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(Task, task_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(Task, task_);
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
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(CurrentStepName, currentStepName_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(ExpectedFinishTime, expectedFinishTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(ProgressInfo, progressInfo_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(StepProgressInfo, stepProgressInfo_);
          DARABONBA_PTR_TO_JSON(StepsInfo, stepsInfo_);
          DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
          DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(CurrentStepName, currentStepName_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(ExpectedFinishTime, expectedFinishTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(ProgressInfo, progressInfo_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(StepProgressInfo, stepProgressInfo_);
          DARABONBA_PTR_FROM_JSON(StepsInfo, stepsInfo_);
          DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
          DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->currentStepName_ == nullptr && this->DBName_ == nullptr && this->expectedFinishTime_ == nullptr && this->finishTime_ == nullptr && this->progress_ == nullptr
        && this->progressInfo_ == nullptr && this->remain_ == nullptr && this->stepProgressInfo_ == nullptr && this->stepsInfo_ == nullptr && this->taskAction_ == nullptr
        && this->taskErrorCode_ == nullptr && this->taskErrorMessage_ == nullptr && this->taskId_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
        inline Task& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // currentStepName Field Functions 
        bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
        void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
        inline string getCurrentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
        inline Task& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Task& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // expectedFinishTime Field Functions 
        bool hasExpectedFinishTime() const { return this->expectedFinishTime_ != nullptr;};
        void deleteExpectedFinishTime() { this->expectedFinishTime_ = nullptr;};
        inline string getExpectedFinishTime() const { DARABONBA_PTR_GET_DEFAULT(expectedFinishTime_, "") };
        inline Task& setExpectedFinishTime(string expectedFinishTime) { DARABONBA_PTR_SET_VALUE(expectedFinishTime_, expectedFinishTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline Task& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline Task& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // progressInfo Field Functions 
        bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
        void deleteProgressInfo() { this->progressInfo_ = nullptr;};
        inline string getProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
        inline Task& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int32_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0) };
        inline Task& setRemain(int32_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // stepProgressInfo Field Functions 
        bool hasStepProgressInfo() const { return this->stepProgressInfo_ != nullptr;};
        void deleteStepProgressInfo() { this->stepProgressInfo_ = nullptr;};
        inline string getStepProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(stepProgressInfo_, "") };
        inline Task& setStepProgressInfo(string stepProgressInfo) { DARABONBA_PTR_SET_VALUE(stepProgressInfo_, stepProgressInfo) };


        // stepsInfo Field Functions 
        bool hasStepsInfo() const { return this->stepsInfo_ != nullptr;};
        void deleteStepsInfo() { this->stepsInfo_ = nullptr;};
        inline string getStepsInfo() const { DARABONBA_PTR_GET_DEFAULT(stepsInfo_, "") };
        inline Task& setStepsInfo(string stepsInfo) { DARABONBA_PTR_SET_VALUE(stepsInfo_, stepsInfo) };


        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline Task& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


        // taskErrorCode Field Functions 
        bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
        void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
        inline string getTaskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
        inline Task& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


        // taskErrorMessage Field Functions 
        bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
        void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
        inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
        inline Task& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The time when the task was started. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> beginTime_ {};
        // The name of the current step.
        shared_ptr<string> currentStepName_ {};
        // The database name.
        // 
        // >  This parameter is returned for only the tasks that involve database operations.
        shared_ptr<string> DBName_ {};
        // The estimated end time of the task. In most cases, this parameter is empty.
        shared_ptr<string> expectedFinishTime_ {};
        // The time when the task was completed. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> finishTime_ {};
        // The progress of the task in percentage.
        shared_ptr<int32_t> progress_ {};
        // The description of the task progress. If no progress description is provided for the task, this parameter is empty.
        shared_ptr<string> progressInfo_ {};
        // The estimated remaining duration of the task. Unit: seconds.
        shared_ptr<int32_t> remain_ {};
        // The progress of the subtasks. For example, the value `1/4` indicates that the task consists of four subtasks and the first subtask is in progress.
        shared_ptr<string> stepProgressInfo_ {};
        // The details of the subtasks.
        shared_ptr<string> stepsInfo_ {};
        // The API operation that is used by the task. Example: `CreateDBInstance`.
        shared_ptr<string> taskAction_ {};
        // The error code that is returned when an error occurs.
        // 
        // >  This parameter is returned only when the task is in the **Stop** state.
        shared_ptr<string> taskErrorCode_ {};
        // The error message that is returned when an error occurs.
        // 
        // >  This parameter is returned only when the task is in the **Stop** state.
        shared_ptr<string> taskErrorMessage_ {};
        // The ID of the task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->task_ == nullptr; };
      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<Tasks::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<Tasks::Task>) };
      inline vector<Tasks::Task> getTask() { DARABONBA_PTR_GET(task_, vector<Tasks::Task>) };
      inline Tasks& setTask(const vector<Tasks::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline Tasks& setTask(vector<Tasks::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    protected:
      shared_ptr<vector<Tasks::Task>> task_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->tasks_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeTasksResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTasksResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeTasksResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTasksResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const DescribeTasksResponseBody::Tasks & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, DescribeTasksResponseBody::Tasks) };
    inline DescribeTasksResponseBody::Tasks getTasks() { DARABONBA_PTR_GET(tasks_, DescribeTasksResponseBody::Tasks) };
    inline DescribeTasksResponseBody& setTasks(const DescribeTasksResponseBody::Tasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeTasksResponseBody& setTasks(DescribeTasksResponseBody::Tasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The ID of the cluster for which the task was created.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query.
    shared_ptr<string> endTime_ {};
    // The page number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query.
    shared_ptr<string> startTime_ {};
    // The details of the task.
    shared_ptr<DescribeTasksResponseBody::Tasks> tasks_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
