// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPOTASEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPOTASEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopOtaSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopOtaSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengersShrink_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopOtaSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengersShrink_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    IntlFlightReShopOtaSearchShrinkRequest() = default ;
    IntlFlightReShopOtaSearchShrinkRequest(const IntlFlightReShopOtaSearchShrinkRequest &) = default ;
    IntlFlightReShopOtaSearchShrinkRequest(IntlFlightReShopOtaSearchShrinkRequest &&) = default ;
    IntlFlightReShopOtaSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopOtaSearchShrinkRequest() = default ;
    IntlFlightReShopOtaSearchShrinkRequest& operator=(const IntlFlightReShopOtaSearchShrinkRequest &) = default ;
    IntlFlightReShopOtaSearchShrinkRequest& operator=(IntlFlightReShopOtaSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outWheelSearch_ == nullptr && this->passengerJourneyGroupKey_ == nullptr && this->reShopReasonCode_ == nullptr && this->searchJourneysShrink_ == nullptr
        && this->selectedPassengersShrink_ == nullptr && this->token_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outWheelSearch Field Functions 
    bool hasOutWheelSearch() const { return this->outWheelSearch_ != nullptr;};
    void deleteOutWheelSearch() { this->outWheelSearch_ = nullptr;};
    inline bool getOutWheelSearch() const { DARABONBA_PTR_GET_DEFAULT(outWheelSearch_, false) };
    inline IntlFlightReShopOtaSearchShrinkRequest& setOutWheelSearch(bool outWheelSearch) { DARABONBA_PTR_SET_VALUE(outWheelSearch_, outWheelSearch) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string getReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // searchJourneysShrink Field Functions 
    bool hasSearchJourneysShrink() const { return this->searchJourneysShrink_ != nullptr;};
    void deleteSearchJourneysShrink() { this->searchJourneysShrink_ = nullptr;};
    inline string getSearchJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(searchJourneysShrink_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setSearchJourneysShrink(string searchJourneysShrink) { DARABONBA_PTR_SET_VALUE(searchJourneysShrink_, searchJourneysShrink) };


    // selectedPassengersShrink Field Functions 
    bool hasSelectedPassengersShrink() const { return this->selectedPassengersShrink_ != nullptr;};
    void deleteSelectedPassengersShrink() { this->selectedPassengersShrink_ = nullptr;};
    inline string getSelectedPassengersShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedPassengersShrink_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setSelectedPassengersShrink(string selectedPassengersShrink) { DARABONBA_PTR_SET_VALUE(selectedPassengersShrink_, selectedPassengersShrink) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightReShopOtaSearchShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<bool> outWheelSearch_ {};
    // This parameter is required.
    shared_ptr<string> passengerJourneyGroupKey_ {};
    shared_ptr<string> reShopReasonCode_ {};
    // This parameter is required.
    shared_ptr<string> searchJourneysShrink_ {};
    // This parameter is required.
    shared_ptr<string> selectedPassengersShrink_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
