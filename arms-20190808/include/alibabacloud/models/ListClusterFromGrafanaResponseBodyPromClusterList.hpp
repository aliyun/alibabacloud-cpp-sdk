// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODYPROMCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODYPROMCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListClusterFromGrafanaResponseBodyPromClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterFromGrafanaResponseBodyPromClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ControllerId, controllerId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
      DARABONBA_PTR_TO_JSON(IsControllerInstalled, isControllerInstalled_);
      DARABONBA_PTR_TO_JSON(LastHeartBeatTime, lastHeartBeatTime_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PluginsJsonArray, pluginsJsonArray_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StateJson, stateJson_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterFromGrafanaResponseBodyPromClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ControllerId, controllerId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
      DARABONBA_PTR_FROM_JSON(IsControllerInstalled, isControllerInstalled_);
      DARABONBA_PTR_FROM_JSON(LastHeartBeatTime, lastHeartBeatTime_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PluginsJsonArray, pluginsJsonArray_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StateJson, stateJson_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListClusterFromGrafanaResponseBodyPromClusterList() = default ;
    ListClusterFromGrafanaResponseBodyPromClusterList(const ListClusterFromGrafanaResponseBodyPromClusterList &) = default ;
    ListClusterFromGrafanaResponseBodyPromClusterList(ListClusterFromGrafanaResponseBodyPromClusterList &&) = default ;
    ListClusterFromGrafanaResponseBodyPromClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterFromGrafanaResponseBodyPromClusterList() = default ;
    ListClusterFromGrafanaResponseBodyPromClusterList& operator=(const ListClusterFromGrafanaResponseBodyPromClusterList &) = default ;
    ListClusterFromGrafanaResponseBodyPromClusterList& operator=(ListClusterFromGrafanaResponseBodyPromClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentStatus_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->controllerId_ != nullptr && this->createTime_ != nullptr
        && this->extra_ != nullptr && this->id_ != nullptr && this->installTime_ != nullptr && this->isControllerInstalled_ != nullptr && this->lastHeartBeatTime_ != nullptr
        && this->nodeNum_ != nullptr && this->options_ != nullptr && this->pluginsJsonArray_ != nullptr && this->regionId_ != nullptr && this->stateJson_ != nullptr
        && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // controllerId Field Functions 
    bool hasControllerId() const { return this->controllerId_ != nullptr;};
    void deleteControllerId() { this->controllerId_ = nullptr;};
    inline string controllerId() const { DARABONBA_PTR_GET_DEFAULT(controllerId_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setControllerId(string controllerId) { DARABONBA_PTR_SET_VALUE(controllerId_, controllerId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline int64_t installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, 0L) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setInstallTime(int64_t installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // isControllerInstalled Field Functions 
    bool hasIsControllerInstalled() const { return this->isControllerInstalled_ != nullptr;};
    void deleteIsControllerInstalled() { this->isControllerInstalled_ = nullptr;};
    inline bool isControllerInstalled() const { DARABONBA_PTR_GET_DEFAULT(isControllerInstalled_, false) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setIsControllerInstalled(bool isControllerInstalled) { DARABONBA_PTR_SET_VALUE(isControllerInstalled_, isControllerInstalled) };


    // lastHeartBeatTime Field Functions 
    bool hasLastHeartBeatTime() const { return this->lastHeartBeatTime_ != nullptr;};
    void deleteLastHeartBeatTime() { this->lastHeartBeatTime_ = nullptr;};
    inline int64_t lastHeartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartBeatTime_, 0L) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setLastHeartBeatTime(int64_t lastHeartBeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartBeatTime_, lastHeartBeatTime) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // pluginsJsonArray Field Functions 
    bool hasPluginsJsonArray() const { return this->pluginsJsonArray_ != nullptr;};
    void deletePluginsJsonArray() { this->pluginsJsonArray_ = nullptr;};
    inline string pluginsJsonArray() const { DARABONBA_PTR_GET_DEFAULT(pluginsJsonArray_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setPluginsJsonArray(string pluginsJsonArray) { DARABONBA_PTR_SET_VALUE(pluginsJsonArray_, pluginsJsonArray) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stateJson Field Functions 
    bool hasStateJson() const { return this->stateJson_ != nullptr;};
    void deleteStateJson() { this->stateJson_ = nullptr;};
    inline string stateJson() const { DARABONBA_PTR_GET_DEFAULT(stateJson_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setStateJson(string stateJson) { DARABONBA_PTR_SET_VALUE(stateJson_, stateJson) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListClusterFromGrafanaResponseBodyPromClusterList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The status of the Prometheus agent on the cluster. Valid values:
    // 
    // *   INSTALL_FAILED: The Prometheus agent failed to be installed.
    // *   INSTALL_SUCCEED: The Prometheus agent was installed.
    // *   NOT_REGISTER: You have not registered an Alibaba Cloud account.
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The controller ID.
    std::shared_ptr<string> controllerId_ = nullptr;
    // The time when the dashboard was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The extended fields. This parameter is a JSON string.
    std::shared_ptr<string> extra_ = nullptr;
    // The ID of a database in the cluster.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The timestamp when the Prometheus agent was installed.
    std::shared_ptr<int64_t> installTime_ = nullptr;
    // Indicates whether the Prometheus agent was installed. Valid values:
    // 
    // *   true: The Prometheus agent was installed.
    // *   false: The Prometheus agent was not installed.
    std::shared_ptr<bool> isControllerInstalled_ = nullptr;
    // The time when the last heartbeat was reported.
    std::shared_ptr<int64_t> lastHeartBeatTime_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The custom parameter.
    std::shared_ptr<string> options_ = nullptr;
    // The list of nodejsonar logs.
    std::shared_ptr<string> pluginsJsonArray_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about applications deployed in the cluster.
    std::shared_ptr<string> stateJson_ = nullptr;
    // The time when the dashboard was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the Alibaba Cloud account to which the cluster belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
