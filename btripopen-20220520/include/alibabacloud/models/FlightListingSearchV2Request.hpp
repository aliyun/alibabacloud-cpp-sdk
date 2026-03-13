// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2REQUEST_HPP_
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
  class FlightListingSearchV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(cabin_type_list, cabinTypeList_);
      DARABONBA_PTR_TO_JSON(direct_only, directOnly_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_TO_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_TO_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_TO_JSON(need_y_c_best_price, needYCBestPrice_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(cabin_type_list, cabinTypeList_);
      DARABONBA_PTR_FROM_JSON(direct_only, directOnly_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_FROM_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_FROM_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_FROM_JSON(need_y_c_best_price, needYCBestPrice_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightListingSearchV2Request() = default ;
    FlightListingSearchV2Request(const FlightListingSearchV2Request &) = default ;
    FlightListingSearchV2Request(FlightListingSearchV2Request &&) = default ;
    FlightListingSearchV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2Request() = default ;
    FlightListingSearchV2Request& operator=(const FlightListingSearchV2Request &) = default ;
    FlightListingSearchV2Request& operator=(FlightListingSearchV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> flightTime_ {};
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

    virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->cabinTypeList_ == nullptr && this->directOnly_ == nullptr && this->isvName_ == nullptr && this->needMultiClassPrice_ == nullptr && this->needQueryServiceFee_ == nullptr
        && this->needShareFlight_ == nullptr && this->needYCBestPrice_ == nullptr && this->searchJourneys_ == nullptr && this->searchMode_ == nullptr && this->tripType_ == nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightListingSearchV2Request& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // cabinTypeList Field Functions 
    bool hasCabinTypeList() const { return this->cabinTypeList_ != nullptr;};
    void deleteCabinTypeList() { this->cabinTypeList_ = nullptr;};
    inline const vector<int32_t> & getCabinTypeList() const { DARABONBA_PTR_GET_CONST(cabinTypeList_, vector<int32_t>) };
    inline vector<int32_t> getCabinTypeList() { DARABONBA_PTR_GET(cabinTypeList_, vector<int32_t>) };
    inline FlightListingSearchV2Request& setCabinTypeList(const vector<int32_t> & cabinTypeList) { DARABONBA_PTR_SET_VALUE(cabinTypeList_, cabinTypeList) };
    inline FlightListingSearchV2Request& setCabinTypeList(vector<int32_t> && cabinTypeList) { DARABONBA_PTR_SET_RVALUE(cabinTypeList_, cabinTypeList) };


    // directOnly Field Functions 
    bool hasDirectOnly() const { return this->directOnly_ != nullptr;};
    void deleteDirectOnly() { this->directOnly_ = nullptr;};
    inline bool getDirectOnly() const { DARABONBA_PTR_GET_DEFAULT(directOnly_, false) };
    inline FlightListingSearchV2Request& setDirectOnly(bool directOnly) { DARABONBA_PTR_SET_VALUE(directOnly_, directOnly) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightListingSearchV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // needMultiClassPrice Field Functions 
    bool hasNeedMultiClassPrice() const { return this->needMultiClassPrice_ != nullptr;};
    void deleteNeedMultiClassPrice() { this->needMultiClassPrice_ = nullptr;};
    inline bool getNeedMultiClassPrice() const { DARABONBA_PTR_GET_DEFAULT(needMultiClassPrice_, false) };
    inline FlightListingSearchV2Request& setNeedMultiClassPrice(bool needMultiClassPrice) { DARABONBA_PTR_SET_VALUE(needMultiClassPrice_, needMultiClassPrice) };


    // needQueryServiceFee Field Functions 
    bool hasNeedQueryServiceFee() const { return this->needQueryServiceFee_ != nullptr;};
    void deleteNeedQueryServiceFee() { this->needQueryServiceFee_ = nullptr;};
    inline bool getNeedQueryServiceFee() const { DARABONBA_PTR_GET_DEFAULT(needQueryServiceFee_, false) };
    inline FlightListingSearchV2Request& setNeedQueryServiceFee(bool needQueryServiceFee) { DARABONBA_PTR_SET_VALUE(needQueryServiceFee_, needQueryServiceFee) };


    // needShareFlight Field Functions 
    bool hasNeedShareFlight() const { return this->needShareFlight_ != nullptr;};
    void deleteNeedShareFlight() { this->needShareFlight_ = nullptr;};
    inline bool getNeedShareFlight() const { DARABONBA_PTR_GET_DEFAULT(needShareFlight_, false) };
    inline FlightListingSearchV2Request& setNeedShareFlight(bool needShareFlight) { DARABONBA_PTR_SET_VALUE(needShareFlight_, needShareFlight) };


    // needYCBestPrice Field Functions 
    bool hasNeedYCBestPrice() const { return this->needYCBestPrice_ != nullptr;};
    void deleteNeedYCBestPrice() { this->needYCBestPrice_ = nullptr;};
    inline bool getNeedYCBestPrice() const { DARABONBA_PTR_GET_DEFAULT(needYCBestPrice_, false) };
    inline FlightListingSearchV2Request& setNeedYCBestPrice(bool needYCBestPrice) { DARABONBA_PTR_SET_VALUE(needYCBestPrice_, needYCBestPrice) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<FlightListingSearchV2Request::SearchJourneys> & getSearchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<FlightListingSearchV2Request::SearchJourneys>) };
    inline vector<FlightListingSearchV2Request::SearchJourneys> getSearchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<FlightListingSearchV2Request::SearchJourneys>) };
    inline FlightListingSearchV2Request& setSearchJourneys(const vector<FlightListingSearchV2Request::SearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline FlightListingSearchV2Request& setSearchJourneys(vector<FlightListingSearchV2Request::SearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightListingSearchV2Request& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightListingSearchV2Request& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    shared_ptr<string> airlineCode_ {};
    shared_ptr<vector<int32_t>> cabinTypeList_ {};
    shared_ptr<bool> directOnly_ {};
    // This parameter is required.
    shared_ptr<string> isvName_ {};
    shared_ptr<bool> needMultiClassPrice_ {};
    shared_ptr<bool> needQueryServiceFee_ {};
    shared_ptr<bool> needShareFlight_ {};
    shared_ptr<bool> needYCBestPrice_ {};
    // This parameter is required.
    shared_ptr<vector<FlightListingSearchV2Request::SearchJourneys>> searchJourneys_ {};
    // This parameter is required.
    shared_ptr<int32_t> searchMode_ {};
    // This parameter is required.
    shared_ptr<int32_t> tripType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
