// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULEHOTELFEEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULEHOTELFEEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryResponseBodyModuleHotelFeeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(criterion, criterion_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(trip_days, tripDays_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(criterion, criterion_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(trip_days, tripDays_);
    };
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail() = default ;
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail(const EstimatedPriceQueryResponseBodyModuleHotelFeeDetail &) = default ;
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail(EstimatedPriceQueryResponseBodyModuleHotelFeeDetail &&) = default ;
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBodyModuleHotelFeeDetail() = default ;
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& operator=(const EstimatedPriceQueryResponseBodyModuleHotelFeeDetail &) = default ;
    EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& operator=(EstimatedPriceQueryResponseBodyModuleHotelFeeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->criterion_ != nullptr && this->itineraryId_ != nullptr && this->total_ != nullptr && this->tripDays_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // criterion Field Functions 
    bool hasCriterion() const { return this->criterion_ != nullptr;};
    void deleteCriterion() { this->criterion_ = nullptr;};
    inline int64_t criterion() const { DARABONBA_PTR_GET_DEFAULT(criterion_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& setCriterion(int64_t criterion) { DARABONBA_PTR_SET_VALUE(criterion_, criterion) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // tripDays Field Functions 
    bool hasTripDays() const { return this->tripDays_ != nullptr;};
    void deleteTripDays() { this->tripDays_ = nullptr;};
    inline int32_t tripDays() const { DARABONBA_PTR_GET_DEFAULT(tripDays_, 0) };
    inline EstimatedPriceQueryResponseBodyModuleHotelFeeDetail& setTripDays(int32_t tripDays) { DARABONBA_PTR_SET_VALUE(tripDays_, tripDays) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<int64_t> criterion_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
    std::shared_ptr<int32_t> tripDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
