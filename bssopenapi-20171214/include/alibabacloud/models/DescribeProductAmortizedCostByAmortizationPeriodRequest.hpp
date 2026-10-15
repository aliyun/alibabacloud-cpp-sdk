// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODREQUEST_HPP_
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
  class DescribeProductAmortizedCostByAmortizationPeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductAmortizedCostByAmortizationPeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_TO_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(ConsumePeriodFilter, consumePeriodFilter_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductAmortizedCostByAmortizationPeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_FROM_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriodFilter, consumePeriodFilter_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeProductAmortizedCostByAmortizationPeriodRequest() = default ;
    DescribeProductAmortizedCostByAmortizationPeriodRequest(const DescribeProductAmortizedCostByAmortizationPeriodRequest &) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodRequest(DescribeProductAmortizedCostByAmortizationPeriodRequest &&) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductAmortizedCostByAmortizationPeriodRequest() = default ;
    DescribeProductAmortizedCostByAmortizationPeriodRequest& operator=(const DescribeProductAmortizedCostByAmortizationPeriodRequest &) = default ;
    DescribeProductAmortizedCostByAmortizationPeriodRequest& operator=(DescribeProductAmortizedCostByAmortizationPeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerIdList_ == nullptr
        && this->billUserIdList_ == nullptr && this->billingCycle_ == nullptr && this->consumePeriodFilter_ == nullptr && this->costUnitCode_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->subscriptionType_ == nullptr; };
    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & getBillOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> getBillOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & getBillUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> getBillUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // consumePeriodFilter Field Functions 
    bool hasConsumePeriodFilter() const { return this->consumePeriodFilter_ != nullptr;};
    void deleteConsumePeriodFilter() { this->consumePeriodFilter_ = nullptr;};
    inline const vector<string> & getConsumePeriodFilter() const { DARABONBA_PTR_GET_CONST(consumePeriodFilter_, vector<string>) };
    inline vector<string> getConsumePeriodFilter() { DARABONBA_PTR_GET(consumePeriodFilter_, vector<string>) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setConsumePeriodFilter(const vector<string> & consumePeriodFilter) { DARABONBA_PTR_SET_VALUE(consumePeriodFilter_, consumePeriodFilter) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setConsumePeriodFilter(vector<string> && consumePeriodFilter) { DARABONBA_PTR_SET_RVALUE(consumePeriodFilter_, consumePeriodFilter) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string getCostUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeProductAmortizedCostByAmortizationPeriodRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The IDs of resource owners. The resource owner is the account that uses the resources.
    // You can specify a maximum of 10 IDs.
    shared_ptr<vector<string>> billOwnerIdList_ {};
    // The IDs of billable accounts. This parameter is used to filter bills by the RAM user who pays for the resources. If you specify this parameter, you can query the bills of the specified RAM user. If you leave this parameter empty, the bills of the current account and all its RAM users are queried.
    // You can specify a maximum of 10 IDs.
    shared_ptr<vector<string>> billUserIdList_ {};
    // The amortization month.
    // Format: YYYY-MM.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The filter for billing cycle months.
    // You can specify a maximum of 10 elements.
    shared_ptr<vector<string>> consumePeriodFilter_ {};
    // The code of the cost center.
    shared_ptr<string> costUnitCode_ {};
    // The maximum number of entries to return. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position to start the query. If you leave this parameter empty, the query starts from the beginning. Set this parameter to the value of NextToken that is returned in the last response to query the next page of results.
    shared_ptr<string> nextToken_ {};
    // The product code.
    // For more information about how to obtain this parameter, see QueryProductList and DescribeResourcePackageProduct.
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
