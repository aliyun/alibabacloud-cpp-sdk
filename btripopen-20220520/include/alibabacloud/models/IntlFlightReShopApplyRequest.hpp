// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopApplyRequestSelectedJourneys.hpp>
#include <alibabacloud/models/IntlFlightReShopApplyRequestSelectedPassengers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_TO_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(selected_journeys, selectedJourneys_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_TO_JSON(user_intention_memo, userIntentionMemo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_FROM_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(selected_journeys, selectedJourneys_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_FROM_JSON(user_intention_memo, userIntentionMemo_);
    };
    IntlFlightReShopApplyRequest() = default ;
    IntlFlightReShopApplyRequest(const IntlFlightReShopApplyRequest &) = default ;
    IntlFlightReShopApplyRequest(IntlFlightReShopApplyRequest &&) = default ;
    IntlFlightReShopApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopApplyRequest() = default ;
    IntlFlightReShopApplyRequest& operator=(const IntlFlightReShopApplyRequest &) = default ;
    IntlFlightReShopApplyRequest& operator=(IntlFlightReShopApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncApplyKey_ != nullptr
        && this->asyncApplyMode_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outReShopApplyId_ != nullptr && this->passengerJourneyGroupKey_ != nullptr
        && this->reShopReasonCode_ != nullptr && this->selectedJourneys_ != nullptr && this->selectedPassengers_ != nullptr && this->userIntentionMemo_ != nullptr; };
    // asyncApplyKey Field Functions 
    bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
    void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
    inline string asyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
    inline IntlFlightReShopApplyRequest& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


    // asyncApplyMode Field Functions 
    bool hasAsyncApplyMode() const { return this->asyncApplyMode_ != nullptr;};
    void deleteAsyncApplyMode() { this->asyncApplyMode_ = nullptr;};
    inline bool asyncApplyMode() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyMode_, false) };
    inline IntlFlightReShopApplyRequest& setAsyncApplyMode(bool asyncApplyMode) { DARABONBA_PTR_SET_VALUE(asyncApplyMode_, asyncApplyMode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopApplyRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopApplyRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string outReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopApplyRequest& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopApplyRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string reShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopApplyRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // selectedJourneys Field Functions 
    bool hasSelectedJourneys() const { return this->selectedJourneys_ != nullptr;};
    void deleteSelectedJourneys() { this->selectedJourneys_ = nullptr;};
    inline const vector<IntlFlightReShopApplyRequestSelectedJourneys> & selectedJourneys() const { DARABONBA_PTR_GET_CONST(selectedJourneys_, vector<IntlFlightReShopApplyRequestSelectedJourneys>) };
    inline vector<IntlFlightReShopApplyRequestSelectedJourneys> selectedJourneys() { DARABONBA_PTR_GET(selectedJourneys_, vector<IntlFlightReShopApplyRequestSelectedJourneys>) };
    inline IntlFlightReShopApplyRequest& setSelectedJourneys(const vector<IntlFlightReShopApplyRequestSelectedJourneys> & selectedJourneys) { DARABONBA_PTR_SET_VALUE(selectedJourneys_, selectedJourneys) };
    inline IntlFlightReShopApplyRequest& setSelectedJourneys(vector<IntlFlightReShopApplyRequestSelectedJourneys> && selectedJourneys) { DARABONBA_PTR_SET_RVALUE(selectedJourneys_, selectedJourneys) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightReShopApplyRequestSelectedPassengers> & selectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightReShopApplyRequestSelectedPassengers>) };
    inline vector<IntlFlightReShopApplyRequestSelectedPassengers> selectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightReShopApplyRequestSelectedPassengers>) };
    inline IntlFlightReShopApplyRequest& setSelectedPassengers(const vector<IntlFlightReShopApplyRequestSelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightReShopApplyRequest& setSelectedPassengers(vector<IntlFlightReShopApplyRequestSelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


    // userIntentionMemo Field Functions 
    bool hasUserIntentionMemo() const { return this->userIntentionMemo_ != nullptr;};
    void deleteUserIntentionMemo() { this->userIntentionMemo_ = nullptr;};
    inline string userIntentionMemo() const { DARABONBA_PTR_GET_DEFAULT(userIntentionMemo_, "") };
    inline IntlFlightReShopApplyRequest& setUserIntentionMemo(string userIntentionMemo) { DARABONBA_PTR_SET_VALUE(userIntentionMemo_, userIntentionMemo) };


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
    std::shared_ptr<vector<IntlFlightReShopApplyRequestSelectedJourneys>> selectedJourneys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<IntlFlightReShopApplyRequestSelectedPassengers>> selectedPassengers_ = nullptr;
    std::shared_ptr<string> userIntentionMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
