// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINPOLARCLAWCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOGINPOLARCLAWCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class LoginPolarClawChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginPolarClawChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, LoginPolarClawChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    LoginPolarClawChannelResponseBody() = default ;
    LoginPolarClawChannelResponseBody(const LoginPolarClawChannelResponseBody &) = default ;
    LoginPolarClawChannelResponseBody(LoginPolarClawChannelResponseBody &&) = default ;
    LoginPolarClawChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginPolarClawChannelResponseBody() = default ;
    LoginPolarClawChannelResponseBody& operator=(const LoginPolarClawChannelResponseBody &) = default ;
    LoginPolarClawChannelResponseBody& operator=(LoginPolarClawChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->operation_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr
        && this->taskId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline LoginPolarClawChannelResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline LoginPolarClawChannelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LoginPolarClawChannelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline LoginPolarClawChannelResponseBody& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LoginPolarClawChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline LoginPolarClawChannelResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline LoginPolarClawChannelResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The name of the operation.
    shared_ptr<string> operation_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The state of the asynchronous task.
    shared_ptr<string> state_ {};
    // The ID of the asynchronous task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
