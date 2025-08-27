// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOSBOOKTRAININFOSBOOKTICKETINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOSBOOKTRAININFOSBOOKTICKETINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& obj) { 
      DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
      DARABONBA_PTR_TO_JSON(fail_code, failCode_);
      DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(real_ticket_price, realTicketPrice_);
      DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
      DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
      DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(real_ticket_price, realTicketPrice_);
      DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(ticket_type, ticketType_);
    };
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos(const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos(TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& operator=(TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coachNo_ != nullptr
        && this->failCode_ != nullptr && this->failReason_ != nullptr && this->passengerId_ != nullptr && this->realTicketPrice_ != nullptr && this->seatNo_ != nullptr
        && this->seatType_ != nullptr && this->ticketEntrance_ != nullptr && this->ticketPrice_ != nullptr && this->ticketStatus_ != nullptr && this->ticketType_ != nullptr; };
    // coachNo Field Functions 
    bool hasCoachNo() const { return this->coachNo_ != nullptr;};
    void deleteCoachNo() { this->coachNo_ = nullptr;};
    inline string coachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // realTicketPrice Field Functions 
    bool hasRealTicketPrice() const { return this->realTicketPrice_ != nullptr;};
    void deleteRealTicketPrice() { this->realTicketPrice_ = nullptr;};
    inline int64_t realTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(realTicketPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setRealTicketPrice(int64_t realTicketPrice) { DARABONBA_PTR_SET_VALUE(realTicketPrice_, realTicketPrice) };


    // seatNo Field Functions 
    bool hasSeatNo() const { return this->seatNo_ != nullptr;};
    void deleteSeatNo() { this->seatNo_ = nullptr;};
    inline string seatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // ticketEntrance Field Functions 
    bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
    void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
    inline string ticketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline int32_t ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // ticketType Field Functions 
    bool hasTicketType() const { return this->ticketType_ != nullptr;};
    void deleteTicketType() { this->ticketType_ = nullptr;};
    inline string ticketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfosBookTicketInfos& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


  protected:
    std::shared_ptr<string> coachNo_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<int64_t> realTicketPrice_ = nullptr;
    std::shared_ptr<string> seatNo_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<string> ticketEntrance_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
    std::shared_ptr<int32_t> ticketStatus_ = nullptr;
    std::shared_ptr<string> ticketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
