// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAgentRequestVoiceChatConfig.hpp>
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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->taskId_ != nullptr && this->voiceChatConfig_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAgentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateAgentRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateAgentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // voiceChatConfig Field Functions 
    bool hasVoiceChatConfig() const { return this->voiceChatConfig_ != nullptr;};
    void deleteVoiceChatConfig() { this->voiceChatConfig_ = nullptr;};
    inline const UpdateAgentRequestVoiceChatConfig & voiceChatConfig() const { DARABONBA_PTR_GET_CONST(voiceChatConfig_, UpdateAgentRequestVoiceChatConfig) };
    inline UpdateAgentRequestVoiceChatConfig voiceChatConfig() { DARABONBA_PTR_GET(voiceChatConfig_, UpdateAgentRequestVoiceChatConfig) };
    inline UpdateAgentRequest& setVoiceChatConfig(const UpdateAgentRequestVoiceChatConfig & voiceChatConfig) { DARABONBA_PTR_SET_VALUE(voiceChatConfig_, voiceChatConfig) };
    inline UpdateAgentRequest& setVoiceChatConfig(UpdateAgentRequestVoiceChatConfig && voiceChatConfig) { DARABONBA_PTR_SET_RVALUE(voiceChatConfig_, voiceChatConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<UpdateAgentRequestVoiceChatConfig> voiceChatConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
