// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSDEPAIRPORTINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSDEPAIRPORTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
      DARABONBA_PTR_TO_JSON(airport_name, airportName_);
      DARABONBA_PTR_TO_JSON(airport_name_color, airportNameColor_);
      DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
      DARABONBA_PTR_TO_JSON(terminal, terminal_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
      DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
      DARABONBA_PTR_FROM_JSON(airport_name_color, airportNameColor_);
      DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
      DARABONBA_PTR_FROM_JSON(terminal, terminal_);
    };
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo &&) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& operator=(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& operator=(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airportCode_ != nullptr
        && this->airportName_ != nullptr && this->airportNameColor_ != nullptr && this->airportShortName_ != nullptr && this->terminal_ != nullptr; };
    // airportCode Field Functions 
    bool hasAirportCode() const { return this->airportCode_ != nullptr;};
    void deleteAirportCode() { this->airportCode_ = nullptr;};
    inline string airportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


    // airportName Field Functions 
    bool hasAirportName() const { return this->airportName_ != nullptr;};
    void deleteAirportName() { this->airportName_ = nullptr;};
    inline string airportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


    // airportNameColor Field Functions 
    bool hasAirportNameColor() const { return this->airportNameColor_ != nullptr;};
    void deleteAirportNameColor() { this->airportNameColor_ = nullptr;};
    inline string airportNameColor() const { DARABONBA_PTR_GET_DEFAULT(airportNameColor_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& setAirportNameColor(string airportNameColor) { DARABONBA_PTR_SET_VALUE(airportNameColor_, airportNameColor) };


    // airportShortName Field Functions 
    bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
    void deleteAirportShortName() { this->airportShortName_ = nullptr;};
    inline string airportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


    // terminal Field Functions 
    bool hasTerminal() const { return this->terminal_ != nullptr;};
    void deleteTerminal() { this->terminal_ = nullptr;};
    inline string terminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


  protected:
    std::shared_ptr<string> airportCode_ = nullptr;
    std::shared_ptr<string> airportName_ = nullptr;
    std::shared_ptr<string> airportNameColor_ = nullptr;
    std::shared_ptr<string> airportShortName_ = nullptr;
    std::shared_ptr<string> terminal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
