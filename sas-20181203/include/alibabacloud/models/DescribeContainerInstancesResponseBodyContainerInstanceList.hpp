// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODYCONTAINERINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODYCONTAINERINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerInstancesResponseBodyContainerInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerInstancesResponseBodyContainerInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Exposed, exposed_);
      DARABONBA_PTR_TO_JSON(ExposedDetail, exposedDetail_);
      DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
      DARABONBA_PTR_TO_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_TO_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_TO_JSON(ImageRepoTag, imageRepoTag_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(PodIp, podIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(UpdateMark, updateMark_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerInstancesResponseBodyContainerInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Exposed, exposed_);
      DARABONBA_PTR_FROM_JSON(ExposedDetail, exposedDetail_);
      DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
      DARABONBA_PTR_FROM_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_FROM_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_FROM_JSON(ImageRepoTag, imageRepoTag_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateMark, updateMark_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeContainerInstancesResponseBodyContainerInstanceList() = default ;
    DescribeContainerInstancesResponseBodyContainerInstanceList(const DescribeContainerInstancesResponseBodyContainerInstanceList &) = default ;
    DescribeContainerInstancesResponseBodyContainerInstanceList(DescribeContainerInstancesResponseBodyContainerInstanceList &&) = default ;
    DescribeContainerInstancesResponseBodyContainerInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerInstancesResponseBodyContainerInstanceList() = default ;
    DescribeContainerInstancesResponseBodyContainerInstanceList& operator=(const DescribeContainerInstancesResponseBodyContainerInstanceList &) = default ;
    DescribeContainerInstancesResponseBodyContainerInstanceList& operator=(DescribeContainerInstancesResponseBodyContainerInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmCount_ != nullptr
        && this->alarmStatus_ != nullptr && this->appName_ != nullptr && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->containerId_ != nullptr
        && this->createTimestamp_ != nullptr && this->exposed_ != nullptr && this->exposedDetail_ != nullptr && this->hcCount_ != nullptr && this->hcStatus_ != nullptr
        && this->hostIp_ != nullptr && this->image_ != nullptr && this->imageDigest_ != nullptr && this->imageId_ != nullptr && this->imageRepoName_ != nullptr
        && this->imageRepoNamespace_ != nullptr && this->imageRepoTag_ != nullptr && this->imageUuid_ != nullptr && this->instanceId_ != nullptr && this->namespace_ != nullptr
        && this->nodeInfo_ != nullptr && this->nodeName_ != nullptr && this->pod_ != nullptr && this->podIp_ != nullptr && this->regionId_ != nullptr
        && this->riskCount_ != nullptr && this->riskStatus_ != nullptr && this->updateMark_ != nullptr && this->vulCount_ != nullptr && this->vulStatus_ != nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // exposed Field Functions 
    bool hasExposed() const { return this->exposed_ != nullptr;};
    void deleteExposed() { this->exposed_ = nullptr;};
    inline int32_t exposed() const { DARABONBA_PTR_GET_DEFAULT(exposed_, 0) };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setExposed(int32_t exposed) { DARABONBA_PTR_SET_VALUE(exposed_, exposed) };


    // exposedDetail Field Functions 
    bool hasExposedDetail() const { return this->exposedDetail_ != nullptr;};
    void deleteExposedDetail() { this->exposedDetail_ = nullptr;};
    inline string exposedDetail() const { DARABONBA_PTR_GET_DEFAULT(exposedDetail_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setExposedDetail(string exposedDetail) { DARABONBA_PTR_SET_VALUE(exposedDetail_, exposedDetail) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // hcStatus Field Functions 
    bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
    void deleteHcStatus() { this->hcStatus_ = nullptr;};
    inline string hcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageRepoName Field Functions 
    bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
    void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
    inline string imageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


    // imageRepoNamespace Field Functions 
    bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
    void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
    inline string imageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


    // imageRepoTag Field Functions 
    bool hasImageRepoTag() const { return this->imageRepoTag_ != nullptr;};
    void deleteImageRepoTag() { this->imageRepoTag_ = nullptr;};
    inline string imageRepoTag() const { DARABONBA_PTR_GET_DEFAULT(imageRepoTag_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageRepoTag(string imageRepoTag) { DARABONBA_PTR_SET_VALUE(imageRepoTag_, imageRepoTag) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline string nodeInfo() const { DARABONBA_PTR_GET_DEFAULT(nodeInfo_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setNodeInfo(string nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // podIp Field Functions 
    bool hasPodIp() const { return this->podIp_ != nullptr;};
    void deletePodIp() { this->podIp_ = nullptr;};
    inline string podIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline string riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setRiskCount(string riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // updateMark Field Functions 
    bool hasUpdateMark() const { return this->updateMark_ != nullptr;};
    void deleteUpdateMark() { this->updateMark_ = nullptr;};
    inline string updateMark() const { DARABONBA_PTR_GET_DEFAULT(updateMark_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setUpdateMark(string updateMark) { DARABONBA_PTR_SET_VALUE(updateMark_, updateMark) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline string vulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
    inline DescribeContainerInstancesResponseBodyContainerInstanceList& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // The number of alerts.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // Indicates whether alerts are generated for the container. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The timestamp when the cluster was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Indicates whether the asset is exposed to the Internet.
    // 
    // *   **1**: exposed
    // *   **0**: not exposed
    std::shared_ptr<int32_t> exposed_ = nullptr;
    // The exposure details. The value is a JSON string.
    std::shared_ptr<string> exposedDetail_ = nullptr;
    // The number of baseline risks.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // Indicates whether baseline risks are detected. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> hcStatus_ = nullptr;
    // The IP address of the host.
    std::shared_ptr<string> hostIp_ = nullptr;
    // The image of the container.
    std::shared_ptr<string> image_ = nullptr;
    // The digest value of the image.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> imageRepoName_ = nullptr;
    // The namespace of the image repository.
    std::shared_ptr<string> imageRepoNamespace_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> imageRepoTag_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The node information.
    std::shared_ptr<string> nodeInfo_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The IP address of the pod.
    std::shared_ptr<string> podIp_ = nullptr;
    // The region ID of the container.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of risks.
    std::shared_ptr<string> riskCount_ = nullptr;
    // Indicates whether risks exist. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The update identifier of the container.
    std::shared_ptr<string> updateMark_ = nullptr;
    // The number of vulnerabilities that are detected in the container cluster.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
    // Indicates whether vulnerabilities are detected in the container. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> vulStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
