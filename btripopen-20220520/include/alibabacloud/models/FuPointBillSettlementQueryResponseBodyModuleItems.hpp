// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUPOINTBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_FUPOINTBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FuPointBillSettlementQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuPointBillSettlementQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(adjust_time, adjustTime_);
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
      DARABONBA_PTR_TO_JSON(award_num, awardNum_);
      DARABONBA_PTR_TO_JSON(basis_amount, basisAmount_);
      DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_TO_JSON(billing_entity, billingEntity_);
      DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
      DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_TO_JSON(category_order_settle_price, categoryOrderSettlePrice_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_TO_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_TO_JSON(foreigners_tag, foreignersTag_);
      DARABONBA_PTR_TO_JSON(grant_num, grantNum_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(make_invoice, makeInvoice_);
      DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(origin_category, originCategory_);
      DARABONBA_PTR_TO_JSON(origin_order_id, originOrderId_);
      DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
      DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(purchase_order_id, purchaseOrderId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(save_amount, saveAmount_);
      DARABONBA_PTR_TO_JSON(scene_id, sceneId_);
      DARABONBA_PTR_TO_JSON(scene_name, sceneName_);
      DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_TO_JSON(show_sub_order_id, showSubOrderId_);
      DARABONBA_PTR_TO_JSON(sio, sio_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(third_invoice_id, thirdInvoiceId_);
      DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_TO_JSON(trade_reason, tradeReason_);
      DARABONBA_PTR_TO_JSON(traveler_email, travelerEmail_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, FuPointBillSettlementQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
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
      DARABONBA_PTR_FROM_JSON(award_num, awardNum_);
      DARABONBA_PTR_FROM_JSON(basis_amount, basisAmount_);
      DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_FROM_JSON(billing_entity, billingEntity_);
      DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
      DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_FROM_JSON(category_order_settle_price, categoryOrderSettlePrice_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_FROM_JSON(deductible_tax, deductibleTax_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_FROM_JSON(foreigners_tag, foreignersTag_);
      DARABONBA_PTR_FROM_JSON(grant_num, grantNum_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(make_invoice, makeInvoice_);
      DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(origin_category, originCategory_);
      DARABONBA_PTR_FROM_JSON(origin_order_id, originOrderId_);
      DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
      DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(purchase_order_id, purchaseOrderId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(save_amount, saveAmount_);
      DARABONBA_PTR_FROM_JSON(scene_id, sceneId_);
      DARABONBA_PTR_FROM_JSON(scene_name, sceneName_);
      DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
      DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_FROM_JSON(show_sub_order_id, showSubOrderId_);
      DARABONBA_PTR_FROM_JSON(sio, sio_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(third_invoice_id, thirdInvoiceId_);
      DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
      DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_FROM_JSON(trade_reason, tradeReason_);
      DARABONBA_PTR_FROM_JSON(traveler_email, travelerEmail_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    FuPointBillSettlementQueryResponseBodyModuleItems() = default ;
    FuPointBillSettlementQueryResponseBodyModuleItems(const FuPointBillSettlementQueryResponseBodyModuleItems &) = default ;
    FuPointBillSettlementQueryResponseBodyModuleItems(FuPointBillSettlementQueryResponseBodyModuleItems &&) = default ;
    FuPointBillSettlementQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuPointBillSettlementQueryResponseBodyModuleItems() = default ;
    FuPointBillSettlementQueryResponseBodyModuleItems& operator=(const FuPointBillSettlementQueryResponseBodyModuleItems &) = default ;
    FuPointBillSettlementQueryResponseBodyModuleItems& operator=(FuPointBillSettlementQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustTime_ != nullptr
        && this->alipayId_ != nullptr && this->alipayTradeNo_ != nullptr && this->applyArrCityCode_ != nullptr && this->applyArrCityName_ != nullptr && this->applyDepCityCode_ != nullptr
        && this->applyDepCityName_ != nullptr && this->applyExtendField_ != nullptr && this->applyId_ != nullptr && this->approverEmail_ != nullptr && this->approverId_ != nullptr
        && this->approverName_ != nullptr && this->awardNum_ != nullptr && this->basisAmount_ != nullptr && this->billRecordTime_ != nullptr && this->billingEntity_ != nullptr
        && this->bookMode_ != nullptr && this->bookTime_ != nullptr && this->bookerId_ != nullptr && this->bookerJobNo_ != nullptr && this->bookerName_ != nullptr
        && this->capitalDirection_ != nullptr && this->cascadeDepartment_ != nullptr && this->categoryDesc_ != nullptr && this->categoryOrderSettlePrice_ != nullptr && this->costCenter_ != nullptr
        && this->costCenterNumber_ != nullptr && this->costDepartment_ != nullptr && this->deductibleTax_ != nullptr && this->department_ != nullptr && this->departmentId_ != nullptr
        && this->feeType_ != nullptr && this->feeTypeDesc_ != nullptr && this->foreignersTag_ != nullptr && this->grantNum_ != nullptr && this->index_ != nullptr
        && this->invoiceTitle_ != nullptr && this->location_ != nullptr && this->makeInvoice_ != nullptr && this->mappingCompanyCode_ != nullptr && this->orderId_ != nullptr
        && this->orderStatusDesc_ != nullptr && this->originCategory_ != nullptr && this->originOrderId_ != nullptr && this->overApplyId_ != nullptr && this->paymentDepartmentId_ != nullptr
        && this->paymentDepartmentName_ != nullptr && this->primaryId_ != nullptr && this->processorOaCode_ != nullptr && this->projectCode_ != nullptr && this->projectName_ != nullptr
        && this->purchaseOrderId_ != nullptr && this->remark_ != nullptr && this->saveAmount_ != nullptr && this->sceneId_ != nullptr && this->sceneName_ != nullptr
        && this->settleTypeDesc_ != nullptr && this->settlementFee_ != nullptr && this->settlementGrantFee_ != nullptr && this->settlementTime_ != nullptr && this->settlementType_ != nullptr
        && this->showSubOrderId_ != nullptr && this->sio_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr && this->subOrderId_ != nullptr
        && this->taxRate_ != nullptr && this->thirdInvoiceId_ != nullptr && this->thirdItineraryId_ != nullptr && this->tradeActionDesc_ != nullptr && this->tradeReason_ != nullptr
        && this->travelerEmail_ != nullptr && this->travelerId_ != nullptr && this->travelerJobNo_ != nullptr && this->travelerMemberType_ != nullptr && this->travelerMemberTypeName_ != nullptr
        && this->travelerName_ != nullptr && this->voucherType_ != nullptr && this->voucherTypeDesc_ != nullptr; };
    // adjustTime Field Functions 
    bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
    void deleteAdjustTime() { this->adjustTime_ = nullptr;};
    inline string adjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


    // alipayId Field Functions 
    bool hasAlipayId() const { return this->alipayId_ != nullptr;};
    void deleteAlipayId() { this->alipayId_ = nullptr;};
    inline string alipayId() const { DARABONBA_PTR_GET_DEFAULT(alipayId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setAlipayId(string alipayId) { DARABONBA_PTR_SET_VALUE(alipayId_, alipayId) };


    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // applyArrCityCode Field Functions 
    bool hasApplyArrCityCode() const { return this->applyArrCityCode_ != nullptr;};
    void deleteApplyArrCityCode() { this->applyArrCityCode_ = nullptr;};
    inline string applyArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityCode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyArrCityCode(string applyArrCityCode) { DARABONBA_PTR_SET_VALUE(applyArrCityCode_, applyArrCityCode) };


    // applyArrCityName Field Functions 
    bool hasApplyArrCityName() const { return this->applyArrCityName_ != nullptr;};
    void deleteApplyArrCityName() { this->applyArrCityName_ = nullptr;};
    inline string applyArrCityName() const { DARABONBA_PTR_GET_DEFAULT(applyArrCityName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyArrCityName(string applyArrCityName) { DARABONBA_PTR_SET_VALUE(applyArrCityName_, applyArrCityName) };


    // applyDepCityCode Field Functions 
    bool hasApplyDepCityCode() const { return this->applyDepCityCode_ != nullptr;};
    void deleteApplyDepCityCode() { this->applyDepCityCode_ = nullptr;};
    inline string applyDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityCode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyDepCityCode(string applyDepCityCode) { DARABONBA_PTR_SET_VALUE(applyDepCityCode_, applyDepCityCode) };


    // applyDepCityName Field Functions 
    bool hasApplyDepCityName() const { return this->applyDepCityName_ != nullptr;};
    void deleteApplyDepCityName() { this->applyDepCityName_ = nullptr;};
    inline string applyDepCityName() const { DARABONBA_PTR_GET_DEFAULT(applyDepCityName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyDepCityName(string applyDepCityName) { DARABONBA_PTR_SET_VALUE(applyDepCityName_, applyDepCityName) };


    // applyExtendField Field Functions 
    bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
    void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
    inline string applyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // approverEmail Field Functions 
    bool hasApproverEmail() const { return this->approverEmail_ != nullptr;};
    void deleteApproverEmail() { this->approverEmail_ = nullptr;};
    inline string approverEmail() const { DARABONBA_PTR_GET_DEFAULT(approverEmail_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApproverEmail(string approverEmail) { DARABONBA_PTR_SET_VALUE(approverEmail_, approverEmail) };


    // approverId Field Functions 
    bool hasApproverId() const { return this->approverId_ != nullptr;};
    void deleteApproverId() { this->approverId_ = nullptr;};
    inline string approverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


    // approverName Field Functions 
    bool hasApproverName() const { return this->approverName_ != nullptr;};
    void deleteApproverName() { this->approverName_ = nullptr;};
    inline string approverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


    // awardNum Field Functions 
    bool hasAwardNum() const { return this->awardNum_ != nullptr;};
    void deleteAwardNum() { this->awardNum_ = nullptr;};
    inline double awardNum() const { DARABONBA_PTR_GET_DEFAULT(awardNum_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setAwardNum(double awardNum) { DARABONBA_PTR_SET_VALUE(awardNum_, awardNum) };


    // basisAmount Field Functions 
    bool hasBasisAmount() const { return this->basisAmount_ != nullptr;};
    void deleteBasisAmount() { this->basisAmount_ = nullptr;};
    inline string basisAmount() const { DARABONBA_PTR_GET_DEFAULT(basisAmount_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBasisAmount(string basisAmount) { DARABONBA_PTR_SET_VALUE(basisAmount_, basisAmount) };


    // billRecordTime Field Functions 
    bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
    void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
    inline string billRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


    // billingEntity Field Functions 
    bool hasBillingEntity() const { return this->billingEntity_ != nullptr;};
    void deleteBillingEntity() { this->billingEntity_ = nullptr;};
    inline string billingEntity() const { DARABONBA_PTR_GET_DEFAULT(billingEntity_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBillingEntity(string billingEntity) { DARABONBA_PTR_SET_VALUE(billingEntity_, billingEntity) };


    // bookMode Field Functions 
    bool hasBookMode() const { return this->bookMode_ != nullptr;};
    void deleteBookMode() { this->bookMode_ = nullptr;};
    inline string bookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline string bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerJobNo Field Functions 
    bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
    void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
    inline string bookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // cascadeDepartment Field Functions 
    bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
    void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
    inline string cascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


    // categoryDesc Field Functions 
    bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
    void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
    inline string categoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


    // categoryOrderSettlePrice Field Functions 
    bool hasCategoryOrderSettlePrice() const { return this->categoryOrderSettlePrice_ != nullptr;};
    void deleteCategoryOrderSettlePrice() { this->categoryOrderSettlePrice_ = nullptr;};
    inline string categoryOrderSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(categoryOrderSettlePrice_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCategoryOrderSettlePrice(string categoryOrderSettlePrice) { DARABONBA_PTR_SET_VALUE(categoryOrderSettlePrice_, categoryOrderSettlePrice) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // costDepartment Field Functions 
    bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
    void deleteCostDepartment() { this->costDepartment_ = nullptr;};
    inline string costDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


    // deductibleTax Field Functions 
    bool hasDeductibleTax() const { return this->deductibleTax_ != nullptr;};
    void deleteDeductibleTax() { this->deductibleTax_ = nullptr;};
    inline double deductibleTax() const { DARABONBA_PTR_GET_DEFAULT(deductibleTax_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setDeductibleTax(double deductibleTax) { DARABONBA_PTR_SET_VALUE(deductibleTax_, deductibleTax) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // feeTypeDesc Field Functions 
    bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
    void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
    inline string feeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


    // foreignersTag Field Functions 
    bool hasForeignersTag() const { return this->foreignersTag_ != nullptr;};
    void deleteForeignersTag() { this->foreignersTag_ = nullptr;};
    inline string foreignersTag() const { DARABONBA_PTR_GET_DEFAULT(foreignersTag_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setForeignersTag(string foreignersTag) { DARABONBA_PTR_SET_VALUE(foreignersTag_, foreignersTag) };


    // grantNum Field Functions 
    bool hasGrantNum() const { return this->grantNum_ != nullptr;};
    void deleteGrantNum() { this->grantNum_ = nullptr;};
    inline double grantNum() const { DARABONBA_PTR_GET_DEFAULT(grantNum_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setGrantNum(double grantNum) { DARABONBA_PTR_SET_VALUE(grantNum_, grantNum) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // makeInvoice Field Functions 
    bool hasMakeInvoice() const { return this->makeInvoice_ != nullptr;};
    void deleteMakeInvoice() { this->makeInvoice_ = nullptr;};
    inline string makeInvoice() const { DARABONBA_PTR_GET_DEFAULT(makeInvoice_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setMakeInvoice(string makeInvoice) { DARABONBA_PTR_SET_VALUE(makeInvoice_, makeInvoice) };


    // mappingCompanyCode Field Functions 
    bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
    void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
    inline string mappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // originCategory Field Functions 
    bool hasOriginCategory() const { return this->originCategory_ != nullptr;};
    void deleteOriginCategory() { this->originCategory_ = nullptr;};
    inline string originCategory() const { DARABONBA_PTR_GET_DEFAULT(originCategory_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setOriginCategory(string originCategory) { DARABONBA_PTR_SET_VALUE(originCategory_, originCategory) };


    // originOrderId Field Functions 
    bool hasOriginOrderId() const { return this->originOrderId_ != nullptr;};
    void deleteOriginOrderId() { this->originOrderId_ = nullptr;};
    inline string originOrderId() const { DARABONBA_PTR_GET_DEFAULT(originOrderId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setOriginOrderId(string originOrderId) { DARABONBA_PTR_SET_VALUE(originOrderId_, originOrderId) };


    // overApplyId Field Functions 
    bool hasOverApplyId() const { return this->overApplyId_ != nullptr;};
    void deleteOverApplyId() { this->overApplyId_ = nullptr;};
    inline string overApplyId() const { DARABONBA_PTR_GET_DEFAULT(overApplyId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setOverApplyId(string overApplyId) { DARABONBA_PTR_SET_VALUE(overApplyId_, overApplyId) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // processorOaCode Field Functions 
    bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
    void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
    inline string processorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // purchaseOrderId Field Functions 
    bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
    void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
    inline string purchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // saveAmount Field Functions 
    bool hasSaveAmount() const { return this->saveAmount_ != nullptr;};
    void deleteSaveAmount() { this->saveAmount_ = nullptr;};
    inline double saveAmount() const { DARABONBA_PTR_GET_DEFAULT(saveAmount_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSaveAmount(double saveAmount) { DARABONBA_PTR_SET_VALUE(saveAmount_, saveAmount) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // settleTypeDesc Field Functions 
    bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
    void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
    inline string settleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


    // settlementFee Field Functions 
    bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
    void deleteSettlementFee() { this->settlementFee_ = nullptr;};
    inline double settlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


    // settlementGrantFee Field Functions 
    bool hasSettlementGrantFee() const { return this->settlementGrantFee_ != nullptr;};
    void deleteSettlementGrantFee() { this->settlementGrantFee_ = nullptr;};
    inline double settlementGrantFee() const { DARABONBA_PTR_GET_DEFAULT(settlementGrantFee_, 0.0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSettlementGrantFee(double settlementGrantFee) { DARABONBA_PTR_SET_VALUE(settlementGrantFee_, settlementGrantFee) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


    // showSubOrderId Field Functions 
    bool hasShowSubOrderId() const { return this->showSubOrderId_ != nullptr;};
    void deleteShowSubOrderId() { this->showSubOrderId_ = nullptr;};
    inline string showSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(showSubOrderId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setShowSubOrderId(string showSubOrderId) { DARABONBA_PTR_SET_VALUE(showSubOrderId_, showSubOrderId) };


    // sio Field Functions 
    bool hasSio() const { return this->sio_ != nullptr;};
    void deleteSio() { this->sio_ = nullptr;};
    inline string sio() const { DARABONBA_PTR_GET_DEFAULT(sio_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSio(string sio) { DARABONBA_PTR_SET_VALUE(sio_, sio) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // thirdInvoiceId Field Functions 
    bool hasThirdInvoiceId() const { return this->thirdInvoiceId_ != nullptr;};
    void deleteThirdInvoiceId() { this->thirdInvoiceId_ = nullptr;};
    inline string thirdInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdInvoiceId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setThirdInvoiceId(string thirdInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdInvoiceId_, thirdInvoiceId) };


    // thirdItineraryId Field Functions 
    bool hasThirdItineraryId() const { return this->thirdItineraryId_ != nullptr;};
    void deleteThirdItineraryId() { this->thirdItineraryId_ = nullptr;};
    inline string thirdItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdItineraryId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setThirdItineraryId(string thirdItineraryId) { DARABONBA_PTR_SET_VALUE(thirdItineraryId_, thirdItineraryId) };


    // tradeActionDesc Field Functions 
    bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
    void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
    inline string tradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


    // tradeReason Field Functions 
    bool hasTradeReason() const { return this->tradeReason_ != nullptr;};
    void deleteTradeReason() { this->tradeReason_ = nullptr;};
    inline string tradeReason() const { DARABONBA_PTR_GET_DEFAULT(tradeReason_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTradeReason(string tradeReason) { DARABONBA_PTR_SET_VALUE(tradeReason_, tradeReason) };


    // travelerEmail Field Functions 
    bool hasTravelerEmail() const { return this->travelerEmail_ != nullptr;};
    void deleteTravelerEmail() { this->travelerEmail_ = nullptr;};
    inline string travelerEmail() const { DARABONBA_PTR_GET_DEFAULT(travelerEmail_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerEmail(string travelerEmail) { DARABONBA_PTR_SET_VALUE(travelerEmail_, travelerEmail) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerJobNo Field Functions 
    bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
    void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
    inline string travelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


    // travelerMemberType Field Functions 
    bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
    void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
    inline string travelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


    // travelerMemberTypeName Field Functions 
    bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
    void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
    inline string travelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


    // voucherTypeDesc Field Functions 
    bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
    void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
    inline string voucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
    inline FuPointBillSettlementQueryResponseBodyModuleItems& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


  protected:
    std::shared_ptr<string> adjustTime_ = nullptr;
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
    std::shared_ptr<double> awardNum_ = nullptr;
    std::shared_ptr<string> basisAmount_ = nullptr;
    std::shared_ptr<string> billRecordTime_ = nullptr;
    std::shared_ptr<string> billingEntity_ = nullptr;
    std::shared_ptr<string> bookMode_ = nullptr;
    std::shared_ptr<string> bookTime_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerJobNo_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> cascadeDepartment_ = nullptr;
    std::shared_ptr<string> categoryDesc_ = nullptr;
    std::shared_ptr<string> categoryOrderSettlePrice_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> costDepartment_ = nullptr;
    std::shared_ptr<double> deductibleTax_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> feeTypeDesc_ = nullptr;
    std::shared_ptr<string> foreignersTag_ = nullptr;
    std::shared_ptr<double> grantNum_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    // Location
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> makeInvoice_ = nullptr;
    std::shared_ptr<string> mappingCompanyCode_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<string> originCategory_ = nullptr;
    std::shared_ptr<string> originOrderId_ = nullptr;
    std::shared_ptr<string> overApplyId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<string> processorOaCode_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> purchaseOrderId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<double> saveAmount_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> settleTypeDesc_ = nullptr;
    std::shared_ptr<double> settlementFee_ = nullptr;
    std::shared_ptr<double> settlementGrantFee_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
    std::shared_ptr<string> showSubOrderId_ = nullptr;
    // SIO
    std::shared_ptr<string> sio_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> thirdInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdItineraryId_ = nullptr;
    std::shared_ptr<string> tradeActionDesc_ = nullptr;
    std::shared_ptr<string> tradeReason_ = nullptr;
    std::shared_ptr<string> travelerEmail_ = nullptr;
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
