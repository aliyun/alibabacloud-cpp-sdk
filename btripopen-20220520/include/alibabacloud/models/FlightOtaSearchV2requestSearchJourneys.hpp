// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUESTSEARCHJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUESTSEARCHJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchV2RequestSearchJourneysSelectedFlights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2RequestSearchJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2RequestSearchJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(selected_flights, selectedFlights_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2RequestSearchJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(selected_flights, selectedFlights_);
    };
    FlightOtaSearchV2RequestSearchJourneys() = default ;
    FlightOtaSearchV2RequestSearchJourneys(const FlightOtaSearchV2RequestSearchJourneys &) = default ;
    FlightOtaSearchV2RequestSearchJourneys(FlightOtaSearchV2RequestSearchJourneys &&) = default ;
    FlightOtaSearchV2RequestSearchJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2RequestSearchJourneys() = default ;
    FlightOtaSearchV2RequestSearchJourneys& operator=(const FlightOtaSearchV2RequestSearchJourneys &) = default ;
    FlightOtaSearchV2RequestSearchJourneys& operator=(FlightOtaSearchV2RequestSearchJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->depCityCode_ != nullptr && this->depDate_ != nullptr && this->selectedFlights_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOtaSearchV2RequestSearchJourneys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightOtaSearchV2RequestSearchJourneys& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // selectedFlights Field Functions 
    bool hasSelectedFlights() const { return this->selectedFlights_ != nullptr;};
    void deleteSelectedFlights() { this->selectedFlights_ = nullptr;};
    inline const vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights> & selectedFlights() const { DARABONBA_PTR_GET_CONST(selectedFlights_, vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights>) };
    inline vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights> selectedFlights() { DARABONBA_PTR_GET(selectedFlights_, vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights>) };
    inline FlightOtaSearchV2RequestSearchJourneys& setSelectedFlights(const vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights> & selectedFlights) { DARABONBA_PTR_SET_VALUE(selectedFlights_, selectedFlights) };
    inline FlightOtaSearchV2RequestSearchJourneys& setSelectedFlights(vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights> && selectedFlights) { DARABONBA_PTR_SET_RVALUE(selectedFlights_, selectedFlights) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::FlightOtaSearchV2RequestSearchJourneysSelectedFlights>> selectedFlights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
