// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTREFUNDTICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEFLIGHTREFUNDTICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(company_refund_ticket_fee, companyRefundTicketFee_);
      DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(personal_refund_ticket_fee, personalRefundTicketFee_);
      DARABONBA_PTR_TO_JSON(refund_order_id, refundOrderId_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(refund_ticket_fee, refundTicketFee_);
      DARABONBA_PTR_TO_JSON(refund_type, refundType_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(company_refund_ticket_fee, companyRefundTicketFee_);
      DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(personal_refund_ticket_fee, personalRefundTicketFee_);
      DARABONBA_PTR_FROM_JSON(refund_order_id, refundOrderId_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_fee, refundTicketFee_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList(const FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList(FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList() = default ;
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& operator=(const FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& operator=(FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->arrAirport_ != nullptr && this->arrAirportCode_ != nullptr && this->arrCity_ != nullptr && this->arrCityCode_ != nullptr && this->companyRefundTicketFee_ != nullptr
        && this->depAirport_ != nullptr && this->depAirportCode_ != nullptr && this->depCity_ != nullptr && this->depCityCode_ != nullptr && this->flightNo_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModify_ != nullptr && this->journeyIndex_ != nullptr && this->outApplyId_ != nullptr && this->personalRefundTicketFee_ != nullptr
        && this->refundOrderId_ != nullptr && this->refundReason_ != nullptr && this->refundTicketFee_ != nullptr && this->refundType_ != nullptr && this->segmentIndex_ != nullptr
        && this->ticketNo_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrAirport Field Functions 
    bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
    void deleteArrAirport() { this->arrAirport_ = nullptr;};
    inline string arrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // companyRefundTicketFee Field Functions 
    bool hasCompanyRefundTicketFee() const { return this->companyRefundTicketFee_ != nullptr;};
    void deleteCompanyRefundTicketFee() { this->companyRefundTicketFee_ = nullptr;};
    inline double companyRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(companyRefundTicketFee_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setCompanyRefundTicketFee(double companyRefundTicketFee) { DARABONBA_PTR_SET_VALUE(companyRefundTicketFee_, companyRefundTicketFee) };


    // depAirport Field Functions 
    bool hasDepAirport() const { return this->depAirport_ != nullptr;};
    void deleteDepAirport() { this->depAirport_ = nullptr;};
    inline string depAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // personalRefundTicketFee Field Functions 
    bool hasPersonalRefundTicketFee() const { return this->personalRefundTicketFee_ != nullptr;};
    void deletePersonalRefundTicketFee() { this->personalRefundTicketFee_ = nullptr;};
    inline double personalRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(personalRefundTicketFee_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setPersonalRefundTicketFee(double personalRefundTicketFee) { DARABONBA_PTR_SET_VALUE(personalRefundTicketFee_, personalRefundTicketFee) };


    // refundOrderId Field Functions 
    bool hasRefundOrderId() const { return this->refundOrderId_ != nullptr;};
    void deleteRefundOrderId() { this->refundOrderId_ = nullptr;};
    inline int64_t refundOrderId() const { DARABONBA_PTR_GET_DEFAULT(refundOrderId_, 0L) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setRefundOrderId(int64_t refundOrderId) { DARABONBA_PTR_SET_VALUE(refundOrderId_, refundOrderId) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundTicketFee Field Functions 
    bool hasRefundTicketFee() const { return this->refundTicketFee_ != nullptr;};
    void deleteRefundTicketFee() { this->refundTicketFee_ = nullptr;};
    inline double refundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(refundTicketFee_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setRefundTicketFee(double refundTicketFee) { DARABONBA_PTR_SET_VALUE(refundTicketFee_, refundTicketFee) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline int32_t refundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> arrAirport_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<double> companyRefundTicketFee_ = nullptr;
    std::shared_ptr<string> depAirport_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<double> personalRefundTicketFee_ = nullptr;
    std::shared_ptr<int64_t> refundOrderId_ = nullptr;
    std::shared_ptr<string> refundReason_ = nullptr;
    std::shared_ptr<double> refundTicketFee_ = nullptr;
    std::shared_ptr<int32_t> refundType_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
