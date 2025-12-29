// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssUploadToken, ossUploadToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssUploadTokenResponseBody() = default ;
    DescribeOssUploadTokenResponseBody(const DescribeOssUploadTokenResponseBody &) = default ;
    DescribeOssUploadTokenResponseBody(DescribeOssUploadTokenResponseBody &&) = default ;
    DescribeOssUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssUploadTokenResponseBody() = default ;
    DescribeOssUploadTokenResponseBody& operator=(const DescribeOssUploadTokenResponseBody &) = default ;
    DescribeOssUploadTokenResponseBody& operator=(DescribeOssUploadTokenResponseBody &&) = default ;
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
      // OSS bucket for file storage.
      shared_ptr<string> bucket_ {};
      // Access endpoint.
      shared_ptr<string> endPoint_ {};
      // Expiration time.
      shared_ptr<int64_t> expired_ {};
      // The Key required for file upload.
      shared_ptr<string> key_ {};
      // File storage path.
      shared_ptr<string> path_ {};
      // The Secret required for file upload.
      shared_ptr<string> secret_ {};
      // The Token required for file upload.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->ossUploadToken_ == nullptr
        && this->requestId_ == nullptr; };
    // ossUploadToken Field Functions 
    bool hasOssUploadToken() const { return this->ossUploadToken_ != nullptr;};
    void deleteOssUploadToken() { this->ossUploadToken_ = nullptr;};
    inline const DescribeOssUploadTokenResponseBody::OssUploadToken & getOssUploadToken() const { DARABONBA_PTR_GET_CONST(ossUploadToken_, DescribeOssUploadTokenResponseBody::OssUploadToken) };
    inline DescribeOssUploadTokenResponseBody::OssUploadToken getOssUploadToken() { DARABONBA_PTR_GET(ossUploadToken_, DescribeOssUploadTokenResponseBody::OssUploadToken) };
    inline DescribeOssUploadTokenResponseBody& setOssUploadToken(const DescribeOssUploadTokenResponseBody::OssUploadToken & ossUploadToken) { DARABONBA_PTR_SET_VALUE(ossUploadToken_, ossUploadToken) };
    inline DescribeOssUploadTokenResponseBody& setOssUploadToken(DescribeOssUploadTokenResponseBody::OssUploadToken && ossUploadToken) { DARABONBA_PTR_SET_RVALUE(ossUploadToken_, ossUploadToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the OSS upload Token.
    shared_ptr<DescribeOssUploadTokenResponseBody::OssUploadToken> ossUploadToken_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
