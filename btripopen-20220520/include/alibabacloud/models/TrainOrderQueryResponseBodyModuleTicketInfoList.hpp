// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULETICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULETICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryResponseBodyModuleTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryResponseBodyModuleTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(changed, changed_);
      DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(out_ticket_status, outTicketStatus_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
      DARABONBA_PTR_TO_JSON(seat_type_name, seatTypeName_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_TO_JSON(train_type_name, trainTypeName_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryResponseBodyModuleTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(changed, changed_);
      DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
      DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
      DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(out_ticket_status, outTicketStatus_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
      DARABONBA_PTR_FROM_JSON(seat_type_name, seatTypeName_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(train_type_name, trainTypeName_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TrainOrderQueryResponseBodyModuleTicketInfoList() = default ;
    TrainOrderQueryResponseBodyModuleTicketInfoList(const TrainOrderQueryResponseBodyModuleTicketInfoList &) = default ;
    TrainOrderQueryResponseBodyModuleTicketInfoList(TrainOrderQueryResponseBodyModuleTicketInfoList &&) = default ;
    TrainOrderQueryResponseBodyModuleTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryResponseBodyModuleTicketInfoList() = default ;
    TrainOrderQueryResponseBodyModuleTicketInfoList& operator=(const TrainOrderQueryResponseBodyModuleTicketInfoList &) = default ;
    TrainOrderQueryResponseBodyModuleTicketInfoList& operator=(TrainOrderQueryResponseBodyModuleTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changed_ != nullptr
        && this->checkInTime_ != nullptr && this->checkOutTime_ != nullptr && this->coachNo_ != nullptr && this->endTime_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModify_ != nullptr && this->outTicketStatus_ != nullptr && this->payType_ != nullptr && this->seatNo_ != nullptr && this->seatTypeName_ != nullptr
        && this->serviceFee_ != nullptr && this->startTime_ != nullptr && this->ticketNo_ != nullptr && this->ticketPrice_ != nullptr && this->ticketStatus_ != nullptr
        && this->trainTypeName_ != nullptr && this->userId_ != nullptr; };
    // changed Field Functions 
    bool hasChanged() const { return this->changed_ != nullptr;};
    void deleteChanged() { this->changed_ = nullptr;};
    inline bool changed() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


    // checkInTime Field Functions 
    bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
    void deleteCheckInTime() { this->checkInTime_ = nullptr;};
    inline string checkInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


    // checkOutTime Field Functions 
    bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
    void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
    inline string checkOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


    // coachNo Field Functions 
    bool hasCoachNo() const { return this->coachNo_ != nullptr;};
    void deleteCoachNo() { this->coachNo_ = nullptr;};
    inline string coachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // outTicketStatus Field Functions 
    bool hasOutTicketStatus() const { return this->outTicketStatus_ != nullptr;};
    void deleteOutTicketStatus() { this->outTicketStatus_ = nullptr;};
    inline string outTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(outTicketStatus_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setOutTicketStatus(string outTicketStatus) { DARABONBA_PTR_SET_VALUE(outTicketStatus_, outTicketStatus) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // seatNo Field Functions 
    bool hasSeatNo() const { return this->seatNo_ != nullptr;};
    void deleteSeatNo() { this->seatNo_ = nullptr;};
    inline string seatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


    // seatTypeName Field Functions 
    bool hasSeatTypeName() const { return this->seatTypeName_ != nullptr;};
    void deleteSeatTypeName() { this->seatTypeName_ = nullptr;};
    inline string seatTypeName() const { DARABONBA_PTR_GET_DEFAULT(seatTypeName_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setSeatTypeName(string seatTypeName) { DARABONBA_PTR_SET_VALUE(seatTypeName_, seatTypeName) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline double ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline int32_t ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // trainTypeName Field Functions 
    bool hasTrainTypeName() const { return this->trainTypeName_ != nullptr;};
    void deleteTrainTypeName() { this->trainTypeName_ = nullptr;};
    inline string trainTypeName() const { DARABONBA_PTR_GET_DEFAULT(trainTypeName_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setTrainTypeName(string trainTypeName) { DARABONBA_PTR_SET_VALUE(trainTypeName_, trainTypeName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryResponseBodyModuleTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> changed_ = nullptr;
    std::shared_ptr<string> checkInTime_ = nullptr;
    std::shared_ptr<string> checkOutTime_ = nullptr;
    std::shared_ptr<string> coachNo_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<string> outTicketStatus_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<string> seatNo_ = nullptr;
    std::shared_ptr<string> seatTypeName_ = nullptr;
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<double> ticketPrice_ = nullptr;
    std::shared_ptr<int32_t> ticketStatus_ = nullptr;
    std::shared_ptr<string> trainTypeName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
