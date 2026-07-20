// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPLISTSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPLISTSEARCHREQUEST_HPP_
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
  class IntlFlightReShopListSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopListSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopListSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengers_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    IntlFlightReShopListSearchRequest() = default ;
    IntlFlightReShopListSearchRequest(const IntlFlightReShopListSearchRequest &) = default ;
    IntlFlightReShopListSearchRequest(IntlFlightReShopListSearchRequest &&) = default ;
    IntlFlightReShopListSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopListSearchRequest() = default ;
    IntlFlightReShopListSearchRequest& operator=(const IntlFlightReShopListSearchRequest &) = default ;
    IntlFlightReShopListSearchRequest& operator=(IntlFlightReShopListSearchRequest &&) = default ;
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
      // The passenger ID.
      shared_ptr<int64_t> passengerId_ {};
    };

    class SearchJourneys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchJourneys& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_TO_JSON(dep_date, depDate_);
        DARABONBA_PTR_TO_JSON(selected_flights, selectedFlights_);
      };
      friend void from_json(const Darabonba::Json& j, SearchJourneys& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
        DARABONBA_PTR_FROM_JSON(selected_flights, selectedFlights_);
      };
      SearchJourneys() = default ;
      SearchJourneys(const SearchJourneys &) = default ;
      SearchJourneys(SearchJourneys &&) = default ;
      SearchJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchJourneys() = default ;
      SearchJourneys& operator=(const SearchJourneys &) = default ;
      SearchJourneys& operator=(SearchJourneys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SelectedFlights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SelectedFlights& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(flight_time, flightTime_);
          DARABONBA_PTR_TO_JSON(market_flight_no, marketFlightNo_);
        };
        friend void from_json(const Darabonba::Json& j, SelectedFlights& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(flight_time, flightTime_);
          DARABONBA_PTR_FROM_JSON(market_flight_no, marketFlightNo_);
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
        && this->depCityCode_ == nullptr && this->flightTime_ == nullptr && this->marketFlightNo_ == nullptr; };
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


        // flightTime Field Functions 
        bool hasFlightTime() const { return this->flightTime_ != nullptr;};
        void deleteFlightTime() { this->flightTime_ = nullptr;};
        inline string getFlightTime() const { DARABONBA_PTR_GET_DEFAULT(flightTime_, "") };
        inline SelectedFlights& setFlightTime(string flightTime) { DARABONBA_PTR_SET_VALUE(flightTime_, flightTime) };


        // marketFlightNo Field Functions 
        bool hasMarketFlightNo() const { return this->marketFlightNo_ != nullptr;};
        void deleteMarketFlightNo() { this->marketFlightNo_ = nullptr;};
        inline string getMarketFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketFlightNo_, "") };
        inline SelectedFlights& setMarketFlightNo(string marketFlightNo) { DARABONBA_PTR_SET_VALUE(marketFlightNo_, marketFlightNo) };


      protected:
        // The three-letter code of the arrival city.
        shared_ptr<string> arrCityCode_ {};
        // The three-letter code of the departure city.
        shared_ptr<string> depCityCode_ {};
        // The departure time. Format: yyyy-MM-dd HH:mm.
        shared_ptr<string> flightTime_ {};
        // The marketing carrier flight number.
        shared_ptr<string> marketFlightNo_ {};
      };

      virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->selectedFlights_ == nullptr; };
      // arrCityCode Field Functions 
      bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
      void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
      inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
      inline SearchJourneys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


      // depCityCode Field Functions 
      bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
      void deleteDepCityCode() { this->depCityCode_ = nullptr;};
      inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
      inline SearchJourneys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


      // depDate Field Functions 
      bool hasDepDate() const { return this->depDate_ != nullptr;};
      void deleteDepDate() { this->depDate_ = nullptr;};
      inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
      inline SearchJourneys& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


      // selectedFlights Field Functions 
      bool hasSelectedFlights() const { return this->selectedFlights_ != nullptr;};
      void deleteSelectedFlights() { this->selectedFlights_ = nullptr;};
      inline const vector<SearchJourneys::SelectedFlights> & getSelectedFlights() const { DARABONBA_PTR_GET_CONST(selectedFlights_, vector<SearchJourneys::SelectedFlights>) };
      inline vector<SearchJourneys::SelectedFlights> getSelectedFlights() { DARABONBA_PTR_GET(selectedFlights_, vector<SearchJourneys::SelectedFlights>) };
      inline SearchJourneys& setSelectedFlights(const vector<SearchJourneys::SelectedFlights> & selectedFlights) { DARABONBA_PTR_SET_VALUE(selectedFlights_, selectedFlights) };
      inline SearchJourneys& setSelectedFlights(vector<SearchJourneys::SelectedFlights> && selectedFlights) { DARABONBA_PTR_SET_RVALUE(selectedFlights_, selectedFlights) };


    protected:
      // The three-letter code of the arrival city.
      shared_ptr<string> arrCityCode_ {};
      // The three-letter code of the departure city.
      shared_ptr<string> depCityCode_ {};
      // The preferred date selected by the user. Format: yyyy-MM-dd.
      shared_ptr<string> depDate_ {};
      // The selected flight information for rebooking.
      shared_ptr<vector<SearchJourneys::SelectedFlights>> selectedFlights_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outWheelSearch_ == nullptr && this->passengerJourneyGroupKey_ == nullptr && this->reShopReasonCode_ == nullptr && this->searchJourneys_ == nullptr
        && this->selectedPassengers_ == nullptr && this->token_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopListSearchRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopListSearchRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outWheelSearch Field Functions 
    bool hasOutWheelSearch() const { return this->outWheelSearch_ != nullptr;};
    void deleteOutWheelSearch() { this->outWheelSearch_ = nullptr;};
    inline bool getOutWheelSearch() const { DARABONBA_PTR_GET_DEFAULT(outWheelSearch_, false) };
    inline IntlFlightReShopListSearchRequest& setOutWheelSearch(bool outWheelSearch) { DARABONBA_PTR_SET_VALUE(outWheelSearch_, outWheelSearch) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopListSearchRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string getReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopListSearchRequest& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<IntlFlightReShopListSearchRequest::SearchJourneys> & getSearchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<IntlFlightReShopListSearchRequest::SearchJourneys>) };
    inline vector<IntlFlightReShopListSearchRequest::SearchJourneys> getSearchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<IntlFlightReShopListSearchRequest::SearchJourneys>) };
    inline IntlFlightReShopListSearchRequest& setSearchJourneys(const vector<IntlFlightReShopListSearchRequest::SearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline IntlFlightReShopListSearchRequest& setSearchJourneys(vector<IntlFlightReShopListSearchRequest::SearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightReShopListSearchRequest::SelectedPassengers> & getSelectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightReShopListSearchRequest::SelectedPassengers>) };
    inline vector<IntlFlightReShopListSearchRequest::SelectedPassengers> getSelectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightReShopListSearchRequest::SelectedPassengers>) };
    inline IntlFlightReShopListSearchRequest& setSelectedPassengers(const vector<IntlFlightReShopListSearchRequest::SelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightReShopListSearchRequest& setSelectedPassengers(vector<IntlFlightReShopListSearchRequest::SelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightReShopListSearchRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The business travel order ID. Required.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    // The external order ID.
    shared_ptr<string> outOrderId_ {};
    // Specifies whether external polling is enabled. When enabled, the external frontend controls polling to reduce the response time of a single search. Default value: false.
    shared_ptr<bool> outWheelSearch_ {};
    // The rebooking group key returned by the consultation API.
    // 
    // This parameter is required.
    shared_ptr<string> passengerJourneyGroupKey_ {};
    // The rebooking reason code.
    shared_ptr<string> reShopReasonCode_ {};
    // The list of journeys selected for rebooking.
    // 
    // This parameter is required.
    shared_ptr<vector<IntlFlightReShopListSearchRequest::SearchJourneys>> searchJourneys_ {};
    // The list of passengers selected for rebooking.
    // 
    // This parameter is required.
    shared_ptr<vector<IntlFlightReShopListSearchRequest::SelectedPassengers>> selectedPassengers_ {};
    // The query record token for external polling.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
