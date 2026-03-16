// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceInstanceBillResponseBody() = default ;
    ListServiceInstanceBillResponseBody(const ListServiceInstanceBillResponseBody &) = default ;
    ListServiceInstanceBillResponseBody(ListServiceInstanceBillResponseBody &&) = default ;
    ListServiceInstanceBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceBillResponseBody() = default ;
    ListServiceInstanceBillResponseBody& operator=(const ListServiceInstanceBillResponseBody &) = default ;
    ListServiceInstanceBillResponseBody& operator=(ListServiceInstanceBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Item : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Item& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Item& obj) { 
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
      Item() = default ;
      Item(const Item &) = default ;
      Item(Item &&) = default ;
      Item(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Item() = default ;
      Item& operator=(const Item &) = default ;
      Item& operator=(Item &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingCycle_ == nullptr
        && this->billingDate_ == nullptr && this->billingItem_ == nullptr && this->billingItemCode_ == nullptr && this->currency_ == nullptr && this->deductedByResourcePackage_ == nullptr
        && this->instanceID_ == nullptr && this->invoiceDiscount_ == nullptr && this->listPrice_ == nullptr && this->listPriceUnit_ == nullptr && this->pretaxAmount_ == nullptr
        && this->pretaxGrossAmount_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->productName_ == nullptr && this->splitBillingCycle_ == nullptr
        && this->subscriptionType_ == nullptr && this->usage_ == nullptr && this->usageUnit_ == nullptr; };
      // billingCycle Field Functions 
      bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
      void deleteBillingCycle() { this->billingCycle_ = nullptr;};
      inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
      inline Item& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


      // billingDate Field Functions 
      bool hasBillingDate() const { return this->billingDate_ != nullptr;};
      void deleteBillingDate() { this->billingDate_ = nullptr;};
      inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
      inline Item& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


      // billingItem Field Functions 
      bool hasBillingItem() const { return this->billingItem_ != nullptr;};
      void deleteBillingItem() { this->billingItem_ = nullptr;};
      inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
      inline Item& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


      // billingItemCode Field Functions 
      bool hasBillingItemCode() const { return this->billingItemCode_ != nullptr;};
      void deleteBillingItemCode() { this->billingItemCode_ = nullptr;};
      inline string getBillingItemCode() const { DARABONBA_PTR_GET_DEFAULT(billingItemCode_, "") };
      inline Item& setBillingItemCode(string billingItemCode) { DARABONBA_PTR_SET_VALUE(billingItemCode_, billingItemCode) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Item& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // deductedByResourcePackage Field Functions 
      bool hasDeductedByResourcePackage() const { return this->deductedByResourcePackage_ != nullptr;};
      void deleteDeductedByResourcePackage() { this->deductedByResourcePackage_ = nullptr;};
      inline string getDeductedByResourcePackage() const { DARABONBA_PTR_GET_DEFAULT(deductedByResourcePackage_, "") };
      inline Item& setDeductedByResourcePackage(string deductedByResourcePackage) { DARABONBA_PTR_SET_VALUE(deductedByResourcePackage_, deductedByResourcePackage) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline Item& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // invoiceDiscount Field Functions 
      bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
      void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
      inline string getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, "") };
      inline Item& setInvoiceDiscount(string invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


      // listPrice Field Functions 
      bool hasListPrice() const { return this->listPrice_ != nullptr;};
      void deleteListPrice() { this->listPrice_ = nullptr;};
      inline string getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
      inline Item& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


      // listPriceUnit Field Functions 
      bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
      void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
      inline string getListPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
      inline Item& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


      // pretaxAmount Field Functions 
      bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
      void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
      inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
      inline Item& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


      // pretaxGrossAmount Field Functions 
      bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
      void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
      inline string getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
      inline Item& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Item& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productDetail Field Functions 
      bool hasProductDetail() const { return this->productDetail_ != nullptr;};
      void deleteProductDetail() { this->productDetail_ = nullptr;};
      inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
      inline Item& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Item& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // splitBillingCycle Field Functions 
      bool hasSplitBillingCycle() const { return this->splitBillingCycle_ != nullptr;};
      void deleteSplitBillingCycle() { this->splitBillingCycle_ = nullptr;};
      inline string getSplitBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(splitBillingCycle_, "") };
      inline Item& setSplitBillingCycle(string splitBillingCycle) { DARABONBA_PTR_SET_VALUE(splitBillingCycle_, splitBillingCycle) };


      // subscriptionType Field Functions 
      bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
      void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
      inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
      inline Item& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Item& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      // usageUnit Field Functions 
      bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
      void deleteUsageUnit() { this->usageUnit_ = nullptr;};
      inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
      inline Item& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


    protected:
      // The billing cycle. Format: YYYY-MM.
      shared_ptr<string> billingCycle_ {};
      // The billing date. This parameter is required only if the **Granularity** parameter is set to DAILY. Format: YYYY-MM-DD.
      shared_ptr<string> billingDate_ {};
      // The billable item.
      shared_ptr<string> billingItem_ {};
      // The code of the billable item.
      shared_ptr<string> billingItemCode_ {};
      // The currency unit.
      // 
      // *   China site: **CNY**.
      // *   International site: **USD**.
      shared_ptr<string> currency_ {};
      // The amount deducted with resource plans.
      shared_ptr<string> deductedByResourcePackage_ {};
      // The ID of the instance.
      shared_ptr<string> instanceID_ {};
      // The discount amount.
      shared_ptr<string> invoiceDiscount_ {};
      // The unit price.
      shared_ptr<string> listPrice_ {};
      // The unit of the unit price.
      shared_ptr<string> listPriceUnit_ {};
      // The pretax amount.
      shared_ptr<string> pretaxAmount_ {};
      // The pretax gross amount.
      shared_ptr<string> pretaxGrossAmount_ {};
      // The code of the service.
      shared_ptr<string> productCode_ {};
      // The specific service resource.
      shared_ptr<string> productDetail_ {};
      // The name of the cloud service or the name of the service-linked role with which the cloud service is associated.
      shared_ptr<string> productName_ {};
      // The billing cycle in which the bill is split.
      shared_ptr<string> splitBillingCycle_ {};
      // The billing method. Valid values:
      // 
      // *   Subscription: the subscription billing method.
      // *   PayAsYouGo: the pay-as-you-go billing method.
      shared_ptr<string> subscriptionType_ {};
      // The amount of resource usage.
      shared_ptr<string> usage_ {};
      // The unit of usage.
      shared_ptr<string> usageUnit_ {};
    };

    virtual bool empty() const override { return this->item_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<ListServiceInstanceBillResponseBody::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<ListServiceInstanceBillResponseBody::Item>) };
    inline vector<ListServiceInstanceBillResponseBody::Item> getItem() { DARABONBA_PTR_GET(item_, vector<ListServiceInstanceBillResponseBody::Item>) };
    inline ListServiceInstanceBillResponseBody& setItem(const vector<ListServiceInstanceBillResponseBody::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline ListServiceInstanceBillResponseBody& setItem(vector<ListServiceInstanceBillResponseBody::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceBillResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceBillResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceInstanceBillResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The billing information of the backup schedule.
    shared_ptr<vector<ListServiceInstanceBillResponseBody::Item>> item_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
