// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERFROMGRAFANARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListClusterFromGrafanaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterFromGrafanaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PromClusterList, promClusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterFromGrafanaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PromClusterList, promClusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterFromGrafanaResponseBody() = default ;
    ListClusterFromGrafanaResponseBody(const ListClusterFromGrafanaResponseBody &) = default ;
    ListClusterFromGrafanaResponseBody(ListClusterFromGrafanaResponseBody &&) = default ;
    ListClusterFromGrafanaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterFromGrafanaResponseBody() = default ;
    ListClusterFromGrafanaResponseBody& operator=(const ListClusterFromGrafanaResponseBody &) = default ;
    ListClusterFromGrafanaResponseBody& operator=(ListClusterFromGrafanaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PromClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PromClusterList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PromClusterList& obj) { 
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
      PromClusterList() = default ;
      PromClusterList(const PromClusterList &) = default ;
      PromClusterList(PromClusterList &&) = default ;
      PromClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PromClusterList() = default ;
      PromClusterList& operator=(const PromClusterList &) = default ;
      PromClusterList& operator=(PromClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->controllerId_ == nullptr && this->createTime_ == nullptr
        && this->extra_ == nullptr && this->id_ == nullptr && this->installTime_ == nullptr && this->isControllerInstalled_ == nullptr && this->lastHeartBeatTime_ == nullptr
        && this->nodeNum_ == nullptr && this->options_ == nullptr && this->pluginsJsonArray_ == nullptr && this->regionId_ == nullptr && this->stateJson_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline PromClusterList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline PromClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline PromClusterList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline PromClusterList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // controllerId Field Functions 
      bool hasControllerId() const { return this->controllerId_ != nullptr;};
      void deleteControllerId() { this->controllerId_ = nullptr;};
      inline string getControllerId() const { DARABONBA_PTR_GET_DEFAULT(controllerId_, "") };
      inline PromClusterList& setControllerId(string controllerId) { DARABONBA_PTR_SET_VALUE(controllerId_, controllerId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline PromClusterList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline PromClusterList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline PromClusterList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // installTime Field Functions 
      bool hasInstallTime() const { return this->installTime_ != nullptr;};
      void deleteInstallTime() { this->installTime_ = nullptr;};
      inline int64_t getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, 0L) };
      inline PromClusterList& setInstallTime(int64_t installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


      // isControllerInstalled Field Functions 
      bool hasIsControllerInstalled() const { return this->isControllerInstalled_ != nullptr;};
      void deleteIsControllerInstalled() { this->isControllerInstalled_ = nullptr;};
      inline bool getIsControllerInstalled() const { DARABONBA_PTR_GET_DEFAULT(isControllerInstalled_, false) };
      inline PromClusterList& setIsControllerInstalled(bool isControllerInstalled) { DARABONBA_PTR_SET_VALUE(isControllerInstalled_, isControllerInstalled) };


      // lastHeartBeatTime Field Functions 
      bool hasLastHeartBeatTime() const { return this->lastHeartBeatTime_ != nullptr;};
      void deleteLastHeartBeatTime() { this->lastHeartBeatTime_ = nullptr;};
      inline int64_t getLastHeartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartBeatTime_, 0L) };
      inline PromClusterList& setLastHeartBeatTime(int64_t lastHeartBeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartBeatTime_, lastHeartBeatTime) };


      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline int32_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
      inline PromClusterList& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline PromClusterList& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // pluginsJsonArray Field Functions 
      bool hasPluginsJsonArray() const { return this->pluginsJsonArray_ != nullptr;};
      void deletePluginsJsonArray() { this->pluginsJsonArray_ = nullptr;};
      inline string getPluginsJsonArray() const { DARABONBA_PTR_GET_DEFAULT(pluginsJsonArray_, "") };
      inline PromClusterList& setPluginsJsonArray(string pluginsJsonArray) { DARABONBA_PTR_SET_VALUE(pluginsJsonArray_, pluginsJsonArray) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PromClusterList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // stateJson Field Functions 
      bool hasStateJson() const { return this->stateJson_ != nullptr;};
      void deleteStateJson() { this->stateJson_ = nullptr;};
      inline string getStateJson() const { DARABONBA_PTR_GET_DEFAULT(stateJson_, "") };
      inline PromClusterList& setStateJson(string stateJson) { DARABONBA_PTR_SET_VALUE(stateJson_, stateJson) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline PromClusterList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PromClusterList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> agentStatus_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterName_ {};
      shared_ptr<string> clusterType_ {};
      shared_ptr<string> controllerId_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> installTime_ {};
      shared_ptr<bool> isControllerInstalled_ {};
      shared_ptr<int64_t> lastHeartBeatTime_ {};
      shared_ptr<int32_t> nodeNum_ {};
      shared_ptr<string> options_ {};
      shared_ptr<string> pluginsJsonArray_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> stateJson_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->promClusterList_ == nullptr
        && this->requestId_ == nullptr; };
    // promClusterList Field Functions 
    bool hasPromClusterList() const { return this->promClusterList_ != nullptr;};
    void deletePromClusterList() { this->promClusterList_ = nullptr;};
    inline const vector<ListClusterFromGrafanaResponseBody::PromClusterList> & getPromClusterList() const { DARABONBA_PTR_GET_CONST(promClusterList_, vector<ListClusterFromGrafanaResponseBody::PromClusterList>) };
    inline vector<ListClusterFromGrafanaResponseBody::PromClusterList> getPromClusterList() { DARABONBA_PTR_GET(promClusterList_, vector<ListClusterFromGrafanaResponseBody::PromClusterList>) };
    inline ListClusterFromGrafanaResponseBody& setPromClusterList(const vector<ListClusterFromGrafanaResponseBody::PromClusterList> & promClusterList) { DARABONBA_PTR_SET_VALUE(promClusterList_, promClusterList) };
    inline ListClusterFromGrafanaResponseBody& setPromClusterList(vector<ListClusterFromGrafanaResponseBody::PromClusterList> && promClusterList) { DARABONBA_PTR_SET_RVALUE(promClusterList_, promClusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterFromGrafanaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListClusterFromGrafanaResponseBody::PromClusterList>> promClusterList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
