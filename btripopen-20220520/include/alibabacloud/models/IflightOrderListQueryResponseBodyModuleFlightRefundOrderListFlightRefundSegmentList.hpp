// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTREFUNDSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTREFUNDSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
      DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
      DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
      DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
      DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(share, share_);
      DARABONBA_PTR_TO_JSON(stop_apt_code, stopAptCode_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
      DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
      DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
      DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
      DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(share, share_);
      DARABONBA_PTR_FROM_JSON(stop_apt_code, stopAptCode_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& operator=(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->arrApt_ != nullptr && this->arrAptCode_ != nullptr && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr
        && this->arrTerminal_ != nullptr && this->arrTime_ != nullptr && this->carrierAirlineCode_ != nullptr && this->carrierAirlineName_ != nullptr && this->depApt_ != nullptr
        && this->depAptCode_ != nullptr && this->depCity_ != nullptr && this->depCityCode_ != nullptr && this->depTerminal_ != nullptr && this->depTime_ != nullptr
        && this->flightNo_ != nullptr && this->journeyIndex_ != nullptr && this->segmentIndex_ != nullptr && this->share_ != nullptr && this->stopAptCode_ != nullptr
        && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr && this->stopCityCode_ != nullptr && this->stopDepTime_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // arrApt Field Functions 
    bool hasArrApt() const { return this->arrApt_ != nullptr;};
    void deleteArrApt() { this->arrApt_ = nullptr;};
    inline string arrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


    // arrAptCode Field Functions 
    bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
    void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
    inline string arrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTerminal Field Functions 
    bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
    void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
    inline string arrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // carrierAirlineCode Field Functions 
    bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
    void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
    inline string carrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


    // carrierAirlineName Field Functions 
    bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
    void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
    inline string carrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


    // depApt Field Functions 
    bool hasDepApt() const { return this->depApt_ != nullptr;};
    void deleteDepApt() { this->depApt_ = nullptr;};
    inline string depApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


    // depAptCode Field Functions 
    bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
    void deleteDepAptCode() { this->depAptCode_ = nullptr;};
    inline string depAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTerminal Field Functions 
    bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
    void deleteDepTerminal() { this->depTerminal_ = nullptr;};
    inline string depTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool share() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // stopAptCode Field Functions 
    bool hasStopAptCode() const { return this->stopAptCode_ != nullptr;};
    void deleteStopAptCode() { this->stopAptCode_ = nullptr;};
    inline string stopAptCode() const { DARABONBA_PTR_GET_DEFAULT(stopAptCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setStopAptCode(string stopAptCode) { DARABONBA_PTR_SET_VALUE(stopAptCode_, stopAptCode) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopCityCode Field Functions 
    bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
    void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
    inline string stopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> arrApt_ = nullptr;
    std::shared_ptr<string> arrAptCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTerminal_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> carrierAirlineCode_ = nullptr;
    std::shared_ptr<string> carrierAirlineName_ = nullptr;
    std::shared_ptr<string> depApt_ = nullptr;
    std::shared_ptr<string> depAptCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTerminal_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<bool> share_ = nullptr;
    std::shared_ptr<string> stopAptCode_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopCityCode_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
