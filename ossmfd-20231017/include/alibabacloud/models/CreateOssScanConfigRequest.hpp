// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSSCANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssMfd20231017
{
namespace Models
{
  class CreateOssScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_TO_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_TO_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_TO_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RealTimeIncr, realTimeIncr_);
      DARABONBA_PTR_TO_JSON(ScanDayList, scanDayList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxFileCount, decompressMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DecompressMaxLayer, decompressMaxLayer_);
      DARABONBA_PTR_FROM_JSON(DecryptionList, decryptionList_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KeyPrefixList, keyPrefixList_);
      DARABONBA_PTR_FROM_JSON(KeySuffixList, keySuffixList_);
      DARABONBA_PTR_FROM_JSON(LastModifiedStartTime, lastModifiedStartTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RealTimeIncr, realTimeIncr_);
      DARABONBA_PTR_FROM_JSON(ScanDayList, scanDayList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateOssScanConfigRequest() = default ;
    CreateOssScanConfigRequest(const CreateOssScanConfigRequest &) = default ;
    CreateOssScanConfigRequest(CreateOssScanConfigRequest &&) = default ;
    CreateOssScanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssScanConfigRequest() = default ;
    CreateOssScanConfigRequest& operator=(const CreateOssScanConfigRequest &) = default ;
    CreateOssScanConfigRequest& operator=(CreateOssScanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allKeyPrefix_ != nullptr
        && this->bucketName_ != nullptr && this->decompressMaxFileCount_ != nullptr && this->decompressMaxLayer_ != nullptr && this->decryptionList_ != nullptr && this->enable_ != nullptr
        && this->endTime_ != nullptr && this->keyPrefixList_ != nullptr && this->keySuffixList_ != nullptr && this->lastModifiedStartTime_ != nullptr && this->name_ != nullptr
        && this->realTimeIncr_ != nullptr && this->scanDayList_ != nullptr && this->startTime_ != nullptr; };
    // allKeyPrefix Field Functions 
    bool hasAllKeyPrefix() const { return this->allKeyPrefix_ != nullptr;};
    void deleteAllKeyPrefix() { this->allKeyPrefix_ = nullptr;};
    inline string allKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(allKeyPrefix_, "") };
    inline CreateOssScanConfigRequest& setAllKeyPrefix(string allKeyPrefix) { DARABONBA_PTR_SET_VALUE(allKeyPrefix_, allKeyPrefix) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateOssScanConfigRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // decompressMaxFileCount Field Functions 
    bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
    void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
    inline int32_t decompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
    inline CreateOssScanConfigRequest& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


    // decompressMaxLayer Field Functions 
    bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
    void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
    inline int32_t decompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
    inline CreateOssScanConfigRequest& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


    // decryptionList Field Functions 
    bool hasDecryptionList() const { return this->decryptionList_ != nullptr;};
    void deleteDecryptionList() { this->decryptionList_ = nullptr;};
    inline const vector<string> & decryptionList() const { DARABONBA_PTR_GET_CONST(decryptionList_, vector<string>) };
    inline vector<string> decryptionList() { DARABONBA_PTR_GET(decryptionList_, vector<string>) };
    inline CreateOssScanConfigRequest& setDecryptionList(const vector<string> & decryptionList) { DARABONBA_PTR_SET_VALUE(decryptionList_, decryptionList) };
    inline CreateOssScanConfigRequest& setDecryptionList(vector<string> && decryptionList) { DARABONBA_PTR_SET_RVALUE(decryptionList_, decryptionList) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateOssScanConfigRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateOssScanConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyPrefixList Field Functions 
    bool hasKeyPrefixList() const { return this->keyPrefixList_ != nullptr;};
    void deleteKeyPrefixList() { this->keyPrefixList_ = nullptr;};
    inline const vector<string> & keyPrefixList() const { DARABONBA_PTR_GET_CONST(keyPrefixList_, vector<string>) };
    inline vector<string> keyPrefixList() { DARABONBA_PTR_GET(keyPrefixList_, vector<string>) };
    inline CreateOssScanConfigRequest& setKeyPrefixList(const vector<string> & keyPrefixList) { DARABONBA_PTR_SET_VALUE(keyPrefixList_, keyPrefixList) };
    inline CreateOssScanConfigRequest& setKeyPrefixList(vector<string> && keyPrefixList) { DARABONBA_PTR_SET_RVALUE(keyPrefixList_, keyPrefixList) };


    // keySuffixList Field Functions 
    bool hasKeySuffixList() const { return this->keySuffixList_ != nullptr;};
    void deleteKeySuffixList() { this->keySuffixList_ = nullptr;};
    inline const vector<string> & keySuffixList() const { DARABONBA_PTR_GET_CONST(keySuffixList_, vector<string>) };
    inline vector<string> keySuffixList() { DARABONBA_PTR_GET(keySuffixList_, vector<string>) };
    inline CreateOssScanConfigRequest& setKeySuffixList(const vector<string> & keySuffixList) { DARABONBA_PTR_SET_VALUE(keySuffixList_, keySuffixList) };
    inline CreateOssScanConfigRequest& setKeySuffixList(vector<string> && keySuffixList) { DARABONBA_PTR_SET_RVALUE(keySuffixList_, keySuffixList) };


    // lastModifiedStartTime Field Functions 
    bool hasLastModifiedStartTime() const { return this->lastModifiedStartTime_ != nullptr;};
    void deleteLastModifiedStartTime() { this->lastModifiedStartTime_ = nullptr;};
    inline int64_t lastModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedStartTime_, 0L) };
    inline CreateOssScanConfigRequest& setLastModifiedStartTime(int64_t lastModifiedStartTime) { DARABONBA_PTR_SET_VALUE(lastModifiedStartTime_, lastModifiedStartTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOssScanConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // realTimeIncr Field Functions 
    bool hasRealTimeIncr() const { return this->realTimeIncr_ != nullptr;};
    void deleteRealTimeIncr() { this->realTimeIncr_ = nullptr;};
    inline bool realTimeIncr() const { DARABONBA_PTR_GET_DEFAULT(realTimeIncr_, false) };
    inline CreateOssScanConfigRequest& setRealTimeIncr(bool realTimeIncr) { DARABONBA_PTR_SET_VALUE(realTimeIncr_, realTimeIncr) };


    // scanDayList Field Functions 
    bool hasScanDayList() const { return this->scanDayList_ != nullptr;};
    void deleteScanDayList() { this->scanDayList_ = nullptr;};
    inline const vector<int32_t> & scanDayList() const { DARABONBA_PTR_GET_CONST(scanDayList_, vector<int32_t>) };
    inline vector<int32_t> scanDayList() { DARABONBA_PTR_GET(scanDayList_, vector<int32_t>) };
    inline CreateOssScanConfigRequest& setScanDayList(const vector<int32_t> & scanDayList) { DARABONBA_PTR_SET_VALUE(scanDayList_, scanDayList) };
    inline CreateOssScanConfigRequest& setScanDayList(vector<int32_t> && scanDayList) { DARABONBA_PTR_SET_RVALUE(scanDayList_, scanDayList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateOssScanConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> allKeyPrefix_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<int32_t> decompressMaxFileCount_ = nullptr;
    std::shared_ptr<int32_t> decompressMaxLayer_ = nullptr;
    std::shared_ptr<vector<string>> decryptionList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> enable_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<string>> keyPrefixList_ = nullptr;
    std::shared_ptr<vector<string>> keySuffixList_ = nullptr;
    std::shared_ptr<int64_t> lastModifiedStartTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> realTimeIncr_ = nullptr;
    std::shared_ptr<vector<int32_t>> scanDayList_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssMfd20231017
#endif
