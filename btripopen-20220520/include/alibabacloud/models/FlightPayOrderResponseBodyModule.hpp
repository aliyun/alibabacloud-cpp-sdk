// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTPAYORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTPAYORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightPayOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightPayOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(actual_pay_price, actualPayPrice_);
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FlightPayOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(actual_pay_price, actualPayPrice_);
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
    };
    FlightPayOrderResponseBodyModule() = default ;
    FlightPayOrderResponseBodyModule(const FlightPayOrderResponseBodyModule &) = default ;
    FlightPayOrderResponseBodyModule(FlightPayOrderResponseBodyModule &&) = default ;
    FlightPayOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightPayOrderResponseBodyModule() = default ;
    FlightPayOrderResponseBodyModule& operator=(const FlightPayOrderResponseBodyModule &) = default ;
    FlightPayOrderResponseBodyModule& operator=(FlightPayOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualPayPrice_ != nullptr
        && this->alipayTradeNo_ != nullptr && this->lastPayTime_ != nullptr && this->payStatus_ != nullptr; };
    // actualPayPrice Field Functions 
    bool hasActualPayPrice() const { return this->actualPayPrice_ != nullptr;};
    void deleteActualPayPrice() { this->actualPayPrice_ = nullptr;};
    inline int64_t actualPayPrice() const { DARABONBA_PTR_GET_DEFAULT(actualPayPrice_, 0L) };
    inline FlightPayOrderResponseBodyModule& setActualPayPrice(int64_t actualPayPrice) { DARABONBA_PTR_SET_VALUE(actualPayPrice_, actualPayPrice) };


    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline FlightPayOrderResponseBodyModule& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline FlightPayOrderResponseBodyModule& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline FlightPayOrderResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


  protected:
    std::shared_ptr<int64_t> actualPayPrice_ = nullptr;
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
