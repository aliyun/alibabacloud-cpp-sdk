// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKUSPEC_HPP_
#define ALIBABACLOUD_MODELS_SKUSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SkuSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkuSpec& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(keyId, keyId_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueAlias, valueAlias_);
      DARABONBA_PTR_TO_JSON(valueId, valueId_);
    };
    friend void from_json(const Darabonba::Json& j, SkuSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(keyId, keyId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueAlias, valueAlias_);
      DARABONBA_PTR_FROM_JSON(valueId, valueId_);
    };
    SkuSpec() = default ;
    SkuSpec(const SkuSpec &) = default ;
    SkuSpec(SkuSpec &&) = default ;
    SkuSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkuSpec() = default ;
    SkuSpec& operator=(const SkuSpec &) = default ;
    SkuSpec& operator=(SkuSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->keyId_ == nullptr && this->value_ == nullptr && this->valueAlias_ == nullptr && this->valueId_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SkuSpec& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline int64_t getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, 0L) };
    inline SkuSpec& setKeyId(int64_t keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SkuSpec& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueAlias Field Functions 
    bool hasValueAlias() const { return this->valueAlias_ != nullptr;};
    void deleteValueAlias() { this->valueAlias_ = nullptr;};
    inline string getValueAlias() const { DARABONBA_PTR_GET_DEFAULT(valueAlias_, "") };
    inline SkuSpec& setValueAlias(string valueAlias) { DARABONBA_PTR_SET_VALUE(valueAlias_, valueAlias) };


    // valueId Field Functions 
    bool hasValueId() const { return this->valueId_ != nullptr;};
    void deleteValueId() { this->valueId_ = nullptr;};
    inline int64_t getValueId() const { DARABONBA_PTR_GET_DEFAULT(valueId_, 0L) };
    inline SkuSpec& setValueId(int64_t valueId) { DARABONBA_PTR_SET_VALUE(valueId_, valueId) };


  protected:
    shared_ptr<string> key_ {};
    shared_ptr<int64_t> keyId_ {};
    shared_ptr<string> value_ {};
    shared_ptr<string> valueAlias_ {};
    shared_ptr<int64_t> valueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
