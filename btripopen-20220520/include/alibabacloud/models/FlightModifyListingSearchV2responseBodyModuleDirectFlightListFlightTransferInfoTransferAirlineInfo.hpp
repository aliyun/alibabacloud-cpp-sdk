// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTFLIGHTTRANSFERINFOTRANSFERAIRLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTFLIGHTTRANSFERINFOTRANSFERAIRLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
      DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
      DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
      DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
      DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
    };
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& operator=(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& operator=(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineChineseName_ != nullptr
        && this->airlineChineseShortName_ != nullptr && this->airlineCode_ != nullptr && this->airlineIcon_ != nullptr && this->cheapFlight_ != nullptr; };
    // airlineChineseName Field Functions 
    bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
    void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
    inline string airlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


    // airlineChineseShortName Field Functions 
    bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
    void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
    inline string airlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineIcon Field Functions 
    bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
    void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
    inline string airlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


    // cheapFlight Field Functions 
    bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
    void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
    inline bool cheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightTransferInfoTransferAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


  protected:
    std::shared_ptr<string> airlineChineseName_ = nullptr;
    std::shared_ptr<string> airlineChineseShortName_ = nullptr;
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineIcon_ = nullptr;
    std::shared_ptr<bool> cheapFlight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
