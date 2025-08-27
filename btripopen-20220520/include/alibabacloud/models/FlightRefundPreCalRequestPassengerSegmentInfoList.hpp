// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUESTPASSENGERSEGMENTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUESTPASSENGERSEGMENTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalRequestPassengerSegmentInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalRequestPassengerSegmentInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalRequestPassengerSegmentInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightRefundPreCalRequestPassengerSegmentInfoList() = default ;
    FlightRefundPreCalRequestPassengerSegmentInfoList(const FlightRefundPreCalRequestPassengerSegmentInfoList &) = default ;
    FlightRefundPreCalRequestPassengerSegmentInfoList(FlightRefundPreCalRequestPassengerSegmentInfoList &&) = default ;
    FlightRefundPreCalRequestPassengerSegmentInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalRequestPassengerSegmentInfoList() = default ;
    FlightRefundPreCalRequestPassengerSegmentInfoList& operator=(const FlightRefundPreCalRequestPassengerSegmentInfoList &) = default ;
    FlightRefundPreCalRequestPassengerSegmentInfoList& operator=(FlightRefundPreCalRequestPassengerSegmentInfoList &&) = default ;
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
    inline FlightRefundPreCalRequestPassengerSegmentInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightRefundPreCalRequestPassengerSegmentInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightRefundPreCalRequestPassengerSegmentInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> flightNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
