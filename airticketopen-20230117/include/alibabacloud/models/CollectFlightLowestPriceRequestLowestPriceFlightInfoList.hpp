// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUESTLOWESTPRICEFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUESTLOWESTPRICEFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CollectFlightLowestPriceRequestLowestPriceFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectFlightLowestPriceRequestLowestPriceFlightInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CollectFlightLowestPriceRequestLowestPriceFlightInfoList& obj) { 
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
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList() = default ;
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList(const CollectFlightLowestPriceRequestLowestPriceFlightInfoList &) = default ;
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList(CollectFlightLowestPriceRequestLowestPriceFlightInfoList &&) = default ;
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectFlightLowestPriceRequestLowestPriceFlightInfoList() = default ;
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList& operator=(const CollectFlightLowestPriceRequestLowestPriceFlightInfoList &) = default ;
    CollectFlightLowestPriceRequestLowestPriceFlightInfoList& operator=(CollectFlightLowestPriceRequestLowestPriceFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalCity_ == nullptr
        && return this->departureCity_ == nullptr && return this->departureDate_ == nullptr && return this->departureFlightNumber_ == nullptr && return this->marketTotalPrice_ == nullptr && return this->requestId_ == nullptr
        && return this->returnDate_ == nullptr && return this->returnFlightNumber_ == nullptr && return this->solutionId_ == nullptr && return this->suezTotalPrice_ == nullptr && return this->tripType_ == nullptr; };
    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureDate Field Functions 
    bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
    void deleteDepartureDate() { this->departureDate_ = nullptr;};
    inline string departureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


    // departureFlightNumber Field Functions 
    bool hasDepartureFlightNumber() const { return this->departureFlightNumber_ != nullptr;};
    void deleteDepartureFlightNumber() { this->departureFlightNumber_ = nullptr;};
    inline string departureFlightNumber() const { DARABONBA_PTR_GET_DEFAULT(departureFlightNumber_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setDepartureFlightNumber(string departureFlightNumber) { DARABONBA_PTR_SET_VALUE(departureFlightNumber_, departureFlightNumber) };


    // marketTotalPrice Field Functions 
    bool hasMarketTotalPrice() const { return this->marketTotalPrice_ != nullptr;};
    void deleteMarketTotalPrice() { this->marketTotalPrice_ = nullptr;};
    inline double marketTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(marketTotalPrice_, 0.0) };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setMarketTotalPrice(double marketTotalPrice) { DARABONBA_PTR_SET_VALUE(marketTotalPrice_, marketTotalPrice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // returnDate Field Functions 
    bool hasReturnDate() const { return this->returnDate_ != nullptr;};
    void deleteReturnDate() { this->returnDate_ = nullptr;};
    inline string returnDate() const { DARABONBA_PTR_GET_DEFAULT(returnDate_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setReturnDate(string returnDate) { DARABONBA_PTR_SET_VALUE(returnDate_, returnDate) };


    // returnFlightNumber Field Functions 
    bool hasReturnFlightNumber() const { return this->returnFlightNumber_ != nullptr;};
    void deleteReturnFlightNumber() { this->returnFlightNumber_ = nullptr;};
    inline string returnFlightNumber() const { DARABONBA_PTR_GET_DEFAULT(returnFlightNumber_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setReturnFlightNumber(string returnFlightNumber) { DARABONBA_PTR_SET_VALUE(returnFlightNumber_, returnFlightNumber) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // suezTotalPrice Field Functions 
    bool hasSuezTotalPrice() const { return this->suezTotalPrice_ != nullptr;};
    void deleteSuezTotalPrice() { this->suezTotalPrice_ = nullptr;};
    inline double suezTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(suezTotalPrice_, 0.0) };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setSuezTotalPrice(double suezTotalPrice) { DARABONBA_PTR_SET_VALUE(suezTotalPrice_, suezTotalPrice) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline CollectFlightLowestPriceRequestLowestPriceFlightInfoList& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureFlightNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> marketTotalPrice_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> returnDate_ = nullptr;
    std::shared_ptr<string> returnFlightNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> solutionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> suezTotalPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
