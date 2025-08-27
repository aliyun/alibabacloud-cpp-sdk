// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOSCHANGETRAININFOSCHANGETICKETINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOSCHANGETRAININFOSCHANGETICKETINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& obj) { 
      DARABONBA_PTR_TO_JSON(change_cost, changeCost_);
      DARABONBA_PTR_TO_JSON(change_diff, changeDiff_);
      DARABONBA_PTR_TO_JSON(change_gap_handing_fee, changeGapHandingFee_);
      DARABONBA_PTR_TO_JSON(change_min_ticket_amount_handing_fee, changeMinTicketAmountHandingFee_);
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
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(change_cost, changeCost_);
      DARABONBA_PTR_FROM_JSON(change_diff, changeDiff_);
      DARABONBA_PTR_FROM_JSON(change_gap_handing_fee, changeGapHandingFee_);
      DARABONBA_PTR_FROM_JSON(change_min_ticket_amount_handing_fee, changeMinTicketAmountHandingFee_);
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
    };
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos(const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos(TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& operator=(TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeCost_ != nullptr
        && this->changeDiff_ != nullptr && this->changeGapHandingFee_ != nullptr && this->changeMinTicketAmountHandingFee_ != nullptr && this->coachNo_ != nullptr && this->failCode_ != nullptr
        && this->failReason_ != nullptr && this->passengerId_ != nullptr && this->realTicketPrice_ != nullptr && this->seatNo_ != nullptr && this->seatType_ != nullptr
        && this->ticketEntrance_ != nullptr && this->ticketPrice_ != nullptr && this->ticketStatus_ != nullptr; };
    // changeCost Field Functions 
    bool hasChangeCost() const { return this->changeCost_ != nullptr;};
    void deleteChangeCost() { this->changeCost_ = nullptr;};
    inline int64_t changeCost() const { DARABONBA_PTR_GET_DEFAULT(changeCost_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setChangeCost(int64_t changeCost) { DARABONBA_PTR_SET_VALUE(changeCost_, changeCost) };


    // changeDiff Field Functions 
    bool hasChangeDiff() const { return this->changeDiff_ != nullptr;};
    void deleteChangeDiff() { this->changeDiff_ = nullptr;};
    inline int64_t changeDiff() const { DARABONBA_PTR_GET_DEFAULT(changeDiff_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setChangeDiff(int64_t changeDiff) { DARABONBA_PTR_SET_VALUE(changeDiff_, changeDiff) };


    // changeGapHandingFee Field Functions 
    bool hasChangeGapHandingFee() const { return this->changeGapHandingFee_ != nullptr;};
    void deleteChangeGapHandingFee() { this->changeGapHandingFee_ = nullptr;};
    inline int64_t changeGapHandingFee() const { DARABONBA_PTR_GET_DEFAULT(changeGapHandingFee_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setChangeGapHandingFee(int64_t changeGapHandingFee) { DARABONBA_PTR_SET_VALUE(changeGapHandingFee_, changeGapHandingFee) };


    // changeMinTicketAmountHandingFee Field Functions 
    bool hasChangeMinTicketAmountHandingFee() const { return this->changeMinTicketAmountHandingFee_ != nullptr;};
    void deleteChangeMinTicketAmountHandingFee() { this->changeMinTicketAmountHandingFee_ = nullptr;};
    inline int64_t changeMinTicketAmountHandingFee() const { DARABONBA_PTR_GET_DEFAULT(changeMinTicketAmountHandingFee_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setChangeMinTicketAmountHandingFee(int64_t changeMinTicketAmountHandingFee) { DARABONBA_PTR_SET_VALUE(changeMinTicketAmountHandingFee_, changeMinTicketAmountHandingFee) };


    // coachNo Field Functions 
    bool hasCoachNo() const { return this->coachNo_ != nullptr;};
    void deleteCoachNo() { this->coachNo_ = nullptr;};
    inline string coachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // realTicketPrice Field Functions 
    bool hasRealTicketPrice() const { return this->realTicketPrice_ != nullptr;};
    void deleteRealTicketPrice() { this->realTicketPrice_ = nullptr;};
    inline int64_t realTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(realTicketPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setRealTicketPrice(int64_t realTicketPrice) { DARABONBA_PTR_SET_VALUE(realTicketPrice_, realTicketPrice) };


    // seatNo Field Functions 
    bool hasSeatNo() const { return this->seatNo_ != nullptr;};
    void deleteSeatNo() { this->seatNo_ = nullptr;};
    inline string seatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // ticketEntrance Field Functions 
    bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
    void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
    inline string ticketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfosChangeTicketInfos& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    std::shared_ptr<int64_t> changeCost_ = nullptr;
    std::shared_ptr<int64_t> changeDiff_ = nullptr;
    std::shared_ptr<int64_t> changeGapHandingFee_ = nullptr;
    std::shared_ptr<int64_t> changeMinTicketAmountHandingFee_ = nullptr;
    std::shared_ptr<string> coachNo_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<int64_t> realTicketPrice_ = nullptr;
    std::shared_ptr<string> seatNo_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<string> ticketEntrance_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
