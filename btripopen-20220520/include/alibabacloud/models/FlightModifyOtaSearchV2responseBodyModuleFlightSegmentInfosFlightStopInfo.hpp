// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSTOPINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOSFLIGHTSTOPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& obj) { 
      DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& operator=(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stopCityName_ != nullptr
        && this->stopArrTime_ != nullptr && this->stopDepTime_ != nullptr && this->stopCityCode_ != nullptr && this->stopAirport_ != nullptr && this->stopArrTerm_ != nullptr
        && this->stopDepTerm_ != nullptr; };
    // stopCityName Field Functions 
    bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
    void deleteStopCityName() { this->stopCityName_ = nullptr;};
    inline string stopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // stopCityCode Field Functions 
    bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
    void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
    inline string stopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


    // stopAirport Field Functions 
    bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
    void deleteStopAirport() { this->stopAirport_ = nullptr;};
    inline string stopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


    // stopArrTerm Field Functions 
    bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
    void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
    inline string stopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


    // stopDepTerm Field Functions 
    bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
    void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
    inline string stopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


  protected:
    std::shared_ptr<string> stopCityName_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<string> stopCityCode_ = nullptr;
    std::shared_ptr<string> stopAirport_ = nullptr;
    std::shared_ptr<string> stopArrTerm_ = nullptr;
    std::shared_ptr<string> stopDepTerm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
