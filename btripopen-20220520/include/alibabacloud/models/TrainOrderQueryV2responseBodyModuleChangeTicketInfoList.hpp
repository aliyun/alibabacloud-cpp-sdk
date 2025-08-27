// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULECHANGETICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULECHANGETICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(change_coach_no, changeCoachNo_);
      DARABONBA_PTR_TO_JSON(change_gap_fee, changeGapFee_);
      DARABONBA_PTR_TO_JSON(change_handling_fee, changeHandlingFee_);
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(change_seat_no, changeSeatNo_);
      DARABONBA_PTR_TO_JSON(change_seat_type_name, changeSeatTypeName_);
      DARABONBA_PTR_TO_JSON(change_service_fee, changeServiceFee_);
      DARABONBA_PTR_TO_JSON(change_train_no, changeTrainNo_);
      DARABONBA_PTR_TO_JSON(change_train_type_name, changeTrainTypeName_);
      DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(origin_ticket_no, originTicketNo_);
      DARABONBA_PTR_TO_JSON(out_ticket_status, outTicketStatus_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(short_ticket_no, shortTicketNo_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_TO_JSON(use_ticket, useTicket_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(change_coach_no, changeCoachNo_);
      DARABONBA_PTR_FROM_JSON(change_gap_fee, changeGapFee_);
      DARABONBA_PTR_FROM_JSON(change_handling_fee, changeHandlingFee_);
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(change_seat_no, changeSeatNo_);
      DARABONBA_PTR_FROM_JSON(change_seat_type_name, changeSeatTypeName_);
      DARABONBA_PTR_FROM_JSON(change_service_fee, changeServiceFee_);
      DARABONBA_PTR_FROM_JSON(change_train_no, changeTrainNo_);
      DARABONBA_PTR_FROM_JSON(change_train_type_name, changeTrainTypeName_);
      DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
      DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(origin_ticket_no, originTicketNo_);
      DARABONBA_PTR_FROM_JSON(out_ticket_status, outTicketStatus_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(short_ticket_no, shortTicketNo_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
      DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
      DARABONBA_PTR_FROM_JSON(use_ticket, useTicket_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList(const TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList(TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& operator=(const TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& operator=(TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeCoachNo_ != nullptr
        && this->changeGapFee_ != nullptr && this->changeHandlingFee_ != nullptr && this->changeOrderId_ != nullptr && this->changeSeatNo_ != nullptr && this->changeSeatTypeName_ != nullptr
        && this->changeServiceFee_ != nullptr && this->changeTrainNo_ != nullptr && this->changeTrainTypeName_ != nullptr && this->checkInTime_ != nullptr && this->checkOutTime_ != nullptr
        && this->endTime_ != nullptr && this->fromCityName_ != nullptr && this->fromStationName_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModify_ != nullptr
        && this->originTicketNo_ != nullptr && this->outTicketStatus_ != nullptr && this->segmentIndex_ != nullptr && this->shortTicketNo_ != nullptr && this->startTime_ != nullptr
        && this->ticketEntrance_ != nullptr && this->ticketNo_ != nullptr && this->ticketStatus_ != nullptr && this->toCityName_ != nullptr && this->toStationName_ != nullptr
        && this->useTicket_ != nullptr && this->userId_ != nullptr; };
    // changeCoachNo Field Functions 
    bool hasChangeCoachNo() const { return this->changeCoachNo_ != nullptr;};
    void deleteChangeCoachNo() { this->changeCoachNo_ = nullptr;};
    inline string changeCoachNo() const { DARABONBA_PTR_GET_DEFAULT(changeCoachNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeCoachNo(string changeCoachNo) { DARABONBA_PTR_SET_VALUE(changeCoachNo_, changeCoachNo) };


    // changeGapFee Field Functions 
    bool hasChangeGapFee() const { return this->changeGapFee_ != nullptr;};
    void deleteChangeGapFee() { this->changeGapFee_ = nullptr;};
    inline double changeGapFee() const { DARABONBA_PTR_GET_DEFAULT(changeGapFee_, 0.0) };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeGapFee(double changeGapFee) { DARABONBA_PTR_SET_VALUE(changeGapFee_, changeGapFee) };


    // changeHandlingFee Field Functions 
    bool hasChangeHandlingFee() const { return this->changeHandlingFee_ != nullptr;};
    void deleteChangeHandlingFee() { this->changeHandlingFee_ = nullptr;};
    inline double changeHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(changeHandlingFee_, 0.0) };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeHandlingFee(double changeHandlingFee) { DARABONBA_PTR_SET_VALUE(changeHandlingFee_, changeHandlingFee) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // changeSeatNo Field Functions 
    bool hasChangeSeatNo() const { return this->changeSeatNo_ != nullptr;};
    void deleteChangeSeatNo() { this->changeSeatNo_ = nullptr;};
    inline string changeSeatNo() const { DARABONBA_PTR_GET_DEFAULT(changeSeatNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeSeatNo(string changeSeatNo) { DARABONBA_PTR_SET_VALUE(changeSeatNo_, changeSeatNo) };


    // changeSeatTypeName Field Functions 
    bool hasChangeSeatTypeName() const { return this->changeSeatTypeName_ != nullptr;};
    void deleteChangeSeatTypeName() { this->changeSeatTypeName_ = nullptr;};
    inline string changeSeatTypeName() const { DARABONBA_PTR_GET_DEFAULT(changeSeatTypeName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeSeatTypeName(string changeSeatTypeName) { DARABONBA_PTR_SET_VALUE(changeSeatTypeName_, changeSeatTypeName) };


    // changeServiceFee Field Functions 
    bool hasChangeServiceFee() const { return this->changeServiceFee_ != nullptr;};
    void deleteChangeServiceFee() { this->changeServiceFee_ = nullptr;};
    inline double changeServiceFee() const { DARABONBA_PTR_GET_DEFAULT(changeServiceFee_, 0.0) };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeServiceFee(double changeServiceFee) { DARABONBA_PTR_SET_VALUE(changeServiceFee_, changeServiceFee) };


    // changeTrainNo Field Functions 
    bool hasChangeTrainNo() const { return this->changeTrainNo_ != nullptr;};
    void deleteChangeTrainNo() { this->changeTrainNo_ = nullptr;};
    inline string changeTrainNo() const { DARABONBA_PTR_GET_DEFAULT(changeTrainNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeTrainNo(string changeTrainNo) { DARABONBA_PTR_SET_VALUE(changeTrainNo_, changeTrainNo) };


    // changeTrainTypeName Field Functions 
    bool hasChangeTrainTypeName() const { return this->changeTrainTypeName_ != nullptr;};
    void deleteChangeTrainTypeName() { this->changeTrainTypeName_ = nullptr;};
    inline string changeTrainTypeName() const { DARABONBA_PTR_GET_DEFAULT(changeTrainTypeName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setChangeTrainTypeName(string changeTrainTypeName) { DARABONBA_PTR_SET_VALUE(changeTrainTypeName_, changeTrainTypeName) };


    // checkInTime Field Functions 
    bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
    void deleteCheckInTime() { this->checkInTime_ = nullptr;};
    inline string checkInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


    // checkOutTime Field Functions 
    bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
    void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
    inline string checkOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fromCityName Field Functions 
    bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
    void deleteFromCityName() { this->fromCityName_ = nullptr;};
    inline string fromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


    // fromStationName Field Functions 
    bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
    void deleteFromStationName() { this->fromStationName_ = nullptr;};
    inline string fromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // originTicketNo Field Functions 
    bool hasOriginTicketNo() const { return this->originTicketNo_ != nullptr;};
    void deleteOriginTicketNo() { this->originTicketNo_ = nullptr;};
    inline string originTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originTicketNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setOriginTicketNo(string originTicketNo) { DARABONBA_PTR_SET_VALUE(originTicketNo_, originTicketNo) };


    // outTicketStatus Field Functions 
    bool hasOutTicketStatus() const { return this->outTicketStatus_ != nullptr;};
    void deleteOutTicketStatus() { this->outTicketStatus_ = nullptr;};
    inline string outTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(outTicketStatus_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setOutTicketStatus(string outTicketStatus) { DARABONBA_PTR_SET_VALUE(outTicketStatus_, outTicketStatus) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // shortTicketNo Field Functions 
    bool hasShortTicketNo() const { return this->shortTicketNo_ != nullptr;};
    void deleteShortTicketNo() { this->shortTicketNo_ = nullptr;};
    inline string shortTicketNo() const { DARABONBA_PTR_GET_DEFAULT(shortTicketNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setShortTicketNo(string shortTicketNo) { DARABONBA_PTR_SET_VALUE(shortTicketNo_, shortTicketNo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // ticketEntrance Field Functions 
    bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
    void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
    inline string ticketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline int32_t ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // toCityName Field Functions 
    bool hasToCityName() const { return this->toCityName_ != nullptr;};
    void deleteToCityName() { this->toCityName_ = nullptr;};
    inline string toCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


    // toStationName Field Functions 
    bool hasToStationName() const { return this->toStationName_ != nullptr;};
    void deleteToStationName() { this->toStationName_ = nullptr;};
    inline string toStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


    // useTicket Field Functions 
    bool hasUseTicket() const { return this->useTicket_ != nullptr;};
    void deleteUseTicket() { this->useTicket_ = nullptr;};
    inline string useTicket() const { DARABONBA_PTR_GET_DEFAULT(useTicket_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setUseTicket(string useTicket) { DARABONBA_PTR_SET_VALUE(useTicket_, useTicket) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> changeCoachNo_ = nullptr;
    std::shared_ptr<double> changeGapFee_ = nullptr;
    std::shared_ptr<double> changeHandlingFee_ = nullptr;
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<string> changeSeatNo_ = nullptr;
    std::shared_ptr<string> changeSeatTypeName_ = nullptr;
    std::shared_ptr<double> changeServiceFee_ = nullptr;
    std::shared_ptr<string> changeTrainNo_ = nullptr;
    std::shared_ptr<string> changeTrainTypeName_ = nullptr;
    std::shared_ptr<string> checkInTime_ = nullptr;
    std::shared_ptr<string> checkOutTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> fromCityName_ = nullptr;
    std::shared_ptr<string> fromStationName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<string> originTicketNo_ = nullptr;
    std::shared_ptr<string> outTicketStatus_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<string> shortTicketNo_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> ticketEntrance_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<int32_t> ticketStatus_ = nullptr;
    std::shared_ptr<string> toCityName_ = nullptr;
    std::shared_ptr<string> toStationName_ = nullptr;
    std::shared_ptr<string> useTicket_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
