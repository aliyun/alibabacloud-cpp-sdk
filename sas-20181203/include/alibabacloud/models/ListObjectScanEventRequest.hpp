// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListObjectScanEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectScanEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentEventId, parentEventId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectScanEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentEventId, parentEventId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
    };
    ListObjectScanEventRequest() = default ;
    ListObjectScanEventRequest(const ListObjectScanEventRequest &) = default ;
    ListObjectScanEventRequest(ListObjectScanEventRequest &&) = default ;
    ListObjectScanEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectScanEventRequest() = default ;
    ListObjectScanEventRequest& operator=(const ListObjectScanEventRequest &) = default ;
    ListObjectScanEventRequest& operator=(ListObjectScanEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchType_ == nullptr
        && this->bucketName_ == nullptr && this->currentPage_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr && this->lang_ == nullptr
        && this->md5_ == nullptr && this->ossKey_ == nullptr && this->pageSize_ == nullptr && this->parentEventId_ == nullptr && this->riskLevel_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline ListObjectScanEventRequest& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListObjectScanEventRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListObjectScanEventRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListObjectScanEventRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListObjectScanEventRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListObjectScanEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListObjectScanEventRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline ListObjectScanEventRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListObjectScanEventRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentEventId Field Functions 
    bool hasParentEventId() const { return this->parentEventId_ != nullptr;};
    void deleteParentEventId() { this->parentEventId_ = nullptr;};
    inline int64_t getParentEventId() const { DARABONBA_PTR_GET_DEFAULT(parentEventId_, 0L) };
    inline ListObjectScanEventRequest& setParentEventId(int64_t parentEventId) { DARABONBA_PTR_SET_VALUE(parentEventId_, parentEventId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListObjectScanEventRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListObjectScanEventRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListObjectScanEventRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline int64_t getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, 0L) };
    inline ListObjectScanEventRequest& setTimeEnd(int64_t timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline int64_t getTimeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, 0L) };
    inline ListObjectScanEventRequest& setTimeStart(int64_t timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


  protected:
    // Batch operation type. Valid values:
    // - **sha256**: Same file content
    // - **eventName**: Same alert type
    shared_ptr<string> batchType_ {};
    // The name of the OSS bucket.
    shared_ptr<string> bucketName_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Event ID.
    shared_ptr<int64_t> eventId_ {};
    // The name of the alert.
    shared_ptr<string> eventName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The MD5 hash value of the file.
    shared_ptr<string> md5_ {};
    // The key of the file that is stored in an OSS bucket.
    shared_ptr<string> ossKey_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the alert that is generated for the package to which the subfile belongs.
    shared_ptr<int64_t> parentEventId_ {};
    // The risk level of the alert. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> riskLevel_ {};
    // The method that is used to detect the malicious file. Valid values:
    // 
    // *   **API**: uses API operations.
    // *   **OSS**: uses Object Storage Service (OSS) file check.
    shared_ptr<string> source_ {};
    // Event status. The values are as follows:
    // - **0**: Unprocessed 
    // - **1**: I have processed manually 
    // - **2**: Whitelisted 
    // - **3**: Ignored 
    // - **4**: Access denied
    shared_ptr<int32_t> status_ {};
    // The end of the time range during which the exception is detected.
    shared_ptr<int64_t> timeEnd_ {};
    // The beginning of the time range during which the exception is detected.
    shared_ptr<int64_t> timeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
