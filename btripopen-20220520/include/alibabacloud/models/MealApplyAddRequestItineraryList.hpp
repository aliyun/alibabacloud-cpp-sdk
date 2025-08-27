// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYADDREQUESTITINERARYLIST_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYADDREQUESTITINERARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MealApplyAddRequestItineraryListCities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyAddRequestItineraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyAddRequestItineraryList& obj) { 
      DARABONBA_PTR_TO_JSON(cities, cities_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyAddRequestItineraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(cities, cities_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
    };
    MealApplyAddRequestItineraryList() = default ;
    MealApplyAddRequestItineraryList(const MealApplyAddRequestItineraryList &) = default ;
    MealApplyAddRequestItineraryList(MealApplyAddRequestItineraryList &&) = default ;
    MealApplyAddRequestItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyAddRequestItineraryList() = default ;
    MealApplyAddRequestItineraryList& operator=(const MealApplyAddRequestItineraryList &) = default ;
    MealApplyAddRequestItineraryList& operator=(MealApplyAddRequestItineraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cities_ != nullptr
        && this->endDate_ != nullptr && this->startDate_ != nullptr && this->thirdpartItineraryId_ != nullptr; };
    // cities Field Functions 
    bool hasCities() const { return this->cities_ != nullptr;};
    void deleteCities() { this->cities_ = nullptr;};
    inline const vector<Models::MealApplyAddRequestItineraryListCities> & cities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Models::MealApplyAddRequestItineraryListCities>) };
    inline vector<Models::MealApplyAddRequestItineraryListCities> cities() { DARABONBA_PTR_GET(cities_, vector<Models::MealApplyAddRequestItineraryListCities>) };
    inline MealApplyAddRequestItineraryList& setCities(const vector<Models::MealApplyAddRequestItineraryListCities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
    inline MealApplyAddRequestItineraryList& setCities(vector<Models::MealApplyAddRequestItineraryListCities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline MealApplyAddRequestItineraryList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline MealApplyAddRequestItineraryList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline MealApplyAddRequestItineraryList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::MealApplyAddRequestItineraryListCities>> cities_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
