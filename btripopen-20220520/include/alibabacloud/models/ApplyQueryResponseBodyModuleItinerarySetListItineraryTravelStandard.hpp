// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYSETLISTITINERARYTRAVELSTANDARD_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYSETLISTITINERARYTRAVELSTANDARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard() = default ;
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard(const ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard &) = default ;
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard(ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard &&) = default ;
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard() = default ;
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard& operator=(const ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard &) = default ;
    ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard& operator=(ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelAvailableNightsPerDay_ != nullptr; };
    // hotelAvailableNightsPerDay Field Functions 
    bool hasHotelAvailableNightsPerDay() const { return this->hotelAvailableNightsPerDay_ != nullptr;};
    void deleteHotelAvailableNightsPerDay() { this->hotelAvailableNightsPerDay_ = nullptr;};
    inline int32_t hotelAvailableNightsPerDay() const { DARABONBA_PTR_GET_DEFAULT(hotelAvailableNightsPerDay_, 0) };
    inline ApplyQueryResponseBodyModuleItinerarySetListItineraryTravelStandard& setHotelAvailableNightsPerDay(int32_t hotelAvailableNightsPerDay) { DARABONBA_PTR_SET_VALUE(hotelAvailableNightsPerDay_, hotelAvailableNightsPerDay) };


  protected:
    std::shared_ptr<int32_t> hotelAvailableNightsPerDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
