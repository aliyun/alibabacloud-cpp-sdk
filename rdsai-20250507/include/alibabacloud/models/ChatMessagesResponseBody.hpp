// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ChatMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoundId, roundId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_ANY_TO_JSON(ToolArguments, toolArguments_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoundId, roundId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_ANY_FROM_JSON(ToolArguments, toolArguments_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
    };
    ChatMessagesResponseBody() = default ;
    ChatMessagesResponseBody(const ChatMessagesResponseBody &) = default ;
    ChatMessagesResponseBody(ChatMessagesResponseBody &&) = default ;
    ChatMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatMessagesResponseBody() = default ;
    ChatMessagesResponseBody& operator=(const ChatMessagesResponseBody &) = default ;
    ChatMessagesResponseBody& operator=(ChatMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->approvalStatus_ == nullptr && this->callId_ == nullptr && this->conversationId_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr
        && this->event_ == nullptr && this->id_ == nullptr && this->messageId_ == nullptr && this->mode_ == nullptr && this->requestId_ == nullptr
        && this->roundId_ == nullptr && this->taskId_ == nullptr && this->toolArguments_ == nullptr && this->toolName_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline ChatMessagesResponseBody& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline ChatMessagesResponseBody& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline ChatMessagesResponseBody& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatMessagesResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ChatMessagesResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ChatMessagesResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ChatMessagesResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatMessagesResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ChatMessagesResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ChatMessagesResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roundId Field Functions 
    bool hasRoundId() const { return this->roundId_ != nullptr;};
    void deleteRoundId() { this->roundId_ = nullptr;};
    inline string getRoundId() const { DARABONBA_PTR_GET_DEFAULT(roundId_, "") };
    inline ChatMessagesResponseBody& setRoundId(string roundId) { DARABONBA_PTR_SET_VALUE(roundId_, roundId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ChatMessagesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // toolArguments Field Functions 
    bool hasToolArguments() const { return this->toolArguments_ != nullptr;};
    void deleteToolArguments() { this->toolArguments_ = nullptr;};
    inline     const Darabonba::Json & getToolArguments() const { DARABONBA_GET(toolArguments_) };
    Darabonba::Json & getToolArguments() { DARABONBA_GET(toolArguments_) };
    inline ChatMessagesResponseBody& setToolArguments(const Darabonba::Json & toolArguments) { DARABONBA_SET_VALUE(toolArguments_, toolArguments) };
    inline ChatMessagesResponseBody& setToolArguments(Darabonba::Json && toolArguments) { DARABONBA_SET_RVALUE(toolArguments_, toolArguments) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline ChatMessagesResponseBody& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


  protected:
    // The answer content.
    shared_ptr<string> answer_ {};
    // The tool invocation approval status.
    shared_ptr<string> approvalStatus_ {};
    // The tool invocation ID.
    shared_ptr<string> callId_ {};
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The creation time.
    shared_ptr<int64_t> createdAt_ {};
    // The tool invocation description.
    shared_ptr<string> description_ {};
    // The event.
    shared_ptr<string> event_ {};
    // The message ID.
    shared_ptr<string> id_ {};
    // The message ID.
    shared_ptr<string> messageId_ {};
    // The query mode.
    shared_ptr<string> mode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tool approval round ID.
    shared_ptr<string> roundId_ {};
    // The asynchronous task ID.
    shared_ptr<string> taskId_ {};
    // The tool invocation parameters.
    Darabonba::Json toolArguments_ {};
    // The tool name.
    shared_ptr<string> toolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
