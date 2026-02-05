// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
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
    class VoiceChat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceChat& obj) { 
        DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceChat& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      };
      VoiceChat() = default ;
      VoiceChat(const VoiceChat &) = default ;
      VoiceChat(VoiceChat &&) = default ;
      VoiceChat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceChat() = default ;
      VoiceChat& operator=(const VoiceChat &) = default ;
      VoiceChat& operator=(VoiceChat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentUserId_ == nullptr
        && this->authToken_ == nullptr && this->channelId_ == nullptr; };
      // agentUserId Field Functions 
      bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
      void deleteAgentUserId() { this->agentUserId_ = nullptr;};
      inline string getAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
      inline VoiceChat& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline VoiceChat& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline VoiceChat& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    protected:
      shared_ptr<string> agentUserId_ {};
      shared_ptr<string> authToken_ {};
      shared_ptr<string> channelId_ {};
    };

    class VisionChat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisionChat& obj) { 
        DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      };
      friend void from_json(const Darabonba::Json& j, VisionChat& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      };
      VisionChat() = default ;
      VisionChat(const VisionChat &) = default ;
      VisionChat(VisionChat &&) = default ;
      VisionChat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisionChat() = default ;
      VisionChat& operator=(const VisionChat &) = default ;
      VisionChat& operator=(VisionChat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentUserId_ == nullptr
        && this->authToken_ == nullptr && this->channelId_ == nullptr; };
      // agentUserId Field Functions 
      bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
      void deleteAgentUserId() { this->agentUserId_ = nullptr;};
      inline string getAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
      inline VisionChat& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline VisionChat& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline VisionChat& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    protected:
      shared_ptr<string> agentUserId_ {};
      shared_ptr<string> authToken_ {};
      shared_ptr<string> channelId_ {};
    };

    class AvatarChat3D : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvatarChat3D& obj) { 
        DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      };
      friend void from_json(const Darabonba::Json& j, AvatarChat3D& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      };
      AvatarChat3D() = default ;
      AvatarChat3D(const AvatarChat3D &) = default ;
      AvatarChat3D(AvatarChat3D &&) = default ;
      AvatarChat3D(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvatarChat3D() = default ;
      AvatarChat3D& operator=(const AvatarChat3D &) = default ;
      AvatarChat3D& operator=(AvatarChat3D &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentUserId_ == nullptr
        && this->authToken_ == nullptr && this->channelId_ == nullptr; };
      // agentUserId Field Functions 
      bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
      void deleteAgentUserId() { this->agentUserId_ = nullptr;};
      inline string getAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
      inline AvatarChat3D& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline AvatarChat3D& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline AvatarChat3D& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    protected:
      shared_ptr<string> agentUserId_ {};
      shared_ptr<string> authToken_ {};
      shared_ptr<string> channelId_ {};
    };

    virtual bool empty() const override { return this->agentUserId_ == nullptr
        && this->authToken_ == nullptr && this->avatarChat3D_ == nullptr && this->channelId_ == nullptr && this->visionChat_ == nullptr && this->voiceChat_ == nullptr; };
    // agentUserId Field Functions 
    bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
    void deleteAgentUserId() { this->agentUserId_ = nullptr;};
    inline string getAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
    inline AIAgentRuntimeConfig& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline AIAgentRuntimeConfig& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // avatarChat3D Field Functions 
    bool hasAvatarChat3D() const { return this->avatarChat3D_ != nullptr;};
    void deleteAvatarChat3D() { this->avatarChat3D_ = nullptr;};
    inline const AIAgentRuntimeConfig::AvatarChat3D & getAvatarChat3D() const { DARABONBA_PTR_GET_CONST(avatarChat3D_, AIAgentRuntimeConfig::AvatarChat3D) };
    inline AIAgentRuntimeConfig::AvatarChat3D getAvatarChat3D() { DARABONBA_PTR_GET(avatarChat3D_, AIAgentRuntimeConfig::AvatarChat3D) };
    inline AIAgentRuntimeConfig& setAvatarChat3D(const AIAgentRuntimeConfig::AvatarChat3D & avatarChat3D) { DARABONBA_PTR_SET_VALUE(avatarChat3D_, avatarChat3D) };
    inline AIAgentRuntimeConfig& setAvatarChat3D(AIAgentRuntimeConfig::AvatarChat3D && avatarChat3D) { DARABONBA_PTR_SET_RVALUE(avatarChat3D_, avatarChat3D) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline AIAgentRuntimeConfig& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // visionChat Field Functions 
    bool hasVisionChat() const { return this->visionChat_ != nullptr;};
    void deleteVisionChat() { this->visionChat_ = nullptr;};
    inline const AIAgentRuntimeConfig::VisionChat & getVisionChat() const { DARABONBA_PTR_GET_CONST(visionChat_, AIAgentRuntimeConfig::VisionChat) };
    inline AIAgentRuntimeConfig::VisionChat getVisionChat() { DARABONBA_PTR_GET(visionChat_, AIAgentRuntimeConfig::VisionChat) };
    inline AIAgentRuntimeConfig& setVisionChat(const AIAgentRuntimeConfig::VisionChat & visionChat) { DARABONBA_PTR_SET_VALUE(visionChat_, visionChat) };
    inline AIAgentRuntimeConfig& setVisionChat(AIAgentRuntimeConfig::VisionChat && visionChat) { DARABONBA_PTR_SET_RVALUE(visionChat_, visionChat) };


    // voiceChat Field Functions 
    bool hasVoiceChat() const { return this->voiceChat_ != nullptr;};
    void deleteVoiceChat() { this->voiceChat_ = nullptr;};
    inline const AIAgentRuntimeConfig::VoiceChat & getVoiceChat() const { DARABONBA_PTR_GET_CONST(voiceChat_, AIAgentRuntimeConfig::VoiceChat) };
    inline AIAgentRuntimeConfig::VoiceChat getVoiceChat() { DARABONBA_PTR_GET(voiceChat_, AIAgentRuntimeConfig::VoiceChat) };
    inline AIAgentRuntimeConfig& setVoiceChat(const AIAgentRuntimeConfig::VoiceChat & voiceChat) { DARABONBA_PTR_SET_VALUE(voiceChat_, voiceChat) };
    inline AIAgentRuntimeConfig& setVoiceChat(AIAgentRuntimeConfig::VoiceChat && voiceChat) { DARABONBA_PTR_SET_RVALUE(voiceChat_, voiceChat) };


  protected:
    shared_ptr<string> agentUserId_ {};
    shared_ptr<string> authToken_ {};
    shared_ptr<AIAgentRuntimeConfig::AvatarChat3D> avatarChat3D_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<AIAgentRuntimeConfig::VisionChat> visionChat_ {};
    shared_ptr<AIAgentRuntimeConfig::VoiceChat> voiceChat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
