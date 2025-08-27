// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleChangeTicketInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleOrderBaseInfo.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModulePassengerInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleRefundTicketInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleTicketInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryResponseBodyModuleTrainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_ticket_info_list, changeTicketInfoList_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(refund_ticket_info_list, refundTicketInfoList_);
      DARABONBA_PTR_TO_JSON(ticket_info_list, ticketInfoList_);
      DARABONBA_PTR_TO_JSON(train_info, trainInfo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_ticket_info_list, changeTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_info_list, refundTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(ticket_info_list, ticketInfoList_);
      DARABONBA_PTR_FROM_JSON(train_info, trainInfo_);
    };
    TrainOrderQueryResponseBodyModule() = default ;
    TrainOrderQueryResponseBodyModule(const TrainOrderQueryResponseBodyModule &) = default ;
    TrainOrderQueryResponseBodyModule(TrainOrderQueryResponseBodyModule &&) = default ;
    TrainOrderQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryResponseBodyModule() = default ;
    TrainOrderQueryResponseBodyModule& operator=(const TrainOrderQueryResponseBodyModule &) = default ;
    TrainOrderQueryResponseBodyModule& operator=(TrainOrderQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTicketInfoList_ != nullptr
        && this->invoiceInfo_ != nullptr && this->orderBaseInfo_ != nullptr && this->passengerInfoList_ != nullptr && this->priceInfoList_ != nullptr && this->refundTicketInfoList_ != nullptr
        && this->ticketInfoList_ != nullptr && this->trainInfo_ != nullptr; };
    // changeTicketInfoList Field Functions 
    bool hasChangeTicketInfoList() const { return this->changeTicketInfoList_ != nullptr;};
    void deleteChangeTicketInfoList() { this->changeTicketInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList> & changeTicketInfoList() const { DARABONBA_PTR_GET_CONST(changeTicketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList>) };
    inline vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList> changeTicketInfoList() { DARABONBA_PTR_GET(changeTicketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList>) };
    inline TrainOrderQueryResponseBodyModule& setChangeTicketInfoList(const vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList> & changeTicketInfoList) { DARABONBA_PTR_SET_VALUE(changeTicketInfoList_, changeTicketInfoList) };
    inline TrainOrderQueryResponseBodyModule& setChangeTicketInfoList(vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList> && changeTicketInfoList) { DARABONBA_PTR_SET_RVALUE(changeTicketInfoList_, changeTicketInfoList) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::TrainOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::TrainOrderQueryResponseBodyModuleInvoiceInfo) };
    inline Models::TrainOrderQueryResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::TrainOrderQueryResponseBodyModuleInvoiceInfo) };
    inline TrainOrderQueryResponseBodyModule& setInvoiceInfo(const Models::TrainOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline TrainOrderQueryResponseBodyModule& setInvoiceInfo(Models::TrainOrderQueryResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo orderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline TrainOrderQueryResponseBodyModule& setOrderBaseInfo(const Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline TrainOrderQueryResponseBodyModule& setOrderBaseInfo(Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // passengerInfoList Field Functions 
    bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
    void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList> & passengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList>) };
    inline vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList> passengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList>) };
    inline TrainOrderQueryResponseBodyModule& setPassengerInfoList(const vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
    inline TrainOrderQueryResponseBodyModule& setPassengerInfoList(vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList>) };
    inline TrainOrderQueryResponseBodyModule& setPriceInfoList(const vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline TrainOrderQueryResponseBodyModule& setPriceInfoList(vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // refundTicketInfoList Field Functions 
    bool hasRefundTicketInfoList() const { return this->refundTicketInfoList_ != nullptr;};
    void deleteRefundTicketInfoList() { this->refundTicketInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList> & refundTicketInfoList() const { DARABONBA_PTR_GET_CONST(refundTicketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList>) };
    inline vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList> refundTicketInfoList() { DARABONBA_PTR_GET(refundTicketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList>) };
    inline TrainOrderQueryResponseBodyModule& setRefundTicketInfoList(const vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList> & refundTicketInfoList) { DARABONBA_PTR_SET_VALUE(refundTicketInfoList_, refundTicketInfoList) };
    inline TrainOrderQueryResponseBodyModule& setRefundTicketInfoList(vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList> && refundTicketInfoList) { DARABONBA_PTR_SET_RVALUE(refundTicketInfoList_, refundTicketInfoList) };


    // ticketInfoList Field Functions 
    bool hasTicketInfoList() const { return this->ticketInfoList_ != nullptr;};
    void deleteTicketInfoList() { this->ticketInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList> & ticketInfoList() const { DARABONBA_PTR_GET_CONST(ticketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList>) };
    inline vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList> ticketInfoList() { DARABONBA_PTR_GET(ticketInfoList_, vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList>) };
    inline TrainOrderQueryResponseBodyModule& setTicketInfoList(const vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList> & ticketInfoList) { DARABONBA_PTR_SET_VALUE(ticketInfoList_, ticketInfoList) };
    inline TrainOrderQueryResponseBodyModule& setTicketInfoList(vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList> && ticketInfoList) { DARABONBA_PTR_SET_RVALUE(ticketInfoList_, ticketInfoList) };


    // trainInfo Field Functions 
    bool hasTrainInfo() const { return this->trainInfo_ != nullptr;};
    void deleteTrainInfo() { this->trainInfo_ = nullptr;};
    inline const Models::TrainOrderQueryResponseBodyModuleTrainInfo & trainInfo() const { DARABONBA_PTR_GET_CONST(trainInfo_, Models::TrainOrderQueryResponseBodyModuleTrainInfo) };
    inline Models::TrainOrderQueryResponseBodyModuleTrainInfo trainInfo() { DARABONBA_PTR_GET(trainInfo_, Models::TrainOrderQueryResponseBodyModuleTrainInfo) };
    inline TrainOrderQueryResponseBodyModule& setTrainInfo(const Models::TrainOrderQueryResponseBodyModuleTrainInfo & trainInfo) { DARABONBA_PTR_SET_VALUE(trainInfo_, trainInfo) };
    inline TrainOrderQueryResponseBodyModule& setTrainInfo(Models::TrainOrderQueryResponseBodyModuleTrainInfo && trainInfo) { DARABONBA_PTR_SET_RVALUE(trainInfo_, trainInfo) };


  protected:
    std::shared_ptr<vector<Models::TrainOrderQueryResponseBodyModuleChangeTicketInfoList>> changeTicketInfoList_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryResponseBodyModulePassengerInfoList>> passengerInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryResponseBodyModuleRefundTicketInfoList>> refundTicketInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryResponseBodyModuleTicketInfoList>> ticketInfoList_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryResponseBodyModuleTrainInfo> trainInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
