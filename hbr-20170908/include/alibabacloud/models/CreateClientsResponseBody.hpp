// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClientsResponseBodyInstanceStatuses.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->instanceStatuses_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->taskId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceStatuses Field Functions 
    bool hasInstanceStatuses() const { return this->instanceStatuses_ != nullptr;};
    void deleteInstanceStatuses() { this->instanceStatuses_ = nullptr;};
    inline const CreateClientsResponseBodyInstanceStatuses & instanceStatuses() const { DARABONBA_PTR_GET_CONST(instanceStatuses_, CreateClientsResponseBodyInstanceStatuses) };
    inline CreateClientsResponseBodyInstanceStatuses instanceStatuses() { DARABONBA_PTR_GET(instanceStatuses_, CreateClientsResponseBodyInstanceStatuses) };
    inline CreateClientsResponseBody& setInstanceStatuses(const CreateClientsResponseBodyInstanceStatuses & instanceStatuses) { DARABONBA_PTR_SET_VALUE(instanceStatuses_, instanceStatuses) };
    inline CreateClientsResponseBody& setInstanceStatuses(CreateClientsResponseBodyInstanceStatuses && instanceStatuses) { DARABONBA_PTR_SET_RVALUE(instanceStatuses_, instanceStatuses) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateClientsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The status of the ECS instance. If you specify more than one instance IDs in the request and the status of an ECS instance does not meet the requirements to install an HBR client, an error message is returned based on the value of this parameter.
    std::shared_ptr<CreateClientsResponseBodyInstanceStatuses> instanceStatuses_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the asynchronous job. You can call the DescribeTask operation to query the execution result of an asynchronous job.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
