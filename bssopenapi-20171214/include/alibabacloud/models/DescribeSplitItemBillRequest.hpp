// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLREQUEST_HPP_
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
  class DescribeSplitItemBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSplitItemBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSplitItemBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
    };
    DescribeSplitItemBillRequest() = default ;
    DescribeSplitItemBillRequest(const DescribeSplitItemBillRequest &) = default ;
    DescribeSplitItemBillRequest(DescribeSplitItemBillRequest &&) = default ;
    DescribeSplitItemBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSplitItemBillRequest() = default ;
    DescribeSplitItemBillRequest& operator=(const DescribeSplitItemBillRequest &) = default ;
    DescribeSplitItemBillRequest& operator=(DescribeSplitItemBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagFilter& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, TagFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
      };
      TagFilter() = default ;
      TagFilter(const TagFilter &) = default ;
      TagFilter(TagFilter &&) = default ;
      TagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagFilter() = default ;
      TagFilter& operator=(const TagFilter &) = default ;
      TagFilter& operator=(TagFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValues_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagFilter& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValues Field Functions 
      bool hasTagValues() const { return this->tagValues_ != nullptr;};
      void deleteTagValues() { this->tagValues_ = nullptr;};
      inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
      inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
      inline TagFilter& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
      inline TagFilter& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


    protected:
      // TagFilter.N is used to query bills that match the specified tags. It consists of a key-value pair. The tag key must be 1 to 128 characters in length. Valid values of N: 1 to 20.
      // 
      // - If you specify only TagFilter.N.TagKey, all bills associated with the tag key are returned.
      // - If you specify multiple tag key-value pairs, bills that match any of the tag key-value pairs are returned.
      // - If the tags on a resource change, you can only query the bills generated during the period when the tags were attached to the resource.
      shared_ptr<string> tagKey_ {};
      // TagValues.N is used to query bills that match the specified tag values. It consists of a list of strings. The tag value must be 1 to 128 characters in length. Valid values of N: 1 to 20.
      // - If you specify TagValues.N, you must also specify TagFilter.N.TagKey. Otherwise, the InvalidParameter.TagValues error is reported.
      // - If you specify multiple tag values, bills that match any of the tag values are returned.
      shared_ptr<vector<string>> tagValues_ {};
    };

    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->billingCycle_ == nullptr && this->billingDate_ == nullptr && this->granularity_ == nullptr && this->instanceID_ == nullptr && this->isHideZeroCharge_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerId_ == nullptr && this->pipCode_ == nullptr && this->productCode_ == nullptr
        && this->productType_ == nullptr && this->splitItemID_ == nullptr && this->subscriptionType_ == nullptr && this->tagFilter_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeSplitItemBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeSplitItemBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline DescribeSplitItemBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeSplitItemBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeSplitItemBillRequest& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool getIsHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline DescribeSplitItemBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSplitItemBillRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSplitItemBillRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSplitItemBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline DescribeSplitItemBillRequest& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeSplitItemBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeSplitItemBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // splitItemID Field Functions 
    bool hasSplitItemID() const { return this->splitItemID_ != nullptr;};
    void deleteSplitItemID() { this->splitItemID_ = nullptr;};
    inline string getSplitItemID() const { DARABONBA_PTR_GET_DEFAULT(splitItemID_, "") };
    inline DescribeSplitItemBillRequest& setSplitItemID(string splitItemID) { DARABONBA_PTR_SET_VALUE(splitItemID_, splitItemID) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeSplitItemBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const vector<DescribeSplitItemBillRequest::TagFilter> & getTagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, vector<DescribeSplitItemBillRequest::TagFilter>) };
    inline vector<DescribeSplitItemBillRequest::TagFilter> getTagFilter() { DARABONBA_PTR_GET(tagFilter_, vector<DescribeSplitItemBillRequest::TagFilter>) };
    inline DescribeSplitItemBillRequest& setTagFilter(const vector<DescribeSplitItemBillRequest::TagFilter> & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline DescribeSplitItemBillRequest& setTagFilter(vector<DescribeSplitItemBillRequest::TagFilter> && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


  protected:
    // The ID of the resource ownership account. The resource ownership account is the account that actually uses the resource.
    shared_ptr<int64_t> billOwnerId_ {};
    // The billing cycle. Format: YYYY-MM.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The billing date. This parameter is required only when Granularity is set to DAILY. Format: YYYY-MM-DD.
    shared_ptr<string> billingDate_ {};
    // The granularity at which bills are queried. Valid values:
    // - MONTHLY: monthly. This value corresponds to the monthly bills on the Split Bill page in the User Center.
    // - DAILY: daily. This value corresponds to the daily bills on the Split Bill page in the User Center.
    // 
    // > If you set this parameter to DAILY, you must specify the BillingDate parameter.
    shared_ptr<string> granularity_ {};
    // The instance ID.
    shared_ptr<string> instanceID_ {};
    // Specifies whether to filter out bills where both the original price (PretaxGrossAmount) and the payable amount (PretaxAmount) are 0. Valid values:
    // 
    // - false: does not filter out the bills.
    // - true: filters out the bills.
    shared_ptr<bool> isHideZeroCharge_ {};
    // The maximum number of entries to return in the current call. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The token that specifies the position from which the current call starts to read data. The value must be empty or the value of NextToken returned in the previous response. Otherwise, an error occurs. An empty value indicates that the read operation starts from the beginning.
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The product code. This value is the same as the product code in the bills of the User Center.
    shared_ptr<string> pipCode_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The product type.
    shared_ptr<string> productType_ {};
    // The ID of the attached resource.
    shared_ptr<string> splitItemID_ {};
    // The subscription type. Valid values:
    // 
    // - Subscription: subscription.
    // - PayAsYouGo: pay-as-you-go.
    // 
    // > This parameter must be used together with the ProductCode parameter.
    shared_ptr<string> subscriptionType_ {};
    // The tag filter conditions. Multiple sets of TagValues query conditions are supported. The logical relationship between multiple sets of TagValues conditions is OR.
    shared_ptr<vector<DescribeSplitItemBillRequest::TagFilter>> tagFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
