// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSBUCKETSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSBUCKETSCANTASKREQUEST_HPP_
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
  class CreateOssBucketScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssBucketScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_TO_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_TO_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_TO_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_TO_JSON(ExcludeKeySuffixList, excludeKeySuffixList_);
      DARABONBA_PTR_TO_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_TO_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_TO_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssBucketScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_FROM_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_FROM_JSON(ExcludeKeySuffixList, excludeKeySuffixList_);
      DARABONBA_PTR_FROM_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_FROM_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_FROM_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
    };
    CreateOssBucketScanTaskRequest() = default ;
    CreateOssBucketScanTaskRequest(const CreateOssBucketScanTaskRequest &) = default ;
    CreateOssBucketScanTaskRequest(CreateOssBucketScanTaskRequest &&) = default ;
    CreateOssBucketScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssBucketScanTaskRequest() = default ;
    CreateOssBucketScanTaskRequest& operator=(const CreateOssBucketScanTaskRequest &) = default ;
    CreateOssBucketScanTaskRequest& operator=(CreateOssBucketScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allKeyPrefix_ != nullptr
        && this->bucketNameList_ != nullptr && this->decompressMaxFileCount_ != nullptr && this->decompressMaxLayer_ != nullptr && this->decryptionList_ != nullptr && this->excludeKeySuffixList_ != nullptr
        && this->keyPrefixList_ != nullptr && this->keySuffixList_ != nullptr && this->lastModifiedStartTime_ != nullptr && this->scanMode_ != nullptr; };
    // allKeyPrefix Field Functions 
    bool hasAllKeyPrefix() const { return this->allKeyPrefix_ != nullptr;};
    void deleteAllKeyPrefix() { this->allKeyPrefix_ = nullptr;};
    inline bool allKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(allKeyPrefix_, false) };
    inline CreateOssBucketScanTaskRequest& setAllKeyPrefix(bool allKeyPrefix) { DARABONBA_PTR_SET_VALUE(allKeyPrefix_, allKeyPrefix) };


    // bucketNameList Field Functions 
    bool hasBucketNameList() const { return this->bucketNameList_ != nullptr;};
    void deleteBucketNameList() { this->bucketNameList_ = nullptr;};
    inline const vector<string> & bucketNameList() const { DARABONBA_PTR_GET_CONST(bucketNameList_, vector<string>) };
    inline vector<string> bucketNameList() { DARABONBA_PTR_GET(bucketNameList_, vector<string>) };
    inline CreateOssBucketScanTaskRequest& setBucketNameList(const vector<string> & bucketNameList) { DARABONBA_PTR_SET_VALUE(bucketNameList_, bucketNameList) };
    inline CreateOssBucketScanTaskRequest& setBucketNameList(vector<string> && bucketNameList) { DARABONBA_PTR_SET_RVALUE(bucketNameList_, bucketNameList) };


    // decompressMaxFileCount Field Functions 
    bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
    void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
    inline int32_t decompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
    inline CreateOssBucketScanTaskRequest& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


    // decompressMaxLayer Field Functions 
    bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
    void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
    inline int32_t decompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
    inline CreateOssBucketScanTaskRequest& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


    // decryptionList Field Functions 
    bool hasDecryptionList() const { return this->decryptionList_ != nullptr;};
    void deleteDecryptionList() { this->decryptionList_ = nullptr;};
    inline const vector<string> & decryptionList() const { DARABONBA_PTR_GET_CONST(decryptionList_, vector<string>) };
    inline vector<string> decryptionList() { DARABONBA_PTR_GET(decryptionList_, vector<string>) };
    inline CreateOssBucketScanTaskRequest& setDecryptionList(const vector<string> & decryptionList) { DARABONBA_PTR_SET_VALUE(decryptionList_, decryptionList) };
    inline CreateOssBucketScanTaskRequest& setDecryptionList(vector<string> && decryptionList) { DARABONBA_PTR_SET_RVALUE(decryptionList_, decryptionList) };


    // excludeKeySuffixList Field Functions 
    bool hasExcludeKeySuffixList() const { return this->excludeKeySuffixList_ != nullptr;};
    void deleteExcludeKeySuffixList() { this->excludeKeySuffixList_ = nullptr;};
    inline const vector<string> & excludeKeySuffixList() const { DARABONBA_PTR_GET_CONST(excludeKeySuffixList_, vector<string>) };
    inline vector<string> excludeKeySuffixList() { DARABONBA_PTR_GET(excludeKeySuffixList_, vector<string>) };
    inline CreateOssBucketScanTaskRequest& setExcludeKeySuffixList(const vector<string> & excludeKeySuffixList) { DARABONBA_PTR_SET_VALUE(excludeKeySuffixList_, excludeKeySuffixList) };
    inline CreateOssBucketScanTaskRequest& setExcludeKeySuffixList(vector<string> && excludeKeySuffixList) { DARABONBA_PTR_SET_RVALUE(excludeKeySuffixList_, excludeKeySuffixList) };


    // keyPrefixList Field Functions 
    bool hasKeyPrefixList() const { return this->keyPrefixList_ != nullptr;};
    void deleteKeyPrefixList() { this->keyPrefixList_ = nullptr;};
    inline const vector<string> & keyPrefixList() const { DARABONBA_PTR_GET_CONST(keyPrefixList_, vector<string>) };
    inline vector<string> keyPrefixList() { DARABONBA_PTR_GET(keyPrefixList_, vector<string>) };
    inline CreateOssBucketScanTaskRequest& setKeyPrefixList(const vector<string> & keyPrefixList) { DARABONBA_PTR_SET_VALUE(keyPrefixList_, keyPrefixList) };
    inline CreateOssBucketScanTaskRequest& setKeyPrefixList(vector<string> && keyPrefixList) { DARABONBA_PTR_SET_RVALUE(keyPrefixList_, keyPrefixList) };


    // keySuffixList Field Functions 
    bool hasKeySuffixList() const { return this->keySuffixList_ != nullptr;};
    void deleteKeySuffixList() { this->keySuffixList_ = nullptr;};
    inline const vector<string> & keySuffixList() const { DARABONBA_PTR_GET_CONST(keySuffixList_, vector<string>) };
    inline vector<string> keySuffixList() { DARABONBA_PTR_GET(keySuffixList_, vector<string>) };
    inline CreateOssBucketScanTaskRequest& setKeySuffixList(const vector<string> & keySuffixList) { DARABONBA_PTR_SET_VALUE(keySuffixList_, keySuffixList) };
    inline CreateOssBucketScanTaskRequest& setKeySuffixList(vector<string> && keySuffixList) { DARABONBA_PTR_SET_RVALUE(keySuffixList_, keySuffixList) };


    // lastModifiedStartTime Field Functions 
    bool hasLastModifiedStartTime() const { return this->lastModifiedStartTime_ != nullptr;};
    void deleteLastModifiedStartTime() { this->lastModifiedStartTime_ = nullptr;};
    inline int64_t lastModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedStartTime_, 0L) };
    inline CreateOssBucketScanTaskRequest& setLastModifiedStartTime(int64_t lastModifiedStartTime) { DARABONBA_PTR_SET_VALUE(lastModifiedStartTime_, lastModifiedStartTime) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline int32_t scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, 0) };
    inline CreateOssBucketScanTaskRequest& setScanMode(int32_t scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


  protected:
    // Specifies whether to match the prefixes of all objects.
    std::shared_ptr<bool> allKeyPrefix_ = nullptr;
    // The names of the buckets.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> bucketNameList_ = nullptr;
    // The maximum number of objects that can be extracted during decompression. Valid values: 1 to 1000. If the maximum number of objects that can be extracted is reached, the decompression operation immediately ends and the detection of extracted objects is not affected.
    std::shared_ptr<int32_t> decompressMaxFileCount_ = nullptr;
    // The maximum number of decompression levels when multi-level packages are decompressed. Valid values: 1 to 5. If the maximum number of decompression levels is reached, the decompression operation immediately ends and the detection of extracted objects is not affected.
    std::shared_ptr<int32_t> decompressMaxLayer_ = nullptr;
    // The decryption methods.
    std::shared_ptr<vector<string>> decryptionList_ = nullptr;
    // The suffixes of the objects that you do not want to check.
    std::shared_ptr<vector<string>> excludeKeySuffixList_ = nullptr;
    // The prefixes of the objects.
    std::shared_ptr<vector<string>> keyPrefixList_ = nullptr;
    // The suffixes of the objects that you want to check.
    std::shared_ptr<vector<string>> keySuffixList_ = nullptr;
    // The timestamp when the object was last modified. The time must be later than the timestamp that you specify. Unit: milliseconds.
    std::shared_ptr<int64_t> lastModifiedStartTime_ = nullptr;
    // The check mode. Valid values:
    // 
    // *   **1**: checks all objects in the bucket.
    // *   **2**: checks only new objects in the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> scanMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
