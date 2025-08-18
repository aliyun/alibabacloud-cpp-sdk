// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVREQUESTKVLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVREQUESTKVLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvRequestKvList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvRequestKvList& obj) { 
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvRequestKvList& obj) { 
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    BatchPutKvRequestKvList() = default ;
    BatchPutKvRequestKvList(const BatchPutKvRequestKvList &) = default ;
    BatchPutKvRequestKvList(BatchPutKvRequestKvList &&) = default ;
    BatchPutKvRequestKvList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvRequestKvList() = default ;
    BatchPutKvRequestKvList& operator=(const BatchPutKvRequestKvList &) = default ;
    BatchPutKvRequestKvList& operator=(BatchPutKvRequestKvList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiration_ != nullptr
        && this->expirationTtl_ != nullptr && this->key_ != nullptr && this->value_ != nullptr; };
    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline BatchPutKvRequestKvList& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline int64_t expirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
    inline BatchPutKvRequestKvList& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline BatchPutKvRequestKvList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline BatchPutKvRequestKvList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The time when the key-value pair expires, which cannot be earlier than the current time. The value is a timestamp in seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
    std::shared_ptr<int64_t> expiration_ = nullptr;
    // The relative expiration time. Unit: seconds. If you specify both Expiration and ExpirationTtl, only ExpirationTtl takes effect.
    std::shared_ptr<int64_t> expirationTtl_ = nullptr;
    // The key name. The name can be up to 512 characters in length and cannot contain spaces or backslashes (\\\\).
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The key content.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
