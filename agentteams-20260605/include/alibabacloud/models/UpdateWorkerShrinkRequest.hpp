// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class UpdateWorkerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(Channels, channelsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LimitConfig, limitConfigShrink_);
      DARABONBA_PTR_TO_JSON(McpServers, mcpServersShrink_);
      DARABONBA_PTR_TO_JSON(Model, modelShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_TO_JSON(Soul, soul_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(Channels, channelsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LimitConfig, limitConfigShrink_);
      DARABONBA_PTR_FROM_JSON(McpServers, mcpServersShrink_);
      DARABONBA_PTR_FROM_JSON(Model, modelShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_FROM_JSON(Soul, soul_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    UpdateWorkerShrinkRequest() = default ;
    UpdateWorkerShrinkRequest(const UpdateWorkerShrinkRequest &) = default ;
    UpdateWorkerShrinkRequest(UpdateWorkerShrinkRequest &&) = default ;
    UpdateWorkerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkerShrinkRequest() = default ;
    UpdateWorkerShrinkRequest& operator=(const UpdateWorkerShrinkRequest &) = default ;
    UpdateWorkerShrinkRequest& operator=(UpdateWorkerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agents_ == nullptr
        && this->channelsShrink_ == nullptr && this->clientToken_ == nullptr && this->credentialsShrink_ == nullptr && this->instanceId_ == nullptr && this->limitConfigShrink_ == nullptr
        && this->mcpServersShrink_ == nullptr && this->modelShrink_ == nullptr && this->name_ == nullptr && this->skillsShrink_ == nullptr && this->soul_ == nullptr
        && this->templateShrink_ == nullptr && this->versionCode_ == nullptr; };
    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline string getAgents() const { DARABONBA_PTR_GET_DEFAULT(agents_, "") };
    inline UpdateWorkerShrinkRequest& setAgents(string agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };


    // channelsShrink Field Functions 
    bool hasChannelsShrink() const { return this->channelsShrink_ != nullptr;};
    void deleteChannelsShrink() { this->channelsShrink_ = nullptr;};
    inline string getChannelsShrink() const { DARABONBA_PTR_GET_DEFAULT(channelsShrink_, "") };
    inline UpdateWorkerShrinkRequest& setChannelsShrink(string channelsShrink) { DARABONBA_PTR_SET_VALUE(channelsShrink_, channelsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateWorkerShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialsShrink Field Functions 
    bool hasCredentialsShrink() const { return this->credentialsShrink_ != nullptr;};
    void deleteCredentialsShrink() { this->credentialsShrink_ = nullptr;};
    inline string getCredentialsShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialsShrink_, "") };
    inline UpdateWorkerShrinkRequest& setCredentialsShrink(string credentialsShrink) { DARABONBA_PTR_SET_VALUE(credentialsShrink_, credentialsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateWorkerShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limitConfigShrink Field Functions 
    bool hasLimitConfigShrink() const { return this->limitConfigShrink_ != nullptr;};
    void deleteLimitConfigShrink() { this->limitConfigShrink_ = nullptr;};
    inline string getLimitConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(limitConfigShrink_, "") };
    inline UpdateWorkerShrinkRequest& setLimitConfigShrink(string limitConfigShrink) { DARABONBA_PTR_SET_VALUE(limitConfigShrink_, limitConfigShrink) };


    // mcpServersShrink Field Functions 
    bool hasMcpServersShrink() const { return this->mcpServersShrink_ != nullptr;};
    void deleteMcpServersShrink() { this->mcpServersShrink_ = nullptr;};
    inline string getMcpServersShrink() const { DARABONBA_PTR_GET_DEFAULT(mcpServersShrink_, "") };
    inline UpdateWorkerShrinkRequest& setMcpServersShrink(string mcpServersShrink) { DARABONBA_PTR_SET_VALUE(mcpServersShrink_, mcpServersShrink) };


    // modelShrink Field Functions 
    bool hasModelShrink() const { return this->modelShrink_ != nullptr;};
    void deleteModelShrink() { this->modelShrink_ = nullptr;};
    inline string getModelShrink() const { DARABONBA_PTR_GET_DEFAULT(modelShrink_, "") };
    inline UpdateWorkerShrinkRequest& setModelShrink(string modelShrink) { DARABONBA_PTR_SET_VALUE(modelShrink_, modelShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWorkerShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillsShrink Field Functions 
    bool hasSkillsShrink() const { return this->skillsShrink_ != nullptr;};
    void deleteSkillsShrink() { this->skillsShrink_ = nullptr;};
    inline string getSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillsShrink_, "") };
    inline UpdateWorkerShrinkRequest& setSkillsShrink(string skillsShrink) { DARABONBA_PTR_SET_VALUE(skillsShrink_, skillsShrink) };


    // soul Field Functions 
    bool hasSoul() const { return this->soul_ != nullptr;};
    void deleteSoul() { this->soul_ = nullptr;};
    inline string getSoul() const { DARABONBA_PTR_GET_DEFAULT(soul_, "") };
    inline UpdateWorkerShrinkRequest& setSoul(string soul) { DARABONBA_PTR_SET_VALUE(soul_, soul) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string getTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline UpdateWorkerShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline UpdateWorkerShrinkRequest& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    shared_ptr<string> agents_ {};
    shared_ptr<string> channelsShrink_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> credentialsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> limitConfigShrink_ {};
    shared_ptr<string> mcpServersShrink_ {};
    shared_ptr<string> modelShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> skillsShrink_ {};
    shared_ptr<string> soul_ {};
    shared_ptr<string> templateShrink_ {};
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
