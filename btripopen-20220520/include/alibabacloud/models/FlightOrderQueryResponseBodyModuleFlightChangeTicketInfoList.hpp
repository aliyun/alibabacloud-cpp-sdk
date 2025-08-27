// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTCHANGETICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTCHANGETICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(change_cabin, changeCabin_);
      DARABONBA_PTR_TO_JSON(change_cabin_level, changeCabinLevel_);
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(change_flight_no, changeFlightNo_);
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(change_reason, changeReason_);
      DARABONBA_PTR_TO_JSON(change_type, changeType_);
      DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(origin_ticket_no, originTicketNo_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_TO_JSON(ticket_status_code, ticketStatusCode_);
      DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(change_cabin, changeCabin_);
      DARABONBA_PTR_FROM_JSON(change_cabin_level, changeCabinLevel_);
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(change_flight_no, changeFlightNo_);
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(change_reason, changeReason_);
      DARABONBA_PTR_FROM_JSON(change_type, changeType_);
      DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(origin_ticket_no, originTicketNo_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(ticket_status_code, ticketStatusCode_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
    };
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList(const FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList(FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& operator=(const FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& operator=(FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->arrAirport_ != nullptr && this->arrAirportCode_ != nullptr && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->arrTime_ != nullptr
        && this->changeCabin_ != nullptr && this->changeCabinLevel_ != nullptr && this->changeFee_ != nullptr && this->changeFlightNo_ != nullptr && this->changeOrderId_ != nullptr
        && this->changeReason_ != nullptr && this->changeType_ != nullptr && this->depAirport_ != nullptr && this->depAirportCode_ != nullptr && this->depCity_ != nullptr
        && this->depCityCode_ != nullptr && this->depTime_ != nullptr && this->discount_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModify_ != nullptr
        && this->journeyIndex_ != nullptr && this->originTicketNo_ != nullptr && this->outApplyId_ != nullptr && this->segmentIndex_ != nullptr && this->stopCity_ != nullptr
        && this->ticketNo_ != nullptr && this->ticketStatus_ != nullptr && this->ticketStatusCode_ != nullptr && this->upgradeFee_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrAirport Field Functions 
    bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
    void deleteArrAirport() { this->arrAirport_ = nullptr;};
    inline string arrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // changeCabin Field Functions 
    bool hasChangeCabin() const { return this->changeCabin_ != nullptr;};
    void deleteChangeCabin() { this->changeCabin_ = nullptr;};
    inline string changeCabin() const { DARABONBA_PTR_GET_DEFAULT(changeCabin_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeCabin(string changeCabin) { DARABONBA_PTR_SET_VALUE(changeCabin_, changeCabin) };


    // changeCabinLevel Field Functions 
    bool hasChangeCabinLevel() const { return this->changeCabinLevel_ != nullptr;};
    void deleteChangeCabinLevel() { this->changeCabinLevel_ = nullptr;};
    inline string changeCabinLevel() const { DARABONBA_PTR_GET_DEFAULT(changeCabinLevel_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeCabinLevel(string changeCabinLevel) { DARABONBA_PTR_SET_VALUE(changeCabinLevel_, changeCabinLevel) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // changeFlightNo Field Functions 
    bool hasChangeFlightNo() const { return this->changeFlightNo_ != nullptr;};
    void deleteChangeFlightNo() { this->changeFlightNo_ = nullptr;};
    inline string changeFlightNo() const { DARABONBA_PTR_GET_DEFAULT(changeFlightNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeFlightNo(string changeFlightNo) { DARABONBA_PTR_SET_VALUE(changeFlightNo_, changeFlightNo) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline int64_t changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, 0L) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeOrderId(int64_t changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // changeReason Field Functions 
    bool hasChangeReason() const { return this->changeReason_ != nullptr;};
    void deleteChangeReason() { this->changeReason_ = nullptr;};
    inline string changeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // depAirport Field Functions 
    bool hasDepAirport() const { return this->depAirport_ != nullptr;};
    void deleteDepAirport() { this->depAirport_ = nullptr;};
    inline string depAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // originTicketNo Field Functions 
    bool hasOriginTicketNo() const { return this->originTicketNo_ != nullptr;};
    void deleteOriginTicketNo() { this->originTicketNo_ = nullptr;};
    inline string originTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originTicketNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setOriginTicketNo(string originTicketNo) { DARABONBA_PTR_SET_VALUE(originTicketNo_, originTicketNo) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // ticketStatusCode Field Functions 
    bool hasTicketStatusCode() const { return this->ticketStatusCode_ != nullptr;};
    void deleteTicketStatusCode() { this->ticketStatusCode_ = nullptr;};
    inline int32_t ticketStatusCode() const { DARABONBA_PTR_GET_DEFAULT(ticketStatusCode_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setTicketStatusCode(int32_t ticketStatusCode) { DARABONBA_PTR_SET_VALUE(ticketStatusCode_, ticketStatusCode) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline double upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> arrAirport_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> changeCabin_ = nullptr;
    std::shared_ptr<string> changeCabinLevel_ = nullptr;
    std::shared_ptr<double> changeFee_ = nullptr;
    std::shared_ptr<string> changeFlightNo_ = nullptr;
    std::shared_ptr<int64_t> changeOrderId_ = nullptr;
    std::shared_ptr<string> changeReason_ = nullptr;
    std::shared_ptr<int32_t> changeType_ = nullptr;
    std::shared_ptr<string> depAirport_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<string> originTicketNo_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
    std::shared_ptr<int32_t> ticketStatusCode_ = nullptr;
    std::shared_ptr<double> upgradeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
