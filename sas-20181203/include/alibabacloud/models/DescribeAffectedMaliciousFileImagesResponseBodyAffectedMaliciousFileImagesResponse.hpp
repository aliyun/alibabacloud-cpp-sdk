// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODYAFFECTEDMALICIOUSFILEIMAGESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESPONSEBODYAFFECTEDMALICIOUSFILEIMAGESRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& obj) { 
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
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse() = default ;
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse(const DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse(DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse &&) = default ;
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse() = default ;
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& operator=(const DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse &) = default ;
    DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& operator=(DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->containerId_ != nullptr && this->digest_ != nullptr && this->downloadUrl_ != nullptr && this->filePath_ != nullptr
        && this->firstScanTimestamp_ != nullptr && this->highLight_ != nullptr && this->id_ != nullptr && this->image_ != nullptr && this->imageUuid_ != nullptr
        && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->latestScanTimestamp_ != nullptr && this->latestVerifyTimestamp_ != nullptr
        && this->layer_ != nullptr && this->level_ != nullptr && this->maliciousMd5_ != nullptr && this->namespace_ != nullptr && this->pod_ != nullptr
        && this->repoId_ != nullptr && this->repoInstanceId_ != nullptr && this->repoName_ != nullptr && this->repoRegionId_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr && this->targetId_ != nullptr && this->targetName_ != nullptr && this->targetType_ != nullptr && this->uuid_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstScanTimestamp Field Functions 
    bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
    void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
    inline int64_t firstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


    // highLight Field Functions 
    bool hasHighLight() const { return this->highLight_ != nullptr;};
    void deleteHighLight() { this->highLight_ = nullptr;};
    inline string highLight() const { DARABONBA_PTR_GET_DEFAULT(highLight_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setHighLight(string highLight) { DARABONBA_PTR_SET_VALUE(highLight_, highLight) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // latestScanTimestamp Field Functions 
    bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
    void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
    inline int64_t latestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


    // latestVerifyTimestamp Field Functions 
    bool hasLatestVerifyTimestamp() const { return this->latestVerifyTimestamp_ != nullptr;};
    void deleteLatestVerifyTimestamp() { this->latestVerifyTimestamp_ = nullptr;};
    inline int64_t latestVerifyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestVerifyTimestamp_, 0L) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setLatestVerifyTimestamp(int64_t latestVerifyTimestamp) { DARABONBA_PTR_SET_VALUE(latestVerifyTimestamp_, latestVerifyTimestamp) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAffectedMaliciousFileImagesResponseBodyAffectedMaliciousFileImagesResponse& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The image digest.
    std::shared_ptr<string> digest_ = nullptr;
    // The URL to download the malicious image sample.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The path to the image file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The timestamp of the first scan.
    std::shared_ptr<int64_t> firstScanTimestamp_ = nullptr;
    // The text that is highlighted.
    std::shared_ptr<string> highLight_ = nullptr;
    // The ID of alert event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp of the last scan.
    std::shared_ptr<int64_t> latestScanTimestamp_ = nullptr;
    // The timestamp of the last verification.
    std::shared_ptr<int64_t> latestVerifyTimestamp_ = nullptr;
    // The image layer.
    std::shared_ptr<string> layer_ = nullptr;
    // The severity of the malicious image sample. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The MD5 hash value of the malicious image sample.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the container image.
    std::shared_ptr<string> repoInstanceId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The region ID of the image repository.
    std::shared_ptr<string> repoRegionId_ = nullptr;
    // The handling status of the malicious image sample. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: verifying
    // *   **3**: added to the whitelist
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The ID of the task object.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the task object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The object type. Valid value:
    // 
    // *   **ECS_IMAGE**
    // *   **ECS_SNAPSHOT**
    std::shared_ptr<string> targetType_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
