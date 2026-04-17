// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAGENTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELAGENTTASKRESPONSEBODY_HPP_
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
  class CancelAgentTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    CancelAgentTaskResponseBody() = default ;
    CancelAgentTaskResponseBody(const CancelAgentTaskResponseBody &) = default ;
    CancelAgentTaskResponseBody(CancelAgentTaskResponseBody &&) = default ;
    CancelAgentTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAgentTaskResponseBody() = default ;
    CancelAgentTaskResponseBody& operator=(const CancelAgentTaskResponseBody &) = default ;
    CancelAgentTaskResponseBody& operator=(CancelAgentTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(CancelAt, cancelAt_);
        DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PreviousStatus, previousStatus_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CancelAt, cancelAt_);
        DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PreviousStatus, previousStatus_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->cancelAt_ == nullptr
        && this->currentStatus_ == nullptr && this->failedReason_ == nullptr && this->instanceId_ == nullptr && this->previousStatus_ == nullptr && this->taskId_ == nullptr; };
      // cancelAt Field Functions 
      bool hasCancelAt() const { return this->cancelAt_ != nullptr;};
      void deleteCancelAt() { this->cancelAt_ = nullptr;};
      inline string getCancelAt() const { DARABONBA_PTR_GET_DEFAULT(cancelAt_, "") };
      inline Tasks& setCancelAt(string cancelAt) { DARABONBA_PTR_SET_VALUE(cancelAt_, cancelAt) };


      // currentStatus Field Functions 
      bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
      void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
      inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
      inline Tasks& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline Tasks& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Tasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // previousStatus Field Functions 
      bool hasPreviousStatus() const { return this->previousStatus_ != nullptr;};
      void deletePreviousStatus() { this->previousStatus_ = nullptr;};
      inline string getPreviousStatus() const { DARABONBA_PTR_GET_DEFAULT(previousStatus_, "") };
      inline Tasks& setPreviousStatus(string previousStatus) { DARABONBA_PTR_SET_VALUE(previousStatus_, previousStatus) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> cancelAt_ {};
      shared_ptr<string> currentStatus_ {};
      shared_ptr<string> failedReason_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> previousStatus_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CancelAgentTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CancelAgentTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelAgentTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<CancelAgentTaskResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<CancelAgentTaskResponseBody::Tasks>) };
    inline vector<CancelAgentTaskResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<CancelAgentTaskResponseBody::Tasks>) };
    inline CancelAgentTaskResponseBody& setTasks(const vector<CancelAgentTaskResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline CancelAgentTaskResponseBody& setTasks(vector<CancelAgentTaskResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CancelAgentTaskResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
