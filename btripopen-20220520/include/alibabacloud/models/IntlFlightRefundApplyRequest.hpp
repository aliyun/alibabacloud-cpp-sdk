// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundApplyRequestRefundSegmentList.hpp>
#include <alibabacloud/models/IntlFlightRefundApplyRequestSelectedPassengers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_TO_JSON(refund_segment_list, refundSegmentList_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengers_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_FROM_JSON(refund_segment_list, refundSegmentList_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengers_);
    };
    IntlFlightRefundApplyRequest() = default ;
    IntlFlightRefundApplyRequest(const IntlFlightRefundApplyRequest &) = default ;
    IntlFlightRefundApplyRequest(IntlFlightRefundApplyRequest &&) = default ;
    IntlFlightRefundApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundApplyRequest() = default ;
    IntlFlightRefundApplyRequest& operator=(const IntlFlightRefundApplyRequest &) = default ;
    IntlFlightRefundApplyRequest& operator=(IntlFlightRefundApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outRefundApplyId_ != nullptr && this->passengerJourneyGroupKey_ != nullptr && this->refundReasonCode_ != nullptr && this->refundSegmentList_ != nullptr
        && this->selectedPassengers_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightRefundApplyRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightRefundApplyRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundApplyRequest& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightRefundApplyRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // refundReasonCode Field Functions 
    bool hasRefundReasonCode() const { return this->refundReasonCode_ != nullptr;};
    void deleteRefundReasonCode() { this->refundReasonCode_ = nullptr;};
    inline string refundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(refundReasonCode_, "") };
    inline IntlFlightRefundApplyRequest& setRefundReasonCode(string refundReasonCode) { DARABONBA_PTR_SET_VALUE(refundReasonCode_, refundReasonCode) };


    // refundSegmentList Field Functions 
    bool hasRefundSegmentList() const { return this->refundSegmentList_ != nullptr;};
    void deleteRefundSegmentList() { this->refundSegmentList_ = nullptr;};
    inline const vector<IntlFlightRefundApplyRequestRefundSegmentList> & refundSegmentList() const { DARABONBA_PTR_GET_CONST(refundSegmentList_, vector<IntlFlightRefundApplyRequestRefundSegmentList>) };
    inline vector<IntlFlightRefundApplyRequestRefundSegmentList> refundSegmentList() { DARABONBA_PTR_GET(refundSegmentList_, vector<IntlFlightRefundApplyRequestRefundSegmentList>) };
    inline IntlFlightRefundApplyRequest& setRefundSegmentList(const vector<IntlFlightRefundApplyRequestRefundSegmentList> & refundSegmentList) { DARABONBA_PTR_SET_VALUE(refundSegmentList_, refundSegmentList) };
    inline IntlFlightRefundApplyRequest& setRefundSegmentList(vector<IntlFlightRefundApplyRequestRefundSegmentList> && refundSegmentList) { DARABONBA_PTR_SET_RVALUE(refundSegmentList_, refundSegmentList) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightRefundApplyRequestSelectedPassengers> & selectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightRefundApplyRequestSelectedPassengers>) };
    inline vector<IntlFlightRefundApplyRequestSelectedPassengers> selectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightRefundApplyRequestSelectedPassengers>) };
    inline IntlFlightRefundApplyRequest& setSelectedPassengers(const vector<IntlFlightRefundApplyRequestSelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightRefundApplyRequest& setSelectedPassengers(vector<IntlFlightRefundApplyRequestSelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outRefundApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerJourneyGroupKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refundReasonCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<IntlFlightRefundApplyRequestRefundSegmentList>> refundSegmentList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<IntlFlightRefundApplyRequestSelectedPassengers>> selectedPassengers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
