// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IEFLIGHTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IEFLIGHTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
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
  class IeFlightBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IeFlightBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(more_page, morePage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IeFlightBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(more_page, morePage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IeFlightBillSettlementQueryResponseBody() = default ;
    IeFlightBillSettlementQueryResponseBody(const IeFlightBillSettlementQueryResponseBody &) = default ;
    IeFlightBillSettlementQueryResponseBody(IeFlightBillSettlementQueryResponseBody &&) = default ;
    IeFlightBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IeFlightBillSettlementQueryResponseBody() = default ;
    IeFlightBillSettlementQueryResponseBody& operator=(const IeFlightBillSettlementQueryResponseBody &) = default ;
    IeFlightBillSettlementQueryResponseBody& operator=(IeFlightBillSettlementQueryResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(advance_day, advanceDay_);
          DARABONBA_PTR_TO_JSON(airline_corp_code, airlineCorpCode_);
          DARABONBA_PTR_TO_JSON(airline_corp_name, airlineCorpName_);
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
          DARABONBA_PTR_TO_JSON(arr_country, arrCountry_);
          DARABONBA_PTR_TO_JSON(arr_country_code, arrCountryCode_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(base_location, baseLocation_);
          DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
          DARABONBA_PTR_TO_JSON(book_time, bookTime_);
          DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
          DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
          DARABONBA_PTR_TO_JSON(btrip_coupon_fee, btripCouponFee_);
          DARABONBA_PTR_TO_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
          DARABONBA_PTR_TO_JSON(change_result, changeResult_);
          DARABONBA_PTR_TO_JSON(corp_pay_order_fee, corpPayOrderFee_);
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_TO_JSON(coupon, coupon_);
          DARABONBA_PTR_TO_JSON(custom_content, customContent_);
          DARABONBA_PTR_TO_JSON(deductible_tax, deductibleTax_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_country, depCountry_);
          DARABONBA_PTR_TO_JSON(dep_country_code, depCountryCode_);
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
          DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
          DARABONBA_PTR_TO_JSON(insurance_fee, insuranceFee_);
          DARABONBA_PTR_TO_JSON(insurance_number, insuranceNumber_);
          DARABONBA_PTR_TO_JSON(insurance_product_name, insuranceProductName_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_TO_JSON(most_difference_dept_time, mostDifferenceDeptTime_);
          DARABONBA_PTR_TO_JSON(most_difference_discount, mostDifferenceDiscount_);
          DARABONBA_PTR_TO_JSON(most_difference_flight_no, mostDifferenceFlightNo_);
          DARABONBA_PTR_TO_JSON(most_difference_price, mostDifferencePrice_);
          DARABONBA_PTR_TO_JSON(most_difference_reason, mostDifferenceReason_);
          DARABONBA_PTR_TO_JSON(most_price, mostPrice_);
          DARABONBA_PTR_TO_JSON(negotiation_coupon_fee, negotiationCouponFee_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(position, position_);
          DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
          DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
          DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_name, projectName_);
          DARABONBA_PTR_TO_JSON(refund_change_cost, refundChangeCost_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_TO_JSON(refund_result, refundResult_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
          DARABONBA_PTR_TO_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_TO_JSON(seal_price, sealPrice_);
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(segment_type, segmentType_);
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
          DARABONBA_PTR_TO_JSON(tax_fee, taxFee_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
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
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
          DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
          DARABONBA_PTR_TO_JSON(voyage_name, voyageName_);
        };
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
          DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
          DARABONBA_PTR_FROM_JSON(advance_day, advanceDay_);
          DARABONBA_PTR_FROM_JSON(airline_corp_code, airlineCorpCode_);
          DARABONBA_PTR_FROM_JSON(airline_corp_name, airlineCorpName_);
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
          DARABONBA_PTR_FROM_JSON(arr_country, arrCountry_);
          DARABONBA_PTR_FROM_JSON(arr_country_code, arrCountryCode_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(base_location, baseLocation_);
          DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
          DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
          DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
          DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
          DARABONBA_PTR_FROM_JSON(btrip_coupon_fee, btripCouponFee_);
          DARABONBA_PTR_FROM_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
          DARABONBA_PTR_FROM_JSON(change_result, changeResult_);
          DARABONBA_PTR_FROM_JSON(corp_pay_order_fee, corpPayOrderFee_);
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_FROM_JSON(coupon, coupon_);
          DARABONBA_PTR_FROM_JSON(custom_content, customContent_);
          DARABONBA_PTR_FROM_JSON(deductible_tax, deductibleTax_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_country, depCountry_);
          DARABONBA_PTR_FROM_JSON(dep_country_code, depCountryCode_);
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
          DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
          DARABONBA_PTR_FROM_JSON(insurance_fee, insuranceFee_);
          DARABONBA_PTR_FROM_JSON(insurance_number, insuranceNumber_);
          DARABONBA_PTR_FROM_JSON(insurance_product_name, insuranceProductName_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_FROM_JSON(most_difference_dept_time, mostDifferenceDeptTime_);
          DARABONBA_PTR_FROM_JSON(most_difference_discount, mostDifferenceDiscount_);
          DARABONBA_PTR_FROM_JSON(most_difference_flight_no, mostDifferenceFlightNo_);
          DARABONBA_PTR_FROM_JSON(most_difference_price, mostDifferencePrice_);
          DARABONBA_PTR_FROM_JSON(most_difference_reason, mostDifferenceReason_);
          DARABONBA_PTR_FROM_JSON(most_price, mostPrice_);
          DARABONBA_PTR_FROM_JSON(negotiation_coupon_fee, negotiationCouponFee_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(position, position_);
          DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
          DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
          DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_name, projectName_);
          DARABONBA_PTR_FROM_JSON(refund_change_cost, refundChangeCost_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_FROM_JSON(refund_result, refundResult_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
          DARABONBA_PTR_FROM_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_FROM_JSON(seal_price, sealPrice_);
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(segment_type, segmentType_);
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
          DARABONBA_PTR_FROM_JSON(tax_fee, taxFee_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
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
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
          DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
          DARABONBA_PTR_FROM_JSON(voyage_name, voyageName_);
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
        && this->advanceDay_ == nullptr && this->airlineCorpCode_ == nullptr && this->airlineCorpName_ == nullptr && this->alipayTradeNo_ == nullptr && this->applyArrCityCode_ == nullptr
        && this->applyArrCityName_ == nullptr && this->applyDepCityCode_ == nullptr && this->applyDepCityName_ == nullptr && this->applyExtendField_ == nullptr && this->applyId_ == nullptr
        && this->approverEmail_ == nullptr && this->approverId_ == nullptr && this->approverName_ == nullptr && this->arrAirportCode_ == nullptr && this->arrCity_ == nullptr
        && this->arrCityCode_ == nullptr && this->arrCountry_ == nullptr && this->arrCountryCode_ == nullptr && this->arrDate_ == nullptr && this->arrStation_ == nullptr
        && this->arrTime_ == nullptr && this->baseLocation_ == nullptr && this->billRecordTime_ == nullptr && this->bookMode_ == nullptr && this->bookTime_ == nullptr
        && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr && this->bookerName_ == nullptr && this->btripCouponFee_ == nullptr && this->businessTripResult_ == nullptr
        && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->capitalDirection_ == nullptr && this->cascadeDepartment_ == nullptr && this->categoryDesc_ == nullptr
        && this->changeFee_ == nullptr && this->changeResult_ == nullptr && this->corpPayOrderFee_ == nullptr && this->costCenter_ == nullptr && this->costCenterNumber_ == nullptr
        && this->costDepartment_ == nullptr && this->coupon_ == nullptr && this->customContent_ == nullptr && this->deductibleTax_ == nullptr && this->depAirportCode_ == nullptr
        && this->depCityCode_ == nullptr && this->depCountry_ == nullptr && this->depCountryCode_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr
        && this->deptCity_ == nullptr && this->deptDate_ == nullptr && this->deptStation_ == nullptr && this->deptTime_ == nullptr && this->discount_ == nullptr
        && this->exceedReason_ == nullptr && this->feeType_ == nullptr && this->feeTypeDesc_ == nullptr && this->flightNo_ == nullptr && this->foreignersTag_ == nullptr
        && this->index_ == nullptr && this->insOrderId_ == nullptr && this->insuranceFee_ == nullptr && this->insuranceNumber_ == nullptr && this->insuranceProductName_ == nullptr
        && this->invoiceTitle_ == nullptr && this->location_ == nullptr && this->mappingCompanyCode_ == nullptr && this->mostDifferenceDeptTime_ == nullptr && this->mostDifferenceDiscount_ == nullptr
        && this->mostDifferenceFlightNo_ == nullptr && this->mostDifferencePrice_ == nullptr && this->mostDifferenceReason_ == nullptr && this->mostPrice_ == nullptr && this->negotiationCouponFee_ == nullptr
        && this->orderId_ == nullptr && this->orderStatusDesc_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->position_ == nullptr && this->positionLevel_ == nullptr && this->primaryId_ == nullptr && this->processorOaCode_ == nullptr && this->projectCode_ == nullptr
        && this->projectName_ == nullptr && this->refundChangeCost_ == nullptr && this->refundFee_ == nullptr && this->refundResult_ == nullptr && this->remark_ == nullptr
        && this->repeatRefund_ == nullptr && this->sealPrice_ == nullptr && this->segmentList_ == nullptr && this->segmentType_ == nullptr && this->serviceFee_ == nullptr
        && this->settleTypeDesc_ == nullptr && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr && this->settlementTime_ == nullptr && this->settlementType_ == nullptr
        && this->sio_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->subOrderId_ == nullptr && this->taxFee_ == nullptr
        && this->taxRate_ == nullptr && this->thirdItineraryId_ == nullptr && this->ticketId_ == nullptr && this->trade_ == nullptr && this->tradeActionDesc_ == nullptr
        && this->travelerEmail_ == nullptr && this->travelerId_ == nullptr && this->travelerJobNo_ == nullptr && this->travelerMemberType_ == nullptr && this->travelerMemberTypeName_ == nullptr
        && this->travelerName_ == nullptr && this->tripType_ == nullptr && this->voucherType_ == nullptr && this->voucherTypeDesc_ == nullptr && this->voyageName_ == nullptr; };
        // adjustTime Field Functions 
        bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
        void deleteAdjustTime() { this->adjustTime_ = nullptr;};
        inline string getAdjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
        inline DataList& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


        // advanceDay Field Functions 
        bool hasAdvanceDay() const { return this->advanceDay_ != nullptr;};
        void deleteAdvanceDay() { this->advanceDay_ = nullptr;};
        inline int32_t getAdvanceDay() const { DARABONBA_PTR_GET_DEFAULT(advanceDay_, 0) };
        inline DataList& setAdvanceDay(int32_t advanceDay) { DARABONBA_PTR_SET_VALUE(advanceDay_, advanceDay) };


        // airlineCorpCode Field Functions 
        bool hasAirlineCorpCode() const { return this->airlineCorpCode_ != nullptr;};
        void deleteAirlineCorpCode() { this->airlineCorpCode_ = nullptr;};
        inline string getAirlineCorpCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpCode_, "") };
        inline DataList& setAirlineCorpCode(string airlineCorpCode) { DARABONBA_PTR_SET_VALUE(airlineCorpCode_, airlineCorpCode) };


        // airlineCorpName Field Functions 
        bool hasAirlineCorpName() const { return this->airlineCorpName_ != nullptr;};
        void deleteAirlineCorpName() { this->airlineCorpName_ = nullptr;};
        inline string getAirlineCorpName() const { DARABONBA_PTR_GET_DEFAULT(airlineCorpName_, "") };
        inline DataList& setAirlineCorpName(string airlineCorpName) { DARABONBA_PTR_SET_VALUE(airlineCorpName_, airlineCorpName) };


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


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline DataList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


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


        // arrCountry Field Functions 
        bool hasArrCountry() const { return this->arrCountry_ != nullptr;};
        void deleteArrCountry() { this->arrCountry_ = nullptr;};
        inline string getArrCountry() const { DARABONBA_PTR_GET_DEFAULT(arrCountry_, "") };
        inline DataList& setArrCountry(string arrCountry) { DARABONBA_PTR_SET_VALUE(arrCountry_, arrCountry) };


        // arrCountryCode Field Functions 
        bool hasArrCountryCode() const { return this->arrCountryCode_ != nullptr;};
        void deleteArrCountryCode() { this->arrCountryCode_ = nullptr;};
        inline string getArrCountryCode() const { DARABONBA_PTR_GET_DEFAULT(arrCountryCode_, "") };
        inline DataList& setArrCountryCode(string arrCountryCode) { DARABONBA_PTR_SET_VALUE(arrCountryCode_, arrCountryCode) };


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


        // bookMode Field Functions 
        bool hasBookMode() const { return this->bookMode_ != nullptr;};
        void deleteBookMode() { this->bookMode_ = nullptr;};
        inline string getBookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
        inline DataList& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


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


        // btripCouponFee Field Functions 
        bool hasBtripCouponFee() const { return this->btripCouponFee_ != nullptr;};
        void deleteBtripCouponFee() { this->btripCouponFee_ = nullptr;};
        inline double getBtripCouponFee() const { DARABONBA_PTR_GET_DEFAULT(btripCouponFee_, 0.0) };
        inline DataList& setBtripCouponFee(double btripCouponFee) { DARABONBA_PTR_SET_VALUE(btripCouponFee_, btripCouponFee) };


        // businessTripResult Field Functions 
        bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
        void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
        inline string getBusinessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
        inline DataList& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline DataList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline DataList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


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


        // corpPayOrderFee Field Functions 
        bool hasCorpPayOrderFee() const { return this->corpPayOrderFee_ != nullptr;};
        void deleteCorpPayOrderFee() { this->corpPayOrderFee_ = nullptr;};
        inline double getCorpPayOrderFee() const { DARABONBA_PTR_GET_DEFAULT(corpPayOrderFee_, 0.0) };
        inline DataList& setCorpPayOrderFee(double corpPayOrderFee) { DARABONBA_PTR_SET_VALUE(corpPayOrderFee_, corpPayOrderFee) };


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


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline DataList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline DataList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCountry Field Functions 
        bool hasDepCountry() const { return this->depCountry_ != nullptr;};
        void deleteDepCountry() { this->depCountry_ = nullptr;};
        inline string getDepCountry() const { DARABONBA_PTR_GET_DEFAULT(depCountry_, "") };
        inline DataList& setDepCountry(string depCountry) { DARABONBA_PTR_SET_VALUE(depCountry_, depCountry) };


        // depCountryCode Field Functions 
        bool hasDepCountryCode() const { return this->depCountryCode_ != nullptr;};
        void deleteDepCountryCode() { this->depCountryCode_ = nullptr;};
        inline string getDepCountryCode() const { DARABONBA_PTR_GET_DEFAULT(depCountryCode_, "") };
        inline DataList& setDepCountryCode(string depCountryCode) { DARABONBA_PTR_SET_VALUE(depCountryCode_, depCountryCode) };


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


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline DataList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


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


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline DataList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


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


        // insOrderId Field Functions 
        bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
        void deleteInsOrderId() { this->insOrderId_ = nullptr;};
        inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
        inline DataList& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


        // insuranceFee Field Functions 
        bool hasInsuranceFee() const { return this->insuranceFee_ != nullptr;};
        void deleteInsuranceFee() { this->insuranceFee_ = nullptr;};
        inline double getInsuranceFee() const { DARABONBA_PTR_GET_DEFAULT(insuranceFee_, 0.0) };
        inline DataList& setInsuranceFee(double insuranceFee) { DARABONBA_PTR_SET_VALUE(insuranceFee_, insuranceFee) };


        // insuranceNumber Field Functions 
        bool hasInsuranceNumber() const { return this->insuranceNumber_ != nullptr;};
        void deleteInsuranceNumber() { this->insuranceNumber_ = nullptr;};
        inline string getInsuranceNumber() const { DARABONBA_PTR_GET_DEFAULT(insuranceNumber_, "") };
        inline DataList& setInsuranceNumber(string insuranceNumber) { DARABONBA_PTR_SET_VALUE(insuranceNumber_, insuranceNumber) };


        // insuranceProductName Field Functions 
        bool hasInsuranceProductName() const { return this->insuranceProductName_ != nullptr;};
        void deleteInsuranceProductName() { this->insuranceProductName_ = nullptr;};
        inline string getInsuranceProductName() const { DARABONBA_PTR_GET_DEFAULT(insuranceProductName_, "") };
        inline DataList& setInsuranceProductName(string insuranceProductName) { DARABONBA_PTR_SET_VALUE(insuranceProductName_, insuranceProductName) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline DataList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


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


        // mostDifferenceDeptTime Field Functions 
        bool hasMostDifferenceDeptTime() const { return this->mostDifferenceDeptTime_ != nullptr;};
        void deleteMostDifferenceDeptTime() { this->mostDifferenceDeptTime_ = nullptr;};
        inline string getMostDifferenceDeptTime() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDeptTime_, "") };
        inline DataList& setMostDifferenceDeptTime(string mostDifferenceDeptTime) { DARABONBA_PTR_SET_VALUE(mostDifferenceDeptTime_, mostDifferenceDeptTime) };


        // mostDifferenceDiscount Field Functions 
        bool hasMostDifferenceDiscount() const { return this->mostDifferenceDiscount_ != nullptr;};
        void deleteMostDifferenceDiscount() { this->mostDifferenceDiscount_ = nullptr;};
        inline string getMostDifferenceDiscount() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceDiscount_, "") };
        inline DataList& setMostDifferenceDiscount(string mostDifferenceDiscount) { DARABONBA_PTR_SET_VALUE(mostDifferenceDiscount_, mostDifferenceDiscount) };


        // mostDifferenceFlightNo Field Functions 
        bool hasMostDifferenceFlightNo() const { return this->mostDifferenceFlightNo_ != nullptr;};
        void deleteMostDifferenceFlightNo() { this->mostDifferenceFlightNo_ = nullptr;};
        inline string getMostDifferenceFlightNo() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceFlightNo_, "") };
        inline DataList& setMostDifferenceFlightNo(string mostDifferenceFlightNo) { DARABONBA_PTR_SET_VALUE(mostDifferenceFlightNo_, mostDifferenceFlightNo) };


        // mostDifferencePrice Field Functions 
        bool hasMostDifferencePrice() const { return this->mostDifferencePrice_ != nullptr;};
        void deleteMostDifferencePrice() { this->mostDifferencePrice_ = nullptr;};
        inline double getMostDifferencePrice() const { DARABONBA_PTR_GET_DEFAULT(mostDifferencePrice_, 0.0) };
        inline DataList& setMostDifferencePrice(double mostDifferencePrice) { DARABONBA_PTR_SET_VALUE(mostDifferencePrice_, mostDifferencePrice) };


        // mostDifferenceReason Field Functions 
        bool hasMostDifferenceReason() const { return this->mostDifferenceReason_ != nullptr;};
        void deleteMostDifferenceReason() { this->mostDifferenceReason_ = nullptr;};
        inline string getMostDifferenceReason() const { DARABONBA_PTR_GET_DEFAULT(mostDifferenceReason_, "") };
        inline DataList& setMostDifferenceReason(string mostDifferenceReason) { DARABONBA_PTR_SET_VALUE(mostDifferenceReason_, mostDifferenceReason) };


        // mostPrice Field Functions 
        bool hasMostPrice() const { return this->mostPrice_ != nullptr;};
        void deleteMostPrice() { this->mostPrice_ = nullptr;};
        inline double getMostPrice() const { DARABONBA_PTR_GET_DEFAULT(mostPrice_, 0.0) };
        inline DataList& setMostPrice(double mostPrice) { DARABONBA_PTR_SET_VALUE(mostPrice_, mostPrice) };


        // negotiationCouponFee Field Functions 
        bool hasNegotiationCouponFee() const { return this->negotiationCouponFee_ != nullptr;};
        void deleteNegotiationCouponFee() { this->negotiationCouponFee_ = nullptr;};
        inline double getNegotiationCouponFee() const { DARABONBA_PTR_GET_DEFAULT(negotiationCouponFee_, 0.0) };
        inline DataList& setNegotiationCouponFee(double negotiationCouponFee) { DARABONBA_PTR_SET_VALUE(negotiationCouponFee_, negotiationCouponFee) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline DataList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatusDesc Field Functions 
        bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
        void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
        inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
        inline DataList& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


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


        // refundChangeCost Field Functions 
        bool hasRefundChangeCost() const { return this->refundChangeCost_ != nullptr;};
        void deleteRefundChangeCost() { this->refundChangeCost_ = nullptr;};
        inline double getRefundChangeCost() const { DARABONBA_PTR_GET_DEFAULT(refundChangeCost_, 0.0) };
        inline DataList& setRefundChangeCost(double refundChangeCost) { DARABONBA_PTR_SET_VALUE(refundChangeCost_, refundChangeCost) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
        inline DataList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // refundResult Field Functions 
        bool hasRefundResult() const { return this->refundResult_ != nullptr;};
        void deleteRefundResult() { this->refundResult_ = nullptr;};
        inline string getRefundResult() const { DARABONBA_PTR_GET_DEFAULT(refundResult_, "") };
        inline DataList& setRefundResult(string refundResult) { DARABONBA_PTR_SET_VALUE(refundResult_, refundResult) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline DataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // repeatRefund Field Functions 
        bool hasRepeatRefund() const { return this->repeatRefund_ != nullptr;};
        void deleteRepeatRefund() { this->repeatRefund_ = nullptr;};
        inline string getRepeatRefund() const { DARABONBA_PTR_GET_DEFAULT(repeatRefund_, "") };
        inline DataList& setRepeatRefund(string repeatRefund) { DARABONBA_PTR_SET_VALUE(repeatRefund_, repeatRefund) };


        // sealPrice Field Functions 
        bool hasSealPrice() const { return this->sealPrice_ != nullptr;};
        void deleteSealPrice() { this->sealPrice_ = nullptr;};
        inline double getSealPrice() const { DARABONBA_PTR_GET_DEFAULT(sealPrice_, 0.0) };
        inline DataList& setSealPrice(double sealPrice) { DARABONBA_PTR_SET_VALUE(sealPrice_, sealPrice) };


        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline string getSegmentList() const { DARABONBA_PTR_GET_DEFAULT(segmentList_, "") };
        inline DataList& setSegmentList(string segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };


        // segmentType Field Functions 
        bool hasSegmentType() const { return this->segmentType_ != nullptr;};
        void deleteSegmentType() { this->segmentType_ = nullptr;};
        inline string getSegmentType() const { DARABONBA_PTR_GET_DEFAULT(segmentType_, "") };
        inline DataList& setSegmentType(string segmentType) { DARABONBA_PTR_SET_VALUE(segmentType_, segmentType) };


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


        // taxFee Field Functions 
        bool hasTaxFee() const { return this->taxFee_ != nullptr;};
        void deleteTaxFee() { this->taxFee_ = nullptr;};
        inline double getTaxFee() const { DARABONBA_PTR_GET_DEFAULT(taxFee_, 0.0) };
        inline DataList& setTaxFee(double taxFee) { DARABONBA_PTR_SET_VALUE(taxFee_, taxFee) };


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


        // ticketId Field Functions 
        bool hasTicketId() const { return this->ticketId_ != nullptr;};
        void deleteTicketId() { this->ticketId_ = nullptr;};
        inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
        inline DataList& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


        // trade Field Functions 
        bool hasTrade() const { return this->trade_ != nullptr;};
        void deleteTrade() { this->trade_ = nullptr;};
        inline string getTrade() const { DARABONBA_PTR_GET_DEFAULT(trade_, "") };
        inline DataList& setTrade(string trade) { DARABONBA_PTR_SET_VALUE(trade_, trade) };


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


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
        inline DataList& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


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


        // voyageName Field Functions 
        bool hasVoyageName() const { return this->voyageName_ != nullptr;};
        void deleteVoyageName() { this->voyageName_ = nullptr;};
        inline string getVoyageName() const { DARABONBA_PTR_GET_DEFAULT(voyageName_, "") };
        inline DataList& setVoyageName(string voyageName) { DARABONBA_PTR_SET_VALUE(voyageName_, voyageName) };


      protected:
        shared_ptr<string> adjustTime_ {};
        shared_ptr<int32_t> advanceDay_ {};
        shared_ptr<string> airlineCorpCode_ {};
        shared_ptr<string> airlineCorpName_ {};
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
        shared_ptr<string> arrCountry_ {};
        shared_ptr<string> arrCountryCode_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> arrStation_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> baseLocation_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> bookMode_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<double> btripCouponFee_ {};
        shared_ptr<string> businessTripResult_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<double> changeFee_ {};
        shared_ptr<string> changeResult_ {};
        shared_ptr<double> corpPayOrderFee_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<double> coupon_ {};
        shared_ptr<string> customContent_ {};
        shared_ptr<double> deductibleTax_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCountry_ {};
        shared_ptr<string> depCountryCode_ {};
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
        shared_ptr<string> foreignersTag_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> insOrderId_ {};
        shared_ptr<double> insuranceFee_ {};
        shared_ptr<string> insuranceNumber_ {};
        shared_ptr<string> insuranceProductName_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<string> mostDifferenceDeptTime_ {};
        shared_ptr<string> mostDifferenceDiscount_ {};
        shared_ptr<string> mostDifferenceFlightNo_ {};
        shared_ptr<double> mostDifferencePrice_ {};
        shared_ptr<string> mostDifferenceReason_ {};
        shared_ptr<double> mostPrice_ {};
        shared_ptr<double> negotiationCouponFee_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> positionLevel_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> refundChangeCost_ {};
        shared_ptr<double> refundFee_ {};
        shared_ptr<string> refundResult_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> repeatRefund_ {};
        shared_ptr<double> sealPrice_ {};
        shared_ptr<string> segmentList_ {};
        shared_ptr<string> segmentType_ {};
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
        shared_ptr<double> taxFee_ {};
        shared_ptr<string> taxRate_ {};
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
        shared_ptr<int32_t> tripType_ {};
        shared_ptr<int32_t> voucherType_ {};
        shared_ptr<string> voucherTypeDesc_ {};
        shared_ptr<string> voyageName_ {};
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
        && this->message_ == nullptr && this->module_ == nullptr && this->morePage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IeFlightBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IeFlightBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IeFlightBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IeFlightBillSettlementQueryResponseBody::Module) };
    inline IeFlightBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IeFlightBillSettlementQueryResponseBody::Module) };
    inline IeFlightBillSettlementQueryResponseBody& setModule(const IeFlightBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IeFlightBillSettlementQueryResponseBody& setModule(IeFlightBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // morePage Field Functions 
    bool hasMorePage() const { return this->morePage_ != nullptr;};
    void deleteMorePage() { this->morePage_ = nullptr;};
    inline bool getMorePage() const { DARABONBA_PTR_GET_DEFAULT(morePage_, false) };
    inline IeFlightBillSettlementQueryResponseBody& setMorePage(bool morePage) { DARABONBA_PTR_SET_VALUE(morePage_, morePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IeFlightBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IeFlightBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IeFlightBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IeFlightBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<bool> morePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
