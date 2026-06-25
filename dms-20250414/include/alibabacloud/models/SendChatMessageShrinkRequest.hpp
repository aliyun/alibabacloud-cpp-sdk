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
        && this->sessionId_ == nullptr && this->taskConfigShrink_ == nullptr && this->workspaceId_ == nullptr; };
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


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SendChatMessageShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The agent ID. This is a required field. You can obtain the current AgentId from the return value of the CreateAgentSession operation. Agent resources have a lifecycle, so the AgentId you need to pass in each request may change.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The DMS unit you are currently in. If you choose to analyze a database, this information will be used to correctly connect to your DMS instance through DMS. You can go to the DMS console to check your current DMS unit. If you are a China site user of Alibaba Cloud, you can directly enter cn-hangzhou.
    shared_ptr<string> DMSUnit_ {};
    // The data source information. This parameter can be left empty. Only one data source can be passed in through this parameter. We recommend that you use the DataSources parameter instead.
    shared_ptr<string> dataSourceShrink_ {};
    // The detailed data source information. This parameter can be left empty.
    shared_ptr<string> dataSourcesShrink_ {};
    // The content of the message to be sent to the Agent.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The message type. Default value: `[primary]`.
    // 
    // - In normal cases, when interacting with the Agent, the message type is `[primary]`.
    // 
    // - When the message is a response to the Agent\\"s Human-in-Loop question, the type should be `[additional]`.
    // 
    // - When the message is intended to trigger a report generation, the type should be `[report]`.
    // 
    // - When the message is intended to cancel the current session, the type should be `[cancel]`.
    shared_ptr<string> messageType_ {};
    // The parent session ID.
    shared_ptr<string> parentSessionId_ {};
    // This field is required when the message type is `additional`. Pass in the specific question that the Agent asked the user through Human-in-Loop.
    shared_ptr<string> question_ {};
    // Pass in the current quoted content, typically used when interacting with the Agent.
    shared_ptr<string> quotedMessage_ {};
    // **Important**
    // 
    // When this message is a reply to an Agent message (for example, when the Agent asks for clarification through ASK_HUMAN), reply_to must be set to the exact Checkpoint number carried in that Agent message. If this message is not a specific reply, such as requesting the Agent for further in-depth analysis after analysis is completed, reply_to can be left empty or set to "0".
    // 
    // This field affects how the Agent decides to process the message. Passing an incorrect value may lead to analysis results that do not meet expectations.
    shared_ptr<string> replyTo_ {};
    // The special configuration for this session. For the same session, only the configuration passed in the first SendMessage call takes effect.
    shared_ptr<string> sessionConfigShrink_ {};
    // The session ID. This is a required field. You can obtain the SessionId by calling CreateAgentSession.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The configuration items that only affect the current task.
    shared_ptr<string> taskConfigShrink_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
