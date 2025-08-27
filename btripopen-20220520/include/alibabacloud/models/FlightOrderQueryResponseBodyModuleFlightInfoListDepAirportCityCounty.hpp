// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLISTDEPAIRPORTCITYCOUNTY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLISTDEPAIRPORTCITYCOUNTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& obj) { 
      DARABONBA_PTR_TO_JSON(adcode, adcode_);
      DARABONBA_PTR_TO_JSON(airport_city_code, airportCityCode_);
      DARABONBA_PTR_TO_JSON(airport_city_name, airportCityName_);
      DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
      DARABONBA_PTR_TO_JSON(airport_name, airportName_);
      DARABONBA_PTR_TO_JSON(airport_parent_city_name, airportParentCityName_);
      DARABONBA_PTR_TO_JSON(county_city_adcode, countyCityAdcode_);
      DARABONBA_PTR_TO_JSON(county_city_name, countyCityName_);
      DARABONBA_PTR_TO_JSON(prefecture_city_adcode, prefectureCityAdcode_);
      DARABONBA_PTR_TO_JSON(prefecture_city_name, prefectureCityName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& obj) { 
      DARABONBA_PTR_FROM_JSON(adcode, adcode_);
      DARABONBA_PTR_FROM_JSON(airport_city_code, airportCityCode_);
      DARABONBA_PTR_FROM_JSON(airport_city_name, airportCityName_);
      DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
      DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
      DARABONBA_PTR_FROM_JSON(airport_parent_city_name, airportParentCityName_);
      DARABONBA_PTR_FROM_JSON(county_city_adcode, countyCityAdcode_);
      DARABONBA_PTR_FROM_JSON(county_city_name, countyCityName_);
      DARABONBA_PTR_FROM_JSON(prefecture_city_adcode, prefectureCityAdcode_);
      DARABONBA_PTR_FROM_JSON(prefecture_city_name, prefectureCityName_);
    };
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty(const FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty(FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& operator=(const FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& operator=(FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adcode_ != nullptr
        && this->airportCityCode_ != nullptr && this->airportCityName_ != nullptr && this->airportCode_ != nullptr && this->airportName_ != nullptr && this->airportParentCityName_ != nullptr
        && this->countyCityAdcode_ != nullptr && this->countyCityName_ != nullptr && this->prefectureCityAdcode_ != nullptr && this->prefectureCityName_ != nullptr; };
    // adcode Field Functions 
    bool hasAdcode() const { return this->adcode_ != nullptr;};
    void deleteAdcode() { this->adcode_ = nullptr;};
    inline string adcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


    // airportCityCode Field Functions 
    bool hasAirportCityCode() const { return this->airportCityCode_ != nullptr;};
    void deleteAirportCityCode() { this->airportCityCode_ = nullptr;};
    inline string airportCityCode() const { DARABONBA_PTR_GET_DEFAULT(airportCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAirportCityCode(string airportCityCode) { DARABONBA_PTR_SET_VALUE(airportCityCode_, airportCityCode) };


    // airportCityName Field Functions 
    bool hasAirportCityName() const { return this->airportCityName_ != nullptr;};
    void deleteAirportCityName() { this->airportCityName_ = nullptr;};
    inline string airportCityName() const { DARABONBA_PTR_GET_DEFAULT(airportCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAirportCityName(string airportCityName) { DARABONBA_PTR_SET_VALUE(airportCityName_, airportCityName) };


    // airportCode Field Functions 
    bool hasAirportCode() const { return this->airportCode_ != nullptr;};
    void deleteAirportCode() { this->airportCode_ = nullptr;};
    inline string airportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


    // airportName Field Functions 
    bool hasAirportName() const { return this->airportName_ != nullptr;};
    void deleteAirportName() { this->airportName_ = nullptr;};
    inline string airportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


    // airportParentCityName Field Functions 
    bool hasAirportParentCityName() const { return this->airportParentCityName_ != nullptr;};
    void deleteAirportParentCityName() { this->airportParentCityName_ = nullptr;};
    inline string airportParentCityName() const { DARABONBA_PTR_GET_DEFAULT(airportParentCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setAirportParentCityName(string airportParentCityName) { DARABONBA_PTR_SET_VALUE(airportParentCityName_, airportParentCityName) };


    // countyCityAdcode Field Functions 
    bool hasCountyCityAdcode() const { return this->countyCityAdcode_ != nullptr;};
    void deleteCountyCityAdcode() { this->countyCityAdcode_ = nullptr;};
    inline string countyCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(countyCityAdcode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setCountyCityAdcode(string countyCityAdcode) { DARABONBA_PTR_SET_VALUE(countyCityAdcode_, countyCityAdcode) };


    // countyCityName Field Functions 
    bool hasCountyCityName() const { return this->countyCityName_ != nullptr;};
    void deleteCountyCityName() { this->countyCityName_ = nullptr;};
    inline string countyCityName() const { DARABONBA_PTR_GET_DEFAULT(countyCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setCountyCityName(string countyCityName) { DARABONBA_PTR_SET_VALUE(countyCityName_, countyCityName) };


    // prefectureCityAdcode Field Functions 
    bool hasPrefectureCityAdcode() const { return this->prefectureCityAdcode_ != nullptr;};
    void deletePrefectureCityAdcode() { this->prefectureCityAdcode_ = nullptr;};
    inline string prefectureCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityAdcode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setPrefectureCityAdcode(string prefectureCityAdcode) { DARABONBA_PTR_SET_VALUE(prefectureCityAdcode_, prefectureCityAdcode) };


    // prefectureCityName Field Functions 
    bool hasPrefectureCityName() const { return this->prefectureCityName_ != nullptr;};
    void deletePrefectureCityName() { this->prefectureCityName_ = nullptr;};
    inline string prefectureCityName() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty& setPrefectureCityName(string prefectureCityName) { DARABONBA_PTR_SET_VALUE(prefectureCityName_, prefectureCityName) };


  protected:
    std::shared_ptr<string> adcode_ = nullptr;
    std::shared_ptr<string> airportCityCode_ = nullptr;
    std::shared_ptr<string> airportCityName_ = nullptr;
    std::shared_ptr<string> airportCode_ = nullptr;
    std::shared_ptr<string> airportName_ = nullptr;
    std::shared_ptr<string> airportParentCityName_ = nullptr;
    std::shared_ptr<string> countyCityAdcode_ = nullptr;
    std::shared_ptr<string> countyCityName_ = nullptr;
    std::shared_ptr<string> prefectureCityAdcode_ = nullptr;
    std::shared_ptr<string> prefectureCityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
