// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(latest_pay_time, latestPayTime_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(latest_pay_time, latestPayTime_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    FlightCreateOrderV2ResponseBodyModule() = default ;
    FlightCreateOrderV2ResponseBodyModule(const FlightCreateOrderV2ResponseBodyModule &) = default ;
    FlightCreateOrderV2ResponseBodyModule(FlightCreateOrderV2ResponseBodyModule &&) = default ;
    FlightCreateOrderV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderV2ResponseBodyModule() = default ;
    FlightCreateOrderV2ResponseBodyModule& operator=(const FlightCreateOrderV2ResponseBodyModule &) = default ;
    FlightCreateOrderV2ResponseBodyModule& operator=(FlightCreateOrderV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->latestPayTime_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->status_ != nullptr && this->totalPrice_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline FlightCreateOrderV2ResponseBodyModule& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // latestPayTime Field Functions 
    bool hasLatestPayTime() const { return this->latestPayTime_ != nullptr;};
    void deleteLatestPayTime() { this->latestPayTime_ = nullptr;};
    inline string latestPayTime() const { DARABONBA_PTR_GET_DEFAULT(latestPayTime_, "") };
    inline FlightCreateOrderV2ResponseBodyModule& setLatestPayTime(string latestPayTime) { DARABONBA_PTR_SET_VALUE(latestPayTime_, latestPayTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightCreateOrderV2ResponseBodyModule& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightCreateOrderV2ResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightCreateOrderV2ResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline FlightCreateOrderV2ResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<string> latestPayTime_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
