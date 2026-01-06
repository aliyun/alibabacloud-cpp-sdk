// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UninstallBackupClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UninstallBackupClientsResponseBody() = default ;
    UninstallBackupClientsResponseBody(const UninstallBackupClientsResponseBody &) = default ;
    UninstallBackupClientsResponseBody(UninstallBackupClientsResponseBody &&) = default ;
    UninstallBackupClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallBackupClientsResponseBody() = default ;
    UninstallBackupClientsResponseBody& operator=(const UninstallBackupClientsResponseBody &) = default ;
    UninstallBackupClientsResponseBody& operator=(UninstallBackupClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ValidInstance, validInstance_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ValidInstance, validInstance_);
      };
      InstanceStatuses() = default ;
      InstanceStatuses(const InstanceStatuses &) = default ;
      InstanceStatuses(InstanceStatuses &&) = default ;
      InstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatuses() = default ;
      InstanceStatuses& operator=(const InstanceStatuses &) = default ;
      InstanceStatuses& operator=(InstanceStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->instanceId_ == nullptr && this->validInstance_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InstanceStatuses& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceStatuses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // validInstance Field Functions 
      bool hasValidInstance() const { return this->validInstance_ != nullptr;};
      void deleteValidInstance() { this->validInstance_ = nullptr;};
      inline bool getValidInstance() const { DARABONBA_PTR_GET_DEFAULT(validInstance_, false) };
      inline InstanceStatuses& setValidInstance(bool validInstance) { DARABONBA_PTR_SET_VALUE(validInstance_, validInstance) };


    protected:
      // The error code. Valid values:
      // 
      // *   If the value is empty, the request is successful.
      // *   **InstanceNotExists**: The ECS instance does not exist.
      // *   **InstanceNotRunning**: The ECS instance is not running.
      // *   **CloudAssistNotRunningOnInstance**: Cloud Assistant is unavailable.
      shared_ptr<string> errorCode_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether a backup client can be installed on the ECS instance.
      // 
      // *   true: A backup client can be installed on the ECS instance.
      // *   false: A backup client cannot be installed on the ECS instance.
      shared_ptr<bool> validInstance_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceStatuses_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UninstallBackupClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceStatuses Field Functions 
    bool hasInstanceStatuses() const { return this->instanceStatuses_ != nullptr;};
    void deleteInstanceStatuses() { this->instanceStatuses_ = nullptr;};
    inline const vector<UninstallBackupClientsResponseBody::InstanceStatuses> & getInstanceStatuses() const { DARABONBA_PTR_GET_CONST(instanceStatuses_, vector<UninstallBackupClientsResponseBody::InstanceStatuses>) };
    inline vector<UninstallBackupClientsResponseBody::InstanceStatuses> getInstanceStatuses() { DARABONBA_PTR_GET(instanceStatuses_, vector<UninstallBackupClientsResponseBody::InstanceStatuses>) };
    inline UninstallBackupClientsResponseBody& setInstanceStatuses(const vector<UninstallBackupClientsResponseBody::InstanceStatuses> & instanceStatuses) { DARABONBA_PTR_SET_VALUE(instanceStatuses_, instanceStatuses) };
    inline UninstallBackupClientsResponseBody& setInstanceStatuses(vector<UninstallBackupClientsResponseBody::InstanceStatuses> && instanceStatuses) { DARABONBA_PTR_SET_RVALUE(instanceStatuses_, instanceStatuses) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UninstallBackupClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UninstallBackupClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UninstallBackupClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UninstallBackupClientsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The status of the ECS instance.
    shared_ptr<vector<UninstallBackupClientsResponseBody::InstanceStatuses>> instanceStatuses_ {};
    // The message that is returned. If the request is successful, a value of successful is returned. If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    // 
    // *   true: The request is successful.
    // *   false: The request fails.
    shared_ptr<bool> success_ {};
    // The ID of the asynchronous job. You can call the DescribeTask operation to query the execution result of the asynchronous job.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
