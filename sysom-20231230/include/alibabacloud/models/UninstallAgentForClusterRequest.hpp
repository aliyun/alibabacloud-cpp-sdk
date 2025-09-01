// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAGENTFORCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAGENTFORCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UninstallAgentForClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAgentForClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAgentForClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
    };
    UninstallAgentForClusterRequest() = default ;
    UninstallAgentForClusterRequest(const UninstallAgentForClusterRequest &) = default ;
    UninstallAgentForClusterRequest(UninstallAgentForClusterRequest &&) = default ;
    UninstallAgentForClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAgentForClusterRequest() = default ;
    UninstallAgentForClusterRequest& operator=(const UninstallAgentForClusterRequest &) = default ;
    UninstallAgentForClusterRequest& operator=(UninstallAgentForClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentVersion_ != nullptr && this->clusterId_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UninstallAgentForClusterRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline UninstallAgentForClusterRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UninstallAgentForClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentVersion_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
