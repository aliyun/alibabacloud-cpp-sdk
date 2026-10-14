// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDITTASKSTATE_HPP_
#define ALIBABACLOUD_MODELS_AUDITTASKSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class AuditTaskState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuditTaskState& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(runtimeError, runtimeError_);
      DARABONBA_PTR_TO_JSON(runtimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(runtimeStatusCheckedAt, runtimeStatusCheckedAt_);
      DARABONBA_ANY_TO_JSON(task, task_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AuditTaskState& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(runtimeError, runtimeError_);
      DARABONBA_PTR_FROM_JSON(runtimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(runtimeStatusCheckedAt, runtimeStatusCheckedAt_);
      DARABONBA_ANY_FROM_JSON(task, task_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    AuditTaskState() = default ;
    AuditTaskState(const AuditTaskState &) = default ;
    AuditTaskState(AuditTaskState &&) = default ;
    AuditTaskState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuditTaskState() = default ;
    AuditTaskState& operator=(const AuditTaskState &) = default ;
    AuditTaskState& operator=(AuditTaskState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuntimeError : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuntimeError& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, RuntimeError& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      };
      RuntimeError() = default ;
      RuntimeError(const RuntimeError &) = default ;
      RuntimeError(RuntimeError &&) = default ;
      RuntimeError(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuntimeError() = default ;
      RuntimeError& operator=(const RuntimeError &) = default ;
      RuntimeError& operator=(RuntimeError &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline RuntimeError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RuntimeError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline RuntimeError& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // The error code, such as task_status_query_failed.
      shared_ptr<string> code_ {};
      // The error description.
      shared_ptr<string> message_ {};
      // The ID of the status query request.
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->runtimeError_ == nullptr && this->runtimeStatus_ == nullptr && this->runtimeStatusCheckedAt_ == nullptr && this->task_ == nullptr && this->taskId_ == nullptr
        && this->version_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AuditTaskState& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // runtimeError Field Functions 
    bool hasRuntimeError() const { return this->runtimeError_ != nullptr;};
    void deleteRuntimeError() { this->runtimeError_ = nullptr;};
    inline const AuditTaskState::RuntimeError & getRuntimeError() const { DARABONBA_PTR_GET_CONST(runtimeError_, AuditTaskState::RuntimeError) };
    inline AuditTaskState::RuntimeError getRuntimeError() { DARABONBA_PTR_GET(runtimeError_, AuditTaskState::RuntimeError) };
    inline AuditTaskState& setRuntimeError(const AuditTaskState::RuntimeError & runtimeError) { DARABONBA_PTR_SET_VALUE(runtimeError_, runtimeError) };
    inline AuditTaskState& setRuntimeError(AuditTaskState::RuntimeError && runtimeError) { DARABONBA_PTR_SET_RVALUE(runtimeError_, runtimeError) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string getRuntimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline AuditTaskState& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // runtimeStatusCheckedAt Field Functions 
    bool hasRuntimeStatusCheckedAt() const { return this->runtimeStatusCheckedAt_ != nullptr;};
    void deleteRuntimeStatusCheckedAt() { this->runtimeStatusCheckedAt_ = nullptr;};
    inline string getRuntimeStatusCheckedAt() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatusCheckedAt_, "") };
    inline AuditTaskState& setRuntimeStatusCheckedAt(string runtimeStatusCheckedAt) { DARABONBA_PTR_SET_VALUE(runtimeStatusCheckedAt_, runtimeStatusCheckedAt) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline     const Darabonba::Json & getTask() const { DARABONBA_GET(task_) };
    Darabonba::Json & getTask() { DARABONBA_GET(task_) };
    inline AuditTaskState& setTask(const Darabonba::Json & task) { DARABONBA_SET_VALUE(task_, task) };
    inline AuditTaskState& setTask(Darabonba::Json && task) { DARABONBA_SET_RVALUE(task_, task) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AuditTaskState& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline AuditTaskState& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The current expected sharing switch for the task.
    shared_ptr<bool> enabled_ {};
    // The runtime error, which is returned only when runtimeStatus is error.
    shared_ptr<AuditTaskState::RuntimeError> runtimeError_ {};
    // The runtime status, which appears only when includeRuntimeStatus=true is requested. Valid values: pending, starting, stopping, running, stopped, missing, drifted, and error. The list and get operations do not return deleting.
    shared_ptr<string> runtimeStatus_ {};
    // The time when the remote status is checked. This field appears together with runtimeStatus.
    shared_ptr<string> runtimeStatusCheckedAt_ {};
    // The task details in JSON format.
    Darabonba::Json task_ {};
    // The stable ID of the task, which must be equal to task.taskId.
    shared_ptr<string> taskId_ {};
    // The current execution configuration version of the task. The minimum value is 1. Starting or stopping the task does not increment this version.
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
