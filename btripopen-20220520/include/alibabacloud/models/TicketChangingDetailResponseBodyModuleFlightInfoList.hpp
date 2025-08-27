// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGDETAILRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGDETAILRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingDetailResponseBodyModuleFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingDetailResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(airline_simple_name, airlineSimpleName_);
      DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_airport_code_name, arrAirportCodeName_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(baggage, baggage_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(carrier, carrier_);
      DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_airport_code_name, depAirportCodeName_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(last_cabin, lastCabin_);
      DARABONBA_PTR_TO_JSON(last_flight_no, lastFlightNo_);
      DARABONBA_PTR_TO_JSON(meal, meal_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(segment_type, segmentType_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingDetailResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(airline_simple_name, airlineSimpleName_);
      DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code_name, arrAirportCodeName_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(baggage, baggage_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code_name, depAirportCodeName_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(last_cabin, lastCabin_);
      DARABONBA_PTR_FROM_JSON(last_flight_no, lastFlightNo_);
      DARABONBA_PTR_FROM_JSON(meal, meal_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(segment_type, segmentType_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
    };
    TicketChangingDetailResponseBodyModuleFlightInfoList() = default ;
    TicketChangingDetailResponseBodyModuleFlightInfoList(const TicketChangingDetailResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingDetailResponseBodyModuleFlightInfoList(TicketChangingDetailResponseBodyModuleFlightInfoList &&) = default ;
    TicketChangingDetailResponseBodyModuleFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingDetailResponseBodyModuleFlightInfoList() = default ;
    TicketChangingDetailResponseBodyModuleFlightInfoList& operator=(const TicketChangingDetailResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingDetailResponseBodyModuleFlightInfoList& operator=(TicketChangingDetailResponseBodyModuleFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->airlineSimpleName_ != nullptr && this->arrAirport_ != nullptr && this->arrAirportCode_ != nullptr && this->arrAirportCodeName_ != nullptr
        && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->arrTerminal_ != nullptr && this->arrTime_ != nullptr && this->baggage_ != nullptr
        && this->buildPrice_ != nullptr && this->cabin_ != nullptr && this->cabinClass_ != nullptr && this->carrier_ != nullptr && this->depAirport_ != nullptr
        && this->depAirportCode_ != nullptr && this->depAirportCodeName_ != nullptr && this->depCity_ != nullptr && this->depCityCode_ != nullptr && this->depTerminal_ != nullptr
        && this->depTime_ != nullptr && this->flightNo_ != nullptr && this->lastCabin_ != nullptr && this->lastFlightNo_ != nullptr && this->meal_ != nullptr
        && this->oilPrice_ != nullptr && this->segmentType_ != nullptr && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr && this->stopDepTime_ != nullptr
        && this->ticketPrice_ != nullptr && this->tuigaiqianInfo_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // airlineSimpleName Field Functions 
    bool hasAirlineSimpleName() const { return this->airlineSimpleName_ != nullptr;};
    void deleteAirlineSimpleName() { this->airlineSimpleName_ = nullptr;};
    inline string airlineSimpleName() const { DARABONBA_PTR_GET_DEFAULT(airlineSimpleName_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setAirlineSimpleName(string airlineSimpleName) { DARABONBA_PTR_SET_VALUE(airlineSimpleName_, airlineSimpleName) };


    // arrAirport Field Functions 
    bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
    void deleteArrAirport() { this->arrAirport_ = nullptr;};
    inline string arrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrAirportCodeName Field Functions 
    bool hasArrAirportCodeName() const { return this->arrAirportCodeName_ != nullptr;};
    void deleteArrAirportCodeName() { this->arrAirportCodeName_ = nullptr;};
    inline string arrAirportCodeName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCodeName_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrAirportCodeName(string arrAirportCodeName) { DARABONBA_PTR_SET_VALUE(arrAirportCodeName_, arrAirportCodeName) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTerminal Field Functions 
    bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
    void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
    inline string arrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baggage Field Functions 
    bool hasBaggage() const { return this->baggage_ != nullptr;};
    void deleteBaggage() { this->baggage_ = nullptr;};
    inline string baggage() const { DARABONBA_PTR_GET_DEFAULT(baggage_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setBaggage(string baggage) { DARABONBA_PTR_SET_VALUE(baggage_, baggage) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline int64_t buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0L) };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setBuildPrice(int64_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string carrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // depAirport Field Functions 
    bool hasDepAirport() const { return this->depAirport_ != nullptr;};
    void deleteDepAirport() { this->depAirport_ = nullptr;};
    inline string depAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depAirportCodeName Field Functions 
    bool hasDepAirportCodeName() const { return this->depAirportCodeName_ != nullptr;};
    void deleteDepAirportCodeName() { this->depAirportCodeName_ = nullptr;};
    inline string depAirportCodeName() const { DARABONBA_PTR_GET_DEFAULT(depAirportCodeName_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepAirportCodeName(string depAirportCodeName) { DARABONBA_PTR_SET_VALUE(depAirportCodeName_, depAirportCodeName) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTerminal Field Functions 
    bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
    void deleteDepTerminal() { this->depTerminal_ = nullptr;};
    inline string depTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // lastCabin Field Functions 
    bool hasLastCabin() const { return this->lastCabin_ != nullptr;};
    void deleteLastCabin() { this->lastCabin_ = nullptr;};
    inline string lastCabin() const { DARABONBA_PTR_GET_DEFAULT(lastCabin_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setLastCabin(string lastCabin) { DARABONBA_PTR_SET_VALUE(lastCabin_, lastCabin) };


    // lastFlightNo Field Functions 
    bool hasLastFlightNo() const { return this->lastFlightNo_ != nullptr;};
    void deleteLastFlightNo() { this->lastFlightNo_ = nullptr;};
    inline string lastFlightNo() const { DARABONBA_PTR_GET_DEFAULT(lastFlightNo_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setLastFlightNo(string lastFlightNo) { DARABONBA_PTR_SET_VALUE(lastFlightNo_, lastFlightNo) };


    // meal Field Functions 
    bool hasMeal() const { return this->meal_ != nullptr;};
    void deleteMeal() { this->meal_ = nullptr;};
    inline string meal() const { DARABONBA_PTR_GET_DEFAULT(meal_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setMeal(string meal) { DARABONBA_PTR_SET_VALUE(meal_, meal) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline int64_t oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0L) };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setOilPrice(int64_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // segmentType Field Functions 
    bool hasSegmentType() const { return this->segmentType_ != nullptr;};
    void deleteSegmentType() { this->segmentType_ = nullptr;};
    inline int32_t segmentType() const { DARABONBA_PTR_GET_DEFAULT(segmentType_, 0) };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setSegmentType(int32_t segmentType) { DARABONBA_PTR_SET_VALUE(segmentType_, segmentType) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline TicketChangingDetailResponseBodyModuleFlightInfoList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> airlineSimpleName_ = nullptr;
    std::shared_ptr<string> arrAirport_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrAirportCodeName_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTerminal_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baggage_ = nullptr;
    std::shared_ptr<int64_t> buildPrice_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> carrier_ = nullptr;
    std::shared_ptr<string> depAirport_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depAirportCodeName_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTerminal_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> lastCabin_ = nullptr;
    std::shared_ptr<string> lastFlightNo_ = nullptr;
    std::shared_ptr<string> meal_ = nullptr;
    std::shared_ptr<int64_t> oilPrice_ = nullptr;
    std::shared_ptr<int32_t> segmentType_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
