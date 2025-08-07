// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODYITEM_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceBillResponseBodyItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceBillResponseBodyItem& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(BillingItem, billingItem_);
      DARABONBA_PTR_TO_JSON(BillingItemCode, billingItemCode_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductedByResourcePackage, deductedByResourcePackage_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
      DARABONBA_PTR_TO_JSON(ListPriceUnit, listPriceUnit_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SplitBillingCycle, splitBillingCycle_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(UsageUnit, usageUnit_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceBillResponseBodyItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(BillingItem, billingItem_);
      DARABONBA_PTR_FROM_JSON(BillingItemCode, billingItemCode_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductedByResourcePackage, deductedByResourcePackage_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
      DARABONBA_PTR_FROM_JSON(ListPriceUnit, listPriceUnit_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SplitBillingCycle, splitBillingCycle_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(UsageUnit, usageUnit_);
    };
    ListServiceInstanceBillResponseBodyItem() = default ;
    ListServiceInstanceBillResponseBodyItem(const ListServiceInstanceBillResponseBodyItem &) = default ;
    ListServiceInstanceBillResponseBodyItem(ListServiceInstanceBillResponseBodyItem &&) = default ;
    ListServiceInstanceBillResponseBodyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceBillResponseBodyItem() = default ;
    ListServiceInstanceBillResponseBodyItem& operator=(const ListServiceInstanceBillResponseBodyItem &) = default ;
    ListServiceInstanceBillResponseBodyItem& operator=(ListServiceInstanceBillResponseBodyItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingCycle_ != nullptr
        && this->billingDate_ != nullptr && this->billingItem_ != nullptr && this->billingItemCode_ != nullptr && this->currency_ != nullptr && this->deductedByResourcePackage_ != nullptr
        && this->instanceID_ != nullptr && this->invoiceDiscount_ != nullptr && this->listPrice_ != nullptr && this->listPriceUnit_ != nullptr && this->pretaxAmount_ != nullptr
        && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr && this->productName_ != nullptr && this->splitBillingCycle_ != nullptr
        && this->subscriptionType_ != nullptr && this->usage_ != nullptr && this->usageUnit_ != nullptr; };
    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // billingItem Field Functions 
    bool hasBillingItem() const { return this->billingItem_ != nullptr;};
    void deleteBillingItem() { this->billingItem_ = nullptr;};
    inline string billingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


    // billingItemCode Field Functions 
    bool hasBillingItemCode() const { return this->billingItemCode_ != nullptr;};
    void deleteBillingItemCode() { this->billingItemCode_ = nullptr;};
    inline string billingItemCode() const { DARABONBA_PTR_GET_DEFAULT(billingItemCode_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setBillingItemCode(string billingItemCode) { DARABONBA_PTR_SET_VALUE(billingItemCode_, billingItemCode) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductedByResourcePackage Field Functions 
    bool hasDeductedByResourcePackage() const { return this->deductedByResourcePackage_ != nullptr;};
    void deleteDeductedByResourcePackage() { this->deductedByResourcePackage_ = nullptr;};
    inline string deductedByResourcePackage() const { DARABONBA_PTR_GET_DEFAULT(deductedByResourcePackage_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setDeductedByResourcePackage(string deductedByResourcePackage) { DARABONBA_PTR_SET_VALUE(deductedByResourcePackage_, deductedByResourcePackage) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline string invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setInvoiceDiscount(string invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // listPrice Field Functions 
    bool hasListPrice() const { return this->listPrice_ != nullptr;};
    void deleteListPrice() { this->listPrice_ = nullptr;};
    inline string listPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


    // listPriceUnit Field Functions 
    bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
    void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
    inline string listPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline string pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline string pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // splitBillingCycle Field Functions 
    bool hasSplitBillingCycle() const { return this->splitBillingCycle_ != nullptr;};
    void deleteSplitBillingCycle() { this->splitBillingCycle_ = nullptr;};
    inline string splitBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(splitBillingCycle_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setSplitBillingCycle(string splitBillingCycle) { DARABONBA_PTR_SET_VALUE(splitBillingCycle_, splitBillingCycle) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // usageUnit Field Functions 
    bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
    void deleteUsageUnit() { this->usageUnit_ = nullptr;};
    inline string usageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
    inline ListServiceInstanceBillResponseBodyItem& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


  protected:
    // The billing cycle. Format: YYYY-MM.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The billing date. This parameter is required only if the **Granularity** parameter is set to DAILY. Format: YYYY-MM-DD.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The billable item.
    std::shared_ptr<string> billingItem_ = nullptr;
    // The code of the billable item.
    std::shared_ptr<string> billingItemCode_ = nullptr;
    // The currency unit.
    // 
    // *   China site: **CNY**.
    // *   International site: **USD**.
    std::shared_ptr<string> currency_ = nullptr;
    // The amount deducted with resource plans.
    std::shared_ptr<string> deductedByResourcePackage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The discount amount.
    std::shared_ptr<string> invoiceDiscount_ = nullptr;
    // The unit price.
    std::shared_ptr<string> listPrice_ = nullptr;
    // The unit of the unit price.
    std::shared_ptr<string> listPriceUnit_ = nullptr;
    // The pretax amount.
    std::shared_ptr<string> pretaxAmount_ = nullptr;
    // The pretax gross amount.
    std::shared_ptr<string> pretaxGrossAmount_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The specific service resource.
    std::shared_ptr<string> productDetail_ = nullptr;
    // The name of the cloud service or the name of the service-linked role with which the cloud service is associated.
    std::shared_ptr<string> productName_ = nullptr;
    // The billing cycle in which the bill is split.
    std::shared_ptr<string> splitBillingCycle_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method.
    // *   PayAsYouGo: the pay-as-you-go billing method.
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The amount of resource usage.
    std::shared_ptr<string> usage_ = nullptr;
    // The unit of usage.
    std::shared_ptr<string> usageUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
