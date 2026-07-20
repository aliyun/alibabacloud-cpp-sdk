// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_TO_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_TO_JSON(total_re_shop_fee, totalReShopFee_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_FROM_JSON(async_apply_mode, asyncApplyMode_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_FROM_JSON(total_re_shop_fee, totalReShopFee_);
    };
    IntlFlightReShopCreateRequest() = default ;
    IntlFlightReShopCreateRequest(const IntlFlightReShopCreateRequest &) = default ;
    IntlFlightReShopCreateRequest(IntlFlightReShopCreateRequest &&) = default ;
    IntlFlightReShopCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopCreateRequest() = default ;
    IntlFlightReShopCreateRequest& operator=(const IntlFlightReShopCreateRequest &) = default ;
    IntlFlightReShopCreateRequest& operator=(IntlFlightReShopCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelectedPassengers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedPassengers& obj) { 
        DARABONBA_PTR_TO_JSON(full_name, fullName_);
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedPassengers& obj) { 
        DARABONBA_PTR_FROM_JSON(full_name, fullName_);
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      };
      SelectedPassengers() = default ;
      SelectedPassengers(const SelectedPassengers &) = default ;
      SelectedPassengers(SelectedPassengers &&) = default ;
      SelectedPassengers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedPassengers() = default ;
      SelectedPassengers& operator=(const SelectedPassengers &) = default ;
      SelectedPassengers& operator=(SelectedPassengers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fullName_ == nullptr
        && this->passengerId_ == nullptr; };
      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline SelectedPassengers& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
      inline SelectedPassengers& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    protected:
      // The full name of the passenger.
      shared_ptr<string> fullName_ {};
      // The ID of the passenger.
      shared_ptr<int64_t> passengerId_ {};
    };

    virtual bool empty() const override { return this->asyncApplyKey_ == nullptr
        && this->asyncApplyMode_ == nullptr && this->orderId_ == nullptr && this->otaItemId_ == nullptr && this->outOrderId_ == nullptr && this->outReShopApplyId_ == nullptr
        && this->passengerJourneyGroupKey_ == nullptr && this->reShopReasonCode_ == nullptr && this->selectedPassengers_ == nullptr && this->totalReShopFee_ == nullptr; };
    // asyncApplyKey Field Functions 
    bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
    void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
    inline string getAsyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
    inline IntlFlightReShopCreateRequest& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


    // asyncApplyMode Field Functions 
    bool hasAsyncApplyMode() const { return this->asyncApplyMode_ != nullptr;};
    void deleteAsyncApplyMode() { this->asyncApplyMode_ = nullptr;};
    inline bool getAsyncApplyMode() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyMode_, false) };
    inline IntlFlightReShopCreateRequest& setAsyncApplyMode(bool asyncApplyMode) { DARABONBA_PTR_SET_VALUE(asyncApplyMode_, asyncApplyMode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopCreateRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline IntlFlightReShopCreateRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopCreateRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string getOutReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopCreateRequest& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopCreateRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string getReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopCreateRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightReShopCreateRequest::SelectedPassengers> & getSelectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightReShopCreateRequest::SelectedPassengers>) };
    inline vector<IntlFlightReShopCreateRequest::SelectedPassengers> getSelectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightReShopCreateRequest::SelectedPassengers>) };
    inline IntlFlightReShopCreateRequest& setSelectedPassengers(const vector<IntlFlightReShopCreateRequest::SelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightReShopCreateRequest& setSelectedPassengers(vector<IntlFlightReShopCreateRequest::SelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


    // totalReShopFee Field Functions 
    bool hasTotalReShopFee() const { return this->totalReShopFee_ != nullptr;};
    void deleteTotalReShopFee() { this->totalReShopFee_ = nullptr;};
    inline int64_t getTotalReShopFee() const { DARABONBA_PTR_GET_DEFAULT(totalReShopFee_, 0L) };
    inline IntlFlightReShopCreateRequest& setTotalReShopFee(int64_t totalReShopFee) { DARABONBA_PTR_SET_VALUE(totalReShopFee_, totalReShopFee) };


  protected:
    // The key for the asynchronous application.
    shared_ptr<string> asyncApplyKey_ {};
    // Specifies whether to use the asynchronous commit pattern. If asynchronous commit is used, only a key is returned before the application result is available.
    shared_ptr<bool> asyncApplyMode_ {};
    // The business travel order ID. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    // The ID of the rebooking product.
    // 
    // This parameter is required.
    shared_ptr<string> otaItemId_ {};
    // The external order ID.
    shared_ptr<string> outOrderId_ {};
    // The external rebooking application ID.
    shared_ptr<string> outReShopApplyId_ {};
    // The rebooking group key returned by the inquiry operation.
    // 
    // This parameter is required.
    shared_ptr<string> passengerJourneyGroupKey_ {};
    // The rebooking reason code.
    // 
    // This parameter is required.
    shared_ptr<string> reShopReasonCode_ {};
    // The list of passengers selected for rebooking.
    // 
    // This parameter is required.
    shared_ptr<vector<IntlFlightReShopCreateRequest::SelectedPassengers>> selectedPassengers_ {};
    // The total rebooking fee (excluding the service fee), in cents.
    //      * Total rebooking fee = cabin upgrade fee + handling fee + tax difference (applicable to international flights).
    //      * Pass in this parameter when fees are incurred to verify whether the price has changed.
    shared_ptr<int64_t> totalReShopFee_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
