// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerGroupedFieldDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerGroupedFieldDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerGroupedFieldDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerGroupedFieldDetailResponseBody() = default ;
    DescribeContainerGroupedFieldDetailResponseBody(const DescribeContainerGroupedFieldDetailResponseBody &) = default ;
    DescribeContainerGroupedFieldDetailResponseBody(DescribeContainerGroupedFieldDetailResponseBody &&) = default ;
    DescribeContainerGroupedFieldDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerGroupedFieldDetailResponseBody() = default ;
    DescribeContainerGroupedFieldDetailResponseBody& operator=(const DescribeContainerGroupedFieldDetailResponseBody &) = default ;
    DescribeContainerGroupedFieldDetailResponseBody& operator=(DescribeContainerGroupedFieldDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->appName_ == nullptr && this->clusterCurrentVersion_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterState_ == nullptr
        && this->clusterType_ == nullptr && this->containerCount_ == nullptr && this->createTime_ == nullptr && this->instanceCount_ == nullptr && this->namespace_ == nullptr
        && this->nodeName_ == nullptr && this->pod_ == nullptr && this->podCount_ == nullptr && this->podIp_ == nullptr && this->regionId_ == nullptr
        && this->vulCount_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline Data& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterCurrentVersion Field Functions 
      bool hasClusterCurrentVersion() const { return this->clusterCurrentVersion_ != nullptr;};
      void deleteClusterCurrentVersion() { this->clusterCurrentVersion_ = nullptr;};
      inline string getClusterCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterCurrentVersion_, "") };
      inline Data& setClusterCurrentVersion(string clusterCurrentVersion) { DARABONBA_PTR_SET_VALUE(clusterCurrentVersion_, clusterCurrentVersion) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterState Field Functions 
      bool hasClusterState() const { return this->clusterState_ != nullptr;};
      void deleteClusterState() { this->clusterState_ = nullptr;};
      inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
      inline Data& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Data& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // containerCount Field Functions 
      bool hasContainerCount() const { return this->containerCount_ != nullptr;};
      void deleteContainerCount() { this->containerCount_ = nullptr;};
      inline int32_t getContainerCount() const { DARABONBA_PTR_GET_DEFAULT(containerCount_, 0) };
      inline Data& setContainerCount(int32_t containerCount) { DARABONBA_PTR_SET_VALUE(containerCount_, containerCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Data& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Data& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline Data& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
      inline Data& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // podIp Field Functions 
      bool hasPodIp() const { return this->podIp_ != nullptr;};
      void deletePodIp() { this->podIp_ = nullptr;};
      inline string getPodIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
      inline Data& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline Data& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The number of alerts.
      shared_ptr<int32_t> alarmCount_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The version of the current online server in the cluster.
      shared_ptr<string> clusterCurrentVersion_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
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
      shared_ptr<string> clusterState_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **Kubernetes**: dedicated Kubernetes cluster.
      // *   **ManagedKubernetes**: standard managed cluster (edge cluster).
      // *   **Ask**: serverless Kubernetes (ASK) cluster.
      shared_ptr<string> clusterType_ {};
      // The number of containers.
      shared_ptr<int32_t> containerCount_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The number of instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The name of the pod.
      shared_ptr<string> pod_ {};
      // The number of pods.
      shared_ptr<int32_t> podCount_ {};
      // The IP address of the pod.
      shared_ptr<string> podIp_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The number of vulnerabilities.
      shared_ptr<int32_t> vulCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContainerGroupedFieldDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeContainerGroupedFieldDetailResponseBody::Data) };
    inline DescribeContainerGroupedFieldDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeContainerGroupedFieldDetailResponseBody::Data) };
    inline DescribeContainerGroupedFieldDetailResponseBody& setData(const DescribeContainerGroupedFieldDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContainerGroupedFieldDetailResponseBody& setData(DescribeContainerGroupedFieldDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerGroupedFieldDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeContainerGroupedFieldDetailResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
