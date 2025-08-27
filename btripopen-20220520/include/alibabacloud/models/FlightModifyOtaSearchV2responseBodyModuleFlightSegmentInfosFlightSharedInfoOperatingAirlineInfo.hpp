// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSHAREDINFOOPERATINGAIRLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSHAREDINFOOPERATINGAIRLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
      DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
      DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
      DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
      DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
      DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
      DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& operator=(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineChineseName_ != nullptr && this->airlineChineseShortName_ != nullptr && this->airlineIcon_ != nullptr && this->cheapFlight_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineChineseName Field Functions 
    bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
    void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
    inline string airlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


    // airlineChineseShortName Field Functions 
    bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
    void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
    inline string airlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


    // airlineIcon Field Functions 
    bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
    void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
    inline string airlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


    // cheapFlight Field Functions 
    bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
    void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
    inline bool cheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineChineseName_ = nullptr;
    std::shared_ptr<string> airlineChineseShortName_ = nullptr;
    std::shared_ptr<string> airlineIcon_ = nullptr;
    std::shared_ptr<bool> cheapFlight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
