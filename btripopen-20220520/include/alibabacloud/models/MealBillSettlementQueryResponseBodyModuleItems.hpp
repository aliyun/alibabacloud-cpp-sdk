// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_MEALBILLSETTLEMENTQUERYRESPONSEBODYMODULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealBillSettlementQueryResponseBodyModuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealBillSettlementQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_TO_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
      DARABONBA_PTR_TO_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_TO_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_TO_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_TO_JSON(consume_report_address, consumeReportAddress_);
      DARABONBA_PTR_TO_JSON(consume_report_city, consumeReportCity_);
      DARABONBA_PTR_TO_JSON(consume_report_city_code, consumeReportCityCode_);
      DARABONBA_PTR_TO_JSON(consumer_scene, consumerScene_);
      DARABONBA_PTR_TO_JSON(corp_settle_fee, corpSettleFee_);
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(main_apply_id, mainApplyId_);
      DARABONBA_PTR_TO_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_TO_JSON(meal_address, mealAddress_);
      DARABONBA_PTR_TO_JSON(meal_city, mealCity_);
      DARABONBA_PTR_TO_JSON(meal_city_code, mealCityCode_);
      DARABONBA_PTR_TO_JSON(meal_reason, mealReason_);
      DARABONBA_PTR_TO_JSON(meal_rule, mealRule_);
      DARABONBA_PTR_TO_JSON(meal_scene, mealScene_);
      DARABONBA_PTR_TO_JSON(merchant_category, merchantCategory_);
      DARABONBA_PTR_TO_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(person_settle_price, personSettlePrice_);
      DARABONBA_PTR_TO_JSON(primary_id, primaryId_);
      DARABONBA_PTR_TO_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_TO_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_TO_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_TO_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_TO_JSON(share_dinner, shareDinner_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(store_address, storeAddress_);
      DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_TO_JSON(third_invoice_id, thirdInvoiceId_);
      DARABONBA_PTR_TO_JSON(third_part_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_TO_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_TO_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_TO_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_TO_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_TO_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, MealBillSettlementQueryResponseBodyModuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(adjust_time, adjustTime_);
      DARABONBA_PTR_FROM_JSON(apply_extend_field, applyExtendField_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(bill_record_time, billRecordTime_);
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(booker_job_no, bookerJobNo_);
      DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
      DARABONBA_PTR_FROM_JSON(capital_direction, capitalDirection_);
      DARABONBA_PTR_FROM_JSON(cascade_department, cascadeDepartment_);
      DARABONBA_PTR_FROM_JSON(category_desc, categoryDesc_);
      DARABONBA_PTR_FROM_JSON(consume_report_address, consumeReportAddress_);
      DARABONBA_PTR_FROM_JSON(consume_report_city, consumeReportCity_);
      DARABONBA_PTR_FROM_JSON(consume_report_city_code, consumeReportCityCode_);
      DARABONBA_PTR_FROM_JSON(consumer_scene, consumerScene_);
      DARABONBA_PTR_FROM_JSON(corp_settle_fee, corpSettleFee_);
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(cost_department, costDepartment_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(fee_type_desc, feeTypeDesc_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(main_apply_id, mainApplyId_);
      DARABONBA_PTR_FROM_JSON(mapping_company_code, mappingCompanyCode_);
      DARABONBA_PTR_FROM_JSON(meal_address, mealAddress_);
      DARABONBA_PTR_FROM_JSON(meal_city, mealCity_);
      DARABONBA_PTR_FROM_JSON(meal_city_code, mealCityCode_);
      DARABONBA_PTR_FROM_JSON(meal_reason, mealReason_);
      DARABONBA_PTR_FROM_JSON(meal_rule, mealRule_);
      DARABONBA_PTR_FROM_JSON(meal_scene, mealScene_);
      DARABONBA_PTR_FROM_JSON(merchant_category, merchantCategory_);
      DARABONBA_PTR_FROM_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(person_settle_price, personSettlePrice_);
      DARABONBA_PTR_FROM_JSON(primary_id, primaryId_);
      DARABONBA_PTR_FROM_JSON(processor_oa_code, processorOaCode_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(settle_type_desc, settleTypeDesc_);
      DARABONBA_PTR_FROM_JSON(settlement_fee, settlementFee_);
      DARABONBA_PTR_FROM_JSON(settlement_time, settlementTime_);
      DARABONBA_PTR_FROM_JSON(settlement_type, settlementType_);
      DARABONBA_PTR_FROM_JSON(share_dinner, shareDinner_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(store_address, storeAddress_);
      DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
      DARABONBA_PTR_FROM_JSON(third_invoice_id, thirdInvoiceId_);
      DARABONBA_PTR_FROM_JSON(third_part_business_id, thirdPartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(trade_action_desc, tradeActionDesc_);
      DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
      DARABONBA_PTR_FROM_JSON(traveler_job_no, travelerJobNo_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type, travelerMemberType_);
      DARABONBA_PTR_FROM_JSON(traveler_member_type_name, travelerMemberTypeName_);
      DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
      DARABONBA_PTR_FROM_JSON(voucher_type, voucherType_);
      DARABONBA_PTR_FROM_JSON(voucher_type_desc, voucherTypeDesc_);
    };
    MealBillSettlementQueryResponseBodyModuleItems() = default ;
    MealBillSettlementQueryResponseBodyModuleItems(const MealBillSettlementQueryResponseBodyModuleItems &) = default ;
    MealBillSettlementQueryResponseBodyModuleItems(MealBillSettlementQueryResponseBodyModuleItems &&) = default ;
    MealBillSettlementQueryResponseBodyModuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealBillSettlementQueryResponseBodyModuleItems() = default ;
    MealBillSettlementQueryResponseBodyModuleItems& operator=(const MealBillSettlementQueryResponseBodyModuleItems &) = default ;
    MealBillSettlementQueryResponseBodyModuleItems& operator=(MealBillSettlementQueryResponseBodyModuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustTime_ != nullptr
        && this->applyExtendField_ != nullptr && this->applyId_ != nullptr && this->billRecordTime_ != nullptr && this->bookTime_ != nullptr && this->bookerId_ != nullptr
        && this->bookerJobNo_ != nullptr && this->bookerName_ != nullptr && this->capitalDirection_ != nullptr && this->cascadeDepartment_ != nullptr && this->categoryDesc_ != nullptr
        && this->consumeReportAddress_ != nullptr && this->consumeReportCity_ != nullptr && this->consumeReportCityCode_ != nullptr && this->consumerScene_ != nullptr && this->corpSettleFee_ != nullptr
        && this->costCenter_ != nullptr && this->costCenterNumber_ != nullptr && this->costDepartment_ != nullptr && this->department_ != nullptr && this->departmentId_ != nullptr
        && this->feeType_ != nullptr && this->feeTypeDesc_ != nullptr && this->index_ != nullptr && this->invoiceTitle_ != nullptr && this->mainApplyId_ != nullptr
        && this->mappingCompanyCode_ != nullptr && this->mealAddress_ != nullptr && this->mealCity_ != nullptr && this->mealCityCode_ != nullptr && this->mealReason_ != nullptr
        && this->mealRule_ != nullptr && this->mealScene_ != nullptr && this->merchantCategory_ != nullptr && this->merchantName_ != nullptr && this->orderId_ != nullptr
        && this->orderPrice_ != nullptr && this->orderStatusDesc_ != nullptr && this->personSettlePrice_ != nullptr && this->primaryId_ != nullptr && this->processorOaCode_ != nullptr
        && this->projectCode_ != nullptr && this->projectName_ != nullptr && this->remark_ != nullptr && this->serviceFee_ != nullptr && this->settleTypeDesc_ != nullptr
        && this->settlementFee_ != nullptr && this->settlementTime_ != nullptr && this->settlementType_ != nullptr && this->shareDinner_ != nullptr && this->status_ != nullptr
        && this->statusDesc_ != nullptr && this->storeAddress_ != nullptr && this->taxRate_ != nullptr && this->thirdInvoiceId_ != nullptr && this->thirdPartBusinessId_ != nullptr
        && this->thirdpartApplyId_ != nullptr && this->tradeActionDesc_ != nullptr && this->travelerId_ != nullptr && this->travelerJobNo_ != nullptr && this->travelerMemberType_ != nullptr
        && this->travelerMemberTypeName_ != nullptr && this->travelerName_ != nullptr && this->voucherType_ != nullptr && this->voucherTypeDesc_ != nullptr; };
    // adjustTime Field Functions 
    bool hasAdjustTime() const { return this->adjustTime_ != nullptr;};
    void deleteAdjustTime() { this->adjustTime_ = nullptr;};
    inline string adjustTime() const { DARABONBA_PTR_GET_DEFAULT(adjustTime_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setAdjustTime(string adjustTime) { DARABONBA_PTR_SET_VALUE(adjustTime_, adjustTime) };


    // applyExtendField Field Functions 
    bool hasApplyExtendField() const { return this->applyExtendField_ != nullptr;};
    void deleteApplyExtendField() { this->applyExtendField_ = nullptr;};
    inline string applyExtendField() const { DARABONBA_PTR_GET_DEFAULT(applyExtendField_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setApplyExtendField(string applyExtendField) { DARABONBA_PTR_SET_VALUE(applyExtendField_, applyExtendField) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // billRecordTime Field Functions 
    bool hasBillRecordTime() const { return this->billRecordTime_ != nullptr;};
    void deleteBillRecordTime() { this->billRecordTime_ = nullptr;};
    inline string billRecordTime() const { DARABONBA_PTR_GET_DEFAULT(billRecordTime_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setBillRecordTime(string billRecordTime) { DARABONBA_PTR_SET_VALUE(billRecordTime_, billRecordTime) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline string bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setBookTime(string bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline string bookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


    // bookerJobNo Field Functions 
    bool hasBookerJobNo() const { return this->bookerJobNo_ != nullptr;};
    void deleteBookerJobNo() { this->bookerJobNo_ = nullptr;};
    inline string bookerJobNo() const { DARABONBA_PTR_GET_DEFAULT(bookerJobNo_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setBookerJobNo(string bookerJobNo) { DARABONBA_PTR_SET_VALUE(bookerJobNo_, bookerJobNo) };


    // bookerName Field Functions 
    bool hasBookerName() const { return this->bookerName_ != nullptr;};
    void deleteBookerName() { this->bookerName_ = nullptr;};
    inline string bookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


    // capitalDirection Field Functions 
    bool hasCapitalDirection() const { return this->capitalDirection_ != nullptr;};
    void deleteCapitalDirection() { this->capitalDirection_ = nullptr;};
    inline string capitalDirection() const { DARABONBA_PTR_GET_DEFAULT(capitalDirection_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCapitalDirection(string capitalDirection) { DARABONBA_PTR_SET_VALUE(capitalDirection_, capitalDirection) };


    // cascadeDepartment Field Functions 
    bool hasCascadeDepartment() const { return this->cascadeDepartment_ != nullptr;};
    void deleteCascadeDepartment() { this->cascadeDepartment_ = nullptr;};
    inline string cascadeDepartment() const { DARABONBA_PTR_GET_DEFAULT(cascadeDepartment_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCascadeDepartment(string cascadeDepartment) { DARABONBA_PTR_SET_VALUE(cascadeDepartment_, cascadeDepartment) };


    // categoryDesc Field Functions 
    bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
    void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
    inline string categoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


    // consumeReportAddress Field Functions 
    bool hasConsumeReportAddress() const { return this->consumeReportAddress_ != nullptr;};
    void deleteConsumeReportAddress() { this->consumeReportAddress_ = nullptr;};
    inline string consumeReportAddress() const { DARABONBA_PTR_GET_DEFAULT(consumeReportAddress_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setConsumeReportAddress(string consumeReportAddress) { DARABONBA_PTR_SET_VALUE(consumeReportAddress_, consumeReportAddress) };


    // consumeReportCity Field Functions 
    bool hasConsumeReportCity() const { return this->consumeReportCity_ != nullptr;};
    void deleteConsumeReportCity() { this->consumeReportCity_ = nullptr;};
    inline string consumeReportCity() const { DARABONBA_PTR_GET_DEFAULT(consumeReportCity_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setConsumeReportCity(string consumeReportCity) { DARABONBA_PTR_SET_VALUE(consumeReportCity_, consumeReportCity) };


    // consumeReportCityCode Field Functions 
    bool hasConsumeReportCityCode() const { return this->consumeReportCityCode_ != nullptr;};
    void deleteConsumeReportCityCode() { this->consumeReportCityCode_ = nullptr;};
    inline string consumeReportCityCode() const { DARABONBA_PTR_GET_DEFAULT(consumeReportCityCode_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setConsumeReportCityCode(string consumeReportCityCode) { DARABONBA_PTR_SET_VALUE(consumeReportCityCode_, consumeReportCityCode) };


    // consumerScene Field Functions 
    bool hasConsumerScene() const { return this->consumerScene_ != nullptr;};
    void deleteConsumerScene() { this->consumerScene_ = nullptr;};
    inline string consumerScene() const { DARABONBA_PTR_GET_DEFAULT(consumerScene_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setConsumerScene(string consumerScene) { DARABONBA_PTR_SET_VALUE(consumerScene_, consumerScene) };


    // corpSettleFee Field Functions 
    bool hasCorpSettleFee() const { return this->corpSettleFee_ != nullptr;};
    void deleteCorpSettleFee() { this->corpSettleFee_ = nullptr;};
    inline double corpSettleFee() const { DARABONBA_PTR_GET_DEFAULT(corpSettleFee_, 0.0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCorpSettleFee(double corpSettleFee) { DARABONBA_PTR_SET_VALUE(corpSettleFee_, corpSettleFee) };


    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline string costCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // costDepartment Field Functions 
    bool hasCostDepartment() const { return this->costDepartment_ != nullptr;};
    void deleteCostDepartment() { this->costDepartment_ = nullptr;};
    inline string costDepartment() const { DARABONBA_PTR_GET_DEFAULT(costDepartment_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setCostDepartment(string costDepartment) { DARABONBA_PTR_SET_VALUE(costDepartment_, costDepartment) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // feeTypeDesc Field Functions 
    bool hasFeeTypeDesc() const { return this->feeTypeDesc_ != nullptr;};
    void deleteFeeTypeDesc() { this->feeTypeDesc_ = nullptr;};
    inline string feeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeTypeDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setFeeTypeDesc(string feeTypeDesc) { DARABONBA_PTR_SET_VALUE(feeTypeDesc_, feeTypeDesc) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // mainApplyId Field Functions 
    bool hasMainApplyId() const { return this->mainApplyId_ != nullptr;};
    void deleteMainApplyId() { this->mainApplyId_ = nullptr;};
    inline string mainApplyId() const { DARABONBA_PTR_GET_DEFAULT(mainApplyId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMainApplyId(string mainApplyId) { DARABONBA_PTR_SET_VALUE(mainApplyId_, mainApplyId) };


    // mappingCompanyCode Field Functions 
    bool hasMappingCompanyCode() const { return this->mappingCompanyCode_ != nullptr;};
    void deleteMappingCompanyCode() { this->mappingCompanyCode_ = nullptr;};
    inline string mappingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(mappingCompanyCode_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMappingCompanyCode(string mappingCompanyCode) { DARABONBA_PTR_SET_VALUE(mappingCompanyCode_, mappingCompanyCode) };


    // mealAddress Field Functions 
    bool hasMealAddress() const { return this->mealAddress_ != nullptr;};
    void deleteMealAddress() { this->mealAddress_ = nullptr;};
    inline string mealAddress() const { DARABONBA_PTR_GET_DEFAULT(mealAddress_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealAddress(string mealAddress) { DARABONBA_PTR_SET_VALUE(mealAddress_, mealAddress) };


    // mealCity Field Functions 
    bool hasMealCity() const { return this->mealCity_ != nullptr;};
    void deleteMealCity() { this->mealCity_ = nullptr;};
    inline string mealCity() const { DARABONBA_PTR_GET_DEFAULT(mealCity_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealCity(string mealCity) { DARABONBA_PTR_SET_VALUE(mealCity_, mealCity) };


    // mealCityCode Field Functions 
    bool hasMealCityCode() const { return this->mealCityCode_ != nullptr;};
    void deleteMealCityCode() { this->mealCityCode_ = nullptr;};
    inline string mealCityCode() const { DARABONBA_PTR_GET_DEFAULT(mealCityCode_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealCityCode(string mealCityCode) { DARABONBA_PTR_SET_VALUE(mealCityCode_, mealCityCode) };


    // mealReason Field Functions 
    bool hasMealReason() const { return this->mealReason_ != nullptr;};
    void deleteMealReason() { this->mealReason_ = nullptr;};
    inline string mealReason() const { DARABONBA_PTR_GET_DEFAULT(mealReason_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealReason(string mealReason) { DARABONBA_PTR_SET_VALUE(mealReason_, mealReason) };


    // mealRule Field Functions 
    bool hasMealRule() const { return this->mealRule_ != nullptr;};
    void deleteMealRule() { this->mealRule_ = nullptr;};
    inline string mealRule() const { DARABONBA_PTR_GET_DEFAULT(mealRule_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealRule(string mealRule) { DARABONBA_PTR_SET_VALUE(mealRule_, mealRule) };


    // mealScene Field Functions 
    bool hasMealScene() const { return this->mealScene_ != nullptr;};
    void deleteMealScene() { this->mealScene_ = nullptr;};
    inline string mealScene() const { DARABONBA_PTR_GET_DEFAULT(mealScene_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMealScene(string mealScene) { DARABONBA_PTR_SET_VALUE(mealScene_, mealScene) };


    // merchantCategory Field Functions 
    bool hasMerchantCategory() const { return this->merchantCategory_ != nullptr;};
    void deleteMerchantCategory() { this->merchantCategory_ = nullptr;};
    inline string merchantCategory() const { DARABONBA_PTR_GET_DEFAULT(merchantCategory_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMerchantCategory(string merchantCategory) { DARABONBA_PTR_SET_VALUE(merchantCategory_, merchantCategory) };


    // merchantName Field Functions 
    bool hasMerchantName() const { return this->merchantName_ != nullptr;};
    void deleteMerchantName() { this->merchantName_ = nullptr;};
    inline string merchantName() const { DARABONBA_PTR_GET_DEFAULT(merchantName_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setMerchantName(string merchantName) { DARABONBA_PTR_SET_VALUE(merchantName_, merchantName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline double orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0.0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setOrderPrice(double orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // personSettlePrice Field Functions 
    bool hasPersonSettlePrice() const { return this->personSettlePrice_ != nullptr;};
    void deletePersonSettlePrice() { this->personSettlePrice_ = nullptr;};
    inline double personSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(personSettlePrice_, 0.0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setPersonSettlePrice(double personSettlePrice) { DARABONBA_PTR_SET_VALUE(personSettlePrice_, personSettlePrice) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // processorOaCode Field Functions 
    bool hasProcessorOaCode() const { return this->processorOaCode_ != nullptr;};
    void deleteProcessorOaCode() { this->processorOaCode_ = nullptr;};
    inline string processorOaCode() const { DARABONBA_PTR_GET_DEFAULT(processorOaCode_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setProcessorOaCode(string processorOaCode) { DARABONBA_PTR_SET_VALUE(processorOaCode_, processorOaCode) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // settleTypeDesc Field Functions 
    bool hasSettleTypeDesc() const { return this->settleTypeDesc_ != nullptr;};
    void deleteSettleTypeDesc() { this->settleTypeDesc_ = nullptr;};
    inline string settleTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(settleTypeDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setSettleTypeDesc(string settleTypeDesc) { DARABONBA_PTR_SET_VALUE(settleTypeDesc_, settleTypeDesc) };


    // settlementFee Field Functions 
    bool hasSettlementFee() const { return this->settlementFee_ != nullptr;};
    void deleteSettlementFee() { this->settlementFee_ = nullptr;};
    inline double settlementFee() const { DARABONBA_PTR_GET_DEFAULT(settlementFee_, 0.0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setSettlementFee(double settlementFee) { DARABONBA_PTR_SET_VALUE(settlementFee_, settlementFee) };


    // settlementTime Field Functions 
    bool hasSettlementTime() const { return this->settlementTime_ != nullptr;};
    void deleteSettlementTime() { this->settlementTime_ = nullptr;};
    inline string settlementTime() const { DARABONBA_PTR_GET_DEFAULT(settlementTime_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setSettlementTime(string settlementTime) { DARABONBA_PTR_SET_VALUE(settlementTime_, settlementTime) };


    // settlementType Field Functions 
    bool hasSettlementType() const { return this->settlementType_ != nullptr;};
    void deleteSettlementType() { this->settlementType_ = nullptr;};
    inline string settlementType() const { DARABONBA_PTR_GET_DEFAULT(settlementType_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setSettlementType(string settlementType) { DARABONBA_PTR_SET_VALUE(settlementType_, settlementType) };


    // shareDinner Field Functions 
    bool hasShareDinner() const { return this->shareDinner_ != nullptr;};
    void deleteShareDinner() { this->shareDinner_ = nullptr;};
    inline string shareDinner() const { DARABONBA_PTR_GET_DEFAULT(shareDinner_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setShareDinner(string shareDinner) { DARABONBA_PTR_SET_VALUE(shareDinner_, shareDinner) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // storeAddress Field Functions 
    bool hasStoreAddress() const { return this->storeAddress_ != nullptr;};
    void deleteStoreAddress() { this->storeAddress_ = nullptr;};
    inline string storeAddress() const { DARABONBA_PTR_GET_DEFAULT(storeAddress_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setStoreAddress(string storeAddress) { DARABONBA_PTR_SET_VALUE(storeAddress_, storeAddress) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string taxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // thirdInvoiceId Field Functions 
    bool hasThirdInvoiceId() const { return this->thirdInvoiceId_ != nullptr;};
    void deleteThirdInvoiceId() { this->thirdInvoiceId_ = nullptr;};
    inline string thirdInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdInvoiceId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setThirdInvoiceId(string thirdInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdInvoiceId_, thirdInvoiceId) };


    // thirdPartBusinessId Field Functions 
    bool hasThirdPartBusinessId() const { return this->thirdPartBusinessId_ != nullptr;};
    void deleteThirdPartBusinessId() { this->thirdPartBusinessId_ = nullptr;};
    inline string thirdPartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartBusinessId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setThirdPartBusinessId(string thirdPartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdPartBusinessId_, thirdPartBusinessId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // tradeActionDesc Field Functions 
    bool hasTradeActionDesc() const { return this->tradeActionDesc_ != nullptr;};
    void deleteTradeActionDesc() { this->tradeActionDesc_ = nullptr;};
    inline string tradeActionDesc() const { DARABONBA_PTR_GET_DEFAULT(tradeActionDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTradeActionDesc(string tradeActionDesc) { DARABONBA_PTR_SET_VALUE(tradeActionDesc_, tradeActionDesc) };


    // travelerId Field Functions 
    bool hasTravelerId() const { return this->travelerId_ != nullptr;};
    void deleteTravelerId() { this->travelerId_ = nullptr;};
    inline string travelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


    // travelerJobNo Field Functions 
    bool hasTravelerJobNo() const { return this->travelerJobNo_ != nullptr;};
    void deleteTravelerJobNo() { this->travelerJobNo_ = nullptr;};
    inline string travelerJobNo() const { DARABONBA_PTR_GET_DEFAULT(travelerJobNo_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTravelerJobNo(string travelerJobNo) { DARABONBA_PTR_SET_VALUE(travelerJobNo_, travelerJobNo) };


    // travelerMemberType Field Functions 
    bool hasTravelerMemberType() const { return this->travelerMemberType_ != nullptr;};
    void deleteTravelerMemberType() { this->travelerMemberType_ = nullptr;};
    inline string travelerMemberType() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberType_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTravelerMemberType(string travelerMemberType) { DARABONBA_PTR_SET_VALUE(travelerMemberType_, travelerMemberType) };


    // travelerMemberTypeName Field Functions 
    bool hasTravelerMemberTypeName() const { return this->travelerMemberTypeName_ != nullptr;};
    void deleteTravelerMemberTypeName() { this->travelerMemberTypeName_ = nullptr;};
    inline string travelerMemberTypeName() const { DARABONBA_PTR_GET_DEFAULT(travelerMemberTypeName_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTravelerMemberTypeName(string travelerMemberTypeName) { DARABONBA_PTR_SET_VALUE(travelerMemberTypeName_, travelerMemberTypeName) };


    // travelerName Field Functions 
    bool hasTravelerName() const { return this->travelerName_ != nullptr;};
    void deleteTravelerName() { this->travelerName_ = nullptr;};
    inline string travelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


    // voucherType Field Functions 
    bool hasVoucherType() const { return this->voucherType_ != nullptr;};
    void deleteVoucherType() { this->voucherType_ = nullptr;};
    inline int32_t voucherType() const { DARABONBA_PTR_GET_DEFAULT(voucherType_, 0) };
    inline MealBillSettlementQueryResponseBodyModuleItems& setVoucherType(int32_t voucherType) { DARABONBA_PTR_SET_VALUE(voucherType_, voucherType) };


    // voucherTypeDesc Field Functions 
    bool hasVoucherTypeDesc() const { return this->voucherTypeDesc_ != nullptr;};
    void deleteVoucherTypeDesc() { this->voucherTypeDesc_ = nullptr;};
    inline string voucherTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(voucherTypeDesc_, "") };
    inline MealBillSettlementQueryResponseBodyModuleItems& setVoucherTypeDesc(string voucherTypeDesc) { DARABONBA_PTR_SET_VALUE(voucherTypeDesc_, voucherTypeDesc) };


  protected:
    std::shared_ptr<string> adjustTime_ = nullptr;
    std::shared_ptr<string> applyExtendField_ = nullptr;
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> billRecordTime_ = nullptr;
    std::shared_ptr<string> bookTime_ = nullptr;
    std::shared_ptr<string> bookerId_ = nullptr;
    std::shared_ptr<string> bookerJobNo_ = nullptr;
    std::shared_ptr<string> bookerName_ = nullptr;
    std::shared_ptr<string> capitalDirection_ = nullptr;
    std::shared_ptr<string> cascadeDepartment_ = nullptr;
    std::shared_ptr<string> categoryDesc_ = nullptr;
    std::shared_ptr<string> consumeReportAddress_ = nullptr;
    std::shared_ptr<string> consumeReportCity_ = nullptr;
    std::shared_ptr<string> consumeReportCityCode_ = nullptr;
    std::shared_ptr<string> consumerScene_ = nullptr;
    std::shared_ptr<double> corpSettleFee_ = nullptr;
    std::shared_ptr<string> costCenter_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> costDepartment_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<string> feeTypeDesc_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> mainApplyId_ = nullptr;
    std::shared_ptr<string> mappingCompanyCode_ = nullptr;
    std::shared_ptr<string> mealAddress_ = nullptr;
    std::shared_ptr<string> mealCity_ = nullptr;
    std::shared_ptr<string> mealCityCode_ = nullptr;
    std::shared_ptr<string> mealReason_ = nullptr;
    std::shared_ptr<string> mealRule_ = nullptr;
    std::shared_ptr<string> mealScene_ = nullptr;
    std::shared_ptr<string> merchantCategory_ = nullptr;
    std::shared_ptr<string> merchantName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<double> orderPrice_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<double> personSettlePrice_ = nullptr;
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    std::shared_ptr<string> processorOaCode_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<string> settleTypeDesc_ = nullptr;
    std::shared_ptr<double> settlementFee_ = nullptr;
    std::shared_ptr<string> settlementTime_ = nullptr;
    std::shared_ptr<string> settlementType_ = nullptr;
    std::shared_ptr<string> shareDinner_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> storeAddress_ = nullptr;
    std::shared_ptr<string> taxRate_ = nullptr;
    std::shared_ptr<string> thirdInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdPartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> tradeActionDesc_ = nullptr;
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
