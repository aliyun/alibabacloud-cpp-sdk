// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo &&) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& operator=(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& operator=(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingAirlineInfo_ != nullptr
        && this->operatingFlightNo_ != nullptr; };
    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
