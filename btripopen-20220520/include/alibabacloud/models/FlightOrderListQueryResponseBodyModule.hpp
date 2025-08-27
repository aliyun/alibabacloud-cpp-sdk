// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModuleCostCenter.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModuleInsureInfoList.hpp>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModuleInvoice.hpp>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModuleUserAffiliateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(insure_info_list, insureInfoList_);
      DARABONBA_PTR_TO_JSON(invoice, invoice_);
      DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(ret_date, retDate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(insure_info_list, insureInfoList_);
      DARABONBA_PTR_FROM_JSON(invoice, invoice_);
      DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(ret_date, retDate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
      DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    FlightOrderListQueryResponseBodyModule() = default ;
    FlightOrderListQueryResponseBodyModule(const FlightOrderListQueryResponseBodyModule &) = default ;
    FlightOrderListQueryResponseBodyModule(FlightOrderListQueryResponseBodyModule &&) = default ;
    FlightOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBodyModule() = default ;
    FlightOrderListQueryResponseBodyModule& operator=(const FlightOrderListQueryResponseBodyModule &) = default ;
    FlightOrderListQueryResponseBodyModule& operator=(FlightOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->arrAirport_ != nullptr && this->arrCity_ != nullptr && this->arrCityAdCode_ != nullptr && this->btripTitle_ != nullptr && this->cabinClass_ != nullptr
        && this->contactName_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->costCenter_ != nullptr && this->depAirport_ != nullptr
        && this->depCity_ != nullptr && this->depCityAdCode_ != nullptr && this->depDate_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr
        && this->discount_ != nullptr && this->flightNo_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->insureInfoList_ != nullptr && this->invoice_ != nullptr && this->passengerCount_ != nullptr && this->passengerName_ != nullptr && this->priceInfoList_ != nullptr
        && this->projectCode_ != nullptr && this->projectId_ != nullptr && this->projectTitle_ != nullptr && this->retDate_ != nullptr && this->status_ != nullptr
        && this->thirdPartProjectId_ != nullptr && this->thirdpartApplyId_ != nullptr && this->thirdpartBusinessId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->tripType_ != nullptr
        && this->userAffiliateList_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline FlightOrderListQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrAirport Field Functions 
    bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
    void deleteArrAirport() { this->arrAirport_ = nullptr;};
    inline string arrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
    inline FlightOrderListQueryResponseBodyModule& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightOrderListQueryResponseBodyModule& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityAdCode Field Functions 
    bool hasArrCityAdCode() const { return this->arrCityAdCode_ != nullptr;};
    void deleteArrCityAdCode() { this->arrCityAdCode_ = nullptr;};
    inline string arrCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityAdCode_, "") };
    inline FlightOrderListQueryResponseBodyModule& setArrCityAdCode(string arrCityAdCode) { DARABONBA_PTR_SET_VALUE(arrCityAdCode_, arrCityAdCode) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline FlightOrderListQueryResponseBodyModule& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightOrderListQueryResponseBodyModule& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline FlightOrderListQueryResponseBodyModule& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline FlightOrderListQueryResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline const Models::FlightOrderListQueryResponseBodyModuleCostCenter & costCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, Models::FlightOrderListQueryResponseBodyModuleCostCenter) };
    inline Models::FlightOrderListQueryResponseBodyModuleCostCenter costCenter() { DARABONBA_PTR_GET(costCenter_, Models::FlightOrderListQueryResponseBodyModuleCostCenter) };
    inline FlightOrderListQueryResponseBodyModule& setCostCenter(const Models::FlightOrderListQueryResponseBodyModuleCostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
    inline FlightOrderListQueryResponseBodyModule& setCostCenter(Models::FlightOrderListQueryResponseBodyModuleCostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


    // depAirport Field Functions 
    bool hasDepAirport() const { return this->depAirport_ != nullptr;};
    void deleteDepAirport() { this->depAirport_ = nullptr;};
    inline string depAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityAdCode Field Functions 
    bool hasDepCityAdCode() const { return this->depCityAdCode_ != nullptr;};
    void deleteDepCityAdCode() { this->depCityAdCode_ = nullptr;};
    inline string depCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(depCityAdCode_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepCityAdCode(string depCityAdCode) { DARABONBA_PTR_SET_VALUE(depCityAdCode_, depCityAdCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline FlightOrderListQueryResponseBodyModule& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderListQueryResponseBodyModule& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderListQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline FlightOrderListQueryResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FlightOrderListQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insureInfoList Field Functions 
    bool hasInsureInfoList() const { return this->insureInfoList_ != nullptr;};
    void deleteInsureInfoList() { this->insureInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList> & insureInfoList() const { DARABONBA_PTR_GET_CONST(insureInfoList_, vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList>) };
    inline vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList> insureInfoList() { DARABONBA_PTR_GET(insureInfoList_, vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList>) };
    inline FlightOrderListQueryResponseBodyModule& setInsureInfoList(const vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList> & insureInfoList) { DARABONBA_PTR_SET_VALUE(insureInfoList_, insureInfoList) };
    inline FlightOrderListQueryResponseBodyModule& setInsureInfoList(vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList> && insureInfoList) { DARABONBA_PTR_SET_RVALUE(insureInfoList_, insureInfoList) };


    // invoice Field Functions 
    bool hasInvoice() const { return this->invoice_ != nullptr;};
    void deleteInvoice() { this->invoice_ = nullptr;};
    inline const Models::FlightOrderListQueryResponseBodyModuleInvoice & invoice() const { DARABONBA_PTR_GET_CONST(invoice_, Models::FlightOrderListQueryResponseBodyModuleInvoice) };
    inline Models::FlightOrderListQueryResponseBodyModuleInvoice invoice() { DARABONBA_PTR_GET(invoice_, Models::FlightOrderListQueryResponseBodyModuleInvoice) };
    inline FlightOrderListQueryResponseBodyModule& setInvoice(const Models::FlightOrderListQueryResponseBodyModuleInvoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
    inline FlightOrderListQueryResponseBodyModule& setInvoice(Models::FlightOrderListQueryResponseBodyModuleInvoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


    // passengerCount Field Functions 
    bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
    void deletePassengerCount() { this->passengerCount_ = nullptr;};
    inline int32_t passengerCount() const { DARABONBA_PTR_GET_DEFAULT(passengerCount_, 0) };
    inline FlightOrderListQueryResponseBodyModule& setPassengerCount(int32_t passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightOrderListQueryResponseBodyModule& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList>) };
    inline FlightOrderListQueryResponseBodyModule& setPriceInfoList(const vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline FlightOrderListQueryResponseBodyModule& setPriceInfoList(vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline FlightOrderListQueryResponseBodyModule& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline FlightOrderListQueryResponseBodyModule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline FlightOrderListQueryResponseBodyModule& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // retDate Field Functions 
    bool hasRetDate() const { return this->retDate_ != nullptr;};
    void deleteRetDate() { this->retDate_ = nullptr;};
    inline string retDate() const { DARABONBA_PTR_GET_DEFAULT(retDate_, "") };
    inline FlightOrderListQueryResponseBodyModule& setRetDate(string retDate) { DARABONBA_PTR_SET_VALUE(retDate_, retDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderListQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartProjectId Field Functions 
    bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
    void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
    inline string thirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOrderListQueryResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    // userAffiliateList Field Functions 
    bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
    void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList> userAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline FlightOrderListQueryResponseBodyModule& setUserAffiliateList(const vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
    inline FlightOrderListQueryResponseBodyModule& setUserAffiliateList(vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline FlightOrderListQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> arrAirport_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityAdCode_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<Models::FlightOrderListQueryResponseBodyModuleCostCenter> costCenter_ = nullptr;
    std::shared_ptr<string> depAirport_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityAdCode_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryResponseBodyModuleInsureInfoList>> insureInfoList_ = nullptr;
    std::shared_ptr<Models::FlightOrderListQueryResponseBodyModuleInvoice> invoice_ = nullptr;
    std::shared_ptr<int32_t> passengerCount_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> retDate_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdPartProjectId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
