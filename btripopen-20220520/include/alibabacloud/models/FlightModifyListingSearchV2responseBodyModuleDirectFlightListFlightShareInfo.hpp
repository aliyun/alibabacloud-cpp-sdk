// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTFLIGHTSHAREINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTFLIGHTSHAREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& operator=(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& operator=(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingAirlineInfo_ != nullptr
        && this->operatingFlightNo_ != nullptr; };
    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& setOperatingAirlineInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& setOperatingAirlineInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListFlightShareInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
