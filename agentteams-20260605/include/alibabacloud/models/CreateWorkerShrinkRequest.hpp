// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class CreateWorkerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(Channels, channelsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Groups, groupsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LimitConfig, limitConfigShrink_);
      DARABONBA_PTR_TO_JSON(McpServers, mcpServersShrink_);
      DARABONBA_PTR_TO_JSON(Model, modelShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_TO_JSON(Soul, soul_);
      DARABONBA_PTR_TO_JSON(Subagents, subagentsShrink_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(Channels, channelsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Groups, groupsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LimitConfig, limitConfigShrink_);
      DARABONBA_PTR_FROM_JSON(McpServers, mcpServersShrink_);
      DARABONBA_PTR_FROM_JSON(Model, modelShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_FROM_JSON(Soul, soul_);
      DARABONBA_PTR_FROM_JSON(Subagents, subagentsShrink_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    CreateWorkerShrinkRequest() = default ;
    CreateWorkerShrinkRequest(const CreateWorkerShrinkRequest &) = default ;
    CreateWorkerShrinkRequest(CreateWorkerShrinkRequest &&) = default ;
    CreateWorkerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkerShrinkRequest() = default ;
    CreateWorkerShrinkRequest& operator=(const CreateWorkerShrinkRequest &) = default ;
    CreateWorkerShrinkRequest& operator=(CreateWorkerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->agents_ == nullptr && this->channelsShrink_ == nullptr && this->clientToken_ == nullptr && this->credentialsShrink_ == nullptr && this->deployType_ == nullptr
        && this->groupsShrink_ == nullptr && this->instanceId_ == nullptr && this->limitConfigShrink_ == nullptr && this->mcpServersShrink_ == nullptr && this->modelShrink_ == nullptr
        && this->name_ == nullptr && this->skillsShrink_ == nullptr && this->soul_ == nullptr && this->subagentsShrink_ == nullptr && this->templateShrink_ == nullptr
        && this->versionCode_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline CreateWorkerShrinkRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline string getAgents() const { DARABONBA_PTR_GET_DEFAULT(agents_, "") };
    inline CreateWorkerShrinkRequest& setAgents(string agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };


    // channelsShrink Field Functions 
    bool hasChannelsShrink() const { return this->channelsShrink_ != nullptr;};
    void deleteChannelsShrink() { this->channelsShrink_ = nullptr;};
    inline string getChannelsShrink() const { DARABONBA_PTR_GET_DEFAULT(channelsShrink_, "") };
    inline CreateWorkerShrinkRequest& setChannelsShrink(string channelsShrink) { DARABONBA_PTR_SET_VALUE(channelsShrink_, channelsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWorkerShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialsShrink Field Functions 
    bool hasCredentialsShrink() const { return this->credentialsShrink_ != nullptr;};
    void deleteCredentialsShrink() { this->credentialsShrink_ = nullptr;};
    inline string getCredentialsShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialsShrink_, "") };
    inline CreateWorkerShrinkRequest& setCredentialsShrink(string credentialsShrink) { DARABONBA_PTR_SET_VALUE(credentialsShrink_, credentialsShrink) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline CreateWorkerShrinkRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // groupsShrink Field Functions 
    bool hasGroupsShrink() const { return this->groupsShrink_ != nullptr;};
    void deleteGroupsShrink() { this->groupsShrink_ = nullptr;};
    inline string getGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupsShrink_, "") };
    inline CreateWorkerShrinkRequest& setGroupsShrink(string groupsShrink) { DARABONBA_PTR_SET_VALUE(groupsShrink_, groupsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateWorkerShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limitConfigShrink Field Functions 
    bool hasLimitConfigShrink() const { return this->limitConfigShrink_ != nullptr;};
    void deleteLimitConfigShrink() { this->limitConfigShrink_ = nullptr;};
    inline string getLimitConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(limitConfigShrink_, "") };
    inline CreateWorkerShrinkRequest& setLimitConfigShrink(string limitConfigShrink) { DARABONBA_PTR_SET_VALUE(limitConfigShrink_, limitConfigShrink) };


    // mcpServersShrink Field Functions 
    bool hasMcpServersShrink() const { return this->mcpServersShrink_ != nullptr;};
    void deleteMcpServersShrink() { this->mcpServersShrink_ = nullptr;};
    inline string getMcpServersShrink() const { DARABONBA_PTR_GET_DEFAULT(mcpServersShrink_, "") };
    inline CreateWorkerShrinkRequest& setMcpServersShrink(string mcpServersShrink) { DARABONBA_PTR_SET_VALUE(mcpServersShrink_, mcpServersShrink) };


    // modelShrink Field Functions 
    bool hasModelShrink() const { return this->modelShrink_ != nullptr;};
    void deleteModelShrink() { this->modelShrink_ = nullptr;};
    inline string getModelShrink() const { DARABONBA_PTR_GET_DEFAULT(modelShrink_, "") };
    inline CreateWorkerShrinkRequest& setModelShrink(string modelShrink) { DARABONBA_PTR_SET_VALUE(modelShrink_, modelShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkerShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillsShrink Field Functions 
    bool hasSkillsShrink() const { return this->skillsShrink_ != nullptr;};
    void deleteSkillsShrink() { this->skillsShrink_ = nullptr;};
    inline string getSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillsShrink_, "") };
    inline CreateWorkerShrinkRequest& setSkillsShrink(string skillsShrink) { DARABONBA_PTR_SET_VALUE(skillsShrink_, skillsShrink) };


    // soul Field Functions 
    bool hasSoul() const { return this->soul_ != nullptr;};
    void deleteSoul() { this->soul_ = nullptr;};
    inline string getSoul() const { DARABONBA_PTR_GET_DEFAULT(soul_, "") };
    inline CreateWorkerShrinkRequest& setSoul(string soul) { DARABONBA_PTR_SET_VALUE(soul_, soul) };


    // subagentsShrink Field Functions 
    bool hasSubagentsShrink() const { return this->subagentsShrink_ != nullptr;};
    void deleteSubagentsShrink() { this->subagentsShrink_ = nullptr;};
    inline string getSubagentsShrink() const { DARABONBA_PTR_GET_DEFAULT(subagentsShrink_, "") };
    inline CreateWorkerShrinkRequest& setSubagentsShrink(string subagentsShrink) { DARABONBA_PTR_SET_VALUE(subagentsShrink_, subagentsShrink) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string getTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline CreateWorkerShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline CreateWorkerShrinkRequest& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    shared_ptr<string> agentType_ {};
    shared_ptr<string> agents_ {};
    shared_ptr<string> channelsShrink_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> credentialsShrink_ {};
    shared_ptr<string> deployType_ {};
    shared_ptr<string> groupsShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> limitConfigShrink_ {};
    shared_ptr<string> mcpServersShrink_ {};
    shared_ptr<string> modelShrink_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> skillsShrink_ {};
    shared_ptr<string> soul_ {};
    shared_ptr<string> subagentsShrink_ {};
    shared_ptr<string> templateShrink_ {};
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
