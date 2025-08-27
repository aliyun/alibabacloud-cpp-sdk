// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSHAREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo &&) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo() = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& operator=(const IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& operator=(IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingAirlineInfo_ != nullptr
        && this->operatingFlightNo_ != nullptr; };
    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo) };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(const Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& setOperatingAirlineInfo(Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<Models::IntlFlightReShopDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
