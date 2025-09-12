// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORFLIGHTBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CooperatorFlightBillSettlementQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorFlightBillSettlementQueryResponseBodyModuleItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CooperatorFlightBillSettlementQueryResponseBodyModuleItems& obj) { 
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
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems() = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems(const CooperatorFlightBillSettlementQueryResponseBodyModuleItems &) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems(CooperatorFlightBillSettlementQueryResponseBodyModuleItems &&) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorFlightBillSettlementQueryResponseBodyModuleItems() = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems& operator=(const CooperatorFlightBillSettlementQueryResponseBodyModuleItems &) = default ;
    CooperatorFlightBillSettlementQueryResponseBodyModuleItems& operator=(CooperatorFlightBillSettlementQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustTime_ != nullptr
        && this->advanceDay_ != nullptr && this->airlineCorpCode_ != nullptr && this->airlineCorpName_ != nullptr && this->alipayId_ != nullptr && this->alipayTradeNo_ != nullptr
        && this->applyArrCityCode_ != nullptr && this->applyArrCityName_ != nullptr && this->applyDepCityCode_ != nullptr && this->applyDepCityName_ != nullptr && this->applyExtendField_ != nullptr
        && this->applyId_ != nullptr && this->approverEmail_ != nullptr && this->approverId_ != nullptr && this->approverName_ != nullptr && this->arrAirportCode_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->arrDate_ != nullptr && this->arrStation_ != nullptr && this->arrTime_ != nullptr
        && this->baseLocation_ != nullptr && this->billRecordTime_ != nullptr && this->bookChannel_ != nullptr && this->bookMode_ != nullptr && this->bookTime_ != nullptr
        && this->bookerId_ != nullptr && this->bookerJobNo_ != nullptr && this->bookerName_ != nullptr && this->btripCouponFee_ != nullptr && this->buildFee_ != nullptr
        && this->businessTripResult_ != nullptr && this->cabin_ != nullptr && this->cabinClass_ != nullptr && this->cabinClassCode_ != nullptr && this->capitalDirection_ != nullptr
        && this->cascadeDepartment_ != nullptr && this->categoryDesc_ != nullptr && this->changeFee_ != nullptr && this->changeResult_ != nullptr && this->cooperatorBillCode_ != nullptr
        && this->cooperatorName_ != nullptr && this->cooperatorOrderId_ != nullptr && this->corpPayOrderFee_ != nullptr && this->corpSettlePrice_ != nullptr && this->costCenter_ != nullptr
        && this->costCenterNumber_ != nullptr && this->costDepartment_ != nullptr && this->coupon_ != nullptr && this->customContent_ != nullptr && this->depAirportCode_ != nullptr
        && this->depCityCode_ != nullptr && this->department_ != nullptr && this->departmentId_ != nullptr && this->deptCity_ != nullptr && this->deptDate_ != nullptr
        && this->deptStation_ != nullptr && this->deptTime_ != nullptr && this->discount_ != nullptr && this->exceedReason_ != nullptr && this->feeType_ != nullptr
        && this->feeTypeDesc_ != nullptr && this->flightNo_ != nullptr && this->flightTripType_ != nullptr && this->foreignersTag_ != nullptr && this->index_ != nullptr
        && this->insOrderId_ != nullptr && this->insuranceFee_ != nullptr && this->insuranceNumber_ != nullptr && this->invoiceTitle_ != nullptr && this->itemType_ != nullptr
        && this->itineraryNum_ != nullptr && this->itineraryPrice_ != nullptr && this->location_ != nullptr && this->mappingCompanyCode_ != nullptr && this->mileage_ != nullptr
        && this->mostDifferenceDeptTime_ != nullptr && this->mostDifferenceDiscount_ != nullptr && this->mostDifferenceFlightNo_ != nullptr && this->mostDifferencePrice_ != nullptr && this->mostDifferenceReason_ != nullptr
        && this->mostPrice_ != nullptr && this->negotiationCouponFee_ != nullptr && this->oilFee_ != nullptr && this->orderId_ != nullptr && this->orderStatusDesc_ != nullptr
        && this->orderTicketNo_ != nullptr && this->overApplyId_ != nullptr && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr && this->personSettlePrice_ != nullptr
        && this->position_ != nullptr && this->positionLevel_ != nullptr && this->preBookTip_ != nullptr && this->primaryId_ != nullptr && this->processorOaCode_ != nullptr
        && this->projectCode_ != nullptr && this->projectName_ != nullptr && this->refundFee_ != nullptr && this->refundResult_ != nullptr && this->refundUpgradeCost_ != nullptr
        && this->remark_ != nullptr && this->repeatRefund_ != nullptr && this->sealPrice_ != nullptr && this->serviceFee_ != nullptr && this->settleTypeDesc_ != nullptr
        && this->settlementFee_ != nullptr && this->settlementGrantFee_ != nullptr && this->settlementTime_ != nullptr && this->settlementType_ != nullptr && this->sio_ != nullptr
        && this->status_ != nullptr && this->statusDesc_ != nullptr && this->subOrderId_ != nullptr && this->taxRate_ != nullptr && this->thirdInvoiceId_ != nullptr
        && this->thirdItineraryId_ != nullptr && this->ticketId_ != nullptr && this->trade_ != nullptr && this->tradeActionDesc_ != nullptr && this->travelerEmail_ != nullptr
        && this->travelerId_ != nullptr && this->travelerJobNo_ != nullptr && this->travelerMemberType_ != nullptr && this->travelerMemberTypeName_ != nullptr && this->travelerName_ != nullptr
        && this->upgradeCost_ != nullptr && this->voucherType_ != nullptr && this->voucherTypeDesc_ != nullptr && this->voyageName_ != nullptr; };
    // adjustTime Field Functions 
    bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
    void deleteAdjustTime() { this->adjustTime_ = nullptr;};
    inline string adjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


    // advanceDay Field Functions 
    bool hasAdvanceDay() const { return this->advanceDay_ != nullptr;};
    void deleteAdvanceDay() { this->advanceDay_ = nullptr;};
    inline int32_t advanceDay() const { DARABONBA_PTR_GET_DEFAULT(advanceDay_, 0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAdvanceDay(int32_t advanceDay) { DARABONBA_PTR_SET_VALUE(advanceDay_, advanceDay) };


    // airlineCorpCode Field Functions 
    bool hasAirlineCorpCode() const { return this->airlineCorpCode_ != nullptr;};
    void deleteAirlineCorpCode() { this->airlineCorpCode_ = nullptr;};
    inline string airlineCorpCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAirlineCorpCode(string airlineCorpCode) { DARABONBA_PTR_SET_VALUE(airlineCorpCode_, airlineCorpCode) };


    // airlineCorpName Field Functions 
    bool hasAirlineCorpName() const { return this->airlineCorpName_ != nullptr;};
    void deleteAirlineCorpName() { this->airlineCorpName_ = nullptr;};
    inline string airlineCorpName() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAirlineCorpName(string airlineCorpName) { DARABONBA_PTR_SET_VALUE(airlineCorpName_, airlineCorpName) };


    // alipayId Field Functions 
    bool hasAlipayId() const { return this->alipayId_ != nullptr;};
    void deleteAlipayId() { this->alipayId_ = nullptr;};
    inline string alipayId() const { DARABONBA_PTR_GET_DEFAULT(alipayId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAlipayId(string alipayId) { DARABONBA_PTR_SET_VALUE(alipayId_, alipayId) };


    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // applyArrCityCode Field Functions 
    bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
    void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
    inline string applyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


    // applyArrCityName Field Functions 
    bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
    void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
    inline string applyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


    // applyDepCityCode Field Functions 
    bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
    void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
    inline string applyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


    // applyDepCityName Field Functions 
    bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
    void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
    inline string applyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


    // applyExtendField Field Functions 
    bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
    void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
    inline string applyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // approverEmail Field Functions 
    bool hasApproverEmail() const { return this->approverEmail_ != nullptr;};
    void deleteApproverEmail() { this->approverEmail_ = nullptr;};
    inline string approverEmail() const { DARABONBA_PTR_GET_DEFAULT(approverEmail_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApproverEmail(string approverEmail) { DARABONBA_PTR_SET_VALUE(approverEmail_, approverEmail) };


    // approverId Field Functions 
    bool hasApproverId() const { return this->approverId_ != nullptr;};
    void deleteApproverId() { this->approverId_ = nullptr;};
    inline string approverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


    // approverName Field Functions 
    bool hasApproverName() const { return this->approverName_ != nullptr;};
    void deleteApproverName() { this->approverName_ = nullptr;};
    inline string approverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baseLocation Field Functions 
    bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
    void deleteBaseLocation() { this->baseLocation_ = nullptr;};
    inline string baseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


    // billRecordTime Field Functions 
    bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
    void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
    inline string billRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


    // bookChannel Field Functions 
    bool hasBookChannel() const { return this->bookChannel_ != nullptr;};
    void deleteBookChannel() { this->bookChannel_ = nullptr;};
    inline string bookChannel() const { DARABONBA_PTR_GET_DEFAULT(bookChannel_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookChannel(string bookChannel) { DARABONBA_PTR_SET_VALUE(bookChannel_, bookChannel) };


    // bookMode Field Functions 
    bool hasBookMode() const { return this->bookMode_ != nullptr;};
    void deleteBookMode() { this->bookMode_ = nullptr;};
    inline string bookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline string bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerJobNo Field Functions 
    bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
    void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
    inline string bookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // btripCouponFee Field Functions 
    bool hasBtripCouponFee() const { return this->btripCouponFee_ != nullptr;};
    void deleteBtripCouponFee() { this->btripCouponFee_ = nullptr;};
    inline double btripCouponFee() const { DARABONBA_PTR_GET_DEFAULT(btripCouponFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBtripCouponFee(double btripCouponFee) { DARABONBA_PTR_SET_VALUE(btripCouponFee_, btripCouponFee) };


    // buildFee Field Functions 
    bool hasBuildFee() const { return this->buildFee_ != nullptr;};
    void deleteBuildFee() { this->buildFee_ = nullptr;};
    inline double buildFee() const { DARABONBA_PTR_GET_DEFAULT(buildFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBuildFee(double buildFee) { DARABONBA_PTR_SET_VALUE(buildFee_, buildFee) };


    // businessTripResult Field Functions 
    bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
    void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
    inline string businessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassCode Field Functions 
    bool hasCabinClassCode() const { return this->cabinClassCode_ != nullptr;};
    void deleteCabinClassCode() { this->cabinClassCode_ = nullptr;};
    inline string cabinClassCode() const { DARABONBA_PTR_GET_DEFAULT(cabinClassCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCabinClassCode(string cabinClassCode) { DARABONBA_PTR_SET_VALUE(cabinClassCode_, cabinClassCode) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // cascadeDepartment Field Functions 
    bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
    void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
    inline string cascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


    // categoryDesc Field Functions 
    bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
    void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
    inline string categoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // changeResult Field Functions 
    bool hasChangeResult() const { return this->changeResult_ != nullptr;};
    void deleteChangeResult() { this->changeResult_ = nullptr;};
    inline string changeResult() const { DARABONBA_PTR_GET_DEFAULT(changeResult_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setChangeResult(string changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };


    // cooperatorBillCode Field Functions 
    bool hasCooperatorBillCode() const { return this->cooperatorBillCode_ != nullptr;};
    void deleteCooperatorBillCode() { this->cooperatorBillCode_ = nullptr;};
    inline string cooperatorBillCode() const { DARABONBA_PTR_GET_DEFAULT(cooperatorBillCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCooperatorBillCode(string cooperatorBillCode) { DARABONBA_PTR_SET_VALUE(cooperatorBillCode_, cooperatorBillCode) };


    // cooperatorName Field Functions 
    bool hasCooperatorName() const { return this->cooperatorName_ != nullptr;};
    void deleteCooperatorName() { this->cooperatorName_ = nullptr;};
    inline string cooperatorName() const { DARABONBA_PTR_GET_DEFAULT(cooperatorName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCooperatorName(string cooperatorName) { DARABONBA_PTR_SET_VALUE(cooperatorName_, cooperatorName) };


    // cooperatorOrderId Field Functions 
    bool hasCooperatorOrderId() const { return this->cooperatorOrderId_ != nullptr;};
    void deleteCooperatorOrderId() { this->cooperatorOrderId_ = nullptr;};
    inline string cooperatorOrderId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorOrderId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCooperatorOrderId(string cooperatorOrderId) { DARABONBA_PTR_SET_VALUE(cooperatorOrderId_, cooperatorOrderId) };


    // corpPayOrderFee Field Functions 
    bool hasCorpPayOrderFee() const { return this->corpPayOrderFee_ != nullptr;};
    void deleteCorpPayOrderFee() { this->corpPayOrderFee_ = nullptr;};
    inline double corpPayOrderFee() const { DARABONBA_PTR_GET_DEFAULT(corpPayOrderFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCorpPayOrderFee(double corpPayOrderFee) { DARABONBA_PTR_SET_VALUE(corpPayOrderFee_, corpPayOrderFee) };


    // corpSettlePrice Field Functions 
    bool hasCorpSettlePrice() const { return this->corpSettlePrice_ != nullptr;};
    void deleteCorpSettlePrice() { this->corpSettlePrice_ = nullptr;};
    inline double corpSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(corpSettlePrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCorpSettlePrice(double corpSettlePrice) { DARABONBA_PTR_SET_VALUE(corpSettlePrice_, corpSettlePrice) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // costDepartment Field Functions 
    bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
    void deleteCostDepartment() { this->costDepartment_ = nullptr;};
    inline string costDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


    // coupon Field Functions 
    bool hasCoupon() const { return this->coupon_ != nullptr;};
    void deleteCoupon() { this->coupon_ = nullptr;};
    inline double coupon() const { DARABONBA_PTR_GET_DEFAULT(coupon_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCoupon(double coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // deptCity Field Functions 
    bool hasDeptCity() const { return this->deptCity_ != nullptr;};
    void deleteDeptCity() { this->deptCity_ = nullptr;};
    inline string deptCity() const { DARABONBA_PTR_GET_DEFAULT(deptCity_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDeptCity(string deptCity) { DARABONBA_PTR_SET_VALUE(deptCity_, deptCity) };


    // deptDate Field Functions 
    bool hasDeptDate() const { return this->deptDate_ != nullptr;};
    void deleteDeptDate() { this->deptDate_ = nullptr;};
    inline string deptDate() const { DARABONBA_PTR_GET_DEFAULT(deptDate_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDeptDate(string deptDate) { DARABONBA_PTR_SET_VALUE(deptDate_, deptDate) };


    // deptStation Field Functions 
    bool hasDeptStation() const { return this->deptStation_ != nullptr;};
    void deleteDeptStation() { this->deptStation_ = nullptr;};
    inline string deptStation() const { DARABONBA_PTR_GET_DEFAULT(deptStation_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDeptStation(string deptStation) { DARABONBA_PTR_SET_VALUE(deptStation_, deptStation) };


    // deptTime Field Functions 
    bool hasDeptTime() const { return this->deptTime_ != nullptr;};
    void deleteDeptTime() { this->deptTime_ = nullptr;};
    inline string deptTime() const { DARABONBA_PTR_GET_DEFAULT(deptTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDeptTime(string deptTime) { DARABONBA_PTR_SET_VALUE(deptTime_, deptTime) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // exceedReason Field Functions 
    bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
    void deleteExceedReason() { this->exceedReason_ = nullptr;};
    inline string exceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // feeTypeDesc Field Functions 
    bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
    void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
    inline string feeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightTripType Field Functions 
    bool hasFlightTripType() const { return this->flightTripType_ != nullptr;};
    void deleteFlightTripType() { this->flightTripType_ = nullptr;};
    inline string flightTripType() const { DARABONBA_PTR_GET_DEFAULT(flightTripType_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setFlightTripType(string flightTripType) { DARABONBA_PTR_SET_VALUE(flightTripType_, flightTripType) };


    // foreignersTag Field Functions 
    bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
    void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
    inline string foreignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insuranceFee Field Functions 
    bool hasInsuranceFee() const { return this->insuranceFee_ != nullptr;};
    void deleteInsuranceFee() { this->insuranceFee_ = nullptr;};
    inline double insuranceFee() const { DARABONBA_PTR_GET_DEFAULT(insuranceFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setInsuranceFee(double insuranceFee) { DARABONBA_PTR_SET_VALUE(insuranceFee_, insuranceFee) };


    // insuranceNumber Field Functions 
    bool hasInsuranceNumber() const { return this->insuranceNumber_ != nullptr;};
    void deleteInsuranceNumber() { this->insuranceNumber_ = nullptr;};
    inline string insuranceNumber() const { DARABONBA_PTR_GET_DEFAULT(insuranceNumber_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setInsuranceNumber(string insuranceNumber) { DARABONBA_PTR_SET_VALUE(insuranceNumber_, insuranceNumber) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // itineraryNum Field Functions 
    bool hasItineraryNum() const { return this->itineraryNum_ != nullptr;};
    void deleteItineraryNum() { this->itineraryNum_ = nullptr;};
    inline string itineraryNum() const { DARABONBA_PTR_GET_DEFAULT(itineraryNum_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setItineraryNum(string itineraryNum) { DARABONBA_PTR_SET_VALUE(itineraryNum_, itineraryNum) };


    // itineraryPrice Field Functions 
    bool hasItineraryPrice() const { return this->itineraryPrice_ != nullptr;};
    void deleteItineraryPrice() { this->itineraryPrice_ = nullptr;};
    inline double itineraryPrice() const { DARABONBA_PTR_GET_DEFAULT(itineraryPrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setItineraryPrice(double itineraryPrice) { DARABONBA_PTR_SET_VALUE(itineraryPrice_, itineraryPrice) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // mappingCompanyCode Field Functions 
    bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
    void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
    inline string mappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


    // mileage Field Functions 
    bool hasMileage() const { return this->mileage_ != nullptr;};
    void deleteMileage() { this->mileage_ = nullptr;};
    inline int32_t mileage() const { DARABONBA_PTR_GET_DEFAULT(mileage_, 0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMileage(int32_t mileage) { DARABONBA_PTR_SET_VALUE(mileage_, mileage) };


    // mostDifferenceDeptTime Field Functions 
    bool hasMostDifferenceDeptTime() const { return this->mostDifferenceDeptTime_ != nullptr;};
    void deleteMostDifferenceDeptTime() { this->mostDifferenceDeptTime_ = nullptr;};
    inline string mostDifferenceDeptTime() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDeptTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostDifferenceDeptTime(string mostDifferenceDeptTime) { DARABONBA_PTR_SET_VALUE(mostDifferenceDeptTime_, mostDifferenceDeptTime) };


    // mostDifferenceDiscount Field Functions 
    bool hasMostDifferenceDiscount() const { return this->mostDifferenceDiscount_ != nullptr;};
    void deleteMostDifferenceDiscount() { this->mostDifferenceDiscount_ = nullptr;};
    inline string mostDifferenceDiscount() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDiscount_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostDifferenceDiscount(string mostDifferenceDiscount) { DARABONBA_PTR_SET_VALUE(mostDifferenceDiscount_, mostDifferenceDiscount) };


    // mostDifferenceFlightNo Field Functions 
    bool hasMostDifferenceFlightNo() const { return this->mostDifferenceFlightNo_ != nullptr;};
    void deleteMostDifferenceFlightNo() { this->mostDifferenceFlightNo_ = nullptr;};
    inline string mostDifferenceFlightNo() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceFlightNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostDifferenceFlightNo(string mostDifferenceFlightNo) { DARABONBA_PTR_SET_VALUE(mostDifferenceFlightNo_, mostDifferenceFlightNo) };


    // mostDifferencePrice Field Functions 
    bool hasMostDifferencePrice() const { return this->mostDifferencePrice_ != nullptr;};
    void deleteMostDifferencePrice() { this->mostDifferencePrice_ = nullptr;};
    inline double mostDifferencePrice() const { DARABONBA_PTR_GET_DEFAULT(mostDifferencePrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostDifferencePrice(double mostDifferencePrice) { DARABONBA_PTR_SET_VALUE(mostDifferencePrice_, mostDifferencePrice) };


    // mostDifferenceReason Field Functions 
    bool hasMostDifferenceReason() const { return this->mostDifferenceReason_ != nullptr;};
    void deleteMostDifferenceReason() { this->mostDifferenceReason_ = nullptr;};
    inline string mostDifferenceReason() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceReason_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostDifferenceReason(string mostDifferenceReason) { DARABONBA_PTR_SET_VALUE(mostDifferenceReason_, mostDifferenceReason) };


    // mostPrice Field Functions 
    bool hasMostPrice() const { return this->mostPrice_ != nullptr;};
    void deleteMostPrice() { this->mostPrice_ = nullptr;};
    inline double mostPrice() const { DARABONBA_PTR_GET_DEFAULT(mostPrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setMostPrice(double mostPrice) { DARABONBA_PTR_SET_VALUE(mostPrice_, mostPrice) };


    // negotiationCouponFee Field Functions 
    bool hasNegotiationCouponFee() const { return this->negotiationCouponFee_ != nullptr;};
    void deleteNegotiationCouponFee() { this->negotiationCouponFee_ = nullptr;};
    inline double negotiationCouponFee() const { DARABONBA_PTR_GET_DEFAULT(negotiationCouponFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setNegotiationCouponFee(double negotiationCouponFee) { DARABONBA_PTR_SET_VALUE(negotiationCouponFee_, negotiationCouponFee) };


    // oilFee Field Functions 
    bool hasOilFee() const { return this->oilFee_ != nullptr;};
    void deleteOilFee() { this->oilFee_ = nullptr;};
    inline double oilFee() const { DARABONBA_PTR_GET_DEFAULT(oilFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setOilFee(double oilFee) { DARABONBA_PTR_SET_VALUE(oilFee_, oilFee) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // orderTicketNo Field Functions 
    bool hasOrderTicketNo() const { return this->orderTicketNo_ != nullptr;};
    void deleteOrderTicketNo() { this->orderTicketNo_ = nullptr;};
    inline string orderTicketNo() const { DARABONBA_PTR_GET_DEFAULT(orderTicketNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setOrderTicketNo(string orderTicketNo) { DARABONBA_PTR_SET_VALUE(orderTicketNo_, orderTicketNo) };


    // overApplyId Field Functions 
    bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
    void deleteOverApplyId() { this->overApplyId_ = nullptr;};
    inline string overApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // personSettlePrice Field Functions 
    bool hasPersonSettlePrice() const { return this->personSettlePrice_ != nullptr;};
    void deletePersonSettlePrice() { this->personSettlePrice_ = nullptr;};
    inline double personSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(personSettlePrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPersonSettlePrice(double personSettlePrice) { DARABONBA_PTR_SET_VALUE(personSettlePrice_, personSettlePrice) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // preBookTip Field Functions 
    bool hasPreBookTip() const { return this->preBookTip_ != nullptr;};
    void deletePreBookTip() { this->preBookTip_ = nullptr;};
    inline string preBookTip() const { DARABONBA_PTR_GET_DEFAULT(preBookTip_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPreBookTip(string preBookTip) { DARABONBA_PTR_SET_VALUE(preBookTip_, preBookTip) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // processorOaCode Field Functions 
    bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
    void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
    inline string processorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline double refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundResult Field Functions 
    bool hasRefundResult() const { return this->refundResult_ != nullptr;};
    void deleteRefundResult() { this->refundResult_ = nullptr;};
    inline string refundResult() const { DARABONBA_PTR_GET_DEFAULT(refundResult_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setRefundResult(string refundResult) { DARABONBA_PTR_SET_VALUE(refundResult_, refundResult) };


    // refundUpgradeCost Field Functions 
    bool hasRefundUpgradeCost() const { return this->refundUpgradeCost_ != nullptr;};
    void deleteRefundUpgradeCost() { this->refundUpgradeCost_ = nullptr;};
    inline double refundUpgradeCost() const { DARABONBA_PTR_GET_DEFAULT(refundUpgradeCost_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setRefundUpgradeCost(double refundUpgradeCost) { DARABONBA_PTR_SET_VALUE(refundUpgradeCost_, refundUpgradeCost) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // repeatRefund Field Functions 
    bool hasRepeatRefund() const { return this->repeatRefund_ != nullptr;};
    void deleteRepeatRefund() { this->repeatRefund_ = nullptr;};
    inline string repeatRefund() const { DARABONBA_PTR_GET_DEFAULT(repeatRefund_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setRepeatRefund(string repeatRefund) { DARABONBA_PTR_SET_VALUE(repeatRefund_, repeatRefund) };


    // sealPrice Field Functions 
    bool hasSealPrice() const { return this->sealPrice_ != nullptr;};
    void deleteSealPrice() { this->sealPrice_ = nullptr;};
    inline double sealPrice() const { DARABONBA_PTR_GET_DEFAULT(sealPrice_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSealPrice(double sealPrice) { DARABONBA_PTR_SET_VALUE(sealPrice_, sealPrice) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // settleTypeDesc Field Functions 
    bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
    void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
    inline string settleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


    // settlementFee Field Functions 
    bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
    void deleteSettlementFee() { this->settlementFee_ = nullptr;};
    inline double settlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


    // settlementGrantFee Field Functions 
    bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
    void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
    inline double settlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


    // sio Field Functions 
    bool hasSio() const { return this->sio_ != nullptr;};
    void deleteSio() { this->sio_ = nullptr;};
    inline string sio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // thirdInvoiceId Field Functions 
    bool hasThirdInvoiceId() const { return this->thirdInvoiceId_ != nullptr;};
    void deleteThirdInvoiceId() { this->thirdInvoiceId_ = nullptr;};
    inline string thirdInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdInvoiceId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setThirdInvoiceId(string thirdInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdInvoiceId_, thirdInvoiceId) };


    // thirdItineraryId Field Functions 
    bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
    void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
    inline string thirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // trade Field Functions 
    bool hasTrade() const { return this->trade_ != nullptr;};
    void deleteTrade() { this->trade_ = nullptr;};
    inline string trade() const { DARABONBA_PTR_GET_DEFAULT(trade_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTrade(string trade) { DARABONBA_PTR_SET_VALUE(trade_, trade) };


    // tradeActionDesc Field Functions 
    bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
    void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
    inline string tradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


    // travelerEmail Field Functions 
    bool hasTravelerEmail() const { return this->travelerEmail_ != nullptr;};
    void deleteTravelerEmail() { this->travelerEmail_ = nullptr;};
    inline string travelerEmail() const { DARABONBA_PTR_GET_DEFAULT(travelerEmail_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerEmail(string travelerEmail) { DARABONBA_PTR_SET_VALUE(travelerEmail_, travelerEmail) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerJobNo Field Functions 
    bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
    void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
    inline string travelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


    // travelerMemberType Field Functions 
    bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
    void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
    inline string travelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


    // travelerMemberTypeName Field Functions 
    bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
    void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
    inline string travelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // upgradeCost Field Functions 
    bool hasUpgradeCost() const { return this->upgradeCost_ != nullptr;};
    void deleteUpgradeCost() { this->upgradeCost_ = nullptr;};
    inline double upgradeCost() const { DARABONBA_PTR_GET_DEFAULT(upgradeCost_, 0.0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setUpgradeCost(double upgradeCost) { DARABONBA_PTR_SET_VALUE(upgradeCost_, upgradeCost) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


    // voucherTypeDesc Field Functions 
    bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
    void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
    inline string voucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


    // voyageName Field Functions 
    bool hasVoyageName() const { return this->voyageName_ != nullptr;};
    void deleteVoyageName() { this->voyageName_ = nullptr;};
    inline string voyageName() const { DARABONBA_PTR_GET_DEFAULT(voyageName_, "") };
    inline CooperatorFlightBillSettlementQueryResponseBodyModuleItems& setVoyageName(string voyageName) { DARABONBA_PTR_SET_VALUE(voyageName_, voyageName) };


  protected:
    std::shared_ptr<string> adjustTime_ = nullptr;
    std::shared_ptr<int32_t> advanceDay_ = nullptr;
    std::shared_ptr<string> airlineCorpCode_ = nullptr;
    std::shared_ptr<string> airlineCorpName_ = nullptr;
    std::shared_ptr<string> alipayId_ = nullptr;
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<string> applyArrCityCode_ = nullptr;
    std::shared_ptr<string> applyArrCityName_ = nullptr;
    std::shared_ptr<string> applyDepCityCode_ = nullptr;
    std::shared_ptr<string> applyDepCityName_ = nullptr;
    std::shared_ptr<string> applyExtendField_ = nullptr;
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> approverEmail_ = nullptr;
    std::shared_ptr<string> approverId_ = nullptr;
    std::shared_ptr<string> approverName_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> arrStation_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baseLocation_ = nullptr;
    std::shared_ptr<string> billRecordTime_ = nullptr;
    std::shared_ptr<string> bookChannel_ = nullptr;
    std::shared_ptr<string> bookMode_ = nullptr;
    std::shared_ptr<string> bookTime_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerJobNo_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<double> btripCouponFee_ = nullptr;
    std::shared_ptr<double> buildFee_ = nullptr;
    std::shared_ptr<string> businessTripResult_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassCode_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> cascadeDepartment_ = nullptr;
    std::shared_ptr<string> categoryDesc_ = nullptr;
    std::shared_ptr<double> changeFee_ = nullptr;
    std::shared_ptr<string> changeResult_ = nullptr;
    std::shared_ptr<string> cooperatorBillCode_ = nullptr;
    std::shared_ptr<string> cooperatorName_ = nullptr;
    std::shared_ptr<string> cooperatorOrderId_ = nullptr;
    std::shared_ptr<double> corpPayOrderFee_ = nullptr;
    std::shared_ptr<double> corpSettlePrice_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> costDepartment_ = nullptr;
    std::shared_ptr<double> coupon_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> deptCity_ = nullptr;
    std::shared_ptr<string> deptDate_ = nullptr;
    std::shared_ptr<string> deptStation_ = nullptr;
    std::shared_ptr<string> deptTime_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<string> exceedReason_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> feeTypeDesc_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> flightTripType_ = nullptr;
    std::shared_ptr<string> foreignersTag_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<double> insuranceFee_ = nullptr;
    std::shared_ptr<string> insuranceNumber_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<string> itineraryNum_ = nullptr;
    std::shared_ptr<double> itineraryPrice_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> mappingCompanyCode_ = nullptr;
    std::shared_ptr<int32_t> mileage_ = nullptr;
    std::shared_ptr<string> mostDifferenceDeptTime_ = nullptr;
    std::shared_ptr<string> mostDifferenceDiscount_ = nullptr;
    std::shared_ptr<string> mostDifferenceFlightNo_ = nullptr;
    std::shared_ptr<double> mostDifferencePrice_ = nullptr;
    std::shared_ptr<string> mostDifferenceReason_ = nullptr;
    std::shared_ptr<double> mostPrice_ = nullptr;
    std::shared_ptr<double> negotiationCouponFee_ = nullptr;
    std::shared_ptr<double> oilFee_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<string> orderTicketNo_ = nullptr;
    std::shared_ptr<string> overApplyId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<double> personSettlePrice_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<string> preBookTip_ = nullptr;
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<string> processorOaCode_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<double> refundFee_ = nullptr;
    std::shared_ptr<string> refundResult_ = nullptr;
    std::shared_ptr<double> refundUpgradeCost_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> repeatRefund_ = nullptr;
    std::shared_ptr<double> sealPrice_ = nullptr;
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<string> settleTypeDesc_ = nullptr;
    std::shared_ptr<double> settlementFee_ = nullptr;
    std::shared_ptr<double> settlementGrantFee_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
    std::shared_ptr<string> sio_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> thirdInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdItineraryId_ = nullptr;
    std::shared_ptr<string> ticketId_ = nullptr;
    std::shared_ptr<string> trade_ = nullptr;
    std::shared_ptr<string> tradeActionDesc_ = nullptr;
    std::shared_ptr<string> travelerEmail_ = nullptr;
    std::shared_ptr<string> travelerId_ = nullptr;
    std::shared_ptr<string> travelerJobNo_ = nullptr;
    std::shared_ptr<string> travelerMemberType_ = nullptr;
    std::shared_ptr<string> travelerMemberTypeName_ = nullptr;
    std::shared_ptr<string> travelerName_ = nullptr;
    std::shared_ptr<double> upgradeCost_ = nullptr;
    std::shared_ptr<int32_t> voucherType_ = nullptr;
    std::shared_ptr<string> voucherTypeDesc_ = nullptr;
    std::shared_ptr<string> voyageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
