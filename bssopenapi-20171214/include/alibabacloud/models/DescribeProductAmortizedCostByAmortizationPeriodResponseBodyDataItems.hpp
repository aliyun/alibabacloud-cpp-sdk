// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDiscountAmount, afterDiscountAmount_);
      DARABONBA_PTR_TO_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_TO_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_TO_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_TO_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationAfterDiscountAmount, currentAmortizationAfterDiscountAmount_);
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
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(PreviouslyAmortizedAfterDiscountAmount, previouslyAmortizedAfterDiscountAmount_);
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
      DARABONBA_PTR_TO_JSON(RemainingAmortizationAfterDiscountAmount, remainingAmortizationAfterDiscountAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByCashCoupons, remainingAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByCoupons, remainingAmortizationDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationDeductedByPrepaidCard, remainingAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationExpenditureAmount, remainingAmortizationExpenditureAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationInvoiceDiscount, remainingAmortizationInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationPretaxAmount, remainingAmortizationPretaxAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationPretaxGrossAmount, remainingAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmortizationRoundDownDiscount, remainingAmortizationRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDiscountAmount, afterDiscountAmount_);
      DARABONBA_PTR_FROM_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_FROM_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_FROM_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_FROM_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationAfterDiscountAmount, currentAmortizationAfterDiscountAmount_);
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
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(PreviouslyAmortizedAfterDiscountAmount, previouslyAmortizedAfterDiscountAmount_);
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
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationAfterDiscountAmount, remainingAmortizationAfterDiscountAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByCashCoupons, remainingAmortizationDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByCoupons, remainingAmortizationDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationDeductedByPrepaidCard, remainingAmortizationDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationExpenditureAmount, remainingAmortizationExpenditureAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationInvoiceDiscount, remainingAmortizationInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationPretaxAmount, remainingAmortizationPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationPretaxGrossAmount, remainingAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmortizationRoundDownDiscount, remainingAmortizationRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems() = default ;
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems(const DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems &) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems(DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems &&) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems() = default ;
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& operator=(const DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems &) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& operator=(DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterDiscountAmount_ != nullptr
        && this->amortizationPeriod_ != nullptr && this->amortizationStatus_ != nullptr && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->billOwnerID_ != nullptr
        && this->billOwnerName_ != nullptr && this->bizType_ != nullptr && this->consumePeriod_ != nullptr && this->currentAmortizationAfterDiscountAmount_ != nullptr && this->currentAmortizationDeductedByCashCoupons_ != nullptr
        && this->currentAmortizationDeductedByCoupons_ != nullptr && this->currentAmortizationDeductedByPrepaidCard_ != nullptr && this->currentAmortizationExpenditureAmount_ != nullptr && this->currentAmortizationInvoiceDiscount_ != nullptr && this->currentAmortizationPretaxAmount_ != nullptr
        && this->currentAmortizationPretaxGrossAmount_ != nullptr && this->currentAmortizationRoundDownDiscount_ != nullptr && this->deductedByCashCoupons_ != nullptr && this->deductedByCoupons_ != nullptr && this->deductedByPrepaidCard_ != nullptr
        && this->expenditureAmount_ != nullptr && this->invoiceDiscount_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->previouslyAmortizedAfterDiscountAmount_ != nullptr
        && this->previouslyAmortizedDeductedByCashCoupons_ != nullptr && this->previouslyAmortizedDeductedByCoupons_ != nullptr && this->previouslyAmortizedDeductedByPrepaidCard_ != nullptr && this->previouslyAmortizedExpenditureAmount_ != nullptr && this->previouslyAmortizedInvoiceDiscount_ != nullptr
        && this->previouslyAmortizedPretaxAmount_ != nullptr && this->previouslyAmortizedPretaxGrossAmount_ != nullptr && this->previouslyAmortizedRoundDownDiscount_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr
        && this->productDetailCode_ != nullptr && this->productName_ != nullptr && this->remainingAmortizationAfterDiscountAmount_ != nullptr && this->remainingAmortizationDeductedByCashCoupons_ != nullptr && this->remainingAmortizationDeductedByCoupons_ != nullptr
        && this->remainingAmortizationDeductedByPrepaidCard_ != nullptr && this->remainingAmortizationExpenditureAmount_ != nullptr && this->remainingAmortizationInvoiceDiscount_ != nullptr && this->remainingAmortizationPretaxAmount_ != nullptr && this->remainingAmortizationPretaxGrossAmount_ != nullptr
        && this->remainingAmortizationRoundDownDiscount_ != nullptr && this->roundDownDiscount_ != nullptr && this->subscriptionType_ != nullptr; };
    // afterDiscountAmount Field Functions 
    bool hasAfterDiscountAmount() const { return this->afterDiscountAmount_ != nullptr;};
    void deleteAfterDiscountAmount() { this->afterDiscountAmount_ = nullptr;};
    inline double afterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(afterDiscountAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAfterDiscountAmount(double afterDiscountAmount) { DARABONBA_PTR_SET_VALUE(afterDiscountAmount_, afterDiscountAmount) };


    // amortizationPeriod Field Functions 
    bool hasAmortizationPeriod() const { return this->amortizationPeriod_ != nullptr;};
    void deleteAmortizationPeriod() { this->amortizationPeriod_ = nullptr;};
    inline string amortizationPeriod() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriod_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAmortizationPeriod(string amortizationPeriod) { DARABONBA_PTR_SET_VALUE(amortizationPeriod_, amortizationPeriod) };


    // amortizationStatus Field Functions 
    bool hasAmortizationStatus() const { return this->amortizationStatus_ != nullptr;};
    void deleteAmortizationStatus() { this->amortizationStatus_ = nullptr;};
    inline string amortizationStatus() const { DARABONBA_PTR_GET_DEFAULT(amortizationStatus_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAmortizationStatus(string amortizationStatus) { DARABONBA_PTR_SET_VALUE(amortizationStatus_, amortizationStatus) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline int64_t billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, 0L) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillAccountID(int64_t billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // billOwnerID Field Functions 
    bool hasBillOwnerID() const { return this->billOwnerID_ != nullptr;};
    void deleteBillOwnerID() { this->billOwnerID_ = nullptr;};
    inline int64_t billOwnerID() const { DARABONBA_PTR_GET_DEFAULT(billOwnerID_, 0L) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillOwnerID(int64_t billOwnerID) { DARABONBA_PTR_SET_VALUE(billOwnerID_, billOwnerID) };


    // billOwnerName Field Functions 
    bool hasBillOwnerName() const { return this->billOwnerName_ != nullptr;};
    void deleteBillOwnerName() { this->billOwnerName_ = nullptr;};
    inline string billOwnerName() const { DARABONBA_PTR_GET_DEFAULT(billOwnerName_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillOwnerName(string billOwnerName) { DARABONBA_PTR_SET_VALUE(billOwnerName_, billOwnerName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consumePeriod Field Functions 
    bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
    void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
    inline string consumePeriod() const { DARABONBA_PTR_GET_DEFAULT(consumePeriod_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setConsumePeriod(string consumePeriod) { DARABONBA_PTR_SET_VALUE(consumePeriod_, consumePeriod) };


    // currentAmortizationAfterDiscountAmount Field Functions 
    bool hasCurrentAmortizationAfterDiscountAmount() const { return this->currentAmortizationAfterDiscountAmount_ != nullptr;};
    void deleteCurrentAmortizationAfterDiscountAmount() { this->currentAmortizationAfterDiscountAmount_ = nullptr;};
    inline double currentAmortizationAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationAfterDiscountAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationAfterDiscountAmount(double currentAmortizationAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationAfterDiscountAmount_, currentAmortizationAfterDiscountAmount) };


    // currentAmortizationDeductedByCashCoupons Field Functions 
    bool hasCurrentAmortizationDeductedByCashCoupons() const { return this->currentAmortizationDeductedByCashCoupons_ != nullptr;};
    void deleteCurrentAmortizationDeductedByCashCoupons() { this->currentAmortizationDeductedByCashCoupons_ = nullptr;};
    inline double currentAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCashCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationDeductedByCashCoupons(double currentAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCashCoupons_, currentAmortizationDeductedByCashCoupons) };


    // currentAmortizationDeductedByCoupons Field Functions 
    bool hasCurrentAmortizationDeductedByCoupons() const { return this->currentAmortizationDeductedByCoupons_ != nullptr;};
    void deleteCurrentAmortizationDeductedByCoupons() { this->currentAmortizationDeductedByCoupons_ = nullptr;};
    inline double currentAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationDeductedByCoupons(double currentAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCoupons_, currentAmortizationDeductedByCoupons) };


    // currentAmortizationDeductedByPrepaidCard Field Functions 
    bool hasCurrentAmortizationDeductedByPrepaidCard() const { return this->currentAmortizationDeductedByPrepaidCard_ != nullptr;};
    void deleteCurrentAmortizationDeductedByPrepaidCard() { this->currentAmortizationDeductedByPrepaidCard_ = nullptr;};
    inline double currentAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByPrepaidCard_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationDeductedByPrepaidCard(double currentAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByPrepaidCard_, currentAmortizationDeductedByPrepaidCard) };


    // currentAmortizationExpenditureAmount Field Functions 
    bool hasCurrentAmortizationExpenditureAmount() const { return this->currentAmortizationExpenditureAmount_ != nullptr;};
    void deleteCurrentAmortizationExpenditureAmount() { this->currentAmortizationExpenditureAmount_ = nullptr;};
    inline double currentAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationExpenditureAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationExpenditureAmount(double currentAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationExpenditureAmount_, currentAmortizationExpenditureAmount) };


    // currentAmortizationInvoiceDiscount Field Functions 
    bool hasCurrentAmortizationInvoiceDiscount() const { return this->currentAmortizationInvoiceDiscount_ != nullptr;};
    void deleteCurrentAmortizationInvoiceDiscount() { this->currentAmortizationInvoiceDiscount_ = nullptr;};
    inline double currentAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationInvoiceDiscount(double currentAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationInvoiceDiscount_, currentAmortizationInvoiceDiscount) };


    // currentAmortizationPretaxAmount Field Functions 
    bool hasCurrentAmortizationPretaxAmount() const { return this->currentAmortizationPretaxAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxAmount() { this->currentAmortizationPretaxAmount_ = nullptr;};
    inline double currentAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationPretaxAmount(double currentAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxAmount_, currentAmortizationPretaxAmount) };


    // currentAmortizationPretaxGrossAmount Field Functions 
    bool hasCurrentAmortizationPretaxGrossAmount() const { return this->currentAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxGrossAmount() { this->currentAmortizationPretaxGrossAmount_ = nullptr;};
    inline double currentAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationPretaxGrossAmount(double currentAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxGrossAmount_, currentAmortizationPretaxGrossAmount) };


    // currentAmortizationRoundDownDiscount Field Functions 
    bool hasCurrentAmortizationRoundDownDiscount() const { return this->currentAmortizationRoundDownDiscount_ != nullptr;};
    void deleteCurrentAmortizationRoundDownDiscount() { this->currentAmortizationRoundDownDiscount_ = nullptr;};
    inline double currentAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationRoundDownDiscount(double currentAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationRoundDownDiscount_, currentAmortizationRoundDownDiscount) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline double deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setDeductedByCashCoupons(double deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline double deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setDeductedByCoupons(double deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline double deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setDeductedByPrepaidCard(double deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // expenditureAmount Field Functions 
    bool hasExpenditureAmount() const { return this->expenditureAmount_ != nullptr;};
    void deleteExpenditureAmount() { this->expenditureAmount_ = nullptr;};
    inline double expenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(expenditureAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setExpenditureAmount(double expenditureAmount) { DARABONBA_PTR_SET_VALUE(expenditureAmount_, expenditureAmount) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline double invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setInvoiceDiscount(double invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline double pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPretaxAmount(double pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline double pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPretaxGrossAmount(double pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // previouslyAmortizedAfterDiscountAmount Field Functions 
    bool hasPreviouslyAmortizedAfterDiscountAmount() const { return this->previouslyAmortizedAfterDiscountAmount_ != nullptr;};
    void deletePreviouslyAmortizedAfterDiscountAmount() { this->previouslyAmortizedAfterDiscountAmount_ = nullptr;};
    inline double previouslyAmortizedAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedAfterDiscountAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedAfterDiscountAmount(double previouslyAmortizedAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedAfterDiscountAmount_, previouslyAmortizedAfterDiscountAmount) };


    // previouslyAmortizedDeductedByCashCoupons Field Functions 
    bool hasPreviouslyAmortizedDeductedByCashCoupons() const { return this->previouslyAmortizedDeductedByCashCoupons_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByCashCoupons() { this->previouslyAmortizedDeductedByCashCoupons_ = nullptr;};
    inline double previouslyAmortizedDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCashCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedDeductedByCashCoupons(double previouslyAmortizedDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCashCoupons_, previouslyAmortizedDeductedByCashCoupons) };


    // previouslyAmortizedDeductedByCoupons Field Functions 
    bool hasPreviouslyAmortizedDeductedByCoupons() const { return this->previouslyAmortizedDeductedByCoupons_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByCoupons() { this->previouslyAmortizedDeductedByCoupons_ = nullptr;};
    inline double previouslyAmortizedDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedDeductedByCoupons(double previouslyAmortizedDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCoupons_, previouslyAmortizedDeductedByCoupons) };


    // previouslyAmortizedDeductedByPrepaidCard Field Functions 
    bool hasPreviouslyAmortizedDeductedByPrepaidCard() const { return this->previouslyAmortizedDeductedByPrepaidCard_ != nullptr;};
    void deletePreviouslyAmortizedDeductedByPrepaidCard() { this->previouslyAmortizedDeductedByPrepaidCard_ = nullptr;};
    inline double previouslyAmortizedDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByPrepaidCard_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedDeductedByPrepaidCard(double previouslyAmortizedDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByPrepaidCard_, previouslyAmortizedDeductedByPrepaidCard) };


    // previouslyAmortizedExpenditureAmount Field Functions 
    bool hasPreviouslyAmortizedExpenditureAmount() const { return this->previouslyAmortizedExpenditureAmount_ != nullptr;};
    void deletePreviouslyAmortizedExpenditureAmount() { this->previouslyAmortizedExpenditureAmount_ = nullptr;};
    inline double previouslyAmortizedExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedExpenditureAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedExpenditureAmount(double previouslyAmortizedExpenditureAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedExpenditureAmount_, previouslyAmortizedExpenditureAmount) };


    // previouslyAmortizedInvoiceDiscount Field Functions 
    bool hasPreviouslyAmortizedInvoiceDiscount() const { return this->previouslyAmortizedInvoiceDiscount_ != nullptr;};
    void deletePreviouslyAmortizedInvoiceDiscount() { this->previouslyAmortizedInvoiceDiscount_ = nullptr;};
    inline double previouslyAmortizedInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedInvoiceDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedInvoiceDiscount(double previouslyAmortizedInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedInvoiceDiscount_, previouslyAmortizedInvoiceDiscount) };


    // previouslyAmortizedPretaxAmount Field Functions 
    bool hasPreviouslyAmortizedPretaxAmount() const { return this->previouslyAmortizedPretaxAmount_ != nullptr;};
    void deletePreviouslyAmortizedPretaxAmount() { this->previouslyAmortizedPretaxAmount_ = nullptr;};
    inline double previouslyAmortizedPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedPretaxAmount(double previouslyAmortizedPretaxAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxAmount_, previouslyAmortizedPretaxAmount) };


    // previouslyAmortizedPretaxGrossAmount Field Functions 
    bool hasPreviouslyAmortizedPretaxGrossAmount() const { return this->previouslyAmortizedPretaxGrossAmount_ != nullptr;};
    void deletePreviouslyAmortizedPretaxGrossAmount() { this->previouslyAmortizedPretaxGrossAmount_ = nullptr;};
    inline double previouslyAmortizedPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxGrossAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedPretaxGrossAmount(double previouslyAmortizedPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxGrossAmount_, previouslyAmortizedPretaxGrossAmount) };


    // previouslyAmortizedRoundDownDiscount Field Functions 
    bool hasPreviouslyAmortizedRoundDownDiscount() const { return this->previouslyAmortizedRoundDownDiscount_ != nullptr;};
    void deletePreviouslyAmortizedRoundDownDiscount() { this->previouslyAmortizedRoundDownDiscount_ = nullptr;};
    inline double previouslyAmortizedRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedRoundDownDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPreviouslyAmortizedRoundDownDiscount(double previouslyAmortizedRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedRoundDownDiscount_, previouslyAmortizedRoundDownDiscount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productDetailCode Field Functions 
    bool hasProductDetailCode() const { return this->productDetailCode_ != nullptr;};
    void deleteProductDetailCode() { this->productDetailCode_ = nullptr;};
    inline string productDetailCode() const { DARABONBA_PTR_GET_DEFAULT(productDetailCode_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductDetailCode(string productDetailCode) { DARABONBA_PTR_SET_VALUE(productDetailCode_, productDetailCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // remainingAmortizationAfterDiscountAmount Field Functions 
    bool hasRemainingAmortizationAfterDiscountAmount() const { return this->remainingAmortizationAfterDiscountAmount_ != nullptr;};
    void deleteRemainingAmortizationAfterDiscountAmount() { this->remainingAmortizationAfterDiscountAmount_ = nullptr;};
    inline double remainingAmortizationAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationAfterDiscountAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationAfterDiscountAmount(double remainingAmortizationAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationAfterDiscountAmount_, remainingAmortizationAfterDiscountAmount) };


    // remainingAmortizationDeductedByCashCoupons Field Functions 
    bool hasRemainingAmortizationDeductedByCashCoupons() const { return this->remainingAmortizationDeductedByCashCoupons_ != nullptr;};
    void deleteRemainingAmortizationDeductedByCashCoupons() { this->remainingAmortizationDeductedByCashCoupons_ = nullptr;};
    inline double remainingAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCashCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationDeductedByCashCoupons(double remainingAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCashCoupons_, remainingAmortizationDeductedByCashCoupons) };


    // remainingAmortizationDeductedByCoupons Field Functions 
    bool hasRemainingAmortizationDeductedByCoupons() const { return this->remainingAmortizationDeductedByCoupons_ != nullptr;};
    void deleteRemainingAmortizationDeductedByCoupons() { this->remainingAmortizationDeductedByCoupons_ = nullptr;};
    inline double remainingAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationDeductedByCoupons(double remainingAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCoupons_, remainingAmortizationDeductedByCoupons) };


    // remainingAmortizationDeductedByPrepaidCard Field Functions 
    bool hasRemainingAmortizationDeductedByPrepaidCard() const { return this->remainingAmortizationDeductedByPrepaidCard_ != nullptr;};
    void deleteRemainingAmortizationDeductedByPrepaidCard() { this->remainingAmortizationDeductedByPrepaidCard_ = nullptr;};
    inline double remainingAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByPrepaidCard_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationDeductedByPrepaidCard(double remainingAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByPrepaidCard_, remainingAmortizationDeductedByPrepaidCard) };


    // remainingAmortizationExpenditureAmount Field Functions 
    bool hasRemainingAmortizationExpenditureAmount() const { return this->remainingAmortizationExpenditureAmount_ != nullptr;};
    void deleteRemainingAmortizationExpenditureAmount() { this->remainingAmortizationExpenditureAmount_ = nullptr;};
    inline double remainingAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationExpenditureAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationExpenditureAmount(double remainingAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationExpenditureAmount_, remainingAmortizationExpenditureAmount) };


    // remainingAmortizationInvoiceDiscount Field Functions 
    bool hasRemainingAmortizationInvoiceDiscount() const { return this->remainingAmortizationInvoiceDiscount_ != nullptr;};
    void deleteRemainingAmortizationInvoiceDiscount() { this->remainingAmortizationInvoiceDiscount_ = nullptr;};
    inline double remainingAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationInvoiceDiscount(double remainingAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationInvoiceDiscount_, remainingAmortizationInvoiceDiscount) };


    // remainingAmortizationPretaxAmount Field Functions 
    bool hasRemainingAmortizationPretaxAmount() const { return this->remainingAmortizationPretaxAmount_ != nullptr;};
    void deleteRemainingAmortizationPretaxAmount() { this->remainingAmortizationPretaxAmount_ = nullptr;};
    inline double remainingAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationPretaxAmount(double remainingAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxAmount_, remainingAmortizationPretaxAmount) };


    // remainingAmortizationPretaxGrossAmount Field Functions 
    bool hasRemainingAmortizationPretaxGrossAmount() const { return this->remainingAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteRemainingAmortizationPretaxGrossAmount() { this->remainingAmortizationPretaxGrossAmount_ = nullptr;};
    inline double remainingAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationPretaxGrossAmount(double remainingAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxGrossAmount_, remainingAmortizationPretaxGrossAmount) };


    // remainingAmortizationRoundDownDiscount Field Functions 
    bool hasRemainingAmortizationRoundDownDiscount() const { return this->remainingAmortizationRoundDownDiscount_ != nullptr;};
    void deleteRemainingAmortizationRoundDownDiscount() { this->remainingAmortizationRoundDownDiscount_ = nullptr;};
    inline double remainingAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRemainingAmortizationRoundDownDiscount(double remainingAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationRoundDownDiscount_, remainingAmortizationRoundDownDiscount) };


    // roundDownDiscount Field Functions 
    bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
    void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
    inline double roundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, 0.0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRoundDownDiscount(double roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    std::shared_ptr<double> afterDiscountAmount_ = nullptr;
    // The allocation month. Format: YYYYMM.
    std::shared_ptr<string> amortizationPeriod_ = nullptr;
    // The allocation status. Valid values:
    // 
    // *   amortized: allocated
    // *   unAmortized: not allocated
    std::shared_ptr<string> amortizationStatus_ = nullptr;
    // The ID of the account to which the bill belongs.
    std::shared_ptr<int64_t> billAccountID_ = nullptr;
    // The name of the account to which the bill belongs.
    std::shared_ptr<string> billAccountName_ = nullptr;
    // The ID of the account to which the resource belongs.
    std::shared_ptr<int64_t> billOwnerID_ = nullptr;
    // The name of the account to which the resource belongs.
    std::shared_ptr<string> billOwnerName_ = nullptr;
    // The business type.
    std::shared_ptr<string> bizType_ = nullptr;
    // The billing cycle. Format: YYYYMM.
    std::shared_ptr<string> consumePeriod_ = nullptr;
    std::shared_ptr<double> currentAmortizationAfterDiscountAmount_ = nullptr;
    // The amount deducted by using vouchers and allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationDeductedByCashCoupons_ = nullptr;
    // The amount deducted by using coupons and allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationDeductedByCoupons_ = nullptr;
    // The amount deducted by using prepaid cards and allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationDeductedByPrepaidCard_ = nullptr;
    // The expenditure amount allocated to the current allocation month. Invoicing is supported.
    std::shared_ptr<double> currentAmortizationExpenditureAmount_ = nullptr;
    // The discount amount allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationInvoiceDiscount_ = nullptr;
    // The pretax amount allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationPretaxAmount_ = nullptr;
    // The pretax gross amount allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationPretaxGrossAmount_ = nullptr;
    // The round-off amount allocated to the current allocation month.
    std::shared_ptr<double> currentAmortizationRoundDownDiscount_ = nullptr;
    // The amount deducted by using vouchers.
    std::shared_ptr<double> deductedByCashCoupons_ = nullptr;
    // The amount deducted by using coupons.
    std::shared_ptr<double> deductedByCoupons_ = nullptr;
    // The amount deducted by using prepaid cards.
    std::shared_ptr<double> deductedByPrepaidCard_ = nullptr;
    // The expenditure amount. Invoicing is supported.
    std::shared_ptr<double> expenditureAmount_ = nullptr;
    // The discount amount.
    std::shared_ptr<double> invoiceDiscount_ = nullptr;
    // The pretax amount.
    std::shared_ptr<double> pretaxAmount_ = nullptr;
    // The pretax gross amount.
    std::shared_ptr<double> pretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> previouslyAmortizedAfterDiscountAmount_ = nullptr;
    // The amount deducted by using vouchers and allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedDeductedByCashCoupons_ = nullptr;
    // The amount deducted by using coupons and allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedDeductedByCoupons_ = nullptr;
    // The amount deducted by using prepaid cards and allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedDeductedByPrepaidCard_ = nullptr;
    // The expenditure amount allocated before the current allocation month. Invoicing is supported.
    std::shared_ptr<double> previouslyAmortizedExpenditureAmount_ = nullptr;
    // The discount amount allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedInvoiceDiscount_ = nullptr;
    // The pretax amount allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedPretaxAmount_ = nullptr;
    // The pretax gross amount allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedPretaxGrossAmount_ = nullptr;
    // The round-off amount allocated before the current allocation month.
    std::shared_ptr<double> previouslyAmortizedRoundDownDiscount_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The specific service resource.
    std::shared_ptr<string> productDetail_ = nullptr;
    // The code of the specific service resource.
    std::shared_ptr<string> productDetailCode_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<double> remainingAmortizationAfterDiscountAmount_ = nullptr;
    // The amount deducted by using vouchers and to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationDeductedByCashCoupons_ = nullptr;
    // The amount deducted by using coupons and to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationDeductedByCoupons_ = nullptr;
    // The amount deducted by using prepaid cards and to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationDeductedByPrepaidCard_ = nullptr;
    // The expenditure amount to be allocated to one or more future allocation months. Invoicing is supported.
    std::shared_ptr<double> remainingAmortizationExpenditureAmount_ = nullptr;
    // The discount amount to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationInvoiceDiscount_ = nullptr;
    // The pretax amount to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationPretaxAmount_ = nullptr;
    // The pretax gross amount to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationPretaxGrossAmount_ = nullptr;
    // The round-off amount to be allocated to one or more future allocation months.
    std::shared_ptr<double> remainingAmortizationRoundDownDiscount_ = nullptr;
    // The round-off amount.
    std::shared_ptr<double> roundDownDiscount_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method
    // *   PayAsYouGo: the pay-as-you-go billing method
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
