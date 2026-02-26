// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSPECVALUE_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSPECVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSpecValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSpecValue& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueAlias, valueAlias_);
      DARABONBA_PTR_TO_JSON(valueId, valueId_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSpecValue& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueAlias, valueAlias_);
      DARABONBA_PTR_FROM_JSON(valueId, valueId_);
    };
    ProductSpecValue() = default ;
    ProductSpecValue(const ProductSpecValue &) = default ;
    ProductSpecValue(ProductSpecValue &&) = default ;
    ProductSpecValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSpecValue() = default ;
    ProductSpecValue& operator=(const ProductSpecValue &) = default ;
    ProductSpecValue& operator=(ProductSpecValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr
        && this->valueAlias_ == nullptr && this->valueId_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ProductSpecValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueAlias Field Functions 
    bool hasValueAlias() const { return this->valueAlias_ != nullptr;};
    void deleteValueAlias() { this->valueAlias_ = nullptr;};
    inline string getValueAlias() const { DARABONBA_PTR_GET_DEFAULT(valueAlias_, "") };
    inline ProductSpecValue& setValueAlias(string valueAlias) { DARABONBA_PTR_SET_VALUE(valueAlias_, valueAlias) };


    // valueId Field Functions 
    bool hasValueId() const { return this->valueId_ != nullptr;};
    void deleteValueId() { this->valueId_ = nullptr;};
    inline int64_t getValueId() const { DARABONBA_PTR_GET_DEFAULT(valueId_, 0L) };
    inline ProductSpecValue& setValueId(int64_t valueId) { DARABONBA_PTR_SET_VALUE(valueId_, valueId) };


  protected:
    shared_ptr<string> value_ {};
    shared_ptr<string> valueAlias_ {};
    shared_ptr<int64_t> valueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
