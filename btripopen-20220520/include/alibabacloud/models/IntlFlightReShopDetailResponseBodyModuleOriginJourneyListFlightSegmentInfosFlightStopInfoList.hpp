// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEORIGINJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSTOPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEORIGINJOURNEYLISTFLIGHTSEGMENTINFOSFLIGHTSTOPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
      DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
      DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
    };
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList() = default ;
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList(const IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList &) = default ;
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList(IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList &&) = default ;
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList() = default ;
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& operator=(const IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList &) = default ;
    IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& operator=(IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stopAirport_ != nullptr
        && this->stopAirportName_ != nullptr && this->stopArrTerm_ != nullptr && this->stopArrTime_ != nullptr && this->stopCityCode_ != nullptr && this->stopCityName_ != nullptr
        && this->stopDepTerm_ != nullptr && this->stopDepTime_ != nullptr && this->stopTime_ != nullptr; };
    // stopAirport Field Functions 
    bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
    void deleteStopAirport() { this->stopAirport_ = nullptr;};
    inline string stopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


    // stopAirportName Field Functions 
    bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
    void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
    inline string stopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


    // stopArrTerm Field Functions 
    bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
    void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
    inline string stopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCityCode Field Functions 
    bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
    void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
    inline string stopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


    // stopCityName Field Functions 
    bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
    void deleteStopCityName() { this->stopCityName_ = nullptr;};
    inline string stopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


    // stopDepTerm Field Functions 
    bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
    void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
    inline string stopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModuleOriginJourneyListFlightSegmentInfosFlightStopInfoList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    std::shared_ptr<string> stopAirport_ = nullptr;
    std::shared_ptr<string> stopAirportName_ = nullptr;
    std::shared_ptr<string> stopArrTerm_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCityCode_ = nullptr;
    std::shared_ptr<string> stopCityName_ = nullptr;
    std::shared_ptr<string> stopDepTerm_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<string> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
