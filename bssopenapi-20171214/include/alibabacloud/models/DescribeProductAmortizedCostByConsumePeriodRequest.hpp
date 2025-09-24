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
    virtual bool empty() const override { this->amortizationPeriodFilter_ != nullptr
        && this->billOwnerIdList_ != nullptr && this->billUserIdList_ != nullptr && this->billingCycle_ != nullptr && this->costUnitCode_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr && this->subscriptionType_ != nullptr; };
    // amortizationPeriodFilter Field Functions 
    bool hasAmortizationPeriodFilter() const { return this->amortizationPeriodFilter_ != nullptr;};
    void deleteAmortizationPeriodFilter() { this->amortizationPeriodFilter_ = nullptr;};
    inline const vector<string> & amortizationPeriodFilter() const { DARABONBA_PTR_GET_CONST(amortizationPeriodFilter_, vector<string>) };
    inline vector<string> amortizationPeriodFilter() { DARABONBA_PTR_GET(amortizationPeriodFilter_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(const vector<string> & amortizationPeriodFilter) { DARABONBA_PTR_SET_VALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setAmortizationPeriodFilter(vector<string> && amortizationPeriodFilter) { DARABONBA_PTR_SET_RVALUE(amortizationPeriodFilter_, amortizationPeriodFilter) };


    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & billOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> billOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & billUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> billUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string costUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeProductAmortizedCostByConsumePeriodRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    std::shared_ptr<vector<string>> amortizationPeriodFilter_ = nullptr;
    std::shared_ptr<vector<string>> billOwnerIdList_ = nullptr;
    std::shared_ptr<vector<string>> billUserIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<string> costUnitCode_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productDetail_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
