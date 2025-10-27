// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODYIMAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODYIMAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListWithBaselineNameResponseBodyImageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListWithBaselineNameResponseBodyImageInfos& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeImageListWithBaselineNameResponseBodyImageInfos& obj) { 
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
    DescribeImageListWithBaselineNameResponseBodyImageInfos() = default ;
    DescribeImageListWithBaselineNameResponseBodyImageInfos(const DescribeImageListWithBaselineNameResponseBodyImageInfos &) = default ;
    DescribeImageListWithBaselineNameResponseBodyImageInfos(DescribeImageListWithBaselineNameResponseBodyImageInfos &&) = default ;
    DescribeImageListWithBaselineNameResponseBodyImageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListWithBaselineNameResponseBodyImageInfos() = default ;
    DescribeImageListWithBaselineNameResponseBodyImageInfos& operator=(const DescribeImageListWithBaselineNameResponseBodyImageInfos &) = default ;
    DescribeImageListWithBaselineNameResponseBodyImageInfos& operator=(DescribeImageListWithBaselineNameResponseBodyImageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->containerId_ == nullptr && return this->digest_ == nullptr && return this->firstScanTime_ == nullptr && return this->highRiskImage_ == nullptr
        && return this->image_ == nullptr && return this->imageCreate_ == nullptr && return this->imageId_ == nullptr && return this->imageSize_ == nullptr && return this->imageUpdate_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->lastScanTime_ == nullptr
        && return this->lowRiskImage_ == nullptr && return this->middleRiskImage_ == nullptr && return this->namespace_ == nullptr && return this->noRiskImage_ == nullptr && return this->pod_ == nullptr
        && return this->regionId_ == nullptr && return this->repoId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoType_ == nullptr
        && return this->riskStatus_ == nullptr && return this->tag_ == nullptr && return this->targetId_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr
        && return this->totalItemCount_ == nullptr && return this->uuid_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // firstScanTime Field Functions 
    bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
    void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
    inline int64_t firstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


    // highRiskImage Field Functions 
    bool hasHighRiskImage() const { return this->highRiskImage_ != nullptr;};
    void deleteHighRiskImage() { this->highRiskImage_ = nullptr;};
    inline int32_t highRiskImage() const { DARABONBA_PTR_GET_DEFAULT(highRiskImage_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setHighRiskImage(int32_t highRiskImage) { DARABONBA_PTR_SET_VALUE(highRiskImage_, highRiskImage) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline int64_t imageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, 0L) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setImageCreate(int64_t imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int32_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setImageSize(int32_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline int64_t imageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, 0L) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setImageUpdate(int64_t imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // lowRiskImage Field Functions 
    bool hasLowRiskImage() const { return this->lowRiskImage_ != nullptr;};
    void deleteLowRiskImage() { this->lowRiskImage_ = nullptr;};
    inline int32_t lowRiskImage() const { DARABONBA_PTR_GET_DEFAULT(lowRiskImage_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setLowRiskImage(int32_t lowRiskImage) { DARABONBA_PTR_SET_VALUE(lowRiskImage_, lowRiskImage) };


    // middleRiskImage Field Functions 
    bool hasMiddleRiskImage() const { return this->middleRiskImage_ != nullptr;};
    void deleteMiddleRiskImage() { this->middleRiskImage_ = nullptr;};
    inline int32_t middleRiskImage() const { DARABONBA_PTR_GET_DEFAULT(middleRiskImage_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setMiddleRiskImage(int32_t middleRiskImage) { DARABONBA_PTR_SET_VALUE(middleRiskImage_, middleRiskImage) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noRiskImage Field Functions 
    bool hasNoRiskImage() const { return this->noRiskImage_ != nullptr;};
    void deleteNoRiskImage() { this->noRiskImage_ = nullptr;};
    inline int32_t noRiskImage() const { DARABONBA_PTR_GET_DEFAULT(noRiskImage_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setNoRiskImage(int32_t noRiskImage) { DARABONBA_PTR_SET_VALUE(noRiskImage_, noRiskImage) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // totalItemCount Field Functions 
    bool hasTotalItemCount() const { return this->totalItemCount_ != nullptr;};
    void deleteTotalItemCount() { this->totalItemCount_ = nullptr;};
    inline int32_t totalItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalItemCount_, 0) };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setTotalItemCount(int32_t totalItemCount) { DARABONBA_PTR_SET_VALUE(totalItemCount_, totalItemCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeImageListWithBaselineNameResponseBodyImageInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The SHA-256 value of the image digest.
    std::shared_ptr<string> digest_ = nullptr;
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTime_ = nullptr;
    // The number of images on which **high** baseline risks are detected.
    std::shared_ptr<int32_t> highRiskImage_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The timestamp when the image was created. Unit: milliseconds.
    std::shared_ptr<int64_t> imageCreate_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image.
    std::shared_ptr<int32_t> imageSize_ = nullptr;
    // The timestamp when the image was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> imageUpdate_ = nullptr;
    // The ID of the image instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp when the last baseline check was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The number of images on which **low** baseline risks are detected.
    std::shared_ptr<int32_t> lowRiskImage_ = nullptr;
    // The number of images on which **medium** baseline risks are detected.
    std::shared_ptr<int32_t> middleRiskImage_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of images that do not have baseline risks.
    std::shared_ptr<int32_t> noRiskImage_ = nullptr;
    // The pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The region ID of the image instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The type of the image repository.
    std::shared_ptr<string> repoType_ = nullptr;
    // Indicates whether the image is at risk. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The ID of the asset on which the baseline check is performed.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset on which the baseline check is performed.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset on which the baseline check is performed. Valid values:
    // 
    // *   ECS_IMAGE
    // *   ECS_SNAPSHOT
    std::shared_ptr<string> targetType_ = nullptr;
    // The total number of risk items that are detected on the image by using the baseline.
    std::shared_ptr<int32_t> totalItemCount_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
