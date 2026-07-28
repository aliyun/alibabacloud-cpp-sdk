// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATAIAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATAIAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ChatAiAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatAiAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(completed, completed_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(errorType, errorType_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(toolName, toolName_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatAiAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(completed, completed_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(errorType, errorType_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
      DARABONBA_PTR_FROM_JSON(toolName, toolName_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    ChatAiAgentResponseBody() = default ;
    ChatAiAgentResponseBody(const ChatAiAgentResponseBody &) = default ;
    ChatAiAgentResponseBody(ChatAiAgentResponseBody &&) = default ;
    ChatAiAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatAiAgentResponseBody() = default ;
    ChatAiAgentResponseBody& operator=(const ChatAiAgentResponseBody &) = default ;
    ChatAiAgentResponseBody& operator=(ChatAiAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      };
      Usage() = default ;
      Usage(const Usage &) = default ;
      Usage(Usage &&) = default ;
      Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Usage() = default ;
      Usage& operator=(const Usage &) = default ;
      Usage& operator=(Usage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
      inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    protected:
      // The number of input tokens.
      shared_ptr<int64_t> inputTokens_ {};
      // The number of output tokens.
      shared_ptr<int64_t> outputTokens_ {};
      // The total number of tokens.
      shared_ptr<int64_t> totalTokens_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_ANY_TO_JSON(args, args_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(hitlId, hitlId_);
        DARABONBA_PTR_TO_JSON(toolName, toolName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_ANY_FROM_JSON(args, args_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(hitlId, hitlId_);
        DARABONBA_PTR_FROM_JSON(toolName, toolName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->displayName_ == nullptr && this->hitlId_ == nullptr && this->toolName_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline       const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
      Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
      inline Items& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
      inline Items& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // hitlId Field Functions 
      bool hasHitlId() const { return this->hitlId_ != nullptr;};
      void deleteHitlId() { this->hitlId_ = nullptr;};
      inline string getHitlId() const { DARABONBA_PTR_GET_DEFAULT(hitlId_, "") };
      inline Items& setHitlId(string hitlId) { DARABONBA_PTR_SET_VALUE(hitlId_, hitlId) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline Items& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    protected:
      // The original tool parameter key-value pairs.
      Darabonba::Json args_ {};
      // The display name of the tool.
      shared_ptr<string> displayName_ {};
      // The approval item ID, used when returning hitlDecisions.
      shared_ptr<string> hitlId_ {};
      // The name of the intercepted tool.
      shared_ptr<string> toolName_ {};
    };

    virtual bool empty() const override { return this->completed_ == nullptr
        && this->displayName_ == nullptr && this->errorMessage_ == nullptr && this->errorType_ == nullptr && this->event_ == nullptr && this->input_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->sessionId_ == nullptr && this->success_ == nullptr && this->text_ == nullptr
        && this->toolCallId_ == nullptr && this->toolName_ == nullptr && this->usage_ == nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline ChatAiAgentResponseBody& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ChatAiAgentResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ChatAiAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline ChatAiAgentResponseBody& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ChatAiAgentResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline ChatAiAgentResponseBody& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline ChatAiAgentResponseBody& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ChatAiAgentResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ChatAiAgentResponseBody::Items>) };
    inline vector<ChatAiAgentResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ChatAiAgentResponseBody::Items>) };
    inline ChatAiAgentResponseBody& setItems(const vector<ChatAiAgentResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ChatAiAgentResponseBody& setItems(vector<ChatAiAgentResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatAiAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatAiAgentResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ChatAiAgentResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ChatAiAgentResponseBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline ChatAiAgentResponseBody& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline ChatAiAgentResponseBody& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const ChatAiAgentResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, ChatAiAgentResponseBody::Usage) };
    inline ChatAiAgentResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, ChatAiAgentResponseBody::Usage) };
    inline ChatAiAgentResponseBody& setUsage(const ChatAiAgentResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline ChatAiAgentResponseBody& setUsage(ChatAiAgentResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // Indicates whether this text segment is complete (the last segment of the message it belongs to).
    shared_ptr<bool> completed_ {};
    // The localized display name of the tool.
    shared_ptr<string> displayName_ {};
    // The error message when the tool call fails (only when success is false).
    shared_ptr<string> errorMessage_ {};
    // The error type when the tool call fails (only when success is false).
    shared_ptr<string> errorType_ {};
    // The event type.
    shared_ptr<string> event_ {};
    // The tool input key-value pairs. The structure varies depending on the toolName.
    Darabonba::Json input_ {};
    // The list of items pending approval.
    shared_ptr<vector<ChatAiAgentResponseBody::Items>> items_ {};
    // The error message (for error events).
    shared_ptr<string> message_ {};
    // The session ID for this conversation.
    shared_ptr<string> sessionId_ {};
    // Indicates whether the tool calling invoke is successful.
    shared_ptr<string> success_ {};
    // The text output from the assistant.
    shared_ptr<string> text_ {};
    // The tool calling ID, used to pair the invoke call and result.
    shared_ptr<string> toolCallId_ {};
    // The tool function name.
    shared_ptr<string> toolName_ {};
    // The token usage.
    shared_ptr<ChatAiAgentResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
