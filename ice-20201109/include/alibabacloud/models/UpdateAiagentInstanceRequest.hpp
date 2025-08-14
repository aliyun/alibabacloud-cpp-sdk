// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIAGENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIAGENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfig.hpp>
#include <alibabacloud/models/AIAgentTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateAIAgentInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateAIAgentInstanceRequest() = default ;
    UpdateAIAgentInstanceRequest(const UpdateAIAgentInstanceRequest &) = default ;
    UpdateAIAgentInstanceRequest(UpdateAIAgentInstanceRequest &&) = default ;
    UpdateAIAgentInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAIAgentInstanceRequest() = default ;
    UpdateAIAgentInstanceRequest& operator=(const UpdateAIAgentInstanceRequest &) = default ;
    UpdateAIAgentInstanceRequest& operator=(UpdateAIAgentInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentConfig_ != nullptr
        && this->instanceId_ != nullptr && this->templateConfig_ != nullptr && this->userData_ != nullptr; };
    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const AIAgentConfig & agentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, AIAgentConfig) };
    inline AIAgentConfig agentConfig() { DARABONBA_PTR_GET(agentConfig_, AIAgentConfig) };
    inline UpdateAIAgentInstanceRequest& setAgentConfig(const AIAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline UpdateAIAgentInstanceRequest& setAgentConfig(AIAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAIAgentInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const AIAgentTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, AIAgentTemplateConfig) };
    inline AIAgentTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, AIAgentTemplateConfig) };
    inline UpdateAIAgentInstanceRequest& setTemplateConfig(const AIAgentTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline UpdateAIAgentInstanceRequest& setTemplateConfig(AIAgentTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateAIAgentInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<AIAgentConfig> agentConfig_ = nullptr;
    // The ID of the AI agent that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The template configurations of the AI agent. The configurations are merged with the template configurations that are used to start the AI agent. For more information, see the definition of TemplateConfig.
    std::shared_ptr<AIAgentTemplateConfig> templateConfig_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
