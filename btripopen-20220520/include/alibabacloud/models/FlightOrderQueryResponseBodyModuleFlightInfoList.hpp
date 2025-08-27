// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(arr_airport_city_county, arrAirportCityCounty_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_TO_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_level, cabinLevel_);
      DARABONBA_PTR_TO_JSON(dep_airport_city_county, depAirportCityCounty_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_TO_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_city_info_list, stopCityInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(arr_airport_city_county, arrAirportCityCounty_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_FROM_JSON(arr_city_ad_code, arrCityAdCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_level, cabinLevel_);
      DARABONBA_PTR_FROM_JSON(dep_airport_city_county, depAirportCityCounty_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_FROM_JSON(dep_city_ad_code, depCityAdCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_city_info_list, stopCityInfoList_);
    };
    FlightOrderQueryResponseBodyModuleFlightInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoList(const FlightOrderQueryResponseBodyModuleFlightInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoList(FlightOrderQueryResponseBodyModuleFlightInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoList& operator=(const FlightOrderQueryResponseBodyModuleFlightInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightInfoList& operator=(FlightOrderQueryResponseBodyModuleFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->arrAirportCityCounty_ != nullptr && this->arrAirportCode_ != nullptr && this->arrAirportName_ != nullptr && this->arrCityAdCode_ != nullptr
        && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrTerminal_ != nullptr && this->arrTime_ != nullptr && this->cabin_ != nullptr
        && this->cabinLevel_ != nullptr && this->depAirportCityCounty_ != nullptr && this->depAirportCode_ != nullptr && this->depAirportName_ != nullptr && this->depCityAdCode_ != nullptr
        && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTerminal_ != nullptr && this->depTime_ != nullptr && this->flightMile_ != nullptr
        && this->flightNo_ != nullptr && this->journeyIndex_ != nullptr && this->segmentIndex_ != nullptr && this->stopCity_ != nullptr && this->stopCityInfoList_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // arrAirportCityCounty Field Functions 
    bool hasArrAirportCityCounty() const { return this->arrAirportCityCounty_ != nullptr;};
    void deleteArrAirportCityCounty() { this->arrAirportCityCounty_ = nullptr;};
    inline const Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty & arrAirportCityCounty() const { DARABONBA_PTR_GET_CONST(arrAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty) };
    inline Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty arrAirportCityCounty() { DARABONBA_PTR_GET(arrAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrAirportCityCounty(const Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty & arrAirportCityCounty) { DARABONBA_PTR_SET_VALUE(arrAirportCityCounty_, arrAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrAirportCityCounty(Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty && arrAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(arrAirportCityCounty_, arrAirportCityCounty) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrAirportName Field Functions 
    bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
    void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
    inline string arrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


    // arrCityAdCode Field Functions 
    bool hasArrCityAdCode() const { return this->arrCityAdCode_ != nullptr;};
    void deleteArrCityAdCode() { this->arrCityAdCode_ = nullptr;};
    inline string arrCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityAdCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrCityAdCode(string arrCityAdCode) { DARABONBA_PTR_SET_VALUE(arrCityAdCode_, arrCityAdCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTerminal Field Functions 
    bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
    void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
    inline string arrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinLevel Field Functions 
    bool hasCabinLevel() const { return this->cabinLevel_ != nullptr;};
    void deleteCabinLevel() { this->cabinLevel_ = nullptr;};
    inline string cabinLevel() const { DARABONBA_PTR_GET_DEFAULT(cabinLevel_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setCabinLevel(string cabinLevel) { DARABONBA_PTR_SET_VALUE(cabinLevel_, cabinLevel) };


    // depAirportCityCounty Field Functions 
    bool hasDepAirportCityCounty() const { return this->depAirportCityCounty_ != nullptr;};
    void deleteDepAirportCityCounty() { this->depAirportCityCounty_ = nullptr;};
    inline const Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty & depAirportCityCounty() const { DARABONBA_PTR_GET_CONST(depAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty) };
    inline Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty depAirportCityCounty() { DARABONBA_PTR_GET(depAirportCityCounty_, Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepAirportCityCounty(const Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty & depAirportCityCounty) { DARABONBA_PTR_SET_VALUE(depAirportCityCounty_, depAirportCityCounty) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepAirportCityCounty(Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty && depAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(depAirportCityCounty_, depAirportCityCounty) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depAirportName Field Functions 
    bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
    void deleteDepAirportName() { this->depAirportName_ = nullptr;};
    inline string depAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


    // depCityAdCode Field Functions 
    bool hasDepCityAdCode() const { return this->depCityAdCode_ != nullptr;};
    void deleteDepCityAdCode() { this->depCityAdCode_ = nullptr;};
    inline string depCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(depCityAdCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepCityAdCode(string depCityAdCode) { DARABONBA_PTR_SET_VALUE(depCityAdCode_, depCityAdCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTerminal Field Functions 
    bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
    void deleteDepTerminal() { this->depTerminal_ = nullptr;};
    inline string depTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightMile Field Functions 
    bool hasFlightMile() const { return this->flightMile_ != nullptr;};
    void deleteFlightMile() { this->flightMile_ = nullptr;};
    inline int32_t flightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline const vector<string> & stopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
    inline vector<string> stopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


    // stopCityInfoList Field Functions 
    bool hasStopCityInfoList() const { return this->stopCityInfoList_ != nullptr;};
    void deleteStopCityInfoList() { this->stopCityInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList> & stopCityInfoList() const { DARABONBA_PTR_GET_CONST(stopCityInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList> stopCityInfoList() { DARABONBA_PTR_GET(stopCityInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList>) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setStopCityInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList> & stopCityInfoList) { DARABONBA_PTR_SET_VALUE(stopCityInfoList_, stopCityInfoList) };
    inline FlightOrderQueryResponseBodyModuleFlightInfoList& setStopCityInfoList(vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList> && stopCityInfoList) { DARABONBA_PTR_SET_RVALUE(stopCityInfoList_, stopCityInfoList) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<Models::FlightOrderQueryResponseBodyModuleFlightInfoListArrAirportCityCounty> arrAirportCityCounty_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrAirportName_ = nullptr;
    std::shared_ptr<string> arrCityAdCode_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTerminal_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinLevel_ = nullptr;
    std::shared_ptr<Models::FlightOrderQueryResponseBodyModuleFlightInfoListDepAirportCityCounty> depAirportCityCounty_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depAirportName_ = nullptr;
    std::shared_ptr<string> depCityAdCode_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTerminal_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> flightMile_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<vector<string>> stopCity_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoListStopCityInfoList>> stopCityInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
