// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSPEC_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProductSpecValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSpec& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(keyId, keyId_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(keyId, keyId_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    ProductSpec() = default ;
    ProductSpec(const ProductSpec &) = default ;
    ProductSpec(ProductSpec &&) = default ;
    ProductSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSpec() = default ;
    ProductSpec& operator=(const ProductSpec &) = default ;
    ProductSpec& operator=(ProductSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->keyId_ == nullptr && this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ProductSpec& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline int64_t getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, 0L) };
    inline ProductSpec& setKeyId(int64_t keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<ProductSpecValue> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<ProductSpecValue>) };
    inline vector<ProductSpecValue> getValues() { DARABONBA_PTR_GET(values_, vector<ProductSpecValue>) };
    inline ProductSpec& setValues(const vector<ProductSpecValue> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ProductSpec& setValues(vector<ProductSpecValue> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<string> key_ {};
    shared_ptr<int64_t> keyId_ {};
    shared_ptr<vector<ProductSpecValue>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
