// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBOOKTRAININFOSBOOKTICKETINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBOOKTRAININFOSBOOKTICKETINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequestBookTrainInfosBookTicketInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequestBookTrainInfosBookTicketInfos& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequestBookTrainInfosBookTicketInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_type, ticketType_);
    };
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos() = default ;
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos(const TrainOrderCreateRequestBookTrainInfosBookTicketInfos &) = default ;
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos(TrainOrderCreateRequestBookTrainInfosBookTicketInfos &&) = default ;
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequestBookTrainInfosBookTicketInfos() = default ;
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos& operator=(const TrainOrderCreateRequestBookTrainInfosBookTicketInfos &) = default ;
    TrainOrderCreateRequestBookTrainInfosBookTicketInfos& operator=(TrainOrderCreateRequestBookTrainInfosBookTicketInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->seatType_ != nullptr && this->ticketPrice_ != nullptr && this->ticketType_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderCreateRequestBookTrainInfosBookTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainOrderCreateRequestBookTrainInfosBookTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainOrderCreateRequestBookTrainInfosBookTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketType Field Functions 
    bool hasTicketType() const { return this->ticketType_ != nullptr;};
    void deleteTicketType() { this->ticketType_ = nullptr;};
    inline string ticketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
    inline TrainOrderCreateRequestBookTrainInfosBookTicketInfos& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> passengerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> seatType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
