// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATEREQUEST_HPP_
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
  class DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AmortizationDateEnd, amortizationDateEnd_);
      DARABONBA_PTR_TO_JSON(AmortizationDateStart, amortizationDateStart_);
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
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AmortizationDateEnd, amortizationDateEnd_);
      DARABONBA_PTR_FROM_JSON(AmortizationDateStart, amortizationDateStart_);
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
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest(const DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest(DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &&) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest() = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& operator=(const DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &) = default ;
    DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& operator=(DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amortizationDateEnd_ != nullptr
        && this->amortizationDateStart_ != nullptr && this->billOwnerIdList_ != nullptr && this->billUserIdList_ != nullptr && this->billingCycle_ != nullptr && this->costUnitCode_ != nullptr
        && this->instanceIdList_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr
        && this->subscriptionType_ != nullptr; };
    // amortizationDateEnd Field Functions 
    bool hasAmortizationDateEnd() const { return this->amortizationDateEnd_ != nullptr;};
    void deleteAmortizationDateEnd() { this->amortizationDateEnd_ = nullptr;};
    inline string amortizationDateEnd() const { DARABONBA_PTR_GET_DEFAULT(amortizationDateEnd_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setAmortizationDateEnd(string amortizationDateEnd) { DARABONBA_PTR_SET_VALUE(amortizationDateEnd_, amortizationDateEnd) };


    // amortizationDateStart Field Functions 
    bool hasAmortizationDateStart() const { return this->amortizationDateStart_ != nullptr;};
    void deleteAmortizationDateStart() { this->amortizationDateStart_ = nullptr;};
    inline string amortizationDateStart() const { DARABONBA_PTR_GET_DEFAULT(amortizationDateStart_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setAmortizationDateStart(string amortizationDateStart) { DARABONBA_PTR_SET_VALUE(amortizationDateStart_, amortizationDateStart) };


    // billOwnerIdList Field Functions 
    bool hasBillOwnerIdList() const { return this->billOwnerIdList_ != nullptr;};
    void deleteBillOwnerIdList() { this->billOwnerIdList_ = nullptr;};
    inline const vector<string> & billOwnerIdList() const { DARABONBA_PTR_GET_CONST(billOwnerIdList_, vector<string>) };
    inline vector<string> billOwnerIdList() { DARABONBA_PTR_GET(billOwnerIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setBillOwnerIdList(const vector<string> & billOwnerIdList) { DARABONBA_PTR_SET_VALUE(billOwnerIdList_, billOwnerIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setBillOwnerIdList(vector<string> && billOwnerIdList) { DARABONBA_PTR_SET_RVALUE(billOwnerIdList_, billOwnerIdList) };


    // billUserIdList Field Functions 
    bool hasBillUserIdList() const { return this->billUserIdList_ != nullptr;};
    void deleteBillUserIdList() { this->billUserIdList_ = nullptr;};
    inline const vector<string> & billUserIdList() const { DARABONBA_PTR_GET_CONST(billUserIdList_, vector<string>) };
    inline vector<string> billUserIdList() { DARABONBA_PTR_GET(billUserIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setBillUserIdList(const vector<string> & billUserIdList) { DARABONBA_PTR_SET_VALUE(billUserIdList_, billUserIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setBillUserIdList(vector<string> && billUserIdList) { DARABONBA_PTR_SET_RVALUE(billUserIdList_, billUserIdList) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // costUnitCode Field Functions 
    bool hasCostUnitCode() const { return this->costUnitCode_ != nullptr;};
    void deleteCostUnitCode() { this->costUnitCode_ = nullptr;};
    inline string costUnitCode() const { DARABONBA_PTR_GET_DEFAULT(costUnitCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setCostUnitCode(string costUnitCode) { DARABONBA_PTR_SET_VALUE(costUnitCode_, costUnitCode) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> amortizationDateEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> amortizationDateStart_ = nullptr;
    std::shared_ptr<vector<string>> billOwnerIdList_ = nullptr;
    std::shared_ptr<vector<string>> billUserIdList_ = nullptr;
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<string> costUnitCode_ = nullptr;
    std::shared_ptr<vector<string>> instanceIdList_ = nullptr;
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
