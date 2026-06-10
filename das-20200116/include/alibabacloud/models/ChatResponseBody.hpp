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
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Delta, delta_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(TaskTrackerId, taskTrackerId_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(ToolCallName, toolCallName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(TaskTrackerId, taskTrackerId_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
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
        && this->content_ == nullptr && this->delta_ == nullptr && this->messageId_ == nullptr && this->name_ == nullptr && this->parentMessageId_ == nullptr
        && this->role_ == nullptr && this->runId_ == nullptr && this->stepName_ == nullptr && this->taskTrackerId_ == nullptr && this->threadId_ == nullptr
        && this->toolCallId_ == nullptr && this->toolCallName_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ChatResponseBody& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


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
    shared_ptr<string> activityType_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> delta_ {};
    shared_ptr<string> messageId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> parentMessageId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> stepName_ {};
    shared_ptr<string> taskTrackerId_ {};
    shared_ptr<string> threadId_ {};
    shared_ptr<string> toolCallId_ {};
    shared_ptr<string> toolCallName_ {};
    shared_ptr<string> type_ {};
    Darabonba::Json value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
