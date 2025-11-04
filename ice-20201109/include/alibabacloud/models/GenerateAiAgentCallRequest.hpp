// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
#include <alibabacloud/models/GenerateAIAgentCallRequestChatSyncConfig.hpp>
#include <alibabacloud/models/AIAgentTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateAIAgentCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAIAgentCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(ChatSyncConfig, chatSyncConfig_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAIAgentCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(ChatSyncConfig, chatSyncConfig_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateAIAgentCallRequest() = default ;
    GenerateAIAgentCallRequest(const GenerateAIAgentCallRequest &) = default ;
    GenerateAIAgentCallRequest(GenerateAIAgentCallRequest &&) = default ;
    GenerateAIAgentCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAIAgentCallRequest() = default ;
    GenerateAIAgentCallRequest& operator=(const GenerateAIAgentCallRequest &) = default ;
    GenerateAIAgentCallRequest& operator=(GenerateAIAgentCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && return this->agentConfig_ == nullptr && return this->chatSyncConfig_ == nullptr && return this->expire_ == nullptr && return this->sessionId_ == nullptr && return this->templateConfig_ == nullptr
        && return this->userData_ == nullptr && return this->userId_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline GenerateAIAgentCallRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const AIAgentConfig & agentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
    inline AIAgentConfig agentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
    inline GenerateAIAgentCallRequest& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline GenerateAIAgentCallRequest& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // chatSyncConfig Field Functions 
    bool hasChatSyncConfig() const { return this->chatSyncConfig_ != nullptr;};
    void deleteChatSyncConfig() { this->chatSyncConfig_ = nullptr;};
    inline const GenerateAIAgentCallRequestChatSyncConfig & chatSyncConfig() const { DARABONBA_PTR_GET_CONST(chatSyncConfig_, GenerateAIAgentCallRequestChatSyncConfig) };
    inline GenerateAIAgentCallRequestChatSyncConfig chatSyncConfig() { DARABONBA_PTR_GET(chatSyncConfig_, GenerateAIAgentCallRequestChatSyncConfig) };
    inline GenerateAIAgentCallRequest& setChatSyncConfig(const GenerateAIAgentCallRequestChatSyncConfig & chatSyncConfig) { DARABONBA_PTR_SET_VALUE(chatSyncConfig_, chatSyncConfig) };
    inline GenerateAIAgentCallRequest& setChatSyncConfig(GenerateAIAgentCallRequestChatSyncConfig && chatSyncConfig) { DARABONBA_PTR_SET_RVALUE(chatSyncConfig_, chatSyncConfig) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GenerateAIAgentCallRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenerateAIAgentCallRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const AIAgentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
    inline AIAgentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
    inline GenerateAIAgentCallRequest& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline GenerateAIAgentCallRequest& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateAIAgentCallRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateAIAgentCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    std::shared_ptr<AIAgentConfig> agentConfig_ = nullptr;
    std::shared_ptr<GenerateAIAgentCallRequestChatSyncConfig> chatSyncConfig_ = nullptr;
    // The time when the token expires. Unit: seconds. Default value: 3600. Valid values: 0 to 604800.
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // The template configurations of the AI agent. The specified configurations are merged with the template configurations that are specified in the console. If you do not specify this parameter, the system uses the default configurations for an AI agent created in the console.
    std::shared_ptr<AIAgentTemplateConfig> templateConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    // The username of the AI agent in the channel. If you do not specify this parameter, the system automatically generates a username. The value can be up to 64 characters in length.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
