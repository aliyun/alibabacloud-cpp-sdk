// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
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
  class TrainBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainBillSettlementQueryResponseBody() = default ;
    TrainBillSettlementQueryResponseBody(const TrainBillSettlementQueryResponseBody &) = default ;
    TrainBillSettlementQueryResponseBody(TrainBillSettlementQueryResponseBody &&) = default ;
    TrainBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainBillSettlementQueryResponseBody() = default ;
    TrainBillSettlementQueryResponseBody& operator=(const TrainBillSettlementQueryResponseBody &) = default ;
    TrainBillSettlementQueryResponseBody& operator=(TrainBillSettlementQueryResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(is_transfer_order, isTransferOrder_);
          DARABONBA_PTR_TO_JSON(location, location_);
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
          DARABONBA_PTR_TO_JSON(sio, sio_);
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
          DARABONBA_PTR_TO_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_TO_JSON(verify_failed_reason, verifyFailedReason_);
          DARABONBA_PTR_TO_JSON(verify_status, verifyStatus_);
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
          DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(is_transfer_order, isTransferOrder_);
          DARABONBA_PTR_FROM_JSON(location, location_);
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
          DARABONBA_PTR_FROM_JSON(sio, sio_);
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
          DARABONBA_PTR_FROM_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_FROM_JSON(verify_failed_reason, verifyFailedReason_);
          DARABONBA_PTR_FROM_JSON(verify_status, verifyStatus_);
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
        && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrDate_ == nullptr && this->arrStation_ == nullptr && this->arrStationLocation_ == nullptr
        && this->arrStationLocationCode_ == nullptr && this->arrTime_ == nullptr && this->baseLocation_ == nullptr && this->billRecordTime_ == nullptr && this->bookTime_ == nullptr
        && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr && this->bookerName_ == nullptr && this->businessTripResult_ == nullptr && this->cabinMaxPrice_ == nullptr
        && this->capitalDirection_ == nullptr && this->cascadeDepartment_ == nullptr && this->categoryDesc_ == nullptr && this->changeAffiliateNo_ == nullptr && this->changeApplyId_ == nullptr
        && this->changeFee_ == nullptr && this->changeResult_ == nullptr && this->coachNo_ == nullptr && this->costCenter_ == nullptr && this->costCenterNumber_ == nullptr
        && this->costDepartment_ == nullptr && this->coupon_ == nullptr && this->customContent_ == nullptr && this->deductibleTax_ == nullptr && this->depCityCode_ == nullptr
        && this->depCityName_ == nullptr && this->depStationLocation_ == nullptr && this->depStationLocationCode_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr
        && this->deptDate_ == nullptr && this->deptStation_ == nullptr && this->deptTime_ == nullptr && this->exceedReason_ == nullptr && this->feeType_ == nullptr
        && this->feeTypeDesc_ == nullptr && this->foreignersTag_ == nullptr && this->index_ == nullptr && this->invoiceTitle_ == nullptr && this->isTransferOrder_ == nullptr
        && this->location_ == nullptr && this->longTicketNo_ == nullptr && this->mappingCompanyCode_ == nullptr && this->maxCabin_ == nullptr && this->orderId_ == nullptr
        && this->orderPrice_ == nullptr && this->orderTicketNo_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->position_ == nullptr && this->positionLevel_ == nullptr && this->primaryId_ == nullptr && this->printTicketPrice_ == nullptr && this->processorOaCode_ == nullptr
        && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->refundAffiliateNo_ == nullptr && this->refundApplyId_ == nullptr && this->refundFee_ == nullptr
        && this->refundReason_ == nullptr && this->remark_ == nullptr && this->reserveMode_ == nullptr && this->runTime_ == nullptr && this->sceneId_ == nullptr
        && this->sceneName_ == nullptr && this->seatNo_ == nullptr && this->seatType_ == nullptr && this->serviceFee_ == nullptr && this->settleTypeDesc_ == nullptr
        && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr && this->settlementTime_ == nullptr && this->settlementType_ == nullptr && this->shortTicketNo_ == nullptr
        && this->sio_ == nullptr && this->speedPackageFee_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->taxRate_ == nullptr
        && this->thirdItineraryId_ == nullptr && this->ticketCorpPayPrice_ == nullptr && this->ticketNo_ == nullptr && this->ticketPersonPayPrice_ == nullptr && this->ticketPrice_ == nullptr
        && this->tradeActionDesc_ == nullptr && this->trainNo_ == nullptr && this->trainType_ == nullptr && this->travelerEmail_ == nullptr && this->travelerId_ == nullptr
        && this->travelerJobNo_ == nullptr && this->travelerMemberType_ == nullptr && this->travelerMemberTypeName_ == nullptr && this->travelerName_ == nullptr && this->verifyFailedReason_ == nullptr
        && this->verifyStatus_ == nullptr && this->voucherType_ == nullptr && this->voucherTypeDesc_ == nullptr; };
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


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline DataList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline DataList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline DataList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // arrStation Field Functions 
        bool hasArrStation() const { return this->arrStation_ != nullptr;};
        void deleteArrStation() { this->arrStation_ = nullptr;};
        inline string getArrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
        inline DataList& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


        // arrStationLocation Field Functions 
        bool hasArrStationLocation() const { return this->arrStationLocation_ != nullptr;};
        void deleteArrStationLocation() { this->arrStationLocation_ = nullptr;};
        inline string getArrStationLocation() const { DARABONBA_PTR_GET_DEFAULT(arrStationLocation_, "") };
        inline DataList& setArrStationLocation(string arrStationLocation) { DARABONBA_PTR_SET_VALUE(arrStationLocation_, arrStationLocation) };


        // arrStationLocationCode Field Functions 
        bool hasArrStationLocationCode() const { return this->arrStationLocationCode_ != nullptr;};
        void deleteArrStationLocationCode() { this->arrStationLocationCode_ = nullptr;};
        inline string getArrStationLocationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationLocationCode_, "") };
        inline DataList& setArrStationLocationCode(string arrStationLocationCode) { DARABONBA_PTR_SET_VALUE(arrStationLocationCode_, arrStationLocationCode) };


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


        // businessTripResult Field Functions 
        bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
        void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
        inline string getBusinessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
        inline DataList& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


        // cabinMaxPrice Field Functions 
        bool hasCabinMaxPrice() const { return this->cabinMaxPrice_ != nullptr;};
        void deleteCabinMaxPrice() { this->cabinMaxPrice_ = nullptr;};
        inline double getCabinMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(cabinMaxPrice_, 0.0) };
        inline DataList& setCabinMaxPrice(double cabinMaxPrice) { DARABONBA_PTR_SET_VALUE(cabinMaxPrice_, cabinMaxPrice) };


        // capitalDirection Field Functions 
        bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
        void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
        inline string getCapitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
        inline DataList& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


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


        // changeAffiliateNo Field Functions 
        bool hasChangeAffiliateNo() const { return this->changeAffiliateNo_ != nullptr;};
        void deleteChangeAffiliateNo() { this->changeAffiliateNo_ = nullptr;};
        inline string getChangeAffiliateNo() const { DARABONBA_PTR_GET_DEFAULT(changeAffiliateNo_, "") };
        inline DataList& setChangeAffiliateNo(string changeAffiliateNo) { DARABONBA_PTR_SET_VALUE(changeAffiliateNo_, changeAffiliateNo) };


        // changeApplyId Field Functions 
        bool hasChangeApplyId() const { return this->changeApplyId_ != nullptr;};
        void deleteChangeApplyId() { this->changeApplyId_ = nullptr;};
        inline string getChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(changeApplyId_, "") };
        inline DataList& setChangeApplyId(string changeApplyId) { DARABONBA_PTR_SET_VALUE(changeApplyId_, changeApplyId) };


        // changeFee Field Functions 
        bool hasChangeFee() const { return this->changeFee_ != nullptr;};
        void deleteChangeFee() { this->changeFee_ = nullptr;};
        inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
        inline DataList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


        // changeResult Field Functions 
        bool hasChangeResult() const { return this->changeResult_ != nullptr;};
        void deleteChangeResult() { this->changeResult_ = nullptr;};
        inline string getChangeResult() const { DARABONBA_PTR_GET_DEFAULT(changeResult_, "") };
        inline DataList& setChangeResult(string changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };


        // coachNo Field Functions 
        bool hasCoachNo() const { return this->coachNo_ != nullptr;};
        void deleteCoachNo() { this->coachNo_ = nullptr;};
        inline string getCoachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
        inline DataList& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


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


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline DataList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depStationLocation Field Functions 
        bool hasDepStationLocation() const { return this->depStationLocation_ != nullptr;};
        void deleteDepStationLocation() { this->depStationLocation_ = nullptr;};
        inline string getDepStationLocation() const { DARABONBA_PTR_GET_DEFAULT(depStationLocation_, "") };
        inline DataList& setDepStationLocation(string depStationLocation) { DARABONBA_PTR_SET_VALUE(depStationLocation_, depStationLocation) };


        // depStationLocationCode Field Functions 
        bool hasDepStationLocationCode() const { return this->depStationLocationCode_ != nullptr;};
        void deleteDepStationLocationCode() { this->depStationLocationCode_ = nullptr;};
        inline string getDepStationLocationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationLocationCode_, "") };
        inline DataList& setDepStationLocationCode(string depStationLocationCode) { DARABONBA_PTR_SET_VALUE(depStationLocationCode_, depStationLocationCode) };


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


        // deptDate Field Functions 
        bool hasDeptDate() const { return this->deptDate_ != nullptr;};
        void deleteDeptDate() { this->deptDate_ = nullptr;};
        inline string getDeptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
        inline DataList& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


        // deptStation Field Functions 
        bool hasDeptStation() const { return this->deptStation_ != nullptr;};
        void deleteDeptStation() { this->deptStation_ = nullptr;};
        inline string getDeptStation() const { DARABONBA_PTR_GET_DEFAULT(deptStation_, "") };
        inline DataList& setDeptStation(string deptStation) { DARABONBA_PTR_SET_VALUE(deptStation_, deptStation) };


        // deptTime Field Functions 
        bool hasDeptTime() const { return this->deptTime_ != nullptr;};
        void deleteDeptTime() { this->deptTime_ = nullptr;};
        inline string getDeptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
        inline DataList& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


        // exceedReason Field Functions 
        bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
        void deleteExceedReason() { this->exceedReason_ = nullptr;};
        inline string getExceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
        inline DataList& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


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


        // isTransferOrder Field Functions 
        bool hasIsTransferOrder() const { return this->isTransferOrder_ != nullptr;};
        void deleteIsTransferOrder() { this->isTransferOrder_ = nullptr;};
        inline string getIsTransferOrder() const { DARABONBA_PTR_GET_DEFAULT(isTransferOrder_, "") };
        inline DataList& setIsTransferOrder(string isTransferOrder) { DARABONBA_PTR_SET_VALUE(isTransferOrder_, isTransferOrder) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline DataList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // longTicketNo Field Functions 
        bool hasLongTicketNo() const { return this->longTicketNo_ != nullptr;};
        void deleteLongTicketNo() { this->longTicketNo_ = nullptr;};
        inline string getLongTicketNo() const { DARABONBA_PTR_GET_DEFAULT(longTicketNo_, "") };
        inline DataList& setLongTicketNo(string longTicketNo) { DARABONBA_PTR_SET_VALUE(longTicketNo_, longTicketNo) };


        // mappingCompanyCode Field Functions 
        bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
        void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
        inline string getMappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
        inline DataList& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


        // maxCabin Field Functions 
        bool hasMaxCabin() const { return this->maxCabin_ != nullptr;};
        void deleteMaxCabin() { this->maxCabin_ = nullptr;};
        inline string getMaxCabin() const { DARABONBA_PTR_GET_DEFAULT(maxCabin_, "") };
        inline DataList& setMaxCabin(string maxCabin) { DARABONBA_PTR_SET_VALUE(maxCabin_, maxCabin) };


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


        // orderTicketNo Field Functions 
        bool hasOrderTicketNo() const { return this->orderTicketNo_ != nullptr;};
        void deleteOrderTicketNo() { this->orderTicketNo_ = nullptr;};
        inline string getOrderTicketNo() const { DARABONBA_PTR_GET_DEFAULT(orderTicketNo_, "") };
        inline DataList& setOrderTicketNo(string orderTicketNo) { DARABONBA_PTR_SET_VALUE(orderTicketNo_, orderTicketNo) };


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


        // printTicketPrice Field Functions 
        bool hasPrintTicketPrice() const { return this->printTicketPrice_ != nullptr;};
        void deletePrintTicketPrice() { this->printTicketPrice_ = nullptr;};
        inline double getPrintTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(printTicketPrice_, 0.0) };
        inline DataList& setPrintTicketPrice(double printTicketPrice) { DARABONBA_PTR_SET_VALUE(printTicketPrice_, printTicketPrice) };


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


        // refundAffiliateNo Field Functions 
        bool hasRefundAffiliateNo() const { return this->refundAffiliateNo_ != nullptr;};
        void deleteRefundAffiliateNo() { this->refundAffiliateNo_ = nullptr;};
        inline string getRefundAffiliateNo() const { DARABONBA_PTR_GET_DEFAULT(refundAffiliateNo_, "") };
        inline DataList& setRefundAffiliateNo(string refundAffiliateNo) { DARABONBA_PTR_SET_VALUE(refundAffiliateNo_, refundAffiliateNo) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline string getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
        inline DataList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
        inline DataList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // refundReason Field Functions 
        bool hasRefundReason() const { return this->refundReason_ != nullptr;};
        void deleteRefundReason() { this->refundReason_ = nullptr;};
        inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
        inline DataList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline DataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // reserveMode Field Functions 
        bool hasReserveMode() const { return this->reserveMode_ != nullptr;};
        void deleteReserveMode() { this->reserveMode_ = nullptr;};
        inline string getReserveMode() const { DARABONBA_PTR_GET_DEFAULT(reserveMode_, "") };
        inline DataList& setReserveMode(string reserveMode) { DARABONBA_PTR_SET_VALUE(reserveMode_, reserveMode) };


        // runTime Field Functions 
        bool hasRunTime() const { return this->runTime_ != nullptr;};
        void deleteRunTime() { this->runTime_ = nullptr;};
        inline string getRunTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, "") };
        inline DataList& setRunTime(string runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


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


        // seatNo Field Functions 
        bool hasSeatNo() const { return this->seatNo_ != nullptr;};
        void deleteSeatNo() { this->seatNo_ = nullptr;};
        inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
        inline DataList& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


        // seatType Field Functions 
        bool hasSeatType() const { return this->seatType_ != nullptr;};
        void deleteSeatType() { this->seatType_ = nullptr;};
        inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
        inline DataList& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


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


        // shortTicketNo Field Functions 
        bool hasShortTicketNo() const { return this->shortTicketNo_ != nullptr;};
        void deleteShortTicketNo() { this->shortTicketNo_ = nullptr;};
        inline string getShortTicketNo() const { DARABONBA_PTR_GET_DEFAULT(shortTicketNo_, "") };
        inline DataList& setShortTicketNo(string shortTicketNo) { DARABONBA_PTR_SET_VALUE(shortTicketNo_, shortTicketNo) };


        // sio Field Functions 
        bool hasSio() const { return this->sio_ != nullptr;};
        void deleteSio() { this->sio_ = nullptr;};
        inline string getSio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
        inline DataList& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


        // speedPackageFee Field Functions 
        bool hasSpeedPackageFee() const { return this->speedPackageFee_ != nullptr;};
        void deleteSpeedPackageFee() { this->speedPackageFee_ = nullptr;};
        inline double getSpeedPackageFee() const { DARABONBA_PTR_GET_DEFAULT(speedPackageFee_, 0.0) };
        inline DataList& setSpeedPackageFee(double speedPackageFee) { DARABONBA_PTR_SET_VALUE(speedPackageFee_, speedPackageFee) };


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


        // ticketCorpPayPrice Field Functions 
        bool hasTicketCorpPayPrice() const { return this->ticketCorpPayPrice_ != nullptr;};
        void deleteTicketCorpPayPrice() { this->ticketCorpPayPrice_ = nullptr;};
        inline string getTicketCorpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketCorpPayPrice_, "") };
        inline DataList& setTicketCorpPayPrice(string ticketCorpPayPrice) { DARABONBA_PTR_SET_VALUE(ticketCorpPayPrice_, ticketCorpPayPrice) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline DataList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketPersonPayPrice Field Functions 
        bool hasTicketPersonPayPrice() const { return this->ticketPersonPayPrice_ != nullptr;};
        void deleteTicketPersonPayPrice() { this->ticketPersonPayPrice_ = nullptr;};
        inline string getTicketPersonPayPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPersonPayPrice_, "") };
        inline DataList& setTicketPersonPayPrice(string ticketPersonPayPrice) { DARABONBA_PTR_SET_VALUE(ticketPersonPayPrice_, ticketPersonPayPrice) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline double getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
        inline DataList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // tradeActionDesc Field Functions 
        bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
        void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
        inline string getTradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
        inline DataList& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline DataList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        // trainType Field Functions 
        bool hasTrainType() const { return this->trainType_ != nullptr;};
        void deleteTrainType() { this->trainType_ = nullptr;};
        inline string getTrainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
        inline DataList& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


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


        // verifyFailedReason Field Functions 
        bool hasVerifyFailedReason() const { return this->verifyFailedReason_ != nullptr;};
        void deleteVerifyFailedReason() { this->verifyFailedReason_ = nullptr;};
        inline string getVerifyFailedReason() const { DARABONBA_PTR_GET_DEFAULT(verifyFailedReason_, "") };
        inline DataList& setVerifyFailedReason(string verifyFailedReason) { DARABONBA_PTR_SET_VALUE(verifyFailedReason_, verifyFailedReason) };


        // verifyStatus Field Functions 
        bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
        void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
        inline int32_t getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, 0) };
        inline DataList& setVerifyStatus(int32_t verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


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
        // 审批扩展自定义字段
        shared_ptr<string> applyExtendField_ {};
        shared_ptr<string> applyId_ {};
        shared_ptr<string> approverEmail_ {};
        shared_ptr<string> approverId_ {};
        shared_ptr<string> approverName_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> arrStation_ {};
        shared_ptr<string> arrStationLocation_ {};
        shared_ptr<string> arrStationLocationCode_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> baseLocation_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<string> businessTripResult_ {};
        shared_ptr<double> cabinMaxPrice_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<string> changeAffiliateNo_ {};
        shared_ptr<string> changeApplyId_ {};
        shared_ptr<double> changeFee_ {};
        shared_ptr<string> changeResult_ {};
        shared_ptr<string> coachNo_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<double> coupon_ {};
        shared_ptr<string> customContent_ {};
        shared_ptr<double> deductibleTax_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depStationLocation_ {};
        shared_ptr<string> depStationLocationCode_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> deptDate_ {};
        shared_ptr<string> deptStation_ {};
        shared_ptr<string> deptTime_ {};
        shared_ptr<string> exceedReason_ {};
        shared_ptr<string> feeType_ {};
        shared_ptr<string> feeTypeDesc_ {};
        shared_ptr<string> foreignersTag_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> isTransferOrder_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> longTicketNo_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<string> maxCabin_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<double> orderPrice_ {};
        shared_ptr<string> orderTicketNo_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> positionLevel_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<double> printTicketPrice_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> refundAffiliateNo_ {};
        shared_ptr<string> refundApplyId_ {};
        shared_ptr<double> refundFee_ {};
        shared_ptr<string> refundReason_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> reserveMode_ {};
        shared_ptr<string> runTime_ {};
        shared_ptr<string> sceneId_ {};
        shared_ptr<string> sceneName_ {};
        shared_ptr<string> seatNo_ {};
        shared_ptr<string> seatType_ {};
        shared_ptr<double> serviceFee_ {};
        shared_ptr<string> settleTypeDesc_ {};
        shared_ptr<double> settlementFee_ {};
        shared_ptr<double> settlementGrantFee_ {};
        shared_ptr<string> settlementTime_ {};
        shared_ptr<string> settlementType_ {};
        shared_ptr<string> shortTicketNo_ {};
        shared_ptr<string> sio_ {};
        shared_ptr<double> speedPackageFee_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        // 税率
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> thirdItineraryId_ {};
        shared_ptr<string> ticketCorpPayPrice_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> ticketPersonPayPrice_ {};
        shared_ptr<double> ticketPrice_ {};
        shared_ptr<string> tradeActionDesc_ {};
        shared_ptr<string> trainNo_ {};
        shared_ptr<string> trainType_ {};
        shared_ptr<string> travelerEmail_ {};
        shared_ptr<string> travelerId_ {};
        shared_ptr<string> travelerJobNo_ {};
        shared_ptr<string> travelerMemberType_ {};
        shared_ptr<string> travelerMemberTypeName_ {};
        shared_ptr<string> travelerName_ {};
        shared_ptr<string> verifyFailedReason_ {};
        shared_ptr<int32_t> verifyStatus_ {};
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
    inline TrainBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainBillSettlementQueryResponseBody::Module) };
    inline TrainBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainBillSettlementQueryResponseBody::Module) };
    inline TrainBillSettlementQueryResponseBody& setModule(const TrainBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainBillSettlementQueryResponseBody& setModule(TrainBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
