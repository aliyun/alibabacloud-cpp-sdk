// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PutKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Base64, base64_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Base64, base64_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutKvRequest() = default ;
    PutKvRequest(const PutKvRequest &) = default ;
    PutKvRequest(PutKvRequest &&) = default ;
    PutKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutKvRequest() = default ;
    PutKvRequest& operator=(const PutKvRequest &) = default ;
    PutKvRequest& operator=(PutKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base64_ == nullptr
        && return this->expiration_ == nullptr && return this->expirationTtl_ == nullptr && return this->key_ == nullptr && return this->namespace_ == nullptr && return this->value_ == nullptr; };
    // base64 Field Functions 
    bool hasBase64() const { return this->base64_ != nullptr;};
    void deleteBase64() { this->base64_ = nullptr;};
    inline bool base64() const { DARABONBA_PTR_GET_DEFAULT(base64_, false) };
    inline PutKvRequest& setBase64(bool base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline PutKvRequest& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline int64_t expirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
    inline PutKvRequest& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutKvRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Specifies whether the content of the key is Base64-encoded. Set this parameter to true if you want to store the key content in binary format. When this parameter is set to true, the Value parameter must be Base64-encoded.
    std::shared_ptr<bool> base64_ = nullptr;
    // The time when the key-value pair expires, which cannot be earlier than the current time. The value is a timestamp in seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
    std::shared_ptr<int64_t> expiration_ = nullptr;
    // The relative expiration time. Unit: seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
    std::shared_ptr<int64_t> expirationTtl_ = nullptr;
    // The key name. The name can be up to 512 characters in length and cannot contain spaces or backslashes (\\\\).
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The content of the key, which can be up to 2 MB (2 × 1000 × 1000). If the content is larger than 2 MB, call [PutKvWithHighCapacity](https://help.aliyun.com/document_detail/2850486.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
