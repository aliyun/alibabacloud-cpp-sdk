// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPACCESSTOKENINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEMPACCESSTOKENINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class TempAccessTokenIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempAccessTokenIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TempAccessTokenIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TempAccessTokenIntlResponseBody() = default ;
    TempAccessTokenIntlResponseBody(const TempAccessTokenIntlResponseBody &) = default ;
    TempAccessTokenIntlResponseBody(TempAccessTokenIntlResponseBody &&) = default ;
    TempAccessTokenIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempAccessTokenIntlResponseBody() = default ;
    TempAccessTokenIntlResponseBody& operator=(const TempAccessTokenIntlResponseBody &) = default ;
    TempAccessTokenIntlResponseBody& operator=(TempAccessTokenIntlResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(FileNamePrefix, fileNamePrefix_);
        DARABONBA_PTR_TO_JSON(OssEndPoint, ossEndPoint_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(FileNamePrefix, fileNamePrefix_);
        DARABONBA_PTR_FROM_JSON(OssEndPoint, ossEndPoint_);
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
        && this->accessKeySecret_ == nullptr && this->bucketName_ == nullptr && this->fileNamePrefix_ == nullptr && this->ossEndPoint_ == nullptr && this->securityToken_ == nullptr; };
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


      // fileNamePrefix Field Functions 
      bool hasFileNamePrefix() const { return this->fileNamePrefix_ != nullptr;};
      void deleteFileNamePrefix() { this->fileNamePrefix_ = nullptr;};
      inline string getFileNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(fileNamePrefix_, "") };
      inline Data& setFileNamePrefix(string fileNamePrefix) { DARABONBA_PTR_SET_VALUE(fileNamePrefix_, fileNamePrefix) };


      // ossEndPoint Field Functions 
      bool hasOssEndPoint() const { return this->ossEndPoint_ != nullptr;};
      void deleteOssEndPoint() { this->ossEndPoint_ = nullptr;};
      inline string getOssEndPoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndPoint_, "") };
      inline Data& setOssEndPoint(string ossEndPoint) { DARABONBA_PTR_SET_VALUE(ossEndPoint_, ossEndPoint) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      // AccessKeyId for temporary file upload credentials.
      shared_ptr<string> accessKeyId_ {};
      // Temporary authorization secret.
      shared_ptr<string> accessKeySecret_ {};
      // Bucket name.
      shared_ptr<string> bucketName_ {};
      // File prefix.
      shared_ptr<string> fileNamePrefix_ {};
      // OSS endpoint.
      shared_ptr<string> ossEndPoint_ {};
      // Security token for temporary file upload credentials.
      shared_ptr<string> securityToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TempAccessTokenIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TempAccessTokenIntlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TempAccessTokenIntlResponseBody::Data) };
    inline TempAccessTokenIntlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TempAccessTokenIntlResponseBody::Data) };
    inline TempAccessTokenIntlResponseBody& setData(const TempAccessTokenIntlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TempAccessTokenIntlResponseBody& setData(TempAccessTokenIntlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TempAccessTokenIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TempAccessTokenIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Return result.
    shared_ptr<TempAccessTokenIntlResponseBody::Data> data_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
