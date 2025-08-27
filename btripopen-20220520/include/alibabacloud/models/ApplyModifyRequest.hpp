// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyModifyRequestCarRule.hpp>
#include <alibabacloud/models/ApplyModifyRequestDefaultStandard.hpp>
#include <vector>
#include <alibabacloud/models/ApplyModifyRequestExternalTravelerList.hpp>
#include <alibabacloud/models/ApplyModifyRequestExternalTravelerStandard.hpp>
#include <alibabacloud/models/ApplyModifyRequestHotelShare.hpp>
#include <alibabacloud/models/ApplyModifyRequestItineraryList.hpp>
#include <alibabacloud/models/ApplyModifyRequestItinerarySetList.hpp>
#include <alibabacloud/models/ApplyModifyRequestTravelerList.hpp>
#include <alibabacloud/models/ApplyModifyRequestTravelerStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(budget, budget_);
      DARABONBA_PTR_TO_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_TO_JSON(car_rule, carRule_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(default_standard, defaultStandard_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_TO_JSON(external_traveler_standard, externalTravelerStandard_);
      DARABONBA_PTR_TO_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_TO_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_TO_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_TO_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_TO_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetList_);
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
      DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(budget, budget_);
      DARABONBA_PTR_FROM_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(default_standard, defaultStandard_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_FROM_JSON(external_traveler_standard, externalTravelerStandard_);
      DARABONBA_PTR_FROM_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_FROM_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_FROM_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetList_);
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
      DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
    };
    ApplyModifyRequest() = default ;
    ApplyModifyRequest(const ApplyModifyRequest &) = default ;
    ApplyModifyRequest(ApplyModifyRequest &&) = default ;
    ApplyModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyRequest() = default ;
    ApplyModifyRequest& operator=(const ApplyModifyRequest &) = default ;
    ApplyModifyRequest& operator=(ApplyModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->budget_ != nullptr
        && this->budgetMerge_ != nullptr && this->carRule_ != nullptr && this->corpName_ != nullptr && this->defaultStandard_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->extendField_ != nullptr && this->externalTravelerList_ != nullptr && this->externalTravelerStandard_ != nullptr && this->flightBudget_ != nullptr
        && this->hotelBudget_ != nullptr && this->hotelShare_ != nullptr && this->intlFlightBudget_ != nullptr && this->intlHotelBudget_ != nullptr && this->itineraryList_ != nullptr
        && this->itineraryRule_ != nullptr && this->itinerarySetList_ != nullptr && this->limitTraveler_ != nullptr && this->mealBudget_ != nullptr && this->paymentDepartmentId_ != nullptr
        && this->paymentDepartmentName_ != nullptr && this->status_ != nullptr && this->subCorpId_ != nullptr && this->thirdpartApplyId_ != nullptr && this->thirdpartBusinessId_ != nullptr
        && this->thirdpartDepartId_ != nullptr && this->togetherBookRule_ != nullptr && this->trainBudget_ != nullptr && this->travelerList_ != nullptr && this->travelerStandard_ != nullptr
        && this->tripCause_ != nullptr && this->tripDay_ != nullptr && this->tripTitle_ != nullptr && this->unionNo_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr && this->vehicleBudget_ != nullptr; };
    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline int64_t budget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
    inline ApplyModifyRequest& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


    // budgetMerge Field Functions 
    bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
    void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
    inline int32_t budgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
    inline ApplyModifyRequest& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


    // carRule Field Functions 
    bool hasCarRule() const { return this->carRule_ != nullptr;};
    void deleteCarRule() { this->carRule_ = nullptr;};
    inline const ApplyModifyRequestCarRule & carRule() const { DARABONBA_PTR_GET_CONST(carRule_, ApplyModifyRequestCarRule) };
    inline ApplyModifyRequestCarRule carRule() { DARABONBA_PTR_GET(carRule_, ApplyModifyRequestCarRule) };
    inline ApplyModifyRequest& setCarRule(const ApplyModifyRequestCarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
    inline ApplyModifyRequest& setCarRule(ApplyModifyRequestCarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyModifyRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // defaultStandard Field Functions 
    bool hasDefaultStandard() const { return this->defaultStandard_ != nullptr;};
    void deleteDefaultStandard() { this->defaultStandard_ = nullptr;};
    inline const ApplyModifyRequestDefaultStandard & defaultStandard() const { DARABONBA_PTR_GET_CONST(defaultStandard_, ApplyModifyRequestDefaultStandard) };
    inline ApplyModifyRequestDefaultStandard defaultStandard() { DARABONBA_PTR_GET(defaultStandard_, ApplyModifyRequestDefaultStandard) };
    inline ApplyModifyRequest& setDefaultStandard(const ApplyModifyRequestDefaultStandard & defaultStandard) { DARABONBA_PTR_SET_VALUE(defaultStandard_, defaultStandard) };
    inline ApplyModifyRequest& setDefaultStandard(ApplyModifyRequestDefaultStandard && defaultStandard) { DARABONBA_PTR_SET_RVALUE(defaultStandard_, defaultStandard) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyModifyRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyModifyRequest& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ApplyModifyRequest& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // externalTravelerList Field Functions 
    bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
    void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
    inline const vector<ApplyModifyRequestExternalTravelerList> & externalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<ApplyModifyRequestExternalTravelerList>) };
    inline vector<ApplyModifyRequestExternalTravelerList> externalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<ApplyModifyRequestExternalTravelerList>) };
    inline ApplyModifyRequest& setExternalTravelerList(const vector<ApplyModifyRequestExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
    inline ApplyModifyRequest& setExternalTravelerList(vector<ApplyModifyRequestExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


    // externalTravelerStandard Field Functions 
    bool hasExternalTravelerStandard() const { return this->externalTravelerStandard_ != nullptr;};
    void deleteExternalTravelerStandard() { this->externalTravelerStandard_ = nullptr;};
    inline const ApplyModifyRequestExternalTravelerStandard & externalTravelerStandard() const { DARABONBA_PTR_GET_CONST(externalTravelerStandard_, ApplyModifyRequestExternalTravelerStandard) };
    inline ApplyModifyRequestExternalTravelerStandard externalTravelerStandard() { DARABONBA_PTR_GET(externalTravelerStandard_, ApplyModifyRequestExternalTravelerStandard) };
    inline ApplyModifyRequest& setExternalTravelerStandard(const ApplyModifyRequestExternalTravelerStandard & externalTravelerStandard) { DARABONBA_PTR_SET_VALUE(externalTravelerStandard_, externalTravelerStandard) };
    inline ApplyModifyRequest& setExternalTravelerStandard(ApplyModifyRequestExternalTravelerStandard && externalTravelerStandard) { DARABONBA_PTR_SET_RVALUE(externalTravelerStandard_, externalTravelerStandard) };


    // flightBudget Field Functions 
    bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
    void deleteFlightBudget() { this->flightBudget_ = nullptr;};
    inline int64_t flightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
    inline ApplyModifyRequest& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


    // hotelBudget Field Functions 
    bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
    void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
    inline int64_t hotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
    inline ApplyModifyRequest& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


    // hotelShare Field Functions 
    bool hasHotelShare() const { return this->hotelShare_ != nullptr;};
    void deleteHotelShare() { this->hotelShare_ = nullptr;};
    inline const ApplyModifyRequestHotelShare & hotelShare() const { DARABONBA_PTR_GET_CONST(hotelShare_, ApplyModifyRequestHotelShare) };
    inline ApplyModifyRequestHotelShare hotelShare() { DARABONBA_PTR_GET(hotelShare_, ApplyModifyRequestHotelShare) };
    inline ApplyModifyRequest& setHotelShare(const ApplyModifyRequestHotelShare & hotelShare) { DARABONBA_PTR_SET_VALUE(hotelShare_, hotelShare) };
    inline ApplyModifyRequest& setHotelShare(ApplyModifyRequestHotelShare && hotelShare) { DARABONBA_PTR_SET_RVALUE(hotelShare_, hotelShare) };


    // intlFlightBudget Field Functions 
    bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
    void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
    inline int64_t intlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
    inline ApplyModifyRequest& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


    // intlHotelBudget Field Functions 
    bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
    void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
    inline int64_t intlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
    inline ApplyModifyRequest& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<ApplyModifyRequestItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<ApplyModifyRequestItineraryList>) };
    inline vector<ApplyModifyRequestItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<ApplyModifyRequestItineraryList>) };
    inline ApplyModifyRequest& setItineraryList(const vector<ApplyModifyRequestItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline ApplyModifyRequest& setItineraryList(vector<ApplyModifyRequestItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t itineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyModifyRequest& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetList Field Functions 
    bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
    void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
    inline const vector<ApplyModifyRequestItinerarySetList> & itinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<ApplyModifyRequestItinerarySetList>) };
    inline vector<ApplyModifyRequestItinerarySetList> itinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<ApplyModifyRequestItinerarySetList>) };
    inline ApplyModifyRequest& setItinerarySetList(const vector<ApplyModifyRequestItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
    inline ApplyModifyRequest& setItinerarySetList(vector<ApplyModifyRequestItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


    // limitTraveler Field Functions 
    bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
    void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
    inline int32_t limitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
    inline ApplyModifyRequest& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


    // mealBudget Field Functions 
    bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
    void deleteMealBudget() { this->mealBudget_ = nullptr;};
    inline int64_t mealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
    inline ApplyModifyRequest& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyModifyRequest& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyModifyRequest& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyModifyRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyModifyRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyModifyRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyModifyRequest& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyModifyRequest& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // togetherBookRule Field Functions 
    bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
    void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
    inline int32_t togetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
    inline ApplyModifyRequest& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


    // trainBudget Field Functions 
    bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
    void deleteTrainBudget() { this->trainBudget_ = nullptr;};
    inline int64_t trainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
    inline ApplyModifyRequest& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


    // travelerList Field Functions 
    bool hasTravelerList() const { return this->travelerList_ != nullptr;};
    void deleteTravelerList() { this->travelerList_ = nullptr;};
    inline const vector<ApplyModifyRequestTravelerList> & travelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<ApplyModifyRequestTravelerList>) };
    inline vector<ApplyModifyRequestTravelerList> travelerList() { DARABONBA_PTR_GET(travelerList_, vector<ApplyModifyRequestTravelerList>) };
    inline ApplyModifyRequest& setTravelerList(const vector<ApplyModifyRequestTravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
    inline ApplyModifyRequest& setTravelerList(vector<ApplyModifyRequestTravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<ApplyModifyRequestTravelerStandard> & travelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<ApplyModifyRequestTravelerStandard>) };
    inline vector<ApplyModifyRequestTravelerStandard> travelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<ApplyModifyRequestTravelerStandard>) };
    inline ApplyModifyRequest& setTravelerStandard(const vector<ApplyModifyRequestTravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline ApplyModifyRequest& setTravelerStandard(vector<ApplyModifyRequestTravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyModifyRequest& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t tripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyModifyRequest& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyModifyRequest& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyModifyRequest& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyModifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyModifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleBudget Field Functions 
    bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
    void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
    inline int64_t vehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
    inline ApplyModifyRequest& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


  protected:
    std::shared_ptr<int64_t> budget_ = nullptr;
    std::shared_ptr<int32_t> budgetMerge_ = nullptr;
    std::shared_ptr<ApplyModifyRequestCarRule> carRule_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<ApplyModifyRequestDefaultStandard> defaultStandard_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    // 可将补充描述传入此字段，账单中将会体现此字段的值。可以用于企业的统计和对账
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<vector<ApplyModifyRequestExternalTravelerList>> externalTravelerList_ = nullptr;
    std::shared_ptr<ApplyModifyRequestExternalTravelerStandard> externalTravelerStandard_ = nullptr;
    std::shared_ptr<int64_t> flightBudget_ = nullptr;
    std::shared_ptr<int64_t> hotelBudget_ = nullptr;
    std::shared_ptr<ApplyModifyRequestHotelShare> hotelShare_ = nullptr;
    std::shared_ptr<int64_t> intlFlightBudget_ = nullptr;
    std::shared_ptr<int64_t> intlHotelBudget_ = nullptr;
    std::shared_ptr<vector<ApplyModifyRequestItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int32_t> itineraryRule_ = nullptr;
    std::shared_ptr<vector<ApplyModifyRequestItinerarySetList>> itinerarySetList_ = nullptr;
    std::shared_ptr<int32_t> limitTraveler_ = nullptr;
    std::shared_ptr<int64_t> mealBudget_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    // 子企业Id
    std::shared_ptr<string> subCorpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<int32_t> togetherBookRule_ = nullptr;
    std::shared_ptr<int64_t> trainBudget_ = nullptr;
    std::shared_ptr<vector<ApplyModifyRequestTravelerList>> travelerList_ = nullptr;
    std::shared_ptr<vector<ApplyModifyRequestTravelerStandard>> travelerStandard_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<int32_t> tripDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tripTitle_ = nullptr;
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
