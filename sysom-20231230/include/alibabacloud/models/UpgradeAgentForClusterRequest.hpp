// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAGENTFORCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAGENTFORCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpgradeAgentForClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAgentForClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAgentForClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
    };
    UpgradeAgentForClusterRequest() = default ;
    UpgradeAgentForClusterRequest(const UpgradeAgentForClusterRequest &) = default ;
    UpgradeAgentForClusterRequest(UpgradeAgentForClusterRequest &&) = default ;
    UpgradeAgentForClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAgentForClusterRequest() = default ;
    UpgradeAgentForClusterRequest& operator=(const UpgradeAgentForClusterRequest &) = default ;
    UpgradeAgentForClusterRequest& operator=(UpgradeAgentForClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->clusterId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpgradeAgentForClusterRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline UpgradeAgentForClusterRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpgradeAgentForClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentVersion_ {};
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
