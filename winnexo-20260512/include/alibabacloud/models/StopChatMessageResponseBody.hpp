// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCHATMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPCHATMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class StopChatMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopChatMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(partialContent, partialContent_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StopChatMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(partialContent, partialContent_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    StopChatMessageResponseBody() = default ;
    StopChatMessageResponseBody(const StopChatMessageResponseBody &) = default ;
    StopChatMessageResponseBody(StopChatMessageResponseBody &&) = default ;
    StopChatMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopChatMessageResponseBody() = default ;
    StopChatMessageResponseBody& operator=(const StopChatMessageResponseBody &) = default ;
    StopChatMessageResponseBody& operator=(StopChatMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->finishReason_ == nullptr && this->message_ == nullptr && this->messageId_ == nullptr && this->partialContent_ == nullptr && this->requestId_ == nullptr
        && this->sessionId_ == nullptr && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StopChatMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline StopChatMessageResponseBody& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StopChatMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline StopChatMessageResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // partialContent Field Functions 
    bool hasPartialContent() const { return this->partialContent_ != nullptr;};
    void deletePartialContent() { this->partialContent_ = nullptr;};
    inline string getPartialContent() const { DARABONBA_PTR_GET_DEFAULT(partialContent_, "") };
    inline StopChatMessageResponseBody& setPartialContent(string partialContent) { DARABONBA_PTR_SET_VALUE(partialContent_, partialContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopChatMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StopChatMessageResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StopChatMessageResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The reason for stopping.
    shared_ptr<string> finishReason_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The message ID.
    shared_ptr<string> messageId_ {};
    // The partially generated content.
    shared_ptr<string> partialContent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // The final status of the message.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
