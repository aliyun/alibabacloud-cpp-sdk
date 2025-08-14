// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfigAvatarChat3D.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfigVisionChat.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfigVoiceChat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_TO_JSON(VoiceChat, voiceChat_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_FROM_JSON(VoiceChat, voiceChat_);
    };
    AIAgentRuntimeConfig() = default ;
    AIAgentRuntimeConfig(const AIAgentRuntimeConfig &) = default ;
    AIAgentRuntimeConfig(AIAgentRuntimeConfig &&) = default ;
    AIAgentRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentRuntimeConfig() = default ;
    AIAgentRuntimeConfig& operator=(const AIAgentRuntimeConfig &) = default ;
    AIAgentRuntimeConfig& operator=(AIAgentRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentUserId_ != nullptr
        && this->authToken_ != nullptr && this->avatarChat3D_ != nullptr && this->channelId_ != nullptr && this->visionChat_ != nullptr && this->voiceChat_ != nullptr; };
    // agentUserId Field Functions 
    bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
    void deleteAgentUserId() { this->agentUserId_ = nullptr;};
    inline string agentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
    inline AIAgentRuntimeConfig& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline AIAgentRuntimeConfig& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // avatarChat3D Field Functions 
    bool hasAvatarChat3D() const { return this->avatarChat3D_ != nullptr;};
    void deleteAvatarChat3D() { this->avatarChat3D_ = nullptr;};
    inline const AIAgentRuntimeConfigAvatarChat3D & avatarChat3D() const { DARABONBA_PTR_GET_CONST(avatarChat3D_, AIAgentRuntimeConfigAvatarChat3D) };
    inline AIAgentRuntimeConfigAvatarChat3D avatarChat3D() { DARABONBA_PTR_GET(avatarChat3D_, AIAgentRuntimeConfigAvatarChat3D) };
    inline AIAgentRuntimeConfig& setAvatarChat3D(const AIAgentRuntimeConfigAvatarChat3D & avatarChat3D) { DARABONBA_PTR_SET_VALUE(avatarChat3D_, avatarChat3D) };
    inline AIAgentRuntimeConfig& setAvatarChat3D(AIAgentRuntimeConfigAvatarChat3D && avatarChat3D) { DARABONBA_PTR_SET_RVALUE(avatarChat3D_, avatarChat3D) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline AIAgentRuntimeConfig& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // visionChat Field Functions 
    bool hasVisionChat() const { return this->visionChat_ != nullptr;};
    void deleteVisionChat() { this->visionChat_ = nullptr;};
    inline const AIAgentRuntimeConfigVisionChat & visionChat() const { DARABONBA_PTR_GET_CONST(visionChat_, AIAgentRuntimeConfigVisionChat) };
    inline AIAgentRuntimeConfigVisionChat visionChat() { DARABONBA_PTR_GET(visionChat_, AIAgentRuntimeConfigVisionChat) };
    inline AIAgentRuntimeConfig& setVisionChat(const AIAgentRuntimeConfigVisionChat & visionChat) { DARABONBA_PTR_SET_VALUE(visionChat_, visionChat) };
    inline AIAgentRuntimeConfig& setVisionChat(AIAgentRuntimeConfigVisionChat && visionChat) { DARABONBA_PTR_SET_RVALUE(visionChat_, visionChat) };


    // voiceChat Field Functions 
    bool hasVoiceChat() const { return this->voiceChat_ != nullptr;};
    void deleteVoiceChat() { this->voiceChat_ = nullptr;};
    inline const AIAgentRuntimeConfigVoiceChat & voiceChat() const { DARABONBA_PTR_GET_CONST(voiceChat_, AIAgentRuntimeConfigVoiceChat) };
    inline AIAgentRuntimeConfigVoiceChat voiceChat() { DARABONBA_PTR_GET(voiceChat_, AIAgentRuntimeConfigVoiceChat) };
    inline AIAgentRuntimeConfig& setVoiceChat(const AIAgentRuntimeConfigVoiceChat & voiceChat) { DARABONBA_PTR_SET_VALUE(voiceChat_, voiceChat) };
    inline AIAgentRuntimeConfig& setVoiceChat(AIAgentRuntimeConfigVoiceChat && voiceChat) { DARABONBA_PTR_SET_RVALUE(voiceChat_, voiceChat) };


  protected:
    std::shared_ptr<string> agentUserId_ = nullptr;
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<AIAgentRuntimeConfigAvatarChat3D> avatarChat3D_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<AIAgentRuntimeConfigVisionChat> visionChat_ = nullptr;
    std::shared_ptr<AIAgentRuntimeConfigVoiceChat> voiceChat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
