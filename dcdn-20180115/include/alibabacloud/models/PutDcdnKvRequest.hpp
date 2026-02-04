// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PutDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutDcdnKvRequest() = default ;
    PutDcdnKvRequest(const PutDcdnKvRequest &) = default ;
    PutDcdnKvRequest(PutDcdnKvRequest &&) = default ;
    PutDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDcdnKvRequest() = default ;
    PutDcdnKvRequest& operator=(const PutDcdnKvRequest &) = default ;
    PutDcdnKvRequest& operator=(PutDcdnKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiration_ == nullptr
        && this->expirationTtl_ == nullptr && this->key_ == nullptr && this->namespace_ == nullptr && this->value_ == nullptr; };
    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline PutDcdnKvRequest& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline int64_t getExpirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
    inline PutDcdnKvRequest& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutDcdnKvRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutDcdnKvRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The time when the key expires.Example: "1690081381".
    shared_ptr<int64_t> expiration_ {};
    // The time when the key expires.Example: "3600".
    shared_ptr<int64_t> expirationTtl_ {};
    // The key. The key can be up to 512 characters in length, and cannot contain spaces.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The name of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The value of the key. The maximum size is 2 MB (2 x 1000 x 1000 bytes).
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
