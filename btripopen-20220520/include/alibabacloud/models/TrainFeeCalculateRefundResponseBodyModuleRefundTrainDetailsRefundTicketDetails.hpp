// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULEREFUNDTRAINDETAILSREFUNDTICKETDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODYMODULEREFUNDTRAINDETAILSREFUNDTICKETDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& obj) { 
      DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
      DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_TO_JSON(refund_cost_fee, refundCostFee_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(refund_rate, refundRate_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
      DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_FROM_JSON(refund_cost_fee, refundCostFee_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(refund_rate, refundRate_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
    };
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails() = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails(const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails &) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails(TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails &&) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails() = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& operator=(const TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails &) = default ;
    TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& operator=(TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canRefund_ != nullptr
        && this->passengerInfo_ != nullptr && this->refundCostFee_ != nullptr && this->refundPrice_ != nullptr && this->refundRate_ != nullptr && this->ticketPrice_ != nullptr; };
    // canRefund Field Functions 
    bool hasCanRefund() const { return this->canRefund_ != nullptr;};
    void deleteCanRefund() { this->canRefund_ = nullptr;};
    inline bool canRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


    // passengerInfo Field Functions 
    bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
    void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
    inline const Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo & passengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo) };
    inline Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo passengerInfo() { DARABONBA_PTR_GET(passengerInfo_, Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setPassengerInfo(const Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setPassengerInfo(Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


    // refundCostFee Field Functions 
    bool hasRefundCostFee() const { return this->refundCostFee_ != nullptr;};
    void deleteRefundCostFee() { this->refundCostFee_ = nullptr;};
    inline int64_t refundCostFee() const { DARABONBA_PTR_GET_DEFAULT(refundCostFee_, 0L) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setRefundCostFee(int64_t refundCostFee) { DARABONBA_PTR_SET_VALUE(refundCostFee_, refundCostFee) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // refundRate Field Functions 
    bool hasRefundRate() const { return this->refundRate_ != nullptr;};
    void deleteRefundRate() { this->refundRate_ = nullptr;};
    inline int64_t refundRate() const { DARABONBA_PTR_GET_DEFAULT(refundRate_, 0L) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setRefundRate(int64_t refundRate) { DARABONBA_PTR_SET_VALUE(refundRate_, refundRate) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetails& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


  protected:
    std::shared_ptr<bool> canRefund_ = nullptr;
    std::shared_ptr<Models::TrainFeeCalculateRefundResponseBodyModuleRefundTrainDetailsRefundTicketDetailsPassengerInfo> passengerInfo_ = nullptr;
    std::shared_ptr<int64_t> refundCostFee_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<int64_t> refundRate_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
