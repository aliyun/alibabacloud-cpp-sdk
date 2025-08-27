// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTFLIGHTSHAREINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTFLIGHTSHAREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& obj) { 
      DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo(const IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo(IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo &&) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& operator=(const IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& operator=(IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatingAirlineInfo_ != nullptr
        && this->operatingFlightNo_ != nullptr; };
    // operatingAirlineInfo Field Functions 
    bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
    void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
    inline const Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo) };
    inline Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo operatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& setOperatingAirlineInfo(const Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& setOperatingAirlineInfo(Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<Models::IntlFlightRefundDetailResponseBodyModuleSegmentListFlightShareInfoOperatingAirlineInfo> operatingAirlineInfo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
