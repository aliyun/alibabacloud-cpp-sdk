// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTITINERARYLISTITINERARYTRAVELSTANDARD_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYREQUESTITINERARYLISTITINERARYTRAVELSTANDARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyRequestItineraryListItineraryTravelStandard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyRequestItineraryListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyRequestItineraryListItineraryTravelStandard& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
    };
    ApplyModifyRequestItineraryListItineraryTravelStandard() = default ;
    ApplyModifyRequestItineraryListItineraryTravelStandard(const ApplyModifyRequestItineraryListItineraryTravelStandard &) = default ;
    ApplyModifyRequestItineraryListItineraryTravelStandard(ApplyModifyRequestItineraryListItineraryTravelStandard &&) = default ;
    ApplyModifyRequestItineraryListItineraryTravelStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyRequestItineraryListItineraryTravelStandard() = default ;
    ApplyModifyRequestItineraryListItineraryTravelStandard& operator=(const ApplyModifyRequestItineraryListItineraryTravelStandard &) = default ;
    ApplyModifyRequestItineraryListItineraryTravelStandard& operator=(ApplyModifyRequestItineraryListItineraryTravelStandard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelAvailableNightsPerDay_ != nullptr; };
    // hotelAvailableNightsPerDay Field Functions 
    bool hasHotelAvailableNightsPerDay() const { return this->hotelAvailableNightsPerDay_ != nullptr;};
    void deleteHotelAvailableNightsPerDay() { this->hotelAvailableNightsPerDay_ = nullptr;};
    inline int32_t hotelAvailableNightsPerDay() const { DARABONBA_PTR_GET_DEFAULT(hotelAvailableNightsPerDay_, 0) };
    inline ApplyModifyRequestItineraryListItineraryTravelStandard& setHotelAvailableNightsPerDay(int32_t hotelAvailableNightsPerDay) { DARABONBA_PTR_SET_VALUE(hotelAvailableNightsPerDay_, hotelAvailableNightsPerDay) };


  protected:
    std::shared_ptr<int32_t> hotelAvailableNightsPerDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
