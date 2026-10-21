// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOPILOTCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOPILOTCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateCopilotConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCopilotConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Conversation, conversation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCopilotConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Conversation, conversation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCopilotConversationResponseBody() = default ;
    CreateCopilotConversationResponseBody(const CreateCopilotConversationResponseBody &) = default ;
    CreateCopilotConversationResponseBody(CreateCopilotConversationResponseBody &&) = default ;
    CreateCopilotConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCopilotConversationResponseBody() = default ;
    CreateCopilotConversationResponseBody& operator=(const CreateCopilotConversationResponseBody &) = default ;
    CreateCopilotConversationResponseBody& operator=(CreateCopilotConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conversation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conversation& obj) { 
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Feedback, feedback_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(PlanMode, planMode_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ScheduledTaskId, scheduledTaskId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThinkingMode, thinkingMode_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      };
      friend void from_json(const Darabonba::Json& j, Conversation& obj) { 
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(PlanMode, planMode_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ScheduledTaskId, scheduledTaskId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThinkingMode, thinkingMode_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      };
      Conversation() = default ;
      Conversation(const Conversation &) = default ;
      Conversation(Conversation &&) = default ;
      Conversation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conversation() = default ;
      Conversation& operator=(const Conversation &) = default ;
      Conversation& operator=(Conversation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->createdAt_ == nullptr && this->feedback_ == nullptr && this->model_ == nullptr && this->planMode_ == nullptr && this->projectId_ == nullptr
        && this->scheduledTaskId_ == nullptr && this->status_ == nullptr && this->thinkingMode_ == nullptr && this->title_ == nullptr && this->updatedAt_ == nullptr
        && this->visibility_ == nullptr; };
      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Conversation& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Conversation& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // feedback Field Functions 
      bool hasFeedback() const { return this->feedback_ != nullptr;};
      void deleteFeedback() { this->feedback_ = nullptr;};
      inline int64_t getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, 0L) };
      inline Conversation& setFeedback(int64_t feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Conversation& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // planMode Field Functions 
      bool hasPlanMode() const { return this->planMode_ != nullptr;};
      void deletePlanMode() { this->planMode_ = nullptr;};
      inline string getPlanMode() const { DARABONBA_PTR_GET_DEFAULT(planMode_, "") };
      inline Conversation& setPlanMode(string planMode) { DARABONBA_PTR_SET_VALUE(planMode_, planMode) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Conversation& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // scheduledTaskId Field Functions 
      bool hasScheduledTaskId() const { return this->scheduledTaskId_ != nullptr;};
      void deleteScheduledTaskId() { this->scheduledTaskId_ = nullptr;};
      inline string getScheduledTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduledTaskId_, "") };
      inline Conversation& setScheduledTaskId(string scheduledTaskId) { DARABONBA_PTR_SET_VALUE(scheduledTaskId_, scheduledTaskId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Conversation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thinkingMode Field Functions 
      bool hasThinkingMode() const { return this->thinkingMode_ != nullptr;};
      void deleteThinkingMode() { this->thinkingMode_ = nullptr;};
      inline string getThinkingMode() const { DARABONBA_PTR_GET_DEFAULT(thinkingMode_, "") };
      inline Conversation& setThinkingMode(string thinkingMode) { DARABONBA_PTR_SET_VALUE(thinkingMode_, thinkingMode) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Conversation& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Conversation& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // visibility Field Functions 
      bool hasVisibility() const { return this->visibility_ != nullptr;};
      void deleteVisibility() { this->visibility_ = nullptr;};
      inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
      inline Conversation& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    protected:
      // The security operations Agent session ID.
      shared_ptr<string> conversationId_ {};
      // The creation time. The time follows the ISO 8601 standard in UTC.
      shared_ptr<string> createdAt_ {};
      // The returned conversation information.
      shared_ptr<int64_t> feedback_ {};
      // The model configuration.
      shared_ptr<string> model_ {};
      // Specifies whether planning is enabled. Valid values: disable, enable, force. Default value: enable.
      shared_ptr<string> planMode_ {};
      // The security project ID.
      shared_ptr<string> projectId_ {};
      // The ID of the scheduled task. The ID is system-generated and globally unique.
      shared_ptr<string> scheduledTaskId_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The thinking mode configuration.
      shared_ptr<string> thinkingMode_ {};
      // The session title.
      shared_ptr<string> title_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
      // The session visibility.
      shared_ptr<string> visibility_ {};
    };

    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->conversation_ == nullptr && this->requestId_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline CreateCopilotConversationResponseBody& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // conversation Field Functions 
    bool hasConversation() const { return this->conversation_ != nullptr;};
    void deleteConversation() { this->conversation_ = nullptr;};
    inline const CreateCopilotConversationResponseBody::Conversation & getConversation() const { DARABONBA_PTR_GET_CONST(conversation_, CreateCopilotConversationResponseBody::Conversation) };
    inline CreateCopilotConversationResponseBody::Conversation getConversation() { DARABONBA_PTR_GET(conversation_, CreateCopilotConversationResponseBody::Conversation) };
    inline CreateCopilotConversationResponseBody& setConversation(const CreateCopilotConversationResponseBody::Conversation & conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };
    inline CreateCopilotConversationResponseBody& setConversation(CreateCopilotConversationResponseBody::Conversation && conversation) { DARABONBA_PTR_SET_RVALUE(conversation_, conversation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCopilotConversationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API version number. The value is 1.0.0.
    shared_ptr<string> apiVersion_ {};
    // The conversation timestamp.
    shared_ptr<CreateCopilotConversationResponseBody::Conversation> conversation_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
