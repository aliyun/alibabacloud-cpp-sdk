// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeInstanceBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(IsBillingItem, isBillingItem_);
      DARABONBA_PTR_TO_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(IsBillingItem, isBillingItem_);
      DARABONBA_PTR_FROM_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeInstanceBillRequest() = default ;
    DescribeInstanceBillRequest(const DescribeInstanceBillRequest &) = default ;
    DescribeInstanceBillRequest(DescribeInstanceBillRequest &&) = default ;
    DescribeInstanceBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBillRequest() = default ;
    DescribeInstanceBillRequest& operator=(const DescribeInstanceBillRequest &) = default ;
    DescribeInstanceBillRequest& operator=(DescribeInstanceBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->billingCycle_ == nullptr && this->billingDate_ == nullptr && this->granularity_ == nullptr && this->instanceID_ == nullptr && this->isBillingItem_ == nullptr
        && this->isHideZeroCharge_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerId_ == nullptr && this->pipCode_ == nullptr
        && this->productCode_ == nullptr && this->productType_ == nullptr && this->subscriptionType_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeInstanceBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeInstanceBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline DescribeInstanceBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeInstanceBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeInstanceBillRequest& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // isBillingItem Field Functions 
    bool hasIsBillingItem() const { return this->isBillingItem_ != nullptr;};
    void deleteIsBillingItem() { this->isBillingItem_ = nullptr;};
    inline bool getIsBillingItem() const { DARABONBA_PTR_GET_DEFAULT(isBillingItem_, false) };
    inline DescribeInstanceBillRequest& setIsBillingItem(bool isBillingItem) { DARABONBA_PTR_SET_VALUE(isBillingItem_, isBillingItem) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool getIsHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline DescribeInstanceBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceBillRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceBillRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstanceBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline DescribeInstanceBillRequest& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstanceBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the resource ownership account. The resource ownership account is the account that actually uses the resource.
    shared_ptr<int64_t> billOwnerId_ {};
    // The billing cycle in the YYYY-MM format. Only the last 18 billing cycles are supported.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The billing date. This parameter is required only when Granularity is set to DAILY. Format: YYYY-MM-DD.
    // 
    // > The value of BillingDate must be in the same month as the value of BillingCycle. For example, if BillingCycle is set to 2020-03, BillingDate must be set to 2020-03-DD. If the months are inconsistent, the query results are returned based on the time specified by BillingCycle.
    shared_ptr<string> billingDate_ {};
    // The granularity at which bills are queried. Valid values:
    // 
    // - MONTHLY: monthly. The data is consistent with the monthly bills in Expenses and Costs > Bills > Bill Details > Monthly Bills.
    // - DAILY: daily. The data is consistent with the daily bills in Expenses and Costs > Bills > Bill Details > Daily Bills.
    // 
    // > If you select DAILY, you must specify BillingDate.
    shared_ptr<string> granularity_ {};
    // The instance ID.
    shared_ptr<string> instanceID_ {};
    // Specifies whether to retrieve data by billable item. Valid values:
    // - false (default): The data is consistent with the instance bills in Expenses and Costs > Bills > Bill Details > Instance Bills.
    // - true: The data is consistent with the billable item bills in Expenses and Costs > Bills > Bill Details > Billable Item Bills.
    shared_ptr<bool> isBillingItem_ {};
    // Specifies whether to filter out records where both the original price (PretaxGrossAmount) and the payable amount (PretaxAmount) are 0. Valid values:
    // - false
    // - true
    shared_ptr<bool> isHideZeroCharge_ {};
    // The maximum number of data records to read in the current call. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The position from which the current call starts to read data. The value must be empty or set to the NextToken value returned in the previous response. Otherwise, an error occurs. An empty value indicates that the reading starts from the beginning.
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The product code, which is consistent with the product code in the bills of the User Center.
    shared_ptr<string> pipCode_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The product type.
    shared_ptr<string> productType_ {};
    // The subscription type. Valid values:
    // - Subscription: subscription.
    // - PayAsYouGo: pay-as-you-go.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
