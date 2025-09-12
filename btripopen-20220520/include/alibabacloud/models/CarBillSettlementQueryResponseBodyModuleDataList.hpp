// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODYMODULEDATALIST_HPP_
#define ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODYMODULEDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarBillSettlementQueryResponseBodyModuleDataList& obj) { 
      DARABONBA_PTR_TO_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(apply_arr_city_code, applyArrCityCode_);
      DARABONBA_PTR_TO_JSON(apply_arr_city_name, applyArrCityName_);
      DARABONBA_PTR_TO_JSON(apply_dep_city_code, applyDepCityCode_);
      DARABONBA_PTR_TO_JSON(apply_dep_city_name, applyDepCityName_);
      DARABONBA_PTR_TO_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(approver_email, approverEmail_);
      DARABONBA_PTR_TO_JSON(approver_id, approverId_);
      DARABONBA_PTR_TO_JSON(approver_name, approverName_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(base_location, baseLocation_);
      DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_TO_JSON(billing_entity, billingEntity_);
      DARABONBA_PTR_TO_JSON(book_model, bookModel_);
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
      DARABONBA_PTR_TO_JSON(business_category, businessCategory_);
      DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_TO_JSON(car_level, carLevel_);
      DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_TO_JSON(coupon, coupon_);
      DARABONBA_PTR_TO_JSON(coupon_price, couponPrice_);
      DARABONBA_PTR_TO_JSON(custom_content, customContent_);
      DARABONBA_PTR_TO_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(dept_city, deptCity_);
      DARABONBA_PTR_TO_JSON(dept_date, deptDate_);
      DARABONBA_PTR_TO_JSON(dept_location, deptLocation_);
      DARABONBA_PTR_TO_JSON(dept_time, deptTime_);
      DARABONBA_PTR_TO_JSON(driver_add_detail, driverAddDetail_);
      DARABONBA_PTR_TO_JSON(driver_add_fee, driverAddFee_);
      DARABONBA_PTR_TO_JSON(estimate_drive_distance, estimateDriveDistance_);
      DARABONBA_PTR_TO_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(level_name, levelName_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(person_settle_fee, personSettleFee_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
      DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(protocol_discount_fee, protocolDiscountFee_);
      DARABONBA_PTR_TO_JSON(provider_name, providerName_);
      DARABONBA_PTR_TO_JSON(real_drive_distance, realDriveDistance_);
      DARABONBA_PTR_TO_JSON(real_from_addr, realFromAddr_);
      DARABONBA_PTR_TO_JSON(real_to_addr, realToAddr_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(scene_id, sceneId_);
      DARABONBA_PTR_TO_JSON(scene_name, sceneName_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_TO_JSON(sio, sio_);
      DARABONBA_PTR_TO_JSON(special_order, specialOrder_);
      DARABONBA_PTR_TO_JSON(special_reason, specialReason_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(supplement_apply_id, supplementApplyId_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_TO_JSON(time_type, timeType_);
      DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_TO_JSON(traveler_email, travelerEmail_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_TO_JSON(user_confirm_desc, userConfirmDesc_);
      DARABONBA_PTR_TO_JSON(vehicle_scene_id, vehicleSceneId_);
      DARABONBA_PTR_TO_JSON(vehicle_scene_name, vehicleSceneName_);
      DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, CarBillSettlementQueryResponseBodyModuleDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(apply_arr_city_code, applyArrCityCode_);
      DARABONBA_PTR_FROM_JSON(apply_arr_city_name, applyArrCityName_);
      DARABONBA_PTR_FROM_JSON(apply_dep_city_code, applyDepCityCode_);
      DARABONBA_PTR_FROM_JSON(apply_dep_city_name, applyDepCityName_);
      DARABONBA_PTR_FROM_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(approver_email, approverEmail_);
      DARABONBA_PTR_FROM_JSON(approver_id, approverId_);
      DARABONBA_PTR_FROM_JSON(approver_name, approverName_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(base_location, baseLocation_);
      DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_FROM_JSON(billing_entity, billingEntity_);
      DARABONBA_PTR_FROM_JSON(book_model, bookModel_);
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
      DARABONBA_PTR_FROM_JSON(business_category, businessCategory_);
      DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_FROM_JSON(car_level, carLevel_);
      DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_FROM_JSON(coupon, coupon_);
      DARABONBA_PTR_FROM_JSON(coupon_price, couponPrice_);
      DARABONBA_PTR_FROM_JSON(custom_content, customContent_);
      DARABONBA_PTR_FROM_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(dept_city, deptCity_);
      DARABONBA_PTR_FROM_JSON(dept_date, deptDate_);
      DARABONBA_PTR_FROM_JSON(dept_location, deptLocation_);
      DARABONBA_PTR_FROM_JSON(dept_time, deptTime_);
      DARABONBA_PTR_FROM_JSON(driver_add_detail, driverAddDetail_);
      DARABONBA_PTR_FROM_JSON(driver_add_fee, driverAddFee_);
      DARABONBA_PTR_FROM_JSON(estimate_drive_distance, estimateDriveDistance_);
      DARABONBA_PTR_FROM_JSON(estimate_price, estimatePrice_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(level_name, levelName_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(person_settle_fee, personSettleFee_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
      DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(protocol_discount_fee, protocolDiscountFee_);
      DARABONBA_PTR_FROM_JSON(provider_name, providerName_);
      DARABONBA_PTR_FROM_JSON(real_drive_distance, realDriveDistance_);
      DARABONBA_PTR_FROM_JSON(real_from_addr, realFromAddr_);
      DARABONBA_PTR_FROM_JSON(real_to_addr, realToAddr_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(scene_id, sceneId_);
      DARABONBA_PTR_FROM_JSON(scene_name, sceneName_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_FROM_JSON(sio, sio_);
      DARABONBA_PTR_FROM_JSON(special_order, specialOrder_);
      DARABONBA_PTR_FROM_JSON(special_reason, specialReason_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(supplement_apply_id, supplementApplyId_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_FROM_JSON(time_type, timeType_);
      DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_FROM_JSON(traveler_email, travelerEmail_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_FROM_JSON(user_confirm_desc, userConfirmDesc_);
      DARABONBA_PTR_FROM_JSON(vehicle_scene_id, vehicleSceneId_);
      DARABONBA_PTR_FROM_JSON(vehicle_scene_name, vehicleSceneName_);
      DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    CarBillSettlementQueryResponseBodyModuleDataList() = default ;
    CarBillSettlementQueryResponseBodyModuleDataList(const CarBillSettlementQueryResponseBodyModuleDataList &) = default ;
    CarBillSettlementQueryResponseBodyModuleDataList(CarBillSettlementQueryResponseBodyModuleDataList &&) = default ;
    CarBillSettlementQueryResponseBodyModuleDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarBillSettlementQueryResponseBodyModuleDataList() = default ;
    CarBillSettlementQueryResponseBodyModuleDataList& operator=(const CarBillSettlementQueryResponseBodyModuleDataList &) = default ;
    CarBillSettlementQueryResponseBodyModuleDataList& operator=(CarBillSettlementQueryResponseBodyModuleDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustTime_ != nullptr
        && this->alipayTradeNo_ != nullptr && this->applyArrCityCode_ != nullptr && this->applyArrCityName_ != nullptr && this->applyDepCityCode_ != nullptr && this->applyDepCityName_ != nullptr
        && this->applyExtendField_ != nullptr && this->applyId_ != nullptr && this->approverEmail_ != nullptr && this->approverId_ != nullptr && this->approverName_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->arrDate_ != nullptr && this->arrLocation_ != nullptr && this->arrTime_ != nullptr
        && this->baseLocation_ != nullptr && this->billRecordTime_ != nullptr && this->billingEntity_ != nullptr && this->bookModel_ != nullptr && this->bookTime_ != nullptr
        && this->bookerId_ != nullptr && this->bookerJobNo_ != nullptr && this->bookerName_ != nullptr && this->businessCategory_ != nullptr && this->capitalDirection_ != nullptr
        && this->carLevel_ != nullptr && this->cascadeDepartment_ != nullptr && this->categoryDesc_ != nullptr && this->costCenter_ != nullptr && this->costCenterNumber_ != nullptr
        && this->costDepartment_ != nullptr && this->coupon_ != nullptr && this->couponPrice_ != nullptr && this->customContent_ != nullptr && this->deductibleTax_ != nullptr
        && this->depCityCode_ != nullptr && this->department_ != nullptr && this->departmentId_ != nullptr && this->deptCity_ != nullptr && this->deptDate_ != nullptr
        && this->deptLocation_ != nullptr && this->deptTime_ != nullptr && this->driverAddDetail_ != nullptr && this->driverAddFee_ != nullptr && this->estimateDriveDistance_ != nullptr
        && this->estimatePrice_ != nullptr && this->feeType_ != nullptr && this->feeTypeDesc_ != nullptr && this->foreignersTag_ != nullptr && this->index_ != nullptr
        && this->invoiceTitle_ != nullptr && this->levelName_ != nullptr && this->location_ != nullptr && this->mappingCompanyCode_ != nullptr && this->memo_ != nullptr
        && this->orderId_ != nullptr && this->orderPrice_ != nullptr && this->overApplyId_ != nullptr && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr
        && this->personSettleFee_ != nullptr && this->position_ != nullptr && this->positionLevel_ != nullptr && this->primaryId_ != nullptr && this->processorOaCode_ != nullptr
        && this->projectCode_ != nullptr && this->projectName_ != nullptr && this->protocolDiscountFee_ != nullptr && this->providerName_ != nullptr && this->realDriveDistance_ != nullptr
        && this->realFromAddr_ != nullptr && this->realToAddr_ != nullptr && this->remark_ != nullptr && this->sceneId_ != nullptr && this->sceneName_ != nullptr
        && this->serviceFee_ != nullptr && this->settleTypeDesc_ != nullptr && this->settlementFee_ != nullptr && this->settlementGrantFee_ != nullptr && this->settlementTime_ != nullptr
        && this->settlementType_ != nullptr && this->sio_ != nullptr && this->specialOrder_ != nullptr && this->specialReason_ != nullptr && this->status_ != nullptr
        && this->statusDesc_ != nullptr && this->subOrderId_ != nullptr && this->supplementApplyId_ != nullptr && this->taxRate_ != nullptr && this->thirdItineraryId_ != nullptr
        && this->timeType_ != nullptr && this->tradeActionDesc_ != nullptr && this->travelerEmail_ != nullptr && this->travelerId_ != nullptr && this->travelerJobNo_ != nullptr
        && this->travelerMemberType_ != nullptr && this->travelerMemberTypeName_ != nullptr && this->travelerName_ != nullptr && this->userConfirmDesc_ != nullptr && this->vehicleSceneId_ != nullptr
        && this->vehicleSceneName_ != nullptr && this->voucherType_ != nullptr && this->voucherTypeDesc_ != nullptr; };
    // adjustTime Field Functions 
    bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
    void deleteAdjustTime() { this->adjustTime_ = nullptr;};
    inline string adjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // applyArrCityCode Field Functions 
    bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
    void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
    inline string applyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


    // applyArrCityName Field Functions 
    bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
    void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
    inline string applyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


    // applyDepCityCode Field Functions 
    bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
    void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
    inline string applyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


    // applyDepCityName Field Functions 
    bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
    void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
    inline string applyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


    // applyExtendField Field Functions 
    bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
    void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
    inline string applyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // approverEmail Field Functions 
    bool hasApproverEmail() const { return this->approverEmail_ != nullptr;};
    void deleteApproverEmail() { this->approverEmail_ = nullptr;};
    inline string approverEmail() const { DARABONBA_PTR_GET_DEFAULT(approverEmail_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApproverEmail(string approverEmail) { DARABONBA_PTR_SET_VALUE(approverEmail_, approverEmail) };


    // approverId Field Functions 
    bool hasApproverId() const { return this->approverId_ != nullptr;};
    void deleteApproverId() { this->approverId_ = nullptr;};
    inline string approverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


    // approverName Field Functions 
    bool hasApproverName() const { return this->approverName_ != nullptr;};
    void deleteApproverName() { this->approverName_ = nullptr;};
    inline string approverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // arrLocation Field Functions 
    bool hasArrLocation() const { return this->arrLocation_ != nullptr;};
    void deleteArrLocation() { this->arrLocation_ = nullptr;};
    inline string arrLocation() const { DARABONBA_PTR_GET_DEFAULT(arrLocation_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setArrLocation(string arrLocation) { DARABONBA_PTR_SET_VALUE(arrLocation_, arrLocation) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baseLocation Field Functions 
    bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
    void deleteBaseLocation() { this->baseLocation_ = nullptr;};
    inline string baseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


    // billRecordTime Field Functions 
    bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
    void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
    inline string billRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


    // billingEntity Field Functions 
    bool hasBillingEntity() const { return this->billingEntity_ != nullptr;};
    void deleteBillingEntity() { this->billingEntity_ = nullptr;};
    inline string billingEntity() const { DARABONBA_PTR_GET_DEFAULT(billingEntity_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBillingEntity(string billingEntity) { DARABONBA_PTR_SET_VALUE(billingEntity_, billingEntity) };


    // bookModel Field Functions 
    bool hasBookModel() const { return this->bookModel_ != nullptr;};
    void deleteBookModel() { this->bookModel_ = nullptr;};
    inline string bookModel() const { DARABONBA_PTR_GET_DEFAULT(bookModel_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBookModel(string bookModel) { DARABONBA_PTR_SET_VALUE(bookModel_, bookModel) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline string bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerJobNo Field Functions 
    bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
    void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
    inline string bookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // businessCategory Field Functions 
    bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
    void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
    inline string businessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // carLevel Field Functions 
    bool hasCarLevel() const { return this->carLevel_ != nullptr;};
    void deleteCarLevel() { this->carLevel_ = nullptr;};
    inline string carLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCarLevel(string carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


    // cascadeDepartment Field Functions 
    bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
    void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
    inline string cascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


    // categoryDesc Field Functions 
    bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
    void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
    inline string categoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // costDepartment Field Functions 
    bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
    void deleteCostDepartment() { this->costDepartment_ = nullptr;};
    inline string costDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline double coupon() const { DARABONBA_PTR_GET_DEFAULT(coupon_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCoupon(double coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };


    // couponPrice Field Functions 
    bool hasCouponPrice() const { return this->couponPrice_ != nullptr;};
    void deleteCouponPrice() { this->couponPrice_ = nullptr;};
    inline double couponPrice() const { DARABONBA_PTR_GET_DEFAULT(couponPrice_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCouponPrice(double couponPrice) { DARABONBA_PTR_SET_VALUE(couponPrice_, couponPrice) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // deductibleTax Field Functions 
    bool hasDeductibleTax() const { return this->deductibleTax_ != nullptr;};
    void deleteDeductibleTax() { this->deductibleTax_ = nullptr;};
    inline double deductibleTax() const { DARABONBA_PTR_GET_DEFAULT(deductibleTax_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDeductibleTax(double deductibleTax) { DARABONBA_PTR_SET_VALUE(deductibleTax_, deductibleTax) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // deptCity Field Functions 
    bool hasDeptCity() const { return this->deptCity_ != nullptr;};
    void deleteDeptCity() { this->deptCity_ = nullptr;};
    inline string deptCity() const { DARABONBA_PTR_GET_DEFAULT(deptCity_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDeptCity(string deptCity) { DARABONBA_PTR_SET_VALUE(deptCity_, deptCity) };


    // deptDate Field Functions 
    bool hasDeptDate() const { return this->deptDate_ != nullptr;};
    void deleteDeptDate() { this->deptDate_ = nullptr;};
    inline string deptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


    // deptLocation Field Functions 
    bool hasDeptLocation() const { return this->deptLocation_ != nullptr;};
    void deleteDeptLocation() { this->deptLocation_ = nullptr;};
    inline string deptLocation() const { DARABONBA_PTR_GET_DEFAULT(deptLocation_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDeptLocation(string deptLocation) { DARABONBA_PTR_SET_VALUE(deptLocation_, deptLocation) };


    // deptTime Field Functions 
    bool hasDeptTime() const { return this->deptTime_ != nullptr;};
    void deleteDeptTime() { this->deptTime_ = nullptr;};
    inline string deptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


    // driverAddDetail Field Functions 
    bool hasDriverAddDetail() const { return this->driverAddDetail_ != nullptr;};
    void deleteDriverAddDetail() { this->driverAddDetail_ = nullptr;};
    inline string driverAddDetail() const { DARABONBA_PTR_GET_DEFAULT(driverAddDetail_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDriverAddDetail(string driverAddDetail) { DARABONBA_PTR_SET_VALUE(driverAddDetail_, driverAddDetail) };


    // driverAddFee Field Functions 
    bool hasDriverAddFee() const { return this->driverAddFee_ != nullptr;};
    void deleteDriverAddFee() { this->driverAddFee_ = nullptr;};
    inline double driverAddFee() const { DARABONBA_PTR_GET_DEFAULT(driverAddFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setDriverAddFee(double driverAddFee) { DARABONBA_PTR_SET_VALUE(driverAddFee_, driverAddFee) };


    // estimateDriveDistance Field Functions 
    bool hasEstimateDriveDistance() const { return this->estimateDriveDistance_ != nullptr;};
    void deleteEstimateDriveDistance() { this->estimateDriveDistance_ = nullptr;};
    inline string estimateDriveDistance() const { DARABONBA_PTR_GET_DEFAULT(estimateDriveDistance_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setEstimateDriveDistance(string estimateDriveDistance) { DARABONBA_PTR_SET_VALUE(estimateDriveDistance_, estimateDriveDistance) };


    // estimatePrice Field Functions 
    bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
    void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
    inline double estimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setEstimatePrice(double estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // feeTypeDesc Field Functions 
    bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
    void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
    inline string feeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


    // foreignersTag Field Functions 
    bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
    void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
    inline string foreignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // levelName Field Functions 
    bool hasLevelName() const { return this->levelName_ != nullptr;};
    void deleteLevelName() { this->levelName_ = nullptr;};
    inline string levelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // mappingCompanyCode Field Functions 
    bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
    void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
    inline string mappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline double orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setOrderPrice(double orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // overApplyId Field Functions 
    bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
    void deleteOverApplyId() { this->overApplyId_ = nullptr;};
    inline string overApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // personSettleFee Field Functions 
    bool hasPersonSettleFee() const { return this->personSettleFee_ != nullptr;};
    void deletePersonSettleFee() { this->personSettleFee_ = nullptr;};
    inline double personSettleFee() const { DARABONBA_PTR_GET_DEFAULT(personSettleFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPersonSettleFee(double personSettleFee) { DARABONBA_PTR_SET_VALUE(personSettleFee_, personSettleFee) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // processorOaCode Field Functions 
    bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
    void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
    inline string processorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // protocolDiscountFee Field Functions 
    bool hasProtocolDiscountFee() const { return this->protocolDiscountFee_ != nullptr;};
    void deleteProtocolDiscountFee() { this->protocolDiscountFee_ = nullptr;};
    inline double protocolDiscountFee() const { DARABONBA_PTR_GET_DEFAULT(protocolDiscountFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setProtocolDiscountFee(double protocolDiscountFee) { DARABONBA_PTR_SET_VALUE(protocolDiscountFee_, protocolDiscountFee) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string providerName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // realDriveDistance Field Functions 
    bool hasRealDriveDistance() const { return this->realDriveDistance_ != nullptr;};
    void deleteRealDriveDistance() { this->realDriveDistance_ = nullptr;};
    inline string realDriveDistance() const { DARABONBA_PTR_GET_DEFAULT(realDriveDistance_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setRealDriveDistance(string realDriveDistance) { DARABONBA_PTR_SET_VALUE(realDriveDistance_, realDriveDistance) };


    // realFromAddr Field Functions 
    bool hasRealFromAddr() const { return this->realFromAddr_ != nullptr;};
    void deleteRealFromAddr() { this->realFromAddr_ = nullptr;};
    inline string realFromAddr() const { DARABONBA_PTR_GET_DEFAULT(realFromAddr_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setRealFromAddr(string realFromAddr) { DARABONBA_PTR_SET_VALUE(realFromAddr_, realFromAddr) };


    // realToAddr Field Functions 
    bool hasRealToAddr() const { return this->realToAddr_ != nullptr;};
    void deleteRealToAddr() { this->realToAddr_ = nullptr;};
    inline string realToAddr() const { DARABONBA_PTR_GET_DEFAULT(realToAddr_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setRealToAddr(string realToAddr) { DARABONBA_PTR_SET_VALUE(realToAddr_, realToAddr) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // settleTypeDesc Field Functions 
    bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
    void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
    inline string settleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


    // settlementFee Field Functions 
    bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
    void deleteSettlementFee() { this->settlementFee_ = nullptr;};
    inline double settlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


    // settlementGrantFee Field Functions 
    bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
    void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
    inline double settlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


    // sio Field Functions 
    bool hasSio() const { return this->sio_ != nullptr;};
    void deleteSio() { this->sio_ = nullptr;};
    inline string sio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


    // specialOrder Field Functions 
    bool hasSpecialOrder() const { return this->specialOrder_ != nullptr;};
    void deleteSpecialOrder() { this->specialOrder_ = nullptr;};
    inline string specialOrder() const { DARABONBA_PTR_GET_DEFAULT(specialOrder_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSpecialOrder(string specialOrder) { DARABONBA_PTR_SET_VALUE(specialOrder_, specialOrder) };


    // specialReason Field Functions 
    bool hasSpecialReason() const { return this->specialReason_ != nullptr;};
    void deleteSpecialReason() { this->specialReason_ = nullptr;};
    inline string specialReason() const { DARABONBA_PTR_GET_DEFAULT(specialReason_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSpecialReason(string specialReason) { DARABONBA_PTR_SET_VALUE(specialReason_, specialReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // supplementApplyId Field Functions 
    bool hasSupplementApplyId() const { return this->supplementApplyId_ != nullptr;};
    void deleteSupplementApplyId() { this->supplementApplyId_ = nullptr;};
    inline string supplementApplyId() const { DARABONBA_PTR_GET_DEFAULT(supplementApplyId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setSupplementApplyId(string supplementApplyId) { DARABONBA_PTR_SET_VALUE(supplementApplyId_, supplementApplyId) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // thirdItineraryId Field Functions 
    bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
    void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
    inline string thirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // tradeActionDesc Field Functions 
    bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
    void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
    inline string tradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


    // travelerEmail Field Functions 
    bool hasTravelerEmail() const { return this->travelerEmail_ != nullptr;};
    void deleteTravelerEmail() { this->travelerEmail_ = nullptr;};
    inline string travelerEmail() const { DARABONBA_PTR_GET_DEFAULT(travelerEmail_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerEmail(string travelerEmail) { DARABONBA_PTR_SET_VALUE(travelerEmail_, travelerEmail) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerJobNo Field Functions 
    bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
    void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
    inline string travelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


    // travelerMemberType Field Functions 
    bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
    void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
    inline string travelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


    // travelerMemberTypeName Field Functions 
    bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
    void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
    inline string travelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // userConfirmDesc Field Functions 
    bool hasUserConfirmDesc() const { return this->userConfirmDesc_ != nullptr;};
    void deleteUserConfirmDesc() { this->userConfirmDesc_ = nullptr;};
    inline string userConfirmDesc() const { DARABONBA_PTR_GET_DEFAULT(userConfirmDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setUserConfirmDesc(string userConfirmDesc) { DARABONBA_PTR_SET_VALUE(userConfirmDesc_, userConfirmDesc) };


    // vehicleSceneId Field Functions 
    bool hasVehicleSceneId() const { return this->vehicleSceneId_ != nullptr;};
    void deleteVehicleSceneId() { this->vehicleSceneId_ = nullptr;};
    inline string vehicleSceneId() const { DARABONBA_PTR_GET_DEFAULT(vehicleSceneId_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setVehicleSceneId(string vehicleSceneId) { DARABONBA_PTR_SET_VALUE(vehicleSceneId_, vehicleSceneId) };


    // vehicleSceneName Field Functions 
    bool hasVehicleSceneName() const { return this->vehicleSceneName_ != nullptr;};
    void deleteVehicleSceneName() { this->vehicleSceneName_ = nullptr;};
    inline string vehicleSceneName() const { DARABONBA_PTR_GET_DEFAULT(vehicleSceneName_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setVehicleSceneName(string vehicleSceneName) { DARABONBA_PTR_SET_VALUE(vehicleSceneName_, vehicleSceneName) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


    // voucherTypeDesc Field Functions 
    bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
    void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
    inline string voucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
    inline CarBillSettlementQueryResponseBodyModuleDataList& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


  protected:
    std::shared_ptr<string> adjustTime_ = nullptr;
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<string> applyArrCityCode_ = nullptr;
    std::shared_ptr<string> applyArrCityName_ = nullptr;
    std::shared_ptr<string> applyDepCityCode_ = nullptr;
    std::shared_ptr<string> applyDepCityName_ = nullptr;
    // 审批扩展自定义字段
    std::shared_ptr<string> applyExtendField_ = nullptr;
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> approverEmail_ = nullptr;
    std::shared_ptr<string> approverId_ = nullptr;
    std::shared_ptr<string> approverName_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> arrLocation_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baseLocation_ = nullptr;
    std::shared_ptr<string> billRecordTime_ = nullptr;
    std::shared_ptr<string> billingEntity_ = nullptr;
    std::shared_ptr<string> bookModel_ = nullptr;
    std::shared_ptr<string> bookTime_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerJobNo_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<string> businessCategory_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> carLevel_ = nullptr;
    std::shared_ptr<string> cascadeDepartment_ = nullptr;
    std::shared_ptr<string> categoryDesc_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> costDepartment_ = nullptr;
    std::shared_ptr<double> coupon_ = nullptr;
    std::shared_ptr<double> couponPrice_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
    std::shared_ptr<double> deductibleTax_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> deptCity_ = nullptr;
    std::shared_ptr<string> deptDate_ = nullptr;
    std::shared_ptr<string> deptLocation_ = nullptr;
    std::shared_ptr<string> deptTime_ = nullptr;
    std::shared_ptr<string> driverAddDetail_ = nullptr;
    std::shared_ptr<double> driverAddFee_ = nullptr;
    std::shared_ptr<string> estimateDriveDistance_ = nullptr;
    std::shared_ptr<double> estimatePrice_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> feeTypeDesc_ = nullptr;
    std::shared_ptr<string> foreignersTag_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> levelName_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> mappingCompanyCode_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<double> orderPrice_ = nullptr;
    std::shared_ptr<string> overApplyId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<double> personSettleFee_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<string> processorOaCode_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<double> protocolDiscountFee_ = nullptr;
    std::shared_ptr<string> providerName_ = nullptr;
    std::shared_ptr<string> realDriveDistance_ = nullptr;
    std::shared_ptr<string> realFromAddr_ = nullptr;
    std::shared_ptr<string> realToAddr_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<string> settleTypeDesc_ = nullptr;
    std::shared_ptr<double> settlementFee_ = nullptr;
    std::shared_ptr<double> settlementGrantFee_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
    std::shared_ptr<string> sio_ = nullptr;
    std::shared_ptr<string> specialOrder_ = nullptr;
    std::shared_ptr<string> specialReason_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
    std::shared_ptr<string> supplementApplyId_ = nullptr;
    // 税率
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> thirdItineraryId_ = nullptr;
    std::shared_ptr<string> timeType_ = nullptr;
    std::shared_ptr<string> tradeActionDesc_ = nullptr;
    std::shared_ptr<string> travelerEmail_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<string> travelerJobNo_ = nullptr;
    std::shared_ptr<string> travelerMemberType_ = nullptr;
    std::shared_ptr<string> travelerMemberTypeName_ = nullptr;
    std::shared_ptr<string> travelerName_ = nullptr;
    std::shared_ptr<string> userConfirmDesc_ = nullptr;
    std::shared_ptr<string> vehicleSceneId_ = nullptr;
    std::shared_ptr<string> vehicleSceneName_ = nullptr;
    std::shared_ptr<int32_t> voucherType_ = nullptr;
    std::shared_ptr<string> voucherTypeDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
