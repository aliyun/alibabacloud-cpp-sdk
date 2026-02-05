// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIAgentInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAgentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_TO_JSON(ChatSyncConfig, chatSyncConfigShrink_);
      DARABONBA_PTR_TO_JSON(RuntimeConfig, runtimeConfigShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAgentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ChatSyncConfig, chatSyncConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RuntimeConfig, runtimeConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    StartAIAgentInstanceShrinkRequest() = default ;
    StartAIAgentInstanceShrinkRequest(const StartAIAgentInstanceShrinkRequest &) = default ;
    StartAIAgentInstanceShrinkRequest(StartAIAgentInstanceShrinkRequest &&) = default ;
    StartAIAgentInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAgentInstanceShrinkRequest() = default ;
    StartAIAgentInstanceShrinkRequest& operator=(const StartAIAgentInstanceShrinkRequest &) = default ;
    StartAIAgentInstanceShrinkRequest& operator=(StartAIAgentInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && this->agentConfigShrink_ == nullptr && this->chatSyncConfigShrink_ == nullptr && this->runtimeConfigShrink_ == nullptr && this->sessionId_ == nullptr && this->templateConfigShrink_ == nullptr
        && this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string getAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline StartAIAgentInstanceShrinkRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // agentConfigShrink Field Functions 
    bool hasAgentConfigShrink() const { return this->agentConfigShrink_ != nullptr;};
    void deleteAgentConfigShrink() { this->agentConfigShrink_ = nullptr;};
    inline string getAgentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(agentConfigShrink_, "") };
    inline StartAIAgentInstanceShrinkRequest& setAgentConfigShrink(string agentConfigShrink) { DARABONBA_PTR_SET_VALUE(agentConfigShrink_, agentConfigShrink) };


    // chatSyncConfigShrink Field Functions 
    bool hasChatSyncConfigShrink() const { return this->chatSyncConfigShrink_ != nullptr;};
    void deleteChatSyncConfigShrink() { this->chatSyncConfigShrink_ = nullptr;};
    inline string getChatSyncConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(chatSyncConfigShrink_, "") };
    inline StartAIAgentInstanceShrinkRequest& setChatSyncConfigShrink(string chatSyncConfigShrink) { DARABONBA_PTR_SET_VALUE(chatSyncConfigShrink_, chatSyncConfigShrink) };


    // runtimeConfigShrink Field Functions 
    bool hasRuntimeConfigShrink() const { return this->runtimeConfigShrink_ != nullptr;};
    void deleteRuntimeConfigShrink() { this->runtimeConfigShrink_ = nullptr;};
    inline string getRuntimeConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeConfigShrink_, "") };
    inline StartAIAgentInstanceShrinkRequest& setRuntimeConfigShrink(string runtimeConfigShrink) { DARABONBA_PTR_SET_VALUE(runtimeConfigShrink_, runtimeConfigShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAIAgentInstanceShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateConfigShrink Field Functions 
    bool hasTemplateConfigShrink() const { return this->templateConfigShrink_ != nullptr;};
    void deleteTemplateConfigShrink() { this->templateConfigShrink_ = nullptr;};
    inline string getTemplateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(templateConfigShrink_, "") };
    inline StartAIAgentInstanceShrinkRequest& setTemplateConfigShrink(string templateConfigShrink) { DARABONBA_PTR_SET_VALUE(templateConfigShrink_, templateConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIAgentInstanceShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the AI agent created in the [IMS](https://ims.console.aliyun.com/ai/robot/list) console.
    // 
    // This parameter is required.
    shared_ptr<string> AIAgentId_ {};
    shared_ptr<string> agentConfigShrink_ {};
    // 同步聊天记录配置。
    shared_ptr<string> chatSyncConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> runtimeConfigShrink_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> templateConfigShrink_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
