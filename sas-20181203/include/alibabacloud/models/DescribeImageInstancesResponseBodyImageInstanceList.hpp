// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODYIMAGEINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODYIMAGEINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInstancesResponseBodyImageInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstancesResponseBodyImageInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(Deployed, deployed_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
      DARABONBA_PTR_TO_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(ScaProgress, scaProgress_);
      DARABONBA_PTR_TO_JSON(ScaResult, scaResult_);
      DARABONBA_PTR_TO_JSON(ScaStatus, scaStatus_);
      DARABONBA_PTR_TO_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstancesResponseBodyImageInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(Deployed, deployed_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
      DARABONBA_PTR_FROM_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(ScaProgress, scaProgress_);
      DARABONBA_PTR_FROM_JSON(ScaResult, scaResult_);
      DARABONBA_PTR_FROM_JSON(ScaStatus, scaStatus_);
      DARABONBA_PTR_FROM_JSON(SourceBizTag, sourceBizTag_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeImageInstancesResponseBodyImageInstanceList() = default ;
    DescribeImageInstancesResponseBodyImageInstanceList(const DescribeImageInstancesResponseBodyImageInstanceList &) = default ;
    DescribeImageInstancesResponseBodyImageInstanceList(DescribeImageInstancesResponseBodyImageInstanceList &&) = default ;
    DescribeImageInstancesResponseBodyImageInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstancesResponseBodyImageInstanceList() = default ;
    DescribeImageInstancesResponseBodyImageInstanceList& operator=(const DescribeImageInstancesResponseBodyImageInstanceList &) = default ;
    DescribeImageInstancesResponseBodyImageInstanceList& operator=(DescribeImageInstancesResponseBodyImageInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && return this->alarmStatus_ == nullptr && return this->deployed_ == nullptr && return this->digest_ == nullptr && return this->endpoints_ == nullptr && return this->hcCount_ == nullptr
        && return this->hcStatus_ == nullptr && return this->imageCreate_ == nullptr && return this->imageId_ == nullptr && return this->imageSize_ == nullptr && return this->imageUpdate_ == nullptr
        && return this->instanceId_ == nullptr && return this->lastScanTime_ == nullptr && return this->regionId_ == nullptr && return this->registryType_ == nullptr && return this->repoId_ == nullptr
        && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoType_ == nullptr && return this->riskStatus_ == nullptr && return this->scaProgress_ == nullptr
        && return this->scaResult_ == nullptr && return this->scaStatus_ == nullptr && return this->sourceBizTag_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr
        && return this->uuid_ == nullptr && return this->vulCount_ == nullptr && return this->vulStatus_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t alarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // deployed Field Functions 
    bool hasDeployed() const { return this->deployed_ != nullptr;};
    void deleteDeployed() { this->deployed_ = nullptr;};
    inline int32_t deployed() const { DARABONBA_PTR_GET_DEFAULT(deployed_, 0) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setDeployed(int32_t deployed) { DARABONBA_PTR_SET_VALUE(deployed_, deployed) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline string endpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


    // hcCount Field Functions 
    bool hasHcCount() const { return this->hcCount_ != nullptr;};
    void deleteHcCount() { this->hcCount_ = nullptr;};
    inline int32_t hcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


    // hcStatus Field Functions 
    bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
    void deleteHcStatus() { this->hcStatus_ = nullptr;};
    inline string hcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline string imageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setImageCreate(string imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline string imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline string imageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setImageUpdate(string imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // scaProgress Field Functions 
    bool hasScaProgress() const { return this->scaProgress_ != nullptr;};
    void deleteScaProgress() { this->scaProgress_ = nullptr;};
    inline int32_t scaProgress() const { DARABONBA_PTR_GET_DEFAULT(scaProgress_, 0) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setScaProgress(int32_t scaProgress) { DARABONBA_PTR_SET_VALUE(scaProgress_, scaProgress) };


    // scaResult Field Functions 
    bool hasScaResult() const { return this->scaResult_ != nullptr;};
    void deleteScaResult() { this->scaResult_ = nullptr;};
    inline string scaResult() const { DARABONBA_PTR_GET_DEFAULT(scaResult_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setScaResult(string scaResult) { DARABONBA_PTR_SET_VALUE(scaResult_, scaResult) };


    // scaStatus Field Functions 
    bool hasScaStatus() const { return this->scaStatus_ != nullptr;};
    void deleteScaStatus() { this->scaStatus_ = nullptr;};
    inline string scaStatus() const { DARABONBA_PTR_GET_DEFAULT(scaStatus_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setScaStatus(string scaStatus) { DARABONBA_PTR_SET_VALUE(scaStatus_, scaStatus) };


    // sourceBizTag Field Functions 
    bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
    void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
    inline string sourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline string vulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
    inline DescribeImageInstancesResponseBodyImageInstanceList& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // The number of alerts that are generated for the image.
    std::shared_ptr<int32_t> alarmCount_ = nullptr;
    // Indicates whether alerts are generated for the image. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // Indicates whether the image was deployed. Valid values:
    // 
    // *   **0**: The image was not deployed.
    // *   **1**: The image was deployed.
    std::shared_ptr<int32_t> deployed_ = nullptr;
    // The digest value of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The address of the image.
    std::shared_ptr<string> endpoints_ = nullptr;
    // The number of baseline risks.
    std::shared_ptr<int32_t> hcCount_ = nullptr;
    // Indicates whether baseline risks exist. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> hcStatus_ = nullptr;
    // The timestamp generated when the image was created. Unit: milliseconds.
    std::shared_ptr<string> imageCreate_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image. Unit: MB.
    std::shared_ptr<string> imageSize_ = nullptr;
    // The timestamp generated when the image was updated. Unit: milliseconds.
    std::shared_ptr<string> imageUpdate_ = nullptr;
    // The instance ID of the image.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The region ID of the image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the image. Valid values:
    // 
    // *   **acr**
    // *   **harbor**
    // *   **quay**
    // *   **CI/CD**
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The type of the repository. Valid values:
    // 
    // *   **private**
    // *   **public**
    std::shared_ptr<string> repoType_ = nullptr;
    // Indicates whether risks exist. Valid values:
    // 
    // *   **NO**
    // *   **YES**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The scan progress of the image. Valid values: 0 to 100.
    std::shared_ptr<int32_t> scaProgress_ = nullptr;
    // The error code of the image scan result. Valid values:
    // 
    // *   **TASK_NOT_EXISTS**: The image scan task does not exist.
    // *   **TASK_NOT_SUPPORT_REGION**: The image scan task cannot be performed in the current region.
    // *   **forbid_create_repeat_task**: The image scan task already exists.
    std::shared_ptr<string> scaResult_ = nullptr;
    // The scan status of the image. Valid values:
    // 
    // *   **INIT**: The image scan task is pending startup.
    // *   **START**: The image scan task is started.
    // *   **MESSAGE_SEND**: The message about the image scan task is sent.
    // *   **START_RUN**: The image analysis task is started.
    // *   **DOWNLOAD**: The image scan result is downloaded.
    // *   **PRE_ANALYZER**: The image pre-analysis is started.
    // *   **WEB_SHELL_ANALYZER**: The WebShell analysis of the image is complete.
    // *   **CVE_ANALYZER**: The Common Vulnerabilities and Exposures (CVE) analysis of the image is complete.
    // *   **BIN_ANALYZER**: The binary analysis of the image is complete.
    // *   **OTHER_ANALYZER**: The extended analysis of the image is complete.
    // *   **SUCCESS**: The image scan task is complete.
    // *   **PRE_ANALYZER_SUCCESS**: The image pre-analysis is complete.
    // *   **FAIL**: The image scan task failed.
    // *   **TIMEOUT**: The image scan task timed out.
    std::shared_ptr<string> scaStatus_ = nullptr;
    // The usage label of the image.
    std::shared_ptr<string> sourceBizTag_ = nullptr;
    // The status of the image. Valid values:
    // 
    // *   **NORMAL**
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The number of vulnerabilities in the image.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
    // Indicates whether vulnerabilities exist in the image. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> vulStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
