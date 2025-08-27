// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCANCELORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCANCELORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCancelOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCancelOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_TO_JSON(fail_code, failCode_);
      DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCancelOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
      DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
    };
    FlightCancelOrderResponseBodyModule() = default ;
    FlightCancelOrderResponseBodyModule(const FlightCancelOrderResponseBodyModule &) = default ;
    FlightCancelOrderResponseBodyModule(FlightCancelOrderResponseBodyModule &&) = default ;
    FlightCancelOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCancelOrderResponseBodyModule() = default ;
    FlightCancelOrderResponseBodyModule& operator=(const FlightCancelOrderResponseBodyModule &) = default ;
    FlightCancelOrderResponseBodyModule& operator=(FlightCancelOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelTime_ != nullptr
        && this->failCode_ != nullptr && this->failReason_ != nullptr && this->orderStatus_ != nullptr; };
    // cancelTime Field Functions 
    bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
    void deleteCancelTime() { this->cancelTime_ = nullptr;};
    inline string cancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
    inline FlightCancelOrderResponseBodyModule& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline FlightCancelOrderResponseBodyModule& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline FlightCancelOrderResponseBodyModule& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline FlightCancelOrderResponseBodyModule& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


  protected:
    std::shared_ptr<string> cancelTime_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> orderStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
