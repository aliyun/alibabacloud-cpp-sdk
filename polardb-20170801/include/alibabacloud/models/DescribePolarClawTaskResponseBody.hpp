// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribePolarClawTaskResponseBody() = default ;
    DescribePolarClawTaskResponseBody(const DescribePolarClawTaskResponseBody &) = default ;
    DescribePolarClawTaskResponseBody(DescribePolarClawTaskResponseBody &&) = default ;
    DescribePolarClawTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawTaskResponseBody() = default ;
    DescribePolarClawTaskResponseBody& operator=(const DescribePolarClawTaskResponseBody &) = default ;
    DescribePolarClawTaskResponseBody& operator=(DescribePolarClawTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_ANY_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UpdatedAtMs, updatedAtMs_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_ANY_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UpdatedAtMs, updatedAtMs_);
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
      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code.
        shared_ptr<string> code_ {};
        // The error message.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->createdAtMs_ == nullptr
        && this->error_ == nullptr && this->operation_ == nullptr && this->result_ == nullptr && this->state_ == nullptr && this->taskId_ == nullptr
        && this->updatedAtMs_ == nullptr; };
      // createdAtMs Field Functions 
      bool hasCreatedAtMs() const { return this->createdAtMs_ != nullptr;};
      void deleteCreatedAtMs() { this->createdAtMs_ = nullptr;};
      inline int64_t getCreatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(createdAtMs_, 0L) };
      inline Task& setCreatedAtMs(int64_t createdAtMs) { DARABONBA_PTR_SET_VALUE(createdAtMs_, createdAtMs) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Task::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Task::Error) };
      inline Task::Error getError() { DARABONBA_PTR_GET(error_, Task::Error) };
      inline Task& setError(const Task::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Task& setError(Task::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Task& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline Task& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline Task& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Task& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // updatedAtMs Field Functions 
      bool hasUpdatedAtMs() const { return this->updatedAtMs_ != nullptr;};
      void deleteUpdatedAtMs() { this->updatedAtMs_ = nullptr;};
      inline int64_t getUpdatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(updatedAtMs_, 0L) };
      inline Task& setUpdatedAtMs(int64_t updatedAtMs) { DARABONBA_PTR_SET_VALUE(updatedAtMs_, updatedAtMs) };


    protected:
      // The timestamp when the task was created, in milliseconds.
      shared_ptr<int64_t> createdAtMs_ {};
      // The error object. This parameter is returned only if the task fails.
      shared_ptr<Task::Error> error_ {};
      // The operation name.
      shared_ptr<string> operation_ {};
      // The task result object. This parameter is returned only if the task succeeds. The content of this object varies by operation.
      Darabonba::Json result_ {};
      // The task state. Valid values: pending, running, succeeded, and failed.
      shared_ptr<string> state_ {};
      // The task ID, which is a universally unique identifier (UUID).
      shared_ptr<string> taskId_ {};
      // The timestamp when the task was last updated, in milliseconds.
      shared_ptr<int64_t> updatedAtMs_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->task_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawTaskResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const DescribePolarClawTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, DescribePolarClawTaskResponseBody::Task) };
    inline DescribePolarClawTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, DescribePolarClawTaskResponseBody::Task) };
    inline DescribePolarClawTaskResponseBody& setTask(const DescribePolarClawTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribePolarClawTaskResponseBody& setTask(DescribePolarClawTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task object.
    shared_ptr<DescribePolarClawTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
