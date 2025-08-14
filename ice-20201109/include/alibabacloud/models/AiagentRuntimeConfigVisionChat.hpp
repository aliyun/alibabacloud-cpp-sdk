// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIGVISIONCHAT_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTRUNTIMECONFIGVISIONCHAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentRuntimeConfigVisionChat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentRuntimeConfigVisionChat& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentRuntimeConfigVisionChat& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUserId, agentUserId_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
    };
    AIAgentRuntimeConfigVisionChat() = default ;
    AIAgentRuntimeConfigVisionChat(const AIAgentRuntimeConfigVisionChat &) = default ;
    AIAgentRuntimeConfigVisionChat(AIAgentRuntimeConfigVisionChat &&) = default ;
    AIAgentRuntimeConfigVisionChat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentRuntimeConfigVisionChat() = default ;
    AIAgentRuntimeConfigVisionChat& operator=(const AIAgentRuntimeConfigVisionChat &) = default ;
    AIAgentRuntimeConfigVisionChat& operator=(AIAgentRuntimeConfigVisionChat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentUserId_ != nullptr
        && this->authToken_ != nullptr && this->channelId_ != nullptr; };
    // agentUserId Field Functions 
    bool hasAgentUserId() const { return this->agentUserId_ != nullptr;};
    void deleteAgentUserId() { this->agentUserId_ = nullptr;};
    inline string agentUserId() const { DARABONBA_PTR_GET_DEFAULT(agentUserId_, "") };
    inline AIAgentRuntimeConfigVisionChat& setAgentUserId(string agentUserId) { DARABONBA_PTR_SET_VALUE(agentUserId_, agentUserId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline AIAgentRuntimeConfigVisionChat& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline AIAgentRuntimeConfigVisionChat& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


  protected:
    std::shared_ptr<string> agentUserId_ = nullptr;
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
