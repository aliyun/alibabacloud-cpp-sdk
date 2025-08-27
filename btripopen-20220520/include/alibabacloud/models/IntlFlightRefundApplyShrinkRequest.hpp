// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_TO_JSON(refund_segment_list, refundSegmentListShrink_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_FROM_JSON(refund_segment_list, refundSegmentListShrink_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengersShrink_);
    };
    IntlFlightRefundApplyShrinkRequest() = default ;
    IntlFlightRefundApplyShrinkRequest(const IntlFlightRefundApplyShrinkRequest &) = default ;
    IntlFlightRefundApplyShrinkRequest(IntlFlightRefundApplyShrinkRequest &&) = default ;
    IntlFlightRefundApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundApplyShrinkRequest() = default ;
    IntlFlightRefundApplyShrinkRequest& operator=(const IntlFlightRefundApplyShrinkRequest &) = default ;
    IntlFlightRefundApplyShrinkRequest& operator=(IntlFlightRefundApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outRefundApplyId_ != nullptr && this->passengerJourneyGroupKey_ != nullptr && this->refundReasonCode_ != nullptr && this->refundSegmentListShrink_ != nullptr
        && this->selectedPassengersShrink_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // refundReasonCode Field Functions 
    bool hasRefundReasonCode() const { return this->refundReasonCode_ != nullptr;};
    void deleteRefundReasonCode() { this->refundReasonCode_ = nullptr;};
    inline string refundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(refundReasonCode_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setRefundReasonCode(string refundReasonCode) { DARABONBA_PTR_SET_VALUE(refundReasonCode_, refundReasonCode) };


    // refundSegmentListShrink Field Functions 
    bool hasRefundSegmentListShrink() const { return this->refundSegmentListShrink_ != nullptr;};
    void deleteRefundSegmentListShrink() { this->refundSegmentListShrink_ = nullptr;};
    inline string refundSegmentListShrink() const { DARABONBA_PTR_GET_DEFAULT(refundSegmentListShrink_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setRefundSegmentListShrink(string refundSegmentListShrink) { DARABONBA_PTR_SET_VALUE(refundSegmentListShrink_, refundSegmentListShrink) };


    // selectedPassengersShrink Field Functions 
    bool hasSelectedPassengersShrink() const { return this->selectedPassengersShrink_ != nullptr;};
    void deleteSelectedPassengersShrink() { this->selectedPassengersShrink_ = nullptr;};
    inline string selectedPassengersShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedPassengersShrink_, "") };
    inline IntlFlightRefundApplyShrinkRequest& setSelectedPassengersShrink(string selectedPassengersShrink) { DARABONBA_PTR_SET_VALUE(selectedPassengersShrink_, selectedPassengersShrink) };


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
    std::shared_ptr<string> refundSegmentListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> selectedPassengersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
