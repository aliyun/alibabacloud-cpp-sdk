// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHREQUESTAIRLEGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHREQUESTAIRLEGS_HPP_
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
  class SearchRequestAirLegs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRequestAirLegs& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport_list, arrivalAirportList_);
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(departure_airport_list, departureAirportList_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
      DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRequestAirLegs& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport_list, arrivalAirportList_);
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(departure_airport_list, departureAirportList_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
      DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
    };
    SearchRequestAirLegs() = default ;
    SearchRequestAirLegs(const SearchRequestAirLegs &) = default ;
    SearchRequestAirLegs(SearchRequestAirLegs &&) = default ;
    SearchRequestAirLegs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRequestAirLegs() = default ;
    SearchRequestAirLegs& operator=(const SearchRequestAirLegs &) = default ;
    SearchRequestAirLegs& operator=(SearchRequestAirLegs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirportList_ == nullptr
        && return this->arrivalCity_ == nullptr && return this->departureAirportList_ == nullptr && return this->departureCity_ == nullptr && return this->departureDate_ == nullptr; };
    // arrivalAirportList Field Functions 
    bool hasArrivalAirportList() const { return this->arrivalAirportList_ != nullptr;};
    void deleteArrivalAirportList() { this->arrivalAirportList_ = nullptr;};
    inline const vector<string> & arrivalAirportList() const { DARABONBA_PTR_GET_CONST(arrivalAirportList_, vector<string>) };
    inline vector<string> arrivalAirportList() { DARABONBA_PTR_GET(arrivalAirportList_, vector<string>) };
    inline SearchRequestAirLegs& setArrivalAirportList(const vector<string> & arrivalAirportList) { DARABONBA_PTR_SET_VALUE(arrivalAirportList_, arrivalAirportList) };
    inline SearchRequestAirLegs& setArrivalAirportList(vector<string> && arrivalAirportList) { DARABONBA_PTR_SET_RVALUE(arrivalAirportList_, arrivalAirportList) };


    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline SearchRequestAirLegs& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // departureAirportList Field Functions 
    bool hasDepartureAirportList() const { return this->departureAirportList_ != nullptr;};
    void deleteDepartureAirportList() { this->departureAirportList_ = nullptr;};
    inline const vector<string> & departureAirportList() const { DARABONBA_PTR_GET_CONST(departureAirportList_, vector<string>) };
    inline vector<string> departureAirportList() { DARABONBA_PTR_GET(departureAirportList_, vector<string>) };
    inline SearchRequestAirLegs& setDepartureAirportList(const vector<string> & departureAirportList) { DARABONBA_PTR_SET_VALUE(departureAirportList_, departureAirportList) };
    inline SearchRequestAirLegs& setDepartureAirportList(vector<string> && departureAirportList) { DARABONBA_PTR_SET_RVALUE(departureAirportList_, departureAirportList) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline SearchRequestAirLegs& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureDate Field Functions 
    bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
    void deleteDepartureDate() { this->departureDate_ = nullptr;};
    inline string departureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
    inline SearchRequestAirLegs& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


  protected:
    // arrival airport [IATA airport code] list
    std::shared_ptr<vector<string>> arrivalAirportList_ = nullptr;
    // arrival city code
    // 
    // This parameter is required.
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // departure airport [IATA airport code] list
    std::shared_ptr<vector<string>> departureAirportList_ = nullptr;
    // departure city code
    // 
    // This parameter is required.
    std::shared_ptr<string> departureCity_ = nullptr;
    // departure date (eg: yyyyMMdd)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
