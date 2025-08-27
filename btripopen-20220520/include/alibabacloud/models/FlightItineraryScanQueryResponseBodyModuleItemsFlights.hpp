// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODYMODULEITEMSFLIGHTS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODYMODULEITEMSFLIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightItineraryScanQueryResponseBodyModuleItemsFlights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightItineraryScanQueryResponseBodyModuleItemsFlights& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_station, arrivalStation_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(carrier, carrier_);
      DARABONBA_PTR_TO_JSON(departure_station, departureStation_);
      DARABONBA_PTR_TO_JSON(flight_date, flightDate_);
      DARABONBA_PTR_TO_JSON(flight_number, flightNumber_);
      DARABONBA_PTR_TO_JSON(flight_time, flightTime_);
      DARABONBA_PTR_TO_JSON(free_baggage_allowance, freeBaggageAllowance_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(seat_class, seatClass_);
      DARABONBA_PTR_TO_JSON(valid_from_date, validFromDate_);
      DARABONBA_PTR_TO_JSON(valid_to_date, validToDate_);
    };
    friend void from_json(const Darabonba::Json& j, FlightItineraryScanQueryResponseBodyModuleItemsFlights& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_station, arrivalStation_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(departure_station, departureStation_);
      DARABONBA_PTR_FROM_JSON(flight_date, flightDate_);
      DARABONBA_PTR_FROM_JSON(flight_number, flightNumber_);
      DARABONBA_PTR_FROM_JSON(flight_time, flightTime_);
      DARABONBA_PTR_FROM_JSON(free_baggage_allowance, freeBaggageAllowance_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(seat_class, seatClass_);
      DARABONBA_PTR_FROM_JSON(valid_from_date, validFromDate_);
      DARABONBA_PTR_FROM_JSON(valid_to_date, validToDate_);
    };
    FlightItineraryScanQueryResponseBodyModuleItemsFlights() = default ;
    FlightItineraryScanQueryResponseBodyModuleItemsFlights(const FlightItineraryScanQueryResponseBodyModuleItemsFlights &) = default ;
    FlightItineraryScanQueryResponseBodyModuleItemsFlights(FlightItineraryScanQueryResponseBodyModuleItemsFlights &&) = default ;
    FlightItineraryScanQueryResponseBodyModuleItemsFlights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightItineraryScanQueryResponseBodyModuleItemsFlights() = default ;
    FlightItineraryScanQueryResponseBodyModuleItemsFlights& operator=(const FlightItineraryScanQueryResponseBodyModuleItemsFlights &) = default ;
    FlightItineraryScanQueryResponseBodyModuleItemsFlights& operator=(FlightItineraryScanQueryResponseBodyModuleItemsFlights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrivalStation_ != nullptr
        && this->cabinClass_ != nullptr && this->carrier_ != nullptr && this->departureStation_ != nullptr && this->flightDate_ != nullptr && this->flightNumber_ != nullptr
        && this->flightTime_ != nullptr && this->freeBaggageAllowance_ != nullptr && this->index_ != nullptr && this->seatClass_ != nullptr && this->validFromDate_ != nullptr
        && this->validToDate_ != nullptr; };
    // arrivalStation Field Functions 
    bool hasArrivalStation() const { return this->arrivalStation_ != nullptr;};
    void deleteArrivalStation() { this->arrivalStation_ = nullptr;};
    inline string arrivalStation() const { DARABONBA_PTR_GET_DEFAULT(arrivalStation_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setArrivalStation(string arrivalStation) { DARABONBA_PTR_SET_VALUE(arrivalStation_, arrivalStation) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string carrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // departureStation Field Functions 
    bool hasDepartureStation() const { return this->departureStation_ != nullptr;};
    void deleteDepartureStation() { this->departureStation_ = nullptr;};
    inline string departureStation() const { DARABONBA_PTR_GET_DEFAULT(departureStation_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setDepartureStation(string departureStation) { DARABONBA_PTR_SET_VALUE(departureStation_, departureStation) };


    // flightDate Field Functions 
    bool hasFlightDate() const { return this->flightDate_ != nullptr;};
    void deleteFlightDate() { this->flightDate_ = nullptr;};
    inline string flightDate() const { DARABONBA_PTR_GET_DEFAULT(flightDate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setFlightDate(string flightDate) { DARABONBA_PTR_SET_VALUE(flightDate_, flightDate) };


    // flightNumber Field Functions 
    bool hasFlightNumber() const { return this->flightNumber_ != nullptr;};
    void deleteFlightNumber() { this->flightNumber_ = nullptr;};
    inline string flightNumber() const { DARABONBA_PTR_GET_DEFAULT(flightNumber_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setFlightNumber(string flightNumber) { DARABONBA_PTR_SET_VALUE(flightNumber_, flightNumber) };


    // flightTime Field Functions 
    bool hasFlightTime() const { return this->flightTime_ != nullptr;};
    void deleteFlightTime() { this->flightTime_ = nullptr;};
    inline string flightTime() const { DARABONBA_PTR_GET_DEFAULT(flightTime_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setFlightTime(string flightTime) { DARABONBA_PTR_SET_VALUE(flightTime_, flightTime) };


    // freeBaggageAllowance Field Functions 
    bool hasFreeBaggageAllowance() const { return this->freeBaggageAllowance_ != nullptr;};
    void deleteFreeBaggageAllowance() { this->freeBaggageAllowance_ = nullptr;};
    inline string freeBaggageAllowance() const { DARABONBA_PTR_GET_DEFAULT(freeBaggageAllowance_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setFreeBaggageAllowance(string freeBaggageAllowance) { DARABONBA_PTR_SET_VALUE(freeBaggageAllowance_, freeBaggageAllowance) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // seatClass Field Functions 
    bool hasSeatClass() const { return this->seatClass_ != nullptr;};
    void deleteSeatClass() { this->seatClass_ = nullptr;};
    inline string seatClass() const { DARABONBA_PTR_GET_DEFAULT(seatClass_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setSeatClass(string seatClass) { DARABONBA_PTR_SET_VALUE(seatClass_, seatClass) };


    // validFromDate Field Functions 
    bool hasValidFromDate() const { return this->validFromDate_ != nullptr;};
    void deleteValidFromDate() { this->validFromDate_ = nullptr;};
    inline string validFromDate() const { DARABONBA_PTR_GET_DEFAULT(validFromDate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setValidFromDate(string validFromDate) { DARABONBA_PTR_SET_VALUE(validFromDate_, validFromDate) };


    // validToDate Field Functions 
    bool hasValidToDate() const { return this->validToDate_ != nullptr;};
    void deleteValidToDate() { this->validToDate_ = nullptr;};
    inline string validToDate() const { DARABONBA_PTR_GET_DEFAULT(validToDate_, "") };
    inline FlightItineraryScanQueryResponseBodyModuleItemsFlights& setValidToDate(string validToDate) { DARABONBA_PTR_SET_VALUE(validToDate_, validToDate) };


  protected:
    // 航班至
    std::shared_ptr<string> arrivalStation_ = nullptr;
    // 座位等级
    std::shared_ptr<string> cabinClass_ = nullptr;
    // 承运人
    std::shared_ptr<string> carrier_ = nullptr;
    // 航班从
    std::shared_ptr<string> departureStation_ = nullptr;
    // 日期
    std::shared_ptr<string> flightDate_ = nullptr;
    // 航班号
    std::shared_ptr<string> flightNumber_ = nullptr;
    // 时间
    std::shared_ptr<string> flightTime_ = nullptr;
    // 免费行李
    std::shared_ptr<string> freeBaggageAllowance_ = nullptr;
    // 行号
    std::shared_ptr<string> index_ = nullptr;
    // 客票级别
    std::shared_ptr<string> seatClass_ = nullptr;
    // 客票生效日期
    std::shared_ptr<string> validFromDate_ = nullptr;
    // 有效截止日期
    std::shared_ptr<string> validToDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
