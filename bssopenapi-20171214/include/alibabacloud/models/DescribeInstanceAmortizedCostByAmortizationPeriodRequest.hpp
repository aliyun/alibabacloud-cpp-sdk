// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODREQUEST_HPP_
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
  class DescribeInstanceAmortizedCostByAmortizationPeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAmortizedCostByAmortizationPeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_TO_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(ConsumePeriodFilter, consumePeriodFilter_);
      DARABONBA_PTR_TO_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAmortizedCostByAmortizationPeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerIdList, billOwnerIdList_);
      DARABONBA_PTR_FROM_JSON(BillUserIdList, billUserIdList_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(ConsumePeriodFilter, consumePeriodFilter_);
      DARABONBA_PTR_FROM_JSON(CostUnitCode, costUnitCode_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest(const DescribeInstanceAmortizedCostByAmortizationPeriodRequest &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest(DescribeInstanceAmortizedCostByAmortizationPeriodRequest &&) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAmortizedCostByAmortizationPeriodRequest() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest& operator=(const DescribeInstanceAmortizedCostByAmortizationPeriodRequest &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodRequest& operator=(DescribeInstanceAmortizedCostByAmortizationPeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerIdList_ != nullptr
        && this->billUserIdList_ != nullptr && this->billingCycle_ != nullptr && this->consumePeriodFilter_ != nullptr && this->costUnitCode_ != nullptr && this->instanceIdList_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr && this->subscriptionType_ != nullptr; };
    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & billOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> billOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & billUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> billUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // consumePeriodFilter Field Functions 
    bool hasConsumePeriodFilter() const { return this->consumePeriodFilter_ != nullptr;};
    void deleteConsumePeriodFilter() { this->consumePeriodFilter_ = nullptr;};
    inline const vector<string> & consumePeriodFilter() const { DARABONBA_PTR_GET_CONST(consumePeriodFilter_, vector<string>) };
    inline vector<string> consumePeriodFilter() { DARABONBA_PTR_GET(consumePeriodFilter_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setConsumePeriodFilter(const vector<string> & consumePeriodFilter) { DARABONBA_PTR_SET_VALUE(consumePeriodFilter_, consumePeriodFilter) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setConsumePeriodFilter(vector<string> && consumePeriodFilter) { DARABONBA_PTR_SET_RVALUE(consumePeriodFilter_, consumePeriodFilter) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string costUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the member to which the bill belongs. The member ID is used to filter bills. If you specify a value for this parameter, you can query the bills of the specified member. If you leave this parameter empty, the bills of the current account and all members of the current account are queried. You can specify a maximum of 10 IDs.
    std::shared_ptr<vector<string>> billOwnerIdList_ = nullptr;
    // The ID of the member that needs to settle the bill. The member ID is used to filter bills. If you specify a value for this parameter, you can query the bills of the specified member account. If you leave this parameter empty, the bills of the current account and all members of the current account are queried by default. You can specify a maximum of 10 IDs.
    std::shared_ptr<vector<string>> billUserIdList_ = nullptr;
    // The allocation month. Format: YYYY-MM.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The billing cycle that is used to filter bills. You can specify a maximum of 10 billing cycles.
    std::shared_ptr<vector<string>> consumePeriodFilter_ = nullptr;
    // The code of the cost center.
    std::shared_ptr<string> costUnitCode_ = nullptr;
    // The instance ID that is used to filter bills. You can specify multiple instance IDs to query bills of multiple instances. If you leave this parameter empty, the bills of all instances are queried by default. You can specify a maximum of 10 instance IDs.
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
    // The maximum number of entries to return. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The position from which the query starts. The parameter must be left empty or set to the value of the NextToken parameter returned from the last call. Otherwise, an error is returned. If this parameter is left empty, data is queried from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The code of the service. You can obtain the value of this parameter by calling the QueryProductList operation or the DescribeResourcePackageProduct operation.
    std::shared_ptr<string> productCode_ = nullptr;
    // The specific service resource.
    std::shared_ptr<string> productDetail_ = nullptr;
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
