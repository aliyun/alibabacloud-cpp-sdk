// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODYIMAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODYIMAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInfoListResponseBodyImageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfoListResponseBodyImageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagImmutable, tagImmutable_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfoListResponseBodyImageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagImmutable, tagImmutable_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeImageInfoListResponseBodyImageInfos() = default ;
    DescribeImageInfoListResponseBodyImageInfos(const DescribeImageInfoListResponseBodyImageInfos &) = default ;
    DescribeImageInfoListResponseBodyImageInfos(DescribeImageInfoListResponseBodyImageInfos &&) = default ;
    DescribeImageInfoListResponseBodyImageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfoListResponseBodyImageInfos() = default ;
    DescribeImageInfoListResponseBodyImageInfos& operator=(const DescribeImageInfoListResponseBodyImageInfos &) = default ;
    DescribeImageInfoListResponseBodyImageInfos& operator=(DescribeImageInfoListResponseBodyImageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->alarmStatus_ == nullptr && return this->digest_ == nullptr && return this->endpoints_ == nullptr && return this->imageCreate_ == nullptr && return this->imageId_ == nullptr
        && return this->imageSize_ == nullptr && return this->imageUpdate_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->registryType_ == nullptr
        && return this->repoId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoType_ == nullptr && return this->riskStatus_ == nullptr
        && return this->sourceBizTag_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr && return this->tagImmutable_ == nullptr && return this->uuid_ == nullptr
        && return this->vulCount_ == nullptr && return this->vulStatus_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeImageInfoListResponseBodyImageInfos& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline string endpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline int64_t imageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, 0L) };
    inline DescribeImageInfoListResponseBodyImageInfos& setImageCreate(int64_t imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int64_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
    inline DescribeImageInfoListResponseBodyImageInfos& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline int64_t imageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, 0L) };
    inline DescribeImageInfoListResponseBodyImageInfos& setImageUpdate(int64_t imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // sourceBizTag Field Functions 
    bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
    void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
    inline string sourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagImmutable Field Functions 
    bool hasTagImmutable() const { return this->tagImmutable_ != nullptr;};
    void deleteTagImmutable() { this->tagImmutable_ = nullptr;};
    inline int32_t tagImmutable() const { DARABONBA_PTR_GET_DEFAULT(tagImmutable_, 0) };
    inline DescribeImageInfoListResponseBodyImageInfos& setTagImmutable(int32_t tagImmutable) { DARABONBA_PTR_SET_VALUE(tagImmutable_, tagImmutable) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeImageInfoListResponseBodyImageInfos& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline string vulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
    inline DescribeImageInfoListResponseBodyImageInfos& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // The number of alerts that are generated on the current pod, application, namespace, or cluster.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // Indicates whether alerts are generated on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // The digest value of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The endpoint of Container Registry.
    std::shared_ptr<string> endpoints_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<int64_t> imageCreate_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image.
    std::shared_ptr<int64_t> imageSize_ = nullptr;
    // The time when the image was updated.
    std::shared_ptr<int64_t> imageUpdate_ = nullptr;
    // The ID of the image instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the image instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the registration.
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   `PUBLIC`
    // *   `PRIVATE`
    std::shared_ptr<string> repoType_ = nullptr;
    // Indicates whether the image is at risk. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The usage label of the image.
    std::shared_ptr<string> sourceBizTag_ = nullptr;
    // The status of the image.
    std::shared_ptr<string> status_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The tag immutability.
    std::shared_ptr<int32_t> tagImmutable_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The total number of vulnerabilities in your assets.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
    // Indicates whether vulnerabilities are detected on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> vulStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
