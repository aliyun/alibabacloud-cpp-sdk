// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIAGENTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIAGENTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateAIAgentInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAIAgentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAIAgentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentConfig, agentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateAIAgentInstanceShrinkRequest() = default ;
    UpdateAIAgentInstanceShrinkRequest(const UpdateAIAgentInstanceShrinkRequest &) = default ;
    UpdateAIAgentInstanceShrinkRequest(UpdateAIAgentInstanceShrinkRequest &&) = default ;
    UpdateAIAgentInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAIAgentInstanceShrinkRequest() = default ;
    UpdateAIAgentInstanceShrinkRequest& operator=(const UpdateAIAgentInstanceShrinkRequest &) = default ;
    UpdateAIAgentInstanceShrinkRequest& operator=(UpdateAIAgentInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentConfigShrink_ == nullptr
        && return this->instanceId_ == nullptr && return this->templateConfigShrink_ == nullptr && return this->userData_ == nullptr; };
    // agentConfigShrink Field Functions 
    bool hasAgentConfigShrink() const { return this->agentConfigShrink_ != nullptr;};
    void deleteAgentConfigShrink() { this->agentConfigShrink_ = nullptr;};
    inline string agentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(agentConfigShrink_, "") };
    inline UpdateAIAgentInstanceShrinkRequest& setAgentConfigShrink(string agentConfigShrink) { DARABONBA_PTR_SET_VALUE(agentConfigShrink_, agentConfigShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAIAgentInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // templateConfigShrink Field Functions 
    bool hasTemplateConfigShrink() const { return this->templateConfigShrink_ != nullptr;};
    void deleteTemplateConfigShrink() { this->templateConfigShrink_ = nullptr;};
    inline string templateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(templateConfigShrink_, "") };
    inline UpdateAIAgentInstanceShrinkRequest& setTemplateConfigShrink(string templateConfigShrink) { DARABONBA_PTR_SET_VALUE(templateConfigShrink_, templateConfigShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateAIAgentInstanceShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> agentConfigShrink_ = nullptr;
    // The ID of the AI agent that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The template configurations of the AI agent. The configurations are merged with the template configurations that are used to start the AI agent. For more information, see the definition of TemplateConfig.
    std::shared_ptr<string> templateConfigShrink_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
