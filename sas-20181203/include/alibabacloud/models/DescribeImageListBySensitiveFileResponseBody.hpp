// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYSENSITIVEFILERESPONSEBODY_HPP_
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
  class DescribeImageListBySensitiveFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListBySensitiveFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListBySensitiveFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageListBySensitiveFileResponseBody() = default ;
    DescribeImageListBySensitiveFileResponseBody(const DescribeImageListBySensitiveFileResponseBody &) = default ;
    DescribeImageListBySensitiveFileResponseBody(DescribeImageListBySensitiveFileResponseBody &&) = default ;
    DescribeImageListBySensitiveFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListBySensitiveFileResponseBody() = default ;
    DescribeImageListBySensitiveFileResponseBody& operator=(const DescribeImageListBySensitiveFileResponseBody &) = default ;
    DescribeImageListBySensitiveFileResponseBody& operator=(DescribeImageListBySensitiveFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(LastRowKey, lastRowKey_);
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
        && this->currentPage_ == nullptr && this->lastRowKey_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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


      // lastRowKey Field Functions 
      bool hasLastRowKey() const { return this->lastRowKey_ != nullptr;};
      void deleteLastRowKey() { this->lastRowKey_ = nullptr;};
      inline string getLastRowKey() const { DARABONBA_PTR_GET_DEFAULT(lastRowKey_, "") };
      inline PageInfo& setLastRowKey(string lastRowKey) { DARABONBA_PTR_SET_VALUE(lastRowKey_, lastRowKey) };


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
      // The key of the last data entry.
      shared_ptr<string> lastRowKey_ {};
      // The number of entries returned per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ImageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ImageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      virtual bool empty() const override { return this->digest_ == nullptr
        && this->firstScanTime_ == nullptr && this->instanceId_ == nullptr && this->lastScanTime_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->riskLevel_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->uuid_ == nullptr; };
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


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ImageInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline ImageInfos& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ImageInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline ImageInfos& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


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


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ImageInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The image digest.
      shared_ptr<string> digest_ {};
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTime_ {};
      // The image instance ID.
      shared_ptr<string> instanceId_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The ID of the region in which the image instance resides.
      shared_ptr<string> regionId_ {};
      // The image repository name.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The risk level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // The sensitive file status. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: ignored
      // *   **2**: false positive
      shared_ptr<string> status_ {};
      // The tag that is added to the image.
      shared_ptr<string> tag_ {};
      // The image UUID.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->imageInfos_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeImageListBySensitiveFileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos> & getImageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos>) };
    inline vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos> getImageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos>) };
    inline DescribeImageListBySensitiveFileResponseBody& setImageInfos(const vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageListBySensitiveFileResponseBody& setImageInfos(vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageListBySensitiveFileResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageListBySensitiveFileResponseBody::PageInfo) };
    inline DescribeImageListBySensitiveFileResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageListBySensitiveFileResponseBody::PageInfo) };
    inline DescribeImageListBySensitiveFileResponseBody& setPageInfo(const DescribeImageListBySensitiveFileResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageListBySensitiveFileResponseBody& setPageInfo(DescribeImageListBySensitiveFileResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListBySensitiveFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageListBySensitiveFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The information about the images.
    shared_ptr<vector<DescribeImageListBySensitiveFileResponseBody::ImageInfos>> imageInfos_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<DescribeImageListBySensitiveFileResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
