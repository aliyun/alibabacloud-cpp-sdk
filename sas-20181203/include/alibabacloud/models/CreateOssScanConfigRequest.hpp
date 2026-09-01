// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSSCANCONFIGREQUEST_HPP_
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
  class CreateOssScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_TO_JSON(AutoAdd, autoAdd_);
      DARABONBA_PTR_TO_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
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
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllKeyPrefix, allKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(AutoAdd, autoAdd_);
      DARABONBA_PTR_FROM_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
      DARABONBA_PTR_FROM_JSON(Source, source_);
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
    virtual bool empty() const override { return this->allKeyPrefix_ == nullptr
        && this->autoAdd_ == nullptr && this->bucketNameList_ == nullptr && this->clientToken_ == nullptr && this->decompressMaxFileCount_ == nullptr && this->decompressMaxLayer_ == nullptr
        && this->decryptionList_ == nullptr && this->enable_ == nullptr && this->endTime_ == nullptr && this->keyPrefixList_ == nullptr && this->keySuffixList_ == nullptr
        && this->lastModifiedStartTime_ == nullptr && this->name_ == nullptr && this->realTimeIncr_ == nullptr && this->scanDayList_ == nullptr && this->source_ == nullptr
        && this->startTime_ == nullptr; };
    // allKeyPrefix Field Functions 
    bool hasAllKeyPrefix() const { return this->allKeyPrefix_ != nullptr;};
    void deleteAllKeyPrefix() { this->allKeyPrefix_ = nullptr;};
    inline bool getAllKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(allKeyPrefix_, false) };
    inline CreateOssScanConfigRequest& setAllKeyPrefix(bool allKeyPrefix) { DARABONBA_PTR_SET_VALUE(allKeyPrefix_, allKeyPrefix) };


    // autoAdd Field Functions 
    bool hasAutoAdd() const { return this->autoAdd_ != nullptr;};
    void deleteAutoAdd() { this->autoAdd_ = nullptr;};
    inline int32_t getAutoAdd() const { DARABONBA_PTR_GET_DEFAULT(autoAdd_, 0) };
    inline CreateOssScanConfigRequest& setAutoAdd(int32_t autoAdd) { DARABONBA_PTR_SET_VALUE(autoAdd_, autoAdd) };


    // bucketNameList Field Functions 
    bool hasBucketNameList() const { return this->bucketNameList_ != nullptr;};
    void deleteBucketNameList() { this->bucketNameList_ = nullptr;};
    inline const vector<string> & getBucketNameList() const { DARABONBA_PTR_GET_CONST(bucketNameList_, vector<string>) };
    inline vector<string> getBucketNameList() { DARABONBA_PTR_GET(bucketNameList_, vector<string>) };
    inline CreateOssScanConfigRequest& setBucketNameList(const vector<string> & bucketNameList) { DARABONBA_PTR_SET_VALUE(bucketNameList_, bucketNameList) };
    inline CreateOssScanConfigRequest& setBucketNameList(vector<string> && bucketNameList) { DARABONBA_PTR_SET_RVALUE(bucketNameList_, bucketNameList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOssScanConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // decompressMaxFileCount Field Functions 
    bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
    void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
    inline int32_t getDecompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
    inline CreateOssScanConfigRequest& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


    // decompressMaxLayer Field Functions 
    bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
    void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
    inline int32_t getDecompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
    inline CreateOssScanConfigRequest& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


    // decryptionList Field Functions 
    bool hasDecryptionList() const { return this->decryptionList_ != nullptr;};
    void deleteDecryptionList() { this->decryptionList_ = nullptr;};
    inline const vector<string> & getDecryptionList() const { DARABONBA_PTR_GET_CONST(decryptionList_, vector<string>) };
    inline vector<string> getDecryptionList() { DARABONBA_PTR_GET(decryptionList_, vector<string>) };
    inline CreateOssScanConfigRequest& setDecryptionList(const vector<string> & decryptionList) { DARABONBA_PTR_SET_VALUE(decryptionList_, decryptionList) };
    inline CreateOssScanConfigRequest& setDecryptionList(vector<string> && decryptionList) { DARABONBA_PTR_SET_RVALUE(decryptionList_, decryptionList) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateOssScanConfigRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateOssScanConfigRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyPrefixList Field Functions 
    bool hasKeyPrefixList() const { return this->keyPrefixList_ != nullptr;};
    void deleteKeyPrefixList() { this->keyPrefixList_ = nullptr;};
    inline const vector<string> & getKeyPrefixList() const { DARABONBA_PTR_GET_CONST(keyPrefixList_, vector<string>) };
    inline vector<string> getKeyPrefixList() { DARABONBA_PTR_GET(keyPrefixList_, vector<string>) };
    inline CreateOssScanConfigRequest& setKeyPrefixList(const vector<string> & keyPrefixList) { DARABONBA_PTR_SET_VALUE(keyPrefixList_, keyPrefixList) };
    inline CreateOssScanConfigRequest& setKeyPrefixList(vector<string> && keyPrefixList) { DARABONBA_PTR_SET_RVALUE(keyPrefixList_, keyPrefixList) };


    // keySuffixList Field Functions 
    bool hasKeySuffixList() const { return this->keySuffixList_ != nullptr;};
    void deleteKeySuffixList() { this->keySuffixList_ = nullptr;};
    inline const vector<string> & getKeySuffixList() const { DARABONBA_PTR_GET_CONST(keySuffixList_, vector<string>) };
    inline vector<string> getKeySuffixList() { DARABONBA_PTR_GET(keySuffixList_, vector<string>) };
    inline CreateOssScanConfigRequest& setKeySuffixList(const vector<string> & keySuffixList) { DARABONBA_PTR_SET_VALUE(keySuffixList_, keySuffixList) };
    inline CreateOssScanConfigRequest& setKeySuffixList(vector<string> && keySuffixList) { DARABONBA_PTR_SET_RVALUE(keySuffixList_, keySuffixList) };


    // lastModifiedStartTime Field Functions 
    bool hasLastModifiedStartTime() const { return this->lastModifiedStartTime_ != nullptr;};
    void deleteLastModifiedStartTime() { this->lastModifiedStartTime_ = nullptr;};
    inline int64_t getLastModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedStartTime_, 0L) };
    inline CreateOssScanConfigRequest& setLastModifiedStartTime(int64_t lastModifiedStartTime) { DARABONBA_PTR_SET_VALUE(lastModifiedStartTime_, lastModifiedStartTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOssScanConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // realTimeIncr Field Functions 
    bool hasRealTimeIncr() const { return this->realTimeIncr_ != nullptr;};
    void deleteRealTimeIncr() { this->realTimeIncr_ = nullptr;};
    inline bool getRealTimeIncr() const { DARABONBA_PTR_GET_DEFAULT(realTimeIncr_, false) };
    inline CreateOssScanConfigRequest& setRealTimeIncr(bool realTimeIncr) { DARABONBA_PTR_SET_VALUE(realTimeIncr_, realTimeIncr) };


    // scanDayList Field Functions 
    bool hasScanDayList() const { return this->scanDayList_ != nullptr;};
    void deleteScanDayList() { this->scanDayList_ = nullptr;};
    inline const vector<int32_t> & getScanDayList() const { DARABONBA_PTR_GET_CONST(scanDayList_, vector<int32_t>) };
    inline vector<int32_t> getScanDayList() { DARABONBA_PTR_GET(scanDayList_, vector<int32_t>) };
    inline CreateOssScanConfigRequest& setScanDayList(const vector<int32_t> & scanDayList) { DARABONBA_PTR_SET_VALUE(scanDayList_, scanDayList) };
    inline CreateOssScanConfigRequest& setScanDayList(vector<int32_t> && scanDayList) { DARABONBA_PTR_SET_RVALUE(scanDayList_, scanDayList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateOssScanConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateOssScanConfigRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies whether to match all prefixes. If this parameter is set to true, the KeyPrefixList parameter does not take effect.
    shared_ptr<bool> allKeyPrefix_ {};
    // Specifies whether OSS buckets are automatically added to this policy. Valid values:
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<int32_t> autoAdd_ {};
    // The list of bucket names.
    shared_ptr<vector<string>> bucketNameList_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The maximum number of files to decompress. Minimum value: 1. Maximum value: 1000. When the maximum number of decompressed files is exceeded, the decompression operation stops. The detection of files that have already been decompressed is not affected.
    shared_ptr<int32_t> decompressMaxFileCount_ {};
    // The maximum number of decompression layers when multiple levels of nested compressed files exist. Minimum value: 1. Maximum value: 5. When the maximum number of decompression layers is exceeded, the decompression operation stops. The detection of files that have already been decompressed is not affected.
    shared_ptr<int32_t> decompressMaxLayer_ {};
    // The list of decryption types.
    shared_ptr<vector<string>> decryptionList_ {};
    // Specifies whether to enable the policy. Valid values:
    // - **1**: Enabled.
    // - **0**: Disabled.
    shared_ptr<int32_t> enable_ {};
    // The scan stop time, in the HH:mm:ss format.
    shared_ptr<string> endTime_ {};
    // The file prefix list.
    shared_ptr<vector<string>> keyPrefixList_ {};
    // The list of file suffixes to scan.
    shared_ptr<vector<string>> keySuffixList_ {};
    // Specifies that only files whose last modification time is after the specified timestamp are scanned. Unit: milliseconds.
    shared_ptr<int64_t> lastModifiedStartTime_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // Specifies whether to enable real-time incremental detection. If this parameter is set to true, the ScanDayList, StartTime, and EndTime parameters do not take effect.
    shared_ptr<bool> realTimeIncr_ {};
    // The scan schedule. The number represents the day of the week.
    shared_ptr<vector<int32_t>> scanDayList_ {};
    // The business source. Valid values:
    // - **OSS**: OSS.
    // - **NAS**: NAS.
    shared_ptr<string> source_ {};
    // The scan start time, in the HH:mm:ss format.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
