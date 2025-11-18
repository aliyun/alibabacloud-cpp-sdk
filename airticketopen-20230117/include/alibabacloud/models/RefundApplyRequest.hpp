// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundApplyRequestRefundJourneys.hpp>
#include <alibabacloud/models/RefundApplyRequestRefundPassengerList.hpp>
#include <alibabacloud/models/RefundApplyRequestRefundType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_TO_JSON(refund_passenger_list, refundPassengerList_);
      DARABONBA_PTR_TO_JSON(refund_type, refundType_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_FROM_JSON(refund_passenger_list, refundPassengerList_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
    };
    RefundApplyRequest() = default ;
    RefundApplyRequest(const RefundApplyRequest &) = default ;
    RefundApplyRequest(RefundApplyRequest &&) = default ;
    RefundApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyRequest() = default ;
    RefundApplyRequest& operator=(const RefundApplyRequest &) = default ;
    RefundApplyRequest& operator=(RefundApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->refundJourneys_ == nullptr && return this->refundPassengerList_ == nullptr && return this->refundType_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundApplyRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // refundJourneys Field Functions 
    bool hasRefundJourneys() const { return this->refundJourneys_ != nullptr;};
    void deleteRefundJourneys() { this->refundJourneys_ = nullptr;};
    inline const vector<RefundApplyRequestRefundJourneys> & refundJourneys() const { DARABONBA_PTR_GET_CONST(refundJourneys_, vector<RefundApplyRequestRefundJourneys>) };
    inline vector<RefundApplyRequestRefundJourneys> refundJourneys() { DARABONBA_PTR_GET(refundJourneys_, vector<RefundApplyRequestRefundJourneys>) };
    inline RefundApplyRequest& setRefundJourneys(const vector<RefundApplyRequestRefundJourneys> & refundJourneys) { DARABONBA_PTR_SET_VALUE(refundJourneys_, refundJourneys) };
    inline RefundApplyRequest& setRefundJourneys(vector<RefundApplyRequestRefundJourneys> && refundJourneys) { DARABONBA_PTR_SET_RVALUE(refundJourneys_, refundJourneys) };


    // refundPassengerList Field Functions 
    bool hasRefundPassengerList() const { return this->refundPassengerList_ != nullptr;};
    void deleteRefundPassengerList() { this->refundPassengerList_ = nullptr;};
    inline const vector<RefundApplyRequestRefundPassengerList> & refundPassengerList() const { DARABONBA_PTR_GET_CONST(refundPassengerList_, vector<RefundApplyRequestRefundPassengerList>) };
    inline vector<RefundApplyRequestRefundPassengerList> refundPassengerList() { DARABONBA_PTR_GET(refundPassengerList_, vector<RefundApplyRequestRefundPassengerList>) };
    inline RefundApplyRequest& setRefundPassengerList(const vector<RefundApplyRequestRefundPassengerList> & refundPassengerList) { DARABONBA_PTR_SET_VALUE(refundPassengerList_, refundPassengerList) };
    inline RefundApplyRequest& setRefundPassengerList(vector<RefundApplyRequestRefundPassengerList> && refundPassengerList) { DARABONBA_PTR_SET_RVALUE(refundPassengerList_, refundPassengerList) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline const RefundApplyRequestRefundType & refundType() const { DARABONBA_PTR_GET_CONST(refundType_, RefundApplyRequestRefundType) };
    inline RefundApplyRequestRefundType refundType() { DARABONBA_PTR_GET(refundType_, RefundApplyRequestRefundType) };
    inline RefundApplyRequest& setRefundType(const RefundApplyRequestRefundType & refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };
    inline RefundApplyRequest& setRefundType(RefundApplyRequestRefundType && refundType) { DARABONBA_PTR_SET_RVALUE(refundType_, refundType) };


  protected:
    // Order number
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // Itinerary for which a refund is being requested
    // 
    // This parameter is required.
    std::shared_ptr<vector<RefundApplyRequestRefundJourneys>> refundJourneys_ = nullptr;
    // List of passengers applying for a refund
    // 
    // This parameter is required.
    std::shared_ptr<vector<RefundApplyRequestRefundPassengerList>> refundPassengerList_ = nullptr;
    // Refund type - involuntary or voluntary. 
    // attachments are required for involuntary refund application.
    // 
    // This parameter is required.
    std::shared_ptr<RefundApplyRequestRefundType> refundType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
