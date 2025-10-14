// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(page_index, pageIndex_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(refund_create_begin_time, refundCreateBeginTime_);
      DARABONBA_PTR_TO_JSON(refund_create_end_time, refundCreateEndTime_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(page_index, pageIndex_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(refund_create_begin_time, refundCreateBeginTime_);
      DARABONBA_PTR_FROM_JSON(refund_create_end_time, refundCreateEndTime_);
    };
    RefundDetailListRequest() = default ;
    RefundDetailListRequest(const RefundDetailListRequest &) = default ;
    RefundDetailListRequest(RefundDetailListRequest &&) = default ;
    RefundDetailListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailListRequest() = default ;
    RefundDetailListRequest& operator=(const RefundDetailListRequest &) = default ;
    RefundDetailListRequest& operator=(RefundDetailListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->refundCreateBeginTime_ == nullptr && return this->refundCreateEndTime_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundDetailListRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline RefundDetailListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline RefundDetailListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // refundCreateBeginTime Field Functions 
    bool hasRefundCreateBeginTime() const { return this->refundCreateBeginTime_ != nullptr;};
    void deleteRefundCreateBeginTime() { this->refundCreateBeginTime_ = nullptr;};
    inline int64_t refundCreateBeginTime() const { DARABONBA_PTR_GET_DEFAULT(refundCreateBeginTime_, 0L) };
    inline RefundDetailListRequest& setRefundCreateBeginTime(int64_t refundCreateBeginTime) { DARABONBA_PTR_SET_VALUE(refundCreateBeginTime_, refundCreateBeginTime) };


    // refundCreateEndTime Field Functions 
    bool hasRefundCreateEndTime() const { return this->refundCreateEndTime_ != nullptr;};
    void deleteRefundCreateEndTime() { this->refundCreateEndTime_ = nullptr;};
    inline int64_t refundCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(refundCreateEndTime_, 0L) };
    inline RefundDetailListRequest& setRefundCreateEndTime(int64_t refundCreateEndTime) { DARABONBA_PTR_SET_VALUE(refundCreateEndTime_, refundCreateEndTime) };


  protected:
    // order number returned by Book
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // pagination query parameters, from which page to start querying
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // pagination query parameters, how many orders to return
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // the earliest time(timestamp) of refund order creation
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> refundCreateBeginTime_ = nullptr;
    // the latest time(timestamp) of refund order creation
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> refundCreateEndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
