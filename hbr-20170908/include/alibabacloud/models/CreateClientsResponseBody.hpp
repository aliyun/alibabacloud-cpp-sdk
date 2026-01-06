// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODY_HPP_
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
  class CreateClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceStatuses, instanceStatuses_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateClientsResponseBody() = default ;
    CreateClientsResponseBody(const CreateClientsResponseBody &) = default ;
    CreateClientsResponseBody(CreateClientsResponseBody &&) = default ;
    CreateClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientsResponseBody() = default ;
    CreateClientsResponseBody& operator=(const CreateClientsResponseBody &) = default ;
    CreateClientsResponseBody& operator=(CreateClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
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
      class InstanceStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceStatus& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ValidInstance, validInstance_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ValidInstance, validInstance_);
        };
        InstanceStatus() = default ;
        InstanceStatus(const InstanceStatus &) = default ;
        InstanceStatus(InstanceStatus &&) = default ;
        InstanceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceStatus() = default ;
        InstanceStatus& operator=(const InstanceStatus &) = default ;
        InstanceStatus& operator=(InstanceStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->validInstance_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // validInstance Field Functions 
        bool hasValidInstance() const { return this->validInstance_ != nullptr;};
        void deleteValidInstance() { this->validInstance_ = nullptr;};
        inline bool getValidInstance() const { DARABONBA_PTR_GET_DEFAULT(validInstance_, false) };
        inline InstanceStatus& setValidInstance(bool validInstance) { DARABONBA_PTR_SET_VALUE(validInstance_, validInstance) };


      protected:
        // The ID of the ECS instance.
        shared_ptr<string> instanceId_ {};
        // Indicates whether an HBR client can be installed on the ECS instance. Valid values:
        // 
        // *   true: An HBR client can be installed on the ECS instance.
        // *   false: An HBR client cannot be installed on the ECS instance.
        shared_ptr<bool> validInstance_ {};
      };

      virtual bool empty() const override { return this->instanceStatus_ == nullptr; };
      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline const vector<InstanceStatuses::InstanceStatus> & getInstanceStatus() const { DARABONBA_PTR_GET_CONST(instanceStatus_, vector<InstanceStatuses::InstanceStatus>) };
      inline vector<InstanceStatuses::InstanceStatus> getInstanceStatus() { DARABONBA_PTR_GET(instanceStatus_, vector<InstanceStatuses::InstanceStatus>) };
      inline InstanceStatuses& setInstanceStatus(const vector<InstanceStatuses::InstanceStatus> & instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };
      inline InstanceStatuses& setInstanceStatus(vector<InstanceStatuses::InstanceStatus> && instanceStatus) { DARABONBA_PTR_SET_RVALUE(instanceStatus_, instanceStatus) };


    protected:
      shared_ptr<vector<InstanceStatuses::InstanceStatus>> instanceStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceStatuses_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceStatuses Field Functions 
    bool hasInstanceStatuses() const { return this->instanceStatuses_ != nullptr;};
    void deleteInstanceStatuses() { this->instanceStatuses_ = nullptr;};
    inline const CreateClientsResponseBody::InstanceStatuses & getInstanceStatuses() const { DARABONBA_PTR_GET_CONST(instanceStatuses_, CreateClientsResponseBody::InstanceStatuses) };
    inline CreateClientsResponseBody::InstanceStatuses getInstanceStatuses() { DARABONBA_PTR_GET(instanceStatuses_, CreateClientsResponseBody::InstanceStatuses) };
    inline CreateClientsResponseBody& setInstanceStatuses(const CreateClientsResponseBody::InstanceStatuses & instanceStatuses) { DARABONBA_PTR_SET_VALUE(instanceStatuses_, instanceStatuses) };
    inline CreateClientsResponseBody& setInstanceStatuses(CreateClientsResponseBody::InstanceStatuses && instanceStatuses) { DARABONBA_PTR_SET_RVALUE(instanceStatuses_, instanceStatuses) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateClientsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The status of the ECS instance. If you specify more than one instance IDs in the request and the status of an ECS instance does not meet the requirements to install an HBR client, an error message is returned based on the value of this parameter.
    shared_ptr<CreateClientsResponseBody::InstanceStatuses> instanceStatuses_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The ID of the asynchronous job. You can call the DescribeTask operation to query the execution result of an asynchronous job.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
