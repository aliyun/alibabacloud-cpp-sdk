// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPLITITEMBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySplitItemBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySplitItemBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySplitItemBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QuerySplitItemBillRequest() = default ;
    QuerySplitItemBillRequest(const QuerySplitItemBillRequest &) = default ;
    QuerySplitItemBillRequest(QuerySplitItemBillRequest &&) = default ;
    QuerySplitItemBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySplitItemBillRequest() = default ;
    QuerySplitItemBillRequest& operator=(const QuerySplitItemBillRequest &) = default ;
    QuerySplitItemBillRequest& operator=(QuerySplitItemBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->billingCycle_ != nullptr && this->ownerId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->productCode_ != nullptr
        && this->productType_ != nullptr && this->subscriptionType_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QuerySplitItemBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QuerySplitItemBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySplitItemBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySplitItemBillRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySplitItemBillRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QuerySplitItemBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QuerySplitItemBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QuerySplitItemBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the member. If you specify a value for this parameter, you can query the split bills of the specified member. If you leave this parameter empty, the split bills of the current account are queried by default.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The billing cycle, in the YYYY-MM format.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The billing method. Valid values: Subscription: subscription PayAsYouGo: pay-as-you-go This parameter must be used together with the ProductCode parameter.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
