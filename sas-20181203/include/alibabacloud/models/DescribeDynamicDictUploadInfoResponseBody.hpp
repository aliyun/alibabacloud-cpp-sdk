// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICDICTUPLOADINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICDICTUPLOADINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDynamicDictUploadInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicDictUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessid, accessid_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicDictUploadInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    DescribeDynamicDictUploadInfoResponseBody() = default ;
    DescribeDynamicDictUploadInfoResponseBody(const DescribeDynamicDictUploadInfoResponseBody &) = default ;
    DescribeDynamicDictUploadInfoResponseBody(DescribeDynamicDictUploadInfoResponseBody &&) = default ;
    DescribeDynamicDictUploadInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicDictUploadInfoResponseBody() = default ;
    DescribeDynamicDictUploadInfoResponseBody& operator=(const DescribeDynamicDictUploadInfoResponseBody &) = default ;
    DescribeDynamicDictUploadInfoResponseBody& operator=(DescribeDynamicDictUploadInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessid_ == nullptr
        && this->expire_ == nullptr && this->host_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr && this->requestId_ == nullptr
        && this->signature_ == nullptr; };
    // accessid Field Functions 
    bool hasAccessid() const { return this->accessid_ != nullptr;};
    void deleteAccessid() { this->accessid_ = nullptr;};
    inline string getAccessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline DescribeDynamicDictUploadInfoResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // The AccessKey ID that is used to access OSS.
    shared_ptr<string> accessid_ {};
    // The validity period of the signature. The value is a UNIX timestamp.
    shared_ptr<string> expire_ {};
    // The OSS endpoint.
    shared_ptr<string> host_ {};
    // The name of the OSS object.
    shared_ptr<string> key_ {};
    // The OSS security policy.
    shared_ptr<string> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The signature that is calculated based on **AccessKeySecret** and **Policy**. When you call an OSS API operation, OSS uses the signature information to check the validity of the POST request.
    shared_ptr<string> signature_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
