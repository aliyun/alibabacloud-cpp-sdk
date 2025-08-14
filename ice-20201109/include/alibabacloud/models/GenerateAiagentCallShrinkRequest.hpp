// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateAIAgentCallShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAIAgentCallShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_TO_JSON(ChatSyncConfig, chatSyncConfigShrink_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAIAgentCallShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ChatSyncConfig, chatSyncConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateAIAgentCallShrinkRequest() = default ;
    GenerateAIAgentCallShrinkRequest(const GenerateAIAgentCallShrinkRequest &) = default ;
    GenerateAIAgentCallShrinkRequest(GenerateAIAgentCallShrinkRequest &&) = default ;
    GenerateAIAgentCallShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAIAgentCallShrinkRequest() = default ;
    GenerateAIAgentCallShrinkRequest& operator=(const GenerateAIAgentCallShrinkRequest &) = default ;
    GenerateAIAgentCallShrinkRequest& operator=(GenerateAIAgentCallShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentId_ != nullptr
        && this->agentConfigShrink_ != nullptr && this->chatSyncConfigShrink_ != nullptr && this->expire_ != nullptr && this->sessionId_ != nullptr && this->templateConfigShrink_ != nullptr
        && this->userData_ != nullptr && this->userId_ != nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline GenerateAIAgentCallShrinkRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // agentConfigShrink Field Functions 
    bool hasAgentConfigShrink() const { return this->agentConfigShrink_ != nullptr;};
    void deleteAgentConfigShrink() { this->agentConfigShrink_ = nullptr;};
    inline string agentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(agentConfigShrink_, "") };
    inline GenerateAIAgentCallShrinkRequest& setAgentConfigShrink(string agentConfigShrink) { DARABONBA_PTR_SET_VALUE(agentConfigShrink_, agentConfigShrink) };


    // chatSyncConfigShrink Field Functions 
    bool hasChatSyncConfigShrink() const { return this->chatSyncConfigShrink_ != nullptr;};
    void deleteChatSyncConfigShrink() { this->chatSyncConfigShrink_ = nullptr;};
    inline string chatSyncConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(chatSyncConfigShrink_, "") };
    inline GenerateAIAgentCallShrinkRequest& setChatSyncConfigShrink(string chatSyncConfigShrink) { DARABONBA_PTR_SET_VALUE(chatSyncConfigShrink_, chatSyncConfigShrink) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GenerateAIAgentCallShrinkRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenerateAIAgentCallShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // templateConfigShrink Field Functions 
    bool hasTemplateConfigShrink() const { return this->templateConfigShrink_ != nullptr;};
    void deleteTemplateConfigShrink() { this->templateConfigShrink_ = nullptr;};
    inline string templateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(templateConfigShrink_, "") };
    inline GenerateAIAgentCallShrinkRequest& setTemplateConfigShrink(string templateConfigShrink) { DARABONBA_PTR_SET_VALUE(templateConfigShrink_, templateConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateAIAgentCallShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateAIAgentCallShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    std::shared_ptr<string> agentConfigShrink_ = nullptr;
    std::shared_ptr<string> chatSyncConfigShrink_ = nullptr;
    // The time when the token expires. Unit: seconds. Default value: 3600. Valid values: 0 to 604800.
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // The template configurations of the AI agent. The specified configurations are merged with the template configurations that are specified in the console. If you do not specify this parameter, the system uses the default configurations for an AI agent created in the console.
    std::shared_ptr<string> templateConfigShrink_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    // The username of the AI agent in the channel. If you do not specify this parameter, the system automatically generates a username. The value can be up to 64 characters in length.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
