// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetFileUploadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileUploadInfoResponseBody() = default ;
    GetFileUploadInfoResponseBody(const GetFileUploadInfoResponseBody &) = default ;
    GetFileUploadInfoResponseBody(GetFileUploadInfoResponseBody &&) = default ;
    GetFileUploadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadInfoResponseBody() = default ;
    GetFileUploadInfoResponseBody& operator=(const GetFileUploadInfoResponseBody &) = default ;
    GetFileUploadInfoResponseBody& operator=(GetFileUploadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(MaxFileSize, maxFileSize_);
        DARABONBA_PTR_TO_JSON(OssPoint, ossPoint_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(MaxFileSize, maxFileSize_);
        DARABONBA_PTR_FROM_JSON(OssPoint, ossPoint_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
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
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->bucketName_ == nullptr && this->expiration_ == nullptr && this->filePath_ == nullptr && this->maxFileSize_ == nullptr && this->ossPoint_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr && this->signature_ == nullptr && this->stsToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Data& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Data& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // maxFileSize Field Functions 
      bool hasMaxFileSize() const { return this->maxFileSize_ != nullptr;};
      void deleteMaxFileSize() { this->maxFileSize_ = nullptr;};
      inline int64_t getMaxFileSize() const { DARABONBA_PTR_GET_DEFAULT(maxFileSize_, 0L) };
      inline Data& setMaxFileSize(int64_t maxFileSize) { DARABONBA_PTR_SET_VALUE(maxFileSize_, maxFileSize) };


      // ossPoint Field Functions 
      bool hasOssPoint() const { return this->ossPoint_ != nullptr;};
      void deleteOssPoint() { this->ossPoint_ = nullptr;};
      inline string getOssPoint() const { DARABONBA_PTR_GET_DEFAULT(ossPoint_, "") };
      inline Data& setOssPoint(string ossPoint) { DARABONBA_PTR_SET_VALUE(ossPoint_, ossPoint) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Data& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // stsToken Field Functions 
      bool hasStsToken() const { return this->stsToken_ != nullptr;};
      void deleteStsToken() { this->stsToken_ = nullptr;};
      inline string getStsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
      inline Data& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


    protected:
      // The temporary AccessKey ID returned by Security Token Service (STS).
      shared_ptr<string> accessKeyId_ {};
      // The bucket name.
      shared_ptr<string> bucketName_ {};
      // The expiration time.
      shared_ptr<string> expiration_ {};
      // The folder path.
      shared_ptr<string> filePath_ {};
      // The maximum file size in bytes.
      shared_ptr<int64_t> maxFileSize_ {};
      // The OSS endpoint.
      shared_ptr<string> ossPoint_ {};
      // The PostObject policy (Base64-encoded).
      shared_ptr<string> policy_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The PostObject policy signature (HMAC-SHA1).
      shared_ptr<string> signature_ {};
      // The temporary token returned by STS.
      shared_ptr<string> stsToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileUploadInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileUploadInfoResponseBody::Data) };
    inline GetFileUploadInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileUploadInfoResponseBody::Data) };
    inline GetFileUploadInfoResponseBody& setData(const GetFileUploadInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileUploadInfoResponseBody& setData(GetFileUploadInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileUploadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returns None.
    shared_ptr<GetFileUploadInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
