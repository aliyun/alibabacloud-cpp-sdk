// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODYDATAFLIGHTCHANGEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODYDATAFLIGHTCHANGEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class FlightChangeOfOrderResponseBodyDataFlightChangeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightChangeOfOrderResponseBodyDataFlightChangeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(change_reason, changeReason_);
      DARABONBA_PTR_TO_JSON(change_time, changeTime_);
      DARABONBA_PTR_TO_JSON(change_type, changeType_);
      DARABONBA_PTR_TO_JSON(new_arrival_airport, newArrivalAirport_);
      DARABONBA_PTR_TO_JSON(new_arrival_time, newArrivalTime_);
      DARABONBA_PTR_TO_JSON(new_departure_airport, newDepartureAirport_);
      DARABONBA_PTR_TO_JSON(new_departure_time, newDepartureTime_);
      DARABONBA_PTR_TO_JSON(new_flight_no, newFlightNo_);
      DARABONBA_PTR_TO_JSON(old_arrival_airport, oldArrivalAirport_);
      DARABONBA_PTR_TO_JSON(old_arrival_time, oldArrivalTime_);
      DARABONBA_PTR_TO_JSON(old_departure_airport, oldDepartureAirport_);
      DARABONBA_PTR_TO_JSON(old_departure_time, oldDepartureTime_);
      DARABONBA_PTR_TO_JSON(old_flight_no, oldFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightChangeOfOrderResponseBodyDataFlightChangeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(change_reason, changeReason_);
      DARABONBA_PTR_FROM_JSON(change_time, changeTime_);
      DARABONBA_PTR_FROM_JSON(change_type, changeType_);
      DARABONBA_PTR_FROM_JSON(new_arrival_airport, newArrivalAirport_);
      DARABONBA_PTR_FROM_JSON(new_arrival_time, newArrivalTime_);
      DARABONBA_PTR_FROM_JSON(new_departure_airport, newDepartureAirport_);
      DARABONBA_PTR_FROM_JSON(new_departure_time, newDepartureTime_);
      DARABONBA_PTR_FROM_JSON(new_flight_no, newFlightNo_);
      DARABONBA_PTR_FROM_JSON(old_arrival_airport, oldArrivalAirport_);
      DARABONBA_PTR_FROM_JSON(old_arrival_time, oldArrivalTime_);
      DARABONBA_PTR_FROM_JSON(old_departure_airport, oldDepartureAirport_);
      DARABONBA_PTR_FROM_JSON(old_departure_time, oldDepartureTime_);
      DARABONBA_PTR_FROM_JSON(old_flight_no, oldFlightNo_);
    };
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail() = default ;
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail(const FlightChangeOfOrderResponseBodyDataFlightChangeDetail &) = default ;
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail(FlightChangeOfOrderResponseBodyDataFlightChangeDetail &&) = default ;
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightChangeOfOrderResponseBodyDataFlightChangeDetail() = default ;
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail& operator=(const FlightChangeOfOrderResponseBodyDataFlightChangeDetail &) = default ;
    FlightChangeOfOrderResponseBodyDataFlightChangeDetail& operator=(FlightChangeOfOrderResponseBodyDataFlightChangeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeReason_ == nullptr
        && return this->changeTime_ == nullptr && return this->changeType_ == nullptr && return this->newArrivalAirport_ == nullptr && return this->newArrivalTime_ == nullptr && return this->newDepartureAirport_ == nullptr
        && return this->newDepartureTime_ == nullptr && return this->newFlightNo_ == nullptr && return this->oldArrivalAirport_ == nullptr && return this->oldArrivalTime_ == nullptr && return this->oldDepartureAirport_ == nullptr
        && return this->oldDepartureTime_ == nullptr && return this->oldFlightNo_ == nullptr; };
    // changeReason Field Functions 
    bool hasChangeReason() const { return this->changeReason_ != nullptr;};
    void deleteChangeReason() { this->changeReason_ = nullptr;};
    inline string changeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


    // changeTime Field Functions 
    bool hasChangeTime() const { return this->changeTime_ != nullptr;};
    void deleteChangeTime() { this->changeTime_ = nullptr;};
    inline string changeTime() const { DARABONBA_PTR_GET_DEFAULT(changeTime_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setChangeTime(string changeTime) { DARABONBA_PTR_SET_VALUE(changeTime_, changeTime) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // newArrivalAirport Field Functions 
    bool hasNewArrivalAirport() const { return this->newArrivalAirport_ != nullptr;};
    void deleteNewArrivalAirport() { this->newArrivalAirport_ = nullptr;};
    inline string newArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(newArrivalAirport_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setNewArrivalAirport(string newArrivalAirport) { DARABONBA_PTR_SET_VALUE(newArrivalAirport_, newArrivalAirport) };


    // newArrivalTime Field Functions 
    bool hasNewArrivalTime() const { return this->newArrivalTime_ != nullptr;};
    void deleteNewArrivalTime() { this->newArrivalTime_ = nullptr;};
    inline string newArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(newArrivalTime_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setNewArrivalTime(string newArrivalTime) { DARABONBA_PTR_SET_VALUE(newArrivalTime_, newArrivalTime) };


    // newDepartureAirport Field Functions 
    bool hasNewDepartureAirport() const { return this->newDepartureAirport_ != nullptr;};
    void deleteNewDepartureAirport() { this->newDepartureAirport_ = nullptr;};
    inline string newDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(newDepartureAirport_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setNewDepartureAirport(string newDepartureAirport) { DARABONBA_PTR_SET_VALUE(newDepartureAirport_, newDepartureAirport) };


    // newDepartureTime Field Functions 
    bool hasNewDepartureTime() const { return this->newDepartureTime_ != nullptr;};
    void deleteNewDepartureTime() { this->newDepartureTime_ = nullptr;};
    inline string newDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(newDepartureTime_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setNewDepartureTime(string newDepartureTime) { DARABONBA_PTR_SET_VALUE(newDepartureTime_, newDepartureTime) };


    // newFlightNo Field Functions 
    bool hasNewFlightNo() const { return this->newFlightNo_ != nullptr;};
    void deleteNewFlightNo() { this->newFlightNo_ = nullptr;};
    inline string newFlightNo() const { DARABONBA_PTR_GET_DEFAULT(newFlightNo_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setNewFlightNo(string newFlightNo) { DARABONBA_PTR_SET_VALUE(newFlightNo_, newFlightNo) };


    // oldArrivalAirport Field Functions 
    bool hasOldArrivalAirport() const { return this->oldArrivalAirport_ != nullptr;};
    void deleteOldArrivalAirport() { this->oldArrivalAirport_ = nullptr;};
    inline string oldArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(oldArrivalAirport_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setOldArrivalAirport(string oldArrivalAirport) { DARABONBA_PTR_SET_VALUE(oldArrivalAirport_, oldArrivalAirport) };


    // oldArrivalTime Field Functions 
    bool hasOldArrivalTime() const { return this->oldArrivalTime_ != nullptr;};
    void deleteOldArrivalTime() { this->oldArrivalTime_ = nullptr;};
    inline string oldArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(oldArrivalTime_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setOldArrivalTime(string oldArrivalTime) { DARABONBA_PTR_SET_VALUE(oldArrivalTime_, oldArrivalTime) };


    // oldDepartureAirport Field Functions 
    bool hasOldDepartureAirport() const { return this->oldDepartureAirport_ != nullptr;};
    void deleteOldDepartureAirport() { this->oldDepartureAirport_ = nullptr;};
    inline string oldDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(oldDepartureAirport_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setOldDepartureAirport(string oldDepartureAirport) { DARABONBA_PTR_SET_VALUE(oldDepartureAirport_, oldDepartureAirport) };


    // oldDepartureTime Field Functions 
    bool hasOldDepartureTime() const { return this->oldDepartureTime_ != nullptr;};
    void deleteOldDepartureTime() { this->oldDepartureTime_ = nullptr;};
    inline string oldDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(oldDepartureTime_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setOldDepartureTime(string oldDepartureTime) { DARABONBA_PTR_SET_VALUE(oldDepartureTime_, oldDepartureTime) };


    // oldFlightNo Field Functions 
    bool hasOldFlightNo() const { return this->oldFlightNo_ != nullptr;};
    void deleteOldFlightNo() { this->oldFlightNo_ = nullptr;};
    inline string oldFlightNo() const { DARABONBA_PTR_GET_DEFAULT(oldFlightNo_, "") };
    inline FlightChangeOfOrderResponseBodyDataFlightChangeDetail& setOldFlightNo(string oldFlightNo) { DARABONBA_PTR_SET_VALUE(oldFlightNo_, oldFlightNo) };


  protected:
    std::shared_ptr<string> changeReason_ = nullptr;
    std::shared_ptr<string> changeTime_ = nullptr;
    std::shared_ptr<int32_t> changeType_ = nullptr;
    std::shared_ptr<string> newArrivalAirport_ = nullptr;
    std::shared_ptr<string> newArrivalTime_ = nullptr;
    std::shared_ptr<string> newDepartureAirport_ = nullptr;
    std::shared_ptr<string> newDepartureTime_ = nullptr;
    std::shared_ptr<string> newFlightNo_ = nullptr;
    std::shared_ptr<string> oldArrivalAirport_ = nullptr;
    std::shared_ptr<string> oldArrivalTime_ = nullptr;
    std::shared_ptr<string> oldDepartureAirport_ = nullptr;
    std::shared_ptr<string> oldDepartureTime_ = nullptr;
    std::shared_ptr<string> oldFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
