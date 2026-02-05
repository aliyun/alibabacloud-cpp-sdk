// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
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
    class ChatSyncConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatSyncConfig& obj) { 
        DARABONBA_PTR_TO_JSON(IMAIAgentId, IMAIAgentId_);
        DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      };
      friend void from_json(const Darabonba::Json& j, ChatSyncConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(IMAIAgentId, IMAIAgentId_);
        DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      };
      ChatSyncConfig() = default ;
      ChatSyncConfig(const ChatSyncConfig &) = default ;
      ChatSyncConfig(ChatSyncConfig &&) = default ;
      ChatSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatSyncConfig() = default ;
      ChatSyncConfig& operator=(const ChatSyncConfig &) = default ;
      ChatSyncConfig& operator=(ChatSyncConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IMAIAgentId_ == nullptr
        && this->receiverId_ == nullptr; };
      // IMAIAgentId Field Functions 
      bool hasIMAIAgentId() const { return this->IMAIAgentId_ != nullptr;};
      void deleteIMAIAgentId() { this->IMAIAgentId_ = nullptr;};
      inline string getIMAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(IMAIAgentId_, "") };
      inline ChatSyncConfig& setIMAIAgentId(string IMAIAgentId) { DARABONBA_PTR_SET_VALUE(IMAIAgentId_, IMAIAgentId) };


      // receiverId Field Functions 
      bool hasReceiverId() const { return this->receiverId_ != nullptr;};
      void deleteReceiverId() { this->receiverId_ = nullptr;};
      inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
      inline ChatSyncConfig& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    protected:
      // IM的智能体Id。
      shared_ptr<string> IMAIAgentId_ {};
      // 接收用户Id。
      shared_ptr<string> receiverId_ {};
    };

    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && this->agentConfig_ == nullptr && this->chatSyncConfig_ == nullptr && this->runtimeConfig_ == nullptr && this->sessionId_ == nullptr && this->templateConfig_ == nullptr
        && this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string getAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline StartAIAgentInstanceRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const AIAgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
    inline AIAgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
    inline StartAIAgentInstanceRequest& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline StartAIAgentInstanceRequest& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // chatSyncConfig Field Functions 
    bool hasChatSyncConfig() const { return this->chatSyncConfig_ != nullptr;};
    void deleteChatSyncConfig() { this->chatSyncConfig_ = nullptr;};
    inline const StartAIAgentInstanceRequest::ChatSyncConfig & getChatSyncConfig() const { DARABONBA_PTR_GET_CONST(chatSyncConfig_, StartAIAgentInstanceRequest::ChatSyncConfig) };
    inline StartAIAgentInstanceRequest::ChatSyncConfig getChatSyncConfig() { DARABONBA_PTR_GET(chatSyncConfig_, StartAIAgentInstanceRequest::ChatSyncConfig) };
    inline StartAIAgentInstanceRequest& setChatSyncConfig(const StartAIAgentInstanceRequest::ChatSyncConfig & chatSyncConfig) { DARABONBA_PTR_SET_VALUE(chatSyncConfig_, chatSyncConfig) };
    inline StartAIAgentInstanceRequest& setChatSyncConfig(StartAIAgentInstanceRequest::ChatSyncConfig && chatSyncConfig) { DARABONBA_PTR_SET_RVALUE(chatSyncConfig_, chatSyncConfig) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const AIAgentRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, AIAgentRuntimeConfig) };
    inline AIAgentRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, AIAgentRuntimeConfig) };
    inline StartAIAgentInstanceRequest& setRuntimeConfig(const AIAgentRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline StartAIAgentInstanceRequest& setRuntimeConfig(AIAgentRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAIAgentInstanceRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const AIAgentTemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
    inline AIAgentTemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
    inline StartAIAgentInstanceRequest& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline StartAIAgentInstanceRequest& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIAgentInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the AI agent created in the [IMS](https://ims.console.aliyun.com/ai/robot/list) console.
    // 
    // This parameter is required.
    shared_ptr<string> AIAgentId_ {};
    shared_ptr<AIAgentConfig> agentConfig_ {};
    // 同步聊天记录配置。
    shared_ptr<StartAIAgentInstanceRequest::ChatSyncConfig> chatSyncConfig_ {};
    // This parameter is required.
    shared_ptr<AIAgentRuntimeConfig> runtimeConfig_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<AIAgentTemplateConfig> templateConfig_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
