// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTFORCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTFORCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InstallAgentForClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentForClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(config_id, configId_);
      DARABONBA_PTR_TO_JSON(grayscale_config, grayscaleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentForClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(config_id, configId_);
      DARABONBA_PTR_FROM_JSON(grayscale_config, grayscaleConfig_);
    };
    InstallAgentForClusterRequest() = default ;
    InstallAgentForClusterRequest(const InstallAgentForClusterRequest &) = default ;
    InstallAgentForClusterRequest(InstallAgentForClusterRequest &&) = default ;
    InstallAgentForClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentForClusterRequest() = default ;
    InstallAgentForClusterRequest& operator=(const InstallAgentForClusterRequest &) = default ;
    InstallAgentForClusterRequest& operator=(InstallAgentForClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->clusterId_ == nullptr && this->configId_ == nullptr && this->grayscaleConfig_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline InstallAgentForClusterRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline InstallAgentForClusterRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallAgentForClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline InstallAgentForClusterRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // grayscaleConfig Field Functions 
    bool hasGrayscaleConfig() const { return this->grayscaleConfig_ != nullptr;};
    void deleteGrayscaleConfig() { this->grayscaleConfig_ = nullptr;};
    inline string getGrayscaleConfig() const { DARABONBA_PTR_GET_DEFAULT(grayscaleConfig_, "") };
    inline InstallAgentForClusterRequest& setGrayscaleConfig(string grayscaleConfig) { DARABONBA_PTR_SET_VALUE(grayscaleConfig_, grayscaleConfig) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentVersion_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> configId_ {};
    shared_ptr<string> grayscaleConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
