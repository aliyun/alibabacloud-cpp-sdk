// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundDetailResponseBodyDataMultiRefundDetails.hpp>
#include <alibabacloud/models/RefundDetailResponseBodyDataPassengerRefundDetails.hpp>
#include <alibabacloud/models/RefundDetailResponseBodyDataRefundJourneys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(contain_multi_refund, containMultiRefund_);
      DARABONBA_PTR_TO_JSON(multi_refund_details, multiRefundDetails_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(passenger_refund_details, passengerRefundDetails_);
      DARABONBA_PTR_TO_JSON(pay_success_utc_time, paySuccessUtcTime_);
      DARABONBA_PTR_TO_JSON(refund_attachment_urls, refundAttachmentUrls_);
      DARABONBA_PTR_TO_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(refund_type, refundType_);
      DARABONBA_PTR_TO_JSON(refuse_reason, refuseReason_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_TO_JSON(utc_create_time, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(contain_multi_refund, containMultiRefund_);
      DARABONBA_PTR_FROM_JSON(multi_refund_details, multiRefundDetails_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_refund_details, passengerRefundDetails_);
      DARABONBA_PTR_FROM_JSON(pay_success_utc_time, paySuccessUtcTime_);
      DARABONBA_PTR_FROM_JSON(refund_attachment_urls, refundAttachmentUrls_);
      DARABONBA_PTR_FROM_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
      DARABONBA_PTR_FROM_JSON(refuse_reason, refuseReason_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_FROM_JSON(utc_create_time, utcCreateTime_);
    };
    RefundDetailResponseBodyData() = default ;
    RefundDetailResponseBodyData(const RefundDetailResponseBodyData &) = default ;
    RefundDetailResponseBodyData(RefundDetailResponseBodyData &&) = default ;
    RefundDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyData() = default ;
    RefundDetailResponseBodyData& operator=(const RefundDetailResponseBodyData &) = default ;
    RefundDetailResponseBodyData& operator=(RefundDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containMultiRefund_ == nullptr
        && return this->multiRefundDetails_ == nullptr && return this->orderNum_ == nullptr && return this->passengerRefundDetails_ == nullptr && return this->paySuccessUtcTime_ == nullptr && return this->refundAttachmentUrls_ == nullptr
        && return this->refundJourneys_ == nullptr && return this->refundOrderNum_ == nullptr && return this->refundReason_ == nullptr && return this->refundType_ == nullptr && return this->refuseReason_ == nullptr
        && return this->status_ == nullptr && return this->transactionNo_ == nullptr && return this->utcCreateTime_ == nullptr; };
    // containMultiRefund Field Functions 
    bool hasContainMultiRefund() const { return this->containMultiRefund_ != nullptr;};
    void deleteContainMultiRefund() { this->containMultiRefund_ = nullptr;};
    inline bool containMultiRefund() const { DARABONBA_PTR_GET_DEFAULT(containMultiRefund_, false) };
    inline RefundDetailResponseBodyData& setContainMultiRefund(bool containMultiRefund) { DARABONBA_PTR_SET_VALUE(containMultiRefund_, containMultiRefund) };


    // multiRefundDetails Field Functions 
    bool hasMultiRefundDetails() const { return this->multiRefundDetails_ != nullptr;};
    void deleteMultiRefundDetails() { this->multiRefundDetails_ = nullptr;};
    inline const vector<Models::RefundDetailResponseBodyDataMultiRefundDetails> & multiRefundDetails() const { DARABONBA_PTR_GET_CONST(multiRefundDetails_, vector<Models::RefundDetailResponseBodyDataMultiRefundDetails>) };
    inline vector<Models::RefundDetailResponseBodyDataMultiRefundDetails> multiRefundDetails() { DARABONBA_PTR_GET(multiRefundDetails_, vector<Models::RefundDetailResponseBodyDataMultiRefundDetails>) };
    inline RefundDetailResponseBodyData& setMultiRefundDetails(const vector<Models::RefundDetailResponseBodyDataMultiRefundDetails> & multiRefundDetails) { DARABONBA_PTR_SET_VALUE(multiRefundDetails_, multiRefundDetails) };
    inline RefundDetailResponseBodyData& setMultiRefundDetails(vector<Models::RefundDetailResponseBodyDataMultiRefundDetails> && multiRefundDetails) { DARABONBA_PTR_SET_RVALUE(multiRefundDetails_, multiRefundDetails) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundDetailResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // passengerRefundDetails Field Functions 
    bool hasPassengerRefundDetails() const { return this->passengerRefundDetails_ != nullptr;};
    void deletePassengerRefundDetails() { this->passengerRefundDetails_ = nullptr;};
    inline const vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails> & passengerRefundDetails() const { DARABONBA_PTR_GET_CONST(passengerRefundDetails_, vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails>) };
    inline vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails> passengerRefundDetails() { DARABONBA_PTR_GET(passengerRefundDetails_, vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails>) };
    inline RefundDetailResponseBodyData& setPassengerRefundDetails(const vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails> & passengerRefundDetails) { DARABONBA_PTR_SET_VALUE(passengerRefundDetails_, passengerRefundDetails) };
    inline RefundDetailResponseBodyData& setPassengerRefundDetails(vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails> && passengerRefundDetails) { DARABONBA_PTR_SET_RVALUE(passengerRefundDetails_, passengerRefundDetails) };


    // paySuccessUtcTime Field Functions 
    bool hasPaySuccessUtcTime() const { return this->paySuccessUtcTime_ != nullptr;};
    void deletePaySuccessUtcTime() { this->paySuccessUtcTime_ = nullptr;};
    inline int64_t paySuccessUtcTime() const { DARABONBA_PTR_GET_DEFAULT(paySuccessUtcTime_, 0L) };
    inline RefundDetailResponseBodyData& setPaySuccessUtcTime(int64_t paySuccessUtcTime) { DARABONBA_PTR_SET_VALUE(paySuccessUtcTime_, paySuccessUtcTime) };


    // refundAttachmentUrls Field Functions 
    bool hasRefundAttachmentUrls() const { return this->refundAttachmentUrls_ != nullptr;};
    void deleteRefundAttachmentUrls() { this->refundAttachmentUrls_ = nullptr;};
    inline const vector<string> & refundAttachmentUrls() const { DARABONBA_PTR_GET_CONST(refundAttachmentUrls_, vector<string>) };
    inline vector<string> refundAttachmentUrls() { DARABONBA_PTR_GET(refundAttachmentUrls_, vector<string>) };
    inline RefundDetailResponseBodyData& setRefundAttachmentUrls(const vector<string> & refundAttachmentUrls) { DARABONBA_PTR_SET_VALUE(refundAttachmentUrls_, refundAttachmentUrls) };
    inline RefundDetailResponseBodyData& setRefundAttachmentUrls(vector<string> && refundAttachmentUrls) { DARABONBA_PTR_SET_RVALUE(refundAttachmentUrls_, refundAttachmentUrls) };


    // refundJourneys Field Functions 
    bool hasRefundJourneys() const { return this->refundJourneys_ != nullptr;};
    void deleteRefundJourneys() { this->refundJourneys_ = nullptr;};
    inline const vector<Models::RefundDetailResponseBodyDataRefundJourneys> & refundJourneys() const { DARABONBA_PTR_GET_CONST(refundJourneys_, vector<Models::RefundDetailResponseBodyDataRefundJourneys>) };
    inline vector<Models::RefundDetailResponseBodyDataRefundJourneys> refundJourneys() { DARABONBA_PTR_GET(refundJourneys_, vector<Models::RefundDetailResponseBodyDataRefundJourneys>) };
    inline RefundDetailResponseBodyData& setRefundJourneys(const vector<Models::RefundDetailResponseBodyDataRefundJourneys> & refundJourneys) { DARABONBA_PTR_SET_VALUE(refundJourneys_, refundJourneys) };
    inline RefundDetailResponseBodyData& setRefundJourneys(vector<Models::RefundDetailResponseBodyDataRefundJourneys> && refundJourneys) { DARABONBA_PTR_SET_RVALUE(refundJourneys_, refundJourneys) };


    // refundOrderNum Field Functions 
    bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
    void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
    inline int64_t refundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
    inline RefundDetailResponseBodyData& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline RefundDetailResponseBodyData& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline int32_t refundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
    inline RefundDetailResponseBodyData& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


    // refuseReason Field Functions 
    bool hasRefuseReason() const { return this->refuseReason_ != nullptr;};
    void deleteRefuseReason() { this->refuseReason_ = nullptr;};
    inline string refuseReason() const { DARABONBA_PTR_GET_DEFAULT(refuseReason_, "") };
    inline RefundDetailResponseBodyData& setRefuseReason(string refuseReason) { DARABONBA_PTR_SET_VALUE(refuseReason_, refuseReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RefundDetailResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline RefundDetailResponseBodyData& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline RefundDetailResponseBodyData& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // whether it is a supplementary refund order (if the refund amount is not enough, you can use RefundApply to create a supplementary refund order)
    std::shared_ptr<bool> containMultiRefund_ = nullptr;
    // supplementary refund orders
    std::shared_ptr<vector<Models::RefundDetailResponseBodyDataMultiRefundDetails>> multiRefundDetails_ = nullptr;
    // order number that returned by Book
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // refund details by passenger dimension
    std::shared_ptr<vector<Models::RefundDetailResponseBodyDataPassengerRefundDetails>> passengerRefundDetails_ = nullptr;
    // refund completed time(timestamp)
    std::shared_ptr<int64_t> paySuccessUtcTime_ = nullptr;
    // URLs for refund attachments
    std::shared_ptr<vector<string>> refundAttachmentUrls_ = nullptr;
    // refunded journey
    std::shared_ptr<vector<Models::RefundDetailResponseBodyDataRefundJourneys>> refundJourneys_ = nullptr;
    // refund order number that returned by RefundApply
    std::shared_ptr<int64_t> refundOrderNum_ = nullptr;
    // reason for refund
    std::shared_ptr<string> refundReason_ = nullptr;
    // refund type 
    // 
    // 2: voluntary application
    // 
    // 5: flight delay or cancellation, flight schedule change, etc., due to airline reasons
    // 
    // 6: health reasons with a certificate from a secondary class A hospital or above
    // 
    // 7: non-voluntary confirmed guidance
    // 
    // 100: non-voluntary non-confirmed guidance
    std::shared_ptr<int32_t> refundType_ = nullptr;
    // reason for refund rejection
    std::shared_ptr<string> refuseReason_ = nullptr;
    // refund order status
    // 
    // 0: refund application
    // 
    // 1: refund in progress
    // 
    // 2: refund failed
    // 
    // 3: refund succeeded
    std::shared_ptr<int32_t> status_ = nullptr;
    // transaction number
    std::shared_ptr<string> transactionNo_ = nullptr;
    // refund order created time(timestamp)
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
