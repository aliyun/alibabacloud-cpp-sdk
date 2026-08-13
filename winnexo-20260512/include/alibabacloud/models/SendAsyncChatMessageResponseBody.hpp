// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendAsyncChatMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAsyncChatMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionCreated, sessionCreated_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncChatMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionCreated, sessionCreated_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    SendAsyncChatMessageResponseBody() = default ;
    SendAsyncChatMessageResponseBody(const SendAsyncChatMessageResponseBody &) = default ;
    SendAsyncChatMessageResponseBody(SendAsyncChatMessageResponseBody &&) = default ;
    SendAsyncChatMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAsyncChatMessageResponseBody() = default ;
    SendAsyncChatMessageResponseBody& operator=(const SendAsyncChatMessageResponseBody &) = default ;
    SendAsyncChatMessageResponseBody& operator=(SendAsyncChatMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->messageId_ == nullptr && this->requestId_ == nullptr && this->sessionCreated_ == nullptr && this->sessionId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendAsyncChatMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendAsyncChatMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SendAsyncChatMessageResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendAsyncChatMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionCreated Field Functions 
    bool hasSessionCreated() const { return this->sessionCreated_ != nullptr;};
    void deleteSessionCreated() { this->sessionCreated_ = nullptr;};
    inline bool getSessionCreated() const { DARABONBA_PTR_GET_DEFAULT(sessionCreated_, false) };
    inline SendAsyncChatMessageResponseBody& setSessionCreated(bool sessionCreated) { DARABONBA_PTR_SET_VALUE(sessionCreated_, sessionCreated) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendAsyncChatMessageResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 助手消息ID；用于随后调用 streamChatMessage 订阅生成结果
    shared_ptr<string> messageId_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 本次调用是否新建了会话
    shared_ptr<bool> sessionCreated_ {};
    // 会话ID；续写会话时与入参一致，新建会话时为服务端生成值
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
