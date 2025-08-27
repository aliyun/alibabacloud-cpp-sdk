// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOSREFUNDTRAININFOREFUNDTICKETINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOSREFUNDTRAININFOREFUNDTICKETINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(refund_cost, refundCost_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(refund_cost, refundCost_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
    };
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos(const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos(TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& operator=(TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->refundCost_ != nullptr && this->refundPrice_ != nullptr && this->ticketPrice_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // refundCost Field Functions 
    bool hasRefundCost() const { return this->refundCost_ != nullptr;};
    void deleteRefundCost() { this->refundCost_ = nullptr;};
    inline int64_t refundCost() const { DARABONBA_PTR_GET_DEFAULT(refundCost_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& setRefundCost(int64_t refundCost) { DARABONBA_PTR_SET_VALUE(refundCost_, refundCost) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


  protected:
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<int64_t> refundCost_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
