// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartAgentRequestRtcConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(RtcConfig, rtcConfig_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(RtcConfig, rtcConfig_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    StartAgentRequest() = default ;
    StartAgentRequest(const StartAgentRequest &) = default ;
    StartAgentRequest(StartAgentRequest &&) = default ;
    StartAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequest() = default ;
    StartAgentRequest& operator=(const StartAgentRequest &) = default ;
    StartAgentRequest& operator=(StartAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->rtcConfig_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr && this->voiceChatConfig_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartAgentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartAgentRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // rtcConfig Field Functions 
    bool hasRtcConfig() const { return this->rtcConfig_ != nullptr;};
    void deleteRtcConfig() { this->rtcConfig_ = nullptr;};
    inline const StartAgentRequestRtcConfig & rtcConfig() const { DARABONBA_PTR_GET_CONST(rtcConfig_, StartAgentRequestRtcConfig) };
    inline StartAgentRequestRtcConfig rtcConfig() { DARABONBA_PTR_GET(rtcConfig_, StartAgentRequestRtcConfig) };
    inline StartAgentRequest& setRtcConfig(const StartAgentRequestRtcConfig & rtcConfig) { DARABONBA_PTR_SET_VALUE(rtcConfig_, rtcConfig) };
    inline StartAgentRequest& setRtcConfig(StartAgentRequestRtcConfig && rtcConfig) { DARABONBA_PTR_SET_RVALUE(rtcConfig_, rtcConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartAgentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartAgentRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // voiceChatConfig Field Functions 
    bool hasVoiceChatConfig() const { return this->voiceChatConfig_ != nullptr;};
    void deleteVoiceChatConfig() { this->voiceChatConfig_ = nullptr;};
    inline const StartAgentRequestVoiceChatConfig & voiceChatConfig() const { DARABONBA_PTR_GET_CONST(voiceChatConfig_, StartAgentRequestVoiceChatConfig) };
    inline StartAgentRequestVoiceChatConfig voiceChatConfig() { DARABONBA_PTR_GET(voiceChatConfig_, StartAgentRequestVoiceChatConfig) };
    inline StartAgentRequest& setVoiceChatConfig(const StartAgentRequestVoiceChatConfig & voiceChatConfig) { DARABONBA_PTR_SET_VALUE(voiceChatConfig_, voiceChatConfig) };
    inline StartAgentRequest& setVoiceChatConfig(StartAgentRequestVoiceChatConfig && voiceChatConfig) { DARABONBA_PTR_SET_RVALUE(voiceChatConfig_, voiceChatConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartAgentRequestRtcConfig> rtcConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<StartAgentRequestVoiceChatConfig> voiceChatConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
