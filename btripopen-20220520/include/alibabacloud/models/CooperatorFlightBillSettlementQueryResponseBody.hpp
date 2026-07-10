// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
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
  class CooperatorFlightBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorFlightBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CooperatorFlightBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CooperatorFlightBillSettlementQueryResponseBody() = default ;
    CooperatorFlightBillSettlementQueryResponseBody(const CooperatorFlightBillSettlementQueryResponseBody &) = default ;
    CooperatorFlightBillSettlementQueryResponseBody(CooperatorFlightBillSettlementQueryResponseBody &&) = default ;
    CooperatorFlightBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorFlightBillSettlementQueryResponseBody() = default ;
    CooperatorFlightBillSettlementQueryResponseBody& operator=(const CooperatorFlightBillSettlementQueryResponseBody &) = default ;
    CooperatorFlightBillSettlementQueryResponseBody& operator=(CooperatorFlightBillSettlementQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(period_end, periodEnd_);
        DARABONBA_PTR_TO_JSON(period_start, periodStart_);
        DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_TO_JSON(total_size, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(period_end, periodEnd_);
        DARABONBA_PTR_FROM_JSON(period_start, periodStart_);
        DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(adjust_time, adjustTime_);
          DARABONBA_PTR_TO_JSON(advance_day, advanceDay_);
          DARABONBA_PTR_TO_JSON(airline_corp_code, airlineCorpCode_);
          DARABONBA_PTR_TO_JSON(airline_corp_name, airlineCorpName_);
          DARABONBA_PTR_TO_JSON(alipay_id, alipayId_);
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
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(base_location, baseLocation_);
          DARABONBA_PTR_TO_JSON(before_ticket_no, beforeTicketNo_);
          DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_TO_JSON(book_channel, bookChannel_);
          DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
          DARABONBA_PTR_TO_JSON(book_time, bookTime_);
          DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
          DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
          DARABONBA_PTR_TO_JSON(btrip_coupon_fee, btripCouponFee_);
          DARABONBA_PTR_TO_JSON(build_fee, buildFee_);
          DARABONBA_PTR_TO_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_code, cabinClassCode_);
          DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
          DARABONBA_PTR_TO_JSON(change_result, changeResult_);
          DARABONBA_PTR_TO_JSON(cooperator_bill_code, cooperatorBillCode_);
          DARABONBA_PTR_TO_JSON(cooperator_name, cooperatorName_);
          DARABONBA_PTR_TO_JSON(cooperator_order_id, cooperatorOrderId_);
          DARABONBA_PTR_TO_JSON(corp_pay_order_fee, corpPayOrderFee_);
          DARABONBA_PTR_TO_JSON(corp_settle_price, corpSettlePrice_);
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_TO_JSON(coupon, coupon_);
          DARABONBA_PTR_TO_JSON(custom_content, customContent_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(department_id, departmentId_);
          DARABONBA_PTR_TO_JSON(dept_city, deptCity_);
          DARABONBA_PTR_TO_JSON(dept_date, deptDate_);
          DARABONBA_PTR_TO_JSON(dept_station, deptStation_);
          DARABONBA_PTR_TO_JSON(dept_time, deptTime_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
          DARABONBA_PTR_TO_JSON(fee_type, feeType_);
          DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_trip_type, flightTripType_);
          DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
          DARABONBA_PTR_TO_JSON(insurance_fee, insuranceFee_);
          DARABONBA_PTR_TO_JSON(insurance_number, insuranceNumber_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(item_type, itemType_);
          DARABONBA_PTR_TO_JSON(itinerary_num, itineraryNum_);
          DARABONBA_PTR_TO_JSON(itinerary_price, itineraryPrice_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_TO_JSON(mileage, mileage_);
          DARABONBA_PTR_TO_JSON(most_difference_dept_time, mostDifferenceDeptTime_);
          DARABONBA_PTR_TO_JSON(most_difference_discount, mostDifferenceDiscount_);
          DARABONBA_PTR_TO_JSON(most_difference_flight_no, mostDifferenceFlightNo_);
          DARABONBA_PTR_TO_JSON(most_difference_price, mostDifferencePrice_);
          DARABONBA_PTR_TO_JSON(most_difference_reason, mostDifferenceReason_);
          DARABONBA_PTR_TO_JSON(most_price, mostPrice_);
          DARABONBA_PTR_TO_JSON(negotiation_coupon_fee, negotiationCouponFee_);
          DARABONBA_PTR_TO_JSON(oil_fee, oilFee_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(order_ticket_no, orderTicketNo_);
          DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(person_settle_price, personSettlePrice_);
          DARABONBA_PTR_TO_JSON(position, position_);
          DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
          DARABONBA_PTR_TO_JSON(pre_book_tip, preBookTip_);
          DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
          DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_name, projectName_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_TO_JSON(refund_result, refundResult_);
          DARABONBA_PTR_TO_JSON(refund_upgrade_cost, refundUpgradeCost_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
          DARABONBA_PTR_TO_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_TO_JSON(seal_price, sealPrice_);
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_TO_JSON(sio, sio_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_TO_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_TO_JSON(ticket_id, ticketId_);
          DARABONBA_PTR_TO_JSON(trade, trade_);
          DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_TO_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_TO_JSON(upgrade_cost, upgradeCost_);
          DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
          DARABONBA_PTR_TO_JSON(voyage_name, voyageName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
          DARABONBA_PTR_FROM_JSON(advance_day, advanceDay_);
          DARABONBA_PTR_FROM_JSON(airline_corp_code, airlineCorpCode_);
          DARABONBA_PTR_FROM_JSON(airline_corp_name, airlineCorpName_);
          DARABONBA_PTR_FROM_JSON(alipay_id, alipayId_);
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
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(base_location, baseLocation_);
          DARABONBA_PTR_FROM_JSON(before_ticket_no, beforeTicketNo_);
          DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_FROM_JSON(book_channel, bookChannel_);
          DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
          DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
          DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
          DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
          DARABONBA_PTR_FROM_JSON(btrip_coupon_fee, btripCouponFee_);
          DARABONBA_PTR_FROM_JSON(build_fee, buildFee_);
          DARABONBA_PTR_FROM_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_code, cabinClassCode_);
          DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
          DARABONBA_PTR_FROM_JSON(change_result, changeResult_);
          DARABONBA_PTR_FROM_JSON(cooperator_bill_code, cooperatorBillCode_);
          DARABONBA_PTR_FROM_JSON(cooperator_name, cooperatorName_);
          DARABONBA_PTR_FROM_JSON(cooperator_order_id, cooperatorOrderId_);
          DARABONBA_PTR_FROM_JSON(corp_pay_order_fee, corpPayOrderFee_);
          DARABONBA_PTR_FROM_JSON(corp_settle_price, corpSettlePrice_);
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_FROM_JSON(coupon, coupon_);
          DARABONBA_PTR_FROM_JSON(custom_content, customContent_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
          DARABONBA_PTR_FROM_JSON(dept_city, deptCity_);
          DARABONBA_PTR_FROM_JSON(dept_date, deptDate_);
          DARABONBA_PTR_FROM_JSON(dept_station, deptStation_);
          DARABONBA_PTR_FROM_JSON(dept_time, deptTime_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
          DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
          DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_trip_type, flightTripType_);
          DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
          DARABONBA_PTR_FROM_JSON(insurance_fee, insuranceFee_);
          DARABONBA_PTR_FROM_JSON(insurance_number, insuranceNumber_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(item_type, itemType_);
          DARABONBA_PTR_FROM_JSON(itinerary_num, itineraryNum_);
          DARABONBA_PTR_FROM_JSON(itinerary_price, itineraryPrice_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_FROM_JSON(mileage, mileage_);
          DARABONBA_PTR_FROM_JSON(most_difference_dept_time, mostDifferenceDeptTime_);
          DARABONBA_PTR_FROM_JSON(most_difference_discount, mostDifferenceDiscount_);
          DARABONBA_PTR_FROM_JSON(most_difference_flight_no, mostDifferenceFlightNo_);
          DARABONBA_PTR_FROM_JSON(most_difference_price, mostDifferencePrice_);
          DARABONBA_PTR_FROM_JSON(most_difference_reason, mostDifferenceReason_);
          DARABONBA_PTR_FROM_JSON(most_price, mostPrice_);
          DARABONBA_PTR_FROM_JSON(negotiation_coupon_fee, negotiationCouponFee_);
          DARABONBA_PTR_FROM_JSON(oil_fee, oilFee_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(order_ticket_no, orderTicketNo_);
          DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(person_settle_price, personSettlePrice_);
          DARABONBA_PTR_FROM_JSON(position, position_);
          DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
          DARABONBA_PTR_FROM_JSON(pre_book_tip, preBookTip_);
          DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
          DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_name, projectName_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_FROM_JSON(refund_result, refundResult_);
          DARABONBA_PTR_FROM_JSON(refund_upgrade_cost, refundUpgradeCost_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
          DARABONBA_PTR_FROM_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_FROM_JSON(seal_price, sealPrice_);
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_FROM_JSON(sio, sio_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_FROM_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_FROM_JSON(ticket_id, ticketId_);
          DARABONBA_PTR_FROM_JSON(trade, trade_);
          DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_FROM_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_FROM_JSON(upgrade_cost, upgradeCost_);
          DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
          DARABONBA_PTR_FROM_JSON(voyage_name, voyageName_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustTime_ == nullptr
        && this->advanceDay_ == nullptr && this->airlineCorpCode_ == nullptr && this->airlineCorpName_ == nullptr && this->alipayId_ == nullptr && this->alipayTradeNo_ == nullptr
        && this->applyArrCityCode_ == nullptr && this->applyArrCityName_ == nullptr && this->applyDepCityCode_ == nullptr && this->applyDepCityName_ == nullptr && this->applyExtendField_ == nullptr
        && this->applyId_ == nullptr && this->approverEmail_ == nullptr && this->approverId_ == nullptr && this->approverName_ == nullptr && this->arrAirportCode_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->arrDate_ == nullptr && this->arrStation_ == nullptr && this->arrTime_ == nullptr
        && this->baseLocation_ == nullptr && this->beforeTicketNo_ == nullptr && this->billRecordTime_ == nullptr && this->bookChannel_ == nullptr && this->bookMode_ == nullptr
        && this->bookTime_ == nullptr && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr && this->bookerName_ == nullptr && this->btripCouponFee_ == nullptr
        && this->buildFee_ == nullptr && this->businessTripResult_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassCode_ == nullptr
        && this->capitalDirection_ == nullptr && this->cascadeDepartment_ == nullptr && this->categoryDesc_ == nullptr && this->changeFee_ == nullptr && this->changeResult_ == nullptr
        && this->cooperatorBillCode_ == nullptr && this->cooperatorName_ == nullptr && this->cooperatorOrderId_ == nullptr && this->corpPayOrderFee_ == nullptr && this->corpSettlePrice_ == nullptr
        && this->costCenter_ == nullptr && this->costCenterNumber_ == nullptr && this->costDepartment_ == nullptr && this->coupon_ == nullptr && this->customContent_ == nullptr
        && this->depAirportCode_ == nullptr && this->depCityCode_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr && this->deptCity_ == nullptr
        && this->deptDate_ == nullptr && this->deptStation_ == nullptr && this->deptTime_ == nullptr && this->discount_ == nullptr && this->exceedReason_ == nullptr
        && this->feeType_ == nullptr && this->feeTypeDesc_ == nullptr && this->flightNo_ == nullptr && this->flightTripType_ == nullptr && this->foreignersTag_ == nullptr
        && this->index_ == nullptr && this->insOrderId_ == nullptr && this->insuranceFee_ == nullptr && this->insuranceNumber_ == nullptr && this->invoiceTitle_ == nullptr
        && this->itemType_ == nullptr && this->itineraryNum_ == nullptr && this->itineraryPrice_ == nullptr && this->location_ == nullptr && this->mappingCompanyCode_ == nullptr
        && this->mileage_ == nullptr && this->mostDifferenceDeptTime_ == nullptr && this->mostDifferenceDiscount_ == nullptr && this->mostDifferenceFlightNo_ == nullptr && this->mostDifferencePrice_ == nullptr
        && this->mostDifferenceReason_ == nullptr && this->mostPrice_ == nullptr && this->negotiationCouponFee_ == nullptr && this->oilFee_ == nullptr && this->orderId_ == nullptr
        && this->orderStatusDesc_ == nullptr && this->orderTicketNo_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->personSettlePrice_ == nullptr && this->position_ == nullptr && this->positionLevel_ == nullptr && this->preBookTip_ == nullptr && this->primaryId_ == nullptr
        && this->processorOaCode_ == nullptr && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->refundFee_ == nullptr && this->refundResult_ == nullptr
        && this->refundUpgradeCost_ == nullptr && this->remark_ == nullptr && this->repeatRefund_ == nullptr && this->sealPrice_ == nullptr && this->segmentList_ == nullptr
        && this->serviceFee_ == nullptr && this->settleTypeDesc_ == nullptr && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr && this->settlementTime_ == nullptr
        && this->settlementType_ == nullptr && this->sio_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->subOrderId_ == nullptr
        && this->taxRate_ == nullptr && this->thirdInvoiceId_ == nullptr && this->thirdItineraryId_ == nullptr && this->ticketId_ == nullptr && this->trade_ == nullptr
        && this->tradeActionDesc_ == nullptr && this->travelerEmail_ == nullptr && this->travelerId_ == nullptr && this->travelerJobNo_ == nullptr && this->travelerMemberType_ == nullptr
        && this->travelerMemberTypeName_ == nullptr && this->travelerName_ == nullptr && this->upgradeCost_ == nullptr && this->voucherType_ == nullptr && this->voucherTypeDesc_ == nullptr
        && this->voyageName_ == nullptr; };
        // adjustTime Field Functions 
        bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
        void deleteAdjustTime() { this->adjustTime_ = nullptr;};
        inline string getAdjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
        inline Items& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


        // advanceDay Field Functions 
        bool hasAdvanceDay() const { return this->advanceDay_ != nullptr;};
        void deleteAdvanceDay() { this->advanceDay_ = nullptr;};
        inline int32_t getAdvanceDay() const { DARABONBA_PTR_GET_DEFAULT(advanceDay_, 0) };
        inline Items& setAdvanceDay(int32_t advanceDay) { DARABONBA_PTR_SET_VALUE(advanceDay_, advanceDay) };


        // airlineCorpCode Field Functions 
        bool hasAirlineCorpCode() const { return this->airlineCorpCode_ != nullptr;};
        void deleteAirlineCorpCode() { this->airlineCorpCode_ = nullptr;};
        inline string getAirlineCorpCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpCode_, "") };
        inline Items& setAirlineCorpCode(string airlineCorpCode) { DARABONBA_PTR_SET_VALUE(airlineCorpCode_, airlineCorpCode) };


        // airlineCorpName Field Functions 
        bool hasAirlineCorpName() const { return this->airlineCorpName_ != nullptr;};
        void deleteAirlineCorpName() { this->airlineCorpName_ = nullptr;};
        inline string getAirlineCorpName() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpName_, "") };
        inline Items& setAirlineCorpName(string airlineCorpName) { DARABONBA_PTR_SET_VALUE(airlineCorpName_, airlineCorpName) };


        // alipayId Field Functions 
        bool hasAlipayId() const { return this->alipayId_ != nullptr;};
        void deleteAlipayId() { this->alipayId_ = nullptr;};
        inline string getAlipayId() const { DARABONBA_PTR_GET_DEFAULT(alipayId_, "") };
        inline Items& setAlipayId(string alipayId) { DARABONBA_PTR_SET_VALUE(alipayId_, alipayId) };


        // alipayTradeNo Field Functions 
        bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
        void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
        inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
        inline Items& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


        // applyArrCityCode Field Functions 
        bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
        void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
        inline string getApplyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
        inline Items& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


        // applyArrCityName Field Functions 
        bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
        void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
        inline string getApplyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
        inline Items& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


        // applyDepCityCode Field Functions 
        bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
        void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
        inline string getApplyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
        inline Items& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


        // applyDepCityName Field Functions 
        bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
        void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
        inline string getApplyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
        inline Items& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


        // applyExtendField Field Functions 
        bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
        void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
        inline string getApplyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
        inline Items& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline Items& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // approverEmail Field Functions 
        bool hasApproverEmail() const { return this->approverEmail_ != nullptr;};
        void deleteApproverEmail() { this->approverEmail_ = nullptr;};
        inline string getApproverEmail() const { DARABONBA_PTR_GET_DEFAULT(approverEmail_, "") };
        inline Items& setApproverEmail(string approverEmail) { DARABONBA_PTR_SET_VALUE(approverEmail_, approverEmail) };


        // approverId Field Functions 
        bool hasApproverId() const { return this->approverId_ != nullptr;};
        void deleteApproverId() { this->approverId_ = nullptr;};
        inline string getApproverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
        inline Items& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


        // approverName Field Functions 
        bool hasApproverName() const { return this->approverName_ != nullptr;};
        void deleteApproverName() { this->approverName_ = nullptr;};
        inline string getApproverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
        inline Items& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline Items& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline Items& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline Items& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline Items& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // arrStation Field Functions 
        bool hasArrStation() const { return this->arrStation_ != nullptr;};
        void deleteArrStation() { this->arrStation_ = nullptr;};
        inline string getArrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
        inline Items& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline Items& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // baseLocation Field Functions 
        bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
        void deleteBaseLocation() { this->baseLocation_ = nullptr;};
        inline string getBaseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
        inline Items& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


        // beforeTicketNo Field Functions 
        bool hasBeforeTicketNo() const { return this->beforeTicketNo_ != nullptr;};
        void deleteBeforeTicketNo() { this->beforeTicketNo_ = nullptr;};
        inline string getBeforeTicketNo() const { DARABONBA_PTR_GET_DEFAULT(beforeTicketNo_, "") };
        inline Items& setBeforeTicketNo(string beforeTicketNo) { DARABONBA_PTR_SET_VALUE(beforeTicketNo_, beforeTicketNo) };


        // billRecordTime Field Functions 
        bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
        void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
        inline string getBillRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
        inline Items& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


        // bookChannel Field Functions 
        bool hasBookChannel() const { return this->bookChannel_ != nullptr;};
        void deleteBookChannel() { this->bookChannel_ = nullptr;};
        inline string getBookChannel() const { DARABONBA_PTR_GET_DEFAULT(bookChannel_, "") };
        inline Items& setBookChannel(string bookChannel) { DARABONBA_PTR_SET_VALUE(bookChannel_, bookChannel) };


        // bookMode Field Functions 
        bool hasBookMode() const { return this->bookMode_ != nullptr;};
        void deleteBookMode() { this->bookMode_ = nullptr;};
        inline string getBookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
        inline Items& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


        // bookTime Field Functions 
        bool hasBookTime() const { return this->bookTime_ != nullptr;};
        void deleteBookTime() { this->bookTime_ = nullptr;};
        inline string getBookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
        inline Items& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


        // bookerId Field Functions 
        bool hasBookerId() const { return this->bookerId_ != nullptr;};
        void deleteBookerId() { this->bookerId_ = nullptr;};
        inline string getBookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
        inline Items& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


        // bookerJobNo Field Functions 
        bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
        void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
        inline string getBookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
        inline Items& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


        // bookerName Field Functions 
        bool hasBookerName() const { return this->bookerName_ != nullptr;};
        void deleteBookerName() { this->bookerName_ = nullptr;};
        inline string getBookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
        inline Items& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


        // btripCouponFee Field Functions 
        bool hasBtripCouponFee() const { return this->btripCouponFee_ != nullptr;};
        void deleteBtripCouponFee() { this->btripCouponFee_ = nullptr;};
        inline double getBtripCouponFee() const { DARABONBA_PTR_GET_DEFAULT(btripCouponFee_, 0.0) };
        inline Items& setBtripCouponFee(double btripCouponFee) { DARABONBA_PTR_SET_VALUE(btripCouponFee_, btripCouponFee) };


        // buildFee Field Functions 
        bool hasBuildFee() const { return this->buildFee_ != nullptr;};
        void deleteBuildFee() { this->buildFee_ = nullptr;};
        inline double getBuildFee() const { DARABONBA_PTR_GET_DEFAULT(buildFee_, 0.0) };
        inline Items& setBuildFee(double buildFee) { DARABONBA_PTR_SET_VALUE(buildFee_, buildFee) };


        // businessTripResult Field Functions 
        bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
        void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
        inline string getBusinessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
        inline Items& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline Items& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline Items& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassCode Field Functions 
        bool hasCabinClassCode() const { return this->cabinClassCode_ != nullptr;};
        void deleteCabinClassCode() { this->cabinClassCode_ = nullptr;};
        inline string getCabinClassCode() const { DARABONBA_PTR_GET_DEFAULT(cabinClassCode_, "") };
        inline Items& setCabinClassCode(string cabinClassCode) { DARABONBA_PTR_SET_VALUE(cabinClassCode_, cabinClassCode) };


        // capitalDirection Field Functions 
        bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
        void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
        inline string getCapitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
        inline Items& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


        // cascadeDepartment Field Functions 
        bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
        void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
        inline string getCascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
        inline Items& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


        // categoryDesc Field Functions 
        bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
        void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
        inline string getCategoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
        inline Items& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


        // changeFee Field Functions 
        bool hasChangeFee() const { return this->changeFee_ != nullptr;};
        void deleteChangeFee() { this->changeFee_ = nullptr;};
        inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
        inline Items& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


        // changeResult Field Functions 
        bool hasChangeResult() const { return this->changeResult_ != nullptr;};
        void deleteChangeResult() { this->changeResult_ = nullptr;};
        inline string getChangeResult() const { DARABONBA_PTR_GET_DEFAULT(changeResult_, "") };
        inline Items& setChangeResult(string changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };


        // cooperatorBillCode Field Functions 
        bool hasCooperatorBillCode() const { return this->cooperatorBillCode_ != nullptr;};
        void deleteCooperatorBillCode() { this->cooperatorBillCode_ = nullptr;};
        inline string getCooperatorBillCode() const { DARABONBA_PTR_GET_DEFAULT(cooperatorBillCode_, "") };
        inline Items& setCooperatorBillCode(string cooperatorBillCode) { DARABONBA_PTR_SET_VALUE(cooperatorBillCode_, cooperatorBillCode) };


        // cooperatorName Field Functions 
        bool hasCooperatorName() const { return this->cooperatorName_ != nullptr;};
        void deleteCooperatorName() { this->cooperatorName_ = nullptr;};
        inline string getCooperatorName() const { DARABONBA_PTR_GET_DEFAULT(cooperatorName_, "") };
        inline Items& setCooperatorName(string cooperatorName) { DARABONBA_PTR_SET_VALUE(cooperatorName_, cooperatorName) };


        // cooperatorOrderId Field Functions 
        bool hasCooperatorOrderId() const { return this->cooperatorOrderId_ != nullptr;};
        void deleteCooperatorOrderId() { this->cooperatorOrderId_ = nullptr;};
        inline string getCooperatorOrderId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorOrderId_, "") };
        inline Items& setCooperatorOrderId(string cooperatorOrderId) { DARABONBA_PTR_SET_VALUE(cooperatorOrderId_, cooperatorOrderId) };


        // corpPayOrderFee Field Functions 
        bool hasCorpPayOrderFee() const { return this->corpPayOrderFee_ != nullptr;};
        void deleteCorpPayOrderFee() { this->corpPayOrderFee_ = nullptr;};
        inline double getCorpPayOrderFee() const { DARABONBA_PTR_GET_DEFAULT(corpPayOrderFee_, 0.0) };
        inline Items& setCorpPayOrderFee(double corpPayOrderFee) { DARABONBA_PTR_SET_VALUE(corpPayOrderFee_, corpPayOrderFee) };


        // corpSettlePrice Field Functions 
        bool hasCorpSettlePrice() const { return this->corpSettlePrice_ != nullptr;};
        void deleteCorpSettlePrice() { this->corpSettlePrice_ = nullptr;};
        inline double getCorpSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(corpSettlePrice_, 0.0) };
        inline Items& setCorpSettlePrice(double corpSettlePrice) { DARABONBA_PTR_SET_VALUE(corpSettlePrice_, corpSettlePrice) };


        // costCenter Field Functions 
        bool hasCostCenter() const { return this->costCenter_ != nullptr;};
        void deleteCostCenter() { this->costCenter_ = nullptr;};
        inline string getCostCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
        inline Items& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


        // costCenterNumber Field Functions 
        bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
        void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
        inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
        inline Items& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


        // costDepartment Field Functions 
        bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
        void deleteCostDepartment() { this->costDepartment_ = nullptr;};
        inline string getCostDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
        inline Items& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


        // coupon Field Functions 
        bool hasCoupon() const { return this->coupon_ != nullptr;};
        void deleteCoupon() { this->coupon_ = nullptr;};
        inline double getCoupon() const { DARABONBA_PTR_GET_DEFAULT(coupon_, 0.0) };
        inline Items& setCoupon(double coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };


        // customContent Field Functions 
        bool hasCustomContent() const { return this->customContent_ != nullptr;};
        void deleteCustomContent() { this->customContent_ = nullptr;};
        inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
        inline Items& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline Items& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline Items& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
        inline Items& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
        inline Items& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // deptCity Field Functions 
        bool hasDeptCity() const { return this->deptCity_ != nullptr;};
        void deleteDeptCity() { this->deptCity_ = nullptr;};
        inline string getDeptCity() const { DARABONBA_PTR_GET_DEFAULT(deptCity_, "") };
        inline Items& setDeptCity(string deptCity) { DARABONBA_PTR_SET_VALUE(deptCity_, deptCity) };


        // deptDate Field Functions 
        bool hasDeptDate() const { return this->deptDate_ != nullptr;};
        void deleteDeptDate() { this->deptDate_ = nullptr;};
        inline string getDeptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
        inline Items& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


        // deptStation Field Functions 
        bool hasDeptStation() const { return this->deptStation_ != nullptr;};
        void deleteDeptStation() { this->deptStation_ = nullptr;};
        inline string getDeptStation() const { DARABONBA_PTR_GET_DEFAULT(deptStation_, "") };
        inline Items& setDeptStation(string deptStation) { DARABONBA_PTR_SET_VALUE(deptStation_, deptStation) };


        // deptTime Field Functions 
        bool hasDeptTime() const { return this->deptTime_ != nullptr;};
        void deleteDeptTime() { this->deptTime_ = nullptr;};
        inline string getDeptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
        inline Items& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline Items& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // exceedReason Field Functions 
        bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
        void deleteExceedReason() { this->exceedReason_ = nullptr;};
        inline string getExceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
        inline Items& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


        // feeType Field Functions 
        bool hasFeeType() const { return this->feeType_ != nullptr;};
        void deleteFeeType() { this->feeType_ = nullptr;};
        inline string getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
        inline Items& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


        // feeTypeDesc Field Functions 
        bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
        void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
        inline string getFeeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
        inline Items& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline Items& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightTripType Field Functions 
        bool hasFlightTripType() const { return this->flightTripType_ != nullptr;};
        void deleteFlightTripType() { this->flightTripType_ = nullptr;};
        inline string getFlightTripType() const { DARABONBA_PTR_GET_DEFAULT(flightTripType_, "") };
        inline Items& setFlightTripType(string flightTripType) { DARABONBA_PTR_SET_VALUE(flightTripType_, flightTripType) };


        // foreignersTag Field Functions 
        bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
        void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
        inline string getForeignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
        inline Items& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline Items& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // insOrderId Field Functions 
        bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
        void deleteInsOrderId() { this->insOrderId_ = nullptr;};
        inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
        inline Items& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


        // insuranceFee Field Functions 
        bool hasInsuranceFee() const { return this->insuranceFee_ != nullptr;};
        void deleteInsuranceFee() { this->insuranceFee_ = nullptr;};
        inline double getInsuranceFee() const { DARABONBA_PTR_GET_DEFAULT(insuranceFee_, 0.0) };
        inline Items& setInsuranceFee(double insuranceFee) { DARABONBA_PTR_SET_VALUE(insuranceFee_, insuranceFee) };


        // insuranceNumber Field Functions 
        bool hasInsuranceNumber() const { return this->insuranceNumber_ != nullptr;};
        void deleteInsuranceNumber() { this->insuranceNumber_ = nullptr;};
        inline string getInsuranceNumber() const { DARABONBA_PTR_GET_DEFAULT(insuranceNumber_, "") };
        inline Items& setInsuranceNumber(string insuranceNumber) { DARABONBA_PTR_SET_VALUE(insuranceNumber_, insuranceNumber) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline Items& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline Items& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // itineraryNum Field Functions 
        bool hasItineraryNum() const { return this->itineraryNum_ != nullptr;};
        void deleteItineraryNum() { this->itineraryNum_ = nullptr;};
        inline string getItineraryNum() const { DARABONBA_PTR_GET_DEFAULT(itineraryNum_, "") };
        inline Items& setItineraryNum(string itineraryNum) { DARABONBA_PTR_SET_VALUE(itineraryNum_, itineraryNum) };


        // itineraryPrice Field Functions 
        bool hasItineraryPrice() const { return this->itineraryPrice_ != nullptr;};
        void deleteItineraryPrice() { this->itineraryPrice_ = nullptr;};
        inline double getItineraryPrice() const { DARABONBA_PTR_GET_DEFAULT(itineraryPrice_, 0.0) };
        inline Items& setItineraryPrice(double itineraryPrice) { DARABONBA_PTR_SET_VALUE(itineraryPrice_, itineraryPrice) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Items& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // mappingCompanyCode Field Functions 
        bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
        void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
        inline string getMappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
        inline Items& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


        // mileage Field Functions 
        bool hasMileage() const { return this->mileage_ != nullptr;};
        void deleteMileage() { this->mileage_ = nullptr;};
        inline int32_t getMileage() const { DARABONBA_PTR_GET_DEFAULT(mileage_, 0) };
        inline Items& setMileage(int32_t mileage) { DARABONBA_PTR_SET_VALUE(mileage_, mileage) };


        // mostDifferenceDeptTime Field Functions 
        bool hasMostDifferenceDeptTime() const { return this->mostDifferenceDeptTime_ != nullptr;};
        void deleteMostDifferenceDeptTime() { this->mostDifferenceDeptTime_ = nullptr;};
        inline string getMostDifferenceDeptTime() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDeptTime_, "") };
        inline Items& setMostDifferenceDeptTime(string mostDifferenceDeptTime) { DARABONBA_PTR_SET_VALUE(mostDifferenceDeptTime_, mostDifferenceDeptTime) };


        // mostDifferenceDiscount Field Functions 
        bool hasMostDifferenceDiscount() const { return this->mostDifferenceDiscount_ != nullptr;};
        void deleteMostDifferenceDiscount() { this->mostDifferenceDiscount_ = nullptr;};
        inline string getMostDifferenceDiscount() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDiscount_, "") };
        inline Items& setMostDifferenceDiscount(string mostDifferenceDiscount) { DARABONBA_PTR_SET_VALUE(mostDifferenceDiscount_, mostDifferenceDiscount) };


        // mostDifferenceFlightNo Field Functions 
        bool hasMostDifferenceFlightNo() const { return this->mostDifferenceFlightNo_ != nullptr;};
        void deleteMostDifferenceFlightNo() { this->mostDifferenceFlightNo_ = nullptr;};
        inline string getMostDifferenceFlightNo() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceFlightNo_, "") };
        inline Items& setMostDifferenceFlightNo(string mostDifferenceFlightNo) { DARABONBA_PTR_SET_VALUE(mostDifferenceFlightNo_, mostDifferenceFlightNo) };


        // mostDifferencePrice Field Functions 
        bool hasMostDifferencePrice() const { return this->mostDifferencePrice_ != nullptr;};
        void deleteMostDifferencePrice() { this->mostDifferencePrice_ = nullptr;};
        inline double getMostDifferencePrice() const { DARABONBA_PTR_GET_DEFAULT(mostDifferencePrice_, 0.0) };
        inline Items& setMostDifferencePrice(double mostDifferencePrice) { DARABONBA_PTR_SET_VALUE(mostDifferencePrice_, mostDifferencePrice) };


        // mostDifferenceReason Field Functions 
        bool hasMostDifferenceReason() const { return this->mostDifferenceReason_ != nullptr;};
        void deleteMostDifferenceReason() { this->mostDifferenceReason_ = nullptr;};
        inline string getMostDifferenceReason() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceReason_, "") };
        inline Items& setMostDifferenceReason(string mostDifferenceReason) { DARABONBA_PTR_SET_VALUE(mostDifferenceReason_, mostDifferenceReason) };


        // mostPrice Field Functions 
        bool hasMostPrice() const { return this->mostPrice_ != nullptr;};
        void deleteMostPrice() { this->mostPrice_ = nullptr;};
        inline double getMostPrice() const { DARABONBA_PTR_GET_DEFAULT(mostPrice_, 0.0) };
        inline Items& setMostPrice(double mostPrice) { DARABONBA_PTR_SET_VALUE(mostPrice_, mostPrice) };


        // negotiationCouponFee Field Functions 
        bool hasNegotiationCouponFee() const { return this->negotiationCouponFee_ != nullptr;};
        void deleteNegotiationCouponFee() { this->negotiationCouponFee_ = nullptr;};
        inline double getNegotiationCouponFee() const { DARABONBA_PTR_GET_DEFAULT(negotiationCouponFee_, 0.0) };
        inline Items& setNegotiationCouponFee(double negotiationCouponFee) { DARABONBA_PTR_SET_VALUE(negotiationCouponFee_, negotiationCouponFee) };


        // oilFee Field Functions 
        bool hasOilFee() const { return this->oilFee_ != nullptr;};
        void deleteOilFee() { this->oilFee_ = nullptr;};
        inline double getOilFee() const { DARABONBA_PTR_GET_DEFAULT(oilFee_, 0.0) };
        inline Items& setOilFee(double oilFee) { DARABONBA_PTR_SET_VALUE(oilFee_, oilFee) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline Items& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatusDesc Field Functions 
        bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
        void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
        inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
        inline Items& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


        // orderTicketNo Field Functions 
        bool hasOrderTicketNo() const { return this->orderTicketNo_ != nullptr;};
        void deleteOrderTicketNo() { this->orderTicketNo_ = nullptr;};
        inline string getOrderTicketNo() const { DARABONBA_PTR_GET_DEFAULT(orderTicketNo_, "") };
        inline Items& setOrderTicketNo(string orderTicketNo) { DARABONBA_PTR_SET_VALUE(orderTicketNo_, orderTicketNo) };


        // overApplyId Field Functions 
        bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
        void deleteOverApplyId() { this->overApplyId_ = nullptr;};
        inline string getOverApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
        inline Items& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


        // paymentDepartmentId Field Functions 
        bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
        void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
        inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
        inline Items& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


        // paymentDepartmentName Field Functions 
        bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
        void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
        inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
        inline Items& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


        // personSettlePrice Field Functions 
        bool hasPersonSettlePrice() const { return this->personSettlePrice_ != nullptr;};
        void deletePersonSettlePrice() { this->personSettlePrice_ = nullptr;};
        inline double getPersonSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(personSettlePrice_, 0.0) };
        inline Items& setPersonSettlePrice(double personSettlePrice) { DARABONBA_PTR_SET_VALUE(personSettlePrice_, personSettlePrice) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline Items& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // positionLevel Field Functions 
        bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
        void deletePositionLevel() { this->positionLevel_ = nullptr;};
        inline string getPositionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
        inline Items& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


        // preBookTip Field Functions 
        bool hasPreBookTip() const { return this->preBookTip_ != nullptr;};
        void deletePreBookTip() { this->preBookTip_ = nullptr;};
        inline string getPreBookTip() const { DARABONBA_PTR_GET_DEFAULT(preBookTip_, "") };
        inline Items& setPreBookTip(string preBookTip) { DARABONBA_PTR_SET_VALUE(preBookTip_, preBookTip) };


        // primaryId Field Functions 
        bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
        void deletePrimaryId() { this->primaryId_ = nullptr;};
        inline int64_t getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
        inline Items& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


        // processorOaCode Field Functions 
        bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
        void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
        inline string getProcessorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
        inline Items& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline Items& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Items& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
        inline Items& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // refundResult Field Functions 
        bool hasRefundResult() const { return this->refundResult_ != nullptr;};
        void deleteRefundResult() { this->refundResult_ = nullptr;};
        inline string getRefundResult() const { DARABONBA_PTR_GET_DEFAULT(refundResult_, "") };
        inline Items& setRefundResult(string refundResult) { DARABONBA_PTR_SET_VALUE(refundResult_, refundResult) };


        // refundUpgradeCost Field Functions 
        bool hasRefundUpgradeCost() const { return this->refundUpgradeCost_ != nullptr;};
        void deleteRefundUpgradeCost() { this->refundUpgradeCost_ = nullptr;};
        inline double getRefundUpgradeCost() const { DARABONBA_PTR_GET_DEFAULT(refundUpgradeCost_, 0.0) };
        inline Items& setRefundUpgradeCost(double refundUpgradeCost) { DARABONBA_PTR_SET_VALUE(refundUpgradeCost_, refundUpgradeCost) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Items& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // repeatRefund Field Functions 
        bool hasRepeatRefund() const { return this->repeatRefund_ != nullptr;};
        void deleteRepeatRefund() { this->repeatRefund_ = nullptr;};
        inline string getRepeatRefund() const { DARABONBA_PTR_GET_DEFAULT(repeatRefund_, "") };
        inline Items& setRepeatRefund(string repeatRefund) { DARABONBA_PTR_SET_VALUE(repeatRefund_, repeatRefund) };


        // sealPrice Field Functions 
        bool hasSealPrice() const { return this->sealPrice_ != nullptr;};
        void deleteSealPrice() { this->sealPrice_ = nullptr;};
        inline double getSealPrice() const { DARABONBA_PTR_GET_DEFAULT(sealPrice_, 0.0) };
        inline Items& setSealPrice(double sealPrice) { DARABONBA_PTR_SET_VALUE(sealPrice_, sealPrice) };


        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline string getSegmentList() const { DARABONBA_PTR_GET_DEFAULT(segmentList_, "") };
        inline Items& setSegmentList(string segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };


        // serviceFee Field Functions 
        bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
        void deleteServiceFee() { this->serviceFee_ = nullptr;};
        inline double getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
        inline Items& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


        // settleTypeDesc Field Functions 
        bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
        void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
        inline string getSettleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
        inline Items& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


        // settlementFee Field Functions 
        bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
        void deleteSettlementFee() { this->settlementFee_ = nullptr;};
        inline double getSettlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
        inline Items& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


        // settlementGrantFee Field Functions 
        bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
        void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
        inline double getSettlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
        inline Items& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


        // settlementTime Field Functions 
        bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
        void deleteSettlementTime() { this->settlementTime_ = nullptr;};
        inline string getSettlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
        inline Items& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


        // settlementType Field Functions 
        bool hasSettlementType() const { return this->settlementType_ != nullptr;};
        void deleteSettlementType() { this->settlementType_ = nullptr;};
        inline string getSettlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
        inline Items& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


        // sio Field Functions 
        bool hasSio() const { return this->sio_ != nullptr;};
        void deleteSio() { this->sio_ = nullptr;};
        inline string getSio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
        inline Items& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline Items& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // subOrderId Field Functions 
        bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
        void deleteSubOrderId() { this->subOrderId_ = nullptr;};
        inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
        inline Items& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


        // taxRate Field Functions 
        bool hasTaxRate() const { return this->taxRate_ != nullptr;};
        void deleteTaxRate() { this->taxRate_ = nullptr;};
        inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
        inline Items& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


        // thirdInvoiceId Field Functions 
        bool hasThirdInvoiceId() const { return this->thirdInvoiceId_ != nullptr;};
        void deleteThirdInvoiceId() { this->thirdInvoiceId_ = nullptr;};
        inline string getThirdInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdInvoiceId_, "") };
        inline Items& setThirdInvoiceId(string thirdInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdInvoiceId_, thirdInvoiceId) };


        // thirdItineraryId Field Functions 
        bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
        void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
        inline string getThirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
        inline Items& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


        // ticketId Field Functions 
        bool hasTicketId() const { return this->ticketId_ != nullptr;};
        void deleteTicketId() { this->ticketId_ = nullptr;};
        inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
        inline Items& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


        // trade Field Functions 
        bool hasTrade() const { return this->trade_ != nullptr;};
        void deleteTrade() { this->trade_ = nullptr;};
        inline string getTrade() const { DARABONBA_PTR_GET_DEFAULT(trade_, "") };
        inline Items& setTrade(string trade) { DARABONBA_PTR_SET_VALUE(trade_, trade) };


        // tradeActionDesc Field Functions 
        bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
        void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
        inline string getTradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
        inline Items& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


        // travelerEmail Field Functions 
        bool hasTravelerEmail() const { return this->travelerEmail_ != nullptr;};
        void deleteTravelerEmail() { this->travelerEmail_ = nullptr;};
        inline string getTravelerEmail() const { DARABONBA_PTR_GET_DEFAULT(travelerEmail_, "") };
        inline Items& setTravelerEmail(string travelerEmail) { DARABONBA_PTR_SET_VALUE(travelerEmail_, travelerEmail) };


        // travelerId Field Functions 
        bool hasTravelerId() const { return this->travelerId_ != nullptr;};
        void deleteTravelerId() { this->travelerId_ = nullptr;};
        inline string getTravelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
        inline Items& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


        // travelerJobNo Field Functions 
        bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
        void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
        inline string getTravelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
        inline Items& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


        // travelerMemberType Field Functions 
        bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
        void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
        inline string getTravelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
        inline Items& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


        // travelerMemberTypeName Field Functions 
        bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
        void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
        inline string getTravelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
        inline Items& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


        // travelerName Field Functions 
        bool hasTravelerName() const { return this->travelerName_ != nullptr;};
        void deleteTravelerName() { this->travelerName_ = nullptr;};
        inline string getTravelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
        inline Items& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


        // upgradeCost Field Functions 
        bool hasUpgradeCost() const { return this->upgradeCost_ != nullptr;};
        void deleteUpgradeCost() { this->upgradeCost_ = nullptr;};
        inline double getUpgradeCost() const { DARABONBA_PTR_GET_DEFAULT(upgradeCost_, 0.0) };
        inline Items& setUpgradeCost(double upgradeCost) { DARABONBA_PTR_SET_VALUE(upgradeCost_, upgradeCost) };


        // voucherType Field Functions 
        bool hasVoucherType() const { return this->voucherType_ != nullptr;};
        void deleteVoucherType() { this->voucherType_ = nullptr;};
        inline int32_t getVoucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
        inline Items& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


        // voucherTypeDesc Field Functions 
        bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
        void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
        inline string getVoucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
        inline Items& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


        // voyageName Field Functions 
        bool hasVoyageName() const { return this->voyageName_ != nullptr;};
        void deleteVoyageName() { this->voyageName_ = nullptr;};
        inline string getVoyageName() const { DARABONBA_PTR_GET_DEFAULT(voyageName_, "") };
        inline Items& setVoyageName(string voyageName) { DARABONBA_PTR_SET_VALUE(voyageName_, voyageName) };


      protected:
        shared_ptr<string> adjustTime_ {};
        shared_ptr<int32_t> advanceDay_ {};
        shared_ptr<string> airlineCorpCode_ {};
        shared_ptr<string> airlineCorpName_ {};
        shared_ptr<string> alipayId_ {};
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
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> arrStation_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> baseLocation_ {};
        shared_ptr<string> beforeTicketNo_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> bookChannel_ {};
        shared_ptr<string> bookMode_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<double> btripCouponFee_ {};
        shared_ptr<double> buildFee_ {};
        shared_ptr<string> businessTripResult_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassCode_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<double> changeFee_ {};
        shared_ptr<string> changeResult_ {};
        shared_ptr<string> cooperatorBillCode_ {};
        shared_ptr<string> cooperatorName_ {};
        shared_ptr<string> cooperatorOrderId_ {};
        shared_ptr<double> corpPayOrderFee_ {};
        shared_ptr<double> corpSettlePrice_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<double> coupon_ {};
        shared_ptr<string> customContent_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> deptCity_ {};
        shared_ptr<string> deptDate_ {};
        shared_ptr<string> deptStation_ {};
        shared_ptr<string> deptTime_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> exceedReason_ {};
        shared_ptr<string> feeType_ {};
        shared_ptr<string> feeTypeDesc_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> flightTripType_ {};
        shared_ptr<string> foreignersTag_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> insOrderId_ {};
        shared_ptr<double> insuranceFee_ {};
        shared_ptr<string> insuranceNumber_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> itemType_ {};
        shared_ptr<string> itineraryNum_ {};
        shared_ptr<double> itineraryPrice_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<int32_t> mileage_ {};
        shared_ptr<string> mostDifferenceDeptTime_ {};
        shared_ptr<string> mostDifferenceDiscount_ {};
        shared_ptr<string> mostDifferenceFlightNo_ {};
        shared_ptr<double> mostDifferencePrice_ {};
        shared_ptr<string> mostDifferenceReason_ {};
        shared_ptr<double> mostPrice_ {};
        shared_ptr<double> negotiationCouponFee_ {};
        shared_ptr<double> oilFee_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<string> orderTicketNo_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<double> personSettlePrice_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> positionLevel_ {};
        shared_ptr<string> preBookTip_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> refundFee_ {};
        shared_ptr<string> refundResult_ {};
        shared_ptr<double> refundUpgradeCost_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> repeatRefund_ {};
        shared_ptr<double> sealPrice_ {};
        shared_ptr<string> segmentList_ {};
        shared_ptr<double> serviceFee_ {};
        shared_ptr<string> settleTypeDesc_ {};
        shared_ptr<double> settlementFee_ {};
        shared_ptr<double> settlementGrantFee_ {};
        shared_ptr<string> settlementTime_ {};
        shared_ptr<string> settlementType_ {};
        shared_ptr<string> sio_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> subOrderId_ {};
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> thirdInvoiceId_ {};
        shared_ptr<string> thirdItineraryId_ {};
        shared_ptr<string> ticketId_ {};
        shared_ptr<string> trade_ {};
        shared_ptr<string> tradeActionDesc_ {};
        shared_ptr<string> travelerEmail_ {};
        shared_ptr<string> travelerId_ {};
        shared_ptr<string> travelerJobNo_ {};
        shared_ptr<string> travelerMemberType_ {};
        shared_ptr<string> travelerMemberTypeName_ {};
        shared_ptr<string> travelerName_ {};
        shared_ptr<double> upgradeCost_ {};
        shared_ptr<int32_t> voucherType_ {};
        shared_ptr<string> voucherTypeDesc_ {};
        shared_ptr<string> voyageName_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->corpId_ == nullptr && this->items_ == nullptr && this->periodEnd_ == nullptr && this->periodStart_ == nullptr && this->scrollId_ == nullptr
        && this->totalSize_ == nullptr; };
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


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


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


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Module& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> category_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<string> periodEnd_ {};
      shared_ptr<string> periodStart_ {};
      shared_ptr<string> scrollId_ {};
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CooperatorFlightBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CooperatorFlightBillSettlementQueryResponseBody::Module) };
    inline CooperatorFlightBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CooperatorFlightBillSettlementQueryResponseBody::Module) };
    inline CooperatorFlightBillSettlementQueryResponseBody& setModule(const CooperatorFlightBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CooperatorFlightBillSettlementQueryResponseBody& setModule(CooperatorFlightBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CooperatorFlightBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CooperatorFlightBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
