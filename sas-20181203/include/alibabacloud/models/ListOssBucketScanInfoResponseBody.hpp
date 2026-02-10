// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODY_HPP_
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
  class ListOssBucketScanInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketScanInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketScanInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOssBucketScanInfoResponseBody() = default ;
    ListOssBucketScanInfoResponseBody(const ListOssBucketScanInfoResponseBody &) = default ;
    ListOssBucketScanInfoResponseBody(ListOssBucketScanInfoResponseBody &&) = default ;
    ListOssBucketScanInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketScanInfoResponseBody() = default ;
    ListOssBucketScanInfoResponseBody& operator=(const ListOssBucketScanInfoResponseBody &) = default ;
    ListOssBucketScanInfoResponseBody& operator=(ListOssBucketScanInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
        DARABONBA_PTR_TO_JSON(DecompressStatus, decompressStatus_);
        DARABONBA_PTR_TO_JSON(HighRisk, highRisk_);
        DARABONBA_PTR_TO_JSON(LastScanEndTime, lastScanEndTime_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(LowRisk, lowRisk_);
        DARABONBA_PTR_TO_JSON(MediumRisk, mediumRisk_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ScanObject, scanObject_);
        DARABONBA_PTR_TO_JSON(Scanned, scanned_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(Support, support_);
        DARABONBA_PTR_TO_JSON(TotalObject, totalObject_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
        DARABONBA_PTR_FROM_JSON(DecompressStatus, decompressStatus_);
        DARABONBA_PTR_FROM_JSON(HighRisk, highRisk_);
        DARABONBA_PTR_FROM_JSON(LastScanEndTime, lastScanEndTime_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(LowRisk, lowRisk_);
        DARABONBA_PTR_FROM_JSON(MediumRisk, mediumRisk_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ScanObject, scanObject_);
        DARABONBA_PTR_FROM_JSON(Scanned, scanned_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(Support, support_);
        DARABONBA_PTR_FROM_JSON(TotalObject, totalObject_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->configStatus_ == nullptr && this->decompressStatus_ == nullptr && this->highRisk_ == nullptr && this->lastScanEndTime_ == nullptr && this->lastScanTime_ == nullptr
        && this->lowRisk_ == nullptr && this->mediumRisk_ == nullptr && this->message_ == nullptr && this->regionId_ == nullptr && this->scanObject_ == nullptr
        && this->scanned_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->support_ == nullptr && this->totalObject_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // configStatus Field Functions 
      bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
      void deleteConfigStatus() { this->configStatus_ = nullptr;};
      inline int32_t getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0) };
      inline Data& setConfigStatus(int32_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


      // decompressStatus Field Functions 
      bool hasDecompressStatus() const { return this->decompressStatus_ != nullptr;};
      void deleteDecompressStatus() { this->decompressStatus_ = nullptr;};
      inline int32_t getDecompressStatus() const { DARABONBA_PTR_GET_DEFAULT(decompressStatus_, 0) };
      inline Data& setDecompressStatus(int32_t decompressStatus) { DARABONBA_PTR_SET_VALUE(decompressStatus_, decompressStatus) };


      // highRisk Field Functions 
      bool hasHighRisk() const { return this->highRisk_ != nullptr;};
      void deleteHighRisk() { this->highRisk_ = nullptr;};
      inline int64_t getHighRisk() const { DARABONBA_PTR_GET_DEFAULT(highRisk_, 0L) };
      inline Data& setHighRisk(int64_t highRisk) { DARABONBA_PTR_SET_VALUE(highRisk_, highRisk) };


      // lastScanEndTime Field Functions 
      bool hasLastScanEndTime() const { return this->lastScanEndTime_ != nullptr;};
      void deleteLastScanEndTime() { this->lastScanEndTime_ = nullptr;};
      inline int64_t getLastScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanEndTime_, 0L) };
      inline Data& setLastScanEndTime(int64_t lastScanEndTime) { DARABONBA_PTR_SET_VALUE(lastScanEndTime_, lastScanEndTime) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline Data& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // lowRisk Field Functions 
      bool hasLowRisk() const { return this->lowRisk_ != nullptr;};
      void deleteLowRisk() { this->lowRisk_ = nullptr;};
      inline int64_t getLowRisk() const { DARABONBA_PTR_GET_DEFAULT(lowRisk_, 0L) };
      inline Data& setLowRisk(int64_t lowRisk) { DARABONBA_PTR_SET_VALUE(lowRisk_, lowRisk) };


      // mediumRisk Field Functions 
      bool hasMediumRisk() const { return this->mediumRisk_ != nullptr;};
      void deleteMediumRisk() { this->mediumRisk_ = nullptr;};
      inline int64_t getMediumRisk() const { DARABONBA_PTR_GET_DEFAULT(mediumRisk_, 0L) };
      inline Data& setMediumRisk(int64_t mediumRisk) { DARABONBA_PTR_SET_VALUE(mediumRisk_, mediumRisk) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scanObject Field Functions 
      bool hasScanObject() const { return this->scanObject_ != nullptr;};
      void deleteScanObject() { this->scanObject_ = nullptr;};
      inline int64_t getScanObject() const { DARABONBA_PTR_GET_DEFAULT(scanObject_, 0L) };
      inline Data& setScanObject(int64_t scanObject) { DARABONBA_PTR_SET_VALUE(scanObject_, scanObject) };


      // scanned Field Functions 
      bool hasScanned() const { return this->scanned_ != nullptr;};
      void deleteScanned() { this->scanned_ = nullptr;};
      inline bool getScanned() const { DARABONBA_PTR_GET_DEFAULT(scanned_, false) };
      inline Data& setScanned(bool scanned) { DARABONBA_PTR_SET_VALUE(scanned_, scanned) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline Data& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // support Field Functions 
      bool hasSupport() const { return this->support_ != nullptr;};
      void deleteSupport() { this->support_ = nullptr;};
      inline bool getSupport() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
      inline Data& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


      // totalObject Field Functions 
      bool hasTotalObject() const { return this->totalObject_ != nullptr;};
      void deleteTotalObject() { this->totalObject_ = nullptr;};
      inline int64_t getTotalObject() const { DARABONBA_PTR_GET_DEFAULT(totalObject_, 0L) };
      inline Data& setTotalObject(int64_t totalObject) { DARABONBA_PTR_SET_VALUE(totalObject_, totalObject) };


    protected:
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // Configuration status, valid values:
      // 
      // - **0**: No Configuration.
      // - **1**: Not Open.
      // - **2**: Open.
      shared_ptr<int32_t> configStatus_ {};
      // Bucket decompression configuration status, valid values:
      // - **0**: Decompression not configured.
      // - **1**: Decompression configured.
      shared_ptr<int32_t> decompressStatus_ {};
      // The number of high-risk objects.
      shared_ptr<int64_t> highRisk_ {};
      // The time when the most recent check ended. Unit: milliseconds.
      shared_ptr<int64_t> lastScanEndTime_ {};
      // The time when the bucket was last checked. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The number of low-risk objects.
      shared_ptr<int64_t> lowRisk_ {};
      // The number of medium-risk objects.
      shared_ptr<int64_t> mediumRisk_ {};
      // The reason why the bucket cannot be checked.
      shared_ptr<string> message_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The number of objects that are checked.
      shared_ptr<int64_t> scanObject_ {};
      // Indicates whether the bucket is checked. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> scanned_ {};
      // The check status of the bucket. Valid values:
      // 
      // *   **1**: The bucket is not checked.
      // *   **2**: All objects in the bucket are being checked.
      // *   **3**: Only new objects are being checked.
      // *   **4**: The bucket is checked.
      shared_ptr<int32_t> status_ {};
      // The storage class of the bucket. Valid values:
      // 
      // *   **Standard**
      // *   **IA**
      // *   **Archive**
      // *   **ColdArchive**
      shared_ptr<string> storageClass_ {};
      // Indicates whether the bucket can be checked. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> support_ {};
      // The total number of objects in the bucket.
      shared_ptr<int64_t> totalObject_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOssBucketScanInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOssBucketScanInfoResponseBody::Data>) };
    inline vector<ListOssBucketScanInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOssBucketScanInfoResponseBody::Data>) };
    inline ListOssBucketScanInfoResponseBody& setData(const vector<ListOssBucketScanInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOssBucketScanInfoResponseBody& setData(vector<ListOssBucketScanInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOssBucketScanInfoResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOssBucketScanInfoResponseBody::PageInfo) };
    inline ListOssBucketScanInfoResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOssBucketScanInfoResponseBody::PageInfo) };
    inline ListOssBucketScanInfoResponseBody& setPageInfo(const ListOssBucketScanInfoResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOssBucketScanInfoResponseBody& setPageInfo(ListOssBucketScanInfoResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOssBucketScanInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListOssBucketScanInfoResponseBody::Data>> data_ {};
    // The page information.
    shared_ptr<ListOssBucketScanInfoResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
