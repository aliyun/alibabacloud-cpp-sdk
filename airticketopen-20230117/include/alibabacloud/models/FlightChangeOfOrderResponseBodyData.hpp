// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightChangeOfOrderResponseBodyDataFlightChangeDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class FlightChangeOfOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightChangeOfOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(flight_change_detail, flightChangeDetail_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, FlightChangeOfOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_change_detail, flightChangeDetail_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    FlightChangeOfOrderResponseBodyData() = default ;
    FlightChangeOfOrderResponseBodyData(const FlightChangeOfOrderResponseBodyData &) = default ;
    FlightChangeOfOrderResponseBodyData(FlightChangeOfOrderResponseBodyData &&) = default ;
    FlightChangeOfOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightChangeOfOrderResponseBodyData() = default ;
    FlightChangeOfOrderResponseBodyData& operator=(const FlightChangeOfOrderResponseBodyData &) = default ;
    FlightChangeOfOrderResponseBodyData& operator=(FlightChangeOfOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flightChangeDetail_ == nullptr
        && return this->orderNum_ == nullptr; };
    // flightChangeDetail Field Functions 
    bool hasFlightChangeDetail() const { return this->flightChangeDetail_ != nullptr;};
    void deleteFlightChangeDetail() { this->flightChangeDetail_ = nullptr;};
    inline const Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail & flightChangeDetail() const { DARABONBA_PTR_GET_CONST(flightChangeDetail_, Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail) };
    inline Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail flightChangeDetail() { DARABONBA_PTR_GET(flightChangeDetail_, Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail) };
    inline FlightChangeOfOrderResponseBodyData& setFlightChangeDetail(const Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail & flightChangeDetail) { DARABONBA_PTR_SET_VALUE(flightChangeDetail_, flightChangeDetail) };
    inline FlightChangeOfOrderResponseBodyData& setFlightChangeDetail(Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail && flightChangeDetail) { DARABONBA_PTR_SET_RVALUE(flightChangeDetail_, flightChangeDetail) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline FlightChangeOfOrderResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    std::shared_ptr<Models::FlightChangeOfOrderResponseBodyDataFlightChangeDetail> flightChangeDetail_ = nullptr;
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
