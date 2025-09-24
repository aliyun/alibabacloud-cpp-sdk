// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(IsDisplayLocalCurrency, isDisplayLocalCurrency_);
      DARABONBA_PTR_TO_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(IsDisplayLocalCurrency, isDisplayLocalCurrency_);
      DARABONBA_PTR_FROM_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryBillRequest() = default ;
    QueryBillRequest(const QueryBillRequest &) = default ;
    QueryBillRequest(QueryBillRequest &&) = default ;
    QueryBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillRequest() = default ;
    QueryBillRequest& operator=(const QueryBillRequest &) = default ;
    QueryBillRequest& operator=(QueryBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->billingCycle_ != nullptr && this->isDisplayLocalCurrency_ != nullptr && this->isHideZeroCharge_ != nullptr && this->ownerId_ != nullptr && this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->subscriptionType_ != nullptr && this->type_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QueryBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // isDisplayLocalCurrency Field Functions 
    bool hasIsDisplayLocalCurrency() const { return this->isDisplayLocalCurrency_ != nullptr;};
    void deleteIsDisplayLocalCurrency() { this->isDisplayLocalCurrency_ = nullptr;};
    inline bool isDisplayLocalCurrency() const { DARABONBA_PTR_GET_DEFAULT(isDisplayLocalCurrency_, false) };
    inline QueryBillRequest& setIsDisplayLocalCurrency(bool isDisplayLocalCurrency) { DARABONBA_PTR_SET_VALUE(isDisplayLocalCurrency_, isDisplayLocalCurrency) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool isHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline QueryBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryBillRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBillRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryBillRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the member.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The billing cycle, in the YYYY-MM format.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // Specifies whether to display local currency information in bills. The parameter will be discontinued.
    std::shared_ptr<bool> isDisplayLocalCurrency_ = nullptr;
    // Specifies whether to filter out a bill whose pretax gross amount is 0. By default, a bill whose pretax gross amount is 0 is not filtered out. Valid values:
    // 
    // *   true: filters out a bill whose pretax gross amount is 0.
    // *   false: does not filter out a bill whose pretax gross amount is 0.
    std::shared_ptr<bool> isHideZeroCharge_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription
    // *   PayAsYouGo
    // 
    // This parameter must be used together with the ProductCode parameter.
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The type of the bill. Valid values:
    // 
    // *   SubscriptionOrder
    // *   PayAsYouGoBill
    // *   Refund
    // *   Adjustment
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
