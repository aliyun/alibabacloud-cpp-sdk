// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSCANCONFIGRESPONSEBODY_HPP_
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
  class GetOssScanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssScanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssScanConfigResponseBody() = default ;
    GetOssScanConfigResponseBody(const GetOssScanConfigResponseBody &) = default ;
    GetOssScanConfigResponseBody(GetOssScanConfigResponseBody &&) = default ;
    GetOssScanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssScanConfigResponseBody() = default ;
    GetOssScanConfigResponseBody& operator=(const GetOssScanConfigResponseBody &) = default ;
    GetOssScanConfigResponseBody& operator=(GetOssScanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllKeyPrefix, allKeyPrefix_);
        DARABONBA_PTR_TO_JSON(BucketCount, bucketCount_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllKeyPrefix, allKeyPrefix_);
        DARABONBA_PTR_FROM_JSON(BucketCount, bucketCount_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
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
      virtual bool empty() const override { return this->allKeyPrefix_ == nullptr
        && this->bucketCount_ == nullptr && this->bucketName_ == nullptr && this->decompressMaxFileCount_ == nullptr && this->decompressMaxLayer_ == nullptr && this->decryptionList_ == nullptr
        && this->enable_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->keyPrefixList_ == nullptr && this->keySuffixList_ == nullptr
        && this->lastModifiedStartTime_ == nullptr && this->lastUpdateTime_ == nullptr && this->name_ == nullptr && this->realTimeIncr_ == nullptr && this->scanDayList_ == nullptr
        && this->startTime_ == nullptr; };
      // allKeyPrefix Field Functions 
      bool hasAllKeyPrefix() const { return this->allKeyPrefix_ != nullptr;};
      void deleteAllKeyPrefix() { this->allKeyPrefix_ = nullptr;};
      inline bool getAllKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(allKeyPrefix_, false) };
      inline Data& setAllKeyPrefix(bool allKeyPrefix) { DARABONBA_PTR_SET_VALUE(allKeyPrefix_, allKeyPrefix) };


      // bucketCount Field Functions 
      bool hasBucketCount() const { return this->bucketCount_ != nullptr;};
      void deleteBucketCount() { this->bucketCount_ = nullptr;};
      inline int32_t getBucketCount() const { DARABONBA_PTR_GET_DEFAULT(bucketCount_, 0) };
      inline Data& setBucketCount(int32_t bucketCount) { DARABONBA_PTR_SET_VALUE(bucketCount_, bucketCount) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // decompressMaxFileCount Field Functions 
      bool hasDecompressMaxFileCount() const { return this->decompressMaxFileCount_ != nullptr;};
      void deleteDecompressMaxFileCount() { this->decompressMaxFileCount_ = nullptr;};
      inline int32_t getDecompressMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxFileCount_, 0) };
      inline Data& setDecompressMaxFileCount(int32_t decompressMaxFileCount) { DARABONBA_PTR_SET_VALUE(decompressMaxFileCount_, decompressMaxFileCount) };


      // decompressMaxLayer Field Functions 
      bool hasDecompressMaxLayer() const { return this->decompressMaxLayer_ != nullptr;};
      void deleteDecompressMaxLayer() { this->decompressMaxLayer_ = nullptr;};
      inline int32_t getDecompressMaxLayer() const { DARABONBA_PTR_GET_DEFAULT(decompressMaxLayer_, 0) };
      inline Data& setDecompressMaxLayer(int32_t decompressMaxLayer) { DARABONBA_PTR_SET_VALUE(decompressMaxLayer_, decompressMaxLayer) };


      // decryptionList Field Functions 
      bool hasDecryptionList() const { return this->decryptionList_ != nullptr;};
      void deleteDecryptionList() { this->decryptionList_ = nullptr;};
      inline const vector<string> & getDecryptionList() const { DARABONBA_PTR_GET_CONST(decryptionList_, vector<string>) };
      inline vector<string> getDecryptionList() { DARABONBA_PTR_GET(decryptionList_, vector<string>) };
      inline Data& setDecryptionList(const vector<string> & decryptionList) { DARABONBA_PTR_SET_VALUE(decryptionList_, decryptionList) };
      inline Data& setDecryptionList(vector<string> && decryptionList) { DARABONBA_PTR_SET_RVALUE(decryptionList_, decryptionList) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline Data& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // keyPrefixList Field Functions 
      bool hasKeyPrefixList() const { return this->keyPrefixList_ != nullptr;};
      void deleteKeyPrefixList() { this->keyPrefixList_ = nullptr;};
      inline const vector<string> & getKeyPrefixList() const { DARABONBA_PTR_GET_CONST(keyPrefixList_, vector<string>) };
      inline vector<string> getKeyPrefixList() { DARABONBA_PTR_GET(keyPrefixList_, vector<string>) };
      inline Data& setKeyPrefixList(const vector<string> & keyPrefixList) { DARABONBA_PTR_SET_VALUE(keyPrefixList_, keyPrefixList) };
      inline Data& setKeyPrefixList(vector<string> && keyPrefixList) { DARABONBA_PTR_SET_RVALUE(keyPrefixList_, keyPrefixList) };


      // keySuffixList Field Functions 
      bool hasKeySuffixList() const { return this->keySuffixList_ != nullptr;};
      void deleteKeySuffixList() { this->keySuffixList_ = nullptr;};
      inline const vector<string> & getKeySuffixList() const { DARABONBA_PTR_GET_CONST(keySuffixList_, vector<string>) };
      inline vector<string> getKeySuffixList() { DARABONBA_PTR_GET(keySuffixList_, vector<string>) };
      inline Data& setKeySuffixList(const vector<string> & keySuffixList) { DARABONBA_PTR_SET_VALUE(keySuffixList_, keySuffixList) };
      inline Data& setKeySuffixList(vector<string> && keySuffixList) { DARABONBA_PTR_SET_RVALUE(keySuffixList_, keySuffixList) };


      // lastModifiedStartTime Field Functions 
      bool hasLastModifiedStartTime() const { return this->lastModifiedStartTime_ != nullptr;};
      void deleteLastModifiedStartTime() { this->lastModifiedStartTime_ = nullptr;};
      inline int64_t getLastModifiedStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedStartTime_, 0L) };
      inline Data& setLastModifiedStartTime(int64_t lastModifiedStartTime) { DARABONBA_PTR_SET_VALUE(lastModifiedStartTime_, lastModifiedStartTime) };


      // lastUpdateTime Field Functions 
      bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
      void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
      inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
      inline Data& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // realTimeIncr Field Functions 
      bool hasRealTimeIncr() const { return this->realTimeIncr_ != nullptr;};
      void deleteRealTimeIncr() { this->realTimeIncr_ = nullptr;};
      inline bool getRealTimeIncr() const { DARABONBA_PTR_GET_DEFAULT(realTimeIncr_, false) };
      inline Data& setRealTimeIncr(bool realTimeIncr) { DARABONBA_PTR_SET_VALUE(realTimeIncr_, realTimeIncr) };


      // scanDayList Field Functions 
      bool hasScanDayList() const { return this->scanDayList_ != nullptr;};
      void deleteScanDayList() { this->scanDayList_ = nullptr;};
      inline const vector<int32_t> & getScanDayList() const { DARABONBA_PTR_GET_CONST(scanDayList_, vector<int32_t>) };
      inline vector<int32_t> getScanDayList() { DARABONBA_PTR_GET(scanDayList_, vector<int32_t>) };
      inline Data& setScanDayList(const vector<int32_t> & scanDayList) { DARABONBA_PTR_SET_VALUE(scanDayList_, scanDayList) };
      inline Data& setScanDayList(vector<int32_t> && scanDayList) { DARABONBA_PTR_SET_RVALUE(scanDayList_, scanDayList) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<bool> allKeyPrefix_ {};
      shared_ptr<int32_t> bucketCount_ {};
      shared_ptr<string> bucketName_ {};
      shared_ptr<int32_t> decompressMaxFileCount_ {};
      shared_ptr<int32_t> decompressMaxLayer_ {};
      shared_ptr<vector<string>> decryptionList_ {};
      shared_ptr<int32_t> enable_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<string>> keyPrefixList_ {};
      shared_ptr<vector<string>> keySuffixList_ {};
      shared_ptr<int64_t> lastModifiedStartTime_ {};
      shared_ptr<int64_t> lastUpdateTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> realTimeIncr_ {};
      shared_ptr<vector<int32_t>> scanDayList_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOssScanConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOssScanConfigResponseBody::Data) };
    inline GetOssScanConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOssScanConfigResponseBody::Data) };
    inline GetOssScanConfigResponseBody& setData(const GetOssScanConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOssScanConfigResponseBody& setData(GetOssScanConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssScanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetOssScanConfigResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssMfd20231017
#endif
