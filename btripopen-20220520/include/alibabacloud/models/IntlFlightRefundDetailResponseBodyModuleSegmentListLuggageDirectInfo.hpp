// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTLUGGAGEDIRECTINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULESEGMENTLISTLUGGAGEDIRECTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
      DARABONBA_PTR_TO_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
      DARABONBA_PTR_FROM_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
    };
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo(const IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo(IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo &&) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& operator=(const IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& operator=(IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->depCityLuggageDirect_ != nullptr
        && this->stopCityLuggageDirect_ != nullptr; };
    // depCityLuggageDirect Field Functions 
    bool hasDepCityLuggageDirect() const { return this->depCityLuggageDirect_ != nullptr;};
    void deleteDepCityLuggageDirect() { this->depCityLuggageDirect_ = nullptr;};
    inline int32_t depCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(depCityLuggageDirect_, 0) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& setDepCityLuggageDirect(int32_t depCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(depCityLuggageDirect_, depCityLuggageDirect) };


    // stopCityLuggageDirect Field Functions 
    bool hasStopCityLuggageDirect() const { return this->stopCityLuggageDirect_ != nullptr;};
    void deleteStopCityLuggageDirect() { this->stopCityLuggageDirect_ = nullptr;};
    inline int32_t stopCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(stopCityLuggageDirect_, 0) };
    inline IntlFlightRefundDetailResponseBodyModuleSegmentListLuggageDirectInfo& setStopCityLuggageDirect(int32_t stopCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(stopCityLuggageDirect_, stopCityLuggageDirect) };


  protected:
    std::shared_ptr<int32_t> depCityLuggageDirect_ = nullptr;
    std::shared_ptr<int32_t> stopCityLuggageDirect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
