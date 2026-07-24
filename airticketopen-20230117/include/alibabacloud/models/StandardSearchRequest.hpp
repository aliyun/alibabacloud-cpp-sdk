// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHREQUEST_HPP_
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
  class StandardSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(air_legs, airLegs_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(search_control_options, searchControlOptions_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(air_legs, airLegs_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(search_control_options, searchControlOptions_);
    };
    StandardSearchRequest() = default ;
    StandardSearchRequest(const StandardSearchRequest &) = default ;
    StandardSearchRequest(StandardSearchRequest &&) = default ;
    StandardSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchRequest() = default ;
    StandardSearchRequest& operator=(const StandardSearchRequest &) = default ;
    StandardSearchRequest& operator=(StandardSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchControlOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchControlOptions& obj) { 
        DARABONBA_PTR_TO_JSON(airline_excluded_list, airlineExcludedList_);
        DARABONBA_PTR_TO_JSON(airline_prefer_list, airlinePreferList_);
        DARABONBA_PTR_TO_JSON(service_quality, serviceQuality_);
      };
      friend void from_json(const Darabonba::Json& j, SearchControlOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(airline_excluded_list, airlineExcludedList_);
        DARABONBA_PTR_FROM_JSON(airline_prefer_list, airlinePreferList_);
        DARABONBA_PTR_FROM_JSON(service_quality, serviceQuality_);
      };
      SearchControlOptions() = default ;
      SearchControlOptions(const SearchControlOptions &) = default ;
      SearchControlOptions(SearchControlOptions &&) = default ;
      SearchControlOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchControlOptions() = default ;
      SearchControlOptions& operator=(const SearchControlOptions &) = default ;
      SearchControlOptions& operator=(SearchControlOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->airlineExcludedList_ == nullptr
        && this->airlinePreferList_ == nullptr && this->serviceQuality_ == nullptr; };
      // airlineExcludedList Field Functions 
      bool hasAirlineExcludedList() const { return this->airlineExcludedList_ != nullptr;};
      void deleteAirlineExcludedList() { this->airlineExcludedList_ = nullptr;};
      inline const vector<string> & getAirlineExcludedList() const { DARABONBA_PTR_GET_CONST(airlineExcludedList_, vector<string>) };
      inline vector<string> getAirlineExcludedList() { DARABONBA_PTR_GET(airlineExcludedList_, vector<string>) };
      inline SearchControlOptions& setAirlineExcludedList(const vector<string> & airlineExcludedList) { DARABONBA_PTR_SET_VALUE(airlineExcludedList_, airlineExcludedList) };
      inline SearchControlOptions& setAirlineExcludedList(vector<string> && airlineExcludedList) { DARABONBA_PTR_SET_RVALUE(airlineExcludedList_, airlineExcludedList) };


      // airlinePreferList Field Functions 
      bool hasAirlinePreferList() const { return this->airlinePreferList_ != nullptr;};
      void deleteAirlinePreferList() { this->airlinePreferList_ = nullptr;};
      inline const vector<string> & getAirlinePreferList() const { DARABONBA_PTR_GET_CONST(airlinePreferList_, vector<string>) };
      inline vector<string> getAirlinePreferList() { DARABONBA_PTR_GET(airlinePreferList_, vector<string>) };
      inline SearchControlOptions& setAirlinePreferList(const vector<string> & airlinePreferList) { DARABONBA_PTR_SET_VALUE(airlinePreferList_, airlinePreferList) };
      inline SearchControlOptions& setAirlinePreferList(vector<string> && airlinePreferList) { DARABONBA_PTR_SET_RVALUE(airlinePreferList_, airlinePreferList) };


      // serviceQuality Field Functions 
      bool hasServiceQuality() const { return this->serviceQuality_ != nullptr;};
      void deleteServiceQuality() { this->serviceQuality_ = nullptr;};
      inline string getServiceQuality() const { DARABONBA_PTR_GET_DEFAULT(serviceQuality_, "") };
      inline SearchControlOptions& setServiceQuality(string serviceQuality) { DARABONBA_PTR_SET_VALUE(serviceQuality_, serviceQuality) };


    protected:
      // Excluded airlines list
      shared_ptr<vector<string>> airlineExcludedList_ {};
      // Preferred airlines list
      shared_ptr<vector<string>> airlinePreferList_ {};
      // Ticketing service quality
      shared_ptr<string> serviceQuality_ {};
    };

    class AirLegs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AirLegs& obj) { 
        DARABONBA_PTR_TO_JSON(arrival_airport_list, arrivalAirportList_);
        DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_TO_JSON(departure_airport_list, departureAirportList_);
        DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
        DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
      };
      friend void from_json(const Darabonba::Json& j, AirLegs& obj) { 
        DARABONBA_PTR_FROM_JSON(arrival_airport_list, arrivalAirportList_);
        DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_FROM_JSON(departure_airport_list, departureAirportList_);
        DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
        DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
      };
      AirLegs() = default ;
      AirLegs(const AirLegs &) = default ;
      AirLegs(AirLegs &&) = default ;
      AirLegs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AirLegs() = default ;
      AirLegs& operator=(const AirLegs &) = default ;
      AirLegs& operator=(AirLegs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrivalAirportList_ == nullptr
        && this->arrivalCity_ == nullptr && this->departureAirportList_ == nullptr && this->departureCity_ == nullptr && this->departureDate_ == nullptr; };
      // arrivalAirportList Field Functions 
      bool hasArrivalAirportList() const { return this->arrivalAirportList_ != nullptr;};
      void deleteArrivalAirportList() { this->arrivalAirportList_ = nullptr;};
      inline const vector<string> & getArrivalAirportList() const { DARABONBA_PTR_GET_CONST(arrivalAirportList_, vector<string>) };
      inline vector<string> getArrivalAirportList() { DARABONBA_PTR_GET(arrivalAirportList_, vector<string>) };
      inline AirLegs& setArrivalAirportList(const vector<string> & arrivalAirportList) { DARABONBA_PTR_SET_VALUE(arrivalAirportList_, arrivalAirportList) };
      inline AirLegs& setArrivalAirportList(vector<string> && arrivalAirportList) { DARABONBA_PTR_SET_RVALUE(arrivalAirportList_, arrivalAirportList) };


      // arrivalCity Field Functions 
      bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
      void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
      inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
      inline AirLegs& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


      // departureAirportList Field Functions 
      bool hasDepartureAirportList() const { return this->departureAirportList_ != nullptr;};
      void deleteDepartureAirportList() { this->departureAirportList_ = nullptr;};
      inline const vector<string> & getDepartureAirportList() const { DARABONBA_PTR_GET_CONST(departureAirportList_, vector<string>) };
      inline vector<string> getDepartureAirportList() { DARABONBA_PTR_GET(departureAirportList_, vector<string>) };
      inline AirLegs& setDepartureAirportList(const vector<string> & departureAirportList) { DARABONBA_PTR_SET_VALUE(departureAirportList_, departureAirportList) };
      inline AirLegs& setDepartureAirportList(vector<string> && departureAirportList) { DARABONBA_PTR_SET_RVALUE(departureAirportList_, departureAirportList) };


      // departureCity Field Functions 
      bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
      void deleteDepartureCity() { this->departureCity_ = nullptr;};
      inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
      inline AirLegs& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


      // departureDate Field Functions 
      bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
      void deleteDepartureDate() { this->departureDate_ = nullptr;};
      inline string getDepartureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
      inline AirLegs& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


    protected:
      // Arrival airport three-letter code
      shared_ptr<vector<string>> arrivalAirportList_ {};
      // Arrival city three-letter code
      shared_ptr<string> arrivalCity_ {};
      // Departure airport three-letter code
      shared_ptr<vector<string>> departureAirportList_ {};
      // Departure city three-letter code
      shared_ptr<string> departureCity_ {};
      // Departure date (e.g.: yyyyMMdd)
      // 
      // This parameter is required.
      shared_ptr<string> departureDate_ {};
    };

    virtual bool empty() const override { return this->adults_ == nullptr
        && this->airLegs_ == nullptr && this->cabinClass_ == nullptr && this->children_ == nullptr && this->infants_ == nullptr && this->searchControlOptions_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t getAdults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline StandardSearchRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegs Field Functions 
    bool hasAirLegs() const { return this->airLegs_ != nullptr;};
    void deleteAirLegs() { this->airLegs_ = nullptr;};
    inline const vector<StandardSearchRequest::AirLegs> & getAirLegs() const { DARABONBA_PTR_GET_CONST(airLegs_, vector<StandardSearchRequest::AirLegs>) };
    inline vector<StandardSearchRequest::AirLegs> getAirLegs() { DARABONBA_PTR_GET(airLegs_, vector<StandardSearchRequest::AirLegs>) };
    inline StandardSearchRequest& setAirLegs(const vector<StandardSearchRequest::AirLegs> & airLegs) { DARABONBA_PTR_SET_VALUE(airLegs_, airLegs) };
    inline StandardSearchRequest& setAirLegs(vector<StandardSearchRequest::AirLegs> && airLegs) { DARABONBA_PTR_SET_RVALUE(airLegs_, airLegs) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline StandardSearchRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline StandardSearchRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t getInfants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline StandardSearchRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptions Field Functions 
    bool hasSearchControlOptions() const { return this->searchControlOptions_ != nullptr;};
    void deleteSearchControlOptions() { this->searchControlOptions_ = nullptr;};
    inline const StandardSearchRequest::SearchControlOptions & getSearchControlOptions() const { DARABONBA_PTR_GET_CONST(searchControlOptions_, StandardSearchRequest::SearchControlOptions) };
    inline StandardSearchRequest::SearchControlOptions getSearchControlOptions() { DARABONBA_PTR_GET(searchControlOptions_, StandardSearchRequest::SearchControlOptions) };
    inline StandardSearchRequest& setSearchControlOptions(const StandardSearchRequest::SearchControlOptions & searchControlOptions) { DARABONBA_PTR_SET_VALUE(searchControlOptions_, searchControlOptions) };
    inline StandardSearchRequest& setSearchControlOptions(StandardSearchRequest::SearchControlOptions && searchControlOptions) { DARABONBA_PTR_SET_RVALUE(searchControlOptions_, searchControlOptions) };


  protected:
    // Number of adult passengers, range 1-9
    shared_ptr<int32_t> adults_ {};
    // Journey array. At least one of departure_city and departure_airport_list must be non-empty; when departure_airport_list has values, they must belong to the same city. At least one of arrival_city and arrival_airport_list must be non-empty; when arrival_airport_list has values, they must belong to the same city.
    // 
    // This parameter is required.
    shared_ptr<vector<StandardSearchRequest::AirLegs>> airLegs_ {};
    // Defaults to ALL_CABIN if not specified. Cabin class ALL_CABIN: All cabin classes; Y: Economy class; FC: First class and Business class; S: Premium Economy class; YS: Economy class and Premium Economy class; YSC: Economy class, Premium Economy class, and Business class;
    shared_ptr<string> cabinClass_ {};
    // Number of child passengers, range 0-9
    shared_ptr<int32_t> children_ {};
    // Number of infant passengers, range 0-9
    shared_ptr<int32_t> infants_ {};
    // Search control options, optional
    shared_ptr<StandardSearchRequest::SearchControlOptions> searchControlOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
