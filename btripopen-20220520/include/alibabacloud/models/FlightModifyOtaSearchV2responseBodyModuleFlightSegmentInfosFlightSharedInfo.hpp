// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSHAREDINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSHAREDINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& operator=(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingFlightNo_ != nullptr
        && this->operatingAirlineInfo_ != nullptr; };
    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& setOperatingAirlineInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo& setOperatingAirlineInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


  protected:
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
