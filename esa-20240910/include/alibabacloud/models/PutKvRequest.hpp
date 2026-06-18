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
        && this->expiration_ == nullptr && this->expirationTtl_ == nullptr && this->key_ == nullptr && this->namespace_ == nullptr && this->value_ == nullptr; };
    // base64 Field Functions 
    bool hasBase64() const { return this->base64_ != nullptr;};
    void deleteBase64() { this->base64_ = nullptr;};
    inline bool getBase64() const { DARABONBA_PTR_GET_DEFAULT(base64_, false) };
    inline PutKvRequest& setBase64(bool base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline PutKvRequest& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline int64_t getExpirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
    inline PutKvRequest& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutKvRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Indicates whether the Value parameter uses Base64 encoding. Set this to true when storing a binary value. If this parameter is true, Value must be a valid Base64-encoded string.
    shared_ptr<bool> base64_ {};
    // The expiration time for the key-value pair, as a Unix timestamp in seconds. This value cannot be earlier than the current time. If you specify both Expiration and ExpirationTtl, ExpirationTtl takes precedence.
    shared_ptr<int64_t> expiration_ {};
    // The time-to-live (TTL) for the key-value pair, in seconds. If you specify both Expiration and ExpirationTtl, ExpirationTtl takes precedence.
    shared_ptr<int64_t> expirationTtl_ {};
    // The key can be up to 512 bytes long and cannot contain spaces or forward slashes (/).
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The name of the namespace. You specify this name when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The value to associate with the key. The maximum size is 2 MB (2,000,000 bytes). For values that exceed this limit, use the [PutKvWithHighCapacity](https://help.aliyun.com/document_detail/2850486.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
