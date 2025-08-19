// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODYOSSUPLOADTOKEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSUPLOADTOKENRESPONSEBODYOSSUPLOADTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssUploadTokenResponseBodyOssUploadToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssUploadTokenResponseBodyOssUploadToken& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssUploadTokenResponseBodyOssUploadToken& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeOssUploadTokenResponseBodyOssUploadToken() = default ;
    DescribeOssUploadTokenResponseBodyOssUploadToken(const DescribeOssUploadTokenResponseBodyOssUploadToken &) = default ;
    DescribeOssUploadTokenResponseBodyOssUploadToken(DescribeOssUploadTokenResponseBodyOssUploadToken &&) = default ;
    DescribeOssUploadTokenResponseBodyOssUploadToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssUploadTokenResponseBodyOssUploadToken() = default ;
    DescribeOssUploadTokenResponseBodyOssUploadToken& operator=(const DescribeOssUploadTokenResponseBodyOssUploadToken &) = default ;
    DescribeOssUploadTokenResponseBodyOssUploadToken& operator=(DescribeOssUploadTokenResponseBodyOssUploadToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->endPoint_ != nullptr && this->expired_ != nullptr && this->key_ != nullptr && this->path_ != nullptr && this->secret_ != nullptr
        && this->token_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline int64_t expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0L) };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setExpired(int64_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeOssUploadTokenResponseBodyOssUploadToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> endPoint_ = nullptr;
    std::shared_ptr<int64_t> expired_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
