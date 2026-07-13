// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
          DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskPriority, taskPriority_);
          DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
          DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskPriority, taskPriority_);
          DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->errorMessage_ == nullptr && this->executionId_ == nullptr && this->expireTime_ == nullptr && this->progress_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr && this->taskDescription_ == nullptr && this->taskDetail_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskPriority_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
        inline Content& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Content& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executionId Field Functions 
        bool hasExecutionId() const { return this->executionId_ != nullptr;};
        void deleteExecutionId() { this->executionId_ = nullptr;};
        inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
        inline Content& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline Content& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline Content& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Content& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Content& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // taskDescription Field Functions 
        bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
        void deleteTaskDescription() { this->taskDescription_ = nullptr;};
        inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
        inline Content& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


        // taskDetail Field Functions 
        bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
        void deleteTaskDetail() { this->taskDetail_ = nullptr;};
        inline string getTaskDetail() const { DARABONBA_PTR_GET_DEFAULT(taskDetail_, "") };
        inline Content& setTaskDetail(string taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Content& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline Content& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskPriority Field Functions 
        bool hasTaskPriority() const { return this->taskPriority_ != nullptr;};
        void deleteTaskPriority() { this->taskPriority_ = nullptr;};
        inline string getTaskPriority() const { DARABONBA_PTR_GET_DEFAULT(taskPriority_, "") };
        inline Content& setTaskPriority(string taskPriority) { DARABONBA_PTR_SET_VALUE(taskPriority_, taskPriority) };


        // taskResult Field Functions 
        bool hasTaskResult() const { return this->taskResult_ != nullptr;};
        void deleteTaskResult() { this->taskResult_ = nullptr;};
        inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
        inline Content& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline Content& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline Content& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The task\\"s completion time, represented as a Unix timestamp in seconds.
        shared_ptr<int64_t> completeTime_ {};
        // The error message returned if the task fails.
        shared_ptr<string> errorMessage_ {};
        // The execution ID. This parameter is currently unused and returns an empty string.
        shared_ptr<string> executionId_ {};
        // The task\\"s expiration time, represented as a Unix timestamp in seconds.
        shared_ptr<int64_t> expireTime_ {};
        // The progress of the task, ranging from 0 to 10,000.
        shared_ptr<int32_t> progress_ {};
        // The request ID.
        shared_ptr<string> requestId_ {};
        // The task\\"s start time, represented as a Unix timestamp in seconds.
        shared_ptr<int64_t> startTime_ {};
        // The task description.
        shared_ptr<string> taskDescription_ {};
        // The task details.
        shared_ptr<string> taskDetail_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The task name.
        shared_ptr<string> taskName_ {};
        // The task priority. Valid values: `HIGH` (high-priority, for user-initiated tasks) and `LOW` (low-priority, for background tasks).
        shared_ptr<string> taskPriority_ {};
        // The result of the task.
        shared_ptr<string> taskResult_ {};
        // The task status. Valid values: `CREATED`, `RUNNING`, `COMPLETE`, `FAILED`, `EXPIRED`, and `CANCELED`.
        shared_ptr<string> taskStatus_ {};
        // The task type. Valid values: `TEST`, `UPDATE_RESOURCES`, and `CHECK_RULES`.
        shared_ptr<string> taskType_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of tasks.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxResults_ {};
      // The pagination token used to retrieve the next page of results. If this parameter is empty, no more results are available.
      shared_ptr<string> nextToken_ {};
      // The total number of entries matching the request criteria. This parameter is optional and is not returned by default.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTasksResponseBody::Data) };
    inline DescribeTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTasksResponseBody::Data) };
    inline DescribeTasksResponseBody& setData(const DescribeTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTasksResponseBody& setData(DescribeTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeTasksResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
