// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORHOTELBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORHOTELBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
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
  class CooperatorHotelBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorHotelBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CooperatorHotelBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CooperatorHotelBillSettlementQueryResponseBody() = default ;
    CooperatorHotelBillSettlementQueryResponseBody(const CooperatorHotelBillSettlementQueryResponseBody &) = default ;
    CooperatorHotelBillSettlementQueryResponseBody(CooperatorHotelBillSettlementQueryResponseBody &&) = default ;
    CooperatorHotelBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorHotelBillSettlementQueryResponseBody() = default ;
    CooperatorHotelBillSettlementQueryResponseBody& operator=(const CooperatorHotelBillSettlementQueryResponseBody &) = default ;
    CooperatorHotelBillSettlementQueryResponseBody& operator=(CooperatorHotelBillSettlementQueryResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(average_nights, averageNights_);
          DARABONBA_PTR_TO_JSON(base_location, baseLocation_);
          DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_TO_JSON(book_channel, bookChannel_);
          DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
          DARABONBA_PTR_TO_JSON(book_reason, bookReason_);
          DARABONBA_PTR_TO_JSON(book_time, bookTime_);
          DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
          DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
          DARABONBA_PTR_TO_JSON(brand_group, brandGroup_);
          DARABONBA_PTR_TO_JSON(brand_name, brandName_);
          DARABONBA_PTR_TO_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_TO_JSON(check_in_date, checkInDate_);
          DARABONBA_PTR_TO_JSON(checkout_date, checkoutDate_);
          DARABONBA_PTR_TO_JSON(city, city_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_county, cityCounty_);
          DARABONBA_PTR_TO_JSON(city_county_code, cityCountyCode_);
          DARABONBA_PTR_TO_JSON(cooperator_bill_code, cooperatorBillCode_);
          DARABONBA_PTR_TO_JSON(cooperator_name, cooperatorName_);
          DARABONBA_PTR_TO_JSON(cooperator_order_id, cooperatorOrderId_);
          DARABONBA_PTR_TO_JSON(corp_refund_fee, corpRefundFee_);
          DARABONBA_PTR_TO_JSON(corp_total_fee, corpTotalFee_);
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_TO_JSON(custom_content, customContent_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(department_id, departmentId_);
          DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
          DARABONBA_PTR_TO_JSON(fee_type, feeType_);
          DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_TO_JSON(fees, fees_);
          DARABONBA_PTR_TO_JSON(fines, fines_);
          DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_TO_JSON(fu_point_fee, fuPointFee_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(is_early_departure, isEarlyDeparture_);
          DARABONBA_PTR_TO_JSON(is_negotiation, isNegotiation_);
          DARABONBA_PTR_TO_JSON(is_share_str, isShareStr_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_TO_JSON(nights, nights_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(order_type, orderType_);
          DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(person_refund_fee, personRefundFee_);
          DARABONBA_PTR_TO_JSON(person_settle_price, personSettlePrice_);
          DARABONBA_PTR_TO_JSON(position, position_);
          DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
          DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
          DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_name, projectName_);
          DARABONBA_PTR_TO_JSON(promotion_fee, promotionFee_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
          DARABONBA_PTR_TO_JSON(reserve_rule, reserveRule_);
          DARABONBA_PTR_TO_JSON(room_no, roomNo_);
          DARABONBA_PTR_TO_JSON(room_number, roomNumber_);
          DARABONBA_PTR_TO_JSON(room_price, roomPrice_);
          DARABONBA_PTR_TO_JSON(room_type, roomType_);
          DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_TO_JSON(sio, sio_);
          DARABONBA_PTR_TO_JSON(star, star_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_TO_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_TO_JSON(total_nights, totalNights_);
          DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_TO_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
          DARABONBA_PTR_FROM_JSON(average_nights, averageNights_);
          DARABONBA_PTR_FROM_JSON(base_location, baseLocation_);
          DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
          DARABONBA_PTR_FROM_JSON(book_channel, bookChannel_);
          DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
          DARABONBA_PTR_FROM_JSON(book_reason, bookReason_);
          DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
          DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
          DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
          DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
          DARABONBA_PTR_FROM_JSON(brand_group, brandGroup_);
          DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
          DARABONBA_PTR_FROM_JSON(business_trip_result, businessTripResult_);
          DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
          DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
          DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
          DARABONBA_PTR_FROM_JSON(check_in_date, checkInDate_);
          DARABONBA_PTR_FROM_JSON(checkout_date, checkoutDate_);
          DARABONBA_PTR_FROM_JSON(city, city_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_county, cityCounty_);
          DARABONBA_PTR_FROM_JSON(city_county_code, cityCountyCode_);
          DARABONBA_PTR_FROM_JSON(cooperator_bill_code, cooperatorBillCode_);
          DARABONBA_PTR_FROM_JSON(cooperator_name, cooperatorName_);
          DARABONBA_PTR_FROM_JSON(cooperator_order_id, cooperatorOrderId_);
          DARABONBA_PTR_FROM_JSON(corp_refund_fee, corpRefundFee_);
          DARABONBA_PTR_FROM_JSON(corp_total_fee, corpTotalFee_);
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_FROM_JSON(custom_content, customContent_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
          DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
          DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
          DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_FROM_JSON(fees, fees_);
          DARABONBA_PTR_FROM_JSON(fines, fines_);
          DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
          DARABONBA_PTR_FROM_JSON(fu_point_fee, fuPointFee_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(is_early_departure, isEarlyDeparture_);
          DARABONBA_PTR_FROM_JSON(is_negotiation, isNegotiation_);
          DARABONBA_PTR_FROM_JSON(is_share_str, isShareStr_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_FROM_JSON(nights, nights_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(order_type, orderType_);
          DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(person_refund_fee, personRefundFee_);
          DARABONBA_PTR_FROM_JSON(person_settle_price, personSettlePrice_);
          DARABONBA_PTR_FROM_JSON(position, position_);
          DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
          DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
          DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_name, projectName_);
          DARABONBA_PTR_FROM_JSON(promotion_fee, promotionFee_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
          DARABONBA_PTR_FROM_JSON(reserve_rule, reserveRule_);
          DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
          DARABONBA_PTR_FROM_JSON(room_number, roomNumber_);
          DARABONBA_PTR_FROM_JSON(room_price, roomPrice_);
          DARABONBA_PTR_FROM_JSON(room_type, roomType_);
          DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_FROM_JSON(sio, sio_);
          DARABONBA_PTR_FROM_JSON(star, star_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_FROM_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_FROM_JSON(total_nights, totalNights_);
          DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_FROM_JSON(traveler_email, travelerEmail_);
          DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
          DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
          DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
          DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
          DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
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
        && this->alipayTradeNo_ == nullptr && this->applyArrCityCode_ == nullptr && this->applyArrCityName_ == nullptr && this->applyDepCityCode_ == nullptr && this->applyDepCityName_ == nullptr
        && this->applyExtendField_ == nullptr && this->applyId_ == nullptr && this->approverEmail_ == nullptr && this->approverId_ == nullptr && this->approverName_ == nullptr
        && this->averageNights_ == nullptr && this->baseLocation_ == nullptr && this->billRecordTime_ == nullptr && this->bookChannel_ == nullptr && this->bookMode_ == nullptr
        && this->bookReason_ == nullptr && this->bookTime_ == nullptr && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr && this->bookerName_ == nullptr
        && this->brandGroup_ == nullptr && this->brandName_ == nullptr && this->businessTripResult_ == nullptr && this->capitalDirection_ == nullptr && this->cascadeDepartment_ == nullptr
        && this->categoryDesc_ == nullptr && this->checkInDate_ == nullptr && this->checkoutDate_ == nullptr && this->city_ == nullptr && this->cityCode_ == nullptr
        && this->cityCounty_ == nullptr && this->cityCountyCode_ == nullptr && this->cooperatorBillCode_ == nullptr && this->cooperatorName_ == nullptr && this->cooperatorOrderId_ == nullptr
        && this->corpRefundFee_ == nullptr && this->corpTotalFee_ == nullptr && this->costCenter_ == nullptr && this->costCenterNumber_ == nullptr && this->costDepartment_ == nullptr
        && this->customContent_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr && this->exceedReason_ == nullptr && this->feeType_ == nullptr
        && this->feeTypeDesc_ == nullptr && this->fees_ == nullptr && this->fines_ == nullptr && this->foreignersTag_ == nullptr && this->fuPointFee_ == nullptr
        && this->hotelName_ == nullptr && this->index_ == nullptr && this->invoiceTitle_ == nullptr && this->isEarlyDeparture_ == nullptr && this->isNegotiation_ == nullptr
        && this->isShareStr_ == nullptr && this->location_ == nullptr && this->mappingCompanyCode_ == nullptr && this->nights_ == nullptr && this->orderId_ == nullptr
        && this->orderPrice_ == nullptr && this->orderStatusDesc_ == nullptr && this->orderType_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->personRefundFee_ == nullptr && this->personSettlePrice_ == nullptr && this->position_ == nullptr && this->positionLevel_ == nullptr
        && this->primaryId_ == nullptr && this->processorOaCode_ == nullptr && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->promotionFee_ == nullptr
        && this->remark_ == nullptr && this->reserveRule_ == nullptr && this->roomNo_ == nullptr && this->roomNumber_ == nullptr && this->roomPrice_ == nullptr
        && this->roomType_ == nullptr && this->serviceFee_ == nullptr && this->settleTypeDesc_ == nullptr && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr
        && this->settlementTime_ == nullptr && this->settlementType_ == nullptr && this->sio_ == nullptr && this->star_ == nullptr && this->status_ == nullptr
        && this->statusDesc_ == nullptr && this->subOrderId_ == nullptr && this->taxRate_ == nullptr && this->thirdInvoiceId_ == nullptr && this->thirdItineraryId_ == nullptr
        && this->totalNights_ == nullptr && this->tradeActionDesc_ == nullptr && this->travelerEmail_ == nullptr && this->travelerId_ == nullptr && this->travelerJobNo_ == nullptr
        && this->travelerMemberType_ == nullptr && this->travelerMemberTypeName_ == nullptr && this->travelerName_ == nullptr && this->voucherType_ == nullptr && this->voucherTypeDesc_ == nullptr; };
        // adjustTime Field Functions 
        bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
        void deleteAdjustTime() { this->adjustTime_ = nullptr;};
        inline string getAdjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
        inline Items& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


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


        // averageNights Field Functions 
        bool hasAverageNights() const { return this->averageNights_ != nullptr;};
        void deleteAverageNights() { this->averageNights_ = nullptr;};
        inline double getAverageNights() const { DARABONBA_PTR_GET_DEFAULT(averageNights_, 0.0) };
        inline Items& setAverageNights(double averageNights) { DARABONBA_PTR_SET_VALUE(averageNights_, averageNights) };


        // baseLocation Field Functions 
        bool hasBaseLocation() const { return this->baseLocation_ != nullptr;};
        void deleteBaseLocation() { this->baseLocation_ = nullptr;};
        inline string getBaseLocation() const { DARABONBA_PTR_GET_DEFAULT(baseLocation_, "") };
        inline Items& setBaseLocation(string baseLocation) { DARABONBA_PTR_SET_VALUE(baseLocation_, baseLocation) };


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


        // bookReason Field Functions 
        bool hasBookReason() const { return this->bookReason_ != nullptr;};
        void deleteBookReason() { this->bookReason_ = nullptr;};
        inline string getBookReason() const { DARABONBA_PTR_GET_DEFAULT(bookReason_, "") };
        inline Items& setBookReason(string bookReason) { DARABONBA_PTR_SET_VALUE(bookReason_, bookReason) };


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


        // brandGroup Field Functions 
        bool hasBrandGroup() const { return this->brandGroup_ != nullptr;};
        void deleteBrandGroup() { this->brandGroup_ = nullptr;};
        inline string getBrandGroup() const { DARABONBA_PTR_GET_DEFAULT(brandGroup_, "") };
        inline Items& setBrandGroup(string brandGroup) { DARABONBA_PTR_SET_VALUE(brandGroup_, brandGroup) };


        // brandName Field Functions 
        bool hasBrandName() const { return this->brandName_ != nullptr;};
        void deleteBrandName() { this->brandName_ = nullptr;};
        inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
        inline Items& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


        // businessTripResult Field Functions 
        bool hasBusinessTripResult() const { return this->businessTripResult_ != nullptr;};
        void deleteBusinessTripResult() { this->businessTripResult_ = nullptr;};
        inline string getBusinessTripResult() const { DARABONBA_PTR_GET_DEFAULT(businessTripResult_, "") };
        inline Items& setBusinessTripResult(string businessTripResult) { DARABONBA_PTR_SET_VALUE(businessTripResult_, businessTripResult) };


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


        // checkInDate Field Functions 
        bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
        void deleteCheckInDate() { this->checkInDate_ = nullptr;};
        inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
        inline Items& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


        // checkoutDate Field Functions 
        bool hasCheckoutDate() const { return this->checkoutDate_ != nullptr;};
        void deleteCheckoutDate() { this->checkoutDate_ = nullptr;};
        inline string getCheckoutDate() const { DARABONBA_PTR_GET_DEFAULT(checkoutDate_, "") };
        inline Items& setCheckoutDate(string checkoutDate) { DARABONBA_PTR_SET_VALUE(checkoutDate_, checkoutDate) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline Items& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline Items& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityCounty Field Functions 
        bool hasCityCounty() const { return this->cityCounty_ != nullptr;};
        void deleteCityCounty() { this->cityCounty_ = nullptr;};
        inline string getCityCounty() const { DARABONBA_PTR_GET_DEFAULT(cityCounty_, "") };
        inline Items& setCityCounty(string cityCounty) { DARABONBA_PTR_SET_VALUE(cityCounty_, cityCounty) };


        // cityCountyCode Field Functions 
        bool hasCityCountyCode() const { return this->cityCountyCode_ != nullptr;};
        void deleteCityCountyCode() { this->cityCountyCode_ = nullptr;};
        inline int32_t getCityCountyCode() const { DARABONBA_PTR_GET_DEFAULT(cityCountyCode_, 0) };
        inline Items& setCityCountyCode(int32_t cityCountyCode) { DARABONBA_PTR_SET_VALUE(cityCountyCode_, cityCountyCode) };


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


        // corpRefundFee Field Functions 
        bool hasCorpRefundFee() const { return this->corpRefundFee_ != nullptr;};
        void deleteCorpRefundFee() { this->corpRefundFee_ = nullptr;};
        inline double getCorpRefundFee() const { DARABONBA_PTR_GET_DEFAULT(corpRefundFee_, 0.0) };
        inline Items& setCorpRefundFee(double corpRefundFee) { DARABONBA_PTR_SET_VALUE(corpRefundFee_, corpRefundFee) };


        // corpTotalFee Field Functions 
        bool hasCorpTotalFee() const { return this->corpTotalFee_ != nullptr;};
        void deleteCorpTotalFee() { this->corpTotalFee_ = nullptr;};
        inline double getCorpTotalFee() const { DARABONBA_PTR_GET_DEFAULT(corpTotalFee_, 0.0) };
        inline Items& setCorpTotalFee(double corpTotalFee) { DARABONBA_PTR_SET_VALUE(corpTotalFee_, corpTotalFee) };


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


        // customContent Field Functions 
        bool hasCustomContent() const { return this->customContent_ != nullptr;};
        void deleteCustomContent() { this->customContent_ = nullptr;};
        inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
        inline Items& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


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


        // fees Field Functions 
        bool hasFees() const { return this->fees_ != nullptr;};
        void deleteFees() { this->fees_ = nullptr;};
        inline double getFees() const { DARABONBA_PTR_GET_DEFAULT(fees_, 0.0) };
        inline Items& setFees(double fees) { DARABONBA_PTR_SET_VALUE(fees_, fees) };


        // fines Field Functions 
        bool hasFines() const { return this->fines_ != nullptr;};
        void deleteFines() { this->fines_ = nullptr;};
        inline double getFines() const { DARABONBA_PTR_GET_DEFAULT(fines_, 0.0) };
        inline Items& setFines(double fines) { DARABONBA_PTR_SET_VALUE(fines_, fines) };


        // foreignersTag Field Functions 
        bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
        void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
        inline string getForeignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
        inline Items& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


        // fuPointFee Field Functions 
        bool hasFuPointFee() const { return this->fuPointFee_ != nullptr;};
        void deleteFuPointFee() { this->fuPointFee_ = nullptr;};
        inline double getFuPointFee() const { DARABONBA_PTR_GET_DEFAULT(fuPointFee_, 0.0) };
        inline Items& setFuPointFee(double fuPointFee) { DARABONBA_PTR_SET_VALUE(fuPointFee_, fuPointFee) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline Items& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline Items& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline Items& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // isEarlyDeparture Field Functions 
        bool hasIsEarlyDeparture() const { return this->isEarlyDeparture_ != nullptr;};
        void deleteIsEarlyDeparture() { this->isEarlyDeparture_ = nullptr;};
        inline string getIsEarlyDeparture() const { DARABONBA_PTR_GET_DEFAULT(isEarlyDeparture_, "") };
        inline Items& setIsEarlyDeparture(string isEarlyDeparture) { DARABONBA_PTR_SET_VALUE(isEarlyDeparture_, isEarlyDeparture) };


        // isNegotiation Field Functions 
        bool hasIsNegotiation() const { return this->isNegotiation_ != nullptr;};
        void deleteIsNegotiation() { this->isNegotiation_ = nullptr;};
        inline string getIsNegotiation() const { DARABONBA_PTR_GET_DEFAULT(isNegotiation_, "") };
        inline Items& setIsNegotiation(string isNegotiation) { DARABONBA_PTR_SET_VALUE(isNegotiation_, isNegotiation) };


        // isShareStr Field Functions 
        bool hasIsShareStr() const { return this->isShareStr_ != nullptr;};
        void deleteIsShareStr() { this->isShareStr_ = nullptr;};
        inline string getIsShareStr() const { DARABONBA_PTR_GET_DEFAULT(isShareStr_, "") };
        inline Items& setIsShareStr(string isShareStr) { DARABONBA_PTR_SET_VALUE(isShareStr_, isShareStr) };


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


        // nights Field Functions 
        bool hasNights() const { return this->nights_ != nullptr;};
        void deleteNights() { this->nights_ = nullptr;};
        inline int32_t getNights() const { DARABONBA_PTR_GET_DEFAULT(nights_, 0) };
        inline Items& setNights(int32_t nights) { DARABONBA_PTR_SET_VALUE(nights_, nights) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline Items& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderPrice Field Functions 
        bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
        void deleteOrderPrice() { this->orderPrice_ = nullptr;};
        inline double getOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0.0) };
        inline Items& setOrderPrice(double orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


        // orderStatusDesc Field Functions 
        bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
        void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
        inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
        inline Items& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline Items& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


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


        // personRefundFee Field Functions 
        bool hasPersonRefundFee() const { return this->personRefundFee_ != nullptr;};
        void deletePersonRefundFee() { this->personRefundFee_ = nullptr;};
        inline double getPersonRefundFee() const { DARABONBA_PTR_GET_DEFAULT(personRefundFee_, 0.0) };
        inline Items& setPersonRefundFee(double personRefundFee) { DARABONBA_PTR_SET_VALUE(personRefundFee_, personRefundFee) };


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


        // promotionFee Field Functions 
        bool hasPromotionFee() const { return this->promotionFee_ != nullptr;};
        void deletePromotionFee() { this->promotionFee_ = nullptr;};
        inline double getPromotionFee() const { DARABONBA_PTR_GET_DEFAULT(promotionFee_, 0.0) };
        inline Items& setPromotionFee(double promotionFee) { DARABONBA_PTR_SET_VALUE(promotionFee_, promotionFee) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Items& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // reserveRule Field Functions 
        bool hasReserveRule() const { return this->reserveRule_ != nullptr;};
        void deleteReserveRule() { this->reserveRule_ = nullptr;};
        inline int32_t getReserveRule() const { DARABONBA_PTR_GET_DEFAULT(reserveRule_, 0) };
        inline Items& setReserveRule(int32_t reserveRule) { DARABONBA_PTR_SET_VALUE(reserveRule_, reserveRule) };


        // roomNo Field Functions 
        bool hasRoomNo() const { return this->roomNo_ != nullptr;};
        void deleteRoomNo() { this->roomNo_ = nullptr;};
        inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
        inline Items& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


        // roomNumber Field Functions 
        bool hasRoomNumber() const { return this->roomNumber_ != nullptr;};
        void deleteRoomNumber() { this->roomNumber_ = nullptr;};
        inline int32_t getRoomNumber() const { DARABONBA_PTR_GET_DEFAULT(roomNumber_, 0) };
        inline Items& setRoomNumber(int32_t roomNumber) { DARABONBA_PTR_SET_VALUE(roomNumber_, roomNumber) };


        // roomPrice Field Functions 
        bool hasRoomPrice() const { return this->roomPrice_ != nullptr;};
        void deleteRoomPrice() { this->roomPrice_ = nullptr;};
        inline double getRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(roomPrice_, 0.0) };
        inline Items& setRoomPrice(double roomPrice) { DARABONBA_PTR_SET_VALUE(roomPrice_, roomPrice) };


        // roomType Field Functions 
        bool hasRoomType() const { return this->roomType_ != nullptr;};
        void deleteRoomType() { this->roomType_ = nullptr;};
        inline string getRoomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, "") };
        inline Items& setRoomType(string roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


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


        // star Field Functions 
        bool hasStar() const { return this->star_ != nullptr;};
        void deleteStar() { this->star_ = nullptr;};
        inline string getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
        inline Items& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


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


        // totalNights Field Functions 
        bool hasTotalNights() const { return this->totalNights_ != nullptr;};
        void deleteTotalNights() { this->totalNights_ = nullptr;};
        inline int32_t getTotalNights() const { DARABONBA_PTR_GET_DEFAULT(totalNights_, 0) };
        inline Items& setTotalNights(int32_t totalNights) { DARABONBA_PTR_SET_VALUE(totalNights_, totalNights) };


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
        shared_ptr<double> averageNights_ {};
        shared_ptr<string> baseLocation_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> bookChannel_ {};
        shared_ptr<string> bookMode_ {};
        shared_ptr<string> bookReason_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<string> brandGroup_ {};
        shared_ptr<string> brandName_ {};
        shared_ptr<string> businessTripResult_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<string> checkInDate_ {};
        shared_ptr<string> checkoutDate_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityCounty_ {};
        shared_ptr<int32_t> cityCountyCode_ {};
        shared_ptr<string> cooperatorBillCode_ {};
        shared_ptr<string> cooperatorName_ {};
        shared_ptr<string> cooperatorOrderId_ {};
        shared_ptr<double> corpRefundFee_ {};
        shared_ptr<double> corpTotalFee_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<string> customContent_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> exceedReason_ {};
        shared_ptr<string> feeType_ {};
        shared_ptr<string> feeTypeDesc_ {};
        shared_ptr<double> fees_ {};
        shared_ptr<double> fines_ {};
        shared_ptr<string> foreignersTag_ {};
        shared_ptr<double> fuPointFee_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> isEarlyDeparture_ {};
        shared_ptr<string> isNegotiation_ {};
        shared_ptr<string> isShareStr_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<int32_t> nights_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<double> orderPrice_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<double> personRefundFee_ {};
        shared_ptr<double> personSettlePrice_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> positionLevel_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> promotionFee_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<int32_t> reserveRule_ {};
        shared_ptr<string> roomNo_ {};
        shared_ptr<int32_t> roomNumber_ {};
        shared_ptr<double> roomPrice_ {};
        shared_ptr<string> roomType_ {};
        shared_ptr<double> serviceFee_ {};
        shared_ptr<string> settleTypeDesc_ {};
        shared_ptr<double> settlementFee_ {};
        shared_ptr<double> settlementGrantFee_ {};
        shared_ptr<string> settlementTime_ {};
        shared_ptr<string> settlementType_ {};
        shared_ptr<string> sio_ {};
        shared_ptr<string> star_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> subOrderId_ {};
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> thirdInvoiceId_ {};
        shared_ptr<string> thirdItineraryId_ {};
        shared_ptr<int32_t> totalNights_ {};
        shared_ptr<string> tradeActionDesc_ {};
        shared_ptr<string> travelerEmail_ {};
        shared_ptr<string> travelerId_ {};
        shared_ptr<string> travelerJobNo_ {};
        shared_ptr<string> travelerMemberType_ {};
        shared_ptr<string> travelerMemberTypeName_ {};
        shared_ptr<string> travelerName_ {};
        shared_ptr<int32_t> voucherType_ {};
        shared_ptr<string> voucherTypeDesc_ {};
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
    inline CooperatorHotelBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CooperatorHotelBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CooperatorHotelBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CooperatorHotelBillSettlementQueryResponseBody::Module) };
    inline CooperatorHotelBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CooperatorHotelBillSettlementQueryResponseBody::Module) };
    inline CooperatorHotelBillSettlementQueryResponseBody& setModule(const CooperatorHotelBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CooperatorHotelBillSettlementQueryResponseBody& setModule(CooperatorHotelBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CooperatorHotelBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CooperatorHotelBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CooperatorHotelBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CooperatorHotelBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
