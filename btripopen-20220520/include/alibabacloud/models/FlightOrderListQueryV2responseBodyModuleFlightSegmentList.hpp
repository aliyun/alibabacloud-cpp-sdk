// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTSEGMENTLIST_HPP_
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
  class FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
      DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
      DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
      DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
      DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList(const FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList(FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->arrApt_ != nullptr && this->arrAptCode_ != nullptr && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr
        && this->arrTerminal_ != nullptr && this->arrTime_ != nullptr && this->depApt_ != nullptr && this->depAptCode_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depTerminal_ != nullptr && this->depTime_ != nullptr && this->flightMile_ != nullptr && this->flightNo_ != nullptr
        && this->journeyIndex_ != nullptr && this->segmentIndex_ != nullptr && this->stopCity_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // arrApt Field Functions 
    bool hasArrApt() const { return this->arrApt_ != nullptr;};
    void deleteArrApt() { this->arrApt_ = nullptr;};
    inline string arrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


    // arrAptCode Field Functions 
    bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
    void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
    inline string arrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTerminal Field Functions 
    bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
    void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
    inline string arrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depApt Field Functions 
    bool hasDepApt() const { return this->depApt_ != nullptr;};
    void deleteDepApt() { this->depApt_ = nullptr;};
    inline string depApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


    // depAptCode Field Functions 
    bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
    void deleteDepAptCode() { this->depAptCode_ = nullptr;};
    inline string depAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTerminal Field Functions 
    bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
    void deleteDepTerminal() { this->depTerminal_ = nullptr;};
    inline string depTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightMile Field Functions 
    bool hasFlightMile() const { return this->flightMile_ != nullptr;};
    void deleteFlightMile() { this->flightMile_ = nullptr;};
    inline int32_t flightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline const vector<string> & stopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
    inline vector<string> stopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> arrApt_ = nullptr;
    std::shared_ptr<string> arrAptCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTerminal_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depApt_ = nullptr;
    std::shared_ptr<string> depAptCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTerminal_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> flightMile_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<vector<string>> stopCity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
