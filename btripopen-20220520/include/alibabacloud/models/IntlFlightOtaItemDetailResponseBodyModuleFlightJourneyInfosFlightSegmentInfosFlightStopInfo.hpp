// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSTOPINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOSFLIGHTSTOPINFO_HPP_
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
  class IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& obj) { 
      DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
      DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_TO_JSON(stop_city_names, stopCityNames_);
      DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
      DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_FROM_JSON(stop_city_names, stopCityNames_);
      DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo(const IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo(IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& operator=(const IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& operator=(IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stopAirport_ != nullptr
        && this->stopAirportName_ != nullptr && this->stopArrTerm_ != nullptr && this->stopArrTime_ != nullptr && this->stopCityCode_ != nullptr && this->stopCityName_ != nullptr
        && this->stopCityNames_ != nullptr && this->stopDepTerm_ != nullptr && this->stopDepTime_ != nullptr && this->stopTime_ != nullptr; };
    // stopAirport Field Functions 
    bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
    void deleteStopAirport() { this->stopAirport_ = nullptr;};
    inline string stopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


    // stopAirportName Field Functions 
    bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
    void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
    inline string stopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


    // stopArrTerm Field Functions 
    bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
    void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
    inline string stopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCityCode Field Functions 
    bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
    void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
    inline string stopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


    // stopCityName Field Functions 
    bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
    void deleteStopCityName() { this->stopCityName_ = nullptr;};
    inline string stopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


    // stopCityNames Field Functions 
    bool hasStopCityNames() const { return this->stopCityNames_ != nullptr;};
    void deleteStopCityNames() { this->stopCityNames_ = nullptr;};
    inline const vector<string> & stopCityNames() const { DARABONBA_PTR_GET_CONST(stopCityNames_, vector<string>) };
    inline vector<string> stopCityNames() { DARABONBA_PTR_GET(stopCityNames_, vector<string>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopCityNames(const vector<string> & stopCityNames) { DARABONBA_PTR_SET_VALUE(stopCityNames_, stopCityNames) };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopCityNames(vector<string> && stopCityNames) { DARABONBA_PTR_SET_RVALUE(stopCityNames_, stopCityNames) };


    // stopDepTerm Field Functions 
    bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
    void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
    inline string stopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    std::shared_ptr<string> stopAirport_ = nullptr;
    std::shared_ptr<string> stopAirportName_ = nullptr;
    std::shared_ptr<string> stopArrTerm_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCityCode_ = nullptr;
    std::shared_ptr<string> stopCityName_ = nullptr;
    std::shared_ptr<vector<string>> stopCityNames_ = nullptr;
    std::shared_ptr<string> stopDepTerm_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<string> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
