// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(TaskProgressInfo, taskProgressInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskProgressInfo, taskProgressInfo_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskProgressInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskProgressInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(CurrentStepName, currentStepName_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(ExpectedFinishTime, expectedFinishTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(ProgressInfo, progressInfo_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StepProgressInfo, stepProgressInfo_);
          DARABONBA_PTR_TO_JSON(StepsInfo, stepsInfo_);
          DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
          DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskProgressInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(CurrentStepName, currentStepName_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(ExpectedFinishTime, expectedFinishTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(ProgressInfo, progressInfo_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StepProgressInfo, stepProgressInfo_);
          DARABONBA_PTR_FROM_JSON(StepsInfo, stepsInfo_);
          DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
          DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        TaskProgressInfo() = default ;
        TaskProgressInfo(const TaskProgressInfo &) = default ;
        TaskProgressInfo(TaskProgressInfo &&) = default ;
        TaskProgressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskProgressInfo() = default ;
        TaskProgressInfo& operator=(const TaskProgressInfo &) = default ;
        TaskProgressInfo& operator=(TaskProgressInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->currentStepName_ == nullptr && this->DBName_ == nullptr && this->expectedFinishTime_ == nullptr && this->finishTime_ == nullptr && this->progress_ == nullptr
        && this->progressInfo_ == nullptr && this->remain_ == nullptr && this->status_ == nullptr && this->stepProgressInfo_ == nullptr && this->stepsInfo_ == nullptr
        && this->taskAction_ == nullptr && this->taskErrorCode_ == nullptr && this->taskErrorMessage_ == nullptr && this->taskId_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
        inline TaskProgressInfo& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // currentStepName Field Functions 
        bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
        void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
        inline string getCurrentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
        inline TaskProgressInfo& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline TaskProgressInfo& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // expectedFinishTime Field Functions 
        bool hasExpectedFinishTime() const { return this->expectedFinishTime_ != nullptr;};
        void deleteExpectedFinishTime() { this->expectedFinishTime_ = nullptr;};
        inline string getExpectedFinishTime() const { DARABONBA_PTR_GET_DEFAULT(expectedFinishTime_, "") };
        inline TaskProgressInfo& setExpectedFinishTime(string expectedFinishTime) { DARABONBA_PTR_SET_VALUE(expectedFinishTime_, expectedFinishTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline TaskProgressInfo& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline TaskProgressInfo& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // progressInfo Field Functions 
        bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
        void deleteProgressInfo() { this->progressInfo_ = nullptr;};
        inline string getProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
        inline TaskProgressInfo& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int32_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0) };
        inline TaskProgressInfo& setRemain(int32_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskProgressInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stepProgressInfo Field Functions 
        bool hasStepProgressInfo() const { return this->stepProgressInfo_ != nullptr;};
        void deleteStepProgressInfo() { this->stepProgressInfo_ = nullptr;};
        inline string getStepProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(stepProgressInfo_, "") };
        inline TaskProgressInfo& setStepProgressInfo(string stepProgressInfo) { DARABONBA_PTR_SET_VALUE(stepProgressInfo_, stepProgressInfo) };


        // stepsInfo Field Functions 
        bool hasStepsInfo() const { return this->stepsInfo_ != nullptr;};
        void deleteStepsInfo() { this->stepsInfo_ = nullptr;};
        inline string getStepsInfo() const { DARABONBA_PTR_GET_DEFAULT(stepsInfo_, "") };
        inline TaskProgressInfo& setStepsInfo(string stepsInfo) { DARABONBA_PTR_SET_VALUE(stepsInfo_, stepsInfo) };


        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline TaskProgressInfo& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


        // taskErrorCode Field Functions 
        bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
        void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
        inline string getTaskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
        inline TaskProgressInfo& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


        // taskErrorMessage Field Functions 
        bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
        void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
        inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
        inline TaskProgressInfo& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline TaskProgressInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The start time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> beginTime_ {};
        // The name of the subtask.
        shared_ptr<string> currentStepName_ {};
        // The name of the database. If the task involves a database, the database name is returned.
        shared_ptr<string> DBName_ {};
        // The estimated end time of the task.
        // 
        // >  In most cases, this parameter is empty.
        shared_ptr<string> expectedFinishTime_ {};
        // The end time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> finishTime_ {};
        // The task progress in percentage.
        shared_ptr<string> progress_ {};
        // The description of the task progress.
        // 
        // >  If no progress description is provided for the task, this parameter is empty.
        shared_ptr<string> progressInfo_ {};
        // The estimated remaining time of the task. Unit: seconds.
        // 
        // >  If the task is not running, this parameter is not returned or the returned value is **0**.
        shared_ptr<int32_t> remain_ {};
        // The status of the task.
        shared_ptr<string> status_ {};
        // The progress of the subtask. For example, a value of `1/4` indicates that the task consists of four subtasks and the first subtask is in progress.
        shared_ptr<string> stepProgressInfo_ {};
        // The details of the subtasks.
        shared_ptr<string> stepsInfo_ {};
        // The operation that is used by the task, such as **CreateDBInstance**.
        shared_ptr<string> taskAction_ {};
        // The error code that is returned when an error occurs.
        // 
        // >  This parameter is returned only when an error occurs.
        shared_ptr<string> taskErrorCode_ {};
        // The error message that is returned when an error occurs.
        // 
        // >  This parameter is returned only when an error occurs.
        shared_ptr<string> taskErrorMessage_ {};
        // The task ID. You can use one of the following methods to obtain the task ID:
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->taskProgressInfo_ == nullptr; };
      // taskProgressInfo Field Functions 
      bool hasTaskProgressInfo() const { return this->taskProgressInfo_ != nullptr;};
      void deleteTaskProgressInfo() { this->taskProgressInfo_ = nullptr;};
      inline const vector<Items::TaskProgressInfo> & getTaskProgressInfo() const { DARABONBA_PTR_GET_CONST(taskProgressInfo_, vector<Items::TaskProgressInfo>) };
      inline vector<Items::TaskProgressInfo> getTaskProgressInfo() { DARABONBA_PTR_GET(taskProgressInfo_, vector<Items::TaskProgressInfo>) };
      inline Items& setTaskProgressInfo(const vector<Items::TaskProgressInfo> & taskProgressInfo) { DARABONBA_PTR_SET_VALUE(taskProgressInfo_, taskProgressInfo) };
      inline Items& setTaskProgressInfo(vector<Items::TaskProgressInfo> && taskProgressInfo) { DARABONBA_PTR_SET_RVALUE(taskProgressInfo_, taskProgressInfo) };


    protected:
      shared_ptr<vector<Items::TaskProgressInfo>> taskProgressInfo_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTasksResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeTasksResponseBody::Items) };
    inline DescribeTasksResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeTasksResponseBody::Items) };
    inline DescribeTasksResponseBody& setItems(const DescribeTasksResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTasksResponseBody& setItems(DescribeTasksResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


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


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of the task execution.
    shared_ptr<DescribeTasksResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
