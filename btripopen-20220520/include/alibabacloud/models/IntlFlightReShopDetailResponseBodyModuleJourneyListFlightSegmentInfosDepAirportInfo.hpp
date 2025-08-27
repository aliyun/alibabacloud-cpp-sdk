// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSDEPAIRPORTINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSDEPAIRPORTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
      DARABONBA_PTR_TO_JSON(airport_name, airportName_);
      DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
      DARABONBA_PTR_TO_JSON(terminal, terminal_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
      DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
      DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
      DARABONBA_PTR_FROM_JSON(terminal, terminal_);
    };
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo &&) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& operator=(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& operator=(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airportCode_ != nullptr
        && this->airportName_ != nullptr && this->airportShortName_ != nullptr && this->terminal_ != nullptr; };
    // airportCode Field Functions 
    bool hasAirportCode() const { return this->airportCode_ != nullptr;};
    void deleteAirportCode() { this->airportCode_ = nullptr;};
    inline string airportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


    // airportName Field Functions 
    bool hasAirportName() const { return this->airportName_ != nullptr;};
    void deleteAirportName() { this->airportName_ = nullptr;};
    inline string airportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


    // airportShortName Field Functions 
    bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
    void deleteAirportShortName() { this->airportShortName_ = nullptr;};
    inline string airportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


    // terminal Field Functions 
    bool hasTerminal() const { return this->terminal_ != nullptr;};
    void deleteTerminal() { this->terminal_ = nullptr;};
    inline string terminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


  protected:
    std::shared_ptr<string> airportCode_ = nullptr;
    std::shared_ptr<string> airportName_ = nullptr;
    std::shared_ptr<string> airportShortName_ = nullptr;
    std::shared_ptr<string> terminal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
