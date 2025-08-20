// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSAPPCONFIGRESPONSEBODYRETVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETBUSAPPCONFIGRESPONSEBODYRETVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetBusAppConfigResponseBodyRetValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusAppConfigResponseBodyRetValue& obj) { 
      DARABONBA_PTR_TO_JSON(Cashier, cashier_);
      DARABONBA_PTR_TO_JSON(ShoppingBar, shoppingBar_);
      DARABONBA_PTR_TO_JSON(ShoppingWindow, shoppingWindow_);
      DARABONBA_PTR_TO_JSON(VipLabel, vipLabel_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusAppConfigResponseBodyRetValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Cashier, cashier_);
      DARABONBA_PTR_FROM_JSON(ShoppingBar, shoppingBar_);
      DARABONBA_PTR_FROM_JSON(ShoppingWindow, shoppingWindow_);
      DARABONBA_PTR_FROM_JSON(VipLabel, vipLabel_);
    };
    GetBusAppConfigResponseBodyRetValue() = default ;
    GetBusAppConfigResponseBodyRetValue(const GetBusAppConfigResponseBodyRetValue &) = default ;
    GetBusAppConfigResponseBodyRetValue(GetBusAppConfigResponseBodyRetValue &&) = default ;
    GetBusAppConfigResponseBodyRetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusAppConfigResponseBodyRetValue() = default ;
    GetBusAppConfigResponseBodyRetValue& operator=(const GetBusAppConfigResponseBodyRetValue &) = default ;
    GetBusAppConfigResponseBodyRetValue& operator=(GetBusAppConfigResponseBodyRetValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cashier_ != nullptr
        && this->shoppingBar_ != nullptr && this->shoppingWindow_ != nullptr && this->vipLabel_ != nullptr; };
    // cashier Field Functions 
    bool hasCashier() const { return this->cashier_ != nullptr;};
    void deleteCashier() { this->cashier_ = nullptr;};
    inline string cashier() const { DARABONBA_PTR_GET_DEFAULT(cashier_, "") };
    inline GetBusAppConfigResponseBodyRetValue& setCashier(string cashier) { DARABONBA_PTR_SET_VALUE(cashier_, cashier) };


    // shoppingBar Field Functions 
    bool hasShoppingBar() const { return this->shoppingBar_ != nullptr;};
    void deleteShoppingBar() { this->shoppingBar_ = nullptr;};
    inline string shoppingBar() const { DARABONBA_PTR_GET_DEFAULT(shoppingBar_, "") };
    inline GetBusAppConfigResponseBodyRetValue& setShoppingBar(string shoppingBar) { DARABONBA_PTR_SET_VALUE(shoppingBar_, shoppingBar) };


    // shoppingWindow Field Functions 
    bool hasShoppingWindow() const { return this->shoppingWindow_ != nullptr;};
    void deleteShoppingWindow() { this->shoppingWindow_ = nullptr;};
    inline string shoppingWindow() const { DARABONBA_PTR_GET_DEFAULT(shoppingWindow_, "") };
    inline GetBusAppConfigResponseBodyRetValue& setShoppingWindow(string shoppingWindow) { DARABONBA_PTR_SET_VALUE(shoppingWindow_, shoppingWindow) };


    // vipLabel Field Functions 
    bool hasVipLabel() const { return this->vipLabel_ != nullptr;};
    void deleteVipLabel() { this->vipLabel_ = nullptr;};
    inline string vipLabel() const { DARABONBA_PTR_GET_DEFAULT(vipLabel_, "") };
    inline GetBusAppConfigResponseBodyRetValue& setVipLabel(string vipLabel) { DARABONBA_PTR_SET_VALUE(vipLabel_, vipLabel) };


  protected:
    std::shared_ptr<string> cashier_ = nullptr;
    std::shared_ptr<string> shoppingBar_ = nullptr;
    std::shared_ptr<string> shoppingWindow_ = nullptr;
    std::shared_ptr<string> vipLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
