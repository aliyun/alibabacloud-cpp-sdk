// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class CreateOssUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateOssUploadTokenResponseBody() = default ;
    CreateOssUploadTokenResponseBody(const CreateOssUploadTokenResponseBody &) = default ;
    CreateOssUploadTokenResponseBody(CreateOssUploadTokenResponseBody &&) = default ;
    CreateOssUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssUploadTokenResponseBody() = default ;
    CreateOssUploadTokenResponseBody& operator=(const CreateOssUploadTokenResponseBody &) = default ;
    CreateOssUploadTokenResponseBody& operator=(CreateOssUploadTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->expireTime_ == nullptr && this->host_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr && this->requestId_ == nullptr
        && this->signature_ == nullptr && this->url_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline CreateOssUploadTokenResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateOssUploadTokenResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateOssUploadTokenResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateOssUploadTokenResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateOssUploadTokenResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOssUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateOssUploadTokenResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateOssUploadTokenResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> accessId_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> host_ {};
    shared_ptr<string> key_ {};
    shared_ptr<string> policy_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> signature_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
