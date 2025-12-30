// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AudioOssPath, audioOssPath_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(EnableAudioRecording, enableAudioRecording_);
      DARABONBA_PTR_TO_JSON(EnableNotify, enableNotify_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, SetNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AudioOssPath, audioOssPath_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(EnableAudioRecording, enableAudioRecording_);
      DARABONBA_PTR_FROM_JSON(EnableNotify, enableNotify_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    SetNotifyConfigRequest() = default ;
    SetNotifyConfigRequest(const SetNotifyConfigRequest &) = default ;
    SetNotifyConfigRequest(SetNotifyConfigRequest &&) = default ;
    SetNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetNotifyConfigRequest() = default ;
    SetNotifyConfigRequest& operator=(const SetNotifyConfigRequest &) = default ;
    SetNotifyConfigRequest& operator=(SetNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && this->audioOssPath_ == nullptr && this->callbackUrl_ == nullptr && this->enableAudioRecording_ == nullptr && this->enableNotify_ == nullptr && this->eventTypes_ == nullptr
        && this->token_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string getAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline SetNotifyConfigRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // audioOssPath Field Functions 
    bool hasAudioOssPath() const { return this->audioOssPath_ != nullptr;};
    void deleteAudioOssPath() { this->audioOssPath_ = nullptr;};
    inline string getAudioOssPath() const { DARABONBA_PTR_GET_DEFAULT(audioOssPath_, "") };
    inline SetNotifyConfigRequest& setAudioOssPath(string audioOssPath) { DARABONBA_PTR_SET_VALUE(audioOssPath_, audioOssPath) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SetNotifyConfigRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // enableAudioRecording Field Functions 
    bool hasEnableAudioRecording() const { return this->enableAudioRecording_ != nullptr;};
    void deleteEnableAudioRecording() { this->enableAudioRecording_ = nullptr;};
    inline bool getEnableAudioRecording() const { DARABONBA_PTR_GET_DEFAULT(enableAudioRecording_, false) };
    inline SetNotifyConfigRequest& setEnableAudioRecording(bool enableAudioRecording) { DARABONBA_PTR_SET_VALUE(enableAudioRecording_, enableAudioRecording) };


    // enableNotify Field Functions 
    bool hasEnableNotify() const { return this->enableNotify_ != nullptr;};
    void deleteEnableNotify() { this->enableNotify_ = nullptr;};
    inline bool getEnableNotify() const { DARABONBA_PTR_GET_DEFAULT(enableNotify_, false) };
    inline SetNotifyConfigRequest& setEnableNotify(bool enableNotify) { DARABONBA_PTR_SET_VALUE(enableNotify_, enableNotify) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline string getEventTypes() const { DARABONBA_PTR_GET_DEFAULT(eventTypes_, "") };
    inline SetNotifyConfigRequest& setEventTypes(string eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline SetNotifyConfigRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    shared_ptr<string> AIAgentId_ {};
    shared_ptr<string> audioOssPath_ {};
    // The URL for receiving callback notifications. By default, this parameter is left empty.
    shared_ptr<string> callbackUrl_ {};
    shared_ptr<bool> enableAudioRecording_ {};
    // Specifies whether to enable event notifications.
    // 
    // This parameter is required.
    shared_ptr<bool> enableNotify_ {};
    // The event types. If you do not specify this parameter, all event types are selected.
    // 
    // *   agent_start
    // *   agent_stop
    // *   error
    shared_ptr<string> eventTypes_ {};
    // The authentication token for callback. The token is carried in the Authorization header of a callback request. By default, this parameter is left empty.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
