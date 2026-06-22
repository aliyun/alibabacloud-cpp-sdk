// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTCHATSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTCHATSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotChatStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotChatStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Delta, delta_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(ToolCallName, toolCallName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotChatStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_FROM_JSON(ToolCallName, toolCallName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    KopilotChatStreamResponseBody() = default ;
    KopilotChatStreamResponseBody(const KopilotChatStreamResponseBody &) = default ;
    KopilotChatStreamResponseBody(KopilotChatStreamResponseBody &&) = default ;
    KopilotChatStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotChatStreamResponseBody() = default ;
    KopilotChatStreamResponseBody& operator=(const KopilotChatStreamResponseBody &) = default ;
    KopilotChatStreamResponseBody& operator=(KopilotChatStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->delta_ == nullptr && this->message_ == nullptr && this->messageId_ == nullptr && this->requestId_ == nullptr && this->role_ == nullptr
        && this->runId_ == nullptr && this->threadId_ == nullptr && this->toolCallId_ == nullptr && this->toolCallName_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline KopilotChatStreamResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline string getDelta() const { DARABONBA_PTR_GET_DEFAULT(delta_, "") };
    inline KopilotChatStreamResponseBody& setDelta(string delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline KopilotChatStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline KopilotChatStreamResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotChatStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline KopilotChatStreamResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline KopilotChatStreamResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline KopilotChatStreamResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline KopilotChatStreamResponseBody& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    // toolCallName Field Functions 
    bool hasToolCallName() const { return this->toolCallName_ != nullptr;};
    void deleteToolCallName() { this->toolCallName_ = nullptr;};
    inline string getToolCallName() const { DARABONBA_PTR_GET_DEFAULT(toolCallName_, "") };
    inline KopilotChatStreamResponseBody& setToolCallName(string toolCallName) { DARABONBA_PTR_SET_VALUE(toolCallName_, toolCallName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline KopilotChatStreamResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> delta_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> messageId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> threadId_ {};
    shared_ptr<string> toolCallId_ {};
    shared_ptr<string> toolCallName_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
