// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYLISTITINERARYTRAVELSTANDARD_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEITINERARYLISTITINERARYTRAVELSTANDARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard() = default ;
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard(const ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard &) = default ;
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard(ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard &&) = default ;
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard() = default ;
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard& operator=(const ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard &) = default ;
    ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard& operator=(ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelAvailableNightsPerDay_ != nullptr; };
    // hotelAvailableNightsPerDay Field Functions 
    bool hasHotelAvailableNightsPerDay() const { return this->hotelAvailableNightsPerDay_ != nullptr;};
    void deleteHotelAvailableNightsPerDay() { this->hotelAvailableNightsPerDay_ = nullptr;};
    inline int32_t hotelAvailableNightsPerDay() const { DARABONBA_PTR_GET_DEFAULT(hotelAvailableNightsPerDay_, 0) };
    inline ApplyQueryResponseBodyModuleItineraryListItineraryTravelStandard& setHotelAvailableNightsPerDay(int32_t hotelAvailableNightsPerDay) { DARABONBA_PTR_SET_VALUE(hotelAvailableNightsPerDay_, hotelAvailableNightsPerDay) };


  protected:
    std::shared_ptr<int32_t> hotelAvailableNightsPerDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
