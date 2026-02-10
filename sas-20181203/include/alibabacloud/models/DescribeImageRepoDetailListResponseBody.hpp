// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODY_HPP_
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
  class DescribeImageRepoDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRepoResponses, imageRepoResponses_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRepoResponses, imageRepoResponses_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoDetailListResponseBody() = default ;
    DescribeImageRepoDetailListResponseBody(const DescribeImageRepoDetailListResponseBody &) = default ;
    DescribeImageRepoDetailListResponseBody(DescribeImageRepoDetailListResponseBody &&) = default ;
    DescribeImageRepoDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoDetailListResponseBody() = default ;
    DescribeImageRepoDetailListResponseBody& operator=(const DescribeImageRepoDetailListResponseBody &) = default ;
    DescribeImageRepoDetailListResponseBody& operator=(DescribeImageRepoDetailListResponseBody &&) = default ;
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
      // The total number of image repositories.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageRepoResponses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRepoResponses& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(HasRiskImageCount, hasRiskImageCount_);
        DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
        DARABONBA_PTR_TO_JSON(HcStatus, hcStatus_);
        DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_TO_JSON(SourceBizTag, sourceBizTag_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
        DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRepoResponses& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(HasRiskImageCount, hasRiskImageCount_);
        DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
        DARABONBA_PTR_FROM_JSON(HcStatus, hcStatus_);
        DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
        DARABONBA_PTR_FROM_JSON(SourceBizTag, sourceBizTag_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
        DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
      };
      ImageRepoResponses() = default ;
      ImageRepoResponses(const ImageRepoResponses &) = default ;
      ImageRepoResponses(ImageRepoResponses &&) = default ;
      ImageRepoResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRepoResponses() = default ;
      ImageRepoResponses& operator=(const ImageRepoResponses &) = default ;
      ImageRepoResponses& operator=(ImageRepoResponses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->alarmStatus_ == nullptr && this->endpoints_ == nullptr && this->hasRiskImageCount_ == nullptr && this->hcCount_ == nullptr && this->hcStatus_ == nullptr
        && this->imageCount_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->registryType_ == nullptr && this->repoId_ == nullptr
        && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->riskStatus_ == nullptr && this->sourceBizTag_ == nullptr && this->vulCount_ == nullptr
        && this->vulStatus_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline ImageRepoResponses& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline ImageRepoResponses& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline string getEndpoints() const { DARABONBA_PTR_GET_DEFAULT(endpoints_, "") };
      inline ImageRepoResponses& setEndpoints(string endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };


      // hasRiskImageCount Field Functions 
      bool hasHasRiskImageCount() const { return this->hasRiskImageCount_ != nullptr;};
      void deleteHasRiskImageCount() { this->hasRiskImageCount_ = nullptr;};
      inline int32_t getHasRiskImageCount() const { DARABONBA_PTR_GET_DEFAULT(hasRiskImageCount_, 0) };
      inline ImageRepoResponses& setHasRiskImageCount(int32_t hasRiskImageCount) { DARABONBA_PTR_SET_VALUE(hasRiskImageCount_, hasRiskImageCount) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline ImageRepoResponses& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // hcStatus Field Functions 
      bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
      void deleteHcStatus() { this->hcStatus_ = nullptr;};
      inline string getHcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
      inline ImageRepoResponses& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
      inline ImageRepoResponses& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageRepoResponses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageRepoResponses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline ImageRepoResponses& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ImageRepoResponses& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ImageRepoResponses& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline ImageRepoResponses& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline ImageRepoResponses& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // sourceBizTag Field Functions 
      bool hasSourceBizTag() const { return this->sourceBizTag_ != nullptr;};
      void deleteSourceBizTag() { this->sourceBizTag_ = nullptr;};
      inline string getSourceBizTag() const { DARABONBA_PTR_GET_DEFAULT(sourceBizTag_, "") };
      inline ImageRepoResponses& setSourceBizTag(string sourceBizTag) { DARABONBA_PTR_SET_VALUE(sourceBizTag_, sourceBizTag) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline ImageRepoResponses& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // vulStatus Field Functions 
      bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
      void deleteVulStatus() { this->vulStatus_ = nullptr;};
      inline string getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
      inline ImageRepoResponses& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


    protected:
      // The number of alerts that are generated for the image repository.
      shared_ptr<int32_t> alarmCount_ {};
      // Indicates whether alerts are generated for the image repository. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The address of the image repository.
      shared_ptr<string> endpoints_ {};
      // The number of the images on which risks are detected.
      shared_ptr<int32_t> hasRiskImageCount_ {};
      // The number of baseline risk items on the image repository.
      shared_ptr<int32_t> hcCount_ {};
      // Indicates whether baseline risk items are detected on the image repository. Valid values:
      // 
      // *   **NO**
      // *   **YES**
      shared_ptr<string> hcStatus_ {};
      // The number of images.
      shared_ptr<int32_t> imageCount_ {};
      // The ID of the image.
      shared_ptr<string> instanceId_ {};
      // The region ID of the image.
      shared_ptr<string> regionId_ {};
      // The type of the image repository. Valid values:
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
      // Indicates whether the image repository is at risk. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The usage label of the image.
      shared_ptr<string> sourceBizTag_ {};
      // The number of vulnerabilities detected on the image repository.
      shared_ptr<int32_t> vulCount_ {};
      // Indicates whether vulnerabilities are detected on the image repository. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> vulStatus_ {};
    };

    virtual bool empty() const override { return this->imageRepoResponses_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // imageRepoResponses Field Functions 
    bool hasImageRepoResponses() const { return this->imageRepoResponses_ != nullptr;};
    void deleteImageRepoResponses() { this->imageRepoResponses_ = nullptr;};
    inline const vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses> & getImageRepoResponses() const { DARABONBA_PTR_GET_CONST(imageRepoResponses_, vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses>) };
    inline vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses> getImageRepoResponses() { DARABONBA_PTR_GET(imageRepoResponses_, vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses>) };
    inline DescribeImageRepoDetailListResponseBody& setImageRepoResponses(const vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses> & imageRepoResponses) { DARABONBA_PTR_SET_VALUE(imageRepoResponses_, imageRepoResponses) };
    inline DescribeImageRepoDetailListResponseBody& setImageRepoResponses(vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses> && imageRepoResponses) { DARABONBA_PTR_SET_RVALUE(imageRepoResponses_, imageRepoResponses) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageRepoDetailListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageRepoDetailListResponseBody::PageInfo) };
    inline DescribeImageRepoDetailListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageRepoDetailListResponseBody::PageInfo) };
    inline DescribeImageRepoDetailListResponseBody& setPageInfo(const DescribeImageRepoDetailListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageRepoDetailListResponseBody& setPageInfo(DescribeImageRepoDetailListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about image repositories.
    shared_ptr<vector<DescribeImageRepoDetailListResponseBody::ImageRepoResponses>> imageRepoResponses_ {};
    // The pagination information.
    shared_ptr<DescribeImageRepoDetailListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
