// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(is_multi_refund, isMultiRefund_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_TO_JSON(refund_order_status, refundOrderStatus_);
      DARABONBA_PTR_TO_JSON(related_refund_order_num, relatedRefundOrderNum_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_TO_JSON(utc_create_time, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(is_multi_refund, isMultiRefund_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_FROM_JSON(refund_order_status, refundOrderStatus_);
      DARABONBA_PTR_FROM_JSON(related_refund_order_num, relatedRefundOrderNum_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_FROM_JSON(utc_create_time, utcCreateTime_);
    };
    RefundDetailListResponseBodyDataList() = default ;
    RefundDetailListResponseBodyDataList(const RefundDetailListResponseBodyDataList &) = default ;
    RefundDetailListResponseBodyDataList(RefundDetailListResponseBodyDataList &&) = default ;
    RefundDetailListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailListResponseBodyDataList() = default ;
    RefundDetailListResponseBodyDataList& operator=(const RefundDetailListResponseBodyDataList &) = default ;
    RefundDetailListResponseBodyDataList& operator=(RefundDetailListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isMultiRefund_ == nullptr
        && return this->orderNum_ == nullptr && return this->refundOrderNum_ == nullptr && return this->refundOrderStatus_ == nullptr && return this->relatedRefundOrderNum_ == nullptr && return this->transactionNo_ == nullptr
        && return this->utcCreateTime_ == nullptr; };
    // isMultiRefund Field Functions 
    bool hasIsMultiRefund() const { return this->isMultiRefund_ != nullptr;};
    void deleteIsMultiRefund() { this->isMultiRefund_ = nullptr;};
    inline bool isMultiRefund() const { DARABONBA_PTR_GET_DEFAULT(isMultiRefund_, false) };
    inline RefundDetailListResponseBodyDataList& setIsMultiRefund(bool isMultiRefund) { DARABONBA_PTR_SET_VALUE(isMultiRefund_, isMultiRefund) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundDetailListResponseBodyDataList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // refundOrderNum Field Functions 
    bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
    void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
    inline int64_t refundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
    inline RefundDetailListResponseBodyDataList& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


    // refundOrderStatus Field Functions 
    bool hasRefundOrderStatus() const { return this->refundOrderStatus_ != nullptr;};
    void deleteRefundOrderStatus() { this->refundOrderStatus_ = nullptr;};
    inline int32_t refundOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(refundOrderStatus_, 0) };
    inline RefundDetailListResponseBodyDataList& setRefundOrderStatus(int32_t refundOrderStatus) { DARABONBA_PTR_SET_VALUE(refundOrderStatus_, refundOrderStatus) };


    // relatedRefundOrderNum Field Functions 
    bool hasRelatedRefundOrderNum() const { return this->relatedRefundOrderNum_ != nullptr;};
    void deleteRelatedRefundOrderNum() { this->relatedRefundOrderNum_ = nullptr;};
    inline string relatedRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(relatedRefundOrderNum_, "") };
    inline RefundDetailListResponseBodyDataList& setRelatedRefundOrderNum(string relatedRefundOrderNum) { DARABONBA_PTR_SET_VALUE(relatedRefundOrderNum_, relatedRefundOrderNum) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline RefundDetailListResponseBodyDataList& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline RefundDetailListResponseBodyDataList& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // Whether it is a supplementary refund
    std::shared_ptr<bool> isMultiRefund_ = nullptr;
    // Order number （ Ticketing Order Number）
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // Refund order number
    std::shared_ptr<int64_t> refundOrderNum_ = nullptr;
    // Refund order status: 0: Refund application; 1: Refund in progress; 2: Refund failed; 3: Refund succeeded
    std::shared_ptr<int32_t> refundOrderStatus_ = nullptr;
    // The original refund order number associated with this supplementary refund. Only present for supplementary refunds, indicating the ID of the original refund order.
    std::shared_ptr<string> relatedRefundOrderNum_ = nullptr;
    // Transaction serial number
    std::shared_ptr<string> transactionNo_ = nullptr;
    // Creation time, UTC timestamp
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
