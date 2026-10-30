// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class DeleteAgentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
    };
    DeleteAgentConfigRequest() = default ;
    DeleteAgentConfigRequest(const DeleteAgentConfigRequest &) = default ;
    DeleteAgentConfigRequest(DeleteAgentConfigRequest &&) = default ;
    DeleteAgentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentConfigRequest() = default ;
    DeleteAgentConfigRequest& operator=(const DeleteAgentConfigRequest &) = default ;
    DeleteAgentConfigRequest& operator=(DeleteAgentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->configId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeleteAgentConfigRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DeleteAgentConfigRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the component associated with the configuration to be deleted.
    shared_ptr<string> agentId_ {};
    // The ID of the component configuration to delete.
    shared_ptr<string> configId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
