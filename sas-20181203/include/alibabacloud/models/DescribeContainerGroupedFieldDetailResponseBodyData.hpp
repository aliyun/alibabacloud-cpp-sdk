// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerGroupedFieldDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerGroupedFieldDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterCurrentVersion, clusterCurrentVersion_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ContainerCount, containerCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(PodIp, podIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerGroupedFieldDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterCurrentVersion, clusterCurrentVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ContainerCount, containerCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeContainerGroupedFieldDetailResponseBodyData() = default ;
    DescribeContainerGroupedFieldDetailResponseBodyData(const DescribeContainerGroupedFieldDetailResponseBodyData &) = default ;
    DescribeContainerGroupedFieldDetailResponseBodyData(DescribeContainerGroupedFieldDetailResponseBodyData &&) = default ;
    DescribeContainerGroupedFieldDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerGroupedFieldDetailResponseBodyData() = default ;
    DescribeContainerGroupedFieldDetailResponseBodyData& operator=(const DescribeContainerGroupedFieldDetailResponseBodyData &) = default ;
    DescribeContainerGroupedFieldDetailResponseBodyData& operator=(DescribeContainerGroupedFieldDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmCount_ != nullptr
        && this->appName_ != nullptr && this->clusterCurrentVersion_ != nullptr && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterState_ != nullptr
        && this->clusterType_ != nullptr && this->containerCount_ != nullptr && this->createTime_ != nullptr && this->instanceCount_ != nullptr && this->namespace_ != nullptr
        && this->nodeName_ != nullptr && this->pod_ != nullptr && this->podCount_ != nullptr && this->podIp_ != nullptr && this->regionId_ != nullptr
        && this->vulCount_ != nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterCurrentVersion Field Functions 
    bool hasClusterCurrentVersion() const { return this->clusterCurrentVersion_ != nullptr;};
    void deleteClusterCurrentVersion() { this->clusterCurrentVersion_ = nullptr;};
    inline string clusterCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterCurrentVersion_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setClusterCurrentVersion(string clusterCurrentVersion) { DARABONBA_PTR_SET_VALUE(clusterCurrentVersion_, clusterCurrentVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string clusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCount Field Functions 
    bool hasContainerCount() const { return this->containerCount_ != nullptr;};
    void deleteContainerCount() { this->containerCount_ = nullptr;};
    inline int32_t containerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, 0) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setContainerCount(int32_t containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t podCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // podIp Field Functions 
    bool hasPodIp() const { return this->podIp_ != nullptr;};
    void deletePodIp() { this->podIp_ = nullptr;};
    inline string podIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeContainerGroupedFieldDetailResponseBodyData& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of alerts.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The version of the current online server in the cluster.
    std::shared_ptr<string> clusterCurrentVersion_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   STARTING: The cluster is being started.
    // *   START_FAILED: The cluster fails to be started.
    // *   BOOTSTRAPPING: The bootstrap action is being performed for the cluster.
    // *   RUNNING: The cluster is running.
    // *   TERMINATING: The cluster is being terminated.
    // *   TERMINATED: The cluster is terminated.
    // *   TERMINATED_WITH_ERRORS: The cluster is terminated due to an exception.
    // *   TERMINATE_FAILED: The cluster fails to be terminated.
    std::shared_ptr<string> clusterState_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **Kubernetes**: dedicated Kubernetes cluster.
    // *   **ManagedKubernetes**: standard managed cluster (edge cluster).
    // *   **Ask**: serverless Kubernetes (ASK) cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The number of containers.
    std::shared_ptr<int32_t> containerCount_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The name of the pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The number of pods.
    std::shared_ptr<int32_t> podCount_ = nullptr;
    // The IP address of the pod.
    std::shared_ptr<string> podIp_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of vulnerabilities.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
