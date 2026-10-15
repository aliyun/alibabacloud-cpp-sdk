// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTAMORTIZEDCOSTBYCONSUMEPERIODREQUEST_HPP_
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
  class DescribeProductAmortizedCostByConsumePeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductAmortizedCostByConsumePeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AmortizationPeriodFilter, amortizationPeriodFilter_);
      DARABONBA_PTR_TO_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_TO_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductAmortizedCostByConsumePeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AmortizationPeriodFilter, amortizationPeriodFilter_);
      DARABONBA_PTR_FROM_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_FROM_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeProductAmortizedCostByConsumePeriodRequest() = default ;
    DescribeProductAmortizedCostByConsumePeriodRequest(const DescribeProductAmortizedCostByConsumePeriodRequest &) = default ;
    DescribeProductAmortizedCostByConsumePeriodRequest(DescribeProductAmortizedCostByConsumePeriodRequest &&) = default ;
    DescribeProductAmortizedCostByConsumePeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductAmortizedCostByConsumePeriodRequest() = default ;
    DescribeProductAmortizedCostByConsumePeriodRequest& operator=(const DescribeProductAmortizedCostByConsumePeriodRequest &) = default ;
    DescribeProductAmortizedCostByConsumePeriodRequest& operator=(DescribeProductAmortizedCostByConsumePeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amortizationPeriodFilter_ == nullptr
        && this->billOwnerIdList_ == nullptr && this->billUserIdList_ == nullptr && this->billingCycle_ == nullptr && this->costUnitCode_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->subscriptionType_ == nullptr; };
    // amortizationPeriodFilter Field Functions 
    bool hasAmortizationPeriodFilter() const { return this->amortizationPeriodFilter_ != nullptr;};
    void deleteAmortizationPeriodFilter() { this->amortizationPeriodFilter_ = nullptr;};
    inline const vector<string> & getAmortizationPeriodFilter() const { DARABONBA_PTR_GET_CONST(amortizationPeriodFilter_, vector<string>) };
    inline vector<string> getAmortizationPeriodFilter() { DARABONBA_PTR_GET(amortizationPeriodFilter_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(const vector<string> & amortizationPeriodFilter) { DARABONBA_PTR_SET_VALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(vector<string> && amortizationPeriodFilter) { DARABONBA_PTR_SET_RVALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };


    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & getBillOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> getBillOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & getBillUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> getBillUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string getCostUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The filter conditions for the amortization month.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> amortizationPeriodFilter_ {};
    // The filter conditions for the IDs of resource owners.
    // The resource owner is the account that actually uses the resources.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> billOwnerIdList_ {};
    // The filter conditions for the IDs of bill purchasers.
    // This is the ID of a RAM user. Set this parameter to view the bills of a RAM user. If you do not set this parameter, the bills of the current account and all its RAM users are returned.
    // Maximum number of elements: 10.
    shared_ptr<vector<string>> billUserIdList_ {};
    // The billing cycle.
    // Format: YYYY-MM.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The code of the cost center.
    shared_ptr<string> costUnitCode_ {};
    // The maximum number of data records to return in this call. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position from which to start the query. If you leave this parameter empty, the query starts from the beginning. If you specify this parameter, set it to the value of `NextToken` that is returned in the last call.
    shared_ptr<string> nextToken_ {};
    // The product code. To obtain this value, call the QueryProductList operation to query product information or the DescribeResourcePackageProduct operation to query information about a resource plan.
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
