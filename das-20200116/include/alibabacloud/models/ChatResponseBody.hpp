// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Delta, delta_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OriginatingToolCallId, originatingToolCallId_);
      DARABONBA_PTR_TO_JSON(ParentAgentId, parentAgentId_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(StepStatus, stepStatus_);
      DARABONBA_PTR_TO_JSON(TaskTrackerId, taskTrackerId_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(ToolCallError, toolCallError_);
      DARABONBA_PTR_TO_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(ToolCallName, toolCallName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OriginatingToolCallId, originatingToolCallId_);
      DARABONBA_PTR_FROM_JSON(ParentAgentId, parentAgentId_);
      DARABONBA_PTR_FROM_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(StepStatus, stepStatus_);
      DARABONBA_PTR_FROM_JSON(TaskTrackerId, taskTrackerId_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(ToolCallError, toolCallError_);
      DARABONBA_PTR_FROM_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_FROM_JSON(ToolCallName, toolCallName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    ChatResponseBody() = default ;
    ChatResponseBody(const ChatResponseBody &) = default ;
    ChatResponseBody(ChatResponseBody &&) = default ;
    ChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBody() = default ;
    ChatResponseBody& operator=(const ChatResponseBody &) = default ;
    ChatResponseBody& operator=(ChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityType_ == nullptr
        && this->agentId_ == nullptr && this->content_ == nullptr && this->delta_ == nullptr && this->kind_ == nullptr && this->label_ == nullptr
        && this->messageId_ == nullptr && this->name_ == nullptr && this->originatingToolCallId_ == nullptr && this->parentAgentId_ == nullptr && this->parentMessageId_ == nullptr
        && this->role_ == nullptr && this->runId_ == nullptr && this->stepName_ == nullptr && this->stepStatus_ == nullptr && this->taskTrackerId_ == nullptr
        && this->threadId_ == nullptr && this->timestamp_ == nullptr && this->toolCallError_ == nullptr && this->toolCallId_ == nullptr && this->toolCallName_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ChatResponseBody& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ChatResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline string getDelta() const { DARABONBA_PTR_GET_DEFAULT(delta_, "") };
    inline ChatResponseBody& setDelta(string delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ChatResponseBody& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ChatResponseBody& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ChatResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChatResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originatingToolCallId Field Functions 
    bool hasOriginatingToolCallId() const { return this->originatingToolCallId_ != nullptr;};
    void deleteOriginatingToolCallId() { this->originatingToolCallId_ = nullptr;};
    inline string getOriginatingToolCallId() const { DARABONBA_PTR_GET_DEFAULT(originatingToolCallId_, "") };
    inline ChatResponseBody& setOriginatingToolCallId(string originatingToolCallId) { DARABONBA_PTR_SET_VALUE(originatingToolCallId_, originatingToolCallId) };


    // parentAgentId Field Functions 
    bool hasParentAgentId() const { return this->parentAgentId_ != nullptr;};
    void deleteParentAgentId() { this->parentAgentId_ = nullptr;};
    inline string getParentAgentId() const { DARABONBA_PTR_GET_DEFAULT(parentAgentId_, "") };
    inline ChatResponseBody& setParentAgentId(string parentAgentId) { DARABONBA_PTR_SET_VALUE(parentAgentId_, parentAgentId) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string getParentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline ChatResponseBody& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ChatResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline ChatResponseBody& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepStatus Field Functions 
    bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
    void deleteStepStatus() { this->stepStatus_ = nullptr;};
    inline string getStepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
    inline ChatResponseBody& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


    // taskTrackerId Field Functions 
    bool hasTaskTrackerId() const { return this->taskTrackerId_ != nullptr;};
    void deleteTaskTrackerId() { this->taskTrackerId_ = nullptr;};
    inline string getTaskTrackerId() const { DARABONBA_PTR_GET_DEFAULT(taskTrackerId_, "") };
    inline ChatResponseBody& setTaskTrackerId(string taskTrackerId) { DARABONBA_PTR_SET_VALUE(taskTrackerId_, taskTrackerId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ChatResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ChatResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // toolCallError Field Functions 
    bool hasToolCallError() const { return this->toolCallError_ != nullptr;};
    void deleteToolCallError() { this->toolCallError_ = nullptr;};
    inline string getToolCallError() const { DARABONBA_PTR_GET_DEFAULT(toolCallError_, "") };
    inline ChatResponseBody& setToolCallError(string toolCallError) { DARABONBA_PTR_SET_VALUE(toolCallError_, toolCallError) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline ChatResponseBody& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    // toolCallName Field Functions 
    bool hasToolCallName() const { return this->toolCallName_ != nullptr;};
    void deleteToolCallName() { this->toolCallName_ = nullptr;};
    inline string getToolCallName() const { DARABONBA_PTR_GET_DEFAULT(toolCallName_, "") };
    inline ChatResponseBody& setToolCallName(string toolCallName) { DARABONBA_PTR_SET_VALUE(toolCallName_, toolCallName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ChatResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
    Darabonba::Json & getValue() { DARABONBA_GET(value_) };
    inline ChatResponseBody& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline ChatResponseBody& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The heartbeat.
    shared_ptr<string> activityType_ {};
    shared_ptr<string> agentId_ {};
    // The response content.
    shared_ptr<string> content_ {};
    // Indicates whether the content is incremental.
    shared_ptr<string> delta_ {};
    shared_ptr<string> kind_ {};
    shared_ptr<string> label_ {};
    // The message ID.
    shared_ptr<string> messageId_ {};
    // The extension key.
    shared_ptr<string> name_ {};
    shared_ptr<string> originatingToolCallId_ {};
    shared_ptr<string> parentAgentId_ {};
    // The parent message ID.
    shared_ptr<string> parentMessageId_ {};
    // The conversation role ID.
    shared_ptr<string> role_ {};
    // The run ID.
    shared_ptr<string> runId_ {};
    // The execution step name.
    shared_ptr<string> stepName_ {};
    shared_ptr<string> stepStatus_ {};
    // The callback tool class.
    shared_ptr<string> taskTrackerId_ {};
    // The thread ID.
    shared_ptr<string> threadId_ {};
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> toolCallError_ {};
    // The tool calling invoke ID.
    shared_ptr<string> toolCallId_ {};
    // The tool name.
    shared_ptr<string> toolCallName_ {};
    // The event type.
    shared_ptr<string> type_ {};
    // The extension value.
    Darabonba::Json value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
