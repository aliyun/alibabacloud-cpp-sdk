// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(IsBillingItem, isBillingItem_);
      DARABONBA_PTR_TO_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(IsBillingItem, isBillingItem_);
      DARABONBA_PTR_FROM_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryInstanceBillRequest() = default ;
    QueryInstanceBillRequest(const QueryInstanceBillRequest &) = default ;
    QueryInstanceBillRequest(QueryInstanceBillRequest &&) = default ;
    QueryInstanceBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceBillRequest() = default ;
    QueryInstanceBillRequest& operator=(const QueryInstanceBillRequest &) = default ;
    QueryInstanceBillRequest& operator=(QueryInstanceBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->billingCycle_ != nullptr && this->billingDate_ != nullptr && this->granularity_ != nullptr && this->isBillingItem_ != nullptr && this->isHideZeroCharge_ != nullptr
        && this->ownerId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr
        && this->subscriptionType_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QueryInstanceBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryInstanceBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline QueryInstanceBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryInstanceBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // isBillingItem Field Functions 
    bool hasIsBillingItem() const { return this->isBillingItem_ != nullptr;};
    void deleteIsBillingItem() { this->isBillingItem_ = nullptr;};
    inline bool isBillingItem() const { DARABONBA_PTR_GET_DEFAULT(isBillingItem_, false) };
    inline QueryInstanceBillRequest& setIsBillingItem(bool isBillingItem) { DARABONBA_PTR_SET_VALUE(isBillingItem_, isBillingItem) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool isHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline QueryInstanceBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryInstanceBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryInstanceBillRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryInstanceBillRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryInstanceBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryInstanceBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryInstanceBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the member. If you specify a value for this parameter, you can query the bills of the specified member. If you leave this parameter empty, the bills of the current account are queried by default.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The billing cycle. Format: YYYY-MM.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The billing date. This parameter is required only if the **Granularity** parameter is set to DAILY. Format: YYYY-MM-DD.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The granularity at which bills are queried. Valid values:
    // 
    // *   MONTHLY: queries bills by month. The data queried is consistent with the data that is displayed for the specified billing cycle on the Billing Details tab of the Bill Details page in User Center.
    // *   DAILY: queries bills by day. The data queried is consistent with the data that is displayed for the specified day on the Billing Details tab of the Bill Details page in User Center.
    // 
    // You must set the **BillingDate** parameter before you can set the Granularity parameter to DAILY.
    std::shared_ptr<string> granularity_ = nullptr;
    // Specifies whether to query data by billable item. Valid values:
    // 
    // *   false: does not query data by billable item. The data queried is consistent with the data that is displayed for the specified instance on the Billing Details tab of the Bill Details page in User Center.
    // *   true: queries data by billable item. The data queried is consistent with the data that is displayed for the specified billable item on the Billing Details tab of the Bill Details page in User Center.
    // 
    // Default value: false.
    std::shared_ptr<bool> isBillingItem_ = nullptr;
    // Specifies whether to filter out a bill whose pretax gross amount and pretax amount are 0. Default value: false.******** Valid values:
    // 
    // *   false: does not filter the bill.
    // *   true: filters the bill.
    std::shared_ptr<bool> isHideZeroCharge_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service. This parameter is required if the ProductCode parameter is set to the service code of Alibaba Cloud Marketplace.
    std::shared_ptr<string> productType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method
    // *   PayAsYouGo: the pay-as-you-go billing method
    // 
    // **
    // 
    // ****This parameter must be used together with the **ProductCode** parameter.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
