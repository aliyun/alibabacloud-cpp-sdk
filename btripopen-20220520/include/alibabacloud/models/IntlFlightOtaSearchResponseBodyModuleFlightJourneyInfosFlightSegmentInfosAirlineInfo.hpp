// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSAIRLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSAIRLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(short_name, shortName_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(short_name, shortName_);
    };
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo() = default ;
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo(const IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo &) = default ;
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo(IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo() = default ;
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& operator=(const IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo &) = default ;
    IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& operator=(IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->shortName_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> shortName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
