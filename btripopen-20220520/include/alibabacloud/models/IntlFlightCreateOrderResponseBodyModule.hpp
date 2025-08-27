// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    IntlFlightCreateOrderResponseBodyModule() = default ;
    IntlFlightCreateOrderResponseBodyModule(const IntlFlightCreateOrderResponseBodyModule &) = default ;
    IntlFlightCreateOrderResponseBodyModule(IntlFlightCreateOrderResponseBodyModule &&) = default ;
    IntlFlightCreateOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderResponseBodyModule() = default ;
    IntlFlightCreateOrderResponseBodyModule& operator=(const IntlFlightCreateOrderResponseBodyModule &) = default ;
    IntlFlightCreateOrderResponseBodyModule& operator=(IntlFlightCreateOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->payLatestTime_ != nullptr && this->payStatus_ != nullptr && this->status_ != nullptr
        && this->totalPrice_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline IntlFlightCreateOrderResponseBodyModule& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightCreateOrderResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightCreateOrderResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // payLatestTime Field Functions 
    bool hasPayLatestTime() const { return this->payLatestTime_ != nullptr;};
    void deletePayLatestTime() { this->payLatestTime_ = nullptr;};
    inline string payLatestTime() const { DARABONBA_PTR_GET_DEFAULT(payLatestTime_, "") };
    inline IntlFlightCreateOrderResponseBodyModule& setPayLatestTime(string payLatestTime) { DARABONBA_PTR_SET_VALUE(payLatestTime_, payLatestTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline IntlFlightCreateOrderResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline IntlFlightCreateOrderResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline IntlFlightCreateOrderResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> payLatestTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
