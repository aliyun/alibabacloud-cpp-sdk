// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODYDATAREFUNDRESULTS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODYDATAREFUNDRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundApplyResponseBodyDataRefundResultsRefundPassengers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyResponseBodyDataRefundResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyResponseBodyDataRefundResults& obj) { 
      DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
      DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_TO_JSON(refund_passengers, refundPassengers_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyResponseBodyDataRefundResults& obj) { 
      DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
      DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
      DARABONBA_PTR_FROM_JSON(refund_passengers, refundPassengers_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    RefundApplyResponseBodyDataRefundResults() = default ;
    RefundApplyResponseBodyDataRefundResults(const RefundApplyResponseBodyDataRefundResults &) = default ;
    RefundApplyResponseBodyDataRefundResults(RefundApplyResponseBodyDataRefundResults &&) = default ;
    RefundApplyResponseBodyDataRefundResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyResponseBodyDataRefundResults() = default ;
    RefundApplyResponseBodyDataRefundResults& operator=(const RefundApplyResponseBodyDataRefundResults &) = default ;
    RefundApplyResponseBodyDataRefundResults& operator=(RefundApplyResponseBodyDataRefundResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failReason_ == nullptr
        && return this->refundOrderNum_ == nullptr && return this->refundPassengers_ == nullptr && return this->status_ == nullptr; };
    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline RefundApplyResponseBodyDataRefundResults& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // refundOrderNum Field Functions 
    bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
    void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
    inline int64_t refundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
    inline RefundApplyResponseBodyDataRefundResults& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


    // refundPassengers Field Functions 
    bool hasRefundPassengers() const { return this->refundPassengers_ != nullptr;};
    void deleteRefundPassengers() { this->refundPassengers_ = nullptr;};
    inline const vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers> & refundPassengers() const { DARABONBA_PTR_GET_CONST(refundPassengers_, vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers>) };
    inline vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers> refundPassengers() { DARABONBA_PTR_GET(refundPassengers_, vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers>) };
    inline RefundApplyResponseBodyDataRefundResults& setRefundPassengers(const vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers> & refundPassengers) { DARABONBA_PTR_SET_VALUE(refundPassengers_, refundPassengers) };
    inline RefundApplyResponseBodyDataRefundResults& setRefundPassengers(vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers> && refundPassengers) { DARABONBA_PTR_SET_RVALUE(refundPassengers_, refundPassengers) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RefundApplyResponseBodyDataRefundResults& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // reason for refund application failure
    std::shared_ptr<string> failReason_ = nullptr;
    // refund order number
    std::shared_ptr<int64_t> refundOrderNum_ = nullptr;
    // passengers of current refund order
    std::shared_ptr<vector<Models::RefundApplyResponseBodyDataRefundResultsRefundPassengers>> refundPassengers_ = nullptr;
    // refund order status 
    // 
    // 0: refund order created successfully
    // 
    // 1: refund order creation failed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
