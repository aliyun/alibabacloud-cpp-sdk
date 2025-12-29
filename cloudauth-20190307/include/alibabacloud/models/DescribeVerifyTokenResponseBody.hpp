// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyPageUrl, verifyPageUrl_);
      DARABONBA_PTR_TO_JSON(VerifyToken, verifyToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyPageUrl, verifyPageUrl_);
      DARABONBA_PTR_FROM_JSON(VerifyToken, verifyToken_);
    };
    DescribeVerifyTokenResponseBody() = default ;
    DescribeVerifyTokenResponseBody(const DescribeVerifyTokenResponseBody &) = default ;
    DescribeVerifyTokenResponseBody(DescribeVerifyTokenResponseBody &&) = default ;
    DescribeVerifyTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyTokenResponseBody() = default ;
    DescribeVerifyTokenResponseBody& operator=(const DescribeVerifyTokenResponseBody &) = default ;
    DescribeVerifyTokenResponseBody& operator=(DescribeVerifyTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OssUploadToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssUploadToken& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Secret, secret_);
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, OssUploadToken& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Secret, secret_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
      };
      OssUploadToken() = default ;
      OssUploadToken(const OssUploadToken &) = default ;
      OssUploadToken(OssUploadToken &&) = default ;
      OssUploadToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssUploadToken() = default ;
      OssUploadToken& operator=(const OssUploadToken &) = default ;
      OssUploadToken& operator=(OssUploadToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->endPoint_ == nullptr && this->expired_ == nullptr && this->key_ == nullptr && this->path_ == nullptr && this->secret_ == nullptr
        && this->token_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline OssUploadToken& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // endPoint Field Functions 
      bool hasEndPoint() const { return this->endPoint_ != nullptr;};
      void deleteEndPoint() { this->endPoint_ = nullptr;};
      inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
      inline OssUploadToken& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline int64_t getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0L) };
      inline OssUploadToken& setExpired(int64_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline OssUploadToken& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline OssUploadToken& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
      inline OssUploadToken& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline OssUploadToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // OSS file storage bucket.
      shared_ptr<string> bucket_ {};
      // Access endpoint.
      shared_ptr<string> endPoint_ {};
      // Expiration time. Expressed in timestamp format, unit: milliseconds.
      shared_ptr<int64_t> expired_ {};
      // The key required for file upload.
      shared_ptr<string> key_ {};
      // File storage path.
      shared_ptr<string> path_ {};
      // The secret required for file upload.
      shared_ptr<string> secret_ {};
      // The token required for file upload.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->ossUploadToken_ == nullptr
        && this->requestId_ == nullptr && this->verifyPageUrl_ == nullptr && this->verifyToken_ == nullptr; };
    // ossUploadToken Field Functions 
    bool hasOssUploadToken() const { return this->ossUploadToken_ != nullptr;};
    void deleteOssUploadToken() { this->ossUploadToken_ = nullptr;};
    inline const DescribeVerifyTokenResponseBody::OssUploadToken & getOssUploadToken() const { DARABONBA_PTR_GET_CONST(ossUploadToken_, DescribeVerifyTokenResponseBody::OssUploadToken) };
    inline DescribeVerifyTokenResponseBody::OssUploadToken getOssUploadToken() { DARABONBA_PTR_GET(ossUploadToken_, DescribeVerifyTokenResponseBody::OssUploadToken) };
    inline DescribeVerifyTokenResponseBody& setOssUploadToken(const DescribeVerifyTokenResponseBody::OssUploadToken & ossUploadToken) { DARABONBA_PTR_SET_VALUE(ossUploadToken_, ossUploadToken) };
    inline DescribeVerifyTokenResponseBody& setOssUploadToken(DescribeVerifyTokenResponseBody::OssUploadToken && ossUploadToken) { DARABONBA_PTR_SET_RVALUE(ossUploadToken_, ossUploadToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyPageUrl Field Functions 
    bool hasVerifyPageUrl() const { return this->verifyPageUrl_ != nullptr;};
    void deleteVerifyPageUrl() { this->verifyPageUrl_ = nullptr;};
    inline string getVerifyPageUrl() const { DARABONBA_PTR_GET_DEFAULT(verifyPageUrl_, "") };
    inline DescribeVerifyTokenResponseBody& setVerifyPageUrl(string verifyPageUrl) { DARABONBA_PTR_SET_VALUE(verifyPageUrl_, verifyPageUrl) };


    // verifyToken Field Functions 
    bool hasVerifyToken() const { return this->verifyToken_ != nullptr;};
    void deleteVerifyToken() { this->verifyToken_ = nullptr;};
    inline string getVerifyToken() const { DARABONBA_PTR_GET_DEFAULT(verifyToken_, "") };
    inline DescribeVerifyTokenResponseBody& setVerifyToken(string verifyToken) { DARABONBA_PTR_SET_VALUE(verifyToken_, verifyToken) };


  protected:
    // OSS upload token information.
    shared_ptr<DescribeVerifyTokenResponseBody::OssUploadToken> ossUploadToken_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    // The entry link for the original H5 verification scheme, which has been discontinued and no longer supports new integrations. If you need to integrate an H5 verification scheme, it is recommended to use the [PC or mobile H5 web integration solution](https://help.aliyun.com/document_detail/173779.html) of financial-grade real-person authentication.
    shared_ptr<string> verifyPageUrl_ {};
    // The token for this verification, used to link various interfaces in the verification request, valid for 30 minutes.
    shared_ptr<string> verifyToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
