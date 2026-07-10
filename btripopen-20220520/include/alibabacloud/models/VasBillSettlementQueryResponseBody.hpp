// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VASBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VASBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
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
  class VasBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VasBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, VasBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    VasBillSettlementQueryResponseBody() = default ;
    VasBillSettlementQueryResponseBody(const VasBillSettlementQueryResponseBody &) = default ;
    VasBillSettlementQueryResponseBody(VasBillSettlementQueryResponseBody &&) = default ;
    VasBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VasBillSettlementQueryResponseBody() = default ;
    VasBillSettlementQueryResponseBody& operator=(const VasBillSettlementQueryResponseBody &) = default ;
    VasBillSettlementQueryResponseBody& operator=(VasBillSettlementQueryResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(alipay_id, alipayId_);
          DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
          DARABONBA_PTR_TO_JSON(apply_arr_city_code, applyArrCityCode_);
          DARABONBA_PTR_TO_JSON(apply_arr_city_name, applyArrCityName_);
          DARABONBA_PTR_TO_JSON(apply_dep_city_code, applyDepCityCode_);
          DARABONBA_PTR_TO_JSON(apply_dep_city_name, applyDepCityName_);
          DARABONBA_PTR_TO_JSON(apply_extend_field, applyExtendField_);
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(belong_business, belongBusiness_);
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
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(department_id, departmentId_);
          DARABONBA_PTR_TO_JSON(fee_type, feeType_);
          DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
          DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_TO_JSON(product_count, productCount_);
          DARABONBA_PTR_TO_JSON(product_id, productId_);
          DARABONBA_PTR_TO_JSON(product_name, productName_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_name, projectName_);
          DARABONBA_PTR_TO_JSON(promotion_fee, promotionFee_);
          DARABONBA_PTR_TO_JSON(purchase_order_id, purchaseOrderId_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
          DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_TO_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_TO_JSON(specification, specification_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_TO_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_TO_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_TO_JSON(trade_remark, tradeRemark_);
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
          DARABONBA_PTR_FROM_JSON(alipay_id, alipayId_);
          DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
          DARABONBA_PTR_FROM_JSON(apply_arr_city_code, applyArrCityCode_);
          DARABONBA_PTR_FROM_JSON(apply_arr_city_name, applyArrCityName_);
          DARABONBA_PTR_FROM_JSON(apply_dep_city_code, applyDepCityCode_);
          DARABONBA_PTR_FROM_JSON(apply_dep_city_name, applyDepCityName_);
          DARABONBA_PTR_FROM_JSON(apply_extend_field, applyExtendField_);
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(belong_business, belongBusiness_);
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
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
          DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
          DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(over_apply_id, overApplyId_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
          DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
          DARABONBA_PTR_FROM_JSON(product_count, productCount_);
          DARABONBA_PTR_FROM_JSON(product_id, productId_);
          DARABONBA_PTR_FROM_JSON(product_name, productName_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_name, projectName_);
          DARABONBA_PTR_FROM_JSON(promotion_fee, promotionFee_);
          DARABONBA_PTR_FROM_JSON(purchase_order_id, purchaseOrderId_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
          DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
          DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
          DARABONBA_PTR_FROM_JSON(settlement_grant_fee, settlementGrantFee_);
          DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
          DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
          DARABONBA_PTR_FROM_JSON(specification, specification_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_FROM_JSON(third_invoice_id, thirdInvoiceId_);
          DARABONBA_PTR_FROM_JSON(third_itinerary_id, thirdItineraryId_);
          DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
          DARABONBA_PTR_FROM_JSON(trade_remark, tradeRemark_);
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
        && this->alipayId_ == nullptr && this->alipayTradeNo_ == nullptr && this->applyArrCityCode_ == nullptr && this->applyArrCityName_ == nullptr && this->applyDepCityCode_ == nullptr
        && this->applyDepCityName_ == nullptr && this->applyExtendField_ == nullptr && this->applyId_ == nullptr && this->belongBusiness_ == nullptr && this->billRecordTime_ == nullptr
        && this->billingEntity_ == nullptr && this->bookMode_ == nullptr && this->bookTime_ == nullptr && this->bookerId_ == nullptr && this->bookerJobNo_ == nullptr
        && this->bookerName_ == nullptr && this->capitalDirection_ == nullptr && this->cascadeDepartment_ == nullptr && this->categoryDesc_ == nullptr && this->costCenter_ == nullptr
        && this->costCenterNumber_ == nullptr && this->costDepartment_ == nullptr && this->department_ == nullptr && this->departmentId_ == nullptr && this->feeType_ == nullptr
        && this->feeTypeDesc_ == nullptr && this->index_ == nullptr && this->invoiceTitle_ == nullptr && this->mappingCompanyCode_ == nullptr && this->orderId_ == nullptr
        && this->orderPrice_ == nullptr && this->orderStatusDesc_ == nullptr && this->overApplyId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->primaryId_ == nullptr && this->processorOaCode_ == nullptr && this->productCount_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr
        && this->projectCode_ == nullptr && this->projectName_ == nullptr && this->promotionFee_ == nullptr && this->purchaseOrderId_ == nullptr && this->remark_ == nullptr
        && this->settleTypeDesc_ == nullptr && this->settlementFee_ == nullptr && this->settlementGrantFee_ == nullptr && this->settlementTime_ == nullptr && this->settlementType_ == nullptr
        && this->specification_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->subOrderId_ == nullptr && this->taxRate_ == nullptr
        && this->thirdInvoiceId_ == nullptr && this->thirdItineraryId_ == nullptr && this->tradeActionDesc_ == nullptr && this->tradeRemark_ == nullptr && this->travelerId_ == nullptr
        && this->travelerJobNo_ == nullptr && this->travelerMemberType_ == nullptr && this->travelerMemberTypeName_ == nullptr && this->travelerName_ == nullptr && this->voucherType_ == nullptr
        && this->voucherTypeDesc_ == nullptr; };
        // adjustTime Field Functions 
        bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
        void deleteAdjustTime() { this->adjustTime_ = nullptr;};
        inline string getAdjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
        inline Items& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


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


        // belongBusiness Field Functions 
        bool hasBelongBusiness() const { return this->belongBusiness_ != nullptr;};
        void deleteBelongBusiness() { this->belongBusiness_ = nullptr;};
        inline string getBelongBusiness() const { DARABONBA_PTR_GET_DEFAULT(belongBusiness_, "") };
        inline Items& setBelongBusiness(string belongBusiness) { DARABONBA_PTR_SET_VALUE(belongBusiness_, belongBusiness) };


        // billRecordTime Field Functions 
        bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
        void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
        inline string getBillRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
        inline Items& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


        // billingEntity Field Functions 
        bool hasBillingEntity() const { return this->billingEntity_ != nullptr;};
        void deleteBillingEntity() { this->billingEntity_ = nullptr;};
        inline string getBillingEntity() const { DARABONBA_PTR_GET_DEFAULT(billingEntity_, "") };
        inline Items& setBillingEntity(string billingEntity) { DARABONBA_PTR_SET_VALUE(billingEntity_, billingEntity) };


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


        // mappingCompanyCode Field Functions 
        bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
        void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
        inline string getMappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
        inline Items& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


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


        // productCount Field Functions 
        bool hasProductCount() const { return this->productCount_ != nullptr;};
        void deleteProductCount() { this->productCount_ = nullptr;};
        inline int32_t getProductCount() const { DARABONBA_PTR_GET_DEFAULT(productCount_, 0) };
        inline Items& setProductCount(int32_t productCount) { DARABONBA_PTR_SET_VALUE(productCount_, productCount) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Items& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline Items& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


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


        // purchaseOrderId Field Functions 
        bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
        void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
        inline string getPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
        inline Items& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Items& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


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


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline Items& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


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


        // tradeActionDesc Field Functions 
        bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
        void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
        inline string getTradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
        inline Items& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


        // tradeRemark Field Functions 
        bool hasTradeRemark() const { return this->tradeRemark_ != nullptr;};
        void deleteTradeRemark() { this->tradeRemark_ = nullptr;};
        inline string getTradeRemark() const { DARABONBA_PTR_GET_DEFAULT(tradeRemark_, "") };
        inline Items& setTradeRemark(string tradeRemark) { DARABONBA_PTR_SET_VALUE(tradeRemark_, tradeRemark) };


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
        shared_ptr<string> alipayId_ {};
        shared_ptr<string> alipayTradeNo_ {};
        shared_ptr<string> applyArrCityCode_ {};
        shared_ptr<string> applyArrCityName_ {};
        shared_ptr<string> applyDepCityCode_ {};
        shared_ptr<string> applyDepCityName_ {};
        shared_ptr<string> applyExtendField_ {};
        shared_ptr<string> applyId_ {};
        shared_ptr<string> belongBusiness_ {};
        shared_ptr<string> billRecordTime_ {};
        shared_ptr<string> billingEntity_ {};
        shared_ptr<string> bookMode_ {};
        shared_ptr<string> bookTime_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerJobNo_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<string> capitalDirection_ {};
        shared_ptr<string> cascadeDepartment_ {};
        shared_ptr<string> categoryDesc_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> costDepartment_ {};
        shared_ptr<string> department_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> feeType_ {};
        shared_ptr<string> feeTypeDesc_ {};
        shared_ptr<string> index_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> mappingCompanyCode_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<double> orderPrice_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<string> overApplyId_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<int64_t> primaryId_ {};
        shared_ptr<string> processorOaCode_ {};
        shared_ptr<int32_t> productCount_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> promotionFee_ {};
        shared_ptr<string> purchaseOrderId_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> settleTypeDesc_ {};
        shared_ptr<double> settlementFee_ {};
        shared_ptr<double> settlementGrantFee_ {};
        shared_ptr<string> settlementTime_ {};
        shared_ptr<string> settlementType_ {};
        shared_ptr<string> specification_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> subOrderId_ {};
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> thirdInvoiceId_ {};
        shared_ptr<string> thirdItineraryId_ {};
        shared_ptr<string> tradeActionDesc_ {};
        shared_ptr<string> tradeRemark_ {};
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
    inline VasBillSettlementQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VasBillSettlementQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const VasBillSettlementQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, VasBillSettlementQueryResponseBody::Module) };
    inline VasBillSettlementQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, VasBillSettlementQueryResponseBody::Module) };
    inline VasBillSettlementQueryResponseBody& setModule(const VasBillSettlementQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline VasBillSettlementQueryResponseBody& setModule(VasBillSettlementQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VasBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VasBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline VasBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<VasBillSettlementQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
