// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(RtcConfig, rtcConfigShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(VoiceChatConfig, voiceChatConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(RtcConfig, rtcConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(VoiceChatConfig, voiceChatConfigShrink_);
    };
    StartAgentShrinkRequest() = default ;
    StartAgentShrinkRequest(const StartAgentShrinkRequest &) = default ;
    StartAgentShrinkRequest(StartAgentShrinkRequest &&) = default ;
    StartAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentShrinkRequest() = default ;
    StartAgentShrinkRequest& operator=(const StartAgentShrinkRequest &) = default ;
    StartAgentShrinkRequest& operator=(StartAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->rtcConfigShrink_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr && this->voiceChatConfigShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartAgentShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartAgentShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // rtcConfigShrink Field Functions 
    bool hasRtcConfigShrink() const { return this->rtcConfigShrink_ != nullptr;};
    void deleteRtcConfigShrink() { this->rtcConfigShrink_ = nullptr;};
    inline string rtcConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(rtcConfigShrink_, "") };
    inline StartAgentShrinkRequest& setRtcConfigShrink(string rtcConfigShrink) { DARABONBA_PTR_SET_VALUE(rtcConfigShrink_, rtcConfigShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartAgentShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartAgentShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // voiceChatConfigShrink Field Functions 
    bool hasVoiceChatConfigShrink() const { return this->voiceChatConfigShrink_ != nullptr;};
    void deleteVoiceChatConfigShrink() { this->voiceChatConfigShrink_ = nullptr;};
    inline string voiceChatConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(voiceChatConfigShrink_, "") };
    inline StartAgentShrinkRequest& setVoiceChatConfigShrink(string voiceChatConfigShrink) { DARABONBA_PTR_SET_VALUE(voiceChatConfigShrink_, voiceChatConfigShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rtcConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> voiceChatConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
