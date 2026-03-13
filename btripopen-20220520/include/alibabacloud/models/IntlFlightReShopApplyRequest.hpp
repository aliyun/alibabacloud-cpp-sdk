// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUEST_HPP_
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
      shared_ptr<string> fullName_ {};
      // This parameter is required.
      shared_ptr<int64_t> passengerId_ {};
    };

    class SelectedJourneys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedJourneys& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_TO_JSON(intent_date, intentDate_);
        DARABONBA_PTR_TO_JSON(selected_flights, selectedFlights_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedJourneys& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_FROM_JSON(intent_date, intentDate_);
        DARABONBA_PTR_FROM_JSON(selected_flights, selectedFlights_);
      };
      SelectedJourneys() = default ;
      SelectedJourneys(const SelectedJourneys &) = default ;
      SelectedJourneys(SelectedJourneys &&) = default ;
      SelectedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedJourneys() = default ;
      SelectedJourneys& operator=(const SelectedJourneys &) = default ;
      SelectedJourneys& operator=(SelectedJourneys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SelectedFlights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SelectedFlights& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
        };
        friend void from_json(const Darabonba::Json& j, SelectedFlights& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
        };
        SelectedFlights() = default ;
        SelectedFlights(const SelectedFlights &) = default ;
        SelectedFlights(SelectedFlights &&) = default ;
        SelectedFlights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SelectedFlights() = default ;
        SelectedFlights& operator=(const SelectedFlights &) = default ;
        SelectedFlights& operator=(SelectedFlights &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->depCityCode_ == nullptr && this->segmentKey_ == nullptr; };
        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline SelectedFlights& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline SelectedFlights& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // segmentKey Field Functions 
        bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
        void deleteSegmentKey() { this->segmentKey_ = nullptr;};
        inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
        inline SelectedFlights& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


      protected:
        // This parameter is required.
        shared_ptr<string> arrCityCode_ {};
        // This parameter is required.
        shared_ptr<string> depCityCode_ {};
        // This parameter is required.
        shared_ptr<string> segmentKey_ {};
      };

      virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->depCityCode_ == nullptr && this->intentDate_ == nullptr && this->selectedFlights_ == nullptr; };
      // arrCityCode Field Functions 
      bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
      void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
      inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
      inline SelectedJourneys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


      // depCityCode Field Functions 
      bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
      void deleteDepCityCode() { this->depCityCode_ = nullptr;};
      inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
      inline SelectedJourneys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


      // intentDate Field Functions 
      bool hasIntentDate() const { return this->intentDate_ != nullptr;};
      void deleteIntentDate() { this->intentDate_ = nullptr;};
      inline string getIntentDate() const { DARABONBA_PTR_GET_DEFAULT(intentDate_, "") };
      inline SelectedJourneys& setIntentDate(string intentDate) { DARABONBA_PTR_SET_VALUE(intentDate_, intentDate) };


      // selectedFlights Field Functions 
      bool hasSelectedFlights() const { return this->selectedFlights_ != nullptr;};
      void deleteSelectedFlights() { this->selectedFlights_ = nullptr;};
      inline const vector<SelectedJourneys::SelectedFlights> & getSelectedFlights() const { DARABONBA_PTR_GET_CONST(selectedFlights_, vector<SelectedJourneys::SelectedFlights>) };
      inline vector<SelectedJourneys::SelectedFlights> getSelectedFlights() { DARABONBA_PTR_GET(selectedFlights_, vector<SelectedJourneys::SelectedFlights>) };
      inline SelectedJourneys& setSelectedFlights(const vector<SelectedJourneys::SelectedFlights> & selectedFlights) { DARABONBA_PTR_SET_VALUE(selectedFlights_, selectedFlights) };
      inline SelectedJourneys& setSelectedFlights(vector<SelectedJourneys::SelectedFlights> && selectedFlights) { DARABONBA_PTR_SET_RVALUE(selectedFlights_, selectedFlights) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrCityCode_ {};
      // This parameter is required.
      shared_ptr<string> depCityCode_ {};
      // This parameter is required.
      shared_ptr<string> intentDate_ {};
      // This parameter is required.
      shared_ptr<vector<SelectedJourneys::SelectedFlights>> selectedFlights_ {};
    };

    virtual bool empty() const override { return this->asyncApplyKey_ == nullptr
        && this->asyncApplyMode_ == nullptr && this->orderId_ == nullptr && this->outOrderId_ == nullptr && this->outReShopApplyId_ == nullptr && this->passengerJourneyGroupKey_ == nullptr
        && this->reShopReasonCode_ == nullptr && this->selectedJourneys_ == nullptr && this->selectedPassengers_ == nullptr && this->userIntentionMemo_ == nullptr; };
    // asyncApplyKey Field Functions 
    bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
    void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
    inline string getAsyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
    inline IntlFlightReShopApplyRequest& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


    // asyncApplyMode Field Functions 
    bool hasAsyncApplyMode() const { return this->asyncApplyMode_ != nullptr;};
    void deleteAsyncApplyMode() { this->asyncApplyMode_ = nullptr;};
    inline bool getAsyncApplyMode() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyMode_, false) };
    inline IntlFlightReShopApplyRequest& setAsyncApplyMode(bool asyncApplyMode) { DARABONBA_PTR_SET_VALUE(asyncApplyMode_, asyncApplyMode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopApplyRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopApplyRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string getOutReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopApplyRequest& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopApplyRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string getReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopApplyRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // selectedJourneys Field Functions 
    bool hasSelectedJourneys() const { return this->selectedJourneys_ != nullptr;};
    void deleteSelectedJourneys() { this->selectedJourneys_ = nullptr;};
    inline const vector<IntlFlightReShopApplyRequest::SelectedJourneys> & getSelectedJourneys() const { DARABONBA_PTR_GET_CONST(selectedJourneys_, vector<IntlFlightReShopApplyRequest::SelectedJourneys>) };
    inline vector<IntlFlightReShopApplyRequest::SelectedJourneys> getSelectedJourneys() { DARABONBA_PTR_GET(selectedJourneys_, vector<IntlFlightReShopApplyRequest::SelectedJourneys>) };
    inline IntlFlightReShopApplyRequest& setSelectedJourneys(const vector<IntlFlightReShopApplyRequest::SelectedJourneys> & selectedJourneys) { DARABONBA_PTR_SET_VALUE(selectedJourneys_, selectedJourneys) };
    inline IntlFlightReShopApplyRequest& setSelectedJourneys(vector<IntlFlightReShopApplyRequest::SelectedJourneys> && selectedJourneys) { DARABONBA_PTR_SET_RVALUE(selectedJourneys_, selectedJourneys) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightReShopApplyRequest::SelectedPassengers> & getSelectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightReShopApplyRequest::SelectedPassengers>) };
    inline vector<IntlFlightReShopApplyRequest::SelectedPassengers> getSelectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightReShopApplyRequest::SelectedPassengers>) };
    inline IntlFlightReShopApplyRequest& setSelectedPassengers(const vector<IntlFlightReShopApplyRequest::SelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightReShopApplyRequest& setSelectedPassengers(vector<IntlFlightReShopApplyRequest::SelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


    // userIntentionMemo Field Functions 
    bool hasUserIntentionMemo() const { return this->userIntentionMemo_ != nullptr;};
    void deleteUserIntentionMemo() { this->userIntentionMemo_ = nullptr;};
    inline string getUserIntentionMemo() const { DARABONBA_PTR_GET_DEFAULT(userIntentionMemo_, "") };
    inline IntlFlightReShopApplyRequest& setUserIntentionMemo(string userIntentionMemo) { DARABONBA_PTR_SET_VALUE(userIntentionMemo_, userIntentionMemo) };


  protected:
    shared_ptr<string> asyncApplyKey_ {};
    shared_ptr<bool> asyncApplyMode_ {};
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<string> outReShopApplyId_ {};
    // This parameter is required.
    shared_ptr<string> passengerJourneyGroupKey_ {};
    // This parameter is required.
    shared_ptr<string> reShopReasonCode_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightReShopApplyRequest::SelectedJourneys>> selectedJourneys_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightReShopApplyRequest::SelectedPassengers>> selectedPassengers_ {};
    shared_ptr<string> userIntentionMemo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
