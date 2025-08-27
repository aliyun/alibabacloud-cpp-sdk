// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINBILLSETTLEMENTQUERYRESPONSEBODYMODULEDATALIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINBILLSETTLEMENTQUERYRESPONSEBODYMODULEDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainBillSettlementQueryResponseBodyModuleDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainBillSettlementQueryResponseBodyModuleDataList& obj) { 
      DARABONBA_PTR_TO_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(apply_arr_city_code, applyArrCityCode_);
      DARABONBA_PTR_TO_JSON(apply_arr_city_name, applyArrCityName_);
      DARABONBA_PTR_TO_JSON(apply_dep_city_code, applyDepCityCode_);
      DARABONBA_PTR_TO_JSON(apply_dep_city_name, applyDepCityName_);
      DARABONBA_PTR_TO_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(arr_station_location, arrStationLocation_);
      DARABONBA_PTR_TO_JSON(arr_station_location_code, arrStationLocationCode_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(base_location, baseLocation_);
      DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
      DARABONBA_PTR_TO_JSON(business_trip_result, businessTripResult_);
      DARABONBA_PTR_TO_JSON(cabin_max_price, cabinMaxPrice_);
      DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_TO_JSON(change_affiliate_no, changeAffiliateNo_);
      DARABONBA_PTR_TO_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(change_result, changeResult_);
      DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_TO_JSON(coupon, coupon_);
      DARABONBA_PTR_TO_JSON(custom_content, customContent_);
      DARABONBA_PTR_TO_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_station_location, depStationLocation_);
      DARABONBA_PTR_TO_JSON(dep_station_location_code, depStationLocationCode_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(dept_date, deptDate_);
      DARABONBA_PTR_TO_JSON(dept_station, deptStation_);
      DARABONBA_PTR_TO_JSON(dept_time, deptTime_);
      DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(is_transfer_order, isTransferOrder_);
      DARABONBA_PTR_TO_JSON(long_ticket_no, longTicketNo_);
      DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_TO_JSON(max_cabin, maxCabin_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(order_ticket_no, orderTicketNo_);
      DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
      DARABONBA_PTR_TO_JSON(print_ticket_price, printTicketPrice_);
      DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(refund_affiliate_no, refundAffiliateNo_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(reserve_mode, reserveMode_);
      DARABONBA_PTR_TO_JSON(run_time, runTime_);
      DARABONBA_PTR_TO_JSON(scene_id, sceneId_);
      DARABONBA_PTR_TO_JSON(scene_name, sceneName_);
      DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_TO_JSON(short_ticket_no, shortTicketNo_);
      DARABONBA_PTR_TO_JSON(speed_package_fee, speedPackageFee_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_TO_JSON(ticket_corp_pay_price, ticketCorpPayPrice_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_person_pay_price, ticketPersonPayPrice_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      DARABONBA_PTR_TO_JSON(train_type, trainType_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, TrainBillSettlementQueryResponseBodyModuleDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(apply_arr_city_code, applyArrCityCode_);
      DARABONBA_PTR_FROM_JSON(apply_arr_city_name, applyArrCityName_);
      DARABONBA_PTR_FROM_JSON(apply_dep_city_code, applyDepCityCode_);
      DARABONBA_PTR_FROM_JSON(apply_dep_city_name, applyDepCityName_);
      DARABONBA_PTR_FROM_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(arr_station_location, arrStationLocation_);
      DARABONBA_PTR_FROM_JSON(arr_station_location_code, arrStationLocationCode_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(base_location, baseLocation_);
      DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
      DARABONBA_PTR_FROM_JSON(business_trip_result, businessTripResult_);
      DARABONBA_PTR_FROM_JSON(cabin_max_price, cabinMaxPrice_);
      DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_FROM_JSON(change_affiliate_no, changeAffiliateNo_);
      DARABONBA_PTR_FROM_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(change_result, changeResult_);
      DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_FROM_JSON(coupon, coupon_);
      DARABONBA_PTR_FROM_JSON(custom_content, customContent_);
      DARABONBA_PTR_FROM_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_station_location, depStationLocation_);
      DARABONBA_PTR_FROM_JSON(dep_station_location_code, depStationLocationCode_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(dept_date, deptDate_);
      DARABONBA_PTR_FROM_JSON(dept_station, deptStation_);
      DARABONBA_PTR_FROM_JSON(dept_time, deptTime_);
      DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(is_transfer_order, isTransferOrder_);
      DARABONBA_PTR_FROM_JSON(long_ticket_no, longTicketNo_);
      DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_FROM_JSON(max_cabin, maxCabin_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(order_ticket_no, orderTicketNo_);
      DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
      DARABONBA_PTR_FROM_JSON(print_ticket_price, printTicketPrice_);
      DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(refund_affiliate_no, refundAffiliateNo_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(reserve_mode, reserveMode_);
      DARABONBA_PTR_FROM_JSON(run_time, runTime_);
      DARABONBA_PTR_FROM_JSON(scene_id, sceneId_);
      DARABONBA_PTR_FROM_JSON(scene_name, sceneName_);
      DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_FROM_JSON(short_ticket_no, shortTicketNo_);
      DARABONBA_PTR_FROM_JSON(speed_package_fee, speedPackageFee_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_FROM_JSON(ticket_corp_pay_price, ticketCorpPayPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_person_pay_price, ticketPersonPayPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      DARABONBA_PTR_FROM_JSON(train_type, trainType_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    TrainBillSettlementQueryResponseBodyModuleDataList() = default ;
    TrainBillSettlementQueryResponseBodyModuleDataList(const TrainBillSettlementQueryResponseBodyModuleDataList &) = default ;
    TrainBillSettlementQueryResponseBodyModuleDataList(TrainBillSettlementQueryResponseBodyModuleDataList &&) = default ;
    TrainBillSettlementQueryResponseBodyModuleDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainBillSettlementQueryResponseBodyModuleDataList() = default ;
    TrainBillSettlementQueryResponseBodyModuleDataList& operator=(const TrainBillSettlementQueryResponseBodyModuleDataList &) = default ;
    TrainBillSettlementQueryResponseBodyModuleDataList& operator=(TrainBillSettlementQueryResponseBodyModuleDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustTime_ != nullptr
        && this->alipayTradeNo_ != nullptr && this->applyArrCityCode_ != nullptr && this->applyArrCityName_ != nullptr && this->applyDepCityCode_ != nullptr && this->applyDepCityName_ != nullptr
        && this->applyExtendField_ != nullptr && this->applyId_ != nullptr && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrDate_ != nullptr
        && this->arrStation_ != nullptr && this->arrStationLocation_ != nullptr && this->arrStationLocationCode_ != nullptr && this->arrTime_ != nullptr && this->baseLocation_ != nullptr
        && this->billRecordTime_ != nullptr && this->bookTime_ != nullptr && this->bookerId_ != nullptr && this->bookerJobNo_ != nullptr && this->bookerName_ != nullptr
        && this->businessTripResult_ != nullptr && this->cabinMaxPrice_ != nullptr && this->capitalDirection_ != nullptr && this->cascadeDepartment_ != nullptr && this->categoryDesc_ != nullptr
        && this->changeAffiliateNo_ != nullptr && this->changeApplyId_ != nullptr && this->changeFee_ != nullptr && this->changeResult_ != nullptr && this->coachNo_ != nullptr
        && this->costCenter_ != nullptr && this->costCenterNumber_ != nullptr && this->costDepartment_ != nullptr && this->coupon_ != nullptr && this->customContent_ != nullptr
        && this->deductibleTax_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depStationLocation_ != nullptr && this->depStationLocationCode_ != nullptr
        && this->department_ != nullptr && this->departmentId_ != nullptr && this->deptDate_ != nullptr && this->deptStation_ != nullptr && this->deptTime_ != nullptr
        && this->exceedReason_ != nullptr && this->feeType_ != nullptr && this->feeTypeDesc_ != nullptr && this->index_ != nullptr && this->invoiceTitle_ != nullptr
        && this->isTransferOrder_ != nullptr && this->longTicketNo_ != nullptr && this->mappingCompanyCode_ != nullptr && this->maxCabin_ != nullptr && this->orderId_ != nullptr
        && this->orderPrice_ != nullptr && this->orderTicketNo_ != nullptr && this->overApplyId_ != nullptr && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr
        && this->position_ != nullptr && this->positionLevel_ != nullptr && this->primaryId_ != nullptr && this->printTicketPrice_ != nullptr && this->processorOaCode_ != nullptr
        && this->projectCode_ != nullptr && this->projectName_ != nullptr && this->refundAffiliateNo_ != nullptr && this->refundApplyId_ != nullptr && this->refundFee_ != nullptr
        && this->refundReason_ != nullptr && this->remark_ != nullptr && this->reserveMode_ != nullptr && this->runTime_ != nullptr && this->sceneId_ != nullptr
        && this->sceneName_ != nullptr && this->seatNo_ != nullptr && this->seatType_ != nullptr && this->serviceFee_ != nullptr && this->settleTypeDesc_ != nullptr
        && this->settlementFee_ != nullptr && this->settlementGrantFee_ != nullptr && this->settlementTime_ != nullptr && this->settlementType_ != nullptr && this->shortTicketNo_ != nullptr
        && this->speedPackageFee_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr && this->taxRate_ != nullptr && this->thirdItineraryId_ != nullptr
        && this->ticketCorpPayPrice_ != nullptr && this->ticketNo_ != nullptr && this->ticketPersonPayPrice_ != nullptr && this->ticketPrice_ != nullptr && this->tradeActionDesc_ != nullptr
        && this->trainNo_ != nullptr && this->trainType_ != nullptr && this->travelerId_ != nullptr && this->travelerJobNo_ != nullptr && this->travelerMemberType_ != nullptr
        && this->travelerMemberTypeName_ != nullptr && this->travelerName_ != nullptr && this->voucherType_ != nullptr && this->voucherTypeDesc_ != nullptr; };
    // adjustTime Field Functions 
    bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
    void deleteAdjustTime() { this->adjustTime_ = nullptr;};
    inline string adjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // applyArrCityCode Field Functions 
    bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
    void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
    inline string applyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


    // applyArrCityName Field Functions 
    bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
    void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
    inline string applyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


    // applyDepCityCode Field Functions 
    bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
    void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
    inline string applyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


    // applyDepCityName Field Functions 
    bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
    void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
    inline string applyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


    // applyExtendField Field Functions 
    bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
    void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
    inline string applyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // arrStationLocation Field Functions 
    bool hasArrStationLocation() const { return this->arrStationLocation_ != nullptr;};
    void deleteArrStationLocation() { this->arrStationLocation_ = nullptr;};
    inline string arrStationLocation() const { DARABONBA_PTR_GET_DEFAULT(arrStationLocation_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrStationLocation(string arrStationLocation) { DARABONBA_PTR_SET_VALUE(arrStationLocation_, arrStationLocation) };


    // arrStationLocationCode Field Functions 
    bool hasArrStationLocationCode() const { return this->arrStationLocationCode_ != nullptr;};
    void deleteArrStationLocationCode() { this->arrStationLocationCode_ = nullptr;};
    inline string arrStationLocationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationLocationCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrStationLocationCode(string arrStationLocationCode) { DARABONBA_PTR_SET_VALUE(arrStationLocationCode_, arrStationLocationCode) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baseLocation Field Functions 
    bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
    void deleteBaseLocation() { this->baseLocation_ = nullptr;};
    inline string baseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


    // billRecordTime Field Functions 
    bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
    void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
    inline string billRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline string bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerJobNo Field Functions 
    bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
    void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
    inline string bookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // businessTripResult Field Functions 
    bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
    void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
    inline string businessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


    // cabinMaxPrice Field Functions 
    bool hasCabinMaxPrice() const { return this->cabinMaxPrice_ != nullptr;};
    void deleteCabinMaxPrice() { this->cabinMaxPrice_ = nullptr;};
    inline double cabinMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(cabinMaxPrice_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCabinMaxPrice(double cabinMaxPrice) { DARABONBA_PTR_SET_VALUE(cabinMaxPrice_, cabinMaxPrice) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // cascadeDepartment Field Functions 
    bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
    void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
    inline string cascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


    // categoryDesc Field Functions 
    bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
    void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
    inline string categoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


    // changeAffiliateNo Field Functions 
    bool hasChangeAffiliateNo() const { return this->changeAffiliateNo_ != nullptr;};
    void deleteChangeAffiliateNo() { this->changeAffiliateNo_ = nullptr;};
    inline string changeAffiliateNo() const { DARABONBA_PTR_GET_DEFAULT(changeAffiliateNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setChangeAffiliateNo(string changeAffiliateNo) { DARABONBA_PTR_SET_VALUE(changeAffiliateNo_, changeAffiliateNo) };


    // changeApplyId Field Functions 
    bool hasChangeApplyId() const { return this->changeApplyId_ != nullptr;};
    void deleteChangeApplyId() { this->changeApplyId_ = nullptr;};
    inline string changeApplyId() const { DARABONBA_PTR_GET_DEFAULT(changeApplyId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setChangeApplyId(string changeApplyId) { DARABONBA_PTR_SET_VALUE(changeApplyId_, changeApplyId) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // changeResult Field Functions 
    bool hasChangeResult() const { return this->changeResult_ != nullptr;};
    void deleteChangeResult() { this->changeResult_ = nullptr;};
    inline string changeResult() const { DARABONBA_PTR_GET_DEFAULT(changeResult_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setChangeResult(string changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };


    // coachNo Field Functions 
    bool hasCoachNo() const { return this->coachNo_ != nullptr;};
    void deleteCoachNo() { this->coachNo_ = nullptr;};
    inline string coachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // costDepartment Field Functions 
    bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
    void deleteCostDepartment() { this->costDepartment_ = nullptr;};
    inline string costDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline double coupon() const { DARABONBA_PTR_GET_DEFAULT(coupon_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCoupon(double coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // deductibleTax Field Functions 
    bool hasDeductibleTax() const { return this->deductibleTax_ != nullptr;};
    void deleteDeductibleTax() { this->deductibleTax_ = nullptr;};
    inline double deductibleTax() const { DARABONBA_PTR_GET_DEFAULT(deductibleTax_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDeductibleTax(double deductibleTax) { DARABONBA_PTR_SET_VALUE(deductibleTax_, deductibleTax) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depStationLocation Field Functions 
    bool hasDepStationLocation() const { return this->depStationLocation_ != nullptr;};
    void deleteDepStationLocation() { this->depStationLocation_ = nullptr;};
    inline string depStationLocation() const { DARABONBA_PTR_GET_DEFAULT(depStationLocation_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepStationLocation(string depStationLocation) { DARABONBA_PTR_SET_VALUE(depStationLocation_, depStationLocation) };


    // depStationLocationCode Field Functions 
    bool hasDepStationLocationCode() const { return this->depStationLocationCode_ != nullptr;};
    void deleteDepStationLocationCode() { this->depStationLocationCode_ = nullptr;};
    inline string depStationLocationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationLocationCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepStationLocationCode(string depStationLocationCode) { DARABONBA_PTR_SET_VALUE(depStationLocationCode_, depStationLocationCode) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // deptDate Field Functions 
    bool hasDeptDate() const { return this->deptDate_ != nullptr;};
    void deleteDeptDate() { this->deptDate_ = nullptr;};
    inline string deptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


    // deptStation Field Functions 
    bool hasDeptStation() const { return this->deptStation_ != nullptr;};
    void deleteDeptStation() { this->deptStation_ = nullptr;};
    inline string deptStation() const { DARABONBA_PTR_GET_DEFAULT(deptStation_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDeptStation(string deptStation) { DARABONBA_PTR_SET_VALUE(deptStation_, deptStation) };


    // deptTime Field Functions 
    bool hasDeptTime() const { return this->deptTime_ != nullptr;};
    void deleteDeptTime() { this->deptTime_ = nullptr;};
    inline string deptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


    // exceedReason Field Functions 
    bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
    void deleteExceedReason() { this->exceedReason_ = nullptr;};
    inline string exceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // feeTypeDesc Field Functions 
    bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
    void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
    inline string feeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // isTransferOrder Field Functions 
    bool hasIsTransferOrder() const { return this->isTransferOrder_ != nullptr;};
    void deleteIsTransferOrder() { this->isTransferOrder_ = nullptr;};
    inline string isTransferOrder() const { DARABONBA_PTR_GET_DEFAULT(isTransferOrder_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setIsTransferOrder(string isTransferOrder) { DARABONBA_PTR_SET_VALUE(isTransferOrder_, isTransferOrder) };


    // longTicketNo Field Functions 
    bool hasLongTicketNo() const { return this->longTicketNo_ != nullptr;};
    void deleteLongTicketNo() { this->longTicketNo_ = nullptr;};
    inline string longTicketNo() const { DARABONBA_PTR_GET_DEFAULT(longTicketNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setLongTicketNo(string longTicketNo) { DARABONBA_PTR_SET_VALUE(longTicketNo_, longTicketNo) };


    // mappingCompanyCode Field Functions 
    bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
    void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
    inline string mappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


    // maxCabin Field Functions 
    bool hasMaxCabin() const { return this->maxCabin_ != nullptr;};
    void deleteMaxCabin() { this->maxCabin_ = nullptr;};
    inline string maxCabin() const { DARABONBA_PTR_GET_DEFAULT(maxCabin_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setMaxCabin(string maxCabin) { DARABONBA_PTR_SET_VALUE(maxCabin_, maxCabin) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline double orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setOrderPrice(double orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // orderTicketNo Field Functions 
    bool hasOrderTicketNo() const { return this->orderTicketNo_ != nullptr;};
    void deleteOrderTicketNo() { this->orderTicketNo_ = nullptr;};
    inline string orderTicketNo() const { DARABONBA_PTR_GET_DEFAULT(orderTicketNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setOrderTicketNo(string orderTicketNo) { DARABONBA_PTR_SET_VALUE(orderTicketNo_, orderTicketNo) };


    // overApplyId Field Functions 
    bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
    void deleteOverApplyId() { this->overApplyId_ = nullptr;};
    inline string overApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // printTicketPrice Field Functions 
    bool hasPrintTicketPrice() const { return this->printTicketPrice_ != nullptr;};
    void deletePrintTicketPrice() { this->printTicketPrice_ = nullptr;};
    inline double printTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(printTicketPrice_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setPrintTicketPrice(double printTicketPrice) { DARABONBA_PTR_SET_VALUE(printTicketPrice_, printTicketPrice) };


    // processorOaCode Field Functions 
    bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
    void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
    inline string processorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // refundAffiliateNo Field Functions 
    bool hasRefundAffiliateNo() const { return this->refundAffiliateNo_ != nullptr;};
    void deleteRefundAffiliateNo() { this->refundAffiliateNo_ = nullptr;};
    inline string refundAffiliateNo() const { DARABONBA_PTR_GET_DEFAULT(refundAffiliateNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRefundAffiliateNo(string refundAffiliateNo) { DARABONBA_PTR_SET_VALUE(refundAffiliateNo_, refundAffiliateNo) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline double refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // reserveMode Field Functions 
    bool hasReserveMode() const { return this->reserveMode_ != nullptr;};
    void deleteReserveMode() { this->reserveMode_ = nullptr;};
    inline string reserveMode() const { DARABONBA_PTR_GET_DEFAULT(reserveMode_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setReserveMode(string reserveMode) { DARABONBA_PTR_SET_VALUE(reserveMode_, reserveMode) };


    // runTime Field Functions 
    bool hasRunTime() const { return this->runTime_ != nullptr;};
    void deleteRunTime() { this->runTime_ = nullptr;};
    inline string runTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setRunTime(string runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // seatNo Field Functions 
    bool hasSeatNo() const { return this->seatNo_ != nullptr;};
    void deleteSeatNo() { this->seatNo_ = nullptr;};
    inline string seatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // settleTypeDesc Field Functions 
    bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
    void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
    inline string settleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


    // settlementFee Field Functions 
    bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
    void deleteSettlementFee() { this->settlementFee_ = nullptr;};
    inline double settlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


    // settlementGrantFee Field Functions 
    bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
    void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
    inline double settlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


    // shortTicketNo Field Functions 
    bool hasShortTicketNo() const { return this->shortTicketNo_ != nullptr;};
    void deleteShortTicketNo() { this->shortTicketNo_ = nullptr;};
    inline string shortTicketNo() const { DARABONBA_PTR_GET_DEFAULT(shortTicketNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setShortTicketNo(string shortTicketNo) { DARABONBA_PTR_SET_VALUE(shortTicketNo_, shortTicketNo) };


    // speedPackageFee Field Functions 
    bool hasSpeedPackageFee() const { return this->speedPackageFee_ != nullptr;};
    void deleteSpeedPackageFee() { this->speedPackageFee_ = nullptr;};
    inline double speedPackageFee() const { DARABONBA_PTR_GET_DEFAULT(speedPackageFee_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setSpeedPackageFee(double speedPackageFee) { DARABONBA_PTR_SET_VALUE(speedPackageFee_, speedPackageFee) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // thirdItineraryId Field Functions 
    bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
    void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
    inline string thirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


    // ticketCorpPayPrice Field Functions 
    bool hasTicketCorpPayPrice() const { return this->ticketCorpPayPrice_ != nullptr;};
    void deleteTicketCorpPayPrice() { this->ticketCorpPayPrice_ = nullptr;};
    inline string ticketCorpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketCorpPayPrice_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTicketCorpPayPrice(string ticketCorpPayPrice) { DARABONBA_PTR_SET_VALUE(ticketCorpPayPrice_, ticketCorpPayPrice) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPersonPayPrice Field Functions 
    bool hasTicketPersonPayPrice() const { return this->ticketPersonPayPrice_ != nullptr;};
    void deleteTicketPersonPayPrice() { this->ticketPersonPayPrice_ = nullptr;};
    inline string ticketPersonPayPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPersonPayPrice_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTicketPersonPayPrice(string ticketPersonPayPrice) { DARABONBA_PTR_SET_VALUE(ticketPersonPayPrice_, ticketPersonPayPrice) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline double ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // tradeActionDesc Field Functions 
    bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
    void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
    inline string tradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    // trainType Field Functions 
    bool hasTrainType() const { return this->trainType_ != nullptr;};
    void deleteTrainType() { this->trainType_ = nullptr;};
    inline string trainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerJobNo Field Functions 
    bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
    void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
    inline string travelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


    // travelerMemberType Field Functions 
    bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
    void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
    inline string travelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


    // travelerMemberTypeName Field Functions 
    bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
    void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
    inline string travelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


    // voucherTypeDesc Field Functions 
    bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
    void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
    inline string voucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
    inline TrainBillSettlementQueryResponseBodyModuleDataList& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


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
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> arrStationLocation_ = nullptr;
    std::shared_ptr<string> arrStationLocationCode_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baseLocation_ = nullptr;
    std::shared_ptr<string> billRecordTime_ = nullptr;
    std::shared_ptr<string> bookTime_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerJobNo_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<string> businessTripResult_ = nullptr;
    std::shared_ptr<double> cabinMaxPrice_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> cascadeDepartment_ = nullptr;
    std::shared_ptr<string> categoryDesc_ = nullptr;
    std::shared_ptr<string> changeAffiliateNo_ = nullptr;
    std::shared_ptr<string> changeApplyId_ = nullptr;
    std::shared_ptr<double> changeFee_ = nullptr;
    std::shared_ptr<string> changeResult_ = nullptr;
    std::shared_ptr<string> coachNo_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> costDepartment_ = nullptr;
    std::shared_ptr<double> coupon_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
    std::shared_ptr<double> deductibleTax_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depStationLocation_ = nullptr;
    std::shared_ptr<string> depStationLocationCode_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> deptDate_ = nullptr;
    std::shared_ptr<string> deptStation_ = nullptr;
    std::shared_ptr<string> deptTime_ = nullptr;
    std::shared_ptr<string> exceedReason_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> feeTypeDesc_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> isTransferOrder_ = nullptr;
    std::shared_ptr<string> longTicketNo_ = nullptr;
    std::shared_ptr<string> mappingCompanyCode_ = nullptr;
    std::shared_ptr<string> maxCabin_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<double> orderPrice_ = nullptr;
    std::shared_ptr<string> orderTicketNo_ = nullptr;
    std::shared_ptr<string> overApplyId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<double> printTicketPrice_ = nullptr;
    std::shared_ptr<string> processorOaCode_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> refundAffiliateNo_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
    std::shared_ptr<double> refundFee_ = nullptr;
    std::shared_ptr<string> refundReason_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> reserveMode_ = nullptr;
    std::shared_ptr<string> runTime_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> seatNo_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<string> settleTypeDesc_ = nullptr;
    std::shared_ptr<double> settlementFee_ = nullptr;
    std::shared_ptr<double> settlementGrantFee_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
    std::shared_ptr<string> shortTicketNo_ = nullptr;
    std::shared_ptr<double> speedPackageFee_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    // 税率
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> thirdItineraryId_ = nullptr;
    std::shared_ptr<string> ticketCorpPayPrice_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> ticketPersonPayPrice_ = nullptr;
    std::shared_ptr<double> ticketPrice_ = nullptr;
    std::shared_ptr<string> tradeActionDesc_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
    std::shared_ptr<string> trainType_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<string> travelerJobNo_ = nullptr;
    std::shared_ptr<string> travelerMemberType_ = nullptr;
    std::shared_ptr<string> travelerMemberTypeName_ = nullptr;
    std::shared_ptr<string> travelerName_ = nullptr;
    std::shared_ptr<int32_t> voucherType_ = nullptr;
    std::shared_ptr<string> voucherTypeDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
