// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleApproverList.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleCarRule.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleExternalTravelerList.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleHotelShare.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleItineraryList.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleItinerarySetList.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleTravelerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_TO_JSON(approver_list, approverList_);
      DARABONBA_PTR_TO_JSON(budget, budget_);
      DARABONBA_PTR_TO_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_TO_JSON(car_rule, carRule_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_TO_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_TO_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_TO_JSON(id, id_);
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
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_TO_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
      DARABONBA_PTR_FROM_JSON(budget, budget_);
      DARABONBA_PTR_FROM_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_FROM_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_FROM_JSON(id, id_);
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
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_FROM_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
    };
    ApplyQueryResponseBodyModule() = default ;
    ApplyQueryResponseBodyModule(const ApplyQueryResponseBodyModule &) = default ;
    ApplyQueryResponseBodyModule(ApplyQueryResponseBodyModule &&) = default ;
    ApplyQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModule() = default ;
    ApplyQueryResponseBodyModule& operator=(const ApplyQueryResponseBodyModule &) = default ;
    ApplyQueryResponseBodyModule& operator=(ApplyQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyShowId_ != nullptr
        && this->approverList_ != nullptr && this->budget_ != nullptr && this->budgetMerge_ != nullptr && this->carRule_ != nullptr && this->corpId_ != nullptr
        && this->corpName_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr && this->extendField_ != nullptr && this->externalTravelerList_ != nullptr
        && this->flightBudget_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->hotelBudget_ != nullptr && this->hotelShare_ != nullptr
        && this->id_ != nullptr && this->intlFlightBudget_ != nullptr && this->intlHotelBudget_ != nullptr && this->itineraryList_ != nullptr && this->itineraryRule_ != nullptr
        && this->itinerarySetList_ != nullptr && this->limitTraveler_ != nullptr && this->mealBudget_ != nullptr && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr
        && this->status_ != nullptr && this->statusDesc_ != nullptr && this->thirdpartBusinessId_ != nullptr && this->thirdpartId_ != nullptr && this->togetherBookRule_ != nullptr
        && this->trainBudget_ != nullptr && this->travelerList_ != nullptr && this->tripCause_ != nullptr && this->tripDay_ != nullptr && this->tripTitle_ != nullptr
        && this->type_ != nullptr && this->unionNo_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->vehicleBudget_ != nullptr; };
    // applyShowId Field Functions 
    bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
    void deleteApplyShowId() { this->applyShowId_ = nullptr;};
    inline string applyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
    inline ApplyQueryResponseBodyModule& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


    // approverList Field Functions 
    bool hasApproverList() const { return this->approverList_ != nullptr;};
    void deleteApproverList() { this->approverList_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleApproverList> & approverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<Models::ApplyQueryResponseBodyModuleApproverList>) };
    inline vector<Models::ApplyQueryResponseBodyModuleApproverList> approverList() { DARABONBA_PTR_GET(approverList_, vector<Models::ApplyQueryResponseBodyModuleApproverList>) };
    inline ApplyQueryResponseBodyModule& setApproverList(const vector<Models::ApplyQueryResponseBodyModuleApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
    inline ApplyQueryResponseBodyModule& setApproverList(vector<Models::ApplyQueryResponseBodyModuleApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline int64_t budget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
    inline ApplyQueryResponseBodyModule& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


    // budgetMerge Field Functions 
    bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
    void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
    inline int32_t budgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
    inline ApplyQueryResponseBodyModule& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


    // carRule Field Functions 
    bool hasCarRule() const { return this->carRule_ != nullptr;};
    void deleteCarRule() { this->carRule_ = nullptr;};
    inline const Models::ApplyQueryResponseBodyModuleCarRule & carRule() const { DARABONBA_PTR_GET_CONST(carRule_, Models::ApplyQueryResponseBodyModuleCarRule) };
    inline Models::ApplyQueryResponseBodyModuleCarRule carRule() { DARABONBA_PTR_GET(carRule_, Models::ApplyQueryResponseBodyModuleCarRule) };
    inline ApplyQueryResponseBodyModule& setCarRule(const Models::ApplyQueryResponseBodyModuleCarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
    inline ApplyQueryResponseBodyModule& setCarRule(Models::ApplyQueryResponseBodyModuleCarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline ApplyQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyQueryResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyQueryResponseBodyModule& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyQueryResponseBodyModule& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ApplyQueryResponseBodyModule& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // externalTravelerList Field Functions 
    bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
    void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList> & externalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList>) };
    inline vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList> externalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList>) };
    inline ApplyQueryResponseBodyModule& setExternalTravelerList(const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
    inline ApplyQueryResponseBodyModule& setExternalTravelerList(vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


    // flightBudget Field Functions 
    bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
    void deleteFlightBudget() { this->flightBudget_ = nullptr;};
    inline int64_t flightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ApplyQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ApplyQueryResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hotelBudget Field Functions 
    bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
    void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
    inline int64_t hotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


    // hotelShare Field Functions 
    bool hasHotelShare() const { return this->hotelShare_ != nullptr;};
    void deleteHotelShare() { this->hotelShare_ = nullptr;};
    inline const Models::ApplyQueryResponseBodyModuleHotelShare & hotelShare() const { DARABONBA_PTR_GET_CONST(hotelShare_, Models::ApplyQueryResponseBodyModuleHotelShare) };
    inline Models::ApplyQueryResponseBodyModuleHotelShare hotelShare() { DARABONBA_PTR_GET(hotelShare_, Models::ApplyQueryResponseBodyModuleHotelShare) };
    inline ApplyQueryResponseBodyModule& setHotelShare(const Models::ApplyQueryResponseBodyModuleHotelShare & hotelShare) { DARABONBA_PTR_SET_VALUE(hotelShare_, hotelShare) };
    inline ApplyQueryResponseBodyModule& setHotelShare(Models::ApplyQueryResponseBodyModuleHotelShare && hotelShare) { DARABONBA_PTR_SET_RVALUE(hotelShare_, hotelShare) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ApplyQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intlFlightBudget Field Functions 
    bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
    void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
    inline int64_t intlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


    // intlHotelBudget Field Functions 
    bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
    void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
    inline int64_t intlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Models::ApplyQueryResponseBodyModuleItineraryList>) };
    inline vector<Models::ApplyQueryResponseBodyModuleItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Models::ApplyQueryResponseBodyModuleItineraryList>) };
    inline ApplyQueryResponseBodyModule& setItineraryList(const vector<Models::ApplyQueryResponseBodyModuleItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline ApplyQueryResponseBodyModule& setItineraryList(vector<Models::ApplyQueryResponseBodyModuleItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t itineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyQueryResponseBodyModule& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetList Field Functions 
    bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
    void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleItinerarySetList> & itinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<Models::ApplyQueryResponseBodyModuleItinerarySetList>) };
    inline vector<Models::ApplyQueryResponseBodyModuleItinerarySetList> itinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<Models::ApplyQueryResponseBodyModuleItinerarySetList>) };
    inline ApplyQueryResponseBodyModule& setItinerarySetList(const vector<Models::ApplyQueryResponseBodyModuleItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
    inline ApplyQueryResponseBodyModule& setItinerarySetList(vector<Models::ApplyQueryResponseBodyModuleItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


    // limitTraveler Field Functions 
    bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
    void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
    inline int32_t limitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
    inline ApplyQueryResponseBodyModule& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


    // mealBudget Field Functions 
    bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
    void deleteMealBudget() { this->mealBudget_ = nullptr;};
    inline int64_t mealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyQueryResponseBodyModule& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyQueryResponseBodyModule& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ApplyQueryResponseBodyModule& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyQueryResponseBodyModule& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline ApplyQueryResponseBodyModule& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // togetherBookRule Field Functions 
    bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
    void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
    inline int32_t togetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
    inline ApplyQueryResponseBodyModule& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


    // trainBudget Field Functions 
    bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
    void deleteTrainBudget() { this->trainBudget_ = nullptr;};
    inline int64_t trainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


    // travelerList Field Functions 
    bool hasTravelerList() const { return this->travelerList_ != nullptr;};
    void deleteTravelerList() { this->travelerList_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleTravelerList> & travelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<Models::ApplyQueryResponseBodyModuleTravelerList>) };
    inline vector<Models::ApplyQueryResponseBodyModuleTravelerList> travelerList() { DARABONBA_PTR_GET(travelerList_, vector<Models::ApplyQueryResponseBodyModuleTravelerList>) };
    inline ApplyQueryResponseBodyModule& setTravelerList(const vector<Models::ApplyQueryResponseBodyModuleTravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
    inline ApplyQueryResponseBodyModule& setTravelerList(vector<Models::ApplyQueryResponseBodyModuleTravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyQueryResponseBodyModule& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t tripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyQueryResponseBodyModule& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyQueryResponseBodyModule& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyQueryResponseBodyModule& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyQueryResponseBodyModule& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleBudget Field Functions 
    bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
    void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
    inline int64_t vehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
    inline ApplyQueryResponseBodyModule& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


  protected:
    std::shared_ptr<string> applyShowId_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleApproverList>> approverList_ = nullptr;
    std::shared_ptr<int64_t> budget_ = nullptr;
    std::shared_ptr<int32_t> budgetMerge_ = nullptr;
    std::shared_ptr<Models::ApplyQueryResponseBodyModuleCarRule> carRule_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    // 补充描述，账单中将会体现此字段的值。可以用于企业的统计和对账
    std::shared_ptr<string> extendField_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleExternalTravelerList>> externalTravelerList_ = nullptr;
    std::shared_ptr<int64_t> flightBudget_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> hotelBudget_ = nullptr;
    std::shared_ptr<Models::ApplyQueryResponseBodyModuleHotelShare> hotelShare_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> intlFlightBudget_ = nullptr;
    std::shared_ptr<int64_t> intlHotelBudget_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int32_t> itineraryRule_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleItinerarySetList>> itinerarySetList_ = nullptr;
    std::shared_ptr<int32_t> limitTraveler_ = nullptr;
    std::shared_ptr<int64_t> mealBudget_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<int32_t> togetherBookRule_ = nullptr;
    std::shared_ptr<int64_t> trainBudget_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleTravelerList>> travelerList_ = nullptr;
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<int32_t> tripDay_ = nullptr;
    std::shared_ptr<string> tripTitle_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> unionNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<int64_t> vehicleBudget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
