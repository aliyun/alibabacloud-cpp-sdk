// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSHAREINFOOPERATINGAIRLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSHAREINFOOPERATINGAIRLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(short_name, shortName_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(short_name, shortName_);
    };
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo &&) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& operator=(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& operator=(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo &&) = default ;
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
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> shortName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
