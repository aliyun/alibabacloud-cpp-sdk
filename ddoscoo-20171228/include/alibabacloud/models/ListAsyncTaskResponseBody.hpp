// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListAsyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAsyncTaskResponseBody() = default ;
    ListAsyncTaskResponseBody(const ListAsyncTaskResponseBody &) = default ;
    ListAsyncTaskResponseBody(ListAsyncTaskResponseBody &&) = default ;
    ListAsyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTaskResponseBody() = default ;
    ListAsyncTaskResponseBody& operator=(const ListAsyncTaskResponseBody &) = default ;
    ListAsyncTaskResponseBody& operator=(ListAsyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AsyncTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AsyncTasks& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
        DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, AsyncTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
        DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      AsyncTasks() = default ;
      AsyncTasks(const AsyncTasks &) = default ;
      AsyncTasks(AsyncTasks &&) = default ;
      AsyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AsyncTasks() = default ;
      AsyncTasks& operator=(const AsyncTasks &) = default ;
      AsyncTasks& operator=(AsyncTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->taskId_ == nullptr && this->taskParams_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr
        && this->taskType_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AsyncTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline AsyncTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline AsyncTasks& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskParams Field Functions 
      bool hasTaskParams() const { return this->taskParams_ != nullptr;};
      void deleteTaskParams() { this->taskParams_ = nullptr;};
      inline string getTaskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
      inline AsyncTasks& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


      // taskResult Field Functions 
      bool hasTaskResult() const { return this->taskResult_ != nullptr;};
      void deleteTaskResult() { this->taskResult_ = nullptr;};
      inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
      inline AsyncTasks& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline AsyncTasks& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline AsyncTasks& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<string> taskParams_ {};
      shared_ptr<string> taskResult_ {};
      shared_ptr<int32_t> taskStatus_ {};
      shared_ptr<int32_t> taskType_ {};
    };

    virtual bool empty() const override { return this->asyncTasks_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // asyncTasks Field Functions 
    bool hasAsyncTasks() const { return this->asyncTasks_ != nullptr;};
    void deleteAsyncTasks() { this->asyncTasks_ = nullptr;};
    inline const vector<ListAsyncTaskResponseBody::AsyncTasks> & getAsyncTasks() const { DARABONBA_PTR_GET_CONST(asyncTasks_, vector<ListAsyncTaskResponseBody::AsyncTasks>) };
    inline vector<ListAsyncTaskResponseBody::AsyncTasks> getAsyncTasks() { DARABONBA_PTR_GET(asyncTasks_, vector<ListAsyncTaskResponseBody::AsyncTasks>) };
    inline ListAsyncTaskResponseBody& setAsyncTasks(const vector<ListAsyncTaskResponseBody::AsyncTasks> & asyncTasks) { DARABONBA_PTR_SET_VALUE(asyncTasks_, asyncTasks) };
    inline ListAsyncTaskResponseBody& setAsyncTasks(vector<ListAsyncTaskResponseBody::AsyncTasks> && asyncTasks) { DARABONBA_PTR_SET_RVALUE(asyncTasks_, asyncTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAsyncTaskResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListAsyncTaskResponseBody::AsyncTasks>> asyncTasks_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
