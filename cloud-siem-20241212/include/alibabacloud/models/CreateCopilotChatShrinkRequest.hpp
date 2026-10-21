// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOPILOTCHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOPILOTCHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateCopilotChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCopilotChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientConversationId, clientConversationId_);
      DARABONBA_PTR_TO_JSON(ClientMessageId, clientMessageId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(CreateConversation, createConversationShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PlanMode, planMode_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplaceTurnId, replaceTurnId_);
      DARABONBA_PTR_TO_JSON(RouteTarget, routeTarget_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(ThinkingMode, thinkingMode_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCopilotChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientConversationId, clientConversationId_);
      DARABONBA_PTR_FROM_JSON(ClientMessageId, clientMessageId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(CreateConversation, createConversationShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PlanMode, planMode_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplaceTurnId, replaceTurnId_);
      DARABONBA_PTR_FROM_JSON(RouteTarget, routeTarget_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(ThinkingMode, thinkingMode_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CreateCopilotChatShrinkRequest() = default ;
    CreateCopilotChatShrinkRequest(const CreateCopilotChatShrinkRequest &) = default ;
    CreateCopilotChatShrinkRequest(CreateCopilotChatShrinkRequest &&) = default ;
    CreateCopilotChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCopilotChatShrinkRequest() = default ;
    CreateCopilotChatShrinkRequest& operator=(const CreateCopilotChatShrinkRequest &) = default ;
    CreateCopilotChatShrinkRequest& operator=(CreateCopilotChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientConversationId_ == nullptr
        && this->clientMessageId_ == nullptr && this->conversationId_ == nullptr && this->createConversationShrink_ == nullptr && this->lang_ == nullptr && this->messagesShrink_ == nullptr
        && this->model_ == nullptr && this->planMode_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->replaceTurnId_ == nullptr
        && this->routeTarget_ == nullptr && this->source_ == nullptr && this->stream_ == nullptr && this->thinkingMode_ == nullptr && this->traceId_ == nullptr; };
    // clientConversationId Field Functions 
    bool hasClientConversationId() const { return this->clientConversationId_ != nullptr;};
    void deleteClientConversationId() { this->clientConversationId_ = nullptr;};
    inline string getClientConversationId() const { DARABONBA_PTR_GET_DEFAULT(clientConversationId_, "") };
    inline CreateCopilotChatShrinkRequest& setClientConversationId(string clientConversationId) { DARABONBA_PTR_SET_VALUE(clientConversationId_, clientConversationId) };


    // clientMessageId Field Functions 
    bool hasClientMessageId() const { return this->clientMessageId_ != nullptr;};
    void deleteClientMessageId() { this->clientMessageId_ = nullptr;};
    inline string getClientMessageId() const { DARABONBA_PTR_GET_DEFAULT(clientMessageId_, "") };
    inline CreateCopilotChatShrinkRequest& setClientMessageId(string clientMessageId) { DARABONBA_PTR_SET_VALUE(clientMessageId_, clientMessageId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateCopilotChatShrinkRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createConversationShrink Field Functions 
    bool hasCreateConversationShrink() const { return this->createConversationShrink_ != nullptr;};
    void deleteCreateConversationShrink() { this->createConversationShrink_ = nullptr;};
    inline string getCreateConversationShrink() const { DARABONBA_PTR_GET_DEFAULT(createConversationShrink_, "") };
    inline CreateCopilotChatShrinkRequest& setCreateConversationShrink(string createConversationShrink) { DARABONBA_PTR_SET_VALUE(createConversationShrink_, createConversationShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateCopilotChatShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string getMessagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline CreateCopilotChatShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateCopilotChatShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // planMode Field Functions 
    bool hasPlanMode() const { return this->planMode_ != nullptr;};
    void deletePlanMode() { this->planMode_ = nullptr;};
    inline string getPlanMode() const { DARABONBA_PTR_GET_DEFAULT(planMode_, "") };
    inline CreateCopilotChatShrinkRequest& setPlanMode(string planMode) { DARABONBA_PTR_SET_VALUE(planMode_, planMode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateCopilotChatShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCopilotChatShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replaceTurnId Field Functions 
    bool hasReplaceTurnId() const { return this->replaceTurnId_ != nullptr;};
    void deleteReplaceTurnId() { this->replaceTurnId_ = nullptr;};
    inline string getReplaceTurnId() const { DARABONBA_PTR_GET_DEFAULT(replaceTurnId_, "") };
    inline CreateCopilotChatShrinkRequest& setReplaceTurnId(string replaceTurnId) { DARABONBA_PTR_SET_VALUE(replaceTurnId_, replaceTurnId) };


    // routeTarget Field Functions 
    bool hasRouteTarget() const { return this->routeTarget_ != nullptr;};
    void deleteRouteTarget() { this->routeTarget_ = nullptr;};
    inline string getRouteTarget() const { DARABONBA_PTR_GET_DEFAULT(routeTarget_, "") };
    inline CreateCopilotChatShrinkRequest& setRouteTarget(string routeTarget) { DARABONBA_PTR_SET_VALUE(routeTarget_, routeTarget) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateCopilotChatShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline CreateCopilotChatShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // thinkingMode Field Functions 
    bool hasThinkingMode() const { return this->thinkingMode_ != nullptr;};
    void deleteThinkingMode() { this->thinkingMode_ = nullptr;};
    inline string getThinkingMode() const { DARABONBA_PTR_GET_DEFAULT(thinkingMode_, "") };
    inline CreateCopilotChatShrinkRequest& setThinkingMode(string thinkingMode) { DARABONBA_PTR_SET_VALUE(thinkingMode_, thinkingMode) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateCopilotChatShrinkRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The client conversation ID.
    shared_ptr<string> clientConversationId_ {};
    // The client message ID.
    // 
    // This parameter is required.
    shared_ptr<string> clientMessageId_ {};
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The conversation creation configuration.
    shared_ptr<string> createConversationShrink_ {};
    // The language of the returned messages. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The list of messages.
    // 
    // This parameter is required.
    shared_ptr<string> messagesShrink_ {};
    // The model identifier.
    shared_ptr<string> model_ {};
    // The planning configuration.
    shared_ptr<string> planMode_ {};
    // The security project ID.
    shared_ptr<string> projectId_ {};
    // The region of the data management center for threat analysis. Specify the management center based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland.
    // - ap-southeast-1: Your assets reside in regions outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the conversation turn to replace.
    shared_ptr<string> replaceTurnId_ {};
    // The route target identifier.
    shared_ptr<string> routeTarget_ {};
    // The request source.
    shared_ptr<string> source_ {};
    // Specifies whether to enable streaming responses.
    shared_ptr<bool> stream_ {};
    // The deep thinking configuration.
    shared_ptr<string> thinkingMode_ {};
    // The trace ID, which is used to query specific call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
