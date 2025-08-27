// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(company_pay_fee, companyPayFee_);
      DARABONBA_PTR_TO_JSON(person_pay_fee, personPayFee_);
      DARABONBA_PTR_TO_JSON(third_pay_account, thirdPayAccount_);
      DARABONBA_PTR_TO_JSON(third_trade_no, thirdTradeNo_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(company_pay_fee, companyPayFee_);
      DARABONBA_PTR_FROM_JSON(person_pay_fee, personPayFee_);
      DARABONBA_PTR_FROM_JSON(third_pay_account, thirdPayAccount_);
      DARABONBA_PTR_FROM_JSON(third_trade_no, thirdTradeNo_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    HotelOrderPayRequest() = default ;
    HotelOrderPayRequest(const HotelOrderPayRequest &) = default ;
    HotelOrderPayRequest(HotelOrderPayRequest &&) = default ;
    HotelOrderPayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPayRequest() = default ;
    HotelOrderPayRequest& operator=(const HotelOrderPayRequest &) = default ;
    HotelOrderPayRequest& operator=(HotelOrderPayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripOrderId_ != nullptr
        && this->btripUserId_ != nullptr && this->companyPayFee_ != nullptr && this->personPayFee_ != nullptr && this->thirdPayAccount_ != nullptr && this->thirdTradeNo_ != nullptr
        && this->totalPrice_ != nullptr; };
    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline HotelOrderPayRequest& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderPayRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // companyPayFee Field Functions 
    bool hasCompanyPayFee() const { return this->companyPayFee_ != nullptr;};
    void deleteCompanyPayFee() { this->companyPayFee_ = nullptr;};
    inline int64_t companyPayFee() const { DARABONBA_PTR_GET_DEFAULT(companyPayFee_, 0L) };
    inline HotelOrderPayRequest& setCompanyPayFee(int64_t companyPayFee) { DARABONBA_PTR_SET_VALUE(companyPayFee_, companyPayFee) };


    // personPayFee Field Functions 
    bool hasPersonPayFee() const { return this->personPayFee_ != nullptr;};
    void deletePersonPayFee() { this->personPayFee_ = nullptr;};
    inline int64_t personPayFee() const { DARABONBA_PTR_GET_DEFAULT(personPayFee_, 0L) };
    inline HotelOrderPayRequest& setPersonPayFee(int64_t personPayFee) { DARABONBA_PTR_SET_VALUE(personPayFee_, personPayFee) };


    // thirdPayAccount Field Functions 
    bool hasThirdPayAccount() const { return this->thirdPayAccount_ != nullptr;};
    void deleteThirdPayAccount() { this->thirdPayAccount_ = nullptr;};
    inline string thirdPayAccount() const { DARABONBA_PTR_GET_DEFAULT(thirdPayAccount_, "") };
    inline HotelOrderPayRequest& setThirdPayAccount(string thirdPayAccount) { DARABONBA_PTR_SET_VALUE(thirdPayAccount_, thirdPayAccount) };


    // thirdTradeNo Field Functions 
    bool hasThirdTradeNo() const { return this->thirdTradeNo_ != nullptr;};
    void deleteThirdTradeNo() { this->thirdTradeNo_ = nullptr;};
    inline string thirdTradeNo() const { DARABONBA_PTR_GET_DEFAULT(thirdTradeNo_, "") };
    inline HotelOrderPayRequest& setThirdTradeNo(string thirdTradeNo) { DARABONBA_PTR_SET_VALUE(thirdTradeNo_, thirdTradeNo) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline HotelOrderPayRequest& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    // 供应商订单号（取自创单返回的订单号）
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> companyPayFee_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> personPayFee_ = nullptr;
    std::shared_ptr<string> thirdPayAccount_ = nullptr;
    std::shared_ptr<string> thirdTradeNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
