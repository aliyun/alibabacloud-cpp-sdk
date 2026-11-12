// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSAPPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUSAPPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetBusAppConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusAppConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusAppConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
    };
    GetBusAppConfigResponseBody() = default ;
    GetBusAppConfigResponseBody(const GetBusAppConfigResponseBody &) = default ;
    GetBusAppConfigResponseBody(GetBusAppConfigResponseBody &&) = default ;
    GetBusAppConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusAppConfigResponseBody() = default ;
    GetBusAppConfigResponseBody& operator=(const GetBusAppConfigResponseBody &) = default ;
    GetBusAppConfigResponseBody& operator=(GetBusAppConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetValue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetValue& obj) { 
        DARABONBA_PTR_TO_JSON(Cashier, cashier_);
        DARABONBA_PTR_TO_JSON(ShoppingBar, shoppingBar_);
        DARABONBA_PTR_TO_JSON(ShoppingWindow, shoppingWindow_);
        DARABONBA_PTR_TO_JSON(VipLabel, vipLabel_);
      };
      friend void from_json(const Darabonba::Json& j, RetValue& obj) { 
        DARABONBA_PTR_FROM_JSON(Cashier, cashier_);
        DARABONBA_PTR_FROM_JSON(ShoppingBar, shoppingBar_);
        DARABONBA_PTR_FROM_JSON(ShoppingWindow, shoppingWindow_);
        DARABONBA_PTR_FROM_JSON(VipLabel, vipLabel_);
      };
      RetValue() = default ;
      RetValue(const RetValue &) = default ;
      RetValue(RetValue &&) = default ;
      RetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetValue() = default ;
      RetValue& operator=(const RetValue &) = default ;
      RetValue& operator=(RetValue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cashier_ == nullptr
        && this->shoppingBar_ == nullptr && this->shoppingWindow_ == nullptr && this->vipLabel_ == nullptr; };
      // cashier Field Functions 
      bool hasCashier() const { return this->cashier_ != nullptr;};
      void deleteCashier() { this->cashier_ = nullptr;};
      inline string getCashier() const { DARABONBA_PTR_GET_DEFAULT(cashier_, "") };
      inline RetValue& setCashier(string cashier) { DARABONBA_PTR_SET_VALUE(cashier_, cashier) };


      // shoppingBar Field Functions 
      bool hasShoppingBar() const { return this->shoppingBar_ != nullptr;};
      void deleteShoppingBar() { this->shoppingBar_ = nullptr;};
      inline string getShoppingBar() const { DARABONBA_PTR_GET_DEFAULT(shoppingBar_, "") };
      inline RetValue& setShoppingBar(string shoppingBar) { DARABONBA_PTR_SET_VALUE(shoppingBar_, shoppingBar) };


      // shoppingWindow Field Functions 
      bool hasShoppingWindow() const { return this->shoppingWindow_ != nullptr;};
      void deleteShoppingWindow() { this->shoppingWindow_ = nullptr;};
      inline string getShoppingWindow() const { DARABONBA_PTR_GET_DEFAULT(shoppingWindow_, "") };
      inline RetValue& setShoppingWindow(string shoppingWindow) { DARABONBA_PTR_SET_VALUE(shoppingWindow_, shoppingWindow) };


      // vipLabel Field Functions 
      bool hasVipLabel() const { return this->vipLabel_ != nullptr;};
      void deleteVipLabel() { this->vipLabel_ = nullptr;};
      inline string getVipLabel() const { DARABONBA_PTR_GET_DEFAULT(vipLabel_, "") };
      inline RetValue& setVipLabel(string vipLabel) { DARABONBA_PTR_SET_VALUE(vipLabel_, vipLabel) };


    protected:
      // Cashier URL
      shared_ptr<string> cashier_ {};
      // Shopping guide bar URL
      shared_ptr<string> shoppingBar_ {};
      // Shopping guide pop-up URL
      shared_ptr<string> shoppingWindow_ {};
      // VIP label transparency URL
      shared_ptr<string> vipLabel_ {};
    };

    virtual bool empty() const override { return this->retCode_ == nullptr
        && this->retMsg_ == nullptr && this->retValue_ == nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline GetBusAppConfigResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string getRetMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline GetBusAppConfigResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline const GetBusAppConfigResponseBody::RetValue & getRetValue() const { DARABONBA_PTR_GET_CONST(retValue_, GetBusAppConfigResponseBody::RetValue) };
    inline GetBusAppConfigResponseBody::RetValue getRetValue() { DARABONBA_PTR_GET(retValue_, GetBusAppConfigResponseBody::RetValue) };
    inline GetBusAppConfigResponseBody& setRetValue(const GetBusAppConfigResponseBody::RetValue & retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };
    inline GetBusAppConfigResponseBody& setRetValue(GetBusAppConfigResponseBody::RetValue && retValue) { DARABONBA_PTR_SET_RVALUE(retValue_, retValue) };


  protected:
    // Error code returned. 0 indicates success.
    shared_ptr<int32_t> retCode_ {};
    // Error message returned. No message is returned if the operation succeeded.
    shared_ptr<string> retMsg_ {};
    // Configuration Information (VIP label, shopping guide bar, shopping guide pop-up)
    shared_ptr<GetBusAppConfigResponseBody::RetValue> retValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
