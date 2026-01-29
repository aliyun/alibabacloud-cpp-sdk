// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeProductAmortizedCostByConsumePeriodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductAmortizedCostByConsumePeriodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductAmortizedCostByConsumePeriodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProductAmortizedCostByConsumePeriodResponseBody() = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBody(const DescribeProductAmortizedCostByConsumePeriodResponseBody &) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBody(DescribeProductAmortizedCostByConsumePeriodResponseBody &&) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductAmortizedCostByConsumePeriodResponseBody() = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBody& operator=(const DescribeProductAmortizedCostByConsumePeriodResponseBody &) = default ;
    DescribeProductAmortizedCostByConsumePeriodResponseBody& operator=(DescribeProductAmortizedCostByConsumePeriodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountID, accountID_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
        virtual bool empty() const override { return this->afterDiscountAmount_ == nullptr
        && this->amortizationPeriod_ == nullptr && this->amortizationStatus_ == nullptr && this->billAccountID_ == nullptr && this->billAccountName_ == nullptr && this->billOwnerID_ == nullptr
        && this->billOwnerName_ == nullptr && this->bizType_ == nullptr && this->consumePeriod_ == nullptr && this->currentAmortizationAfterDiscountAmount_ == nullptr && this->currentAmortizationDeductedByCashCoupons_ == nullptr
        && this->currentAmortizationDeductedByCoupons_ == nullptr && this->currentAmortizationDeductedByPrepaidCard_ == nullptr && this->currentAmortizationExpenditureAmount_ == nullptr && this->currentAmortizationInvoiceDiscount_ == nullptr && this->currentAmortizationPretaxAmount_ == nullptr
        && this->currentAmortizationPretaxGrossAmount_ == nullptr && this->currentAmortizationRoundDownDiscount_ == nullptr && this->deductedByCashCoupons_ == nullptr && this->deductedByCoupons_ == nullptr && this->deductedByPrepaidCard_ == nullptr
        && this->expenditureAmount_ == nullptr && this->invoiceDiscount_ == nullptr && this->pretaxAmount_ == nullptr && this->pretaxGrossAmount_ == nullptr && this->previouslyAmortizedAfterDiscountAmount_ == nullptr
        && this->previouslyAmortizedDeductedByCashCoupons_ == nullptr && this->previouslyAmortizedDeductedByCoupons_ == nullptr && this->previouslyAmortizedDeductedByPrepaidCard_ == nullptr && this->previouslyAmortizedExpenditureAmount_ == nullptr && this->previouslyAmortizedInvoiceDiscount_ == nullptr
        && this->previouslyAmortizedPretaxAmount_ == nullptr && this->previouslyAmortizedPretaxGrossAmount_ == nullptr && this->previouslyAmortizedRoundDownDiscount_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr
        && this->productDetailCode_ == nullptr && this->productName_ == nullptr && this->remainingAmortizationAfterDiscountAmount_ == nullptr && this->remainingAmortizationDeductedByCashCoupons_ == nullptr && this->remainingAmortizationDeductedByCoupons_ == nullptr
        && this->remainingAmortizationDeductedByPrepaidCard_ == nullptr && this->remainingAmortizationExpenditureAmount_ == nullptr && this->remainingAmortizationInvoiceDiscount_ == nullptr && this->remainingAmortizationPretaxAmount_ == nullptr && this->remainingAmortizationPretaxGrossAmount_ == nullptr
        && this->remainingAmortizationRoundDownDiscount_ == nullptr && this->roundDownDiscount_ == nullptr && this->subscriptionType_ == nullptr; };
        // afterDiscountAmount Field Functions 
        bool hasAfterDiscountAmount() const { return this->afterDiscountAmount_ != nullptr;};
        void deleteAfterDiscountAmount() { this->afterDiscountAmount_ = nullptr;};
        inline double getAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(afterDiscountAmount_, 0.0) };
        inline Items& setAfterDiscountAmount(double afterDiscountAmount) { DARABONBA_PTR_SET_VALUE(afterDiscountAmount_, afterDiscountAmount) };


        // amortizationPeriod Field Functions 
        bool hasAmortizationPeriod() const { return this->amortizationPeriod_ != nullptr;};
        void deleteAmortizationPeriod() { this->amortizationPeriod_ = nullptr;};
        inline string getAmortizationPeriod() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriod_, "") };
        inline Items& setAmortizationPeriod(string amortizationPeriod) { DARABONBA_PTR_SET_VALUE(amortizationPeriod_, amortizationPeriod) };


        // amortizationStatus Field Functions 
        bool hasAmortizationStatus() const { return this->amortizationStatus_ != nullptr;};
        void deleteAmortizationStatus() { this->amortizationStatus_ = nullptr;};
        inline string getAmortizationStatus() const { DARABONBA_PTR_GET_DEFAULT(amortizationStatus_, "") };
        inline Items& setAmortizationStatus(string amortizationStatus) { DARABONBA_PTR_SET_VALUE(amortizationStatus_, amortizationStatus) };


        // billAccountID Field Functions 
        bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
        void deleteBillAccountID() { this->billAccountID_ = nullptr;};
        inline int64_t getBillAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, 0L) };
        inline Items& setBillAccountID(int64_t billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


        // billAccountName Field Functions 
        bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
        void deleteBillAccountName() { this->billAccountName_ = nullptr;};
        inline string getBillAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
        inline Items& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


        // billOwnerID Field Functions 
        bool hasBillOwnerID() const { return this->billOwnerID_ != nullptr;};
        void deleteBillOwnerID() { this->billOwnerID_ = nullptr;};
        inline int64_t getBillOwnerID() const { DARABONBA_PTR_GET_DEFAULT(billOwnerID_, 0L) };
        inline Items& setBillOwnerID(int64_t billOwnerID) { DARABONBA_PTR_SET_VALUE(billOwnerID_, billOwnerID) };


        // billOwnerName Field Functions 
        bool hasBillOwnerName() const { return this->billOwnerName_ != nullptr;};
        void deleteBillOwnerName() { this->billOwnerName_ = nullptr;};
        inline string getBillOwnerName() const { DARABONBA_PTR_GET_DEFAULT(billOwnerName_, "") };
        inline Items& setBillOwnerName(string billOwnerName) { DARABONBA_PTR_SET_VALUE(billOwnerName_, billOwnerName) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline Items& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // consumePeriod Field Functions 
        bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
        void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
        inline string getConsumePeriod() const { DARABONBA_PTR_GET_DEFAULT(consumePeriod_, "") };
        inline Items& setConsumePeriod(string consumePeriod) { DARABONBA_PTR_SET_VALUE(consumePeriod_, consumePeriod) };


        // currentAmortizationAfterDiscountAmount Field Functions 
        bool hasCurrentAmortizationAfterDiscountAmount() const { return this->currentAmortizationAfterDiscountAmount_ != nullptr;};
        void deleteCurrentAmortizationAfterDiscountAmount() { this->currentAmortizationAfterDiscountAmount_ = nullptr;};
        inline double getCurrentAmortizationAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationAfterDiscountAmount_, 0.0) };
        inline Items& setCurrentAmortizationAfterDiscountAmount(double currentAmortizationAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationAfterDiscountAmount_, currentAmortizationAfterDiscountAmount) };


        // currentAmortizationDeductedByCashCoupons Field Functions 
        bool hasCurrentAmortizationDeductedByCashCoupons() const { return this->currentAmortizationDeductedByCashCoupons_ != nullptr;};
        void deleteCurrentAmortizationDeductedByCashCoupons() { this->currentAmortizationDeductedByCashCoupons_ = nullptr;};
        inline double getCurrentAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCashCoupons_, 0.0) };
        inline Items& setCurrentAmortizationDeductedByCashCoupons(double currentAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCashCoupons_, currentAmortizationDeductedByCashCoupons) };


        // currentAmortizationDeductedByCoupons Field Functions 
        bool hasCurrentAmortizationDeductedByCoupons() const { return this->currentAmortizationDeductedByCoupons_ != nullptr;};
        void deleteCurrentAmortizationDeductedByCoupons() { this->currentAmortizationDeductedByCoupons_ = nullptr;};
        inline double getCurrentAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCoupons_, 0.0) };
        inline Items& setCurrentAmortizationDeductedByCoupons(double currentAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCoupons_, currentAmortizationDeductedByCoupons) };


        // currentAmortizationDeductedByPrepaidCard Field Functions 
        bool hasCurrentAmortizationDeductedByPrepaidCard() const { return this->currentAmortizationDeductedByPrepaidCard_ != nullptr;};
        void deleteCurrentAmortizationDeductedByPrepaidCard() { this->currentAmortizationDeductedByPrepaidCard_ = nullptr;};
        inline double getCurrentAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByPrepaidCard_, 0.0) };
        inline Items& setCurrentAmortizationDeductedByPrepaidCard(double currentAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByPrepaidCard_, currentAmortizationDeductedByPrepaidCard) };


        // currentAmortizationExpenditureAmount Field Functions 
        bool hasCurrentAmortizationExpenditureAmount() const { return this->currentAmortizationExpenditureAmount_ != nullptr;};
        void deleteCurrentAmortizationExpenditureAmount() { this->currentAmortizationExpenditureAmount_ = nullptr;};
        inline double getCurrentAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationExpenditureAmount_, 0.0) };
        inline Items& setCurrentAmortizationExpenditureAmount(double currentAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationExpenditureAmount_, currentAmortizationExpenditureAmount) };


        // currentAmortizationInvoiceDiscount Field Functions 
        bool hasCurrentAmortizationInvoiceDiscount() const { return this->currentAmortizationInvoiceDiscount_ != nullptr;};
        void deleteCurrentAmortizationInvoiceDiscount() { this->currentAmortizationInvoiceDiscount_ = nullptr;};
        inline double getCurrentAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationInvoiceDiscount_, 0.0) };
        inline Items& setCurrentAmortizationInvoiceDiscount(double currentAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationInvoiceDiscount_, currentAmortizationInvoiceDiscount) };


        // currentAmortizationPretaxAmount Field Functions 
        bool hasCurrentAmortizationPretaxAmount() const { return this->currentAmortizationPretaxAmount_ != nullptr;};
        void deleteCurrentAmortizationPretaxAmount() { this->currentAmortizationPretaxAmount_ = nullptr;};
        inline double getCurrentAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxAmount_, 0.0) };
        inline Items& setCurrentAmortizationPretaxAmount(double currentAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxAmount_, currentAmortizationPretaxAmount) };


        // currentAmortizationPretaxGrossAmount Field Functions 
        bool hasCurrentAmortizationPretaxGrossAmount() const { return this->currentAmortizationPretaxGrossAmount_ != nullptr;};
        void deleteCurrentAmortizationPretaxGrossAmount() { this->currentAmortizationPretaxGrossAmount_ = nullptr;};
        inline double getCurrentAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxGrossAmount_, 0.0) };
        inline Items& setCurrentAmortizationPretaxGrossAmount(double currentAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxGrossAmount_, currentAmortizationPretaxGrossAmount) };


        // currentAmortizationRoundDownDiscount Field Functions 
        bool hasCurrentAmortizationRoundDownDiscount() const { return this->currentAmortizationRoundDownDiscount_ != nullptr;};
        void deleteCurrentAmortizationRoundDownDiscount() { this->currentAmortizationRoundDownDiscount_ = nullptr;};
        inline double getCurrentAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationRoundDownDiscount_, 0.0) };
        inline Items& setCurrentAmortizationRoundDownDiscount(double currentAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationRoundDownDiscount_, currentAmortizationRoundDownDiscount) };


        // deductedByCashCoupons Field Functions 
        bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
        void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
        inline double getDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
        inline Items& setDeductedByCashCoupons(double deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


        // deductedByCoupons Field Functions 
        bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
        void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
        inline double getDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
        inline Items& setDeductedByCoupons(double deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


        // deductedByPrepaidCard Field Functions 
        bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
        void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
        inline double getDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
        inline Items& setDeductedByPrepaidCard(double deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


        // expenditureAmount Field Functions 
        bool hasExpenditureAmount() const { return this->expenditureAmount_ != nullptr;};
        void deleteExpenditureAmount() { this->expenditureAmount_ = nullptr;};
        inline double getExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(expenditureAmount_, 0.0) };
        inline Items& setExpenditureAmount(double expenditureAmount) { DARABONBA_PTR_SET_VALUE(expenditureAmount_, expenditureAmount) };


        // invoiceDiscount Field Functions 
        bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
        void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
        inline double getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
        inline Items& setInvoiceDiscount(double invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


        // pretaxAmount Field Functions 
        bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
        void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
        inline double getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
        inline Items& setPretaxAmount(double pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


        // pretaxGrossAmount Field Functions 
        bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
        void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
        inline double getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
        inline Items& setPretaxGrossAmount(double pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


        // previouslyAmortizedAfterDiscountAmount Field Functions 
        bool hasPreviouslyAmortizedAfterDiscountAmount() const { return this->previouslyAmortizedAfterDiscountAmount_ != nullptr;};
        void deletePreviouslyAmortizedAfterDiscountAmount() { this->previouslyAmortizedAfterDiscountAmount_ = nullptr;};
        inline double getPreviouslyAmortizedAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedAfterDiscountAmount_, 0.0) };
        inline Items& setPreviouslyAmortizedAfterDiscountAmount(double previouslyAmortizedAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedAfterDiscountAmount_, previouslyAmortizedAfterDiscountAmount) };


        // previouslyAmortizedDeductedByCashCoupons Field Functions 
        bool hasPreviouslyAmortizedDeductedByCashCoupons() const { return this->previouslyAmortizedDeductedByCashCoupons_ != nullptr;};
        void deletePreviouslyAmortizedDeductedByCashCoupons() { this->previouslyAmortizedDeductedByCashCoupons_ = nullptr;};
        inline double getPreviouslyAmortizedDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCashCoupons_, 0.0) };
        inline Items& setPreviouslyAmortizedDeductedByCashCoupons(double previouslyAmortizedDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCashCoupons_, previouslyAmortizedDeductedByCashCoupons) };


        // previouslyAmortizedDeductedByCoupons Field Functions 
        bool hasPreviouslyAmortizedDeductedByCoupons() const { return this->previouslyAmortizedDeductedByCoupons_ != nullptr;};
        void deletePreviouslyAmortizedDeductedByCoupons() { this->previouslyAmortizedDeductedByCoupons_ = nullptr;};
        inline double getPreviouslyAmortizedDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByCoupons_, 0.0) };
        inline Items& setPreviouslyAmortizedDeductedByCoupons(double previouslyAmortizedDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByCoupons_, previouslyAmortizedDeductedByCoupons) };


        // previouslyAmortizedDeductedByPrepaidCard Field Functions 
        bool hasPreviouslyAmortizedDeductedByPrepaidCard() const { return this->previouslyAmortizedDeductedByPrepaidCard_ != nullptr;};
        void deletePreviouslyAmortizedDeductedByPrepaidCard() { this->previouslyAmortizedDeductedByPrepaidCard_ = nullptr;};
        inline double getPreviouslyAmortizedDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedDeductedByPrepaidCard_, 0.0) };
        inline Items& setPreviouslyAmortizedDeductedByPrepaidCard(double previouslyAmortizedDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedDeductedByPrepaidCard_, previouslyAmortizedDeductedByPrepaidCard) };


        // previouslyAmortizedExpenditureAmount Field Functions 
        bool hasPreviouslyAmortizedExpenditureAmount() const { return this->previouslyAmortizedExpenditureAmount_ != nullptr;};
        void deletePreviouslyAmortizedExpenditureAmount() { this->previouslyAmortizedExpenditureAmount_ = nullptr;};
        inline double getPreviouslyAmortizedExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedExpenditureAmount_, 0.0) };
        inline Items& setPreviouslyAmortizedExpenditureAmount(double previouslyAmortizedExpenditureAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedExpenditureAmount_, previouslyAmortizedExpenditureAmount) };


        // previouslyAmortizedInvoiceDiscount Field Functions 
        bool hasPreviouslyAmortizedInvoiceDiscount() const { return this->previouslyAmortizedInvoiceDiscount_ != nullptr;};
        void deletePreviouslyAmortizedInvoiceDiscount() { this->previouslyAmortizedInvoiceDiscount_ = nullptr;};
        inline double getPreviouslyAmortizedInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedInvoiceDiscount_, 0.0) };
        inline Items& setPreviouslyAmortizedInvoiceDiscount(double previouslyAmortizedInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedInvoiceDiscount_, previouslyAmortizedInvoiceDiscount) };


        // previouslyAmortizedPretaxAmount Field Functions 
        bool hasPreviouslyAmortizedPretaxAmount() const { return this->previouslyAmortizedPretaxAmount_ != nullptr;};
        void deletePreviouslyAmortizedPretaxAmount() { this->previouslyAmortizedPretaxAmount_ = nullptr;};
        inline double getPreviouslyAmortizedPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxAmount_, 0.0) };
        inline Items& setPreviouslyAmortizedPretaxAmount(double previouslyAmortizedPretaxAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxAmount_, previouslyAmortizedPretaxAmount) };


        // previouslyAmortizedPretaxGrossAmount Field Functions 
        bool hasPreviouslyAmortizedPretaxGrossAmount() const { return this->previouslyAmortizedPretaxGrossAmount_ != nullptr;};
        void deletePreviouslyAmortizedPretaxGrossAmount() { this->previouslyAmortizedPretaxGrossAmount_ = nullptr;};
        inline double getPreviouslyAmortizedPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedPretaxGrossAmount_, 0.0) };
        inline Items& setPreviouslyAmortizedPretaxGrossAmount(double previouslyAmortizedPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedPretaxGrossAmount_, previouslyAmortizedPretaxGrossAmount) };


        // previouslyAmortizedRoundDownDiscount Field Functions 
        bool hasPreviouslyAmortizedRoundDownDiscount() const { return this->previouslyAmortizedRoundDownDiscount_ != nullptr;};
        void deletePreviouslyAmortizedRoundDownDiscount() { this->previouslyAmortizedRoundDownDiscount_ = nullptr;};
        inline double getPreviouslyAmortizedRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(previouslyAmortizedRoundDownDiscount_, 0.0) };
        inline Items& setPreviouslyAmortizedRoundDownDiscount(double previouslyAmortizedRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(previouslyAmortizedRoundDownDiscount_, previouslyAmortizedRoundDownDiscount) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productDetail Field Functions 
        bool hasProductDetail() const { return this->productDetail_ != nullptr;};
        void deleteProductDetail() { this->productDetail_ = nullptr;};
        inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
        inline Items& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


        // productDetailCode Field Functions 
        bool hasProductDetailCode() const { return this->productDetailCode_ != nullptr;};
        void deleteProductDetailCode() { this->productDetailCode_ = nullptr;};
        inline string getProductDetailCode() const { DARABONBA_PTR_GET_DEFAULT(productDetailCode_, "") };
        inline Items& setProductDetailCode(string productDetailCode) { DARABONBA_PTR_SET_VALUE(productDetailCode_, productDetailCode) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline Items& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // remainingAmortizationAfterDiscountAmount Field Functions 
        bool hasRemainingAmortizationAfterDiscountAmount() const { return this->remainingAmortizationAfterDiscountAmount_ != nullptr;};
        void deleteRemainingAmortizationAfterDiscountAmount() { this->remainingAmortizationAfterDiscountAmount_ = nullptr;};
        inline double getRemainingAmortizationAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationAfterDiscountAmount_, 0.0) };
        inline Items& setRemainingAmortizationAfterDiscountAmount(double remainingAmortizationAfterDiscountAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationAfterDiscountAmount_, remainingAmortizationAfterDiscountAmount) };


        // remainingAmortizationDeductedByCashCoupons Field Functions 
        bool hasRemainingAmortizationDeductedByCashCoupons() const { return this->remainingAmortizationDeductedByCashCoupons_ != nullptr;};
        void deleteRemainingAmortizationDeductedByCashCoupons() { this->remainingAmortizationDeductedByCashCoupons_ = nullptr;};
        inline double getRemainingAmortizationDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCashCoupons_, 0.0) };
        inline Items& setRemainingAmortizationDeductedByCashCoupons(double remainingAmortizationDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCashCoupons_, remainingAmortizationDeductedByCashCoupons) };


        // remainingAmortizationDeductedByCoupons Field Functions 
        bool hasRemainingAmortizationDeductedByCoupons() const { return this->remainingAmortizationDeductedByCoupons_ != nullptr;};
        void deleteRemainingAmortizationDeductedByCoupons() { this->remainingAmortizationDeductedByCoupons_ = nullptr;};
        inline double getRemainingAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByCoupons_, 0.0) };
        inline Items& setRemainingAmortizationDeductedByCoupons(double remainingAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByCoupons_, remainingAmortizationDeductedByCoupons) };


        // remainingAmortizationDeductedByPrepaidCard Field Functions 
        bool hasRemainingAmortizationDeductedByPrepaidCard() const { return this->remainingAmortizationDeductedByPrepaidCard_ != nullptr;};
        void deleteRemainingAmortizationDeductedByPrepaidCard() { this->remainingAmortizationDeductedByPrepaidCard_ = nullptr;};
        inline double getRemainingAmortizationDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationDeductedByPrepaidCard_, 0.0) };
        inline Items& setRemainingAmortizationDeductedByPrepaidCard(double remainingAmortizationDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(remainingAmortizationDeductedByPrepaidCard_, remainingAmortizationDeductedByPrepaidCard) };


        // remainingAmortizationExpenditureAmount Field Functions 
        bool hasRemainingAmortizationExpenditureAmount() const { return this->remainingAmortizationExpenditureAmount_ != nullptr;};
        void deleteRemainingAmortizationExpenditureAmount() { this->remainingAmortizationExpenditureAmount_ = nullptr;};
        inline double getRemainingAmortizationExpenditureAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationExpenditureAmount_, 0.0) };
        inline Items& setRemainingAmortizationExpenditureAmount(double remainingAmortizationExpenditureAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationExpenditureAmount_, remainingAmortizationExpenditureAmount) };


        // remainingAmortizationInvoiceDiscount Field Functions 
        bool hasRemainingAmortizationInvoiceDiscount() const { return this->remainingAmortizationInvoiceDiscount_ != nullptr;};
        void deleteRemainingAmortizationInvoiceDiscount() { this->remainingAmortizationInvoiceDiscount_ = nullptr;};
        inline double getRemainingAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationInvoiceDiscount_, 0.0) };
        inline Items& setRemainingAmortizationInvoiceDiscount(double remainingAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationInvoiceDiscount_, remainingAmortizationInvoiceDiscount) };


        // remainingAmortizationPretaxAmount Field Functions 
        bool hasRemainingAmortizationPretaxAmount() const { return this->remainingAmortizationPretaxAmount_ != nullptr;};
        void deleteRemainingAmortizationPretaxAmount() { this->remainingAmortizationPretaxAmount_ = nullptr;};
        inline double getRemainingAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxAmount_, 0.0) };
        inline Items& setRemainingAmortizationPretaxAmount(double remainingAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxAmount_, remainingAmortizationPretaxAmount) };


        // remainingAmortizationPretaxGrossAmount Field Functions 
        bool hasRemainingAmortizationPretaxGrossAmount() const { return this->remainingAmortizationPretaxGrossAmount_ != nullptr;};
        void deleteRemainingAmortizationPretaxGrossAmount() { this->remainingAmortizationPretaxGrossAmount_ = nullptr;};
        inline double getRemainingAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationPretaxGrossAmount_, 0.0) };
        inline Items& setRemainingAmortizationPretaxGrossAmount(double remainingAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationPretaxGrossAmount_, remainingAmortizationPretaxGrossAmount) };


        // remainingAmortizationRoundDownDiscount Field Functions 
        bool hasRemainingAmortizationRoundDownDiscount() const { return this->remainingAmortizationRoundDownDiscount_ != nullptr;};
        void deleteRemainingAmortizationRoundDownDiscount() { this->remainingAmortizationRoundDownDiscount_ = nullptr;};
        inline double getRemainingAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmortizationRoundDownDiscount_, 0.0) };
        inline Items& setRemainingAmortizationRoundDownDiscount(double remainingAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(remainingAmortizationRoundDownDiscount_, remainingAmortizationRoundDownDiscount) };


        // roundDownDiscount Field Functions 
        bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
        void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
        inline double getRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, 0.0) };
        inline Items& setRoundDownDiscount(double roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


        // subscriptionType Field Functions 
        bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
        void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
        inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
        inline Items& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


      protected:
        shared_ptr<double> afterDiscountAmount_ {};
        shared_ptr<string> amortizationPeriod_ {};
        shared_ptr<string> amortizationStatus_ {};
        shared_ptr<int64_t> billAccountID_ {};
        shared_ptr<string> billAccountName_ {};
        shared_ptr<int64_t> billOwnerID_ {};
        shared_ptr<string> billOwnerName_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> consumePeriod_ {};
        shared_ptr<double> currentAmortizationAfterDiscountAmount_ {};
        shared_ptr<double> currentAmortizationDeductedByCashCoupons_ {};
        shared_ptr<double> currentAmortizationDeductedByCoupons_ {};
        shared_ptr<double> currentAmortizationDeductedByPrepaidCard_ {};
        shared_ptr<double> currentAmortizationExpenditureAmount_ {};
        shared_ptr<double> currentAmortizationInvoiceDiscount_ {};
        shared_ptr<double> currentAmortizationPretaxAmount_ {};
        shared_ptr<double> currentAmortizationPretaxGrossAmount_ {};
        shared_ptr<double> currentAmortizationRoundDownDiscount_ {};
        shared_ptr<double> deductedByCashCoupons_ {};
        shared_ptr<double> deductedByCoupons_ {};
        shared_ptr<double> deductedByPrepaidCard_ {};
        shared_ptr<double> expenditureAmount_ {};
        shared_ptr<double> invoiceDiscount_ {};
        shared_ptr<double> pretaxAmount_ {};
        shared_ptr<double> pretaxGrossAmount_ {};
        shared_ptr<double> previouslyAmortizedAfterDiscountAmount_ {};
        shared_ptr<double> previouslyAmortizedDeductedByCashCoupons_ {};
        shared_ptr<double> previouslyAmortizedDeductedByCoupons_ {};
        shared_ptr<double> previouslyAmortizedDeductedByPrepaidCard_ {};
        shared_ptr<double> previouslyAmortizedExpenditureAmount_ {};
        shared_ptr<double> previouslyAmortizedInvoiceDiscount_ {};
        shared_ptr<double> previouslyAmortizedPretaxAmount_ {};
        shared_ptr<double> previouslyAmortizedPretaxGrossAmount_ {};
        shared_ptr<double> previouslyAmortizedRoundDownDiscount_ {};
        shared_ptr<string> productCode_ {};
        shared_ptr<string> productDetail_ {};
        shared_ptr<string> productDetailCode_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<double> remainingAmortizationAfterDiscountAmount_ {};
        shared_ptr<double> remainingAmortizationDeductedByCashCoupons_ {};
        shared_ptr<double> remainingAmortizationDeductedByCoupons_ {};
        shared_ptr<double> remainingAmortizationDeductedByPrepaidCard_ {};
        shared_ptr<double> remainingAmortizationExpenditureAmount_ {};
        shared_ptr<double> remainingAmortizationInvoiceDiscount_ {};
        shared_ptr<double> remainingAmortizationPretaxAmount_ {};
        shared_ptr<double> remainingAmortizationPretaxGrossAmount_ {};
        shared_ptr<double> remainingAmortizationRoundDownDiscount_ {};
        shared_ptr<double> roundDownDiscount_ {};
        shared_ptr<string> subscriptionType_ {};
      };

      virtual bool empty() const override { return this->accountID_ == nullptr
        && this->accountName_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // accountID Field Functions 
      bool hasAccountID() const { return this->accountID_ != nullptr;};
      void deleteAccountID() { this->accountID_ = nullptr;};
      inline string getAccountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
      inline Data& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> accountID_ {};
      shared_ptr<string> accountName_ {};
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeProductAmortizedCostByConsumePeriodResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeProductAmortizedCostByConsumePeriodResponseBody::Data) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeProductAmortizedCostByConsumePeriodResponseBody::Data) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setData(const DescribeProductAmortizedCostByConsumePeriodResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setData(DescribeProductAmortizedCostByConsumePeriodResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProductAmortizedCostByConsumePeriodResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeProductAmortizedCostByConsumePeriodResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
