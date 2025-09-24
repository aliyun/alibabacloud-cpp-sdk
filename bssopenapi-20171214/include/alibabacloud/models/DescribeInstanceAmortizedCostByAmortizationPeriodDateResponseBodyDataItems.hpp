// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATERESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATERESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_TO_JSON(AmortizationPeriodDay, amortizationPeriodDay_);
      DARABONBA_PTR_TO_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_TO_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_TO_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_TO_JSON(ConsumePeriodDay, consumePeriodDay_);
      DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationDeductedByCashCoupons, currentAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationDeductedByCoupons, currentAmortizationDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationDeductedByPrepaidCard, currentAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationExpenditureAmount, currentAmortizationExpenditureAmount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationInvoiceDiscount, currentAmortizationInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationPretaxAmount, currentAmortizationPretaxAmount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationPretaxGrossAmount, currentAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationRoundDownDiscount, currentAmortizationRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(ExpenditureAmount, expenditureAmount_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InternetIP, internetIP_);
      DARABONBA_PTR_TO_JSON(IntranetIP, intranetIP_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedDeductedByCashCoupons, previouslyAmortizedDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedDeductedByCoupons, previouslyAmortizedDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedDeductedByPrepaidCard, previouslyAmortizedDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedExpenditureAmount, previouslyAmortizedExpenditureAmount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedInvoiceDiscount, previouslyAmortizedInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedPretaxAmount, previouslyAmortizedPretaxAmount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedPretaxGrossAmount, previouslyAmortizedPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedRoundDownDiscount, previouslyAmortizedRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductDetailCode, productDetailCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByCashCoupons, remainingAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByCoupons, remainingAmortizationDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByPrepaidCard, remainingAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationExpenditureAmount, remainingAmortizationExpenditureAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationInvoiceDiscount, remainingAmortizationInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationPretaxAmount, remainingAmortizationPretaxAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationPretaxGrossAmount, remainingAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationRoundDownDiscount, remainingAmortizationRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_TO_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_TO_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_TO_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_TO_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_FROM_JSON(AmortizationPeriodDay, amortizationPeriodDay_);
      DARABONBA_PTR_FROM_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_FROM_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_FROM_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriodDay, consumePeriodDay_);
      DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationDeductedByCashCoupons, currentAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationDeductedByCoupons, currentAmortizationDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationDeductedByPrepaidCard, currentAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationExpenditureAmount, currentAmortizationExpenditureAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationInvoiceDiscount, currentAmortizationInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationPretaxAmount, currentAmortizationPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationPretaxGrossAmount, currentAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationRoundDownDiscount, currentAmortizationRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(ExpenditureAmount, expenditureAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InternetIP, internetIP_);
      DARABONBA_PTR_FROM_JSON(IntranetIP, intranetIP_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedDeductedByCashCoupons, previouslyAmortizedDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedDeductedByCoupons, previouslyAmortizedDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedDeductedByPrepaidCard, previouslyAmortizedDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedExpenditureAmount, previouslyAmortizedExpenditureAmount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedInvoiceDiscount, previouslyAmortizedInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedPretaxAmount, previouslyAmortizedPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedPretaxGrossAmount, previouslyAmortizedPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedRoundDownDiscount, previouslyAmortizedRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductDetailCode, productDetailCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByCashCoupons, remainingAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByCoupons, remainingAmortizationDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByPrepaidCard, remainingAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationExpenditureAmount, remainingAmortizationExpenditureAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationInvoiceDiscount, remainingAmortizationInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationPretaxAmount, remainingAmortizationPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationPretaxGrossAmount, remainingAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationRoundDownDiscount, remainingAmortizationRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_FROM_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_FROM_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_FROM_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems(const DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems(DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems &&) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& operator=(const DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& operator=(DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amortizationPeriod_ != nullptr
        && this->amortizationPeriodDay_ != nullptr && this->amortizationStatus_ != nullptr && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->billOwnerID_ != nullptr
        && this->billOwnerName_ != nullptr && this->bizType_ != nullptr && this->consumePeriod_ != nullptr && this->consumePeriodDay_ != nullptr && this->costUnit_ != nullptr
        && this->costUnitCode_ != nullptr && this->currentAmortizationDeductedByCashCoupons_ != nullptr && this->currentAmortizationDeductedByCoupons_ != nullptr && this->currentAmortizationDeductedByPrepaidCard_ != nullptr && this->currentAmortizationExpenditureAmount_ != nullptr
        && this->currentAmortizationInvoiceDiscount_ != nullptr && this->currentAmortizationPretaxAmount_ != nullptr && this->currentAmortizationPretaxGrossAmount_ != nullptr && this->currentAmortizationRoundDownDiscount_ != nullptr && this->deductedByCashCoupons_ != nullptr
        && this->deductedByCoupons_ != nullptr && this->deductedByPrepaidCard_ != nullptr && this->expenditureAmount_ != nullptr && this->instanceID_ != nullptr && this->internetIP_ != nullptr
        && this->intranetIP_ != nullptr && this->invoiceDiscount_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->previouslyAmortizedDeductedByCashCoupons_ != nullptr
        && this->previouslyAmortizedDeductedByCoupons_ != nullptr && this->previouslyAmortizedDeductedByPrepaidCard_ != nullptr && this->previouslyAmortizedExpenditureAmount_ != nullptr && this->previouslyAmortizedInvoiceDiscount_ != nullptr && this->previouslyAmortizedPretaxAmount_ != nullptr
        && this->previouslyAmortizedPretaxGrossAmount_ != nullptr && this->previouslyAmortizedRoundDownDiscount_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr && this->productDetailCode_ != nullptr
        && this->productName_ != nullptr && this->region_ != nullptr && this->remainingAmortizationDeductedByCashCoupons_ != nullptr && this->remainingAmortizationDeductedByCoupons_ != nullptr && this->remainingAmortizationDeductedByPrepaidCard_ != nullptr
        && this->remainingAmortizationExpenditureAmount_ != nullptr && this->remainingAmortizationInvoiceDiscount_ != nullptr && this->remainingAmortizationPretaxAmount_ != nullptr && this->remainingAmortizationPretaxGrossAmount_ != nullptr && this->remainingAmortizationRoundDownDiscount_ != nullptr
        && this->resourceGroup_ != nullptr && this->roundDownDiscount_ != nullptr && this->splitAccountName_ != nullptr && this->splitItemID_ != nullptr && this->splitItemName_ != nullptr
        && this->splitProductDetail_ != nullptr && this->subscriptionType_ != nullptr && this->tag_ != nullptr && this->zone_ != nullptr; };
    // amortizationPeriod Field Functions 
    bool hasAmortizationPeriod() const { return this->amortizationPeriod_ != nullptr;};
    void deleteAmortizationPeriod() { this->amortizationPeriod_ = nullptr;};
    inline string amortizationPeriod() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriod_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setAmortizationPeriod(string amortizationPeriod) { DARABONBA_PTR_SET_VALUE(amortizationPeriod_, amortizationPeriod) };


    // amortizationPeriodDay Field Functions 
    bool hasAmortizationPeriodDay() const { return this->amortizationPeriodDay_ != nullptr;};
    void deleteAmortizationPeriodDay() { this->amortizationPeriodDay_ = nullptr;};
    inline string amortizationPeriodDay() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriodDay_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setAmortizationPeriodDay(string amortizationPeriodDay) { DARABONBA_PTR_SET_VALUE(amortizationPeriodDay_, amortizationPeriodDay) };


    // amortizationStatus Field Functions 
    bool hasAmortizationStatus() const { return this->amortizationStatus_ != nullptr;};
    void deleteAmortizationStatus() { this->amortizationStatus_ = nullptr;};
    inline string amortizationStatus() const { DARABONBA_PTR_GET_DEFAULT(amortizationStatus_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setAmortizationStatus(string amortizationStatus) { DARABONBA_PTR_SET_VALUE(amortizationStatus_, amortizationStatus) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline int64_t billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, 0L) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setBillAccountID(int64_t billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // billOwnerID Field Functions 
    bool hasBillOwnerID() const { return this->billOwnerID_ != nullptr;};
    void deleteBillOwnerID() { this->billOwnerID_ = nullptr;};
    inline int64_t billOwnerID() const { DARABONBA_PTR_GET_DEFAULT(billOwnerID_, 0L) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setBillOwnerID(int64_t billOwnerID) { DARABONBA_PTR_SET_VALUE(billOwnerID_, billOwnerID) };


    // billOwnerName Field Functions 
    bool hasBillOwnerName() const { return this->billOwnerName_ != nullptr;};
    void deleteBillOwnerName() { this->billOwnerName_ = nullptr;};
    inline string billOwnerName() const { DARABONBA_PTR_GET_DEFAULT(billOwnerName_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setBillOwnerName(string billOwnerName) { DARABONBA_PTR_SET_VALUE(billOwnerName_, billOwnerName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consumePeriod Field Functions 
    bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
    void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
    inline string consumePeriod() const { DARABONBA_PTR_GET_DEFAULT(consumePeriod_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setConsumePeriod(string consumePeriod) { DARABONBA_PTR_SET_VALUE(consumePeriod_, consumePeriod) };


    // consumePeriodDay Field Functions 
    bool hasConsumePeriodDay() const { return this->consumePeriodDay_ != nullptr;};
    void deleteConsumePeriodDay() { this->consumePeriodDay_ = nullptr;};
    inline string consumePeriodDay() const { DARABONBA_PTR_GET_DEFAULT(consumePeriodDay_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setConsumePeriodDay(string consumePeriodDay) { DARABONBA_PTR_SET_VALUE(consumePeriodDay_, consumePeriodDay) };


    // costUnit Field Functions 
    bool hasCostUnit() const { return this->costUnit_ != nullptr;};
    void deleteCostUnit() { this->costUnit_ = nullptr;};
    inline string costUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string costUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // currentAmortizationDeductedByCashCoupons Field Functions 
    bool hasCurrentAmortizationDeductedByCashCoupons() const { return this->currentAmortizationDeductedByCashCoupons_ != nullptr;};
    void deleteCurrentAmortizationDeductedByCashCoupons() { this->currentAmortizationDeductedByCashCoupons_ = nullptr;};
    inline double currentAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCashCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationDeductedByCashCoupons(double currentAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCashCoupons_, currentAmortizationDeductedByCashCoupons) };


    // currentAmortizationDeductedByCoupons Field Functions 
    bool hasCurrentAmortizationDeductedByCoupons() const { return this->currentAmortizationDeductedByCoupons_ != nullptr;};
    void deleteCurrentAmortizationDeductedByCoupons() { this->currentAmortizationDeductedByCoupons_ = nullptr;};
    inline double currentAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationDeductedByCoupons(double currentAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCoupons_, currentAmortizationDeductedByCoupons) };


    // currentAmortizationDeductedByPrepaidCard Field Functions 
    bool hasCurrentAmortizationDeductedByPrepaidCard() const { return this->currentAmortizationDeductedByPrepaidCard_ != nullptr;};
    void deleteCurrentAmortizationDeductedByPrepaidCard() { this->currentAmortizationDeductedByPrepaidCard_ = nullptr;};
    inline double currentAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByPrepaidCard_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationDeductedByPrepaidCard(double currentAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByPrepaidCard_, currentAmortizationDeductedByPrepaidCard) };


    // currentAmortizationExpenditureAmount Field Functions 
    bool hasCurrentAmortizationExpenditureAmount() const { return this->currentAmortizationExpenditureAmount_ != nullptr;};
    void deleteCurrentAmortizationExpenditureAmount() { this->currentAmortizationExpenditureAmount_ = nullptr;};
    inline double currentAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationExpenditureAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationExpenditureAmount(double currentAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationExpenditureAmount_, currentAmortizationExpenditureAmount) };


    // currentAmortizationInvoiceDiscount Field Functions 
    bool hasCurrentAmortizationInvoiceDiscount() const { return this->currentAmortizationInvoiceDiscount_ != nullptr;};
    void deleteCurrentAmortizationInvoiceDiscount() { this->currentAmortizationInvoiceDiscount_ = nullptr;};
    inline double currentAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationInvoiceDiscount(double currentAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationInvoiceDiscount_, currentAmortizationInvoiceDiscount) };


    // currentAmortizationPretaxAmount Field Functions 
    bool hasCurrentAmortizationPretaxAmount() const { return this->currentAmortizationPretaxAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxAmount() { this->currentAmortizationPretaxAmount_ = nullptr;};
    inline double currentAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationPretaxAmount(double currentAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxAmount_, currentAmortizationPretaxAmount) };


    // currentAmortizationPretaxGrossAmount Field Functions 
    bool hasCurrentAmortizationPretaxGrossAmount() const { return this->currentAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxGrossAmount() { this->currentAmortizationPretaxGrossAmount_ = nullptr;};
    inline double currentAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationPretaxGrossAmount(double currentAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxGrossAmount_, currentAmortizationPretaxGrossAmount) };


    // currentAmortizationRoundDownDiscount Field Functions 
    bool hasCurrentAmortizationRoundDownDiscount() const { return this->currentAmortizationRoundDownDiscount_ != nullptr;};
    void deleteCurrentAmortizationRoundDownDiscount() { this->currentAmortizationRoundDownDiscount_ = nullptr;};
    inline double currentAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setCurrentAmortizationRoundDownDiscount(double currentAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationRoundDownDiscount_, currentAmortizationRoundDownDiscount) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline double deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setDeductedByCashCoupons(double deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline double deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setDeductedByCoupons(double deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline double deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setDeductedByPrepaidCard(double deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // expenditureAmount Field Functions 
    bool hasExpenditureAmount() const { return this->expenditureAmount_ != nullptr;};
    void deleteExpenditureAmount() { this->expenditureAmount_ = nullptr;};
    inline double expenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(expenditureAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setExpenditureAmount(double expenditureAmount) { DARABONBA_PTR_SET_VALUE(expenditureAmount_, expenditureAmount) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // internetIP Field Functions 
    bool hasInternetIP() const { return this->internetIP_ != nullptr;};
    void deleteInternetIP() { this->internetIP_ = nullptr;};
    inline string internetIP() const { DARABONBA_PTR_GET_DEFAULT(internetIP_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setInternetIP(string internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };


    // intranetIP Field Functions 
    bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
    void deleteIntranetIP() { this->intranetIP_ = nullptr;};
    inline string intranetIP() const { DARABONBA_PTR_GET_DEFAULT(intranetIP_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setIntranetIP(string intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline double invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setInvoiceDiscount(double invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline double pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPretaxAmount(double pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline double pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPretaxGrossAmount(double pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // previouslyAmortizedDeductedByCashCoupons Field Functions 
    bool hasPreviouslyAmortizedDeductedByCashCoupons() const { return this->previouslyAmortizedDeductedByCashCoupons_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByCashCoupons() { this->previouslyAmortizedDeductedByCashCoupons_ = nullptr;};
    inline double previouslyAmortizedDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCashCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedDeductedByCashCoupons(double previouslyAmortizedDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCashCoupons_, previouslyAmortizedDeductedByCashCoupons) };


    // previouslyAmortizedDeductedByCoupons Field Functions 
    bool hasPreviouslyAmortizedDeductedByCoupons() const { return this->previouslyAmortizedDeductedByCoupons_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByCoupons() { this->previouslyAmortizedDeductedByCoupons_ = nullptr;};
    inline double previouslyAmortizedDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedDeductedByCoupons(double previouslyAmortizedDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCoupons_, previouslyAmortizedDeductedByCoupons) };


    // previouslyAmortizedDeductedByPrepaidCard Field Functions 
    bool hasPreviouslyAmortizedDeductedByPrepaidCard() const { return this->previouslyAmortizedDeductedByPrepaidCard_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByPrepaidCard() { this->previouslyAmortizedDeductedByPrepaidCard_ = nullptr;};
    inline double previouslyAmortizedDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByPrepaidCard_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedDeductedByPrepaidCard(double previouslyAmortizedDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByPrepaidCard_, previouslyAmortizedDeductedByPrepaidCard) };


    // previouslyAmortizedExpenditureAmount Field Functions 
    bool hasPreviouslyAmortizedExpenditureAmount() const { return this->previouslyAmortizedExpenditureAmount_ != nullptr;};
    void deletePreviouslyAmortizedExpenditureAmount() { this->previouslyAmortizedExpenditureAmount_ = nullptr;};
    inline double previouslyAmortizedExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedExpenditureAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedExpenditureAmount(double previouslyAmortizedExpenditureAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedExpenditureAmount_, previouslyAmortizedExpenditureAmount) };


    // previouslyAmortizedInvoiceDiscount Field Functions 
    bool hasPreviouslyAmortizedInvoiceDiscount() const { return this->previouslyAmortizedInvoiceDiscount_ != nullptr;};
    void deletePreviouslyAmortizedInvoiceDiscount() { this->previouslyAmortizedInvoiceDiscount_ = nullptr;};
    inline double previouslyAmortizedInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedInvoiceDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedInvoiceDiscount(double previouslyAmortizedInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedInvoiceDiscount_, previouslyAmortizedInvoiceDiscount) };


    // previouslyAmortizedPretaxAmount Field Functions 
    bool hasPreviouslyAmortizedPretaxAmount() const { return this->previouslyAmortizedPretaxAmount_ != nullptr;};
    void deletePreviouslyAmortizedPretaxAmount() { this->previouslyAmortizedPretaxAmount_ = nullptr;};
    inline double previouslyAmortizedPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedPretaxAmount(double previouslyAmortizedPretaxAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxAmount_, previouslyAmortizedPretaxAmount) };


    // previouslyAmortizedPretaxGrossAmount Field Functions 
    bool hasPreviouslyAmortizedPretaxGrossAmount() const { return this->previouslyAmortizedPretaxGrossAmount_ != nullptr;};
    void deletePreviouslyAmortizedPretaxGrossAmount() { this->previouslyAmortizedPretaxGrossAmount_ = nullptr;};
    inline double previouslyAmortizedPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxGrossAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedPretaxGrossAmount(double previouslyAmortizedPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxGrossAmount_, previouslyAmortizedPretaxGrossAmount) };


    // previouslyAmortizedRoundDownDiscount Field Functions 
    bool hasPreviouslyAmortizedRoundDownDiscount() const { return this->previouslyAmortizedRoundDownDiscount_ != nullptr;};
    void deletePreviouslyAmortizedRoundDownDiscount() { this->previouslyAmortizedRoundDownDiscount_ = nullptr;};
    inline double previouslyAmortizedRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedRoundDownDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setPreviouslyAmortizedRoundDownDiscount(double previouslyAmortizedRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedRoundDownDiscount_, previouslyAmortizedRoundDownDiscount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productDetailCode Field Functions 
    bool hasProductDetailCode() const { return this->productDetailCode_ != nullptr;};
    void deleteProductDetailCode() { this->productDetailCode_ = nullptr;};
    inline string productDetailCode() const { DARABONBA_PTR_GET_DEFAULT(productDetailCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setProductDetailCode(string productDetailCode) { DARABONBA_PTR_SET_VALUE(productDetailCode_, productDetailCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remainingAmortizationDeductedByCashCoupons Field Functions 
    bool hasRemainingAmortizationDeductedByCashCoupons() const { return this->remainingAmortizationDeductedByCashCoupons_ != nullptr;};
    void deleteRemainingAmortizationDeductedByCashCoupons() { this->remainingAmortizationDeductedByCashCoupons_ = nullptr;};
    inline double remainingAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCashCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationDeductedByCashCoupons(double remainingAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCashCoupons_, remainingAmortizationDeductedByCashCoupons) };


    // remainingAmortizationDeductedByCoupons Field Functions 
    bool hasRemainingAmortizationDeductedByCoupons() const { return this->remainingAmortizationDeductedByCoupons_ != nullptr;};
    void deleteRemainingAmortizationDeductedByCoupons() { this->remainingAmortizationDeductedByCoupons_ = nullptr;};
    inline double remainingAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationDeductedByCoupons(double remainingAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCoupons_, remainingAmortizationDeductedByCoupons) };


    // remainingAmortizationDeductedByPrepaidCard Field Functions 
    bool hasRemainingAmortizationDeductedByPrepaidCard() const { return this->remainingAmortizationDeductedByPrepaidCard_ != nullptr;};
    void deleteRemainingAmortizationDeductedByPrepaidCard() { this->remainingAmortizationDeductedByPrepaidCard_ = nullptr;};
    inline double remainingAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByPrepaidCard_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationDeductedByPrepaidCard(double remainingAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByPrepaidCard_, remainingAmortizationDeductedByPrepaidCard) };


    // remainingAmortizationExpenditureAmount Field Functions 
    bool hasRemainingAmortizationExpenditureAmount() const { return this->remainingAmortizationExpenditureAmount_ != nullptr;};
    void deleteRemainingAmortizationExpenditureAmount() { this->remainingAmortizationExpenditureAmount_ = nullptr;};
    inline double remainingAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationExpenditureAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationExpenditureAmount(double remainingAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationExpenditureAmount_, remainingAmortizationExpenditureAmount) };


    // remainingAmortizationInvoiceDiscount Field Functions 
    bool hasRemainingAmortizationInvoiceDiscount() const { return this->remainingAmortizationInvoiceDiscount_ != nullptr;};
    void deleteRemainingAmortizationInvoiceDiscount() { this->remainingAmortizationInvoiceDiscount_ = nullptr;};
    inline double remainingAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationInvoiceDiscount(double remainingAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationInvoiceDiscount_, remainingAmortizationInvoiceDiscount) };


    // remainingAmortizationPretaxAmount Field Functions 
    bool hasRemainingAmortizationPretaxAmount() const { return this->remainingAmortizationPretaxAmount_ != nullptr;};
    void deleteRemainingAmortizationPretaxAmount() { this->remainingAmortizationPretaxAmount_ = nullptr;};
    inline double remainingAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationPretaxAmount(double remainingAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxAmount_, remainingAmortizationPretaxAmount) };


    // remainingAmortizationPretaxGrossAmount Field Functions 
    bool hasRemainingAmortizationPretaxGrossAmount() const { return this->remainingAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteRemainingAmortizationPretaxGrossAmount() { this->remainingAmortizationPretaxGrossAmount_ = nullptr;};
    inline double remainingAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationPretaxGrossAmount(double remainingAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxGrossAmount_, remainingAmortizationPretaxGrossAmount) };


    // remainingAmortizationRoundDownDiscount Field Functions 
    bool hasRemainingAmortizationRoundDownDiscount() const { return this->remainingAmortizationRoundDownDiscount_ != nullptr;};
    void deleteRemainingAmortizationRoundDownDiscount() { this->remainingAmortizationRoundDownDiscount_ = nullptr;};
    inline double remainingAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRemainingAmortizationRoundDownDiscount(double remainingAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationRoundDownDiscount_, remainingAmortizationRoundDownDiscount) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // roundDownDiscount Field Functions 
    bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
    void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
    inline double roundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, 0.0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setRoundDownDiscount(double roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


    // splitAccountName Field Functions 
    bool hasSplitAccountName() const { return this->splitAccountName_ != nullptr;};
    void deleteSplitAccountName() { this->splitAccountName_ = nullptr;};
    inline string splitAccountName() const { DARABONBA_PTR_GET_DEFAULT(splitAccountName_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setSplitAccountName(string splitAccountName) { DARABONBA_PTR_SET_VALUE(splitAccountName_, splitAccountName) };


    // splitItemID Field Functions 
    bool hasSplitItemID() const { return this->splitItemID_ != nullptr;};
    void deleteSplitItemID() { this->splitItemID_ = nullptr;};
    inline string splitItemID() const { DARABONBA_PTR_GET_DEFAULT(splitItemID_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setSplitItemID(string splitItemID) { DARABONBA_PTR_SET_VALUE(splitItemID_, splitItemID) };


    // splitItemName Field Functions 
    bool hasSplitItemName() const { return this->splitItemName_ != nullptr;};
    void deleteSplitItemName() { this->splitItemName_ = nullptr;};
    inline string splitItemName() const { DARABONBA_PTR_GET_DEFAULT(splitItemName_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setSplitItemName(string splitItemName) { DARABONBA_PTR_SET_VALUE(splitItemName_, splitItemName) };


    // splitProductDetail Field Functions 
    bool hasSplitProductDetail() const { return this->splitProductDetail_ != nullptr;};
    void deleteSplitProductDetail() { this->splitProductDetail_ = nullptr;};
    inline string splitProductDetail() const { DARABONBA_PTR_GET_DEFAULT(splitProductDetail_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setSplitProductDetail(string splitProductDetail) { DARABONBA_PTR_SET_VALUE(splitProductDetail_, splitProductDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateResponseBodyDataItems& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<string> amortizationPeriod_ = nullptr;
    std::shared_ptr<string> amortizationPeriodDay_ = nullptr;
    std::shared_ptr<string> amortizationStatus_ = nullptr;
    std::shared_ptr<int64_t> billAccountID_ = nullptr;
    std::shared_ptr<string> billAccountName_ = nullptr;
    std::shared_ptr<int64_t> billOwnerID_ = nullptr;
    std::shared_ptr<string> billOwnerName_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> consumePeriod_ = nullptr;
    std::shared_ptr<string> consumePeriodDay_ = nullptr;
    std::shared_ptr<string> costUnit_ = nullptr;
    std::shared_ptr<string> costUnitCode_ = nullptr;
    std::shared_ptr<double> currentAmortizationDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<double> currentAmortizationDeductedByCoupons_ = nullptr;
    std::shared_ptr<double> currentAmortizationDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<double> currentAmortizationExpenditureAmount_ = nullptr;
    std::shared_ptr<double> currentAmortizationInvoiceDiscount_ = nullptr;
    std::shared_ptr<double> currentAmortizationPretaxAmount_ = nullptr;
    std::shared_ptr<double> currentAmortizationPretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> currentAmortizationRoundDownDiscount_ = nullptr;
    std::shared_ptr<double> deductedByCashCoupons_ = nullptr;
    std::shared_ptr<double> deductedByCoupons_ = nullptr;
    std::shared_ptr<double> deductedByPrepaidCard_ = nullptr;
    std::shared_ptr<double> expenditureAmount_ = nullptr;
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<string> internetIP_ = nullptr;
    std::shared_ptr<string> intranetIP_ = nullptr;
    std::shared_ptr<double> invoiceDiscount_ = nullptr;
    std::shared_ptr<double> pretaxAmount_ = nullptr;
    std::shared_ptr<double> pretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedDeductedByCoupons_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedExpenditureAmount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedInvoiceDiscount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedPretaxAmount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedPretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedRoundDownDiscount_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productDetail_ = nullptr;
    std::shared_ptr<string> productDetailCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<double> remainingAmortizationDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<double> remainingAmortizationDeductedByCoupons_ = nullptr;
    std::shared_ptr<double> remainingAmortizationDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<double> remainingAmortizationExpenditureAmount_ = nullptr;
    std::shared_ptr<double> remainingAmortizationInvoiceDiscount_ = nullptr;
    std::shared_ptr<double> remainingAmortizationPretaxAmount_ = nullptr;
    std::shared_ptr<double> remainingAmortizationPretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> remainingAmortizationRoundDownDiscount_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<double> roundDownDiscount_ = nullptr;
    std::shared_ptr<string> splitAccountName_ = nullptr;
    std::shared_ptr<string> splitItemID_ = nullptr;
    std::shared_ptr<string> splitItemName_ = nullptr;
    std::shared_ptr<string> splitProductDetail_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
