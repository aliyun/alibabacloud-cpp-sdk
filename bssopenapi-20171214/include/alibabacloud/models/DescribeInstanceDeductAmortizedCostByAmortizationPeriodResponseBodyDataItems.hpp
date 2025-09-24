// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDEDUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDEDUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_TO_JSON(AmortizationPeriodDay, amortizationPeriodDay_);
      DARABONBA_PTR_TO_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_TO_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_TO_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationDeductedByCoupons, currentAmortizationDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationInvoiceDiscount, currentAmortizationInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationPretaxAmount, currentAmortizationPretaxAmount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationPretaxGrossAmount, currentAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(CurrentAmortizationRoundDownDiscount, currentAmortizationRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InternetIP, internetIP_);
      DARABONBA_PTR_TO_JSON(IntranetIP, intranetIP_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductDetailCode, productDetailCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ReferFrInstanceID, referFrInstanceID_);
      DARABONBA_PTR_TO_JSON(ReferFrOwnerID, referFrOwnerID_);
      DARABONBA_PTR_TO_JSON(ReferFrProductDetailCode, referFrProductDetailCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_TO_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_TO_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_TO_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_TO_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnusedAmortizationDeductedByCoupons, unusedAmortizationDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(UnusedAmortizationInvoiceDiscount, unusedAmortizationInvoiceDiscount_);
      DARABONBA_PTR_TO_JSON(UnusedAmortizationPretaxAmount, unusedAmortizationPretaxAmount_);
      DARABONBA_PTR_TO_JSON(UnusedAmortizationPretaxGrossAmount, unusedAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(UnusedAmortizationRoundDownDiscount, unusedAmortizationRoundDownDiscount_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AmortizationPeriod, amortizationPeriod_);
      DARABONBA_PTR_FROM_JSON(AmortizationPeriodDay, amortizationPeriodDay_);
      DARABONBA_PTR_FROM_JSON(AmortizationStatus, amortizationStatus_);
      DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_FROM_JSON(BillOwnerID, billOwnerID_);
      DARABONBA_PTR_FROM_JSON(BillOwnerName, billOwnerName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriod, consumePeriod_);
      DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationDeductedByCoupons, currentAmortizationDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationInvoiceDiscount, currentAmortizationInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationPretaxAmount, currentAmortizationPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationPretaxGrossAmount, currentAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(CurrentAmortizationRoundDownDiscount, currentAmortizationRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InternetIP, internetIP_);
      DARABONBA_PTR_FROM_JSON(IntranetIP, intranetIP_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductDetailCode, productDetailCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ReferFrInstanceID, referFrInstanceID_);
      DARABONBA_PTR_FROM_JSON(ReferFrOwnerID, referFrOwnerID_);
      DARABONBA_PTR_FROM_JSON(ReferFrProductDetailCode, referFrProductDetailCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_FROM_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_FROM_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_FROM_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnusedAmortizationDeductedByCoupons, unusedAmortizationDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(UnusedAmortizationInvoiceDiscount, unusedAmortizationInvoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(UnusedAmortizationPretaxAmount, unusedAmortizationPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(UnusedAmortizationPretaxGrossAmount, unusedAmortizationPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(UnusedAmortizationRoundDownDiscount, unusedAmortizationRoundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems() = default ;
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems(const DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems &) = default ;
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems(DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems &&) = default ;
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems() = default ;
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& operator=(const DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems &) = default ;
    DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& operator=(DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amortizationPeriod_ != nullptr
        && this->amortizationPeriodDay_ != nullptr && this->amortizationStatus_ != nullptr && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->billOwnerID_ != nullptr
        && this->billOwnerName_ != nullptr && this->bizType_ != nullptr && this->consumePeriod_ != nullptr && this->costUnit_ != nullptr && this->costUnitCode_ != nullptr
        && this->currentAmortizationDeductedByCoupons_ != nullptr && this->currentAmortizationInvoiceDiscount_ != nullptr && this->currentAmortizationPretaxAmount_ != nullptr && this->currentAmortizationPretaxGrossAmount_ != nullptr && this->currentAmortizationRoundDownDiscount_ != nullptr
        && this->deductedByCoupons_ != nullptr && this->instanceConfig_ != nullptr && this->instanceID_ != nullptr && this->internetIP_ != nullptr && this->intranetIP_ != nullptr
        && this->invoiceDiscount_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr
        && this->productDetailCode_ != nullptr && this->productName_ != nullptr && this->referFrInstanceID_ != nullptr && this->referFrOwnerID_ != nullptr && this->referFrProductDetailCode_ != nullptr
        && this->region_ != nullptr && this->resourceGroup_ != nullptr && this->roundDownDiscount_ != nullptr && this->splitAccountName_ != nullptr && this->splitItemID_ != nullptr
        && this->splitItemName_ != nullptr && this->splitProductDetail_ != nullptr && this->subscriptionType_ != nullptr && this->tag_ != nullptr && this->unusedAmortizationDeductedByCoupons_ != nullptr
        && this->unusedAmortizationInvoiceDiscount_ != nullptr && this->unusedAmortizationPretaxAmount_ != nullptr && this->unusedAmortizationPretaxGrossAmount_ != nullptr && this->unusedAmortizationRoundDownDiscount_ != nullptr && this->zone_ != nullptr; };
    // amortizationPeriod Field Functions 
    bool hasAmortizationPeriod() const { return this->amortizationPeriod_ != nullptr;};
    void deleteAmortizationPeriod() { this->amortizationPeriod_ = nullptr;};
    inline string amortizationPeriod() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriod_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAmortizationPeriod(string amortizationPeriod) { DARABONBA_PTR_SET_VALUE(amortizationPeriod_, amortizationPeriod) };


    // amortizationPeriodDay Field Functions 
    bool hasAmortizationPeriodDay() const { return this->amortizationPeriodDay_ != nullptr;};
    void deleteAmortizationPeriodDay() { this->amortizationPeriodDay_ = nullptr;};
    inline string amortizationPeriodDay() const { DARABONBA_PTR_GET_DEFAULT(amortizationPeriodDay_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAmortizationPeriodDay(string amortizationPeriodDay) { DARABONBA_PTR_SET_VALUE(amortizationPeriodDay_, amortizationPeriodDay) };


    // amortizationStatus Field Functions 
    bool hasAmortizationStatus() const { return this->amortizationStatus_ != nullptr;};
    void deleteAmortizationStatus() { this->amortizationStatus_ = nullptr;};
    inline string amortizationStatus() const { DARABONBA_PTR_GET_DEFAULT(amortizationStatus_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setAmortizationStatus(string amortizationStatus) { DARABONBA_PTR_SET_VALUE(amortizationStatus_, amortizationStatus) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline int64_t billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, 0L) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillAccountID(int64_t billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // billOwnerID Field Functions 
    bool hasBillOwnerID() const { return this->billOwnerID_ != nullptr;};
    void deleteBillOwnerID() { this->billOwnerID_ = nullptr;};
    inline int64_t billOwnerID() const { DARABONBA_PTR_GET_DEFAULT(billOwnerID_, 0L) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillOwnerID(int64_t billOwnerID) { DARABONBA_PTR_SET_VALUE(billOwnerID_, billOwnerID) };


    // billOwnerName Field Functions 
    bool hasBillOwnerName() const { return this->billOwnerName_ != nullptr;};
    void deleteBillOwnerName() { this->billOwnerName_ = nullptr;};
    inline string billOwnerName() const { DARABONBA_PTR_GET_DEFAULT(billOwnerName_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBillOwnerName(string billOwnerName) { DARABONBA_PTR_SET_VALUE(billOwnerName_, billOwnerName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consumePeriod Field Functions 
    bool hasConsumePeriod() const { return this->consumePeriod_ != nullptr;};
    void deleteConsumePeriod() { this->consumePeriod_ = nullptr;};
    inline string consumePeriod() const { DARABONBA_PTR_GET_DEFAULT(consumePeriod_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setConsumePeriod(string consumePeriod) { DARABONBA_PTR_SET_VALUE(consumePeriod_, consumePeriod) };


    // costUnit Field Functions 
    bool hasCostUnit() const { return this->costUnit_ != nullptr;};
    void deleteCostUnit() { this->costUnit_ = nullptr;};
    inline string costUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string costUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // currentAmortizationDeductedByCoupons Field Functions 
    bool hasCurrentAmortizationDeductedByCoupons() const { return this->currentAmortizationDeductedByCoupons_ != nullptr;};
    void deleteCurrentAmortizationDeductedByCoupons() { this->currentAmortizationDeductedByCoupons_ = nullptr;};
    inline double currentAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationDeductedByCoupons(double currentAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(currentAmortizationDeductedByCoupons_, currentAmortizationDeductedByCoupons) };


    // currentAmortizationInvoiceDiscount Field Functions 
    bool hasCurrentAmortizationInvoiceDiscount() const { return this->currentAmortizationInvoiceDiscount_ != nullptr;};
    void deleteCurrentAmortizationInvoiceDiscount() { this->currentAmortizationInvoiceDiscount_ = nullptr;};
    inline double currentAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationInvoiceDiscount(double currentAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationInvoiceDiscount_, currentAmortizationInvoiceDiscount) };


    // currentAmortizationPretaxAmount Field Functions 
    bool hasCurrentAmortizationPretaxAmount() const { return this->currentAmortizationPretaxAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxAmount() { this->currentAmortizationPretaxAmount_ = nullptr;};
    inline double currentAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationPretaxAmount(double currentAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxAmount_, currentAmortizationPretaxAmount) };


    // currentAmortizationPretaxGrossAmount Field Functions 
    bool hasCurrentAmortizationPretaxGrossAmount() const { return this->currentAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteCurrentAmortizationPretaxGrossAmount() { this->currentAmortizationPretaxGrossAmount_ = nullptr;};
    inline double currentAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationPretaxGrossAmount(double currentAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(currentAmortizationPretaxGrossAmount_, currentAmortizationPretaxGrossAmount) };


    // currentAmortizationRoundDownDiscount Field Functions 
    bool hasCurrentAmortizationRoundDownDiscount() const { return this->currentAmortizationRoundDownDiscount_ != nullptr;};
    void deleteCurrentAmortizationRoundDownDiscount() { this->currentAmortizationRoundDownDiscount_ = nullptr;};
    inline double currentAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(currentAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setCurrentAmortizationRoundDownDiscount(double currentAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(currentAmortizationRoundDownDiscount_, currentAmortizationRoundDownDiscount) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline double deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setDeductedByCoupons(double deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline string instanceConfig() const { DARABONBA_PTR_GET_DEFAULT(instanceConfig_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setInstanceConfig(string instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // internetIP Field Functions 
    bool hasInternetIP() const { return this->internetIP_ != nullptr;};
    void deleteInternetIP() { this->internetIP_ = nullptr;};
    inline string internetIP() const { DARABONBA_PTR_GET_DEFAULT(internetIP_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setInternetIP(string internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };


    // intranetIP Field Functions 
    bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
    void deleteIntranetIP() { this->intranetIP_ = nullptr;};
    inline string intranetIP() const { DARABONBA_PTR_GET_DEFAULT(intranetIP_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setIntranetIP(string intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline double invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setInvoiceDiscount(double invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline double pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPretaxAmount(double pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline double pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setPretaxGrossAmount(double pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productDetailCode Field Functions 
    bool hasProductDetailCode() const { return this->productDetailCode_ != nullptr;};
    void deleteProductDetailCode() { this->productDetailCode_ = nullptr;};
    inline string productDetailCode() const { DARABONBA_PTR_GET_DEFAULT(productDetailCode_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductDetailCode(string productDetailCode) { DARABONBA_PTR_SET_VALUE(productDetailCode_, productDetailCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // referFrInstanceID Field Functions 
    bool hasReferFrInstanceID() const { return this->referFrInstanceID_ != nullptr;};
    void deleteReferFrInstanceID() { this->referFrInstanceID_ = nullptr;};
    inline string referFrInstanceID() const { DARABONBA_PTR_GET_DEFAULT(referFrInstanceID_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setReferFrInstanceID(string referFrInstanceID) { DARABONBA_PTR_SET_VALUE(referFrInstanceID_, referFrInstanceID) };


    // referFrOwnerID Field Functions 
    bool hasReferFrOwnerID() const { return this->referFrOwnerID_ != nullptr;};
    void deleteReferFrOwnerID() { this->referFrOwnerID_ = nullptr;};
    inline string referFrOwnerID() const { DARABONBA_PTR_GET_DEFAULT(referFrOwnerID_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setReferFrOwnerID(string referFrOwnerID) { DARABONBA_PTR_SET_VALUE(referFrOwnerID_, referFrOwnerID) };


    // referFrProductDetailCode Field Functions 
    bool hasReferFrProductDetailCode() const { return this->referFrProductDetailCode_ != nullptr;};
    void deleteReferFrProductDetailCode() { this->referFrProductDetailCode_ = nullptr;};
    inline string referFrProductDetailCode() const { DARABONBA_PTR_GET_DEFAULT(referFrProductDetailCode_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setReferFrProductDetailCode(string referFrProductDetailCode) { DARABONBA_PTR_SET_VALUE(referFrProductDetailCode_, referFrProductDetailCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // roundDownDiscount Field Functions 
    bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
    void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
    inline double roundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setRoundDownDiscount(double roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


    // splitAccountName Field Functions 
    bool hasSplitAccountName() const { return this->splitAccountName_ != nullptr;};
    void deleteSplitAccountName() { this->splitAccountName_ = nullptr;};
    inline string splitAccountName() const { DARABONBA_PTR_GET_DEFAULT(splitAccountName_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSplitAccountName(string splitAccountName) { DARABONBA_PTR_SET_VALUE(splitAccountName_, splitAccountName) };


    // splitItemID Field Functions 
    bool hasSplitItemID() const { return this->splitItemID_ != nullptr;};
    void deleteSplitItemID() { this->splitItemID_ = nullptr;};
    inline string splitItemID() const { DARABONBA_PTR_GET_DEFAULT(splitItemID_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSplitItemID(string splitItemID) { DARABONBA_PTR_SET_VALUE(splitItemID_, splitItemID) };


    // splitItemName Field Functions 
    bool hasSplitItemName() const { return this->splitItemName_ != nullptr;};
    void deleteSplitItemName() { this->splitItemName_ = nullptr;};
    inline string splitItemName() const { DARABONBA_PTR_GET_DEFAULT(splitItemName_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSplitItemName(string splitItemName) { DARABONBA_PTR_SET_VALUE(splitItemName_, splitItemName) };


    // splitProductDetail Field Functions 
    bool hasSplitProductDetail() const { return this->splitProductDetail_ != nullptr;};
    void deleteSplitProductDetail() { this->splitProductDetail_ = nullptr;};
    inline string splitProductDetail() const { DARABONBA_PTR_GET_DEFAULT(splitProductDetail_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSplitProductDetail(string splitProductDetail) { DARABONBA_PTR_SET_VALUE(splitProductDetail_, splitProductDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // unusedAmortizationDeductedByCoupons Field Functions 
    bool hasUnusedAmortizationDeductedByCoupons() const { return this->unusedAmortizationDeductedByCoupons_ != nullptr;};
    void deleteUnusedAmortizationDeductedByCoupons() { this->unusedAmortizationDeductedByCoupons_ = nullptr;};
    inline double unusedAmortizationDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(unusedAmortizationDeductedByCoupons_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setUnusedAmortizationDeductedByCoupons(double unusedAmortizationDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(unusedAmortizationDeductedByCoupons_, unusedAmortizationDeductedByCoupons) };


    // unusedAmortizationInvoiceDiscount Field Functions 
    bool hasUnusedAmortizationInvoiceDiscount() const { return this->unusedAmortizationInvoiceDiscount_ != nullptr;};
    void deleteUnusedAmortizationInvoiceDiscount() { this->unusedAmortizationInvoiceDiscount_ = nullptr;};
    inline double unusedAmortizationInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(unusedAmortizationInvoiceDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setUnusedAmortizationInvoiceDiscount(double unusedAmortizationInvoiceDiscount) { DARABONBA_PTR_SET_VALUE(unusedAmortizationInvoiceDiscount_, unusedAmortizationInvoiceDiscount) };


    // unusedAmortizationPretaxAmount Field Functions 
    bool hasUnusedAmortizationPretaxAmount() const { return this->unusedAmortizationPretaxAmount_ != nullptr;};
    void deleteUnusedAmortizationPretaxAmount() { this->unusedAmortizationPretaxAmount_ = nullptr;};
    inline double unusedAmortizationPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(unusedAmortizationPretaxAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setUnusedAmortizationPretaxAmount(double unusedAmortizationPretaxAmount) { DARABONBA_PTR_SET_VALUE(unusedAmortizationPretaxAmount_, unusedAmortizationPretaxAmount) };


    // unusedAmortizationPretaxGrossAmount Field Functions 
    bool hasUnusedAmortizationPretaxGrossAmount() const { return this->unusedAmortizationPretaxGrossAmount_ != nullptr;};
    void deleteUnusedAmortizationPretaxGrossAmount() { this->unusedAmortizationPretaxGrossAmount_ = nullptr;};
    inline double unusedAmortizationPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(unusedAmortizationPretaxGrossAmount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setUnusedAmortizationPretaxGrossAmount(double unusedAmortizationPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(unusedAmortizationPretaxGrossAmount_, unusedAmortizationPretaxGrossAmount) };


    // unusedAmortizationRoundDownDiscount Field Functions 
    bool hasUnusedAmortizationRoundDownDiscount() const { return this->unusedAmortizationRoundDownDiscount_ != nullptr;};
    void deleteUnusedAmortizationRoundDownDiscount() { this->unusedAmortizationRoundDownDiscount_ = nullptr;};
    inline double unusedAmortizationRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(unusedAmortizationRoundDownDiscount_, 0.0) };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setUnusedAmortizationRoundDownDiscount(double unusedAmortizationRoundDownDiscount) { DARABONBA_PTR_SET_VALUE(unusedAmortizationRoundDownDiscount_, unusedAmortizationRoundDownDiscount) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponseBodyDataItems& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


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
    std::shared_ptr<string> costUnit_ = nullptr;
    std::shared_ptr<string> costUnitCode_ = nullptr;
    std::shared_ptr<double> currentAmortizationDeductedByCoupons_ = nullptr;
    std::shared_ptr<double> currentAmortizationInvoiceDiscount_ = nullptr;
    std::shared_ptr<double> currentAmortizationPretaxAmount_ = nullptr;
    std::shared_ptr<double> currentAmortizationPretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> currentAmortizationRoundDownDiscount_ = nullptr;
    std::shared_ptr<double> deductedByCoupons_ = nullptr;
    std::shared_ptr<string> instanceConfig_ = nullptr;
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<string> internetIP_ = nullptr;
    std::shared_ptr<string> intranetIP_ = nullptr;
    std::shared_ptr<double> invoiceDiscount_ = nullptr;
    std::shared_ptr<double> pretaxAmount_ = nullptr;
    std::shared_ptr<double> pretaxGrossAmount_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productDetail_ = nullptr;
    std::shared_ptr<string> productDetailCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> referFrInstanceID_ = nullptr;
    std::shared_ptr<string> referFrOwnerID_ = nullptr;
    std::shared_ptr<string> referFrProductDetailCode_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<double> roundDownDiscount_ = nullptr;
    std::shared_ptr<string> splitAccountName_ = nullptr;
    std::shared_ptr<string> splitItemID_ = nullptr;
    std::shared_ptr<string> splitItemName_ = nullptr;
    std::shared_ptr<string> splitProductDetail_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<double> unusedAmortizationDeductedByCoupons_ = nullptr;
    std::shared_ptr<double> unusedAmortizationInvoiceDiscount_ = nullptr;
    std::shared_ptr<double> unusedAmortizationPretaxAmount_ = nullptr;
    std::shared_ptr<double> unusedAmortizationPretaxGrossAmount_ = nullptr;
    std::shared_ptr<double> unusedAmortizationRoundDownDiscount_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
