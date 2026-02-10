// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODY_HPP_
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
  class DescribeImageInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInstanceList, imageInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInstanceList, imageInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageInstancesResponseBody() = default ;
    DescribeImageInstancesResponseBody(const DescribeImageInstancesResponseBody &) = default ;
    DescribeImageInstancesResponseBody(DescribeImageInstancesResponseBody &&) = default ;
    DescribeImageInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstancesResponseBody() = default ;
    DescribeImageInstancesResponseBody& operator=(const DescribeImageInstancesResponseBody &) = default ;
    DescribeImageInstancesResponseBody& operator=(DescribeImageInstancesResponseBody &&) = default ;
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
      // The number of images returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInstanceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ImageInstanceList& obj) { 
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
      ImageInstanceList() = default ;
      ImageInstanceList(const ImageInstanceList &) = default ;
      ImageInstanceList(ImageInstanceList &&) = default ;
      ImageInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageInstanceList() = default ;
      ImageInstanceList& operator=(const ImageInstanceList &) = default ;
      ImageInstanceList& operator=(ImageInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->alarmStatus_ == nullptr && this->deployed_ == nullptr && this->digest_ == nullptr && this->endpoints_ == nullptr && this->hcCount_ == nullptr
        && this->hcStatus_ == nullptr && this->imageCreate_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->imageUpdate_ == nullptr
        && this->instanceId_ == nullptr && this->lastScanTime_ == nullptr && this->regionId_ == nullptr && this->registryType_ == nullptr && this->repoId_ == nullptr
        && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoType_ == nullptr && this->riskStatus_ == nullptr && this->scaProgress_ == nullptr
        && this->scaResult_ == nullptr && this->scaStatus_ == nullptr && this->sourceBizTag_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->uuid_ == nullptr && this->vulCount_ == nullptr && this->vulStatus_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline ImageInstanceList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline ImageInstanceList& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // deployed Field Functions 
      bool hasDeployed() const { return this->deployed_ != nullptr;};
      void deleteDeployed() { this->deployed_ = nullptr;};
      inline int32_t getDeployed() const { DARABONBA_PTR_GET_DEFAULT(deployed_, 0) };
      inline ImageInstanceList& setDeployed(int32_t deployed) { DARABONBA_PTR_SET_VALUE(deployed_, deployed) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline ImageInstanceList& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline string getEndpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
      inline ImageInstanceList& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline ImageInstanceList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // hcStatus Field Functions 
      bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
      void deleteHcStatus() { this->hcStatus_ = nullptr;};
      inline string getHcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
      inline ImageInstanceList& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


      // imageCreate Field Functions 
      bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
      void deleteImageCreate() { this->imageCreate_ = nullptr;};
      inline string getImageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, "") };
      inline ImageInstanceList& setImageCreate(string imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageInstanceList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageSize Field Functions 
      bool hasImageSize() const { return this->imageSize_ != nullptr;};
      void deleteImageSize() { this->imageSize_ = nullptr;};
      inline string getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
      inline ImageInstanceList& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


      // imageUpdate Field Functions 
      bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
      void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
      inline string getImageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, "") };
      inline ImageInstanceList& setImageUpdate(string imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline ImageInstanceList& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageInstanceList& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ImageInstanceList& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageInstanceList& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageInstanceList& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline ImageInstanceList& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline ImageInstanceList& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // scaProgress Field Functions 
      bool hasScaProgress() const { return this->scaProgress_ != nullptr;};
      void deleteScaProgress() { this->scaProgress_ = nullptr;};
      inline int32_t getScaProgress() const { DARABONBA_PTR_GET_DEFAULT(scaProgress_, 0) };
      inline ImageInstanceList& setScaProgress(int32_t scaProgress) { DARABONBA_PTR_SET_VALUE(scaProgress_, scaProgress) };


      // scaResult Field Functions 
      bool hasScaResult() const { return this->scaResult_ != nullptr;};
      void deleteScaResult() { this->scaResult_ = nullptr;};
      inline string getScaResult() const { DARABONBA_PTR_GET_DEFAULT(scaResult_, "") };
      inline ImageInstanceList& setScaResult(string scaResult) { DARABONBA_PTR_SET_VALUE(scaResult_, scaResult) };


      // scaStatus Field Functions 
      bool hasScaStatus() const { return this->scaStatus_ != nullptr;};
      void deleteScaStatus() { this->scaStatus_ = nullptr;};
      inline string getScaStatus() const { DARABONBA_PTR_GET_DEFAULT(scaStatus_, "") };
      inline ImageInstanceList& setScaStatus(string scaStatus) { DARABONBA_PTR_SET_VALUE(scaStatus_, scaStatus) };


      // sourceBizTag Field Functions 
      bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
      void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
      inline string getSourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
      inline ImageInstanceList& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ImageInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ImageInstanceList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageInstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline ImageInstanceList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // vulStatus Field Functions 
      bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
      void deleteVulStatus() { this->vulStatus_ = nullptr;};
      inline string getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
      inline ImageInstanceList& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


    protected:
      // The number of alerts that are generated for the image.
      shared_ptr<int32_t> alarmCount_ {};
      // Indicates whether alerts are generated for the image. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // Indicates whether the image was deployed. Valid values:
      // 
      // *   **0**: The image was not deployed.
      // *   **1**: The image was deployed.
      shared_ptr<int32_t> deployed_ {};
      // The digest value of the image.
      shared_ptr<string> digest_ {};
      // The address of the image.
      shared_ptr<string> endpoints_ {};
      // The number of baseline risks.
      shared_ptr<int32_t> hcCount_ {};
      // Indicates whether baseline risks exist. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> hcStatus_ {};
      // The timestamp generated when the image was created. Unit: milliseconds.
      shared_ptr<string> imageCreate_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The size of the image. Unit: MB.
      shared_ptr<string> imageSize_ {};
      // The timestamp generated when the image was updated. Unit: milliseconds.
      shared_ptr<string> imageUpdate_ {};
      // The instance ID of the image.
      shared_ptr<string> instanceId_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The region ID of the image.
      shared_ptr<string> regionId_ {};
      // The type of the image. Valid values:
      // 
      // *   **acr**
      // *   **harbor**
      // *   **quay**
      // *   **CI/CD**
      shared_ptr<string> registryType_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The type of the repository. Valid values:
      // 
      // *   **private**
      // *   **public**
      shared_ptr<string> repoType_ {};
      // Indicates whether risks exist. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> riskStatus_ {};
      // The scan progress of the image. Valid values: 0 to 100.
      shared_ptr<int32_t> scaProgress_ {};
      // The error code of the image scan result. Valid values:
      // 
      // *   **TASK_NOT_EXISTS**: The image scan task does not exist.
      // *   **TASK_NOT_SUPPORT_REGION**: The image scan task cannot be performed in the current region.
      // *   **forbid_create_repeat_task**: The image scan task already exists.
      shared_ptr<string> scaResult_ {};
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
      shared_ptr<string> scaStatus_ {};
      // The usage label of the image.
      shared_ptr<string> sourceBizTag_ {};
      // The status of the image. Valid values:
      // 
      // *   **NORMAL**
      shared_ptr<string> status_ {};
      // The tag of the image.
      shared_ptr<string> tag_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The number of vulnerabilities in the image.
      shared_ptr<int32_t> vulCount_ {};
      // Indicates whether vulnerabilities exist in the image. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> vulStatus_ {};
    };

    virtual bool empty() const override { return this->imageInstanceList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // imageInstanceList Field Functions 
    bool hasImageInstanceList() const { return this->imageInstanceList_ != nullptr;};
    void deleteImageInstanceList() { this->imageInstanceList_ = nullptr;};
    inline const vector<DescribeImageInstancesResponseBody::ImageInstanceList> & getImageInstanceList() const { DARABONBA_PTR_GET_CONST(imageInstanceList_, vector<DescribeImageInstancesResponseBody::ImageInstanceList>) };
    inline vector<DescribeImageInstancesResponseBody::ImageInstanceList> getImageInstanceList() { DARABONBA_PTR_GET(imageInstanceList_, vector<DescribeImageInstancesResponseBody::ImageInstanceList>) };
    inline DescribeImageInstancesResponseBody& setImageInstanceList(const vector<DescribeImageInstancesResponseBody::ImageInstanceList> & imageInstanceList) { DARABONBA_PTR_SET_VALUE(imageInstanceList_, imageInstanceList) };
    inline DescribeImageInstancesResponseBody& setImageInstanceList(vector<DescribeImageInstancesResponseBody::ImageInstanceList> && imageInstanceList) { DARABONBA_PTR_SET_RVALUE(imageInstanceList_, imageInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageInstancesResponseBody::PageInfo) };
    inline DescribeImageInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageInstancesResponseBody::PageInfo) };
    inline DescribeImageInstancesResponseBody& setPageInfo(const DescribeImageInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageInstancesResponseBody& setPageInfo(DescribeImageInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    shared_ptr<vector<DescribeImageInstancesResponseBody::ImageInstanceList>> imageInstanceList_ {};
    // The pagination information.
    shared_ptr<DescribeImageInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
