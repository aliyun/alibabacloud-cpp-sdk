// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODYGROUPEDCONTAINERINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODYGROUPEDCONTAINERINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CusterState, custerState_);
      DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
      DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_TO_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_TO_JSON(ImageRepoTag, imageRepoTag_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(PodIp, podIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SyncOpen, syncOpen_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CusterState, custerState_);
      DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
      DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_FROM_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_FROM_JSON(ImageRepoTag, imageRepoTag_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SyncOpen, syncOpen_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList() = default ;
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList(const DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList &) = default ;
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList(DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList &&) = default ;
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList() = default ;
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& operator=(const DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList &) = default ;
    DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& operator=(DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->appName_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->createTime_ == nullptr
        && return this->custerState_ == nullptr && return this->hcCount_ == nullptr && return this->hostIp_ == nullptr && return this->image_ == nullptr && return this->imageDigest_ == nullptr
        && return this->imageRepoName_ == nullptr && return this->imageRepoNamespace_ == nullptr && return this->imageRepoTag_ == nullptr && return this->imageUuid_ == nullptr && return this->instanceCount_ == nullptr
        && return this->instanceId_ == nullptr && return this->namespace_ == nullptr && return this->pod_ == nullptr && return this->podIp_ == nullptr && return this->regionId_ == nullptr
        && return this->riskInstanceCount_ == nullptr && return this->riskLevel_ == nullptr && return this->riskStatus_ == nullptr && return this->syncOpen_ == nullptr && return this->syncStatus_ == nullptr
        && return this->vulCount_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // custerState Field Functions 
    bool hasCusterState() const { return this->custerState_ != nullptr;};
    void deleteCusterState() { this->custerState_ = nullptr;};
    inline string custerState() const { DARABONBA_PTR_GET_DEFAULT(custerState_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setCusterState(string custerState) { DARABONBA_PTR_SET_VALUE(custerState_, custerState) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageRepoName Field Functions 
    bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
    void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
    inline string imageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


    // imageRepoNamespace Field Functions 
    bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
    void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
    inline string imageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


    // imageRepoTag Field Functions 
    bool hasImageRepoTag() const { return this->imageRepoTag_ != nullptr;};
    void deleteImageRepoTag() { this->imageRepoTag_ = nullptr;};
    inline string imageRepoTag() const { DARABONBA_PTR_GET_DEFAULT(imageRepoTag_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImageRepoTag(string imageRepoTag) { DARABONBA_PTR_SET_VALUE(imageRepoTag_, imageRepoTag) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // podIp Field Functions 
    bool hasPodIp() const { return this->podIp_ != nullptr;};
    void deletePodIp() { this->podIp_ = nullptr;};
    inline string podIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline int32_t riskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // syncOpen Field Functions 
    bool hasSyncOpen() const { return this->syncOpen_ != nullptr;};
    void deleteSyncOpen() { this->syncOpen_ = nullptr;};
    inline int32_t syncOpen() const { DARABONBA_PTR_GET_DEFAULT(syncOpen_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setSyncOpen(int32_t syncOpen) { DARABONBA_PTR_SET_VALUE(syncOpen_, syncOpen) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline int32_t syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setSyncStatus(int32_t syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeGroupedContainerInstancesResponseBodyGroupedContainerInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of alerts that are detected for the current pod, application, namespace, or cluster.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **Kubernetes**: dedicated Kubernetes cluster.
    // *   **ManagedKubernetes**: standard managed cluster (edge cluster).
    // *   **Ask**: serverless Kubernetes (ASK) cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The timestamp when the cluster was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **running**: The cluster is running.
    // *   **stopped**: The cluster is stopped.
    // *   **deleted**: The cluster is deleted.
    // *   **delete_failed**: The cluster failed to be deleted.
    // *   **failed**: The cluster failed to be created.
    std::shared_ptr<string> custerState_ = nullptr;
    // The number of baseline risks that are detected for the current pod, application, namespace, or cluster.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // The IP address of the host in the container cluster.
    std::shared_ptr<string> hostIp_ = nullptr;
    // The container image.
    std::shared_ptr<string> image_ = nullptr;
    // The digest value of the image.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> imageRepoName_ = nullptr;
    // The namespace of the image repository.
    std::shared_ptr<string> imageRepoNamespace_ = nullptr;
    // The tag that is added to the image repository.
    std::shared_ptr<string> imageRepoTag_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The number of pods, applications, clusters, or namespaces.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace of the cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The IP address of the pod.
    std::shared_ptr<string> podIp_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of at-risk instances.
    std::shared_ptr<int32_t> riskInstanceCount_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Indicates whether risks were detected. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // Indicates whether the synchronization of cluster audit logs is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    std::shared_ptr<int32_t> syncOpen_ = nullptr;
    // The status of the synchronization of cluster audit logs. Valid values:
    // 
    // *   **0**: The synchronization failed.
    // *   **1**: The synchronization is successful.
    std::shared_ptr<int32_t> syncStatus_ = nullptr;
    // The number of vulnerabilities that are detected for the current pod, application, namespace, or cluster.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
