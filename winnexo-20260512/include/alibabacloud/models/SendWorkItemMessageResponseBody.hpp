// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDWORKITEMMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDWORKITEMMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendWorkItemMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendWorkItemMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(userMessageId, userMessageId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, SendWorkItemMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(userMessageId, userMessageId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    SendWorkItemMessageResponseBody() = default ;
    SendWorkItemMessageResponseBody(const SendWorkItemMessageResponseBody &) = default ;
    SendWorkItemMessageResponseBody(SendWorkItemMessageResponseBody &&) = default ;
    SendWorkItemMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendWorkItemMessageResponseBody() = default ;
    SendWorkItemMessageResponseBody& operator=(const SendWorkItemMessageResponseBody &) = default ;
    SendWorkItemMessageResponseBody& operator=(SendWorkItemMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->messageId_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->userMessageId_ == nullptr
        && this->workItemId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendWorkItemMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendWorkItemMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SendWorkItemMessageResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendWorkItemMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendWorkItemMessageResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userMessageId Field Functions 
    bool hasUserMessageId() const { return this->userMessageId_ != nullptr;};
    void deleteUserMessageId() { this->userMessageId_ = nullptr;};
    inline string getUserMessageId() const { DARABONBA_PTR_GET_DEFAULT(userMessageId_, "") };
    inline SendWorkItemMessageResponseBody& setUserMessageId(string userMessageId) { DARABONBA_PTR_SET_VALUE(userMessageId_, userMessageId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline SendWorkItemMessageResponseBody& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The business status code. A value of 200 indicates success. Other values indicate backend error codes.
    shared_ptr<string> code_ {};
    // The error description. This parameter is empty if the request is successful.
    shared_ptr<string> message_ {};
    // The ID of the assistant message. The reply is generated asynchronously in the background.
    shared_ptr<string> messageId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the existing topic session.
    shared_ptr<string> sessionId_ {};
    // The ID of the user message.
    shared_ptr<string> userMessageId_ {};
    // The work item ID in the request. If only conversationId is specified, a compatible ID in the legacy-topic:<conversationId> format is returned.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
