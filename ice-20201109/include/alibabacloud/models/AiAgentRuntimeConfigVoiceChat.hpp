// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIGVOICECHAT_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIGVOICECHAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentRuntimeConfigVoiceChat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentRuntimeConfigVoiceChat& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentRuntimeConfigVoiceChat& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
    };
    AIAgentRuntimeConfigVoiceChat() = default ;
    AIAgentRuntimeConfigVoiceChat(const AIAgentRuntimeConfigVoiceChat &) = default ;
    AIAgentRuntimeConfigVoiceChat(AIAgentRuntimeConfigVoiceChat &&) = default ;
    AIAgentRuntimeConfigVoiceChat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentRuntimeConfigVoiceChat() = default ;
    AIAgentRuntimeConfigVoiceChat& operator=(const AIAgentRuntimeConfigVoiceChat &) = default ;
    AIAgentRuntimeConfigVoiceChat& operator=(AIAgentRuntimeConfigVoiceChat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentUserId_ == nullptr
        && return this->authToken_ == nullptr && return this->channelId_ == nullptr; };
    // agentUserId Field Functions 
    bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
    void deleteAgentUserId() { this->agentUserId_ = nullptr;};
    inline string agentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
    inline AIAgentRuntimeConfigVoiceChat& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline AIAgentRuntimeConfigVoiceChat& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline AIAgentRuntimeConfigVoiceChat& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


  protected:
    std::shared_ptr<string> agentUserId_ = nullptr;
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
