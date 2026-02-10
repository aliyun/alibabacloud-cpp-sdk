// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODY_HPP_
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
  class DescribeImageListWithBaselineNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListWithBaselineNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListWithBaselineNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageListWithBaselineNameResponseBody() = default ;
    DescribeImageListWithBaselineNameResponseBody(const DescribeImageListWithBaselineNameResponseBody &) = default ;
    DescribeImageListWithBaselineNameResponseBody(DescribeImageListWithBaselineNameResponseBody &&) = default ;
    DescribeImageListWithBaselineNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListWithBaselineNameResponseBody() = default ;
    DescribeImageListWithBaselineNameResponseBody& operator=(const DescribeImageListWithBaselineNameResponseBody &) = default ;
    DescribeImageListWithBaselineNameResponseBody& operator=(DescribeImageListWithBaselineNameResponseBody &&) = default ;
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
      // The number of the images returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page. Default value: **1**.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of images on which baseline risks are detected.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_TO_JSON(HighRiskImage, highRiskImage_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(LowRiskImage, lowRiskImage_);
        DARABONBA_PTR_TO_JSON(MiddleRiskImage, middleRiskImage_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NoRiskImage, noRiskImage_);
        DARABONBA_PTR_TO_JSON(Pod, pod_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RepoType, repoType_);
        DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TotalItemCount, totalItemCount_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ImageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_FROM_JSON(HighRiskImage, highRiskImage_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(LowRiskImage, lowRiskImage_);
        DARABONBA_PTR_FROM_JSON(MiddleRiskImage, middleRiskImage_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NoRiskImage, noRiskImage_);
        DARABONBA_PTR_FROM_JSON(Pod, pod_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
        DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TotalItemCount, totalItemCount_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ImageInfos() = default ;
      ImageInfos(const ImageInfos &) = default ;
      ImageInfos(ImageInfos &&) = default ;
      ImageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageInfos() = default ;
      ImageInfos& operator=(const ImageInfos &) = default ;
      ImageInfos& operator=(ImageInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->containerId_ == nullptr && this->digest_ == nullptr && this->firstScanTime_ == nullptr && this->highRiskImage_ == nullptr
        && this->image_ == nullptr && this->imageCreate_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->imageUpdate_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lastScanTime_ == nullptr
        && this->lowRiskImage_ == nullptr && this->middleRiskImage_ == nullptr && this->namespace_ == nullptr && this->noRiskImage_ == nullptr && this->pod_ == nullptr
        && this->regionId_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoType_ == nullptr
        && this->riskStatus_ == nullptr && this->tag_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr
        && this->totalItemCount_ == nullptr && this->uuid_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ImageInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ImageInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline ImageInfos& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline ImageInfos& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline ImageInfos& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // highRiskImage Field Functions 
      bool hasHighRiskImage() const { return this->highRiskImage_ != nullptr;};
      void deleteHighRiskImage() { this->highRiskImage_ = nullptr;};
      inline int32_t getHighRiskImage() const { DARABONBA_PTR_GET_DEFAULT(highRiskImage_, 0) };
      inline ImageInfos& setHighRiskImage(int32_t highRiskImage) { DARABONBA_PTR_SET_VALUE(highRiskImage_, highRiskImage) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ImageInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageCreate Field Functions 
      bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
      void deleteImageCreate() { this->imageCreate_ = nullptr;};
      inline int64_t getImageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, 0L) };
      inline ImageInfos& setImageCreate(int64_t imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageInfos& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageSize Field Functions 
      bool hasImageSize() const { return this->imageSize_ != nullptr;};
      void deleteImageSize() { this->imageSize_ = nullptr;};
      inline int32_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0) };
      inline ImageInfos& setImageSize(int32_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


      // imageUpdate Field Functions 
      bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
      void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
      inline int64_t getImageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, 0L) };
      inline ImageInfos& setImageUpdate(int64_t imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ImageInfos& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline ImageInfos& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline ImageInfos& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline ImageInfos& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // lowRiskImage Field Functions 
      bool hasLowRiskImage() const { return this->lowRiskImage_ != nullptr;};
      void deleteLowRiskImage() { this->lowRiskImage_ = nullptr;};
      inline int32_t getLowRiskImage() const { DARABONBA_PTR_GET_DEFAULT(lowRiskImage_, 0) };
      inline ImageInfos& setLowRiskImage(int32_t lowRiskImage) { DARABONBA_PTR_SET_VALUE(lowRiskImage_, lowRiskImage) };


      // middleRiskImage Field Functions 
      bool hasMiddleRiskImage() const { return this->middleRiskImage_ != nullptr;};
      void deleteMiddleRiskImage() { this->middleRiskImage_ = nullptr;};
      inline int32_t getMiddleRiskImage() const { DARABONBA_PTR_GET_DEFAULT(middleRiskImage_, 0) };
      inline ImageInfos& setMiddleRiskImage(int32_t middleRiskImage) { DARABONBA_PTR_SET_VALUE(middleRiskImage_, middleRiskImage) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ImageInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // noRiskImage Field Functions 
      bool hasNoRiskImage() const { return this->noRiskImage_ != nullptr;};
      void deleteNoRiskImage() { this->noRiskImage_ = nullptr;};
      inline int32_t getNoRiskImage() const { DARABONBA_PTR_GET_DEFAULT(noRiskImage_, 0) };
      inline ImageInfos& setNoRiskImage(int32_t noRiskImage) { DARABONBA_PTR_SET_VALUE(noRiskImage_, noRiskImage) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline ImageInfos& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ImageInfos& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageInfos& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageInfos& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline ImageInfos& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline ImageInfos& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageInfos& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline ImageInfos& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline ImageInfos& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ImageInfos& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // totalItemCount Field Functions 
      bool hasTotalItemCount() const { return this->totalItemCount_ != nullptr;};
      void deleteTotalItemCount() { this->totalItemCount_ = nullptr;};
      inline int32_t getTotalItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalItemCount_, 0) };
      inline ImageInfos& setTotalItemCount(int32_t totalItemCount) { DARABONBA_PTR_SET_VALUE(totalItemCount_, totalItemCount) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The SHA-256 value of the image digest.
      shared_ptr<string> digest_ {};
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The number of images on which **high** baseline risks are detected.
      shared_ptr<int32_t> highRiskImage_ {};
      // The name of the image.
      shared_ptr<string> image_ {};
      // The timestamp when the image was created. Unit: milliseconds.
      shared_ptr<int64_t> imageCreate_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The size of the image.
      shared_ptr<int32_t> imageSize_ {};
      // The timestamp when the image was updated. Unit: milliseconds.
      shared_ptr<int64_t> imageUpdate_ {};
      // The ID of the image instance.
      shared_ptr<string> instanceId_ {};
      // The instance name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The timestamp when the last baseline check was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The number of images on which **low** baseline risks are detected.
      shared_ptr<int32_t> lowRiskImage_ {};
      // The number of images on which **medium** baseline risks are detected.
      shared_ptr<int32_t> middleRiskImage_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The number of images that do not have baseline risks.
      shared_ptr<int32_t> noRiskImage_ {};
      // The pod.
      shared_ptr<string> pod_ {};
      // The region ID of the image instance.
      shared_ptr<string> regionId_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The type of the image repository.
      shared_ptr<string> repoType_ {};
      // Indicates whether the image is at risk. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The version of the image.
      shared_ptr<string> tag_ {};
      // The ID of the asset on which the baseline check is performed.
      shared_ptr<string> targetId_ {};
      // The name of the asset on which the baseline check is performed.
      shared_ptr<string> targetName_ {};
      // The type of the asset on which the baseline check is performed. Valid values:
      // 
      // *   ECS_IMAGE
      // *   ECS_SNAPSHOT
      shared_ptr<string> targetType_ {};
      // The total number of risk items that are detected on the image by using the baseline.
      shared_ptr<int32_t> totalItemCount_ {};
      // The UUID of the image.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->imageInfos_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos> & getImageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos>) };
    inline vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos> getImageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos>) };
    inline DescribeImageListWithBaselineNameResponseBody& setImageInfos(const vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageListWithBaselineNameResponseBody& setImageInfos(vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageListWithBaselineNameResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageListWithBaselineNameResponseBody::PageInfo) };
    inline DescribeImageListWithBaselineNameResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageListWithBaselineNameResponseBody::PageInfo) };
    inline DescribeImageListWithBaselineNameResponseBody& setPageInfo(const DescribeImageListWithBaselineNameResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageListWithBaselineNameResponseBody& setPageInfo(DescribeImageListWithBaselineNameResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListWithBaselineNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    shared_ptr<vector<DescribeImageListWithBaselineNameResponseBody::ImageInfos>> imageInfos_ {};
    // The pagination information.
    shared_ptr<DescribeImageListWithBaselineNameResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
