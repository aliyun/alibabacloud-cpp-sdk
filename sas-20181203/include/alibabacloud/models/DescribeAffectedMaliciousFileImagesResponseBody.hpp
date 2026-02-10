// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODY_HPP_
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
  class DescribeAffectedMaliciousFileImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedMaliciousFileImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedMaliciousFileImagesResponse, affectedMaliciousFileImagesResponse_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedMaliciousFileImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedMaliciousFileImagesResponse, affectedMaliciousFileImagesResponse_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAffectedMaliciousFileImagesResponseBody() = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(const DescribeAffectedMaliciousFileImagesResponseBody &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(DescribeAffectedMaliciousFileImagesResponseBody &&) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedMaliciousFileImagesResponseBody() = default ;
    DescribeAffectedMaliciousFileImagesResponseBody& operator=(const DescribeAffectedMaliciousFileImagesResponseBody &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBody& operator=(DescribeAffectedMaliciousFileImagesResponseBody &&) = default ;
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
      // The number of images that have malicious image samples returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page. Pages start from page **1**. Default value: **1**.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of images that have malicious image samples.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AffectedMaliciousFileImagesResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AffectedMaliciousFileImagesResponse& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_TO_JSON(HighLight, highLight_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_TO_JSON(LatestVerifyTimestamp, latestVerifyTimestamp_);
        DARABONBA_PTR_TO_JSON(Layer, layer_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Pod, pod_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AffectedMaliciousFileImagesResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(HighLight, highLight_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(LatestVerifyTimestamp, latestVerifyTimestamp_);
        DARABONBA_PTR_FROM_JSON(Layer, layer_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Pod, pod_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AffectedMaliciousFileImagesResponse() = default ;
      AffectedMaliciousFileImagesResponse(const AffectedMaliciousFileImagesResponse &) = default ;
      AffectedMaliciousFileImagesResponse(AffectedMaliciousFileImagesResponse &&) = default ;
      AffectedMaliciousFileImagesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AffectedMaliciousFileImagesResponse() = default ;
      AffectedMaliciousFileImagesResponse& operator=(const AffectedMaliciousFileImagesResponse &) = default ;
      AffectedMaliciousFileImagesResponse& operator=(AffectedMaliciousFileImagesResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->containerId_ == nullptr && this->digest_ == nullptr && this->downloadUrl_ == nullptr && this->filePath_ == nullptr
        && this->firstScanTimestamp_ == nullptr && this->highLight_ == nullptr && this->id_ == nullptr && this->image_ == nullptr && this->imageUuid_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->latestScanTimestamp_ == nullptr && this->latestVerifyTimestamp_ == nullptr
        && this->layer_ == nullptr && this->level_ == nullptr && this->maliciousMd5_ == nullptr && this->namespace_ == nullptr && this->pod_ == nullptr
        && this->repoId_ == nullptr && this->repoInstanceId_ == nullptr && this->repoName_ == nullptr && this->repoRegionId_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr && this->uuid_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline AffectedMaliciousFileImagesResponse& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline AffectedMaliciousFileImagesResponse& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline AffectedMaliciousFileImagesResponse& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline AffectedMaliciousFileImagesResponse& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline AffectedMaliciousFileImagesResponse& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline AffectedMaliciousFileImagesResponse& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstScanTimestamp Field Functions 
      bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
      void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
      inline int64_t getFirstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
      inline AffectedMaliciousFileImagesResponse& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


      // highLight Field Functions 
      bool hasHighLight() const { return this->highLight_ != nullptr;};
      void deleteHighLight() { this->highLight_ = nullptr;};
      inline string getHighLight() const { DARABONBA_PTR_GET_DEFAULT(highLight_, "") };
      inline AffectedMaliciousFileImagesResponse& setHighLight(string highLight) { DARABONBA_PTR_SET_VALUE(highLight_, highLight) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AffectedMaliciousFileImagesResponse& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline AffectedMaliciousFileImagesResponse& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageUuid Field Functions 
      bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
      void deleteImageUuid() { this->imageUuid_ = nullptr;};
      inline string getImageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
      inline AffectedMaliciousFileImagesResponse& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AffectedMaliciousFileImagesResponse& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline AffectedMaliciousFileImagesResponse& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline AffectedMaliciousFileImagesResponse& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // latestScanTimestamp Field Functions 
      bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
      void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
      inline int64_t getLatestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
      inline AffectedMaliciousFileImagesResponse& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


      // latestVerifyTimestamp Field Functions 
      bool hasLatestVerifyTimestamp() const { return this->latestVerifyTimestamp_ != nullptr;};
      void deleteLatestVerifyTimestamp() { this->latestVerifyTimestamp_ = nullptr;};
      inline int64_t getLatestVerifyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestVerifyTimestamp_, 0L) };
      inline AffectedMaliciousFileImagesResponse& setLatestVerifyTimestamp(int64_t latestVerifyTimestamp) { DARABONBA_PTR_SET_VALUE(latestVerifyTimestamp_, latestVerifyTimestamp) };


      // layer Field Functions 
      bool hasLayer() const { return this->layer_ != nullptr;};
      void deleteLayer() { this->layer_ = nullptr;};
      inline string getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
      inline AffectedMaliciousFileImagesResponse& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline AffectedMaliciousFileImagesResponse& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maliciousMd5 Field Functions 
      bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
      void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
      inline string getMaliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
      inline AffectedMaliciousFileImagesResponse& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline AffectedMaliciousFileImagesResponse& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline AffectedMaliciousFileImagesResponse& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline AffectedMaliciousFileImagesResponse& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoInstanceId Field Functions 
      bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
      void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
      inline string getRepoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
      inline AffectedMaliciousFileImagesResponse& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline AffectedMaliciousFileImagesResponse& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoRegionId Field Functions 
      bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
      void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
      inline string getRepoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
      inline AffectedMaliciousFileImagesResponse& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AffectedMaliciousFileImagesResponse& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline AffectedMaliciousFileImagesResponse& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline AffectedMaliciousFileImagesResponse& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline AffectedMaliciousFileImagesResponse& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline AffectedMaliciousFileImagesResponse& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AffectedMaliciousFileImagesResponse& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The image digest.
      shared_ptr<string> digest_ {};
      // The URL to download the malicious image sample.
      shared_ptr<string> downloadUrl_ {};
      // The path to the image file.
      shared_ptr<string> filePath_ {};
      // The timestamp of the first scan.
      shared_ptr<int64_t> firstScanTimestamp_ {};
      // The text that is highlighted.
      shared_ptr<string> highLight_ {};
      // The ID of alert event.
      shared_ptr<int64_t> id_ {};
      // The name of the image.
      shared_ptr<string> image_ {};
      // The UUID of the image.
      shared_ptr<string> imageUuid_ {};
      // The name of the ECS instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The timestamp of the last scan.
      shared_ptr<int64_t> latestScanTimestamp_ {};
      // The timestamp of the last verification.
      shared_ptr<int64_t> latestVerifyTimestamp_ {};
      // The image layer.
      shared_ptr<string> layer_ {};
      // The severity of the malicious image sample. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
      // The MD5 hash value of the malicious image sample.
      shared_ptr<string> maliciousMd5_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> namespace_ {};
      // The pod.
      shared_ptr<string> pod_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The ID of the container image.
      shared_ptr<string> repoInstanceId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The region ID of the image repository.
      shared_ptr<string> repoRegionId_ {};
      // The handling status of the malicious image sample. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: handled
      // *   **2**: verifying
      // *   **3**: added to the whitelist
      shared_ptr<int32_t> status_ {};
      // The tag that is added to the image.
      shared_ptr<string> tag_ {};
      // The ID of the task object.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The object type. Valid value:
      // 
      // *   **ECS_IMAGE**
      // *   **ECS_SNAPSHOT**
      shared_ptr<string> targetType_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->affectedMaliciousFileImagesResponse_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // affectedMaliciousFileImagesResponse Field Functions 
    bool hasAffectedMaliciousFileImagesResponse() const { return this->affectedMaliciousFileImagesResponse_ != nullptr;};
    void deleteAffectedMaliciousFileImagesResponse() { this->affectedMaliciousFileImagesResponse_ = nullptr;};
    inline const vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse> & getAffectedMaliciousFileImagesResponse() const { DARABONBA_PTR_GET_CONST(affectedMaliciousFileImagesResponse_, vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse>) };
    inline vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse> getAffectedMaliciousFileImagesResponse() { DARABONBA_PTR_GET(affectedMaliciousFileImagesResponse_, vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse>) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setAffectedMaliciousFileImagesResponse(const vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse> & affectedMaliciousFileImagesResponse) { DARABONBA_PTR_SET_VALUE(affectedMaliciousFileImagesResponse_, affectedMaliciousFileImagesResponse) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setAffectedMaliciousFileImagesResponse(vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse> && affectedMaliciousFileImagesResponse) { DARABONBA_PTR_SET_RVALUE(affectedMaliciousFileImagesResponse_, affectedMaliciousFileImagesResponse) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAffectedMaliciousFileImagesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAffectedMaliciousFileImagesResponseBody::PageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAffectedMaliciousFileImagesResponseBody::PageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setPageInfo(const DescribeAffectedMaliciousFileImagesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setPageInfo(DescribeAffectedMaliciousFileImagesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the images that have malicious image samples.
    shared_ptr<vector<DescribeAffectedMaliciousFileImagesResponseBody::AffectedMaliciousFileImagesResponse>> affectedMaliciousFileImagesResponse_ {};
    // The pagination information.
    shared_ptr<DescribeAffectedMaliciousFileImagesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
