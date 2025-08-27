// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTTICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTTICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(changed, changed_);
      DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(personal_price, personalPrice_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(settle_price, settlePrice_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_TO_JSON(ticket_status_code, ticketStatusCode_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(changed, changed_);
      DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(personal_price, personalPrice_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(settle_price, settlePrice_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(ticket_status_code, ticketStatusCode_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList(const FlightOrderQueryResponseBodyModuleFlightTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList(FlightOrderQueryResponseBodyModuleFlightTicketInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList& operator=(const FlightOrderQueryResponseBodyModuleFlightTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightTicketInfoList& operator=(FlightOrderQueryResponseBodyModuleFlightTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrAirport_ != nullptr
        && this->arrAirportCode_ != nullptr && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->buildPrice_ != nullptr && this->changed_ != nullptr
        && this->depAirport_ != nullptr && this->depAirportCode_ != nullptr && this->depCity_ != nullptr && this->depCityCode_ != nullptr && this->discount_ != nullptr
        && this->flightNo_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModify_ != nullptr && this->journeyIndex_ != nullptr && this->oilPrice_ != nullptr
        && this->payType_ != nullptr && this->personalPrice_ != nullptr && this->segmentIndex_ != nullptr && this->settlePrice_ != nullptr && this->ticketNo_ != nullptr
        && this->ticketPrice_ != nullptr && this->ticketStatus_ != nullptr && this->ticketStatusCode_ != nullptr && this->userId_ != nullptr; };
    // arrAirport Field Functions 
    bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
    void deleteArrAirport() { this->arrAirport_ = nullptr;};
    inline string arrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline double buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setBuildPrice(double buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // changed Field Functions 
    bool hasChanged() const { return this->changed_ != nullptr;};
    void deleteChanged() { this->changed_ = nullptr;};
    inline bool changed() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


    // depAirport Field Functions 
    bool hasDepAirport() const { return this->depAirport_ != nullptr;};
    void deleteDepAirport() { this->depAirport_ = nullptr;};
    inline string depAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline int32_t discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setDiscount(int32_t discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline double oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setOilPrice(double oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // personalPrice Field Functions 
    bool hasPersonalPrice() const { return this->personalPrice_ != nullptr;};
    void deletePersonalPrice() { this->personalPrice_ = nullptr;};
    inline double personalPrice() const { DARABONBA_PTR_GET_DEFAULT(personalPrice_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setPersonalPrice(double personalPrice) { DARABONBA_PTR_SET_VALUE(personalPrice_, personalPrice) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // settlePrice Field Functions 
    bool hasSettlePrice() const { return this->settlePrice_ != nullptr;};
    void deleteSettlePrice() { this->settlePrice_ = nullptr;};
    inline double settlePrice() const { DARABONBA_PTR_GET_DEFAULT(settlePrice_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setSettlePrice(double settlePrice) { DARABONBA_PTR_SET_VALUE(settlePrice_, settlePrice) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline double ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // ticketStatusCode Field Functions 
    bool hasTicketStatusCode() const { return this->ticketStatusCode_ != nullptr;};
    void deleteTicketStatusCode() { this->ticketStatusCode_ = nullptr;};
    inline int32_t ticketStatusCode() const { DARABONBA_PTR_GET_DEFAULT(ticketStatusCode_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setTicketStatusCode(int32_t ticketStatusCode) { DARABONBA_PTR_SET_VALUE(ticketStatusCode_, ticketStatusCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> arrAirport_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<double> buildPrice_ = nullptr;
    std::shared_ptr<bool> changed_ = nullptr;
    std::shared_ptr<string> depAirport_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<int32_t> discount_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<double> oilPrice_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<double> personalPrice_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<double> settlePrice_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<double> ticketPrice_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
    std::shared_ptr<int32_t> ticketStatusCode_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
