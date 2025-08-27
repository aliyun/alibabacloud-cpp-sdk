// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainOrderListQueryResponseBodyModuleCostCenter.hpp>
#include <alibabacloud/models/TrainOrderListQueryResponseBodyModuleInvoice.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderListQueryResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/TrainOrderListQueryResponseBodyModuleUserAffiliateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_TO_JSON(dep_station, depStation_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invoice, invoice_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(rider_name, riderName_);
      DARABONBA_PTR_TO_JSON(run_time, runTime_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(thirdPart_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(ticket_count, ticketCount_);
      DARABONBA_PTR_TO_JSON(ticket_no12306, ticketNo12306_);
      DARABONBA_PTR_TO_JSON(train_number, trainNumber_);
      DARABONBA_PTR_TO_JSON(train_type, trainType_);
      DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invoice, invoice_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(rider_name, riderName_);
      DARABONBA_PTR_FROM_JSON(run_time, runTime_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(thirdPart_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(ticket_count, ticketCount_);
      DARABONBA_PTR_FROM_JSON(ticket_no12306, ticketNo12306_);
      DARABONBA_PTR_FROM_JSON(train_number, trainNumber_);
      DARABONBA_PTR_FROM_JSON(train_type, trainType_);
      DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    TrainOrderListQueryResponseBodyModule() = default ;
    TrainOrderListQueryResponseBodyModule(const TrainOrderListQueryResponseBodyModule &) = default ;
    TrainOrderListQueryResponseBodyModule(TrainOrderListQueryResponseBodyModule &&) = default ;
    TrainOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderListQueryResponseBodyModule() = default ;
    TrainOrderListQueryResponseBodyModule& operator=(const TrainOrderListQueryResponseBodyModule &) = default ;
    TrainOrderListQueryResponseBodyModule& operator=(TrainOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityAdCode_ != nullptr && this->arrStation_ != nullptr && this->arrTime_ != nullptr && this->btripTitle_ != nullptr
        && this->contactName_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->costCenter_ != nullptr && this->depCity_ != nullptr
        && this->depCityAdCode_ != nullptr && this->depStation_ != nullptr && this->depTime_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->invoice_ != nullptr && this->priceInfoList_ != nullptr
        && this->projectCode_ != nullptr && this->projectId_ != nullptr && this->projectTitle_ != nullptr && this->riderName_ != nullptr && this->runTime_ != nullptr
        && this->seatType_ != nullptr && this->status_ != nullptr && this->thirdPartBusinessId_ != nullptr && this->thirdPartProjectId_ != nullptr && this->thirdpartApplyId_ != nullptr
        && this->thirdpartItineraryId_ != nullptr && this->ticketCount_ != nullptr && this->ticketNo12306_ != nullptr && this->trainNumber_ != nullptr && this->trainType_ != nullptr
        && this->userAffiliateList_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline TrainOrderListQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TrainOrderListQueryResponseBodyModule& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityAdCode Field Functions 
    bool hasArrCityAdCode() const { return this->arrCityAdCode_ != nullptr;};
    void deleteArrCityAdCode() { this->arrCityAdCode_ = nullptr;};
    inline string arrCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityAdCode_, "") };
    inline TrainOrderListQueryResponseBodyModule& setArrCityAdCode(string arrCityAdCode) { DARABONBA_PTR_SET_VALUE(arrCityAdCode_, arrCityAdCode) };


    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainOrderListQueryResponseBodyModule& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainOrderListQueryResponseBodyModule& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline TrainOrderListQueryResponseBodyModule& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline TrainOrderListQueryResponseBodyModule& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline TrainOrderListQueryResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline const Models::TrainOrderListQueryResponseBodyModuleCostCenter & costCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, Models::TrainOrderListQueryResponseBodyModuleCostCenter) };
    inline Models::TrainOrderListQueryResponseBodyModuleCostCenter costCenter() { DARABONBA_PTR_GET(costCenter_, Models::TrainOrderListQueryResponseBodyModuleCostCenter) };
    inline TrainOrderListQueryResponseBodyModule& setCostCenter(const Models::TrainOrderListQueryResponseBodyModuleCostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
    inline TrainOrderListQueryResponseBodyModule& setCostCenter(Models::TrainOrderListQueryResponseBodyModuleCostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityAdCode Field Functions 
    bool hasDepCityAdCode() const { return this->depCityAdCode_ != nullptr;};
    void deleteDepCityAdCode() { this->depCityAdCode_ = nullptr;};
    inline string depCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(depCityAdCode_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepCityAdCode(string depCityAdCode) { DARABONBA_PTR_SET_VALUE(depCityAdCode_, depCityAdCode) };


    // depStation Field Functions 
    bool hasDepStation() const { return this->depStation_ != nullptr;};
    void deleteDepStation() { this->depStation_ = nullptr;};
    inline string depStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline TrainOrderListQueryResponseBodyModule& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderListQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline TrainOrderListQueryResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline TrainOrderListQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoice Field Functions 
    bool hasInvoice() const { return this->invoice_ != nullptr;};
    void deleteInvoice() { this->invoice_ = nullptr;};
    inline const Models::TrainOrderListQueryResponseBodyModuleInvoice & invoice() const { DARABONBA_PTR_GET_CONST(invoice_, Models::TrainOrderListQueryResponseBodyModuleInvoice) };
    inline Models::TrainOrderListQueryResponseBodyModuleInvoice invoice() { DARABONBA_PTR_GET(invoice_, Models::TrainOrderListQueryResponseBodyModuleInvoice) };
    inline TrainOrderListQueryResponseBodyModule& setInvoice(const Models::TrainOrderListQueryResponseBodyModuleInvoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
    inline TrainOrderListQueryResponseBodyModule& setInvoice(Models::TrainOrderListQueryResponseBodyModuleInvoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList>) };
    inline TrainOrderListQueryResponseBodyModule& setPriceInfoList(const vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline TrainOrderListQueryResponseBodyModule& setPriceInfoList(vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline TrainOrderListQueryResponseBodyModule& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TrainOrderListQueryResponseBodyModule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline TrainOrderListQueryResponseBodyModule& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // riderName Field Functions 
    bool hasRiderName() const { return this->riderName_ != nullptr;};
    void deleteRiderName() { this->riderName_ = nullptr;};
    inline string riderName() const { DARABONBA_PTR_GET_DEFAULT(riderName_, "") };
    inline TrainOrderListQueryResponseBodyModule& setRiderName(string riderName) { DARABONBA_PTR_SET_VALUE(riderName_, riderName) };


    // runTime Field Functions 
    bool hasRunTime() const { return this->runTime_ != nullptr;};
    void deleteRunTime() { this->runTime_ = nullptr;};
    inline string runTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, "") };
    inline TrainOrderListQueryResponseBodyModule& setRunTime(string runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainOrderListQueryResponseBodyModule& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TrainOrderListQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartBusinessId Field Functions 
    bool hasThirdPartBusinessId() const { return this->thirdPartBusinessId_ != nullptr;};
    void deleteThirdPartBusinessId() { this->thirdPartBusinessId_ = nullptr;};
    inline string thirdPartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartBusinessId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setThirdPartBusinessId(string thirdPartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdPartBusinessId_, thirdPartBusinessId) };


    // thirdPartProjectId Field Functions 
    bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
    void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
    inline string thirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // ticketCount Field Functions 
    bool hasTicketCount() const { return this->ticketCount_ != nullptr;};
    void deleteTicketCount() { this->ticketCount_ = nullptr;};
    inline int32_t ticketCount() const { DARABONBA_PTR_GET_DEFAULT(ticketCount_, 0) };
    inline TrainOrderListQueryResponseBodyModule& setTicketCount(int32_t ticketCount) { DARABONBA_PTR_SET_VALUE(ticketCount_, ticketCount) };


    // ticketNo12306 Field Functions 
    bool hasTicketNo12306() const { return this->ticketNo12306_ != nullptr;};
    void deleteTicketNo12306() { this->ticketNo12306_ = nullptr;};
    inline string ticketNo12306() const { DARABONBA_PTR_GET_DEFAULT(ticketNo12306_, "") };
    inline TrainOrderListQueryResponseBodyModule& setTicketNo12306(string ticketNo12306) { DARABONBA_PTR_SET_VALUE(ticketNo12306_, ticketNo12306) };


    // trainNumber Field Functions 
    bool hasTrainNumber() const { return this->trainNumber_ != nullptr;};
    void deleteTrainNumber() { this->trainNumber_ = nullptr;};
    inline string trainNumber() const { DARABONBA_PTR_GET_DEFAULT(trainNumber_, "") };
    inline TrainOrderListQueryResponseBodyModule& setTrainNumber(string trainNumber) { DARABONBA_PTR_SET_VALUE(trainNumber_, trainNumber) };


    // trainType Field Functions 
    bool hasTrainType() const { return this->trainType_ != nullptr;};
    void deleteTrainType() { this->trainType_ = nullptr;};
    inline string trainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
    inline TrainOrderListQueryResponseBodyModule& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


    // userAffiliateList Field Functions 
    bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
    void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
    inline const vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList> userAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline TrainOrderListQueryResponseBodyModule& setUserAffiliateList(const vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
    inline TrainOrderListQueryResponseBodyModule& setUserAffiliateList(vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderListQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline TrainOrderListQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityAdCode_ = nullptr;
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<Models::TrainOrderListQueryResponseBodyModuleCostCenter> costCenter_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityAdCode_ = nullptr;
    std::shared_ptr<string> depStation_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::TrainOrderListQueryResponseBodyModuleInvoice> invoice_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> riderName_ = nullptr;
    std::shared_ptr<string> runTime_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdPartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdPartProjectId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<int32_t> ticketCount_ = nullptr;
    std::shared_ptr<string> ticketNo12306_ = nullptr;
    std::shared_ptr<string> trainNumber_ = nullptr;
    std::shared_ptr<string> trainType_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
