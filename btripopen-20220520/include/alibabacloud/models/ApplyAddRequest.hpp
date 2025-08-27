// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyAddRequestCarRule.hpp>
#include <alibabacloud/models/ApplyAddRequestDefaultStandard.hpp>
#include <vector>
#include <alibabacloud/models/ApplyAddRequestExternalTravelerList.hpp>
#include <alibabacloud/models/ApplyAddRequestExternalTravelerStandard.hpp>
#include <alibabacloud/models/ApplyAddRequestHotelShare.hpp>
#include <alibabacloud/models/ApplyAddRequestItineraryList.hpp>
#include <alibabacloud/models/ApplyAddRequestItinerarySetList.hpp>
#include <alibabacloud/models/ApplyAddRequestTravelerList.hpp>
#include <alibabacloud/models/ApplyAddRequestTravelerStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
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
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
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
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
    };
    ApplyAddRequest() = default ;
    ApplyAddRequest(const ApplyAddRequest &) = default ;
    ApplyAddRequest(ApplyAddRequest &&) = default ;
    ApplyAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddRequest() = default ;
    ApplyAddRequest& operator=(const ApplyAddRequest &) = default ;
    ApplyAddRequest& operator=(ApplyAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->budget_ != nullptr
        && this->budgetMerge_ != nullptr && this->carRule_ != nullptr && this->corpName_ != nullptr && this->defaultStandard_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->extendField_ != nullptr && this->externalTravelerList_ != nullptr && this->externalTravelerStandard_ != nullptr && this->flightBudget_ != nullptr
        && this->hotelBudget_ != nullptr && this->hotelShare_ != nullptr && this->internationalFlightCabins_ != nullptr && this->intlFlightBudget_ != nullptr && this->intlHotelBudget_ != nullptr
        && this->itineraryList_ != nullptr && this->itineraryRule_ != nullptr && this->itinerarySetList_ != nullptr && this->limitTraveler_ != nullptr && this->mealBudget_ != nullptr
        && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr && this->status_ != nullptr && this->subCorpId_ != nullptr && this->thirdpartApplyId_ != nullptr
        && this->thirdpartBusinessId_ != nullptr && this->thirdpartDepartId_ != nullptr && this->togetherBookRule_ != nullptr && this->trainBudget_ != nullptr && this->travelerList_ != nullptr
        && this->travelerStandard_ != nullptr && this->tripCause_ != nullptr && this->tripDay_ != nullptr && this->tripTitle_ != nullptr && this->type_ != nullptr
        && this->unionNo_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->vehicleBudget_ != nullptr; };
    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline int64_t budget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
    inline ApplyAddRequest& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


    // budgetMerge Field Functions 
    bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
    void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
    inline int32_t budgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
    inline ApplyAddRequest& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


    // carRule Field Functions 
    bool hasCarRule() const { return this->carRule_ != nullptr;};
    void deleteCarRule() { this->carRule_ = nullptr;};
    inline const ApplyAddRequestCarRule & carRule() const { DARABONBA_PTR_GET_CONST(carRule_, ApplyAddRequestCarRule) };
    inline ApplyAddRequestCarRule carRule() { DARABONBA_PTR_GET(carRule_, ApplyAddRequestCarRule) };
    inline ApplyAddRequest& setCarRule(const ApplyAddRequestCarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
    inline ApplyAddRequest& setCarRule(ApplyAddRequestCarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyAddRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // defaultStandard Field Functions 
    bool hasDefaultStandard() const { return this->defaultStandard_ != nullptr;};
    void deleteDefaultStandard() { this->defaultStandard_ = nullptr;};
    inline const ApplyAddRequestDefaultStandard & defaultStandard() const { DARABONBA_PTR_GET_CONST(defaultStandard_, ApplyAddRequestDefaultStandard) };
    inline ApplyAddRequestDefaultStandard defaultStandard() { DARABONBA_PTR_GET(defaultStandard_, ApplyAddRequestDefaultStandard) };
    inline ApplyAddRequest& setDefaultStandard(const ApplyAddRequestDefaultStandard & defaultStandard) { DARABONBA_PTR_SET_VALUE(defaultStandard_, defaultStandard) };
    inline ApplyAddRequest& setDefaultStandard(ApplyAddRequestDefaultStandard && defaultStandard) { DARABONBA_PTR_SET_RVALUE(defaultStandard_, defaultStandard) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyAddRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyAddRequest& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ApplyAddRequest& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // externalTravelerList Field Functions 
    bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
    void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
    inline const vector<ApplyAddRequestExternalTravelerList> & externalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<ApplyAddRequestExternalTravelerList>) };
    inline vector<ApplyAddRequestExternalTravelerList> externalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<ApplyAddRequestExternalTravelerList>) };
    inline ApplyAddRequest& setExternalTravelerList(const vector<ApplyAddRequestExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
    inline ApplyAddRequest& setExternalTravelerList(vector<ApplyAddRequestExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


    // externalTravelerStandard Field Functions 
    bool hasExternalTravelerStandard() const { return this->externalTravelerStandard_ != nullptr;};
    void deleteExternalTravelerStandard() { this->externalTravelerStandard_ = nullptr;};
    inline const ApplyAddRequestExternalTravelerStandard & externalTravelerStandard() const { DARABONBA_PTR_GET_CONST(externalTravelerStandard_, ApplyAddRequestExternalTravelerStandard) };
    inline ApplyAddRequestExternalTravelerStandard externalTravelerStandard() { DARABONBA_PTR_GET(externalTravelerStandard_, ApplyAddRequestExternalTravelerStandard) };
    inline ApplyAddRequest& setExternalTravelerStandard(const ApplyAddRequestExternalTravelerStandard & externalTravelerStandard) { DARABONBA_PTR_SET_VALUE(externalTravelerStandard_, externalTravelerStandard) };
    inline ApplyAddRequest& setExternalTravelerStandard(ApplyAddRequestExternalTravelerStandard && externalTravelerStandard) { DARABONBA_PTR_SET_RVALUE(externalTravelerStandard_, externalTravelerStandard) };


    // flightBudget Field Functions 
    bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
    void deleteFlightBudget() { this->flightBudget_ = nullptr;};
    inline int64_t flightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
    inline ApplyAddRequest& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


    // hotelBudget Field Functions 
    bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
    void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
    inline int64_t hotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
    inline ApplyAddRequest& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


    // hotelShare Field Functions 
    bool hasHotelShare() const { return this->hotelShare_ != nullptr;};
    void deleteHotelShare() { this->hotelShare_ = nullptr;};
    inline const ApplyAddRequestHotelShare & hotelShare() const { DARABONBA_PTR_GET_CONST(hotelShare_, ApplyAddRequestHotelShare) };
    inline ApplyAddRequestHotelShare hotelShare() { DARABONBA_PTR_GET(hotelShare_, ApplyAddRequestHotelShare) };
    inline ApplyAddRequest& setHotelShare(const ApplyAddRequestHotelShare & hotelShare) { DARABONBA_PTR_SET_VALUE(hotelShare_, hotelShare) };
    inline ApplyAddRequest& setHotelShare(ApplyAddRequestHotelShare && hotelShare) { DARABONBA_PTR_SET_RVALUE(hotelShare_, hotelShare) };


    // internationalFlightCabins Field Functions 
    bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
    void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
    inline string internationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
    inline ApplyAddRequest& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


    // intlFlightBudget Field Functions 
    bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
    void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
    inline int64_t intlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
    inline ApplyAddRequest& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


    // intlHotelBudget Field Functions 
    bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
    void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
    inline int64_t intlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
    inline ApplyAddRequest& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<ApplyAddRequestItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<ApplyAddRequestItineraryList>) };
    inline vector<ApplyAddRequestItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<ApplyAddRequestItineraryList>) };
    inline ApplyAddRequest& setItineraryList(const vector<ApplyAddRequestItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline ApplyAddRequest& setItineraryList(vector<ApplyAddRequestItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t itineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyAddRequest& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetList Field Functions 
    bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
    void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
    inline const vector<ApplyAddRequestItinerarySetList> & itinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<ApplyAddRequestItinerarySetList>) };
    inline vector<ApplyAddRequestItinerarySetList> itinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<ApplyAddRequestItinerarySetList>) };
    inline ApplyAddRequest& setItinerarySetList(const vector<ApplyAddRequestItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
    inline ApplyAddRequest& setItinerarySetList(vector<ApplyAddRequestItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


    // limitTraveler Field Functions 
    bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
    void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
    inline int32_t limitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
    inline ApplyAddRequest& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


    // mealBudget Field Functions 
    bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
    void deleteMealBudget() { this->mealBudget_ = nullptr;};
    inline int64_t mealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
    inline ApplyAddRequest& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyAddRequest& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyAddRequest& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyAddRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyAddRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyAddRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyAddRequest& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyAddRequest& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // togetherBookRule Field Functions 
    bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
    void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
    inline int32_t togetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
    inline ApplyAddRequest& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


    // trainBudget Field Functions 
    bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
    void deleteTrainBudget() { this->trainBudget_ = nullptr;};
    inline int64_t trainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
    inline ApplyAddRequest& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


    // travelerList Field Functions 
    bool hasTravelerList() const { return this->travelerList_ != nullptr;};
    void deleteTravelerList() { this->travelerList_ = nullptr;};
    inline const vector<ApplyAddRequestTravelerList> & travelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<ApplyAddRequestTravelerList>) };
    inline vector<ApplyAddRequestTravelerList> travelerList() { DARABONBA_PTR_GET(travelerList_, vector<ApplyAddRequestTravelerList>) };
    inline ApplyAddRequest& setTravelerList(const vector<ApplyAddRequestTravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
    inline ApplyAddRequest& setTravelerList(vector<ApplyAddRequestTravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<ApplyAddRequestTravelerStandard> & travelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<ApplyAddRequestTravelerStandard>) };
    inline vector<ApplyAddRequestTravelerStandard> travelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<ApplyAddRequestTravelerStandard>) };
    inline ApplyAddRequest& setTravelerStandard(const vector<ApplyAddRequestTravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline ApplyAddRequest& setTravelerStandard(vector<ApplyAddRequestTravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyAddRequest& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t tripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyAddRequest& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyAddRequest& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyAddRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyAddRequest& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyAddRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyAddRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleBudget Field Functions 
    bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
    void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
    inline int64_t vehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
    inline ApplyAddRequest& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


  protected:
    std::shared_ptr<int64_t> budget_ = nullptr;
    std::shared_ptr<int32_t> budgetMerge_ = nullptr;
    std::shared_ptr<ApplyAddRequestCarRule> carRule_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<ApplyAddRequestDefaultStandard> defaultStandard_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    // 可将补充描述传入此字段，账单中将会体现此字段的值。可以用于企业的统计和对账
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<vector<ApplyAddRequestExternalTravelerList>> externalTravelerList_ = nullptr;
    std::shared_ptr<ApplyAddRequestExternalTravelerStandard> externalTravelerStandard_ = nullptr;
    std::shared_ptr<int64_t> flightBudget_ = nullptr;
    std::shared_ptr<int64_t> hotelBudget_ = nullptr;
    std::shared_ptr<ApplyAddRequestHotelShare> hotelShare_ = nullptr;
    std::shared_ptr<string> internationalFlightCabins_ = nullptr;
    std::shared_ptr<int64_t> intlFlightBudget_ = nullptr;
    std::shared_ptr<int64_t> intlHotelBudget_ = nullptr;
    std::shared_ptr<vector<ApplyAddRequestItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int32_t> itineraryRule_ = nullptr;
    std::shared_ptr<vector<ApplyAddRequestItinerarySetList>> itinerarySetList_ = nullptr;
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
    std::shared_ptr<vector<ApplyAddRequestTravelerList>> travelerList_ = nullptr;
    std::shared_ptr<vector<ApplyAddRequestTravelerStandard>> travelerStandard_ = nullptr;
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
