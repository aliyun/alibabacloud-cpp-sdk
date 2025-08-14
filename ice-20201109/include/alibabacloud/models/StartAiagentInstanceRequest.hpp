// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
#include <alibabacloud/models/StartAIAgentInstanceRequestChatSyncConfig.hpp>
#include <alibabacloud/models/AIAgentRuntimeConfig.hpp>
#include <alibabacloud/models/AIAgentTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIAgentInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(ChatSyncConfig, chatSyncConfig_);
      DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(ChatSyncConfig, chatSyncConfig_);
      DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    StartAIAgentInstanceRequest() = default ;
    StartAIAgentInstanceRequest(const StartAIAgentInstanceRequest &) = default ;
    StartAIAgentInstanceRequest(StartAIAgentInstanceRequest &&) = default ;
    StartAIAgentInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAgentInstanceRequest() = default ;
    StartAIAgentInstanceRequest& operator=(const StartAIAgentInstanceRequest &) = default ;
    StartAIAgentInstanceRequest& operator=(StartAIAgentInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentId_ != nullptr
        && this->agentConfig_ != nullptr && this->chatSyncConfig_ != nullptr && this->runtimeConfig_ != nullptr && this->sessionId_ != nullptr && this->templateConfig_ != nullptr
        && this->userData_ != nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline StartAIAgentInstanceRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const AIAgentConfig & agentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
    inline AIAgentConfig agentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
    inline StartAIAgentInstanceRequest& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline StartAIAgentInstanceRequest& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // chatSyncConfig Field Functions 
    bool hasChatSyncConfig() const { return this->chatSyncConfig_ != nullptr;};
    void deleteChatSyncConfig() { this->chatSyncConfig_ = nullptr;};
    inline const StartAIAgentInstanceRequestChatSyncConfig & chatSyncConfig() const { DARABONBA_PTR_GET_CONST(chatSyncConfig_, StartAIAgentInstanceRequestChatSyncConfig) };
    inline StartAIAgentInstanceRequestChatSyncConfig chatSyncConfig() { DARABONBA_PTR_GET(chatSyncConfig_, StartAIAgentInstanceRequestChatSyncConfig) };
    inline StartAIAgentInstanceRequest& setChatSyncConfig(const StartAIAgentInstanceRequestChatSyncConfig & chatSyncConfig) { DARABONBA_PTR_SET_VALUE(chatSyncConfig_, chatSyncConfig) };
    inline StartAIAgentInstanceRequest& setChatSyncConfig(StartAIAgentInstanceRequestChatSyncConfig && chatSyncConfig) { DARABONBA_PTR_SET_RVALUE(chatSyncConfig_, chatSyncConfig) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const AIAgentRuntimeConfig & runtimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, AIAgentRuntimeConfig) };
    inline AIAgentRuntimeConfig runtimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, AIAgentRuntimeConfig) };
    inline StartAIAgentInstanceRequest& setRuntimeConfig(const AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline StartAIAgentInstanceRequest& setRuntimeConfig(AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAIAgentInstanceRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const AIAgentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
    inline AIAgentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
    inline StartAIAgentInstanceRequest& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline StartAIAgentInstanceRequest& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIAgentInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the AI agent created in the [IMS](https://ims.console.aliyun.com/ai/robot/list) console.
    // 
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    std::shared_ptr<AIAgentConfig> agentConfig_ = nullptr;
    // 同步聊天记录配置。
    std::shared_ptr<StartAIAgentInstanceRequestChatSyncConfig> chatSyncConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<AIAgentRuntimeConfig> runtimeConfig_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<AIAgentTemplateConfig> templateConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
