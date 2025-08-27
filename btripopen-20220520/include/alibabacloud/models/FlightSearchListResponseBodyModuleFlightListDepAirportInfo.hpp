// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTDEPAIRPORTINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTDEPAIRPORTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListDepAirportInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListDepAirportInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
      DARABONBA_PTR_TO_JSON(airport_name, airportName_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(terminal, terminal_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListDepAirportInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
      DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(terminal, terminal_);
    };
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo() = default ;
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo(const FlightSearchListResponseBodyModuleFlightListDepAirportInfo &) = default ;
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo(FlightSearchListResponseBodyModuleFlightListDepAirportInfo &&) = default ;
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListDepAirportInfo() = default ;
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo& operator=(const FlightSearchListResponseBodyModuleFlightListDepAirportInfo &) = default ;
    FlightSearchListResponseBodyModuleFlightListDepAirportInfo& operator=(FlightSearchListResponseBodyModuleFlightListDepAirportInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airportCode_ != nullptr
        && this->airportName_ != nullptr && this->cityCode_ != nullptr && this->cityName_ != nullptr && this->terminal_ != nullptr; };
    // airportCode Field Functions 
    bool hasAirportCode() const { return this->airportCode_ != nullptr;};
    void deleteAirportCode() { this->airportCode_ = nullptr;};
    inline string airportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
    inline FlightSearchListResponseBodyModuleFlightListDepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


    // airportName Field Functions 
    bool hasAirportName() const { return this->airportName_ != nullptr;};
    void deleteAirportName() { this->airportName_ = nullptr;};
    inline string airportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
    inline FlightSearchListResponseBodyModuleFlightListDepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline FlightSearchListResponseBodyModuleFlightListDepAirportInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline FlightSearchListResponseBodyModuleFlightListDepAirportInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // terminal Field Functions 
    bool hasTerminal() const { return this->terminal_ != nullptr;};
    void deleteTerminal() { this->terminal_ = nullptr;};
    inline string terminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
    inline FlightSearchListResponseBodyModuleFlightListDepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


  protected:
    std::shared_ptr<string> airportCode_ = nullptr;
    std::shared_ptr<string> airportName_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> terminal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
