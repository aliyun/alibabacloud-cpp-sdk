// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    UpdateAgentRequest() = default ;
    UpdateAgentRequest(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest(UpdateAgentRequest &&) = default ;
    UpdateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRequest() = default ;
    UpdateAgentRequest& operator=(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest& operator=(UpdateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceChatConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceChatConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceChatConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      };
      VoiceChatConfig() = default ;
      VoiceChatConfig(const VoiceChatConfig &) = default ;
      VoiceChatConfig(VoiceChatConfig &&) = default ;
      VoiceChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceChatConfig() = default ;
      VoiceChatConfig& operator=(const VoiceChatConfig &) = default ;
      VoiceChatConfig& operator=(VoiceChatConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chatMode_ == nullptr
        && this->interruptMode_ == nullptr; };
      // chatMode Field Functions 
      bool hasChatMode() const { return this->chatMode_ != nullptr;};
      void deleteChatMode() { this->chatMode_ = nullptr;};
      inline int32_t getChatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
      inline VoiceChatConfig& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


      // interruptMode Field Functions 
      bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
      void deleteInterruptMode() { this->interruptMode_ = nullptr;};
      inline int32_t getInterruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
      inline VoiceChatConfig& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    protected:
      shared_ptr<int32_t> chatMode_ {};
      shared_ptr<int32_t> interruptMode_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->taskId_ == nullptr && this->voiceChatConfig_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAgentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateAgentRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateAgentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // voiceChatConfig Field Functions 
    bool hasVoiceChatConfig() const { return this->voiceChatConfig_ != nullptr;};
    void deleteVoiceChatConfig() { this->voiceChatConfig_ = nullptr;};
    inline const UpdateAgentRequest::VoiceChatConfig & getVoiceChatConfig() const { DARABONBA_PTR_GET_CONST(voiceChatConfig_, UpdateAgentRequest::VoiceChatConfig) };
    inline UpdateAgentRequest::VoiceChatConfig getVoiceChatConfig() { DARABONBA_PTR_GET(voiceChatConfig_, UpdateAgentRequest::VoiceChatConfig) };
    inline UpdateAgentRequest& setVoiceChatConfig(const UpdateAgentRequest::VoiceChatConfig & voiceChatConfig) { DARABONBA_PTR_SET_VALUE(voiceChatConfig_, voiceChatConfig) };
    inline UpdateAgentRequest& setVoiceChatConfig(UpdateAgentRequest::VoiceChatConfig && voiceChatConfig) { DARABONBA_PTR_SET_RVALUE(voiceChatConfig_, voiceChatConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<UpdateAgentRequest::VoiceChatConfig> voiceChatConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
