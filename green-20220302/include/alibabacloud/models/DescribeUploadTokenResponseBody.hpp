// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUploadTokenResponseBody() = default ;
    DescribeUploadTokenResponseBody(const DescribeUploadTokenResponseBody &) = default ;
    DescribeUploadTokenResponseBody(DescribeUploadTokenResponseBody &&) = default ;
    DescribeUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUploadTokenResponseBody() = default ;
    DescribeUploadTokenResponseBody& operator=(const DescribeUploadTokenResponseBody &) = default ;
    DescribeUploadTokenResponseBody& operator=(DescribeUploadTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(FileNamePrefix, fileNamePrefix_);
        DARABONBA_PTR_TO_JSON(OssInternalEndPoint, ossInternalEndPoint_);
        DARABONBA_PTR_TO_JSON(OssInternetEndPoint, ossInternetEndPoint_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(FileNamePrefix, fileNamePrefix_);
        DARABONBA_PTR_FROM_JSON(OssInternalEndPoint, ossInternalEndPoint_);
        DARABONBA_PTR_FROM_JSON(OssInternetEndPoint, ossInternetEndPoint_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
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
        && this->accessKeySecret_ == nullptr && this->bucketName_ == nullptr && this->expiration_ == nullptr && this->fileNamePrefix_ == nullptr && this->ossInternalEndPoint_ == nullptr
        && this->ossInternetEndPoint_ == nullptr && this->securityToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Data& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Data& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline int32_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
      inline Data& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // fileNamePrefix Field Functions 
      bool hasFileNamePrefix() const { return this->fileNamePrefix_ != nullptr;};
      void deleteFileNamePrefix() { this->fileNamePrefix_ = nullptr;};
      inline string getFileNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(fileNamePrefix_, "") };
      inline Data& setFileNamePrefix(string fileNamePrefix) { DARABONBA_PTR_SET_VALUE(fileNamePrefix_, fileNamePrefix) };


      // ossInternalEndPoint Field Functions 
      bool hasOssInternalEndPoint() const { return this->ossInternalEndPoint_ != nullptr;};
      void deleteOssInternalEndPoint() { this->ossInternalEndPoint_ = nullptr;};
      inline string getOssInternalEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternalEndPoint_, "") };
      inline Data& setOssInternalEndPoint(string ossInternalEndPoint) { DARABONBA_PTR_SET_VALUE(ossInternalEndPoint_, ossInternalEndPoint) };


      // ossInternetEndPoint Field Functions 
      bool hasOssInternetEndPoint() const { return this->ossInternetEndPoint_ != nullptr;};
      void deleteOssInternetEndPoint() { this->ossInternetEndPoint_ = nullptr;};
      inline string getOssInternetEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossInternetEndPoint_, "") };
      inline Data& setOssInternetEndPoint(string ossInternetEndPoint) { DARABONBA_PTR_SET_VALUE(ossInternetEndPoint_, ossInternetEndPoint) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey secret.
      shared_ptr<string> accessKeySecret_ {};
      // The bucket name.
      shared_ptr<string> bucketName_ {};
      // The time when the file sharing link expires.
      shared_ptr<int32_t> expiration_ {};
      // The file prefix.
      shared_ptr<string> fileNamePrefix_ {};
      // the oss intranet point.
      shared_ptr<string> ossInternalEndPoint_ {};
      // the oss internet point.
      shared_ptr<string> ossInternetEndPoint_ {};
      // The security token.
      shared_ptr<string> securityToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeUploadTokenResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUploadTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUploadTokenResponseBody::Data) };
    inline DescribeUploadTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUploadTokenResponseBody::Data) };
    inline DescribeUploadTokenResponseBody& setData(const DescribeUploadTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUploadTokenResponseBody& setData(DescribeUploadTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeUploadTokenResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeUploadTokenResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
