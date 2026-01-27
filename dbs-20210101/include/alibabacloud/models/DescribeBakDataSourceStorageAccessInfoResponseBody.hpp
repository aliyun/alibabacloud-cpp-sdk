// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBAKDATASOURCESTORAGEACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBAKDATASOURCESTORAGEACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeBakDataSourceStorageAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBakDataSourceStorageAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBakDataSourceStorageAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBakDataSourceStorageAccessInfoResponseBody() = default ;
    DescribeBakDataSourceStorageAccessInfoResponseBody(const DescribeBakDataSourceStorageAccessInfoResponseBody &) = default ;
    DescribeBakDataSourceStorageAccessInfoResponseBody(DescribeBakDataSourceStorageAccessInfoResponseBody &&) = default ;
    DescribeBakDataSourceStorageAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBakDataSourceStorageAccessInfoResponseBody() = default ;
    DescribeBakDataSourceStorageAccessInfoResponseBody& operator=(const DescribeBakDataSourceStorageAccessInfoResponseBody &) = default ;
    DescribeBakDataSourceStorageAccessInfoResponseBody& operator=(DescribeBakDataSourceStorageAccessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OssAccessInfo, ossAccessInfo_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OssAccessInfo, ossAccessInfo_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
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
      class OssAccessInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssAccessInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
          DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
          DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_TO_JSON(OssInternalEndpoint, ossInternalEndpoint_);
          DARABONBA_PTR_TO_JSON(OssRegion, ossRegion_);
          DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        };
        friend void from_json(const Darabonba::Json& j, OssAccessInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
          DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
          DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
          DARABONBA_PTR_FROM_JSON(OssInternalEndpoint, ossInternalEndpoint_);
          DARABONBA_PTR_FROM_JSON(OssRegion, ossRegion_);
          DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        };
        OssAccessInfo() = default ;
        OssAccessInfo(const OssAccessInfo &) = default ;
        OssAccessInfo(OssAccessInfo &&) = default ;
        OssAccessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssAccessInfo() = default ;
        OssAccessInfo& operator=(const OssAccessInfo &) = default ;
        OssAccessInfo& operator=(OssAccessInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->bucketName_ == nullptr && this->expiredTime_ == nullptr && this->objectKey_ == nullptr && this->ossEndpoint_ == nullptr
        && this->ossInternalEndpoint_ == nullptr && this->ossRegion_ == nullptr && this->securityToken_ == nullptr; };
        // accessKeyId Field Functions 
        bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
        void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
        inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
        inline OssAccessInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


        // accessKeySecret Field Functions 
        bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
        void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
        inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
        inline OssAccessInfo& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssAccessInfo& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline OssAccessInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // objectKey Field Functions 
        bool hasObjectKey() const { return this->objectKey_ != nullptr;};
        void deleteObjectKey() { this->objectKey_ = nullptr;};
        inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
        inline OssAccessInfo& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


        // ossEndpoint Field Functions 
        bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
        void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
        inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
        inline OssAccessInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


        // ossInternalEndpoint Field Functions 
        bool hasOssInternalEndpoint() const { return this->ossInternalEndpoint_ != nullptr;};
        void deleteOssInternalEndpoint() { this->ossInternalEndpoint_ = nullptr;};
        inline string getOssInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternalEndpoint_, "") };
        inline OssAccessInfo& setOssInternalEndpoint(string ossInternalEndpoint) { DARABONBA_PTR_SET_VALUE(ossInternalEndpoint_, ossInternalEndpoint) };


        // ossRegion Field Functions 
        bool hasOssRegion() const { return this->ossRegion_ != nullptr;};
        void deleteOssRegion() { this->ossRegion_ = nullptr;};
        inline string getOssRegion() const { DARABONBA_PTR_GET_DEFAULT(ossRegion_, "") };
        inline OssAccessInfo& setOssRegion(string ossRegion) { DARABONBA_PTR_SET_VALUE(ossRegion_, ossRegion) };


        // securityToken Field Functions 
        bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
        void deleteSecurityToken() { this->securityToken_ = nullptr;};
        inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
        inline OssAccessInfo& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      protected:
        shared_ptr<string> accessKeyId_ {};
        shared_ptr<string> accessKeySecret_ {};
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> expiredTime_ {};
        shared_ptr<string> objectKey_ {};
        shared_ptr<string> ossEndpoint_ {};
        shared_ptr<string> ossInternalEndpoint_ {};
        shared_ptr<string> ossRegion_ {};
        shared_ptr<string> securityToken_ {};
      };

      virtual bool empty() const override { return this->ossAccessInfo_ == nullptr
        && this->storageType_ == nullptr; };
      // ossAccessInfo Field Functions 
      bool hasOssAccessInfo() const { return this->ossAccessInfo_ != nullptr;};
      void deleteOssAccessInfo() { this->ossAccessInfo_ = nullptr;};
      inline const Data::OssAccessInfo & getOssAccessInfo() const { DARABONBA_PTR_GET_CONST(ossAccessInfo_, Data::OssAccessInfo) };
      inline Data::OssAccessInfo getOssAccessInfo() { DARABONBA_PTR_GET(ossAccessInfo_, Data::OssAccessInfo) };
      inline Data& setOssAccessInfo(const Data::OssAccessInfo & ossAccessInfo) { DARABONBA_PTR_SET_VALUE(ossAccessInfo_, ossAccessInfo) };
      inline Data& setOssAccessInfo(Data::OssAccessInfo && ossAccessInfo) { DARABONBA_PTR_SET_RVALUE(ossAccessInfo_, ossAccessInfo) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      shared_ptr<Data::OssAccessInfo> ossAccessInfo_ {};
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeBakDataSourceStorageAccessInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeBakDataSourceStorageAccessInfoResponseBody::Data) };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeBakDataSourceStorageAccessInfoResponseBody::Data) };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setData(const DescribeBakDataSourceStorageAccessInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setData(DescribeBakDataSourceStorageAccessInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeBakDataSourceStorageAccessInfoResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeBakDataSourceStorageAccessInfoResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
