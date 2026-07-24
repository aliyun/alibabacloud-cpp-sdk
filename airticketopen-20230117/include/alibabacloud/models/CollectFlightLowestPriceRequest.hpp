// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CollectFlightLowestPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectFlightLowestPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CollectFlightLowestPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoList_);
    };
    CollectFlightLowestPriceRequest() = default ;
    CollectFlightLowestPriceRequest(const CollectFlightLowestPriceRequest &) = default ;
    CollectFlightLowestPriceRequest(CollectFlightLowestPriceRequest &&) = default ;
    CollectFlightLowestPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectFlightLowestPriceRequest() = default ;
    CollectFlightLowestPriceRequest& operator=(const CollectFlightLowestPriceRequest &) = default ;
    CollectFlightLowestPriceRequest& operator=(CollectFlightLowestPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LowestPriceFlightInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LowestPriceFlightInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
        DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
        DARABONBA_PTR_TO_JSON(departure_flight_number, departureFlightNumber_);
        DARABONBA_PTR_TO_JSON(market_total_price, marketTotalPrice_);
        DARABONBA_PTR_TO_JSON(request_id, requestId_);
        DARABONBA_PTR_TO_JSON(return_date, returnDate_);
        DARABONBA_PTR_TO_JSON(return_flight_number, returnFlightNumber_);
        DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
        DARABONBA_PTR_TO_JSON(suez_total_price, suezTotalPrice_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      };
      friend void from_json(const Darabonba::Json& j, LowestPriceFlightInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
        DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
        DARABONBA_PTR_FROM_JSON(departure_flight_number, departureFlightNumber_);
        DARABONBA_PTR_FROM_JSON(market_total_price, marketTotalPrice_);
        DARABONBA_PTR_FROM_JSON(request_id, requestId_);
        DARABONBA_PTR_FROM_JSON(return_date, returnDate_);
        DARABONBA_PTR_FROM_JSON(return_flight_number, returnFlightNumber_);
        DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
        DARABONBA_PTR_FROM_JSON(suez_total_price, suezTotalPrice_);
        DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
      };
      LowestPriceFlightInfoList() = default ;
      LowestPriceFlightInfoList(const LowestPriceFlightInfoList &) = default ;
      LowestPriceFlightInfoList(LowestPriceFlightInfoList &&) = default ;
      LowestPriceFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LowestPriceFlightInfoList() = default ;
      LowestPriceFlightInfoList& operator=(const LowestPriceFlightInfoList &) = default ;
      LowestPriceFlightInfoList& operator=(LowestPriceFlightInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrivalCity_ == nullptr
        && this->departureCity_ == nullptr && this->departureDate_ == nullptr && this->departureFlightNumber_ == nullptr && this->marketTotalPrice_ == nullptr && this->requestId_ == nullptr
        && this->returnDate_ == nullptr && this->returnFlightNumber_ == nullptr && this->solutionId_ == nullptr && this->suezTotalPrice_ == nullptr && this->tripType_ == nullptr; };
      // arrivalCity Field Functions 
      bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
      void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
      inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
      inline LowestPriceFlightInfoList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


      // departureCity Field Functions 
      bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
      void deleteDepartureCity() { this->departureCity_ = nullptr;};
      inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
      inline LowestPriceFlightInfoList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


      // departureDate Field Functions 
      bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
      void deleteDepartureDate() { this->departureDate_ = nullptr;};
      inline string getDepartureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
      inline LowestPriceFlightInfoList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


      // departureFlightNumber Field Functions 
      bool hasDepartureFlightNumber() const { return this->departureFlightNumber_ != nullptr;};
      void deleteDepartureFlightNumber() { this->departureFlightNumber_ = nullptr;};
      inline string getDepartureFlightNumber() const { DARABONBA_PTR_GET_DEFAULT(departureFlightNumber_, "") };
      inline LowestPriceFlightInfoList& setDepartureFlightNumber(string departureFlightNumber) { DARABONBA_PTR_SET_VALUE(departureFlightNumber_, departureFlightNumber) };


      // marketTotalPrice Field Functions 
      bool hasMarketTotalPrice() const { return this->marketTotalPrice_ != nullptr;};
      void deleteMarketTotalPrice() { this->marketTotalPrice_ = nullptr;};
      inline double getMarketTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(marketTotalPrice_, 0.0) };
      inline LowestPriceFlightInfoList& setMarketTotalPrice(double marketTotalPrice) { DARABONBA_PTR_SET_VALUE(marketTotalPrice_, marketTotalPrice) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline LowestPriceFlightInfoList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // returnDate Field Functions 
      bool hasReturnDate() const { return this->returnDate_ != nullptr;};
      void deleteReturnDate() { this->returnDate_ = nullptr;};
      inline string getReturnDate() const { DARABONBA_PTR_GET_DEFAULT(returnDate_, "") };
      inline LowestPriceFlightInfoList& setReturnDate(string returnDate) { DARABONBA_PTR_SET_VALUE(returnDate_, returnDate) };


      // returnFlightNumber Field Functions 
      bool hasReturnFlightNumber() const { return this->returnFlightNumber_ != nullptr;};
      void deleteReturnFlightNumber() { this->returnFlightNumber_ = nullptr;};
      inline string getReturnFlightNumber() const { DARABONBA_PTR_GET_DEFAULT(returnFlightNumber_, "") };
      inline LowestPriceFlightInfoList& setReturnFlightNumber(string returnFlightNumber) { DARABONBA_PTR_SET_VALUE(returnFlightNumber_, returnFlightNumber) };


      // solutionId Field Functions 
      bool hasSolutionId() const { return this->solutionId_ != nullptr;};
      void deleteSolutionId() { this->solutionId_ = nullptr;};
      inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
      inline LowestPriceFlightInfoList& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


      // suezTotalPrice Field Functions 
      bool hasSuezTotalPrice() const { return this->suezTotalPrice_ != nullptr;};
      void deleteSuezTotalPrice() { this->suezTotalPrice_ = nullptr;};
      inline double getSuezTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(suezTotalPrice_, 0.0) };
      inline LowestPriceFlightInfoList& setSuezTotalPrice(double suezTotalPrice) { DARABONBA_PTR_SET_VALUE(suezTotalPrice_, suezTotalPrice) };


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline LowestPriceFlightInfoList& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    protected:
      // The arrival city.
      // 
      // This parameter is required.
      shared_ptr<string> arrivalCity_ {};
      // The departure city.
      // 
      // This parameter is required.
      shared_ptr<string> departureCity_ {};
      // The departure date. Format: yyyy-MM-dd.
      // 
      // This parameter is required.
      shared_ptr<string> departureDate_ {};
      // The list of outbound flight numbers. Multiple segments are split by commas (,).
      // 
      // This parameter is required.
      shared_ptr<string> departureFlightNumber_ {};
      // The lowest competitor price in the market, including fare and taxes. The currency is USD.
      // 
      // This parameter is required.
      shared_ptr<double> marketTotalPrice_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The return date for round-trip scenarios. Format: yyyy-MM-dd.
      shared_ptr<string> returnDate_ {};
      // The list of return flight numbers. Multiple segments are split by commas (,).
      shared_ptr<string> returnFlightNumber_ {};
      // The solution_id returned by Search/Enrich.
      // 
      // This parameter is required.
      shared_ptr<string> solutionId_ {};
      // The Suez quoted price, including fare and taxes. The currency is USD.
      // 
      // This parameter is required.
      shared_ptr<double> suezTotalPrice_ {};
      // The trip type. Valid values:
      // - 1: one-way
      // - 2: round-trip.
      // 
      // This parameter is required.
      shared_ptr<int32_t> tripType_ {};
    };

    virtual bool empty() const override { return this->lowestPriceFlightInfoList_ == nullptr; };
    // lowestPriceFlightInfoList Field Functions 
    bool hasLowestPriceFlightInfoList() const { return this->lowestPriceFlightInfoList_ != nullptr;};
    void deleteLowestPriceFlightInfoList() { this->lowestPriceFlightInfoList_ = nullptr;};
    inline const vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList> & getLowestPriceFlightInfoList() const { DARABONBA_PTR_GET_CONST(lowestPriceFlightInfoList_, vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList>) };
    inline vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList> getLowestPriceFlightInfoList() { DARABONBA_PTR_GET(lowestPriceFlightInfoList_, vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList>) };
    inline CollectFlightLowestPriceRequest& setLowestPriceFlightInfoList(const vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList> & lowestPriceFlightInfoList) { DARABONBA_PTR_SET_VALUE(lowestPriceFlightInfoList_, lowestPriceFlightInfoList) };
    inline CollectFlightLowestPriceRequest& setLowestPriceFlightInfoList(vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList> && lowestPriceFlightInfoList) { DARABONBA_PTR_SET_RVALUE(lowestPriceFlightInfoList_, lowestPriceFlightInfoList) };


  protected:
    // The lowest-price flight information.
    // 
    // This parameter is required.
    shared_ptr<vector<CollectFlightLowestPriceRequest::LowestPriceFlightInfoList>> lowestPriceFlightInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
