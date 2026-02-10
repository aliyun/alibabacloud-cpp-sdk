// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODY_HPP_
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
  class DescribeImageInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageInfoListResponseBody() = default ;
    DescribeImageInfoListResponseBody(const DescribeImageInfoListResponseBody &) = default ;
    DescribeImageInfoListResponseBody(DescribeImageInfoListResponseBody &&) = default ;
    DescribeImageInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfoListResponseBody() = default ;
    DescribeImageInfoListResponseBody& operator=(const DescribeImageInfoListResponseBody &) = default ;
    DescribeImageInfoListResponseBody& operator=(DescribeImageInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfos& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ImageInfos& obj) { 
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
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->alarmStatus_ == nullptr && this->digest_ == nullptr && this->endpoints_ == nullptr && this->imageCreate_ == nullptr && this->imageId_ == nullptr
        && this->imageSize_ == nullptr && this->imageUpdate_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->registryType_ == nullptr
        && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoType_ == nullptr && this->riskStatus_ == nullptr
        && this->sourceBizTag_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->tagImmutable_ == nullptr && this->uuid_ == nullptr
        && this->vulCount_ == nullptr && this->vulStatus_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline ImageInfos& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline ImageInfos& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline ImageInfos& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline string getEndpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
      inline ImageInfos& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


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
      inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
      inline ImageInfos& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


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


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


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


      // sourceBizTag Field Functions 
      bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
      void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
      inline string getSourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
      inline ImageInfos& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ImageInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageInfos& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tagImmutable Field Functions 
      bool hasTagImmutable() const { return this->tagImmutable_ != nullptr;};
      void deleteTagImmutable() { this->tagImmutable_ = nullptr;};
      inline int32_t getTagImmutable() const { DARABONBA_PTR_GET_DEFAULT(tagImmutable_, 0) };
      inline ImageInfos& setTagImmutable(int32_t tagImmutable) { DARABONBA_PTR_SET_VALUE(tagImmutable_, tagImmutable) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline ImageInfos& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // vulStatus Field Functions 
      bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
      void deleteVulStatus() { this->vulStatus_ = nullptr;};
      inline string getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
      inline ImageInfos& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


    protected:
      // The number of alerts that are generated on the current pod, application, namespace, or cluster.
      shared_ptr<int32_t> alarmCount_ {};
      // Indicates whether alerts are generated on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The digest value of the image.
      shared_ptr<string> digest_ {};
      // The endpoint of Container Registry.
      shared_ptr<string> endpoints_ {};
      // The time when the image was created.
      shared_ptr<int64_t> imageCreate_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The size of the image.
      shared_ptr<int64_t> imageSize_ {};
      // The time when the image was updated.
      shared_ptr<int64_t> imageUpdate_ {};
      // The ID of the image instance.
      shared_ptr<string> instanceId_ {};
      // The region ID of the image instance.
      shared_ptr<string> regionId_ {};
      // The type of the registration.
      shared_ptr<string> registryType_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The type of the image repository. Valid values:
      // 
      // *   `PUBLIC`
      // *   `PRIVATE`
      shared_ptr<string> repoType_ {};
      // Indicates whether the image is at risk. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The usage label of the image.
      shared_ptr<string> sourceBizTag_ {};
      // The status of the image.
      shared_ptr<string> status_ {};
      // The tag that is added to the image.
      shared_ptr<string> tag_ {};
      // The tag immutability.
      shared_ptr<int32_t> tagImmutable_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The total number of vulnerabilities in your assets.
      shared_ptr<int32_t> vulCount_ {};
      // Indicates whether vulnerabilities are detected on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> vulStatus_ {};
    };

    virtual bool empty() const override { return this->imageInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageInfoListResponseBody::ImageInfos> & getImageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageInfoListResponseBody::ImageInfos>) };
    inline vector<DescribeImageInfoListResponseBody::ImageInfos> getImageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageInfoListResponseBody::ImageInfos>) };
    inline DescribeImageInfoListResponseBody& setImageInfos(const vector<DescribeImageInfoListResponseBody::ImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageInfoListResponseBody& setImageInfos(vector<DescribeImageInfoListResponseBody::ImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about images.
    shared_ptr<vector<DescribeImageInfoListResponseBody::ImageInfos>> imageInfos_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
