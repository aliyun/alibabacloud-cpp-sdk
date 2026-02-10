// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerInstanceList, containerInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerInstanceList, containerInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerInstancesResponseBody() = default ;
    DescribeContainerInstancesResponseBody(const DescribeContainerInstancesResponseBody &) = default ;
    DescribeContainerInstancesResponseBody(DescribeContainerInstancesResponseBody &&) = default ;
    DescribeContainerInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerInstancesResponseBody() = default ;
    DescribeContainerInstancesResponseBody& operator=(const DescribeContainerInstancesResponseBody &) = default ;
    DescribeContainerInstancesResponseBody& operator=(DescribeContainerInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ContainerInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerInstanceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ContainerInstanceList& obj) { 
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
      ContainerInstanceList() = default ;
      ContainerInstanceList(const ContainerInstanceList &) = default ;
      ContainerInstanceList(ContainerInstanceList &&) = default ;
      ContainerInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerInstanceList() = default ;
      ContainerInstanceList& operator=(const ContainerInstanceList &) = default ;
      ContainerInstanceList& operator=(ContainerInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->alarmStatus_ == nullptr && this->appName_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->containerId_ == nullptr
        && this->createTimestamp_ == nullptr && this->exposed_ == nullptr && this->exposedDetail_ == nullptr && this->hcCount_ == nullptr && this->hcStatus_ == nullptr
        && this->hostIp_ == nullptr && this->image_ == nullptr && this->imageDigest_ == nullptr && this->imageId_ == nullptr && this->imageRepoName_ == nullptr
        && this->imageRepoNamespace_ == nullptr && this->imageRepoTag_ == nullptr && this->imageUuid_ == nullptr && this->instanceId_ == nullptr && this->namespace_ == nullptr
        && this->nodeInfo_ == nullptr && this->nodeName_ == nullptr && this->pod_ == nullptr && this->podIp_ == nullptr && this->regionId_ == nullptr
        && this->riskCount_ == nullptr && this->riskStatus_ == nullptr && this->updateMark_ == nullptr && this->vulCount_ == nullptr && this->vulStatus_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline ContainerInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline ContainerInstanceList& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline ContainerInstanceList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ContainerInstanceList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ContainerInstanceList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline ContainerInstanceList& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline ContainerInstanceList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // exposed Field Functions 
      bool hasExposed() const { return this->exposed_ != nullptr;};
      void deleteExposed() { this->exposed_ = nullptr;};
      inline int32_t getExposed() const { DARABONBA_PTR_GET_DEFAULT(exposed_, 0) };
      inline ContainerInstanceList& setExposed(int32_t exposed) { DARABONBA_PTR_SET_VALUE(exposed_, exposed) };


      // exposedDetail Field Functions 
      bool hasExposedDetail() const { return this->exposedDetail_ != nullptr;};
      void deleteExposedDetail() { this->exposedDetail_ = nullptr;};
      inline string getExposedDetail() const { DARABONBA_PTR_GET_DEFAULT(exposedDetail_, "") };
      inline ContainerInstanceList& setExposedDetail(string exposedDetail) { DARABONBA_PTR_SET_VALUE(exposedDetail_, exposedDetail) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline ContainerInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // hcStatus Field Functions 
      bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
      void deleteHcStatus() { this->hcStatus_ = nullptr;};
      inline string getHcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
      inline ContainerInstanceList& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


      // hostIp Field Functions 
      bool hasHostIp() const { return this->hostIp_ != nullptr;};
      void deleteHostIp() { this->hostIp_ = nullptr;};
      inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
      inline ContainerInstanceList& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ContainerInstanceList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageDigest Field Functions 
      bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
      void deleteImageDigest() { this->imageDigest_ = nullptr;};
      inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
      inline ContainerInstanceList& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ContainerInstanceList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageRepoName Field Functions 
      bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
      void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
      inline string getImageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
      inline ContainerInstanceList& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


      // imageRepoNamespace Field Functions 
      bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
      void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
      inline string getImageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
      inline ContainerInstanceList& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


      // imageRepoTag Field Functions 
      bool hasImageRepoTag() const { return this->imageRepoTag_ != nullptr;};
      void deleteImageRepoTag() { this->imageRepoTag_ = nullptr;};
      inline string getImageRepoTag() const { DARABONBA_PTR_GET_DEFAULT(imageRepoTag_, "") };
      inline ContainerInstanceList& setImageRepoTag(string imageRepoTag) { DARABONBA_PTR_SET_VALUE(imageRepoTag_, imageRepoTag) };


      // imageUuid Field Functions 
      bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
      void deleteImageUuid() { this->imageUuid_ = nullptr;};
      inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
      inline ContainerInstanceList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ContainerInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ContainerInstanceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline string getNodeInfo() const { DARABONBA_PTR_GET_DEFAULT(nodeInfo_, "") };
      inline ContainerInstanceList& setNodeInfo(string nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline ContainerInstanceList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline ContainerInstanceList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // podIp Field Functions 
      bool hasPodIp() const { return this->podIp_ != nullptr;};
      void deletePodIp() { this->podIp_ = nullptr;};
      inline string getPodIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
      inline ContainerInstanceList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ContainerInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline string getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, "") };
      inline ContainerInstanceList& setRiskCount(string riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline ContainerInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // updateMark Field Functions 
      bool hasUpdateMark() const { return this->updateMark_ != nullptr;};
      void deleteUpdateMark() { this->updateMark_ = nullptr;};
      inline string getUpdateMark() const { DARABONBA_PTR_GET_DEFAULT(updateMark_, "") };
      inline ContainerInstanceList& setUpdateMark(string updateMark) { DARABONBA_PTR_SET_VALUE(updateMark_, updateMark) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline ContainerInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // vulStatus Field Functions 
      bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
      void deleteVulStatus() { this->vulStatus_ = nullptr;};
      inline string getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
      inline ContainerInstanceList& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


    protected:
      // The number of alerts.
      shared_ptr<int32_t> alarmCount_ {};
      // Indicates whether alerts are generated for the container. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The timestamp when the cluster was created. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // Indicates whether the asset is exposed to the Internet.
      // 
      // *   **1**: exposed
      // *   **0**: not exposed
      shared_ptr<int32_t> exposed_ {};
      // The exposure details. The value is a JSON string.
      shared_ptr<string> exposedDetail_ {};
      // The number of baseline risks.
      shared_ptr<int32_t> hcCount_ {};
      // Indicates whether baseline risks are detected. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> hcStatus_ {};
      // The IP address of the host.
      shared_ptr<string> hostIp_ {};
      // The image of the container.
      shared_ptr<string> image_ {};
      // The digest value of the image.
      shared_ptr<string> imageDigest_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The name of the image repository.
      shared_ptr<string> imageRepoName_ {};
      // The namespace of the image repository.
      shared_ptr<string> imageRepoNamespace_ {};
      // The tag that is added to the image.
      shared_ptr<string> imageRepoTag_ {};
      // The UUID of the image.
      shared_ptr<string> imageUuid_ {};
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The node information.
      shared_ptr<string> nodeInfo_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The pod.
      shared_ptr<string> pod_ {};
      // The IP address of the pod.
      shared_ptr<string> podIp_ {};
      // The region ID of the container.
      shared_ptr<string> regionId_ {};
      // The number of risks.
      shared_ptr<string> riskCount_ {};
      // Indicates whether risks exist. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> riskStatus_ {};
      // The update identifier of the container.
      shared_ptr<string> updateMark_ {};
      // The number of vulnerabilities that are detected in the container cluster.
      shared_ptr<int32_t> vulCount_ {};
      // Indicates whether vulnerabilities are detected in the container. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> vulStatus_ {};
    };

    virtual bool empty() const override { return this->containerInstanceList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // containerInstanceList Field Functions 
    bool hasContainerInstanceList() const { return this->containerInstanceList_ != nullptr;};
    void deleteContainerInstanceList() { this->containerInstanceList_ = nullptr;};
    inline const vector<DescribeContainerInstancesResponseBody::ContainerInstanceList> & getContainerInstanceList() const { DARABONBA_PTR_GET_CONST(containerInstanceList_, vector<DescribeContainerInstancesResponseBody::ContainerInstanceList>) };
    inline vector<DescribeContainerInstancesResponseBody::ContainerInstanceList> getContainerInstanceList() { DARABONBA_PTR_GET(containerInstanceList_, vector<DescribeContainerInstancesResponseBody::ContainerInstanceList>) };
    inline DescribeContainerInstancesResponseBody& setContainerInstanceList(const vector<DescribeContainerInstancesResponseBody::ContainerInstanceList> & containerInstanceList) { DARABONBA_PTR_SET_VALUE(containerInstanceList_, containerInstanceList) };
    inline DescribeContainerInstancesResponseBody& setContainerInstanceList(vector<DescribeContainerInstancesResponseBody::ContainerInstanceList> && containerInstanceList) { DARABONBA_PTR_SET_RVALUE(containerInstanceList_, containerInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeContainerInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeContainerInstancesResponseBody::PageInfo) };
    inline DescribeContainerInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeContainerInstancesResponseBody::PageInfo) };
    inline DescribeContainerInstancesResponseBody& setPageInfo(const DescribeContainerInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeContainerInstancesResponseBody& setPageInfo(DescribeContainerInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the container asset.
    shared_ptr<vector<DescribeContainerInstancesResponseBody::ContainerInstanceList>> containerInstanceList_ {};
    // The pagination information.
    shared_ptr<DescribeContainerInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
