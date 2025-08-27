// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTPAYORDERV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTPAYORDERV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightPayOrderV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightPayOrderV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(total_service_fee_price, totalServiceFeePrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightPayOrderV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(total_service_fee_price, totalServiceFeePrice_);
    };
    FlightPayOrderV2Request() = default ;
    FlightPayOrderV2Request(const FlightPayOrderV2Request &) = default ;
    FlightPayOrderV2Request(FlightPayOrderV2Request &&) = default ;
    FlightPayOrderV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightPayOrderV2Request() = default ;
    FlightPayOrderV2Request& operator=(const FlightPayOrderV2Request &) = default ;
    FlightPayOrderV2Request& operator=(FlightPayOrderV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->totalPrice_ != nullptr && this->totalServiceFeePrice_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightPayOrderV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightPayOrderV2Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightPayOrderV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline FlightPayOrderV2Request& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // totalServiceFeePrice Field Functions 
    bool hasTotalServiceFeePrice() const { return this->totalServiceFeePrice_ != nullptr;};
    void deleteTotalServiceFeePrice() { this->totalServiceFeePrice_ = nullptr;};
    inline int64_t totalServiceFeePrice() const { DARABONBA_PTR_GET_DEFAULT(totalServiceFeePrice_, 0L) };
    inline FlightPayOrderV2Request& setTotalServiceFeePrice(int64_t totalServiceFeePrice) { DARABONBA_PTR_SET_VALUE(totalServiceFeePrice_, totalServiceFeePrice) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
    std::shared_ptr<int64_t> totalServiceFeePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
