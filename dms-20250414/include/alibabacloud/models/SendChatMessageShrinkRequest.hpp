// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SendChatMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSourcesShrink_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_TO_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfigShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskConfig, taskConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserOssBucket, userOssBucket_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_FROM_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserOssBucket, userOssBucket_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SendChatMessageShrinkRequest() = default ;
    SendChatMessageShrinkRequest(const SendChatMessageShrinkRequest &) = default ;
    SendChatMessageShrinkRequest(SendChatMessageShrinkRequest &&) = default ;
    SendChatMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageShrinkRequest() = default ;
    SendChatMessageShrinkRequest& operator=(const SendChatMessageShrinkRequest &) = default ;
    SendChatMessageShrinkRequest& operator=(SendChatMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->DMSUnit_ == nullptr && this->dataSourceShrink_ == nullptr && this->dataSourcesShrink_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr
        && this->parentSessionId_ == nullptr && this->question_ == nullptr && this->quotedMessage_ == nullptr && this->replyTo_ == nullptr && this->sessionConfigShrink_ == nullptr
        && this->sessionId_ == nullptr && this->taskConfigShrink_ == nullptr && this->userOssBucket_ == nullptr && this->workspaceId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SendChatMessageShrinkRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline SendChatMessageShrinkRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // dataSourceShrink Field Functions 
    bool hasDataSourceShrink() const { return this->dataSourceShrink_ != nullptr;};
    void deleteDataSourceShrink() { this->dataSourceShrink_ = nullptr;};
    inline string getDataSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceShrink_, "") };
    inline SendChatMessageShrinkRequest& setDataSourceShrink(string dataSourceShrink) { DARABONBA_PTR_SET_VALUE(dataSourceShrink_, dataSourceShrink) };


    // dataSourcesShrink Field Functions 
    bool hasDataSourcesShrink() const { return this->dataSourcesShrink_ != nullptr;};
    void deleteDataSourcesShrink() { this->dataSourcesShrink_ = nullptr;};
    inline string getDataSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourcesShrink_, "") };
    inline SendChatMessageShrinkRequest& setDataSourcesShrink(string dataSourcesShrink) { DARABONBA_PTR_SET_VALUE(dataSourcesShrink_, dataSourcesShrink) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendChatMessageShrinkRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline SendChatMessageShrinkRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // parentSessionId Field Functions 
    bool hasParentSessionId() const { return this->parentSessionId_ != nullptr;};
    void deleteParentSessionId() { this->parentSessionId_ = nullptr;};
    inline string getParentSessionId() const { DARABONBA_PTR_GET_DEFAULT(parentSessionId_, "") };
    inline SendChatMessageShrinkRequest& setParentSessionId(string parentSessionId) { DARABONBA_PTR_SET_VALUE(parentSessionId_, parentSessionId) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline SendChatMessageShrinkRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // quotedMessage Field Functions 
    bool hasQuotedMessage() const { return this->quotedMessage_ != nullptr;};
    void deleteQuotedMessage() { this->quotedMessage_ = nullptr;};
    inline string getQuotedMessage() const { DARABONBA_PTR_GET_DEFAULT(quotedMessage_, "") };
    inline SendChatMessageShrinkRequest& setQuotedMessage(string quotedMessage) { DARABONBA_PTR_SET_VALUE(quotedMessage_, quotedMessage) };


    // replyTo Field Functions 
    bool hasReplyTo() const { return this->replyTo_ != nullptr;};
    void deleteReplyTo() { this->replyTo_ = nullptr;};
    inline string getReplyTo() const { DARABONBA_PTR_GET_DEFAULT(replyTo_, "") };
    inline SendChatMessageShrinkRequest& setReplyTo(string replyTo) { DARABONBA_PTR_SET_VALUE(replyTo_, replyTo) };


    // sessionConfigShrink Field Functions 
    bool hasSessionConfigShrink() const { return this->sessionConfigShrink_ != nullptr;};
    void deleteSessionConfigShrink() { this->sessionConfigShrink_ = nullptr;};
    inline string getSessionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionConfigShrink_, "") };
    inline SendChatMessageShrinkRequest& setSessionConfigShrink(string sessionConfigShrink) { DARABONBA_PTR_SET_VALUE(sessionConfigShrink_, sessionConfigShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendChatMessageShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskConfigShrink Field Functions 
    bool hasTaskConfigShrink() const { return this->taskConfigShrink_ != nullptr;};
    void deleteTaskConfigShrink() { this->taskConfigShrink_ = nullptr;};
    inline string getTaskConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(taskConfigShrink_, "") };
    inline SendChatMessageShrinkRequest& setTaskConfigShrink(string taskConfigShrink) { DARABONBA_PTR_SET_VALUE(taskConfigShrink_, taskConfigShrink) };


    // userOssBucket Field Functions 
    bool hasUserOssBucket() const { return this->userOssBucket_ != nullptr;};
    void deleteUserOssBucket() { this->userOssBucket_ = nullptr;};
    inline string getUserOssBucket() const { DARABONBA_PTR_GET_DEFAULT(userOssBucket_, "") };
    inline SendChatMessageShrinkRequest& setUserOssBucket(string userOssBucket) { DARABONBA_PTR_SET_VALUE(userOssBucket_, userOssBucket) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SendChatMessageShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // **[Deprecated]** This field is now automatically obtained by the backend. You do not need to specify this field.
    shared_ptr<string> agentId_ {};
    // **[Deprecated]** This field is now automatically obtained by the backend. You do not need to specify this field when calling the API.
    shared_ptr<string> DMSUnit_ {};
    // The data source information. This parameter can be left empty. This parameter supports only one data source. Use the DataSources parameter instead.
    shared_ptr<string> dataSourceShrink_ {};
    // The detailed data source information. This parameter can be left empty.
    shared_ptr<string> dataSourcesShrink_ {};
    // The content of the message to send to the Agent.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The message type. Default value: `[primary]`.  
    // 
    // - For regular interactions with the Agent, set the message type to `[primary]`.
    // 
    // - When the message is a response to the Agent\\"s human-in-the-loop question, set the type to `[additional]`.
    // 
    // - When the message triggers a report generation, set the type to `[report]`.
    // 
    // - When the message cancels the current session, set the type to `[cancel]`.
    shared_ptr<string> messageType_ {};
    // The parent session ID.
    shared_ptr<string> parentSessionId_ {};
    // This field is required when the message type is `additional`. Specify the specific question that the Agent asks the user through the human-in-the-loop mechanism.
    shared_ptr<string> question_ {};
    // The quoted content. This is typically used during interactions with the Agent.
    shared_ptr<string> quotedMessage_ {};
    // **Important**
    // 
    // When this message is a reply to an Agent message (for example, the Agent asks a clarifying question through ASK_HUMAN), set reply_to to the exact Checkpoint sequence number carried in that Agent message. If this message is not a targeted reply, such as requesting the Agent to perform further in-depth analysis after the analysis is complete, leave reply_to empty or set it to "0".  
    // 
    // This field affects how the Agent decides to process the message. Passing an incorrect value may cause the analysis results to be less effective than expected.
    shared_ptr<string> replyTo_ {};
    // The special configuration for the current session. For the same session, only the configuration included in the first SendMessage call takes effect.
    shared_ptr<string> sessionConfigShrink_ {};
    // The session ID. This is an optional field used for multi-turn conversations.
    // - You can start a session without specifying this field. The response includes the SessionID for the current session.
    // - You can also manually create a session ID by calling the CreateDataAgentSession operation and include the ID when initiating a session.
    // - If you need multi-turn conversations (such as follow-up questions or confirming execution plans), include the SessionID returned by the previous SendChatMessage call.
    shared_ptr<string> sessionId_ {};
    // The configuration items that affect only the current task.
    shared_ptr<string> taskConfigShrink_ {};
    // The OSS bucket of the user. If this field is left empty, the analysis data is securely stored in the built-in storage.
    shared_ptr<string> userOssBucket_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
