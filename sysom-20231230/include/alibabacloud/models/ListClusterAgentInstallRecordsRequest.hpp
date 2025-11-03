// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERAGENTINSTALLRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListClusterAgentInstallRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAgentInstallRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_config_id, agentConfigId_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_TO_JSON(plugin_version, pluginVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAgentInstallRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_config_id, agentConfigId_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(plugin_id, pluginId_);
      DARABONBA_PTR_FROM_JSON(plugin_version, pluginVersion_);
    };
    ListClusterAgentInstallRecordsRequest() = default ;
    ListClusterAgentInstallRecordsRequest(const ListClusterAgentInstallRecordsRequest &) = default ;
    ListClusterAgentInstallRecordsRequest(ListClusterAgentInstallRecordsRequest &&) = default ;
    ListClusterAgentInstallRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAgentInstallRecordsRequest() = default ;
    ListClusterAgentInstallRecordsRequest& operator=(const ListClusterAgentInstallRecordsRequest &) = default ;
    ListClusterAgentInstallRecordsRequest& operator=(ListClusterAgentInstallRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentConfigId_ == nullptr
        && return this->clusterId_ == nullptr && return this->current_ == nullptr && return this->pageSize_ == nullptr && return this->pluginId_ == nullptr && return this->pluginVersion_ == nullptr; };
    // agentConfigId Field Functions 
    bool hasAgentConfigId() const { return this->agentConfigId_ != nullptr;};
    void deleteAgentConfigId() { this->agentConfigId_ = nullptr;};
    inline string agentConfigId() const { DARABONBA_PTR_GET_DEFAULT(agentConfigId_, "") };
    inline ListClusterAgentInstallRecordsRequest& setAgentConfigId(string agentConfigId) { DARABONBA_PTR_SET_VALUE(agentConfigId_, agentConfigId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterAgentInstallRecordsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListClusterAgentInstallRecordsRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListClusterAgentInstallRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListClusterAgentInstallRecordsRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListClusterAgentInstallRecordsRequest& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


  protected:
    std::shared_ptr<string> agentConfigId_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
    std::shared_ptr<string> pluginVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
