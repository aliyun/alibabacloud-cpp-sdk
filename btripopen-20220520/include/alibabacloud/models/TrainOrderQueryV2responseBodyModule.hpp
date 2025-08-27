// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModulePassengerInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList.hpp>
#include <alibabacloud/models/TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_ticket_info_list, changeTicketInfoList_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(refund_ticket_info_list, refundTicketInfoList_);
      DARABONBA_PTR_TO_JSON(train_order_info, trainOrderInfo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_ticket_info_list, changeTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_info_list, refundTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(train_order_info, trainOrderInfo_);
    };
    TrainOrderQueryV2ResponseBodyModule() = default ;
    TrainOrderQueryV2ResponseBodyModule(const TrainOrderQueryV2ResponseBodyModule &) = default ;
    TrainOrderQueryV2ResponseBodyModule(TrainOrderQueryV2ResponseBodyModule &&) = default ;
    TrainOrderQueryV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModule() = default ;
    TrainOrderQueryV2ResponseBodyModule& operator=(const TrainOrderQueryV2ResponseBodyModule &) = default ;
    TrainOrderQueryV2ResponseBodyModule& operator=(TrainOrderQueryV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeTicketInfoList_ != nullptr
        && this->invoiceInfo_ != nullptr && this->orderBaseInfo_ != nullptr && this->passengerInfoList_ != nullptr && this->priceInfoList_ != nullptr && this->refundTicketInfoList_ != nullptr
        && this->trainOrderInfo_ != nullptr; };
    // changeTicketInfoList Field Functions 
    bool hasChangeTicketInfoList() const { return this->changeTicketInfoList_ != nullptr;};
    void deleteChangeTicketInfoList() { this->changeTicketInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList> & changeTicketInfoList() const { DARABONBA_PTR_GET_CONST(changeTicketInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList> changeTicketInfoList() { DARABONBA_PTR_GET(changeTicketInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList>) };
    inline TrainOrderQueryV2ResponseBodyModule& setChangeTicketInfoList(const vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList> & changeTicketInfoList) { DARABONBA_PTR_SET_VALUE(changeTicketInfoList_, changeTicketInfoList) };
    inline TrainOrderQueryV2ResponseBodyModule& setChangeTicketInfoList(vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList> && changeTicketInfoList) { DARABONBA_PTR_SET_RVALUE(changeTicketInfoList_, changeTicketInfoList) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo) };
    inline Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setInvoiceInfo(const Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setInvoiceInfo(Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo & orderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo) };
    inline Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo orderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setOrderBaseInfo(const Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setOrderBaseInfo(Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // passengerInfoList Field Functions 
    bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
    void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList> & passengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList> passengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList>) };
    inline TrainOrderQueryV2ResponseBodyModule& setPassengerInfoList(const vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
    inline TrainOrderQueryV2ResponseBodyModule& setPassengerInfoList(vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList>) };
    inline TrainOrderQueryV2ResponseBodyModule& setPriceInfoList(const vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline TrainOrderQueryV2ResponseBodyModule& setPriceInfoList(vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // refundTicketInfoList Field Functions 
    bool hasRefundTicketInfoList() const { return this->refundTicketInfoList_ != nullptr;};
    void deleteRefundTicketInfoList() { this->refundTicketInfoList_ = nullptr;};
    inline const vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList> & refundTicketInfoList() const { DARABONBA_PTR_GET_CONST(refundTicketInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList>) };
    inline vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList> refundTicketInfoList() { DARABONBA_PTR_GET(refundTicketInfoList_, vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList>) };
    inline TrainOrderQueryV2ResponseBodyModule& setRefundTicketInfoList(const vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList> & refundTicketInfoList) { DARABONBA_PTR_SET_VALUE(refundTicketInfoList_, refundTicketInfoList) };
    inline TrainOrderQueryV2ResponseBodyModule& setRefundTicketInfoList(vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList> && refundTicketInfoList) { DARABONBA_PTR_SET_RVALUE(refundTicketInfoList_, refundTicketInfoList) };


    // trainOrderInfo Field Functions 
    bool hasTrainOrderInfo() const { return this->trainOrderInfo_ != nullptr;};
    void deleteTrainOrderInfo() { this->trainOrderInfo_ = nullptr;};
    inline const Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo & trainOrderInfo() const { DARABONBA_PTR_GET_CONST(trainOrderInfo_, Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo) };
    inline Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo trainOrderInfo() { DARABONBA_PTR_GET(trainOrderInfo_, Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setTrainOrderInfo(const Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo & trainOrderInfo) { DARABONBA_PTR_SET_VALUE(trainOrderInfo_, trainOrderInfo) };
    inline TrainOrderQueryV2ResponseBodyModule& setTrainOrderInfo(Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo && trainOrderInfo) { DARABONBA_PTR_SET_RVALUE(trainOrderInfo_, trainOrderInfo) };


  protected:
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModuleChangeTicketInfoList>> changeTicketInfoList_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryV2ResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryV2ResponseBodyModuleOrderBaseInfo> orderBaseInfo_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModulePassengerInfoList>> passengerInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList>> refundTicketInfoList_ = nullptr;
    std::shared_ptr<Models::TrainOrderQueryV2ResponseBodyModuleTrainOrderInfo> trainOrderInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
