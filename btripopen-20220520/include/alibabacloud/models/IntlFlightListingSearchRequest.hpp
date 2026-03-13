// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUEST_HPP_
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
  class IntlFlightListingSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_TO_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_FROM_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightListingSearchRequest() = default ;
    IntlFlightListingSearchRequest(const IntlFlightListingSearchRequest &) = default ;
    IntlFlightListingSearchRequest(IntlFlightListingSearchRequest &&) = default ;
    IntlFlightListingSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchRequest() = default ;
    IntlFlightListingSearchRequest& operator=(const IntlFlightListingSearchRequest &) = default ;
    IntlFlightListingSearchRequest& operator=(IntlFlightListingSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchPassengerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchPassengerList& obj) { 
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(full_name, fullName_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SearchPassengerList& obj) { 
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(full_name, fullName_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      SearchPassengerList() = default ;
      SearchPassengerList(const SearchPassengerList &) = default ;
      SearchPassengerList(SearchPassengerList &&) = default ;
      SearchPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchPassengerList() = default ;
      SearchPassengerList& operator=(const SearchPassengerList &) = default ;
      SearchPassengerList& operator=(SearchPassengerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certType_ == nullptr && this->fullName_ == nullptr && this->type_ == nullptr; };
      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline SearchPassengerList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
      inline SearchPassengerList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline SearchPassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline SearchPassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> certNo_ {};
      // This parameter is required.
      shared_ptr<int32_t> certType_ {};
      // This parameter is required.
      shared_ptr<string> fullName_ {};
      // This parameter is required.
      shared_ptr<int32_t> type_ {};
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
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(flight_time, flightTime_);
          DARABONBA_PTR_TO_JSON(market_flight_no, marketFlightNo_);
          DARABONBA_PTR_TO_JSON(operate_flight_no, operateFlightNo_);
        };
        friend void from_json(const Darabonba::Json& j, SelectedFlights& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(flight_time, flightTime_);
          DARABONBA_PTR_FROM_JSON(market_flight_no, marketFlightNo_);
          DARABONBA_PTR_FROM_JSON(operate_flight_no, operateFlightNo_);
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
        virtual bool empty() const override { return this->arrAirportCode_ == nullptr
        && this->arrCityCode_ == nullptr && this->depAirportCode_ == nullptr && this->depCityCode_ == nullptr && this->flightTime_ == nullptr && this->marketFlightNo_ == nullptr
        && this->operateFlightNo_ == nullptr; };
        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline SelectedFlights& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline SelectedFlights& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline SelectedFlights& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


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


        // operateFlightNo Field Functions 
        bool hasOperateFlightNo() const { return this->operateFlightNo_ != nullptr;};
        void deleteOperateFlightNo() { this->operateFlightNo_ = nullptr;};
        inline string getOperateFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operateFlightNo_, "") };
        inline SelectedFlights& setOperateFlightNo(string operateFlightNo) { DARABONBA_PTR_SET_VALUE(operateFlightNo_, operateFlightNo) };


      protected:
        shared_ptr<string> arrAirportCode_ {};
        // This parameter is required.
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> depAirportCode_ {};
        // This parameter is required.
        shared_ptr<string> depCityCode_ {};
        // This parameter is required.
        shared_ptr<string> flightTime_ {};
        // This parameter is required.
        shared_ptr<string> marketFlightNo_ {};
        shared_ptr<string> operateFlightNo_ {};
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
      // This parameter is required.
      shared_ptr<string> arrCityCode_ {};
      // This parameter is required.
      shared_ptr<string> depCityCode_ {};
      // This parameter is required.
      shared_ptr<string> depDate_ {};
      shared_ptr<vector<SearchJourneys::SelectedFlights>> selectedFlights_ {};
    };

    virtual bool empty() const override { return this->btripUserId_ == nullptr
        && this->buyerName_ == nullptr && this->cabinType_ == nullptr && this->isvName_ == nullptr && this->outWheelSearch_ == nullptr && this->queryRecordId_ == nullptr
        && this->searchJourneys_ == nullptr && this->searchMode_ == nullptr && this->searchPassengerList_ == nullptr && this->token_ == nullptr && this->tripType_ == nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightListingSearchRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightListingSearchRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // cabinType Field Functions 
    bool hasCabinType() const { return this->cabinType_ != nullptr;};
    void deleteCabinType() { this->cabinType_ = nullptr;};
    inline int32_t getCabinType() const { DARABONBA_PTR_GET_DEFAULT(cabinType_, 0) };
    inline IntlFlightListingSearchRequest& setCabinType(int32_t cabinType) { DARABONBA_PTR_SET_VALUE(cabinType_, cabinType) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightListingSearchRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outWheelSearch Field Functions 
    bool hasOutWheelSearch() const { return this->outWheelSearch_ != nullptr;};
    void deleteOutWheelSearch() { this->outWheelSearch_ = nullptr;};
    inline bool getOutWheelSearch() const { DARABONBA_PTR_GET_DEFAULT(outWheelSearch_, false) };
    inline IntlFlightListingSearchRequest& setOutWheelSearch(bool outWheelSearch) { DARABONBA_PTR_SET_VALUE(outWheelSearch_, outWheelSearch) };


    // queryRecordId Field Functions 
    bool hasQueryRecordId() const { return this->queryRecordId_ != nullptr;};
    void deleteQueryRecordId() { this->queryRecordId_ = nullptr;};
    inline string getQueryRecordId() const { DARABONBA_PTR_GET_DEFAULT(queryRecordId_, "") };
    inline IntlFlightListingSearchRequest& setQueryRecordId(string queryRecordId) { DARABONBA_PTR_SET_VALUE(queryRecordId_, queryRecordId) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<IntlFlightListingSearchRequest::SearchJourneys> & getSearchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<IntlFlightListingSearchRequest::SearchJourneys>) };
    inline vector<IntlFlightListingSearchRequest::SearchJourneys> getSearchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<IntlFlightListingSearchRequest::SearchJourneys>) };
    inline IntlFlightListingSearchRequest& setSearchJourneys(const vector<IntlFlightListingSearchRequest::SearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline IntlFlightListingSearchRequest& setSearchJourneys(vector<IntlFlightListingSearchRequest::SearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline IntlFlightListingSearchRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // searchPassengerList Field Functions 
    bool hasSearchPassengerList() const { return this->searchPassengerList_ != nullptr;};
    void deleteSearchPassengerList() { this->searchPassengerList_ = nullptr;};
    inline const vector<IntlFlightListingSearchRequest::SearchPassengerList> & getSearchPassengerList() const { DARABONBA_PTR_GET_CONST(searchPassengerList_, vector<IntlFlightListingSearchRequest::SearchPassengerList>) };
    inline vector<IntlFlightListingSearchRequest::SearchPassengerList> getSearchPassengerList() { DARABONBA_PTR_GET(searchPassengerList_, vector<IntlFlightListingSearchRequest::SearchPassengerList>) };
    inline IntlFlightListingSearchRequest& setSearchPassengerList(const vector<IntlFlightListingSearchRequest::SearchPassengerList> & searchPassengerList) { DARABONBA_PTR_SET_VALUE(searchPassengerList_, searchPassengerList) };
    inline IntlFlightListingSearchRequest& setSearchPassengerList(vector<IntlFlightListingSearchRequest::SearchPassengerList> && searchPassengerList) { DARABONBA_PTR_SET_RVALUE(searchPassengerList_, searchPassengerList) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightListingSearchRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightListingSearchRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    shared_ptr<string> btripUserId_ {};
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<int32_t> cabinType_ {};
    // This parameter is required.
    shared_ptr<string> isvName_ {};
    // This parameter is required.
    shared_ptr<bool> outWheelSearch_ {};
    shared_ptr<string> queryRecordId_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightListingSearchRequest::SearchJourneys>> searchJourneys_ {};
    // This parameter is required.
    shared_ptr<int32_t> searchMode_ {};
    shared_ptr<vector<IntlFlightListingSearchRequest::SearchPassengerList>> searchPassengerList_ {};
    shared_ptr<string> token_ {};
    // This parameter is required.
    shared_ptr<int32_t> tripType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
