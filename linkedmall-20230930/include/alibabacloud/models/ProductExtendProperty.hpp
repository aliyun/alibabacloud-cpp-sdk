// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTEXTENDPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTEXTENDPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductExtendProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductExtendProperty& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ProductExtendProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ProductExtendProperty() = default ;
    ProductExtendProperty(const ProductExtendProperty &) = default ;
    ProductExtendProperty(ProductExtendProperty &&) = default ;
    ProductExtendProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductExtendProperty() = default ;
    ProductExtendProperty& operator=(const ProductExtendProperty &) = default ;
    ProductExtendProperty& operator=(ProductExtendProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ProductExtendProperty& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ProductExtendProperty& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The property key.
    // 
    // > Valid values:
    // >
    // > - - `ss_picture_scene` (scene picture)
    // >
    // > - - `ss_picture_white_background` (white background picture)
    // >
    // > - - `extraPeriod` (shelf life)
    // >
    // > - - `itemBoundaryInventoryZeroTag` (Reserved. Ignore this parameter.)
    // >
    // > - - `shoppingShowTitle` (shopping guide title)
    // >
    // > - - `itemCCStatus` (Reserved. Ignore this parameter.)
    // >
    // > - - `brandLogo` (brand logo)
    // >
    // > - - `multipleBuyLimit` (purchase multiple)
    // >
    // > - - `eticket_type` (electronic coupon type)
    // >
    // > - - `eticket_upper_buy_limit` (maximum purchase quantity of electronic coupons per order)
    // >
    // > - - `validity_type` (validity period type of electronic coupon)
    // >
    // > - - `etc_expiry_date` (Validity period of the electronic coupon. Valid only when `validity_type` is `1`.)
    // >
    // > - - `etc_duration_date` (Validity period of the electronic coupon. Valid only when `validity_type` is `2`, `3`, or `5`.)
    // >
    // > - - `f_refund` (Automatic refund ratio for valid electronic coupons)
    // >
    // > - - `refund` (automatic refund ratio for expired electronic coupons)
    // >
    // > - - `writeoff` (Reserved. Ignore this parameter.)
    shared_ptr<string> key_ {};
    // The property value.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
