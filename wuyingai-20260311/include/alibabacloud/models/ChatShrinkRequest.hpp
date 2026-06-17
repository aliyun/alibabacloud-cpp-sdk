// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
namespace Models
{
  class ChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Resume, resume_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Settings, settingsShrink_);
      DARABONBA_PTR_TO_JSON(StreamOptions, streamOptionsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Resume, resume_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Settings, settingsShrink_);
      DARABONBA_PTR_FROM_JSON(StreamOptions, streamOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ChatShrinkRequest() = default ;
    ChatShrinkRequest(const ChatShrinkRequest &) = default ;
    ChatShrinkRequest(ChatShrinkRequest &&) = default ;
    ChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatShrinkRequest() = default ;
    ChatShrinkRequest& operator=(const ChatShrinkRequest &) = default ;
    ChatShrinkRequest& operator=(ChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorization_ == nullptr
        && this->externalUserId_ == nullptr && this->inputShrink_ == nullptr && this->model_ == nullptr && this->resume_ == nullptr && this->routingKey_ == nullptr
        && this->sessionId_ == nullptr && this->settingsShrink_ == nullptr && this->streamOptionsShrink_ == nullptr && this->templateId_ == nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string getAuthorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline ChatShrinkRequest& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ChatShrinkRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline ChatShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // resume Field Functions 
    bool hasResume() const { return this->resume_ != nullptr;};
    void deleteResume() { this->resume_ = nullptr;};
    inline bool getResume() const { DARABONBA_PTR_GET_DEFAULT(resume_, false) };
    inline ChatShrinkRequest& setResume(bool resume) { DARABONBA_PTR_SET_VALUE(resume_, resume) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline ChatShrinkRequest& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // settingsShrink Field Functions 
    bool hasSettingsShrink() const { return this->settingsShrink_ != nullptr;};
    void deleteSettingsShrink() { this->settingsShrink_ = nullptr;};
    inline string getSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(settingsShrink_, "") };
    inline ChatShrinkRequest& setSettingsShrink(string settingsShrink) { DARABONBA_PTR_SET_VALUE(settingsShrink_, settingsShrink) };


    // streamOptionsShrink Field Functions 
    bool hasStreamOptionsShrink() const { return this->streamOptionsShrink_ != nullptr;};
    void deleteStreamOptionsShrink() { this->streamOptionsShrink_ = nullptr;};
    inline string getStreamOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(streamOptionsShrink_, "") };
    inline ChatShrinkRequest& setStreamOptionsShrink(string streamOptionsShrink) { DARABONBA_PTR_SET_VALUE(streamOptionsShrink_, streamOptionsShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ChatShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Bearer + JWT returned by GetAccessToken. URL-encode the entire string and pass it as a query parameter.
    shared_ptr<string> authorization_ {};
    // The user ID from the external system.
    shared_ptr<string> externalUserId_ {};
    // The message list (JSON string), sorted in chronological order.
    shared_ptr<string> inputShrink_ {};
    shared_ptr<string> model_ {};
    shared_ptr<bool> resume_ {};
    // The routing key that specifies the backend instance to process the request.
    shared_ptr<string> routingKey_ {};
    // The session ID for multi-turn conversation context persistence.
    shared_ptr<string> sessionId_ {};
    // The additional settings. Contains the output file mode control parameter OutputFileMode (string, valid values: url or base64. Defaults to base64 for legacy compatibility. We recommend url).
    shared_ptr<string> settingsShrink_ {};
    // The streaming output control options. Contains IncludeReasoning (boolean, default true, specifies whether to include the model thinking process) and IncludeToolCalls (boolean, default true, specifies whether to include tool invocation details). If not specified or set to a null object, the behavior is consistent with the legacy version.
    shared_ptr<string> streamOptionsShrink_ {};
    // The agent template ID.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif
