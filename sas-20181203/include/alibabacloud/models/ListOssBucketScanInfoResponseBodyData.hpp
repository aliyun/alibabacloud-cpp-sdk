// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketScanInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketScanInfoResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListOssBucketScanInfoResponseBodyData& obj) { 
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
    ListOssBucketScanInfoResponseBodyData() = default ;
    ListOssBucketScanInfoResponseBodyData(const ListOssBucketScanInfoResponseBodyData &) = default ;
    ListOssBucketScanInfoResponseBodyData(ListOssBucketScanInfoResponseBodyData &&) = default ;
    ListOssBucketScanInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketScanInfoResponseBodyData() = default ;
    ListOssBucketScanInfoResponseBodyData& operator=(const ListOssBucketScanInfoResponseBodyData &) = default ;
    ListOssBucketScanInfoResponseBodyData& operator=(ListOssBucketScanInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->configStatus_ == nullptr && return this->decompressStatus_ == nullptr && return this->highRisk_ == nullptr && return this->lastScanEndTime_ == nullptr && return this->lastScanTime_ == nullptr
        && return this->lowRisk_ == nullptr && return this->mediumRisk_ == nullptr && return this->message_ == nullptr && return this->regionId_ == nullptr && return this->scanObject_ == nullptr
        && return this->scanned_ == nullptr && return this->status_ == nullptr && return this->storageClass_ == nullptr && return this->support_ == nullptr && return this->totalObject_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListOssBucketScanInfoResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // configStatus Field Functions 
    bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
    void deleteConfigStatus() { this->configStatus_ = nullptr;};
    inline int32_t configStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0) };
    inline ListOssBucketScanInfoResponseBodyData& setConfigStatus(int32_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


    // decompressStatus Field Functions 
    bool hasDecompressStatus() const { return this->decompressStatus_ != nullptr;};
    void deleteDecompressStatus() { this->decompressStatus_ = nullptr;};
    inline int32_t decompressStatus() const { DARABONBA_PTR_GET_DEFAULT(decompressStatus_, 0) };
    inline ListOssBucketScanInfoResponseBodyData& setDecompressStatus(int32_t decompressStatus) { DARABONBA_PTR_SET_VALUE(decompressStatus_, decompressStatus) };


    // highRisk Field Functions 
    bool hasHighRisk() const { return this->highRisk_ != nullptr;};
    void deleteHighRisk() { this->highRisk_ = nullptr;};
    inline int64_t highRisk() const { DARABONBA_PTR_GET_DEFAULT(highRisk_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setHighRisk(int64_t highRisk) { DARABONBA_PTR_SET_VALUE(highRisk_, highRisk) };


    // lastScanEndTime Field Functions 
    bool hasLastScanEndTime() const { return this->lastScanEndTime_ != nullptr;};
    void deleteLastScanEndTime() { this->lastScanEndTime_ = nullptr;};
    inline int64_t lastScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanEndTime_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setLastScanEndTime(int64_t lastScanEndTime) { DARABONBA_PTR_SET_VALUE(lastScanEndTime_, lastScanEndTime) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // lowRisk Field Functions 
    bool hasLowRisk() const { return this->lowRisk_ != nullptr;};
    void deleteLowRisk() { this->lowRisk_ = nullptr;};
    inline int64_t lowRisk() const { DARABONBA_PTR_GET_DEFAULT(lowRisk_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setLowRisk(int64_t lowRisk) { DARABONBA_PTR_SET_VALUE(lowRisk_, lowRisk) };


    // mediumRisk Field Functions 
    bool hasMediumRisk() const { return this->mediumRisk_ != nullptr;};
    void deleteMediumRisk() { this->mediumRisk_ = nullptr;};
    inline int64_t mediumRisk() const { DARABONBA_PTR_GET_DEFAULT(mediumRisk_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setMediumRisk(int64_t mediumRisk) { DARABONBA_PTR_SET_VALUE(mediumRisk_, mediumRisk) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOssBucketScanInfoResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOssBucketScanInfoResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scanObject Field Functions 
    bool hasScanObject() const { return this->scanObject_ != nullptr;};
    void deleteScanObject() { this->scanObject_ = nullptr;};
    inline int64_t scanObject() const { DARABONBA_PTR_GET_DEFAULT(scanObject_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setScanObject(int64_t scanObject) { DARABONBA_PTR_SET_VALUE(scanObject_, scanObject) };


    // scanned Field Functions 
    bool hasScanned() const { return this->scanned_ != nullptr;};
    void deleteScanned() { this->scanned_ = nullptr;};
    inline bool scanned() const { DARABONBA_PTR_GET_DEFAULT(scanned_, false) };
    inline ListOssBucketScanInfoResponseBodyData& setScanned(bool scanned) { DARABONBA_PTR_SET_VALUE(scanned_, scanned) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListOssBucketScanInfoResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline ListOssBucketScanInfoResponseBodyData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline ListOssBucketScanInfoResponseBodyData& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


    // totalObject Field Functions 
    bool hasTotalObject() const { return this->totalObject_ != nullptr;};
    void deleteTotalObject() { this->totalObject_ = nullptr;};
    inline int64_t totalObject() const { DARABONBA_PTR_GET_DEFAULT(totalObject_, 0L) };
    inline ListOssBucketScanInfoResponseBodyData& setTotalObject(int64_t totalObject) { DARABONBA_PTR_SET_VALUE(totalObject_, totalObject) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // Configuration status, valid values:
    // 
    // - **0**: No Configuration.
    // - **1**: Not Open.
    // - **2**: Open.
    std::shared_ptr<int32_t> configStatus_ = nullptr;
    // Bucket decompression configuration status, valid values:
    // - **0**: Decompression not configured.
    // - **1**: Decompression configured.
    std::shared_ptr<int32_t> decompressStatus_ = nullptr;
    // The number of high-risk objects.
    std::shared_ptr<int64_t> highRisk_ = nullptr;
    // The time when the most recent check ended. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanEndTime_ = nullptr;
    // The time when the bucket was last checked. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The number of low-risk objects.
    std::shared_ptr<int64_t> lowRisk_ = nullptr;
    // The number of medium-risk objects.
    std::shared_ptr<int64_t> mediumRisk_ = nullptr;
    // The reason why the bucket cannot be checked.
    std::shared_ptr<string> message_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of objects that are checked.
    std::shared_ptr<int64_t> scanObject_ = nullptr;
    // Indicates whether the bucket is checked. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> scanned_ = nullptr;
    // The check status of the bucket. Valid values:
    // 
    // *   **1**: The bucket is not checked.
    // *   **2**: All objects in the bucket are being checked.
    // *   **3**: Only new objects are being checked.
    // *   **4**: The bucket is checked.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The storage class of the bucket. Valid values:
    // 
    // *   **Standard**
    // *   **IA**
    // *   **Archive**
    // *   **ColdArchive**
    std::shared_ptr<string> storageClass_ = nullptr;
    // Indicates whether the bucket can be checked. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> support_ = nullptr;
    // The total number of objects in the bucket.
    std::shared_ptr<int64_t> totalObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
