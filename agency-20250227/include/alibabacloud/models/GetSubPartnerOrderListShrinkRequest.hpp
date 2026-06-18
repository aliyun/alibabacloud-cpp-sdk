// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBPARTNERORDERLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBPARTNERORDERLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetSubPartnerOrderListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubPartnerOrderListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderCreateAfter, orderCreateAfter_);
      DARABONBA_PTR_TO_JSON(OrderCreateBefore, orderCreateBefore_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderPayAfter, orderPayAfter_);
      DARABONBA_PTR_TO_JSON(OrderPayBefore, orderPayBefore_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderTypeList, orderTypeListShrink_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PayAmountAfter, payAmountAfter_);
      DARABONBA_PTR_TO_JSON(PayAmountBefore, payAmountBefore_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubPartnerName, subPartnerName_);
      DARABONBA_PTR_TO_JSON(SubPartnerUid, subPartnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubPartnerOrderListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderCreateAfter, orderCreateAfter_);
      DARABONBA_PTR_FROM_JSON(OrderCreateBefore, orderCreateBefore_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderPayAfter, orderPayAfter_);
      DARABONBA_PTR_FROM_JSON(OrderPayBefore, orderPayBefore_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderTypeList, orderTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PayAmountAfter, payAmountAfter_);
      DARABONBA_PTR_FROM_JSON(PayAmountBefore, payAmountBefore_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubPartnerName, subPartnerName_);
      DARABONBA_PTR_FROM_JSON(SubPartnerUid, subPartnerUid_);
    };
    GetSubPartnerOrderListShrinkRequest() = default ;
    GetSubPartnerOrderListShrinkRequest(const GetSubPartnerOrderListShrinkRequest &) = default ;
    GetSubPartnerOrderListShrinkRequest(GetSubPartnerOrderListShrinkRequest &&) = default ;
    GetSubPartnerOrderListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubPartnerOrderListShrinkRequest() = default ;
    GetSubPartnerOrderListShrinkRequest& operator=(const GetSubPartnerOrderListShrinkRequest &) = default ;
    GetSubPartnerOrderListShrinkRequest& operator=(GetSubPartnerOrderListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderCreateAfter_ == nullptr
        && this->orderCreateBefore_ == nullptr && this->orderId_ == nullptr && this->orderPayAfter_ == nullptr && this->orderPayBefore_ == nullptr && this->orderStatus_ == nullptr
        && this->orderTypeListShrink_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->payAmountAfter_ == nullptr && this->payAmountBefore_ == nullptr
        && this->payType_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->projectId_ == nullptr && this->subPartnerName_ == nullptr
        && this->subPartnerUid_ == nullptr; };
    // orderCreateAfter Field Functions 
    bool hasOrderCreateAfter() const { return this->orderCreateAfter_ != nullptr;};
    void deleteOrderCreateAfter() { this->orderCreateAfter_ = nullptr;};
    inline int64_t getOrderCreateAfter() const { DARABONBA_PTR_GET_DEFAULT(orderCreateAfter_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderCreateAfter(int64_t orderCreateAfter) { DARABONBA_PTR_SET_VALUE(orderCreateAfter_, orderCreateAfter) };


    // orderCreateBefore Field Functions 
    bool hasOrderCreateBefore() const { return this->orderCreateBefore_ != nullptr;};
    void deleteOrderCreateBefore() { this->orderCreateBefore_ = nullptr;};
    inline int64_t getOrderCreateBefore() const { DARABONBA_PTR_GET_DEFAULT(orderCreateBefore_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderCreateBefore(int64_t orderCreateBefore) { DARABONBA_PTR_SET_VALUE(orderCreateBefore_, orderCreateBefore) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPayAfter Field Functions 
    bool hasOrderPayAfter() const { return this->orderPayAfter_ != nullptr;};
    void deleteOrderPayAfter() { this->orderPayAfter_ = nullptr;};
    inline int64_t getOrderPayAfter() const { DARABONBA_PTR_GET_DEFAULT(orderPayAfter_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderPayAfter(int64_t orderPayAfter) { DARABONBA_PTR_SET_VALUE(orderPayAfter_, orderPayAfter) };


    // orderPayBefore Field Functions 
    bool hasOrderPayBefore() const { return this->orderPayBefore_ != nullptr;};
    void deleteOrderPayBefore() { this->orderPayBefore_ = nullptr;};
    inline int64_t getOrderPayBefore() const { DARABONBA_PTR_GET_DEFAULT(orderPayBefore_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderPayBefore(int64_t orderPayBefore) { DARABONBA_PTR_SET_VALUE(orderPayBefore_, orderPayBefore) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int64_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setOrderStatus(int64_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderTypeListShrink Field Functions 
    bool hasOrderTypeListShrink() const { return this->orderTypeListShrink_ != nullptr;};
    void deleteOrderTypeListShrink() { this->orderTypeListShrink_ = nullptr;};
    inline string getOrderTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(orderTypeListShrink_, "") };
    inline GetSubPartnerOrderListShrinkRequest& setOrderTypeListShrink(string orderTypeListShrink) { DARABONBA_PTR_SET_VALUE(orderTypeListShrink_, orderTypeListShrink) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetSubPartnerOrderListShrinkRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSubPartnerOrderListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payAmountAfter Field Functions 
    bool hasPayAmountAfter() const { return this->payAmountAfter_ != nullptr;};
    void deletePayAmountAfter() { this->payAmountAfter_ = nullptr;};
    inline int64_t getPayAmountAfter() const { DARABONBA_PTR_GET_DEFAULT(payAmountAfter_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setPayAmountAfter(int64_t payAmountAfter) { DARABONBA_PTR_SET_VALUE(payAmountAfter_, payAmountAfter) };


    // payAmountBefore Field Functions 
    bool hasPayAmountBefore() const { return this->payAmountBefore_ != nullptr;};
    void deletePayAmountBefore() { this->payAmountBefore_ = nullptr;};
    inline int64_t getPayAmountBefore() const { DARABONBA_PTR_GET_DEFAULT(payAmountBefore_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setPayAmountBefore(int64_t payAmountBefore) { DARABONBA_PTR_SET_VALUE(payAmountBefore_, payAmountBefore) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int64_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setPayType(int64_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetSubPartnerOrderListShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetSubPartnerOrderListShrinkRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // subPartnerName Field Functions 
    bool hasSubPartnerName() const { return this->subPartnerName_ != nullptr;};
    void deleteSubPartnerName() { this->subPartnerName_ = nullptr;};
    inline string getSubPartnerName() const { DARABONBA_PTR_GET_DEFAULT(subPartnerName_, "") };
    inline GetSubPartnerOrderListShrinkRequest& setSubPartnerName(string subPartnerName) { DARABONBA_PTR_SET_VALUE(subPartnerName_, subPartnerName) };


    // subPartnerUid Field Functions 
    bool hasSubPartnerUid() const { return this->subPartnerUid_ != nullptr;};
    void deleteSubPartnerUid() { this->subPartnerUid_ = nullptr;};
    inline int64_t getSubPartnerUid() const { DARABONBA_PTR_GET_DEFAULT(subPartnerUid_, 0L) };
    inline GetSubPartnerOrderListShrinkRequest& setSubPartnerUid(int64_t subPartnerUid) { DARABONBA_PTR_SET_VALUE(subPartnerUid_, subPartnerUid) };


  protected:
    // The start timestamp of the order creation time range. The time range cannot exceed 6 months. The order creation time range and the order payment time range cannot both be empty.
    shared_ptr<int64_t> orderCreateAfter_ {};
    // The end timestamp of the order creation time range. The time range cannot exceed 6 months. The order creation time range and the order payment time range cannot both be empty.
    shared_ptr<int64_t> orderCreateBefore_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The start timestamp of the order payment time range. The time range cannot exceed 6 months. The order creation time range and the order payment time range cannot both be empty.
    shared_ptr<int64_t> orderPayAfter_ {};
    // The end timestamp of the order payment time range. The time range cannot exceed 6 months. The order creation time range and the order payment time range cannot both be empty.
    shared_ptr<int64_t> orderPayBefore_ {};
    // The order status. Valid values:
    // - 1: unpaid
    // - 2: paid
    // - 3: voided.
    shared_ptr<int64_t> orderStatus_ {};
    // The list of order types.
    // Valid values: BUY, UPGRADE, DOWNGRADE, RENEW, REFUND, and OTHERS.
    shared_ptr<string> orderTypeListShrink_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The minimum actual payment amount.
    shared_ptr<int64_t> payAmountAfter_ {};
    // The maximum actual payment amount.
    shared_ptr<int64_t> payAmountBefore_ {};
    // The payment type. Valid values:
    // - 1: non-delegated payment
    // - 2: delegated payment.
    shared_ptr<int64_t> payType_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The product name.
    shared_ptr<string> productName_ {};
    // The opportunity ID.
    shared_ptr<int64_t> projectId_ {};
    // The name of the secondary partner.
    shared_ptr<string> subPartnerName_ {};
    // The UID of the secondary partner.
    shared_ptr<int64_t> subPartnerUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
