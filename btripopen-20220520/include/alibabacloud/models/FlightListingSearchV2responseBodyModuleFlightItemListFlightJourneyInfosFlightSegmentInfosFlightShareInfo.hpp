// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo(const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo(FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingAirlineInfo_ != nullptr
        && this->operatingFlightNo_ != nullptr; };
    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(const Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
