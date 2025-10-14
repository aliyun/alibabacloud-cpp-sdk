// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class FlightChangeOfOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightChangeOfOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, FlightChangeOfOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    FlightChangeOfOrderRequest() = default ;
    FlightChangeOfOrderRequest(const FlightChangeOfOrderRequest &) = default ;
    FlightChangeOfOrderRequest(FlightChangeOfOrderRequest &&) = default ;
    FlightChangeOfOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightChangeOfOrderRequest() = default ;
    FlightChangeOfOrderRequest& operator=(const FlightChangeOfOrderRequest &) = default ;
    FlightChangeOfOrderRequest& operator=(FlightChangeOfOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline FlightChangeOfOrderRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
