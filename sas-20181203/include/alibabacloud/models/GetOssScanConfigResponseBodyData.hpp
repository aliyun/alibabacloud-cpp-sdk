// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODYDATA_HPP_
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
  class GetOssScanConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_TO_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_TO_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_TO_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_TO_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_TO_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RealTimeIncr, realTimeIncr_);
      DARABONBA_PTR_TO_JSON(ScanDayList, scanDayList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_FROM_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_FROM_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_FROM_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RealTimeIncr, realTimeIncr_);
      DARABONBA_PTR_FROM_JSON(ScanDayList, scanDayList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetOssScanConfigResponseBodyData() = default ;
    GetOssScanConfigResponseBodyData(const GetOssScanConfigResponseBodyData &) = default ;
    GetOssScanConfigResponseBodyData(GetOssScanConfigResponseBodyData &&) = default ;
    GetOssScanConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssScanConfigResponseBodyData() = default ;
    GetOssScanConfigResponseBodyData& operator=(const GetOssScanConfigResponseBodyData &) = default ;
    GetOssScanConfigResponseBodyData& operator=(GetOssScanConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allKeyPrefix_ == nullptr
        && return this->bucketCount_ == nullptr && return this->bucketName_ == nullptr && return this->bucketNameList_ == nullptr && return this->decompressMaxFileCount_ == nullptr && return this->decompressMaxLayer_ == nullptr
        && return this->decryptionList_ == nullptr && return this->enable_ == nullptr && return this->endTime_ == nullptr && return this->id_ == nullptr && return this->keyPrefixList_ == nullptr
        && return this->keySuffixList_ == nullptr && return this->lastModifiedStartTime_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->name_ == nullptr && return this->realTimeIncr_ == nullptr
        && return this->scanDayList_ == nullptr && return this->startTime_ == nullptr; };
    // allKeyPrefix Field Functions 
    bool hasAllKeyPrefix() const { return this->allKeyPrefix_ != nullptr;};
    void deleteAllKeyPrefix() { this->allKeyPrefix_ = nullptr;};
    inline bool allKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(allKeyPrefix_, false) };
    inline GetOssScanConfigResponseBodyData& setAllKeyPrefix(bool allKeyPrefix) { DARABONBA_PTR_SET_VALUE(allKeyPrefix_, allKeyPrefix) };


    // bucketCount Field Functions 
    bool hasBucketCount() const { return this->bucketCount_ != nullptr;};
    void deleteBucketCount() { this->bucketCount_ = nullptr;};
    inline int32_t bucketCount() const { DARABONBA_PTR_GET_DEFAULT(bucketCount_, 0) };
    inline GetOssScanConfigResponseBodyData& setBucketCount(int32_t bucketCount) { DARABONBA_PTR_SET_VALUE(bucketCount_, bucketCount) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetOssScanConfigResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketNameList Field Functions 
    bool hasBucketNameList() const { return this->bucketNameList_ != nullptr;};
    void deleteBucketNameList() { this->bucketNameList_ = nullptr;};
    inline const vector<string> & bucketNameList() const { DARABONBA_PTR_GET_CONST(bucketNameList_, vector<string>) };
    inline vector<string> bucketNameList() { DARABONBA_PTR_GET(bucketNameList_, vector<string>) };
    inline GetOssScanConfigResponseBodyData& setBucketNameList(const vector<string> & bucketNameList) { DARABONBA_PTR_SET_VALUE(bucketNameList_, bucketNameList) };
    inline GetOssScanConfigResponseBodyData& setBucketNameList(vector<string> && bucketNameList) { DARABONBA_PTR_SET_RVALUE(bucketNameList_, bucketNameList) };


    // decompressMaxFileCount Field Functions 
    bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
    void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
    inline int32_t decompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
    inline GetOssScanConfigResponseBodyData& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


    // decompressMaxLayer Field Functions 
    bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
    void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
    inline int32_t decompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
    inline GetOssScanConfigResponseBodyData& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


    // decryptionList Field Functions 
    bool hasDecryptionList() const { return this->decryptionList_ != nullptr;};
    void deleteDecryptionList() { this->decryptionList_ = nullptr;};
    inline const vector<string> & decryptionList() const { DARABONBA_PTR_GET_CONST(decryptionList_, vector<string>) };
    inline vector<string> decryptionList() { DARABONBA_PTR_GET(decryptionList_, vector<string>) };
    inline GetOssScanConfigResponseBodyData& setDecryptionList(const vector<string> & decryptionList) { DARABONBA_PTR_SET_VALUE(decryptionList_, decryptionList) };
    inline GetOssScanConfigResponseBodyData& setDecryptionList(vector<string> && decryptionList) { DARABONBA_PTR_SET_RVALUE(decryptionList_, decryptionList) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline GetOssScanConfigResponseBodyData& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOssScanConfigResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetOssScanConfigResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyPrefixList Field Functions 
    bool hasKeyPrefixList() const { return this->keyPrefixList_ != nullptr;};
    void deleteKeyPrefixList() { this->keyPrefixList_ = nullptr;};
    inline const vector<string> & keyPrefixList() const { DARABONBA_PTR_GET_CONST(keyPrefixList_, vector<string>) };
    inline vector<string> keyPrefixList() { DARABONBA_PTR_GET(keyPrefixList_, vector<string>) };
    inline GetOssScanConfigResponseBodyData& setKeyPrefixList(const vector<string> & keyPrefixList) { DARABONBA_PTR_SET_VALUE(keyPrefixList_, keyPrefixList) };
    inline GetOssScanConfigResponseBodyData& setKeyPrefixList(vector<string> && keyPrefixList) { DARABONBA_PTR_SET_RVALUE(keyPrefixList_, keyPrefixList) };


    // keySuffixList Field Functions 
    bool hasKeySuffixList() const { return this->keySuffixList_ != nullptr;};
    void deleteKeySuffixList() { this->keySuffixList_ = nullptr;};
    inline const vector<string> & keySuffixList() const { DARABONBA_PTR_GET_CONST(keySuffixList_, vector<string>) };
    inline vector<string> keySuffixList() { DARABONBA_PTR_GET(keySuffixList_, vector<string>) };
    inline GetOssScanConfigResponseBodyData& setKeySuffixList(const vector<string> & keySuffixList) { DARABONBA_PTR_SET_VALUE(keySuffixList_, keySuffixList) };
    inline GetOssScanConfigResponseBodyData& setKeySuffixList(vector<string> && keySuffixList) { DARABONBA_PTR_SET_RVALUE(keySuffixList_, keySuffixList) };


    // lastModifiedStartTime Field Functions 
    bool hasLastModifiedStartTime() const { return this->lastModifiedStartTime_ != nullptr;};
    void deleteLastModifiedStartTime() { this->lastModifiedStartTime_ = nullptr;};
    inline int64_t lastModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedStartTime_, 0L) };
    inline GetOssScanConfigResponseBodyData& setLastModifiedStartTime(int64_t lastModifiedStartTime) { DARABONBA_PTR_SET_VALUE(lastModifiedStartTime_, lastModifiedStartTime) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline int64_t lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
    inline GetOssScanConfigResponseBodyData& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOssScanConfigResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // realTimeIncr Field Functions 
    bool hasRealTimeIncr() const { return this->realTimeIncr_ != nullptr;};
    void deleteRealTimeIncr() { this->realTimeIncr_ = nullptr;};
    inline bool realTimeIncr() const { DARABONBA_PTR_GET_DEFAULT(realTimeIncr_, false) };
    inline GetOssScanConfigResponseBodyData& setRealTimeIncr(bool realTimeIncr) { DARABONBA_PTR_SET_VALUE(realTimeIncr_, realTimeIncr) };


    // scanDayList Field Functions 
    bool hasScanDayList() const { return this->scanDayList_ != nullptr;};
    void deleteScanDayList() { this->scanDayList_ = nullptr;};
    inline const vector<int32_t> & scanDayList() const { DARABONBA_PTR_GET_CONST(scanDayList_, vector<int32_t>) };
    inline vector<int32_t> scanDayList() { DARABONBA_PTR_GET(scanDayList_, vector<int32_t>) };
    inline GetOssScanConfigResponseBodyData& setScanDayList(const vector<int32_t> & scanDayList) { DARABONBA_PTR_SET_VALUE(scanDayList_, scanDayList) };
    inline GetOssScanConfigResponseBodyData& setScanDayList(vector<int32_t> && scanDayList) { DARABONBA_PTR_SET_RVALUE(scanDayList_, scanDayList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOssScanConfigResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Indicates whether the prefixes of all objects are matched.
    std::shared_ptr<bool> allKeyPrefix_ = nullptr;
    // The number of buckets.
    std::shared_ptr<int32_t> bucketCount_ = nullptr;
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The names of the buckets.
    std::shared_ptr<vector<string>> bucketNameList_ = nullptr;
    // The maximum number of objects that can be extracted during decompression. Valid values: 1 to 1000. If the maximum number of objects that can be extracted is reached, the decompression operation immediately ends and the detection of extracted objects is not affected.
    std::shared_ptr<int32_t> decompressMaxFileCount_ = nullptr;
    // The maximum number of decompression levels when multi-level packages are decompressed. Valid values: 1 to 5. If the maximum number of decompression levels is reached, the decompression operation immediately ends and the detection of extracted objects is not affected.
    std::shared_ptr<int32_t> decompressMaxLayer_ = nullptr;
    // The decryption methods.
    std::shared_ptr<vector<string>> decryptionList_ = nullptr;
    // Indicates whether the check policy is enabled. Valid values:
    // 
    // *   **1**: enabled.
    // *   **0**: disabled.
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The end time of the check. The time is in the HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> id_ = nullptr;
    // The prefixes of the objects.
    std::shared_ptr<vector<string>> keyPrefixList_ = nullptr;
    // The suffixes of the objects that are checked.
    std::shared_ptr<vector<string>> keySuffixList_ = nullptr;
    // The timestamp when the object was last modified. The time must be later than the timestamp that you specify. Unit: milliseconds.
    std::shared_ptr<int64_t> lastModifiedStartTime_ = nullptr;
    // The timestamp when the configuration was last modified.
    std::shared_ptr<int64_t> lastUpdateTime_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
    // Whether to enable real-time incremental detection. When this parameter is set to true, the parameters ScanDayList, StartTime, and EndTime are not effective.
    std::shared_ptr<bool> realTimeIncr_ = nullptr;
    // The days when the check is performed. The value indicates the days of the week.
    std::shared_ptr<vector<int32_t>> scanDayList_ = nullptr;
    // The start time of the check. The time is in the HH:mm:ss format.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
