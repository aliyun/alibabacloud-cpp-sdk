// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLISTSTOPCITYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLISTSTOPCITYINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(stop_airport_city_county, stopAirportCityCounty_);
      DARABONBA_PTR_TO_JSON(stop_airport_code, stopAirportCode_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(stop_airport_city_county, stopAirportCityCounty_);
      DARABONBA_PTR_FROM_JSON(stop_airport_code, stopAirportCode_);
    };
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList(const FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList(FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& operator=(const FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& operator=(FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stopAirportCityCounty_ != nullptr
        && this->stopAirportCode_ != nullptr; };
    // stopAirportCityCounty Field Functions 
    bool hasStopAirportCityCounty() const { return this->stopAirportCityCounty_ != nullptr;};
    void deleteStopAirportCityCounty() { this->stopAirportCityCounty_ = nullptr;};
    inline const Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty & stopAirportCityCounty() const { DARABONBA_PTR_GET_CONST(stopAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty) };
    inline Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty stopAirportCityCounty() { DARABONBA_PTR_GET(stopAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& setStopAirportCityCounty(const Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty & stopAirportCityCounty) { DARABONBA_PTR_SET_VALUE(stopAirportCityCounty_, stopAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& setStopAirportCityCounty(Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty && stopAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(stopAirportCityCounty_, stopAirportCityCounty) };


    // stopAirportCode Field Functions 
    bool hasStopAirportCode() const { return this->stopAirportCode_ != nullptr;};
    void deleteStopAirportCode() { this->stopAirportCode_ = nullptr;};
    inline string stopAirportCode() const { DARABONBA_PTR_GET_DEFAULT(stopAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList& setStopAirportCode(string stopAirportCode) { DARABONBA_PTR_SET_VALUE(stopAirportCode_, stopAirportCode) };


  protected:
    std::shared_ptr<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoListStopAirportCityCounty> stopAirportCityCounty_ = nullptr;
    std::shared_ptr<string> stopAirportCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
