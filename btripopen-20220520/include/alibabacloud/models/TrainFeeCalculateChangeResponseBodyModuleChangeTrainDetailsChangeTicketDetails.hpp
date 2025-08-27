// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULECHANGETRAINDETAILSCHANGETICKETDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODYMODULECHANGETRAINDETAILSCHANGETICKETDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(change_rate, changeRate_);
      DARABONBA_PTR_TO_JSON(change_refund_fee, changeRefundFee_);
      DARABONBA_PTR_TO_JSON(change_refund_rate, changeRefundRate_);
      DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_TO_JSON(seat_type, seatType_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(change_rate, changeRate_);
      DARABONBA_PTR_FROM_JSON(change_refund_fee, changeRefundFee_);
      DARABONBA_PTR_FROM_JSON(change_refund_rate, changeRefundRate_);
      DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
    };
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails() = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails(const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails &) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails(TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails &&) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails() = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& operator=(const TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails &) = default ;
    TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& operator=(TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeFee_ != nullptr
        && this->changeRate_ != nullptr && this->changeRefundFee_ != nullptr && this->changeRefundRate_ != nullptr && this->passengerInfo_ != nullptr && this->seatType_ != nullptr
        && this->ticketPrice_ != nullptr; };
    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline int64_t changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // changeRate Field Functions 
    bool hasChangeRate() const { return this->changeRate_ != nullptr;};
    void deleteChangeRate() { this->changeRate_ = nullptr;};
    inline int64_t changeRate() const { DARABONBA_PTR_GET_DEFAULT(changeRate_, 0L) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setChangeRate(int64_t changeRate) { DARABONBA_PTR_SET_VALUE(changeRate_, changeRate) };


    // changeRefundFee Field Functions 
    bool hasChangeRefundFee() const { return this->changeRefundFee_ != nullptr;};
    void deleteChangeRefundFee() { this->changeRefundFee_ = nullptr;};
    inline int64_t changeRefundFee() const { DARABONBA_PTR_GET_DEFAULT(changeRefundFee_, 0L) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setChangeRefundFee(int64_t changeRefundFee) { DARABONBA_PTR_SET_VALUE(changeRefundFee_, changeRefundFee) };


    // changeRefundRate Field Functions 
    bool hasChangeRefundRate() const { return this->changeRefundRate_ != nullptr;};
    void deleteChangeRefundRate() { this->changeRefundRate_ = nullptr;};
    inline int64_t changeRefundRate() const { DARABONBA_PTR_GET_DEFAULT(changeRefundRate_, 0L) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setChangeRefundRate(int64_t changeRefundRate) { DARABONBA_PTR_SET_VALUE(changeRefundRate_, changeRefundRate) };


    // passengerInfo Field Functions 
    bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
    void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
    inline const Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo & passengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo) };
    inline Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo passengerInfo() { DARABONBA_PTR_GET(passengerInfo_, Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setPassengerInfo(const Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setPassengerInfo(Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string seatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetails& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


  protected:
    std::shared_ptr<int64_t> changeFee_ = nullptr;
    std::shared_ptr<int64_t> changeRate_ = nullptr;
    std::shared_ptr<int64_t> changeRefundFee_ = nullptr;
    std::shared_ptr<int64_t> changeRefundRate_ = nullptr;
    std::shared_ptr<Models::TrainFeeCalculateChangeResponseBodyModuleChangeTrainDetailsChangeTicketDetailsPassengerInfo> passengerInfo_ = nullptr;
    std::shared_ptr<string> seatType_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
