// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarOrderListQueryResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/CarOrderListQueryResponseBodyModuleUserAffiliateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderListQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(business_category, businessCategory_);
      DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_TO_JSON(car_info, carInfo_);
      DARABONBA_PTR_TO_JSON(car_level, carLevel_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(dept_id, deptId_);
      DARABONBA_PTR_TO_JSON(dept_name, deptName_);
      DARABONBA_PTR_TO_JSON(driver_confirm_time, driverConfirmTime_);
      DARABONBA_PTR_TO_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_TO_JSON(from_address, fromAddress_);
      DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(is_special, isSpecial_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(publish_time, publishTime_);
      DARABONBA_PTR_TO_JSON(real_from_address, realFromAddress_);
      DARABONBA_PTR_TO_JSON(real_from_city_ad_code, realFromCityAdCode_);
      DARABONBA_PTR_TO_JSON(real_from_city_name, realFromCityName_);
      DARABONBA_PTR_TO_JSON(real_to_address, realToAddress_);
      DARABONBA_PTR_TO_JSON(real_to_city_ad_code, realToCityAdCode_);
      DARABONBA_PTR_TO_JSON(real_to_city_name, realToCityName_);
      DARABONBA_PTR_TO_JSON(service_type, serviceType_);
      DARABONBA_PTR_TO_JSON(special_types, specialTypes_);
      DARABONBA_PTR_TO_JSON(taken_time, takenTime_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(to_address, toAddress_);
      DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_TO_JSON(travel_distance, travelDistance_);
      DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_TO_JSON(user_confirm, userConfirm_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderListQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(business_category, businessCategory_);
      DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
      DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
      DARABONBA_PTR_FROM_JSON(car_level, carLevel_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(dept_id, deptId_);
      DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
      DARABONBA_PTR_FROM_JSON(driver_confirm_time, driverConfirmTime_);
      DARABONBA_PTR_FROM_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_FROM_JSON(from_address, fromAddress_);
      DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(is_special, isSpecial_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(publish_time, publishTime_);
      DARABONBA_PTR_FROM_JSON(real_from_address, realFromAddress_);
      DARABONBA_PTR_FROM_JSON(real_from_city_ad_code, realFromCityAdCode_);
      DARABONBA_PTR_FROM_JSON(real_from_city_name, realFromCityName_);
      DARABONBA_PTR_FROM_JSON(real_to_address, realToAddress_);
      DARABONBA_PTR_FROM_JSON(real_to_city_ad_code, realToCityAdCode_);
      DARABONBA_PTR_FROM_JSON(real_to_city_name, realToCityName_);
      DARABONBA_PTR_FROM_JSON(service_type, serviceType_);
      DARABONBA_PTR_FROM_JSON(special_types, specialTypes_);
      DARABONBA_PTR_FROM_JSON(taken_time, takenTime_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(to_address, toAddress_);
      DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
      DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_FROM_JSON(travel_distance, travelDistance_);
      DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_FROM_JSON(user_confirm, userConfirm_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    CarOrderListQueryResponseBodyModule() = default ;
    CarOrderListQueryResponseBodyModule(const CarOrderListQueryResponseBodyModule &) = default ;
    CarOrderListQueryResponseBodyModule(CarOrderListQueryResponseBodyModule &&) = default ;
    CarOrderListQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderListQueryResponseBodyModule() = default ;
    CarOrderListQueryResponseBodyModule& operator=(const CarOrderListQueryResponseBodyModule &) = default ;
    CarOrderListQueryResponseBodyModule& operator=(CarOrderListQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->applyShowId_ != nullptr && this->btripTitle_ != nullptr && this->businessCategory_ != nullptr && this->cancelTime_ != nullptr && this->carInfo_ != nullptr
        && this->carLevel_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr
        && this->costCenterNumber_ != nullptr && this->deptId_ != nullptr && this->deptName_ != nullptr && this->driverConfirmTime_ != nullptr && this->estimatePrice_ != nullptr
        && this->fromAddress_ != nullptr && this->fromCityAdCode_ != nullptr && this->fromCityName_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->invoiceId_ != nullptr && this->invoiceTitle_ != nullptr && this->isSpecial_ != nullptr && this->memo_ != nullptr
        && this->orderId_ != nullptr && this->orderStatus_ != nullptr && this->passengerName_ != nullptr && this->payTime_ != nullptr && this->priceInfoList_ != nullptr
        && this->projectCode_ != nullptr && this->projectId_ != nullptr && this->projectTitle_ != nullptr && this->provider_ != nullptr && this->publishTime_ != nullptr
        && this->realFromAddress_ != nullptr && this->realFromCityAdCode_ != nullptr && this->realFromCityName_ != nullptr && this->realToAddress_ != nullptr && this->realToCityAdCode_ != nullptr
        && this->realToCityName_ != nullptr && this->serviceType_ != nullptr && this->specialTypes_ != nullptr && this->takenTime_ != nullptr && this->thirdpartApplyId_ != nullptr
        && this->thirdpartBusinessId_ != nullptr && this->thirdpartItineraryId_ != nullptr && this->toAddress_ != nullptr && this->toCityAdCode_ != nullptr && this->toCityName_ != nullptr
        && this->travelDistance_ != nullptr && this->userAffiliateList_ != nullptr && this->userConfirm_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // applyShowId Field Functions 
    bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
    void deleteApplyShowId() { this->applyShowId_ = nullptr;};
    inline string applyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
    inline CarOrderListQueryResponseBodyModule& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline CarOrderListQueryResponseBodyModule& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // businessCategory Field Functions 
    bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
    void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
    inline string businessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
    inline CarOrderListQueryResponseBodyModule& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


    // cancelTime Field Functions 
    bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
    void deleteCancelTime() { this->cancelTime_ = nullptr;};
    inline string cancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
    inline CarOrderListQueryResponseBodyModule& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


    // carInfo Field Functions 
    bool hasCarInfo() const { return this->carInfo_ != nullptr;};
    void deleteCarInfo() { this->carInfo_ = nullptr;};
    inline string carInfo() const { DARABONBA_PTR_GET_DEFAULT(carInfo_, "") };
    inline CarOrderListQueryResponseBodyModule& setCarInfo(string carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };


    // carLevel Field Functions 
    bool hasCarLevel() const { return this->carLevel_ != nullptr;};
    void deleteCarLevel() { this->carLevel_ = nullptr;};
    inline int32_t carLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, 0) };
    inline CarOrderListQueryResponseBodyModule& setCarLevel(int32_t carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CarOrderListQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CarOrderListQueryResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline CarOrderListQueryResponseBodyModule& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline CarOrderListQueryResponseBodyModule& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline int64_t deptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline CarOrderListQueryResponseBodyModule& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // driverConfirmTime Field Functions 
    bool hasDriverConfirmTime() const { return this->driverConfirmTime_ != nullptr;};
    void deleteDriverConfirmTime() { this->driverConfirmTime_ = nullptr;};
    inline string driverConfirmTime() const { DARABONBA_PTR_GET_DEFAULT(driverConfirmTime_, "") };
    inline CarOrderListQueryResponseBodyModule& setDriverConfirmTime(string driverConfirmTime) { DARABONBA_PTR_SET_VALUE(driverConfirmTime_, driverConfirmTime) };


    // estimatePrice Field Functions 
    bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
    void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
    inline double estimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0.0) };
    inline CarOrderListQueryResponseBodyModule& setEstimatePrice(double estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


    // fromAddress Field Functions 
    bool hasFromAddress() const { return this->fromAddress_ != nullptr;};
    void deleteFromAddress() { this->fromAddress_ = nullptr;};
    inline string fromAddress() const { DARABONBA_PTR_GET_DEFAULT(fromAddress_, "") };
    inline CarOrderListQueryResponseBodyModule& setFromAddress(string fromAddress) { DARABONBA_PTR_SET_VALUE(fromAddress_, fromAddress) };


    // fromCityAdCode Field Functions 
    bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
    void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
    inline string fromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
    inline CarOrderListQueryResponseBodyModule& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


    // fromCityName Field Functions 
    bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
    void deleteFromCityName() { this->fromCityName_ = nullptr;};
    inline string fromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
    inline CarOrderListQueryResponseBodyModule& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CarOrderListQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CarOrderListQueryResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline CarOrderListQueryResponseBodyModule& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // isSpecial Field Functions 
    bool hasIsSpecial() const { return this->isSpecial_ != nullptr;};
    void deleteIsSpecial() { this->isSpecial_ = nullptr;};
    inline bool isSpecial() const { DARABONBA_PTR_GET_DEFAULT(isSpecial_, false) };
    inline CarOrderListQueryResponseBodyModule& setIsSpecial(bool isSpecial) { DARABONBA_PTR_SET_VALUE(isSpecial_, isSpecial) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CarOrderListQueryResponseBodyModule& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CarOrderListQueryResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline CarOrderListQueryResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline CarOrderListQueryResponseBodyModule& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline CarOrderListQueryResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList>) };
    inline CarOrderListQueryResponseBodyModule& setPriceInfoList(const vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline CarOrderListQueryResponseBodyModule& setPriceInfoList(vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CarOrderListQueryResponseBodyModule& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CarOrderListQueryResponseBodyModule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline CarOrderListQueryResponseBodyModule& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline int32_t provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, 0) };
    inline CarOrderListQueryResponseBodyModule& setProvider(int32_t provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline CarOrderListQueryResponseBodyModule& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // realFromAddress Field Functions 
    bool hasRealFromAddress() const { return this->realFromAddress_ != nullptr;};
    void deleteRealFromAddress() { this->realFromAddress_ = nullptr;};
    inline string realFromAddress() const { DARABONBA_PTR_GET_DEFAULT(realFromAddress_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealFromAddress(string realFromAddress) { DARABONBA_PTR_SET_VALUE(realFromAddress_, realFromAddress) };


    // realFromCityAdCode Field Functions 
    bool hasRealFromCityAdCode() const { return this->realFromCityAdCode_ != nullptr;};
    void deleteRealFromCityAdCode() { this->realFromCityAdCode_ = nullptr;};
    inline string realFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realFromCityAdCode_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealFromCityAdCode(string realFromCityAdCode) { DARABONBA_PTR_SET_VALUE(realFromCityAdCode_, realFromCityAdCode) };


    // realFromCityName Field Functions 
    bool hasRealFromCityName() const { return this->realFromCityName_ != nullptr;};
    void deleteRealFromCityName() { this->realFromCityName_ = nullptr;};
    inline string realFromCityName() const { DARABONBA_PTR_GET_DEFAULT(realFromCityName_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealFromCityName(string realFromCityName) { DARABONBA_PTR_SET_VALUE(realFromCityName_, realFromCityName) };


    // realToAddress Field Functions 
    bool hasRealToAddress() const { return this->realToAddress_ != nullptr;};
    void deleteRealToAddress() { this->realToAddress_ = nullptr;};
    inline string realToAddress() const { DARABONBA_PTR_GET_DEFAULT(realToAddress_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealToAddress(string realToAddress) { DARABONBA_PTR_SET_VALUE(realToAddress_, realToAddress) };


    // realToCityAdCode Field Functions 
    bool hasRealToCityAdCode() const { return this->realToCityAdCode_ != nullptr;};
    void deleteRealToCityAdCode() { this->realToCityAdCode_ = nullptr;};
    inline string realToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realToCityAdCode_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealToCityAdCode(string realToCityAdCode) { DARABONBA_PTR_SET_VALUE(realToCityAdCode_, realToCityAdCode) };


    // realToCityName Field Functions 
    bool hasRealToCityName() const { return this->realToCityName_ != nullptr;};
    void deleteRealToCityName() { this->realToCityName_ = nullptr;};
    inline string realToCityName() const { DARABONBA_PTR_GET_DEFAULT(realToCityName_, "") };
    inline CarOrderListQueryResponseBodyModule& setRealToCityName(string realToCityName) { DARABONBA_PTR_SET_VALUE(realToCityName_, realToCityName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline int32_t serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
    inline CarOrderListQueryResponseBodyModule& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // specialTypes Field Functions 
    bool hasSpecialTypes() const { return this->specialTypes_ != nullptr;};
    void deleteSpecialTypes() { this->specialTypes_ = nullptr;};
    inline const vector<string> & specialTypes() const { DARABONBA_PTR_GET_CONST(specialTypes_, vector<string>) };
    inline vector<string> specialTypes() { DARABONBA_PTR_GET(specialTypes_, vector<string>) };
    inline CarOrderListQueryResponseBodyModule& setSpecialTypes(const vector<string> & specialTypes) { DARABONBA_PTR_SET_VALUE(specialTypes_, specialTypes) };
    inline CarOrderListQueryResponseBodyModule& setSpecialTypes(vector<string> && specialTypes) { DARABONBA_PTR_SET_RVALUE(specialTypes_, specialTypes) };


    // takenTime Field Functions 
    bool hasTakenTime() const { return this->takenTime_ != nullptr;};
    void deleteTakenTime() { this->takenTime_ = nullptr;};
    inline string takenTime() const { DARABONBA_PTR_GET_DEFAULT(takenTime_, "") };
    inline CarOrderListQueryResponseBodyModule& setTakenTime(string takenTime) { DARABONBA_PTR_SET_VALUE(takenTime_, takenTime) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline CarOrderListQueryResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline CarOrderListQueryResponseBodyModule& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline string thirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
    inline CarOrderListQueryResponseBodyModule& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string toAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline CarOrderListQueryResponseBodyModule& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


    // toCityAdCode Field Functions 
    bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
    void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
    inline string toCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
    inline CarOrderListQueryResponseBodyModule& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


    // toCityName Field Functions 
    bool hasToCityName() const { return this->toCityName_ != nullptr;};
    void deleteToCityName() { this->toCityName_ = nullptr;};
    inline string toCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
    inline CarOrderListQueryResponseBodyModule& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


    // travelDistance Field Functions 
    bool hasTravelDistance() const { return this->travelDistance_ != nullptr;};
    void deleteTravelDistance() { this->travelDistance_ = nullptr;};
    inline double travelDistance() const { DARABONBA_PTR_GET_DEFAULT(travelDistance_, 0.0) };
    inline CarOrderListQueryResponseBodyModule& setTravelDistance(double travelDistance) { DARABONBA_PTR_SET_VALUE(travelDistance_, travelDistance) };


    // userAffiliateList Field Functions 
    bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
    void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
    inline const vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList> userAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList>) };
    inline CarOrderListQueryResponseBodyModule& setUserAffiliateList(const vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
    inline CarOrderListQueryResponseBodyModule& setUserAffiliateList(vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


    // userConfirm Field Functions 
    bool hasUserConfirm() const { return this->userConfirm_ != nullptr;};
    void deleteUserConfirm() { this->userConfirm_ = nullptr;};
    inline int32_t userConfirm() const { DARABONBA_PTR_GET_DEFAULT(userConfirm_, 0) };
    inline CarOrderListQueryResponseBodyModule& setUserConfirm(int32_t userConfirm) { DARABONBA_PTR_SET_VALUE(userConfirm_, userConfirm) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarOrderListQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CarOrderListQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> applyShowId_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> businessCategory_ = nullptr;
    std::shared_ptr<string> cancelTime_ = nullptr;
    std::shared_ptr<string> carInfo_ = nullptr;
    std::shared_ptr<int32_t> carLevel_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<int64_t> deptId_ = nullptr;
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> driverConfirmTime_ = nullptr;
    std::shared_ptr<double> estimatePrice_ = nullptr;
    std::shared_ptr<string> fromAddress_ = nullptr;
    std::shared_ptr<string> fromCityAdCode_ = nullptr;
    std::shared_ptr<string> fromCityName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<bool> isSpecial_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<vector<Models::CarOrderListQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<int32_t> provider_ = nullptr;
    std::shared_ptr<string> publishTime_ = nullptr;
    std::shared_ptr<string> realFromAddress_ = nullptr;
    std::shared_ptr<string> realFromCityAdCode_ = nullptr;
    std::shared_ptr<string> realFromCityName_ = nullptr;
    std::shared_ptr<string> realToAddress_ = nullptr;
    std::shared_ptr<string> realToCityAdCode_ = nullptr;
    std::shared_ptr<string> realToCityName_ = nullptr;
    std::shared_ptr<int32_t> serviceType_ = nullptr;
    std::shared_ptr<vector<string>> specialTypes_ = nullptr;
    std::shared_ptr<string> takenTime_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<string> toAddress_ = nullptr;
    std::shared_ptr<string> toCityAdCode_ = nullptr;
    std::shared_ptr<string> toCityName_ = nullptr;
    std::shared_ptr<double> travelDistance_ = nullptr;
    std::shared_ptr<vector<Models::CarOrderListQueryResponseBodyModuleUserAffiliateList>> userAffiliateList_ = nullptr;
    std::shared_ptr<int32_t> userConfirm_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
