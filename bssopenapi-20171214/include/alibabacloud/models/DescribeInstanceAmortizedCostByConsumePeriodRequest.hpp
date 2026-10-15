// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_HPP_
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
  class DescribeInstanceAmortizedCostByConsumePeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAmortizedCostByConsumePeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AmortizationPeriodFilter, amortizationPeriodFilter_);
      DARABONBA_PTR_TO_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_TO_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAmortizedCostByConsumePeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AmortizationPeriodFilter, amortizationPeriodFilter_);
      DARABONBA_PTR_FROM_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_FROM_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeInstanceAmortizedCostByConsumePeriodRequest() = default ;
    DescribeInstanceAmortizedCostByConsumePeriodRequest(const DescribeInstanceAmortizedCostByConsumePeriodRequest &) = default ;
    DescribeInstanceAmortizedCostByConsumePeriodRequest(DescribeInstanceAmortizedCostByConsumePeriodRequest &&) = default ;
    DescribeInstanceAmortizedCostByConsumePeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAmortizedCostByConsumePeriodRequest() = default ;
    DescribeInstanceAmortizedCostByConsumePeriodRequest& operator=(const DescribeInstanceAmortizedCostByConsumePeriodRequest &) = default ;
    DescribeInstanceAmortizedCostByConsumePeriodRequest& operator=(DescribeInstanceAmortizedCostByConsumePeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amortizationPeriodFilter_ == nullptr
        && this->billOwnerIdList_ == nullptr && this->billUserIdList_ == nullptr && this->billingCycle_ == nullptr && this->costUnitCode_ == nullptr && this->instanceIdList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->subscriptionType_ == nullptr; };
    // amortizationPeriodFilter Field Functions 
    bool hasAmortizationPeriodFilter() const { return this->amortizationPeriodFilter_ != nullptr;};
    void deleteAmortizationPeriodFilter() { this->amortizationPeriodFilter_ = nullptr;};
    inline const vector<string> & getAmortizationPeriodFilter() const { DARABONBA_PTR_GET_CONST(amortizationPeriodFilter_, vector<string>) };
    inline vector<string> getAmortizationPeriodFilter() { DARABONBA_PTR_GET(amortizationPeriodFilter_, vector<string>) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(const vector<string> & amortizationPeriodFilter) { DARABONBA_PTR_SET_VALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(vector<string> && amortizationPeriodFilter) { DARABONBA_PTR_SET_RVALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };


    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & getBillOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> getBillOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & getBillUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> getBillUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string getCostUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceAmortizedCostByConsumePeriodRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The filter for the amortization month.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> amortizationPeriodFilter_ {};
    // The filter for the ID of the resource owner.
    // The resource owner is the account that actually uses the resource.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> billOwnerIdList_ {};
    // The filter for the ID of the bill payer.
    // This is the ID of a RAM user. If you specify this parameter, you can view the bills of the RAM user. If you leave this parameter empty, the bills of the current account and all its RAM users are returned.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> billUserIdList_ {};
    // The billing cycle.
    // Format: YYYY-MM.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The code of the cost center.
    shared_ptr<string> costUnitCode_ {};
    // The filter for the instance ID.
    // You can query multiple instances. If you leave this parameter empty, all instances are queried.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> instanceIdList_ {};
    // The maximum number of data records to return in this call. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. You do not need to specify this parameter for the first request. You must set the value to the token that is returned in the previous call. If you leave this parameter empty, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The product code.
    // To obtain the value of this parameter, call QueryProductList to query product information, or call DescribeResourcePackageProduct to query information about a specific resource plan.
    shared_ptr<string> productCode_ {};
    // The details of the product.
    shared_ptr<string> productDetail_ {};
    // The subscription type. Valid values:
    // 
    // - Subscription: subscription.
    // 
    // - PayAsYouGo: pay-as-you-go.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
