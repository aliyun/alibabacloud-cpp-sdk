// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(budget, budget_);
      DARABONBA_PTR_TO_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_TO_JSON(car_rule, carRuleShrink_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(default_standard, defaultStandardShrink_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerListShrink_);
      DARABONBA_PTR_TO_JSON(external_traveler_standard, externalTravelerStandardShrink_);
      DARABONBA_PTR_TO_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_TO_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_TO_JSON(hotel_share, hotelShareShrink_);
      DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
      DARABONBA_PTR_TO_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_TO_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryListShrink_);
      DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetListShrink_);
      DARABONBA_PTR_TO_JSON(limit_traveler, limitTraveler_);
      DARABONBA_PTR_TO_JSON(meal_budget, mealBudget_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_TO_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_TO_JSON(traveler_list, travelerListShrink_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandardShrink_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(budget, budget_);
      DARABONBA_PTR_FROM_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_FROM_JSON(car_rule, carRuleShrink_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(default_standard, defaultStandardShrink_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerListShrink_);
      DARABONBA_PTR_FROM_JSON(external_traveler_standard, externalTravelerStandardShrink_);
      DARABONBA_PTR_FROM_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_share, hotelShareShrink_);
      DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
      DARABONBA_PTR_FROM_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_FROM_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryListShrink_);
      DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetListShrink_);
      DARABONBA_PTR_FROM_JSON(limit_traveler, limitTraveler_);
      DARABONBA_PTR_FROM_JSON(meal_budget, mealBudget_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_FROM_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_FROM_JSON(traveler_list, travelerListShrink_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandardShrink_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
    };
    ApplyAddShrinkRequest() = default ;
    ApplyAddShrinkRequest(const ApplyAddShrinkRequest &) = default ;
    ApplyAddShrinkRequest(ApplyAddShrinkRequest &&) = default ;
    ApplyAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddShrinkRequest() = default ;
    ApplyAddShrinkRequest& operator=(const ApplyAddShrinkRequest &) = default ;
    ApplyAddShrinkRequest& operator=(ApplyAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->budget_ != nullptr
        && this->budgetMerge_ != nullptr && this->carRuleShrink_ != nullptr && this->corpName_ != nullptr && this->defaultStandardShrink_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->extendField_ != nullptr && this->externalTravelerListShrink_ != nullptr && this->externalTravelerStandardShrink_ != nullptr && this->flightBudget_ != nullptr
        && this->hotelBudget_ != nullptr && this->hotelShareShrink_ != nullptr && this->internationalFlightCabins_ != nullptr && this->intlFlightBudget_ != nullptr && this->intlHotelBudget_ != nullptr
        && this->itineraryListShrink_ != nullptr && this->itineraryRule_ != nullptr && this->itinerarySetListShrink_ != nullptr && this->limitTraveler_ != nullptr && this->mealBudget_ != nullptr
        && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr && this->status_ != nullptr && this->subCorpId_ != nullptr && this->thirdpartApplyId_ != nullptr
        && this->thirdpartBusinessId_ != nullptr && this->thirdpartDepartId_ != nullptr && this->togetherBookRule_ != nullptr && this->trainBudget_ != nullptr && this->travelerListShrink_ != nullptr
        && this->travelerStandardShrink_ != nullptr && this->tripCause_ != nullptr && this->tripDay_ != nullptr && this->tripTitle_ != nullptr && this->type_ != nullptr
        && this->unionNo_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->vehicleBudget_ != nullptr; };
    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline int64_t budget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
    inline ApplyAddShrinkRequest& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


    // budgetMerge Field Functions 
    bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
    void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
    inline int32_t budgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
    inline ApplyAddShrinkRequest& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


    // carRuleShrink Field Functions 
    bool hasCarRuleShrink() const { return this->carRuleShrink_ != nullptr;};
    void deleteCarRuleShrink() { this->carRuleShrink_ = nullptr;};
    inline string carRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(carRuleShrink_, "") };
    inline ApplyAddShrinkRequest& setCarRuleShrink(string carRuleShrink) { DARABONBA_PTR_SET_VALUE(carRuleShrink_, carRuleShrink) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyAddShrinkRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // defaultStandardShrink Field Functions 
    bool hasDefaultStandardShrink() const { return this->defaultStandardShrink_ != nullptr;};
    void deleteDefaultStandardShrink() { this->defaultStandardShrink_ = nullptr;};
    inline string defaultStandardShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultStandardShrink_, "") };
    inline ApplyAddShrinkRequest& setDefaultStandardShrink(string defaultStandardShrink) { DARABONBA_PTR_SET_VALUE(defaultStandardShrink_, defaultStandardShrink) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyAddShrinkRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyAddShrinkRequest& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ApplyAddShrinkRequest& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // externalTravelerListShrink Field Functions 
    bool hasExternalTravelerListShrink() const { return this->externalTravelerListShrink_ != nullptr;};
    void deleteExternalTravelerListShrink() { this->externalTravelerListShrink_ = nullptr;};
    inline string externalTravelerListShrink() const { DARABONBA_PTR_GET_DEFAULT(externalTravelerListShrink_, "") };
    inline ApplyAddShrinkRequest& setExternalTravelerListShrink(string externalTravelerListShrink) { DARABONBA_PTR_SET_VALUE(externalTravelerListShrink_, externalTravelerListShrink) };


    // externalTravelerStandardShrink Field Functions 
    bool hasExternalTravelerStandardShrink() const { return this->externalTravelerStandardShrink_ != nullptr;};
    void deleteExternalTravelerStandardShrink() { this->externalTravelerStandardShrink_ = nullptr;};
    inline string externalTravelerStandardShrink() const { DARABONBA_PTR_GET_DEFAULT(externalTravelerStandardShrink_, "") };
    inline ApplyAddShrinkRequest& setExternalTravelerStandardShrink(string externalTravelerStandardShrink) { DARABONBA_PTR_SET_VALUE(externalTravelerStandardShrink_, externalTravelerStandardShrink) };


    // flightBudget Field Functions 
    bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
    void deleteFlightBudget() { this->flightBudget_ = nullptr;};
    inline int64_t flightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
    inline ApplyAddShrinkRequest& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


    // hotelBudget Field Functions 
    bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
    void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
    inline int64_t hotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
    inline ApplyAddShrinkRequest& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


    // hotelShareShrink Field Functions 
    bool hasHotelShareShrink() const { return this->hotelShareShrink_ != nullptr;};
    void deleteHotelShareShrink() { this->hotelShareShrink_ = nullptr;};
    inline string hotelShareShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelShareShrink_, "") };
    inline ApplyAddShrinkRequest& setHotelShareShrink(string hotelShareShrink) { DARABONBA_PTR_SET_VALUE(hotelShareShrink_, hotelShareShrink) };


    // internationalFlightCabins Field Functions 
    bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
    void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
    inline string internationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
    inline ApplyAddShrinkRequest& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


    // intlFlightBudget Field Functions 
    bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
    void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
    inline int64_t intlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
    inline ApplyAddShrinkRequest& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


    // intlHotelBudget Field Functions 
    bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
    void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
    inline int64_t intlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
    inline ApplyAddShrinkRequest& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


    // itineraryListShrink Field Functions 
    bool hasItineraryListShrink() const { return this->itineraryListShrink_ != nullptr;};
    void deleteItineraryListShrink() { this->itineraryListShrink_ = nullptr;};
    inline string itineraryListShrink() const { DARABONBA_PTR_GET_DEFAULT(itineraryListShrink_, "") };
    inline ApplyAddShrinkRequest& setItineraryListShrink(string itineraryListShrink) { DARABONBA_PTR_SET_VALUE(itineraryListShrink_, itineraryListShrink) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t itineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyAddShrinkRequest& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetListShrink Field Functions 
    bool hasItinerarySetListShrink() const { return this->itinerarySetListShrink_ != nullptr;};
    void deleteItinerarySetListShrink() { this->itinerarySetListShrink_ = nullptr;};
    inline string itinerarySetListShrink() const { DARABONBA_PTR_GET_DEFAULT(itinerarySetListShrink_, "") };
    inline ApplyAddShrinkRequest& setItinerarySetListShrink(string itinerarySetListShrink) { DARABONBA_PTR_SET_VALUE(itinerarySetListShrink_, itinerarySetListShrink) };


    // limitTraveler Field Functions 
    bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
    void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
    inline int32_t limitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
    inline ApplyAddShrinkRequest& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


    // mealBudget Field Functions 
    bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
    void deleteMealBudget() { this->mealBudget_ = nullptr;};
    inline int64_t mealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
    inline ApplyAddShrinkRequest& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyAddShrinkRequest& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyAddShrinkRequest& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyAddShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyAddShrinkRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyAddShrinkRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyAddShrinkRequest& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyAddShrinkRequest& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // togetherBookRule Field Functions 
    bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
    void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
    inline int32_t togetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
    inline ApplyAddShrinkRequest& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


    // trainBudget Field Functions 
    bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
    void deleteTrainBudget() { this->trainBudget_ = nullptr;};
    inline int64_t trainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
    inline ApplyAddShrinkRequest& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


    // travelerListShrink Field Functions 
    bool hasTravelerListShrink() const { return this->travelerListShrink_ != nullptr;};
    void deleteTravelerListShrink() { this->travelerListShrink_ = nullptr;};
    inline string travelerListShrink() const { DARABONBA_PTR_GET_DEFAULT(travelerListShrink_, "") };
    inline ApplyAddShrinkRequest& setTravelerListShrink(string travelerListShrink) { DARABONBA_PTR_SET_VALUE(travelerListShrink_, travelerListShrink) };


    // travelerStandardShrink Field Functions 
    bool hasTravelerStandardShrink() const { return this->travelerStandardShrink_ != nullptr;};
    void deleteTravelerStandardShrink() { this->travelerStandardShrink_ = nullptr;};
    inline string travelerStandardShrink() const { DARABONBA_PTR_GET_DEFAULT(travelerStandardShrink_, "") };
    inline ApplyAddShrinkRequest& setTravelerStandardShrink(string travelerStandardShrink) { DARABONBA_PTR_SET_VALUE(travelerStandardShrink_, travelerStandardShrink) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyAddShrinkRequest& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t tripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyAddShrinkRequest& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyAddShrinkRequest& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyAddShrinkRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyAddShrinkRequest& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyAddShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyAddShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleBudget Field Functions 
    bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
    void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
    inline int64_t vehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
    inline ApplyAddShrinkRequest& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


  protected:
    std::shared_ptr<int64_t> budget_ = nullptr;
    std::shared_ptr<int32_t> budgetMerge_ = nullptr;
    std::shared_ptr<string> carRuleShrink_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> defaultStandardShrink_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    // 可将补充描述传入此字段，账单中将会体现此字段的值。可以用于企业的统计和对账
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<string> externalTravelerListShrink_ = nullptr;
    std::shared_ptr<string> externalTravelerStandardShrink_ = nullptr;
    std::shared_ptr<int64_t> flightBudget_ = nullptr;
    std::shared_ptr<int64_t> hotelBudget_ = nullptr;
    std::shared_ptr<string> hotelShareShrink_ = nullptr;
    std::shared_ptr<string> internationalFlightCabins_ = nullptr;
    std::shared_ptr<int64_t> intlFlightBudget_ = nullptr;
    std::shared_ptr<int64_t> intlHotelBudget_ = nullptr;
    std::shared_ptr<string> itineraryListShrink_ = nullptr;
    std::shared_ptr<int32_t> itineraryRule_ = nullptr;
    std::shared_ptr<string> itinerarySetListShrink_ = nullptr;
    std::shared_ptr<int32_t> limitTraveler_ = nullptr;
    std::shared_ptr<int64_t> mealBudget_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<int32_t> togetherBookRule_ = nullptr;
    std::shared_ptr<int64_t> trainBudget_ = nullptr;
    std::shared_ptr<string> travelerListShrink_ = nullptr;
    std::shared_ptr<string> travelerStandardShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<int32_t> tripDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tripTitle_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> unionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<int64_t> vehicleBudget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
