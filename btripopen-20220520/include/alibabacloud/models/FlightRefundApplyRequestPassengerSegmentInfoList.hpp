// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYREQUESTPASSENGERSEGMENTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYREQUESTPASSENGERSEGMENTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundApplyRequestPassengerSegmentInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundApplyRequestPassengerSegmentInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundApplyRequestPassengerSegmentInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightRefundApplyRequestPassengerSegmentInfoList() = default ;
    FlightRefundApplyRequestPassengerSegmentInfoList(const FlightRefundApplyRequestPassengerSegmentInfoList &) = default ;
    FlightRefundApplyRequestPassengerSegmentInfoList(FlightRefundApplyRequestPassengerSegmentInfoList &&) = default ;
    FlightRefundApplyRequestPassengerSegmentInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundApplyRequestPassengerSegmentInfoList() = default ;
    FlightRefundApplyRequestPassengerSegmentInfoList& operator=(const FlightRefundApplyRequestPassengerSegmentInfoList &) = default ;
    FlightRefundApplyRequestPassengerSegmentInfoList& operator=(FlightRefundApplyRequestPassengerSegmentInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightNo_ != nullptr
        && this->passengerName_ != nullptr && this->userId_ != nullptr; };
    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightRefundApplyRequestPassengerSegmentInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightRefundApplyRequestPassengerSegmentInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightRefundApplyRequestPassengerSegmentInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
