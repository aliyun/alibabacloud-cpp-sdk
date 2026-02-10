// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESRESPONSEBODY_HPP_
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
  class DescribeGroupedContainerInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedContainerInstanceList, groupedContainerInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedContainerInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedContainerInstanceList, groupedContainerInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedContainerInstancesResponseBody() = default ;
    DescribeGroupedContainerInstancesResponseBody(const DescribeGroupedContainerInstancesResponseBody &) = default ;
    DescribeGroupedContainerInstancesResponseBody(DescribeGroupedContainerInstancesResponseBody &&) = default ;
    DescribeGroupedContainerInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedContainerInstancesResponseBody() = default ;
    DescribeGroupedContainerInstancesResponseBody& operator=(const DescribeGroupedContainerInstancesResponseBody &) = default ;
    DescribeGroupedContainerInstancesResponseBody& operator=(DescribeGroupedContainerInstancesResponseBody &&) = default ;
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
      // The number of container assets returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of container assets returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class GroupedContainerInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedContainerInstanceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, GroupedContainerInstanceList& obj) { 
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
      GroupedContainerInstanceList() = default ;
      GroupedContainerInstanceList(const GroupedContainerInstanceList &) = default ;
      GroupedContainerInstanceList(GroupedContainerInstanceList &&) = default ;
      GroupedContainerInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedContainerInstanceList() = default ;
      GroupedContainerInstanceList& operator=(const GroupedContainerInstanceList &) = default ;
      GroupedContainerInstanceList& operator=(GroupedContainerInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr
        && this->custerState_ == nullptr && this->hcCount_ == nullptr && this->hostIp_ == nullptr && this->image_ == nullptr && this->imageDigest_ == nullptr
        && this->imageRepoName_ == nullptr && this->imageRepoNamespace_ == nullptr && this->imageRepoTag_ == nullptr && this->imageUuid_ == nullptr && this->instanceCount_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->pod_ == nullptr && this->podIp_ == nullptr && this->regionId_ == nullptr
        && this->riskInstanceCount_ == nullptr && this->riskLevel_ == nullptr && this->riskStatus_ == nullptr && this->syncOpen_ == nullptr && this->syncStatus_ == nullptr
        && this->vulCount_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline GroupedContainerInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline GroupedContainerInstanceList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline GroupedContainerInstanceList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline GroupedContainerInstanceList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline GroupedContainerInstanceList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline GroupedContainerInstanceList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // custerState Field Functions 
      bool hasCusterState() const { return this->custerState_ != nullptr;};
      void deleteCusterState() { this->custerState_ = nullptr;};
      inline string getCusterState() const { DARABONBA_PTR_GET_DEFAULT(custerState_, "") };
      inline GroupedContainerInstanceList& setCusterState(string custerState) { DARABONBA_PTR_SET_VALUE(custerState_, custerState) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline GroupedContainerInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // hostIp Field Functions 
      bool hasHostIp() const { return this->hostIp_ != nullptr;};
      void deleteHostIp() { this->hostIp_ = nullptr;};
      inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
      inline GroupedContainerInstanceList& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline GroupedContainerInstanceList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageDigest Field Functions 
      bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
      void deleteImageDigest() { this->imageDigest_ = nullptr;};
      inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
      inline GroupedContainerInstanceList& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


      // imageRepoName Field Functions 
      bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
      void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
      inline string getImageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
      inline GroupedContainerInstanceList& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


      // imageRepoNamespace Field Functions 
      bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
      void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
      inline string getImageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
      inline GroupedContainerInstanceList& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


      // imageRepoTag Field Functions 
      bool hasImageRepoTag() const { return this->imageRepoTag_ != nullptr;};
      void deleteImageRepoTag() { this->imageRepoTag_ = nullptr;};
      inline string getImageRepoTag() const { DARABONBA_PTR_GET_DEFAULT(imageRepoTag_, "") };
      inline GroupedContainerInstanceList& setImageRepoTag(string imageRepoTag) { DARABONBA_PTR_SET_VALUE(imageRepoTag_, imageRepoTag) };


      // imageUuid Field Functions 
      bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
      void deleteImageUuid() { this->imageUuid_ = nullptr;};
      inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
      inline GroupedContainerInstanceList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline GroupedContainerInstanceList& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline GroupedContainerInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline GroupedContainerInstanceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline GroupedContainerInstanceList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // podIp Field Functions 
      bool hasPodIp() const { return this->podIp_ != nullptr;};
      void deletePodIp() { this->podIp_ = nullptr;};
      inline string getPodIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
      inline GroupedContainerInstanceList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline GroupedContainerInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // riskInstanceCount Field Functions 
      bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
      void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
      inline int32_t getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
      inline GroupedContainerInstanceList& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline GroupedContainerInstanceList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline GroupedContainerInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // syncOpen Field Functions 
      bool hasSyncOpen() const { return this->syncOpen_ != nullptr;};
      void deleteSyncOpen() { this->syncOpen_ = nullptr;};
      inline int32_t getSyncOpen() const { DARABONBA_PTR_GET_DEFAULT(syncOpen_, 0) };
      inline GroupedContainerInstanceList& setSyncOpen(int32_t syncOpen) { DARABONBA_PTR_SET_VALUE(syncOpen_, syncOpen) };


      // syncStatus Field Functions 
      bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
      void deleteSyncStatus() { this->syncStatus_ = nullptr;};
      inline int32_t getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, 0) };
      inline GroupedContainerInstanceList& setSyncStatus(int32_t syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline GroupedContainerInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The number of alerts that are detected for the current pod, application, namespace, or cluster.
      shared_ptr<int32_t> alarmCount_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **Kubernetes**: dedicated Kubernetes cluster.
      // *   **ManagedKubernetes**: standard managed cluster (edge cluster).
      // *   **Ask**: serverless Kubernetes (ASK) cluster.
      shared_ptr<string> clusterType_ {};
      // The timestamp when the cluster was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The status of the cluster. Valid values:
      // 
      // *   **running**: The cluster is running.
      // *   **stopped**: The cluster is stopped.
      // *   **deleted**: The cluster is deleted.
      // *   **delete_failed**: The cluster failed to be deleted.
      // *   **failed**: The cluster failed to be created.
      shared_ptr<string> custerState_ {};
      // The number of baseline risks that are detected for the current pod, application, namespace, or cluster.
      shared_ptr<int32_t> hcCount_ {};
      // The IP address of the host in the container cluster.
      shared_ptr<string> hostIp_ {};
      // The container image.
      shared_ptr<string> image_ {};
      // The digest value of the image.
      shared_ptr<string> imageDigest_ {};
      // The name of the image repository.
      shared_ptr<string> imageRepoName_ {};
      // The namespace of the image repository.
      shared_ptr<string> imageRepoNamespace_ {};
      // The tag that is added to the image repository.
      shared_ptr<string> imageRepoTag_ {};
      // The UUID of the image.
      shared_ptr<string> imageUuid_ {};
      // The number of pods, applications, clusters, or namespaces.
      shared_ptr<int32_t> instanceCount_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The namespace of the cluster.
      shared_ptr<string> namespace_ {};
      // The name of the pod.
      shared_ptr<string> pod_ {};
      // The IP address of the pod.
      shared_ptr<string> podIp_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The number of at-risk instances.
      shared_ptr<int32_t> riskInstanceCount_ {};
      // The risk level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // Indicates whether risks were detected. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> riskStatus_ {};
      // Indicates whether the synchronization of cluster audit logs is enabled. Valid values:
      // 
      // *   **0**: disabled.
      // *   **1**: enabled.
      shared_ptr<int32_t> syncOpen_ {};
      // The status of the synchronization of cluster audit logs. Valid values:
      // 
      // *   **0**: The synchronization failed.
      // *   **1**: The synchronization is successful.
      shared_ptr<int32_t> syncStatus_ {};
      // The number of vulnerabilities that are detected for the current pod, application, namespace, or cluster.
      shared_ptr<int32_t> vulCount_ {};
    };

    virtual bool empty() const override { return this->groupedContainerInstanceList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // groupedContainerInstanceList Field Functions 
    bool hasGroupedContainerInstanceList() const { return this->groupedContainerInstanceList_ != nullptr;};
    void deleteGroupedContainerInstanceList() { this->groupedContainerInstanceList_ = nullptr;};
    inline const vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList> & getGroupedContainerInstanceList() const { DARABONBA_PTR_GET_CONST(groupedContainerInstanceList_, vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList>) };
    inline vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList> getGroupedContainerInstanceList() { DARABONBA_PTR_GET(groupedContainerInstanceList_, vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList>) };
    inline DescribeGroupedContainerInstancesResponseBody& setGroupedContainerInstanceList(const vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList> & groupedContainerInstanceList) { DARABONBA_PTR_SET_VALUE(groupedContainerInstanceList_, groupedContainerInstanceList) };
    inline DescribeGroupedContainerInstancesResponseBody& setGroupedContainerInstanceList(vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList> && groupedContainerInstanceList) { DARABONBA_PTR_SET_RVALUE(groupedContainerInstanceList_, groupedContainerInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedContainerInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedContainerInstancesResponseBody::PageInfo) };
    inline DescribeGroupedContainerInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedContainerInstancesResponseBody::PageInfo) };
    inline DescribeGroupedContainerInstancesResponseBody& setPageInfo(const DescribeGroupedContainerInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedContainerInstancesResponseBody& setPageInfo(DescribeGroupedContainerInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedContainerInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the container.
    shared_ptr<vector<DescribeGroupedContainerInstancesResponseBody::GroupedContainerInstanceList>> groupedContainerInstanceList_ {};
    // The pagination information.
    shared_ptr<DescribeGroupedContainerInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
