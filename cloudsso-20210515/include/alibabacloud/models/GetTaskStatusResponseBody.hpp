// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetTaskStatusResponseBody() = default ;
    GetTaskStatusResponseBody(const GetTaskStatusResponseBody &) = default ;
    GetTaskStatusResponseBody(GetTaskStatusResponseBody &&) = default ;
    GetTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskStatusResponseBody() = default ;
    GetTaskStatusResponseBody& operator=(const GetTaskStatusResponseBody &) = default ;
    GetTaskStatusResponseBody& operator=(GetTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskStatus& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TaskStatus() = default ;
      TaskStatus(const TaskStatus &) = default ;
      TaskStatus(TaskStatus &&) = default ;
      TaskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskStatus() = default ;
      TaskStatus& operator=(const TaskStatus &) = default ;
      TaskStatus& operator=(TaskStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->failureReason_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TaskStatus& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // failureReason Field Functions 
      bool hasFailureReason() const { return this->failureReason_ != nullptr;};
      void deleteFailureReason() { this->failureReason_ = nullptr;};
      inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
      inline TaskStatus& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TaskStatus& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskStatus& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskStatus& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The end time of the task.
      shared_ptr<string> endTime_ {};
      // The cause of the task failure.
      // 
      // >  This parameter is returned only when the value of `Status` is `Failed`.
      shared_ptr<string> failureReason_ {};
      // The start time of the task.
      shared_ptr<string> startTime_ {};
      // The task status. Valid values:
      // 
      // *   InProgress: The task is running.
      // *   Success: The task is successful.
      // *   Failed: The task failed.
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task type. Valid values:
      // 
      // *   ProvisionAccessConfiguration: An access configuration is provisioned.
      // *   DeprovisionAccessConfiguration: An access configuration is de-provisioned.
      // *   CreateAccessAssignment: Access permissions on an account in the resource directory are assigned.
      // *   DeleteAccessAssignment: Access permissions on an account in the resource directory are removed.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline const GetTaskStatusResponseBody::TaskStatus & getTaskStatus() const { DARABONBA_PTR_GET_CONST(taskStatus_, GetTaskStatusResponseBody::TaskStatus) };
    inline GetTaskStatusResponseBody::TaskStatus getTaskStatus() { DARABONBA_PTR_GET(taskStatus_, GetTaskStatusResponseBody::TaskStatus) };
    inline GetTaskStatusResponseBody& setTaskStatus(const GetTaskStatusResponseBody::TaskStatus & taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };
    inline GetTaskStatusResponseBody& setTaskStatus(GetTaskStatusResponseBody::TaskStatus && taskStatus) { DARABONBA_PTR_SET_RVALUE(taskStatus_, taskStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status information about the task.
    shared_ptr<GetTaskStatusResponseBody::TaskStatus> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
