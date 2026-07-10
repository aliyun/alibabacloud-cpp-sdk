// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarBillSettlementQueryResponseBody() = default ;
    CarBillSettlementQueryResponseBody(const CarBillSettlementQueryResponseBody &) = default ;
    CarBillSettlementQueryResponseBody(CarBillSettlementQueryResponseBody &&) = default ;
    CarBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarBillSettlementQueryResponseBody() = default ;
    CarBillSettlementQueryResponseBody& operator=(const CarBillSettlementQueryResponseBody &) = default ;
    CarBillSettlementQueryResponseBody& operator=(CarBillSettlementQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(data_list, dataList_);
        DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
        DARABONBA_PTR_TO_JSON(period_start, periodStart_);
        DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_TO_JSON(total_num, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(data_list, dataList_);
        DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
        DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
        DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_FROM_JSON(total_num, totalNum_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
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
        DataList() = default ;
        DataList(const DataList &) = default ;
        DataList(DataList &&) = default ;
        DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataList() = default ;
        DataList& operator=(const DataList &) = default ;
        DataList& operator=(DataList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustTime_ == nullptr
        && this->alipayTradeNo_ == nullptr && this->applyArrCityCode_ == nullptr && this->applyArrCityName_ == nullptr && this->applyDepCityCode_ == nullptr && this->applyDepCityName_ == nullptr
        && this->applyExtendField_ == nullptr && this->applyId_ == nullptr && this->approverEmail_ == nullptr && this->approverId_ == nullptr && this->approverName_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->arrDate_ == nullptr && this->arrLocation_ == nullptr && this->arrTime_ == nullptr
        && this->baseLocation_ == nullptr && this->billRecordTime_ == nullptr && this->billingEntity_ == nullptr && this->bookModel_ == nullptr && this->bookTime_ == nullptr
        && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr && this->bookerName_ == nullptr && this->businessCategory_ == nullptr && this->capitalDirection_ == nullptr
        && this->carLevel_ == nullptr && this->cascadeDepartment_ == nullptr && this->categoryDesc_ == nullptr && this->costCenter_ == nullptr && this->costCenterNumber_ == nullptr
        && this->costDepartment_ == nullptr && this->coupon_ == nullptr && this->couponPrice_ == nullptr && this->customContent_ == nullptr && this->deductibleTax_ == nullptr
        && this->depCityCode_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr && this->deptCity_ == nullptr && this->deptDate_ == nullptr
        && this->deptLocation_ == nullptr && this->deptTime_ == nullptr && this->driverAddDetail_ == nullptr && this->driverAddFee_ == nullptr && this->estimateDriveDistance_ == nullptr
        && this->estimatePrice_ == nullptr && this->feeType_ == nullptr && this->feeTypeDesc_ == nullptr && this->foreignersTag_ == nullptr && this->index_ == nullptr
        && this->invoiceTitle_ == nullptr && this->levelName_ == nullptr && this->location_ == nullptr && this->mappingCompanyCode_ == nullptr && this->memo_ == nullptr
        && this->orderId_ == nullptr && this->orderPrice_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->personSettleFee_ == nullptr && this->position_ == nullptr && this->positionLevel_ == nullptr && this->primaryId_ == nullptr && this->processorOaCode_ == nullptr
        && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->protocolDiscountFee_ == nullptr && this->providerName_ == nullptr && this->realDriveDistance_ == nullptr
        && this->realFromAddr_ == nullptr && this->realToAddr_ == nullptr && this->remark_ == nullptr && this->sceneId_ == nullptr && this->sceneName_ == nullptr
        && this->serviceFee_ == nullptr && this->settleTypeDesc_ == nullptr && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr && this->settlementTime_ == nullptr
        && this->settlementType_ == nullptr && this->sio_ == nullptr && this->specialOrder_ == nullptr && this->specialReason_ == nullptr && this->status_ == nullptr
        && this->statusDesc_ == nullptr && this->subOrderId_ == nullptr && this->supplementApplyId_ == nullptr && this->taxRate_ == nullptr && this->thirdItineraryId_ == nullptr
        && this->timeType_ == nullptr && this->tradeActionDesc_ == nullptr && this->travelerEmail_ == nullptr && this->travelerId_ == nullptr && this->travelerJobNo_ == nullptr
        && this->travelerMemberType_ == nullptr && this->travelerMemberTypeName_ == nullptr && this->travelerName_ == nullptr && this->userConfirmDesc_ == nullptr && this->vehicleSceneId_ == nullptr
        && this->vehicleSceneName_ == nullptr && this->voucherType_ == nullptr && this->voucherTypeDesc_ == nullptr; };
        // adjustTime Field Functions 
        bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
        void deleteAdjustTime() { this->adjustTime_ = nullptr;};
        inline string getAdjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
        inline DataList& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


        // alipayTradeNo Field Functions 
        bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
        void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
        inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
        inline DataList& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


        // applyArrCityCode Field Functions 
        bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
        void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
        inline string getApplyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
        inline DataList& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


        // applyArrCityName Field Functions 
        bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
        void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
        inline string getApplyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
        inline DataList& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


        // applyDepCityCode Field Functions 
        bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
        void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
        inline string getApplyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
        inline DataList& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


        // applyDepCityName Field Functions 
        bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
        void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
        inline string getApplyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
        inline DataList& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


        // applyExtendField Field Functions 
        bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
        void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
        inline string getApplyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
        inline DataList& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline DataList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // approverEmail Field Functions 
        bool hasApproverEmail() const { return this->approverEmail_ != nullptr;};
        void deleteApproverEmail() { this->approverEmail_ = nullptr;};
        inline string getApproverEmail() const { DARABONBA_PTR_GET_DEFAULT(approverEmail_, "") };
        inline DataList& setApproverEmail(string approverEmail) { DARABONBA_PTR_SET_VALUE(approverEmail_, approverEmail) };


        // approverId Field Functions 
        bool hasApproverId() const { return this->approverId_ != nullptr;};
        void deleteApproverId() { this->approverId_ = nullptr;};
        inline string getApproverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
        inline DataList& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


        // approverName Field Functions 
        bool hasApproverName() const { return this->approverName_ != nullptr;};
        void deleteApproverName() { this->approverName_ = nullptr;};
        inline string getApproverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
        inline DataList& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline DataList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline DataList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline DataList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // arrLocation Field Functions 
        bool hasArrLocation() const { return this->arrLocation_ != nullptr;};
        void deleteArrLocation() { this->arrLocation_ = nullptr;};
        inline string getArrLocation() const { DARABONBA_PTR_GET_DEFAULT(arrLocation_, "") };
        inline DataList& setArrLocation(string arrLocation) { DARABONBA_PTR_SET_VALUE(arrLocation_, arrLocation) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline DataList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // baseLocation Field Functions 
        bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
        void deleteBaseLocation() { this->baseLocation_ = nullptr;};
        inline string getBaseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
        inline DataList& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


        // billRecordTime Field Functions 
        bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
        void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
        inline string getBillRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
        inline DataList& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


        // billingEntity Field Functions 
        bool hasBillingEntity() const { return this->billingEntity_ != nullptr;};
        void deleteBillingEntity() { this->billingEntity_ = nullptr;};
        inline string getBillingEntity() const { DARABONBA_PTR_GET_DEFAULT(billingEntity_, "") };
        inline DataList& setBillingEntity(string billingEntity) { DARABONBA_PTR_SET_VALUE(billingEntity_, billingEntity) };


        // bookModel Field Functions 
        bool hasBookModel() const { return this->bookModel_ != nullptr;};
        void deleteBookModel() { this->bookModel_ = nullptr;};
        inline string getBookModel() const { DARABONBA_PTR_GET_DEFAULT(bookModel_, "") };
        inline DataList& setBookModel(string bookModel) { DARABONBA_PTR_SET_VALUE(bookModel_, bookModel) };


        // bookTime Field Functions 
        bool hasBookTime() const { return this->bookTime_ != nullptr;};
        void deleteBookTime() { this->bookTime_ = nullptr;};
        inline string getBookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
        inline DataList& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


        // bookerId Field Functions 
        bool hasBookerId() const { return this->bookerId_ != nullptr;};
        void deleteBookerId() { this->bookerId_ = nullptr;};
        inline string getBookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
        inline DataList& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


        // bookerJobNo Field Functions 
        bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
        void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
        inline string getBookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
        inline DataList& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


        // bookerName Field Functions 
        bool hasBookerName() const { return this->bookerName_ != nullptr;};
        void deleteBookerName() { this->bookerName_ = nullptr;};
        inline string getBookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
        inline DataList& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


        // businessCategory Field Functions 
        bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
        void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
        inline string getBusinessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
        inline DataList& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


        // capitalDirection Field Functions 
        bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
        void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
        inline string getCapitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
        inline DataList& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


        // carLevel Field Functions 
        bool hasCarLevel() const { return this->carLevel_ != nullptr;};
        void deleteCarLevel() { this->carLevel_ = nullptr;};
        inline string getCarLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, "") };
        inline DataList& setCarLevel(string carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


        // cascadeDepartment Field Functions 
        bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
        void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
        inline string getCascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
        inline DataList& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


        // categoryDesc Field Functions 
        bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
        void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
        inline string getCategoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
        inline DataList& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


        // costCenter Field Functions 
        bool hasCostCenter() const { return this->costCenter_ != nullptr;};
        void deleteCostCenter() { this->costCenter_ = nullptr;};
        inline string getCostCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
        inline DataList& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


        // costCenterNumber Field Functions 
        bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
        void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
        inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
        inline DataList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


        // costDepartment Field Functions 
        bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
        void deleteCostDepartment() { this->costDepartment_ = nullptr;};
        inline string getCostDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
        inline DataList& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


        // coupon Field Functions 
        bool hasCoupon() const { return this->coupon_ != nullptr;};
        void deleteCoupon() { this->coupon_ = nullptr;};
        inline double getCoupon() const { DARABONBA_PTR_GET_DEFAULT(coupon_, 0.0) };
        inline DataList& setCoupon(double coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };


        // couponPrice Field Functions 
        bool hasCouponPrice() const { return this->couponPrice_ != nullptr;};
        void deleteCouponPrice() { this->couponPrice_ = nullptr;};
        inline double getCouponPrice() const { DARABONBA_PTR_GET_DEFAULT(couponPrice_, 0.0) };
        inline DataList& setCouponPrice(double couponPrice) { DARABONBA_PTR_SET_VALUE(couponPrice_, couponPrice) };


        // customContent Field Functions 
        bool hasCustomContent() const { return this->customContent_ != nullptr;};
        void deleteCustomContent() { this->customContent_ = nullptr;};
        inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
        inline DataList& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


        // deductibleTax Field Functions 
        bool hasDeductibleTax() const { return this->deductibleTax_ != nullptr;};
        void deleteDeductibleTax() { this->deductibleTax_ = nullptr;};
        inline double getDeductibleTax() const { DARABONBA_PTR_GET_DEFAULT(deductibleTax_, 0.0) };
        inline DataList& setDeductibleTax(double deductibleTax) { DARABONBA_PTR_SET_VALUE(deductibleTax_, deductibleTax) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline DataList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
        inline DataList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
        inline DataList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // deptCity Field Functions 
        bool hasDeptCity() const { return this->deptCity_ != nullptr;};
        void deleteDeptCity() { this->deptCity_ = nullptr;};
        inline string getDeptCity() const { DARABONBA_PTR_GET_DEFAULT(deptCity_, "") };
        inline DataList& setDeptCity(string deptCity) { DARABONBA_PTR_SET_VALUE(deptCity_, deptCity) };


        // deptDate Field Functions 
        bool hasDeptDate() const { return this->deptDate_ != nullptr;};
        void deleteDeptDate() { this->deptDate_ = nullptr;};
        inline string getDeptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
        inline DataList& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


        // deptLocation Field Functions 
        bool hasDeptLocation() const { return this->deptLocation_ != nullptr;};
        void deleteDeptLocation() { this->deptLocation_ = nullptr;};
        inline string getDeptLocation() const { DARABONBA_PTR_GET_DEFAULT(deptLocation_, "") };
        inline DataList& setDeptLocation(string deptLocation) { DARABONBA_PTR_SET_VALUE(deptLocation_, deptLocation) };


        // deptTime Field Functions 
        bool hasDeptTime() const { return this->deptTime_ != nullptr;};
        void deleteDeptTime() { this->deptTime_ = nullptr;};
        inline string getDeptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
        inline DataList& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


        // driverAddDetail Field Functions 
        bool hasDriverAddDetail() const { return this->driverAddDetail_ != nullptr;};
        void deleteDriverAddDetail() { this->driverAddDetail_ = nullptr;};
        inline string getDriverAddDetail() const { DARABONBA_PTR_GET_DEFAULT(driverAddDetail_, "") };
        inline DataList& setDriverAddDetail(string driverAddDetail) { DARABONBA_PTR_SET_VALUE(driverAddDetail_, driverAddDetail) };


        // driverAddFee Field Functions 
        bool hasDriverAddFee() const { return this->driverAddFee_ != nullptr;};
        void deleteDriverAddFee() { this->driverAddFee_ = nullptr;};
        inline double getDriverAddFee() const { DARABONBA_PTR_GET_DEFAULT(driverAddFee_, 0.0) };
        inline DataList& setDriverAddFee(double driverAddFee) { DARABONBA_PTR_SET_VALUE(driverAddFee_, driverAddFee) };


        // estimateDriveDistance Field Functions 
        bool hasEstimateDriveDistance() const { return this->estimateDriveDistance_ != nullptr;};
        void deleteEstimateDriveDistance() { this->estimateDriveDistance_ = nullptr;};
        inline string getEstimateDriveDistance() const { DARABONBA_PTR_GET_DEFAULT(estimateDriveDistance_, "") };
        inline DataList& setEstimateDriveDistance(string estimateDriveDistance) { DARABONBA_PTR_SET_VALUE(estimateDriveDistance_, estimateDriveDistance) };


        // estimatePrice Field Functions 
        bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
        void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
        inline double getEstimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0.0) };
        inline DataList& setEstimatePrice(double estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


        // feeType Field Functions 
        bool hasFeeType() const { return this->feeType_ != nullptr;};
        void deleteFeeType() { this->feeType_ = nullptr;};
        inline string getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
        inline DataList& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


        // feeTypeDesc Field Functions 
        bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
        void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
        inline string getFeeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
        inline DataList& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


        // foreignersTag Field Functions 
        bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
        void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
        inline string getForeignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
        inline DataList& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline DataList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline DataList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // levelName Field Functions 
        bool hasLevelName() const { return this->levelName_ != nullptr;};
        void deleteLevelName() { this->levelName_ = nullptr;};
        inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
        inline DataList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline DataList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // mappingCompanyCode Field Functions 
        bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
        void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
        inline string getMappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
        inline DataList& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline DataList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline DataList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderPrice Field Functions 
        bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
        void deleteOrderPrice() { this->orderPrice_ = nullptr;};
        inline double getOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0.0) };
        inline DataList& setOrderPrice(double orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


        // overApplyId Field Functions 
        bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
        void deleteOverApplyId() { this->overApplyId_ = nullptr;};
        inline string getOverApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
        inline DataList& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


        // paymentDepartmentId Field Functions 
        bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
        void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
        inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
        inline DataList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


        // paymentDepartmentName Field Functions 
        bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
        void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
        inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
        inline DataList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


        // personSettleFee Field Functions 
        bool hasPersonSettleFee() const { return this->personSettleFee_ != nullptr;};
        void deletePersonSettleFee() { this->personSettleFee_ = nullptr;};
        inline double getPersonSettleFee() const { DARABONBA_PTR_GET_DEFAULT(personSettleFee_, 0.0) };
        inline DataList& setPersonSettleFee(double personSettleFee) { DARABONBA_PTR_SET_VALUE(personSettleFee_, personSettleFee) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline DataList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // positionLevel Field Functions 
        bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
        void deletePositionLevel() { this->positionLevel_ = nullptr;};
        inline string getPositionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
        inline DataList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


        // primaryId Field Functions 
        bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
        void deletePrimaryId() { this->primaryId_ = nullptr;};
        inline int64_t getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
        inline DataList& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


        // processorOaCode Field Functions 
        bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
        void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
        inline string getProcessorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
        inline DataList& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline DataList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline DataList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // protocolDiscountFee Field Functions 
        bool hasProtocolDiscountFee() const { return this->protocolDiscountFee_ != nullptr;};
        void deleteProtocolDiscountFee() { this->protocolDiscountFee_ = nullptr;};
        inline double getProtocolDiscountFee() const { DARABONBA_PTR_GET_DEFAULT(protocolDiscountFee_, 0.0) };
        inline DataList& setProtocolDiscountFee(double protocolDiscountFee) { DARABONBA_PTR_SET_VALUE(protocolDiscountFee_, protocolDiscountFee) };


        // providerName Field Functions 
        bool hasProviderName() const { return this->providerName_ != nullptr;};
        void deleteProviderName() { this->providerName_ = nullptr;};
        inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
        inline DataList& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


        // realDriveDistance Field Functions 
        bool hasRealDriveDistance() const { return this->realDriveDistance_ != nullptr;};
        void deleteRealDriveDistance() { this->realDriveDistance_ = nullptr;};
        inline string getRealDriveDistance() const { DARABONBA_PTR_GET_DEFAULT(realDriveDistance_, "") };
        inline DataList& setRealDriveDistance(string realDriveDistance) { DARABONBA_PTR_SET_VALUE(realDriveDistance_, realDriveDistance) };


        // realFromAddr Field Functions 
        bool hasRealFromAddr() const { return this->realFromAddr_ != nullptr;};
        void deleteRealFromAddr() { this->realFromAddr_ = nullptr;};
        inline string getRealFromAddr() const { DARABONBA_PTR_GET_DEFAULT(realFromAddr_, "") };
        inline DataList& setRealFromAddr(string realFromAddr) { DARABONBA_PTR_SET_VALUE(realFromAddr_, realFromAddr) };


        // realToAddr Field Functions 
        bool hasRealToAddr() const { return this->realToAddr_ != nullptr;};
        void deleteRealToAddr() { this->realToAddr_ = nullptr;};
        inline string getRealToAddr() const { DARABONBA_PTR_GET_DEFAULT(realToAddr_, "") };
        inline DataList& setRealToAddr(string realToAddr) { DARABONBA_PTR_SET_VALUE(realToAddr_, realToAddr) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline DataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline DataList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline DataList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


        // serviceFee Field Functions 
        bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
        void deleteServiceFee() { this->serviceFee_ = nullptr;};
        inline double getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
        inline DataList& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


        // settleTypeDesc Field Functions 
        bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
        void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
        inline string getSettleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
        inline DataList& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


        // settlementFee Field Functions 
        bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
        void deleteSettlementFee() { this->settlementFee_ = nullptr;};
        inline double getSettlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
        inline DataList& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


        // settlementGrantFee Field Functions 
        bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
        void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
        inline double getSettlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
        inline DataList& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


        // settlementTime Field Functions 
        bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
        void deleteSettlementTime() { this->settlementTime_ = nullptr;};
        inline string getSettlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
        inline DataList& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


        // settlementType Field Functions 
        bool hasSettlementType() const { return this->settlementType_ != nullptr;};
        void deleteSettlementType() { this->settlementType_ = nullptr;};
        inline string getSettlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
        inline DataList& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


        // sio Field Functions 
        bool hasSio() const { return this->sio_ != nullptr;};
        void deleteSio() { this->sio_ = nullptr;};
        inline string getSio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
        inline DataList& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


        // specialOrder Field Functions 
        bool hasSpecialOrder() const { return this->specialOrder_ != nullptr;};
        void deleteSpecialOrder() { this->specialOrder_ = nullptr;};
        inline string getSpecialOrder() const { DARABONBA_PTR_GET_DEFAULT(specialOrder_, "") };
        inline DataList& setSpecialOrder(string specialOrder) { DARABONBA_PTR_SET_VALUE(specialOrder_, specialOrder) };


        // specialReason Field Functions 
        bool hasSpecialReason() const { return this->specialReason_ != nullptr;};
        void deleteSpecialReason() { this->specialReason_ = nullptr;};
        inline string getSpecialReason() const { DARABONBA_PTR_GET_DEFAULT(specialReason_, "") };
        inline DataList& setSpecialReason(string specialReason) { DARABONBA_PTR_SET_VALUE(specialReason_, specialReason) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline DataList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // subOrderId Field Functions 
        bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
        void deleteSubOrderId() { this->subOrderId_ = nullptr;};
        inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
        inline DataList& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


        // supplementApplyId Field Functions 
        bool hasSupplementApplyId() const { return this->supplementApplyId_ != nullptr;};
        void deleteSupplementApplyId() { this->supplementApplyId_ = nullptr;};
        inline string getSupplementApplyId() const { DARABONBA_PTR_GET_DEFAULT(supplementApplyId_, "") };
        inline DataList& setSupplementApplyId(string supplementApplyId) { DARABONBA_PTR_SET_VALUE(supplementApplyId_, supplementApplyId) };


        // taxRate Field Functions 
        bool hasTaxRate() const { return this->taxRate_ != nullptr;};
        void deleteTaxRate() { this->taxRate_ = nullptr;};
        inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
        inline DataList& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


        // thirdItineraryId Field Functions 
        bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
        void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
        inline string getThirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
        inline DataList& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


        // timeType Field Functions 
        bool hasTimeType() const { return this->timeType_ != nullptr;};
        void deleteTimeType() { this->timeType_ = nullptr;};
        inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
        inline DataList& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        // tradeActionDesc Field Functions 
        bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
        void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
        inline string getTradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
        inline DataList& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


        // travelerEmail Field Functions 
        bool hasTravelerEmail() const { return this->travelerEmail_ != nullptr;};
        void deleteTravelerEmail() { this->travelerEmail_ = nullptr;};
        inline string getTravelerEmail() const { DARABONBA_PTR_GET_DEFAULT(travelerEmail_, "") };
        inline DataList& setTravelerEmail(string travelerEmail) { DARABONBA_PTR_SET_VALUE(travelerEmail_, travelerEmail) };


        // travelerId Field Functions 
        bool hasTravelerId() const { return this->travelerId_ != nullptr;};
        void deleteTravelerId() { this->travelerId_ = nullptr;};
        inline string getTravelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
        inline DataList& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


        // travelerJobNo Field Functions 
        bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
        void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
        inline string getTravelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
        inline DataList& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


        // travelerMemberType Field Functions 
        bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
        void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
        inline string getTravelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
        inline DataList& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


        // travelerMemberTypeName Field Functions 
        bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
        void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
        inline string getTravelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
        inline DataList& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


        // travelerName Field Functions 
        bool hasTravelerName() const { return this->travelerName_ != nullptr;};
        void deleteTravelerName() { this->travelerName_ = nullptr;};
        inline string getTravelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
        inline DataList& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


        // userConfirmDesc Field Functions 
        bool hasUserConfirmDesc() const { return this->userConfirmDesc_ != nullptr;};
        void deleteUserConfirmDesc() { this->userConfirmDesc_ = nullptr;};
        inline string getUserConfirmDesc() const { DARABONBA_PTR_GET_DEFAULT(userConfirmDesc_, "") };
        inline DataList& setUserConfirmDesc(string userConfirmDesc) { DARABONBA_PTR_SET_VALUE(userConfirmDesc_, userConfirmDesc) };


        // vehicleSceneId Field Functions 
        bool hasVehicleSceneId() const { return this->vehicleSceneId_ != nullptr;};
        void deleteVehicleSceneId() { this->vehicleSceneId_ = nullptr;};
        inline string getVehicleSceneId() const { DARABONBA_PTR_GET_DEFAULT(vehicleSceneId_, "") };
        inline DataList& setVehicleSceneId(string vehicleSceneId) { DARABONBA_PTR_SET_VALUE(vehicleSceneId_, vehicleSceneId) };


        // vehicleSceneName Field Functions 
        bool hasVehicleSceneName() const { return this->vehicleSceneName_ != nullptr;};
        void deleteVehicleSceneName() { this->vehicleSceneName_ = nullptr;};
        inline string getVehicleSceneName() const { DARABONBA_PTR_GET_DEFAULT(vehicleSceneName_, "") };
        inline DataList& setVehicleSceneName(string vehicleSceneName) { DARABONBA_PTR_SET_VALUE(vehicleSceneName_, vehicleSceneName) };


        // voucherType Field Functions 
        bool hasVoucherType() const { return this->voucherType_ != nullptr;};
        void deleteVoucherType() { this->voucherType_ = nullptr;};
        inline int32_t getVoucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
        inline DataList& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


        // voucherTypeDesc Field Functions 
        bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
        void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
        inline string getVoucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
        inline DataList& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


      protected:
        shared_ptr<string> adjustTime_ {};
        shared_ptr<string> alipayTradeNo_ {};
        shared_ptr<string> applyArrCityCode_ {};
        shared_ptr<string> applyArrCityName_ {};
        shared_ptr<string> applyDepCityCode_ {};
        shared_ptr<string> applyDepCityName_ {};
        shared_ptr<string> applyExtendField_ {};
        shared_ptr<string> applyId_ {};
        shared_ptr<string> approverEmail_ {};
        shared_ptr<string> approverId_ {};
        shared_ptr<string> approverName_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> arrLocation_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> baseLocation_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> billingEntity_ {};
        shared_ptr<string> bookModel_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<string> businessCategory_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> carLevel_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<double> coupon_ {};
        shared_ptr<double> couponPrice_ {};
        shared_ptr<string> customContent_ {};
        shared_ptr<double> deductibleTax_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> deptCity_ {};
        shared_ptr<string> deptDate_ {};
        shared_ptr<string> deptLocation_ {};
        shared_ptr<string> deptTime_ {};
        shared_ptr<string> driverAddDetail_ {};
        shared_ptr<double> driverAddFee_ {};
        shared_ptr<string> estimateDriveDistance_ {};
        shared_ptr<double> estimatePrice_ {};
        shared_ptr<string> feeType_ {};
        shared_ptr<string> feeTypeDesc_ {};
        shared_ptr<string> foreignersTag_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> levelName_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<double> orderPrice_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<double> personSettleFee_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> positionLevel_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> protocolDiscountFee_ {};
        shared_ptr<string> providerName_ {};
        shared_ptr<string> realDriveDistance_ {};
        shared_ptr<string> realFromAddr_ {};
        shared_ptr<string> realToAddr_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> sceneId_ {};
        shared_ptr<string> sceneName_ {};
        shared_ptr<double> serviceFee_ {};
        shared_ptr<string> settleTypeDesc_ {};
        shared_ptr<double> settlementFee_ {};
        shared_ptr<double> settlementGrantFee_ {};
        shared_ptr<string> settlementTime_ {};
        shared_ptr<string> settlementType_ {};
        shared_ptr<string> sio_ {};
        shared_ptr<string> specialOrder_ {};
        shared_ptr<string> specialReason_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> subOrderId_ {};
        shared_ptr<string> supplementApplyId_ {};
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> thirdItineraryId_ {};
        shared_ptr<string> timeType_ {};
        shared_ptr<string> tradeActionDesc_ {};
        shared_ptr<string> travelerEmail_ {};
        shared_ptr<string> travelerId_ {};
        shared_ptr<string> travelerJobNo_ {};
        shared_ptr<string> travelerMemberType_ {};
        shared_ptr<string> travelerMemberTypeName_ {};
        shared_ptr<string> travelerName_ {};
        shared_ptr<string> userConfirmDesc_ {};
        shared_ptr<string> vehicleSceneId_ {};
        shared_ptr<string> vehicleSceneName_ {};
        shared_ptr<int32_t> voucherType_ {};
        shared_ptr<string> voucherTypeDesc_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->corpId_ == nullptr && this->dataList_ == nullptr && this->periodEnd_ == nullptr && this->periodStart_ == nullptr && this->scrollId_ == nullptr
        && this->totalNum_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Module& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // dataList Field Functions 
      bool hasDataList() const { return this->dataList_ != nullptr;};
      void deleteDataList() { this->dataList_ = nullptr;};
      inline const vector<Module::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Module::DataList>) };
      inline vector<Module::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<Module::DataList>) };
      inline Module& setDataList(const vector<Module::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
      inline Module& setDataList(vector<Module::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


      // periodEnd Field Functions 
      bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
      void deletePeriodEnd() { this->periodEnd_ = nullptr;};
      inline string getPeriodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
      inline Module& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


      // periodStart Field Functions 
      bool hasPeriodStart() const { return this->periodStart_ != nullptr;};
      void deletePeriodStart() { this->periodStart_ = nullptr;};
      inline string getPeriodStart() const { DARABONBA_PTR_GET_DEFAULT(periodStart_, "") };
      inline Module& setPeriodStart(string periodStart) { DARABONBA_PTR_SET_VALUE(periodStart_, periodStart) };


      // scrollId Field Functions 
      bool hasScrollId() const { return this->scrollId_ != nullptr;};
      void deleteScrollId() { this->scrollId_ = nullptr;};
      inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
      inline Module& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
      inline Module& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      shared_ptr<int32_t> category_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<vector<Module::DataList>> dataList_ {};
      shared_ptr<string> periodEnd_ {};
      shared_ptr<string> periodStart_ {};
      shared_ptr<string> scrollId_ {};
      shared_ptr<int64_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CarBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CarBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CarBillSettlementQueryResponseBody::Module) };
    inline CarBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CarBillSettlementQueryResponseBody::Module) };
    inline CarBillSettlementQueryResponseBody& setModule(const CarBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CarBillSettlementQueryResponseBody& setModule(CarBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CarBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
