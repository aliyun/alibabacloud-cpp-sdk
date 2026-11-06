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
    // 公共业务状态码；成功为200，失败为后端错误码。
    shared_ptr<string> code_ {};
    // 公共状态说明；成功时为success，失败时描述具体原因。
    shared_ptr<string> message_ {};
    // 本轮助手消息ID；回复在后台异步生成，取得该ID不表示AI已开始或已完成回复。
    shared_ptr<string> messageId_ {};
    // 请求追踪ID，可用于定位本次调用及排查失败原因。
    shared_ptr<string> requestId_ {};
    // 本次消息发送到的已有话题会话ID，不是新建会话ID。
    shared_ptr<string> sessionId_ {};
    // 本次提交的用户消息ID。
    shared_ptr<string> userMessageId_ {};
    // 请求传入的工作项ID；仅传conversationId时返回legacy-topic:<conversationId>形式的兼容ID。
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
