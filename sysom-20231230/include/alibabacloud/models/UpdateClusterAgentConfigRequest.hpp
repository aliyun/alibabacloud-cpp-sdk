// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERAGENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERAGENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateClusterAgentConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterAgentConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(configId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterAgentConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(configId, configId_);
    };
    UpdateClusterAgentConfigRequest() = default ;
    UpdateClusterAgentConfigRequest(const UpdateClusterAgentConfigRequest &) = default ;
    UpdateClusterAgentConfigRequest(UpdateClusterAgentConfigRequest &&) = default ;
    UpdateClusterAgentConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterAgentConfigRequest() = default ;
    UpdateClusterAgentConfigRequest& operator=(const UpdateClusterAgentConfigRequest &) = default ;
    UpdateClusterAgentConfigRequest& operator=(UpdateClusterAgentConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->clusterId_ == nullptr && this->configId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdateClusterAgentConfigRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterAgentConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateClusterAgentConfigRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the component whose configuration is to be updated.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The ID of the cluster. You can call the ListClusters operation to obtain the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The ID of the component configuration to install on the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
