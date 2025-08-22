// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUESTKVLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUESTKVLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchPutDcdnKvRequestKvList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutDcdnKvRequestKvList& obj) { 
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutDcdnKvRequestKvList& obj) { 
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    BatchPutDcdnKvRequestKvList() = default ;
    BatchPutDcdnKvRequestKvList(const BatchPutDcdnKvRequestKvList &) = default ;
    BatchPutDcdnKvRequestKvList(BatchPutDcdnKvRequestKvList &&) = default ;
    BatchPutDcdnKvRequestKvList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutDcdnKvRequestKvList() = default ;
    BatchPutDcdnKvRequestKvList& operator=(const BatchPutDcdnKvRequestKvList &) = default ;
    BatchPutDcdnKvRequestKvList& operator=(BatchPutDcdnKvRequestKvList &&) = default ;
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
    inline BatchPutDcdnKvRequestKvList& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline int64_t expirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, 0L) };
    inline BatchPutDcdnKvRequestKvList& setExpirationTtl(int64_t expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline BatchPutDcdnKvRequestKvList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline BatchPutDcdnKvRequestKvList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> expiration_ = nullptr;
    std::shared_ptr<int64_t> expirationTtl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
