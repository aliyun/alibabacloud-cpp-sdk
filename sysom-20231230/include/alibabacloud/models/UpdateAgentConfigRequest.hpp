// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateAgentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    UpdateAgentConfigRequest() = default ;
    UpdateAgentConfigRequest(const UpdateAgentConfigRequest &) = default ;
    UpdateAgentConfigRequest(UpdateAgentConfigRequest &&) = default ;
    UpdateAgentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentConfigRequest() = default ;
    UpdateAgentConfigRequest& operator=(const UpdateAgentConfigRequest &) = default ;
    UpdateAgentConfigRequest& operator=(UpdateAgentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->configId_ == nullptr && this->content_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdateAgentConfigRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateAgentConfigRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateAgentConfigRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // The ID of the component whose configuration is to be updated.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The ID of the component configuration to update.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // The new content of the component configuration.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
