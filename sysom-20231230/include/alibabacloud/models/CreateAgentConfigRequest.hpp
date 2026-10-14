// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateAgentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(configName, configName_);
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(configName, configName_);
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    CreateAgentConfigRequest() = default ;
    CreateAgentConfigRequest(const CreateAgentConfigRequest &) = default ;
    CreateAgentConfigRequest(CreateAgentConfigRequest &&) = default ;
    CreateAgentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentConfigRequest() = default ;
    CreateAgentConfigRequest& operator=(const CreateAgentConfigRequest &) = default ;
    CreateAgentConfigRequest& operator=(CreateAgentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->configName_ == nullptr && this->content_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateAgentConfigRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline CreateAgentConfigRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateAgentConfigRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // The ID of the component for the configuration. You can obtain the component ID from ListAgents.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The name of the configuration.
    // 
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // The content of the configuration.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
