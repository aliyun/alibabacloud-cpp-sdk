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
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->billingCycle_ != nullptr && this->billingDate_ != nullptr && this->granularity_ != nullptr && this->instanceID_ != nullptr && this->isBillingItem_ != nullptr
        && this->isHideZeroCharge_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerId_ != nullptr && this->pipCode_ != nullptr
        && this->productCode_ != nullptr && this->productType_ != nullptr && this->subscriptionType_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeInstanceBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeInstanceBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline DescribeInstanceBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeInstanceBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeInstanceBillRequest& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // isBillingItem Field Functions 
    bool hasIsBillingItem() const { return this->isBillingItem_ != nullptr;};
    void deleteIsBillingItem() { this->isBillingItem_ = nullptr;};
    inline bool isBillingItem() const { DARABONBA_PTR_GET_DEFAULT(isBillingItem_, false) };
    inline DescribeInstanceBillRequest& setIsBillingItem(bool isBillingItem) { DARABONBA_PTR_SET_VALUE(isBillingItem_, isBillingItem) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool isHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline DescribeInstanceBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceBillRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceBillRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstanceBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline DescribeInstanceBillRequest& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstanceBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeInstanceBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the member. If you specify this parameter, the bills of the member are queried. If you do not specify this parameter, the bills of the current account are queried by default.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The billing cycle. Specify the parameter in the YYYY-MM format.
    // Only the latest 18 month billing cycle is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The billing date. This parameter is required only when the Granularity parameter is set to DAILY. Format: YYYY-MM-DD.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The granularity at which bills are queried. Valid values:
    // 
    // *   MONTHLY: queries bills on a monthly basis. The data that you query is the same as the data searched by instances on the Billing Details tab of the Bill Details page in the User Center console.
    // *   DAILY: queries bills on a daily basis. The data that you query is the same as the data searched by days on the Billing Details tab of the Bill Details page in the User Center console.
    // 
    // The BillingDate parameter is required if you set the Granularity parameter to DAILY.
    std::shared_ptr<string> granularity_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceID_ = nullptr;
    // Specifies whether to query data by billable items. Valid values:
    // 
    // *   false: The data that you query is the same as the data searched by instances on the Billing Details tab of the Bill Details page in the User Center console.
    // *   true: The data that you query is the same as the data searched by billable items on the Billing Details tab of the Bill Details page in the User Center console.
    // 
    // Default value: false.
    std::shared_ptr<bool> isBillingItem_ = nullptr;
    // Specifies whether to filter bills if both the pretax gross amount and pretax amount are 0. Valid values:
    // 
    // *   false: does not filter bills.
    // *   true: filters bills.
    std::shared_ptr<bool> isHideZeroCharge_ = nullptr;
    // The maximum number of entries to return. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to indicate the position where the results for the current call start. The parameter must be left empty or set to the value of the NextToken parameter that is returned from the last call. Otherwise, an error is returned. If the parameter is left empty, data is queried from the first item.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service. The code is the same as that in Cost Center.
    std::shared_ptr<string> pipCode_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method.
    // *   PayAsYouGo: the pay-as-you-go billing method.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
