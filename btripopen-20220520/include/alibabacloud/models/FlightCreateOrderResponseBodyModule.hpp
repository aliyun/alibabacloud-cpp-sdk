// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(payment_price, paymentPrice_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(payment_price, paymentPrice_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    FlightCreateOrderResponseBodyModule() = default ;
    FlightCreateOrderResponseBodyModule(const FlightCreateOrderResponseBodyModule &) = default ;
    FlightCreateOrderResponseBodyModule(FlightCreateOrderResponseBodyModule &&) = default ;
    FlightCreateOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderResponseBodyModule() = default ;
    FlightCreateOrderResponseBodyModule& operator=(const FlightCreateOrderResponseBodyModule &) = default ;
    FlightCreateOrderResponseBodyModule& operator=(FlightCreateOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayTradeNo_ != nullptr
        && this->btripOrderId_ != nullptr && this->disOrderId_ != nullptr && this->lastPayTime_ != nullptr && this->orderStatus_ != nullptr && this->payStatus_ != nullptr
        && this->paymentPrice_ != nullptr && this->totalPrice_ != nullptr; };
    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline FlightCreateOrderResponseBodyModule& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline FlightCreateOrderResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightCreateOrderResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline FlightCreateOrderResponseBodyModule& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline FlightCreateOrderResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline FlightCreateOrderResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // paymentPrice Field Functions 
    bool hasPaymentPrice() const { return this->paymentPrice_ != nullptr;};
    void deletePaymentPrice() { this->paymentPrice_ = nullptr;};
    inline int64_t paymentPrice() const { DARABONBA_PTR_GET_DEFAULT(paymentPrice_, 0L) };
    inline FlightCreateOrderResponseBodyModule& setPaymentPrice(int64_t paymentPrice) { DARABONBA_PTR_SET_VALUE(paymentPrice_, paymentPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline FlightCreateOrderResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<int64_t> paymentPrice_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
