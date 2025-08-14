// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentTemplateConfigAvatarChat3D.hpp>
#include <alibabacloud/models/AIAgentTemplateConfigVisionChat.hpp>
#include <alibabacloud/models/AIAgentTemplateConfigVoiceChat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_TO_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_TO_JSON(VoiceChat, voiceChat_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_FROM_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_FROM_JSON(VoiceChat, voiceChat_);
    };
    AIAgentTemplateConfig() = default ;
    AIAgentTemplateConfig(const AIAgentTemplateConfig &) = default ;
    AIAgentTemplateConfig(AIAgentTemplateConfig &&) = default ;
    AIAgentTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentTemplateConfig() = default ;
    AIAgentTemplateConfig& operator=(const AIAgentTemplateConfig &) = default ;
    AIAgentTemplateConfig& operator=(AIAgentTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarChat3D_ != nullptr
        && this->visionChat_ != nullptr && this->voiceChat_ != nullptr; };
    // avatarChat3D Field Functions 
    bool hasAvatarChat3D() const { return this->avatarChat3D_ != nullptr;};
    void deleteAvatarChat3D() { this->avatarChat3D_ = nullptr;};
    inline const AIAgentTemplateConfigAvatarChat3D & avatarChat3D() const { DARABONBA_PTR_GET_CONST(avatarChat3D_, AIAgentTemplateConfigAvatarChat3D) };
    inline AIAgentTemplateConfigAvatarChat3D avatarChat3D() { DARABONBA_PTR_GET(avatarChat3D_, AIAgentTemplateConfigAvatarChat3D) };
    inline AIAgentTemplateConfig& setAvatarChat3D(const AIAgentTemplateConfigAvatarChat3D & avatarChat3D) { DARABONBA_PTR_SET_VALUE(avatarChat3D_, avatarChat3D) };
    inline AIAgentTemplateConfig& setAvatarChat3D(AIAgentTemplateConfigAvatarChat3D && avatarChat3D) { DARABONBA_PTR_SET_RVALUE(avatarChat3D_, avatarChat3D) };


    // visionChat Field Functions 
    bool hasVisionChat() const { return this->visionChat_ != nullptr;};
    void deleteVisionChat() { this->visionChat_ = nullptr;};
    inline const AIAgentTemplateConfigVisionChat & visionChat() const { DARABONBA_PTR_GET_CONST(visionChat_, AIAgentTemplateConfigVisionChat) };
    inline AIAgentTemplateConfigVisionChat visionChat() { DARABONBA_PTR_GET(visionChat_, AIAgentTemplateConfigVisionChat) };
    inline AIAgentTemplateConfig& setVisionChat(const AIAgentTemplateConfigVisionChat & visionChat) { DARABONBA_PTR_SET_VALUE(visionChat_, visionChat) };
    inline AIAgentTemplateConfig& setVisionChat(AIAgentTemplateConfigVisionChat && visionChat) { DARABONBA_PTR_SET_RVALUE(visionChat_, visionChat) };


    // voiceChat Field Functions 
    bool hasVoiceChat() const { return this->voiceChat_ != nullptr;};
    void deleteVoiceChat() { this->voiceChat_ = nullptr;};
    inline const AIAgentTemplateConfigVoiceChat & voiceChat() const { DARABONBA_PTR_GET_CONST(voiceChat_, AIAgentTemplateConfigVoiceChat) };
    inline AIAgentTemplateConfigVoiceChat voiceChat() { DARABONBA_PTR_GET(voiceChat_, AIAgentTemplateConfigVoiceChat) };
    inline AIAgentTemplateConfig& setVoiceChat(const AIAgentTemplateConfigVoiceChat & voiceChat) { DARABONBA_PTR_SET_VALUE(voiceChat_, voiceChat) };
    inline AIAgentTemplateConfig& setVoiceChat(AIAgentTemplateConfigVoiceChat && voiceChat) { DARABONBA_PTR_SET_RVALUE(voiceChat_, voiceChat) };


  protected:
    std::shared_ptr<AIAgentTemplateConfigAvatarChat3D> avatarChat3D_ = nullptr;
    std::shared_ptr<AIAgentTemplateConfigVisionChat> visionChat_ = nullptr;
    std::shared_ptr<AIAgentTemplateConfigVoiceChat> voiceChat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
