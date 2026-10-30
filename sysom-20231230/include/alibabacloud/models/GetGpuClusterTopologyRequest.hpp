// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGPUCLUSTERTOPOLOGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGPUCLUSTERTOPOLOGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetGpuClusterTopologyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGpuClusterTopologyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channelId, channelId_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(communicationId, communicationId_);
      DARABONBA_ANY_TO_JSON(instanceIdList, instanceIdList_);
      DARABONBA_ANY_TO_JSON(podList, podList_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_ANY_TO_JSON(taskIdList, taskIdList_);
      DARABONBA_PTR_TO_JSON(topoType, topoType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGpuClusterTopologyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channelId, channelId_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(communicationId, communicationId_);
      DARABONBA_ANY_FROM_JSON(instanceIdList, instanceIdList_);
      DARABONBA_ANY_FROM_JSON(podList, podList_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_ANY_FROM_JSON(taskIdList, taskIdList_);
      DARABONBA_PTR_FROM_JSON(topoType, topoType_);
    };
    GetGpuClusterTopologyRequest() = default ;
    GetGpuClusterTopologyRequest(const GetGpuClusterTopologyRequest &) = default ;
    GetGpuClusterTopologyRequest(GetGpuClusterTopologyRequest &&) = default ;
    GetGpuClusterTopologyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGpuClusterTopologyRequest() = default ;
    GetGpuClusterTopologyRequest& operator=(const GetGpuClusterTopologyRequest &) = default ;
    GetGpuClusterTopologyRequest& operator=(GetGpuClusterTopologyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && this->clusterId_ == nullptr && this->communicationId_ == nullptr && this->instanceIdList_ == nullptr && this->podList_ == nullptr && this->startTime_ == nullptr
        && this->taskIdList_ == nullptr && this->topoType_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetGpuClusterTopologyRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetGpuClusterTopologyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // communicationId Field Functions 
    bool hasCommunicationId() const { return this->communicationId_ != nullptr;};
    void deleteCommunicationId() { this->communicationId_ = nullptr;};
    inline string getCommunicationId() const { DARABONBA_PTR_GET_DEFAULT(communicationId_, "") };
    inline GetGpuClusterTopologyRequest& setCommunicationId(string communicationId) { DARABONBA_PTR_SET_VALUE(communicationId_, communicationId) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline     const Darabonba::Json & getInstanceIdList() const { DARABONBA_GET(instanceIdList_) };
    Darabonba::Json & getInstanceIdList() { DARABONBA_GET(instanceIdList_) };
    inline GetGpuClusterTopologyRequest& setInstanceIdList(const Darabonba::Json & instanceIdList) { DARABONBA_SET_VALUE(instanceIdList_, instanceIdList) };
    inline GetGpuClusterTopologyRequest& setInstanceIdList(Darabonba::Json && instanceIdList) { DARABONBA_SET_RVALUE(instanceIdList_, instanceIdList) };


    // podList Field Functions 
    bool hasPodList() const { return this->podList_ != nullptr;};
    void deletePodList() { this->podList_ = nullptr;};
    inline     const Darabonba::Json & getPodList() const { DARABONBA_GET(podList_) };
    Darabonba::Json & getPodList() { DARABONBA_GET(podList_) };
    inline GetGpuClusterTopologyRequest& setPodList(const Darabonba::Json & podList) { DARABONBA_SET_VALUE(podList_, podList) };
    inline GetGpuClusterTopologyRequest& setPodList(Darabonba::Json && podList) { DARABONBA_SET_RVALUE(podList_, podList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetGpuClusterTopologyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline     const Darabonba::Json & getTaskIdList() const { DARABONBA_GET(taskIdList_) };
    Darabonba::Json & getTaskIdList() { DARABONBA_GET(taskIdList_) };
    inline GetGpuClusterTopologyRequest& setTaskIdList(const Darabonba::Json & taskIdList) { DARABONBA_SET_VALUE(taskIdList_, taskIdList) };
    inline GetGpuClusterTopologyRequest& setTaskIdList(Darabonba::Json && taskIdList) { DARABONBA_SET_RVALUE(taskIdList_, taskIdList) };


    // topoType Field Functions 
    bool hasTopoType() const { return this->topoType_ != nullptr;};
    void deleteTopoType() { this->topoType_ = nullptr;};
    inline string getTopoType() const { DARABONBA_PTR_GET_DEFAULT(topoType_, "") };
    inline GetGpuClusterTopologyRequest& setTopoType(string topoType) { DARABONBA_PTR_SET_VALUE(topoType_, topoType) };


  protected:
    // The ID of the channel. Used to view the collective communication topology and the topology relationships of a specified channel ID under a specified communication group, such as the communication, tree, or ring topology among ranks within a communication group. This parameter must be used together with communication_id and topo_type. You can call the GetGpuClusterArgsOptions operation with the channel filter parameter to obtain the list of channel_id values under a specified communication_id.
    shared_ptr<string> channelId_ {};
    // The name of the cluster. You can select a cluster from the cluster list obtained by calling the GetListGpuCluster operation.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The ID of the communication group. Used to view the collective communication topology and the topology relationships of a specified communication group ID, such as the communication, tree, or ring topology among ranks within a communication group. This parameter must be used together with channel_id and topo_type. You can call the GetGpuClusterArgsOptions operation with the communication filter type to obtain the list of communication_id values.
    shared_ptr<string> communicationId_ {};
    // The list of instances for which to query GPU topology information.
    Darabonba::Json instanceIdList_ {};
    // The list of pods for which to query GPU topology information.
    Darabonba::Json podList_ {};
    // The query timestamp. Default value: the current time. The timestamp must be accurate to seconds.
    shared_ptr<string> startTime_ {};
    // The list of tasks for which to query GPU topology information.
    Darabonba::Json taskIdList_ {};
    // The topology type. Used to view the collective communication topology and the topology relationships of a specified topology type under a specified communication group and channel ID, such as the communication, tree, or ring topology among ranks within a communication group. This parameter must be used together with communication_id and channel_id. You can call the GetGpuClusterArgsOptions operation with the topoType filter parameter to obtain the list of topo_type values under a specified communication_id and channel_id.
    shared_ptr<string> topoType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
