// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListClusterAgentInstallRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAgentInstallRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(agent_config_id, agentConfigId_);
      DARABONBA_PTR_TO_JSON(agent_config_name, agentConfigName_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(grayscale_config, grayscaleConfig_);
      DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_TO_JSON(plugin_version, pluginVersion_);
      DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAgentInstallRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_config_id, agentConfigId_);
      DARABONBA_PTR_FROM_JSON(agent_config_name, agentConfigName_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(grayscale_config, grayscaleConfig_);
      DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_FROM_JSON(plugin_version, pluginVersion_);
      DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
    };
    ListClusterAgentInstallRecordsResponseBodyData() = default ;
    ListClusterAgentInstallRecordsResponseBodyData(const ListClusterAgentInstallRecordsResponseBodyData &) = default ;
    ListClusterAgentInstallRecordsResponseBodyData(ListClusterAgentInstallRecordsResponseBodyData &&) = default ;
    ListClusterAgentInstallRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAgentInstallRecordsResponseBodyData() = default ;
    ListClusterAgentInstallRecordsResponseBodyData& operator=(const ListClusterAgentInstallRecordsResponseBodyData &) = default ;
    ListClusterAgentInstallRecordsResponseBodyData& operator=(ListClusterAgentInstallRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentConfigId_ != nullptr
        && this->agentConfigName_ != nullptr && this->clusterId_ != nullptr && this->createdAt_ != nullptr && this->grayscaleConfig_ != nullptr && this->pluginId_ != nullptr
        && this->pluginVersion_ != nullptr && this->updatedAt_ != nullptr; };
    // agentConfigId Field Functions 
    bool hasAgentConfigId() const { return this->agentConfigId_ != nullptr;};
    void deleteAgentConfigId() { this->agentConfigId_ = nullptr;};
    inline string agentConfigId() const { DARABONBA_PTR_GET_DEFAULT(agentConfigId_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setAgentConfigId(string agentConfigId) { DARABONBA_PTR_SET_VALUE(agentConfigId_, agentConfigId) };


    // agentConfigName Field Functions 
    bool hasAgentConfigName() const { return this->agentConfigName_ != nullptr;};
    void deleteAgentConfigName() { this->agentConfigName_ = nullptr;};
    inline string agentConfigName() const { DARABONBA_PTR_GET_DEFAULT(agentConfigName_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setAgentConfigName(string agentConfigName) { DARABONBA_PTR_SET_VALUE(agentConfigName_, agentConfigName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // grayscaleConfig Field Functions 
    bool hasGrayscaleConfig() const { return this->grayscaleConfig_ != nullptr;};
    void deleteGrayscaleConfig() { this->grayscaleConfig_ = nullptr;};
    inline string grayscaleConfig() const { DARABONBA_PTR_GET_DEFAULT(grayscaleConfig_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setGrayscaleConfig(string grayscaleConfig) { DARABONBA_PTR_SET_VALUE(grayscaleConfig_, grayscaleConfig) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListClusterAgentInstallRecordsResponseBodyData& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> agentConfigId_ = nullptr;
    std::shared_ptr<string> agentConfigName_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> grayscaleConfig_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
    std::shared_ptr<string> pluginVersion_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
