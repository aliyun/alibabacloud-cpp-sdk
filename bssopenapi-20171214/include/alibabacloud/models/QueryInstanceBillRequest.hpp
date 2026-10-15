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
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->billingCycle_ == nullptr && this->billingDate_ == nullptr && this->granularity_ == nullptr && this->isBillingItem_ == nullptr && this->isHideZeroCharge_ == nullptr
        && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr
        && this->subscriptionType_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QueryInstanceBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryInstanceBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline QueryInstanceBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryInstanceBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // isBillingItem Field Functions 
    bool hasIsBillingItem() const { return this->isBillingItem_ != nullptr;};
    void deleteIsBillingItem() { this->isBillingItem_ = nullptr;};
    inline bool getIsBillingItem() const { DARABONBA_PTR_GET_DEFAULT(isBillingItem_, false) };
    inline QueryInstanceBillRequest& setIsBillingItem(bool isBillingItem) { DARABONBA_PTR_SET_VALUE(isBillingItem_, isBillingItem) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool getIsHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline QueryInstanceBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryInstanceBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryInstanceBillRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryInstanceBillRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryInstanceBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryInstanceBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryInstanceBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the account that owns the resources. This account is the actual user of the resources.
    shared_ptr<int64_t> billOwnerId_ {};
    // The billing cycle in YYYY-MM format. Data from the last 18 months is supported.
    // 
    // This parameter is required.
    shared_ptr<string> billingCycle_ {};
    // The billing date. This parameter is required only when the **Granularity** parameter is set to DAILY. The value must be in the YYYY-MM-DD format.
    shared_ptr<string> billingDate_ {};
    // The granularity at which to query bills. Valid values:
    // 
    // - MONTHLY: queries bills by month. The data is consistent with the bill details on the Billing Cycle tab of the Bills page in the User Center.
    // 
    // - DAILY: queries bills by day. The data is consistent with the bill details on the By Day tab of the Bills page in the User Center.
    // 
    // If you set this parameter to DAILY, you must also specify the **BillingDate** parameter.
    shared_ptr<string> granularity_ {};
    // Specifies whether to query data by billable item.
    // 
    // - false: The data is consistent with the bill details on the Instance tab of the Bills page in the User Center.
    // 
    // - true: The data is consistent with the bill details on the Billable Item tab of the Bills page in the User Center.
    // 
    // Default value: false.
    shared_ptr<bool> isBillingItem_ {};
    // Specifies whether to filter out bills for which the pretax gross amount (**PretaxGrossAmount**) and pretax amount (**PretaxAmount**) are both 0. Valid values:
    // 
    // - false.
    // 
    // - true.
    shared_ptr<bool> isHideZeroCharge_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> pageSize_ {};
    // The code of the product.
    shared_ptr<string> productCode_ {};
    // The type of the product. Required when the ProductCode parameter is set to the code of an Alibaba Cloud Marketplace product.
    shared_ptr<string> productType_ {};
    // The subscription type. Valid values:
    // 
    // - Subscription: subscription.
    // 
    // - PayAsYouGo: pay-as-you-go.
    // 
    // > This parameter must be used with the **ProductCode** parameter.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
