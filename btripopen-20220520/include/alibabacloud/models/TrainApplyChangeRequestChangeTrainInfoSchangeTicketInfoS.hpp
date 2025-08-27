// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUESTCHANGETRAININFOSCHANGETICKETINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUESTCHANGETRAININFOSCHANGETICKETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_type, ticketType_);
    };
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS() = default ;
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS(const TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS &) = default ;
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS(TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS &&) = default ;
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS() = default ;
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& operator=(const TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS &) = default ;
    TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& operator=(TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerInfo_ != nullptr
        && this->seatType_ != nullptr && this->ticketPrice_ != nullptr && this->ticketType_ != nullptr; };
    // passengerInfo Field Functions 
    bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
    void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
    inline const Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo & passengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo) };
    inline Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo passengerInfo() { DARABONBA_PTR_GET(passengerInfo_, Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo) };
    inline TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& setPassengerInfo(const Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
    inline TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& setPassengerInfo(Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline string ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& setTicketPrice(string ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketType Field Functions 
    bool hasTicketType() const { return this->ticketType_ != nullptr;};
    void deleteTicketType() { this->ticketType_ = nullptr;};
    inline string ticketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
    inline TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoS& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::TrainApplyChangeRequestChangeTrainInfoSChangeTicketInfoSPassengerInfo> passengerInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> seatType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
