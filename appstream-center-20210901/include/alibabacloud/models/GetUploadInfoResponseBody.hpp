// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetUploadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUploadInfoResponseBody() = default ;
    GetUploadInfoResponseBody(const GetUploadInfoResponseBody &) = default ;
    GetUploadInfoResponseBody(GetUploadInfoResponseBody &&) = default ;
    GetUploadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadInfoResponseBody() = default ;
    GetUploadInfoResponseBody& operator=(const GetUploadInfoResponseBody &) = default ;
    GetUploadInfoResponseBody& operator=(GetUploadInfoResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(OssPoint, ossPoint_);
        DARABONBA_PTR_TO_JSON(OssPointInternal, ossPointInternal_);
        DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(OssPoint, ossPoint_);
        DARABONBA_PTR_FROM_JSON(OssPointInternal, ossPointInternal_);
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
        && this->accessKeySecret_ == nullptr && this->bucketName_ == nullptr && this->expiration_ == nullptr && this->filePath_ == nullptr && this->ossPoint_ == nullptr
        && this->ossPointInternal_ == nullptr && this->stsToken_ == nullptr; };
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
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Data& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // ossPoint Field Functions 
      bool hasOssPoint() const { return this->ossPoint_ != nullptr;};
      void deleteOssPoint() { this->ossPoint_ = nullptr;};
      inline string getOssPoint() const { DARABONBA_PTR_GET_DEFAULT(ossPoint_, "") };
      inline Data& setOssPoint(string ossPoint) { DARABONBA_PTR_SET_VALUE(ossPoint_, ossPoint) };


      // ossPointInternal Field Functions 
      bool hasOssPointInternal() const { return this->ossPointInternal_ != nullptr;};
      void deleteOssPointInternal() { this->ossPointInternal_ = nullptr;};
      inline string getOssPointInternal() const { DARABONBA_PTR_GET_DEFAULT(ossPointInternal_, "") };
      inline Data& setOssPointInternal(string ossPointInternal) { DARABONBA_PTR_SET_VALUE(ossPointInternal_, ossPointInternal) };


      // stsToken Field Functions 
      bool hasStsToken() const { return this->stsToken_ != nullptr;};
      void deleteStsToken() { this->stsToken_ = nullptr;};
      inline string getStsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
      inline Data& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


    protected:
      // The AccessKey ID of the STS temporary access credential.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey Secret of the STS temporary access credential. It is used together with AccessKeyId and StsToken.
      shared_ptr<string> accessKeySecret_ {};
      // The name of the destination OSS bucket for the upload.
      shared_ptr<string> bucketName_ {};
      // Not supported.
      shared_ptr<string> expiration_ {};
      // The OSS directory prefix where files are allowed to be uploaded. The path of the uploaded object must be located under this directory.
      shared_ptr<string> filePath_ {};
      // The OSS endpoint for public network access.
      shared_ptr<string> ossPoint_ {};
      // The internal OSS endpoint.
      shared_ptr<string> ossPointInternal_ {};
      // The STS temporary security token. It is used together with AccessKeyId and AccessKeySecret for file uploads.
      shared_ptr<string> stsToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUploadInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUploadInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUploadInfoResponseBody::Data) };
    inline GetUploadInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUploadInfoResponseBody::Data) };
    inline GetUploadInfoResponseBody& setData(const GetUploadInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUploadInfoResponseBody& setData(GetUploadInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUploadInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUploadInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code of the API. A value of 200 indicates success. If the call fails, the corresponding error code is returned.
    shared_ptr<string> code_ {};
    // The file upload endpoint and temporary credentials.
    shared_ptr<GetUploadInfoResponseBody::Data> data_ {};
    // The message returned by the API.
    shared_ptr<string> message_ {};
    // The ID of the request. It is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
