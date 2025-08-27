// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_TO_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(selected_journeys, selectedJourneysShrink_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengersShrink_);
      DARABONBA_PTR_TO_JSON(user_intention_memo, userIntentionMemo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_FROM_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(selected_journeys, selectedJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengersShrink_);
      DARABONBA_PTR_FROM_JSON(user_intention_memo, userIntentionMemo_);
    };
    IntlFlightReShopApplyShrinkRequest() = default ;
    IntlFlightReShopApplyShrinkRequest(const IntlFlightReShopApplyShrinkRequest &) = default ;
    IntlFlightReShopApplyShrinkRequest(IntlFlightReShopApplyShrinkRequest &&) = default ;
    IntlFlightReShopApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopApplyShrinkRequest() = default ;
    IntlFlightReShopApplyShrinkRequest& operator=(const IntlFlightReShopApplyShrinkRequest &) = default ;
    IntlFlightReShopApplyShrinkRequest& operator=(IntlFlightReShopApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncApplyKey_ != nullptr
        && this->asyncApplyMode_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outReShopApplyId_ != nullptr && this->passengerJourneyGroupKey_ != nullptr
        && this->reShopReasonCode_ != nullptr && this->selectedJourneysShrink_ != nullptr && this->selectedPassengersShrink_ != nullptr && this->userIntentionMemo_ != nullptr; };
    // asyncApplyKey Field Functions 
    bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
    void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
    inline string asyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


    // asyncApplyMode Field Functions 
    bool hasAsyncApplyMode() const { return this->asyncApplyMode_ != nullptr;};
    void deleteAsyncApplyMode() { this->asyncApplyMode_ = nullptr;};
    inline bool asyncApplyMode() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyMode_, false) };
    inline IntlFlightReShopApplyShrinkRequest& setAsyncApplyMode(bool asyncApplyMode) { DARABONBA_PTR_SET_VALUE(asyncApplyMode_, asyncApplyMode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string outReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string reShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // selectedJourneysShrink Field Functions 
    bool hasSelectedJourneysShrink() const { return this->selectedJourneysShrink_ != nullptr;};
    void deleteSelectedJourneysShrink() { this->selectedJourneysShrink_ = nullptr;};
    inline string selectedJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedJourneysShrink_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setSelectedJourneysShrink(string selectedJourneysShrink) { DARABONBA_PTR_SET_VALUE(selectedJourneysShrink_, selectedJourneysShrink) };


    // selectedPassengersShrink Field Functions 
    bool hasSelectedPassengersShrink() const { return this->selectedPassengersShrink_ != nullptr;};
    void deleteSelectedPassengersShrink() { this->selectedPassengersShrink_ = nullptr;};
    inline string selectedPassengersShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedPassengersShrink_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setSelectedPassengersShrink(string selectedPassengersShrink) { DARABONBA_PTR_SET_VALUE(selectedPassengersShrink_, selectedPassengersShrink) };


    // userIntentionMemo Field Functions 
    bool hasUserIntentionMemo() const { return this->userIntentionMemo_ != nullptr;};
    void deleteUserIntentionMemo() { this->userIntentionMemo_ = nullptr;};
    inline string userIntentionMemo() const { DARABONBA_PTR_GET_DEFAULT(userIntentionMemo_, "") };
    inline IntlFlightReShopApplyShrinkRequest& setUserIntentionMemo(string userIntentionMemo) { DARABONBA_PTR_SET_VALUE(userIntentionMemo_, userIntentionMemo) };


  protected:
    std::shared_ptr<string> asyncApplyKey_ = nullptr;
    std::shared_ptr<bool> asyncApplyMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outReShopApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerJourneyGroupKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reShopReasonCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> selectedJourneysShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> selectedPassengersShrink_ = nullptr;
    std::shared_ptr<string> userIntentionMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
