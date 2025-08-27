// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUESTSEARCHJOURNEYSSELECTEDFLIGHTS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUESTSEARCHJOURNEYSSELECTEDFLIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2RequestSearchJourneysSelectedFlights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2RequestSearchJourneysSelectedFlights& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(flight_time, flightTime_);
      DARABONBA_PTR_TO_JSON(market_flight_no, marketFlightNo_);
      DARABONBA_PTR_TO_JSON(operate_flight_no, operateFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2RequestSearchJourneysSelectedFlights& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(flight_time, flightTime_);
      DARABONBA_PTR_FROM_JSON(market_flight_no, marketFlightNo_);
      DARABONBA_PTR_FROM_JSON(operate_flight_no, operateFlightNo_);
    };
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights() = default ;
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights(const FlightOtaSearchV2RequestSearchJourneysSelectedFlights &) = default ;
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights(FlightOtaSearchV2RequestSearchJourneysSelectedFlights &&) = default ;
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2RequestSearchJourneysSelectedFlights() = default ;
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights& operator=(const FlightOtaSearchV2RequestSearchJourneysSelectedFlights &) = default ;
    FlightOtaSearchV2RequestSearchJourneysSelectedFlights& operator=(FlightOtaSearchV2RequestSearchJourneysSelectedFlights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrAirportCode_ != nullptr
        && this->arrCityCode_ != nullptr && this->depAirportCode_ != nullptr && this->depCityCode_ != nullptr && this->flightTime_ != nullptr && this->marketFlightNo_ != nullptr
        && this->operateFlightNo_ != nullptr; };
    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // flightTime Field Functions 
    bool hasFlightTime() const { return this->flightTime_ != nullptr;};
    void deleteFlightTime() { this->flightTime_ = nullptr;};
    inline string flightTime() const { DARABONBA_PTR_GET_DEFAULT(flightTime_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setFlightTime(string flightTime) { DARABONBA_PTR_SET_VALUE(flightTime_, flightTime) };


    // marketFlightNo Field Functions 
    bool hasMarketFlightNo() const { return this->marketFlightNo_ != nullptr;};
    void deleteMarketFlightNo() { this->marketFlightNo_ = nullptr;};
    inline string marketFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketFlightNo_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setMarketFlightNo(string marketFlightNo) { DARABONBA_PTR_SET_VALUE(marketFlightNo_, marketFlightNo) };


    // operateFlightNo Field Functions 
    bool hasOperateFlightNo() const { return this->operateFlightNo_ != nullptr;};
    void deleteOperateFlightNo() { this->operateFlightNo_ = nullptr;};
    inline string operateFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operateFlightNo_, "") };
    inline FlightOtaSearchV2RequestSearchJourneysSelectedFlights& setOperateFlightNo(string operateFlightNo) { DARABONBA_PTR_SET_VALUE(operateFlightNo_, operateFlightNo) };


  protected:
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> flightTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> marketFlightNo_ = nullptr;
    std::shared_ptr<string> operateFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
