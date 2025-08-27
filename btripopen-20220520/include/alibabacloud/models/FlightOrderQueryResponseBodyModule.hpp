// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleFlightTicketInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleInsuranceInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModuleOrderBaseInfo.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModulePassengerInfoList.hpp>
#include <alibabacloud/models/FlightOrderQueryResponseBodyModulePriceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_change_ticket_info_list, flightChangeTicketInfoList_);
      DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_TO_JSON(flight_refund_ticket_info_list, flightRefundTicketInfoList_);
      DARABONBA_PTR_TO_JSON(flight_ticket_info_list, flightTicketInfoList_);
      DARABONBA_PTR_TO_JSON(insurance_info_list, insuranceInfoList_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_change_ticket_info_list, flightChangeTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_ticket_info_list, flightRefundTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(flight_ticket_info_list, flightTicketInfoList_);
      DARABONBA_PTR_FROM_JSON(insurance_info_list, insuranceInfoList_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
    };
    FlightOrderQueryResponseBodyModule() = default ;
    FlightOrderQueryResponseBodyModule(const FlightOrderQueryResponseBodyModule &) = default ;
    FlightOrderQueryResponseBodyModule(FlightOrderQueryResponseBodyModule &&) = default ;
    FlightOrderQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModule() = default ;
    FlightOrderQueryResponseBodyModule& operator=(const FlightOrderQueryResponseBodyModule &) = default ;
    FlightOrderQueryResponseBodyModule& operator=(FlightOrderQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightChangeTicketInfoList_ != nullptr
        && this->flightInfoList_ != nullptr && this->flightRefundTicketInfoList_ != nullptr && this->flightTicketInfoList_ != nullptr && this->insuranceInfoList_ != nullptr && this->invoiceInfo_ != nullptr
        && this->orderBaseInfo_ != nullptr && this->passengerInfoList_ != nullptr && this->priceInfoList_ != nullptr; };
    // flightChangeTicketInfoList Field Functions 
    bool hasFlightChangeTicketInfoList() const { return this->flightChangeTicketInfoList_ != nullptr;};
    void deleteFlightChangeTicketInfoList() { this->flightChangeTicketInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList> & flightChangeTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightChangeTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList> flightChangeTicketInfoList() { DARABONBA_PTR_GET(flightChangeTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setFlightChangeTicketInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList> & flightChangeTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightChangeTicketInfoList_, flightChangeTicketInfoList) };
    inline FlightOrderQueryResponseBodyModule& setFlightChangeTicketInfoList(vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList> && flightChangeTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightChangeTicketInfoList_, flightChangeTicketInfoList) };


    // flightInfoList Field Functions 
    bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
    void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList> & flightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList> flightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setFlightInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
    inline FlightOrderQueryResponseBodyModule& setFlightInfoList(vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


    // flightRefundTicketInfoList Field Functions 
    bool hasFlightRefundTicketInfoList() const { return this->flightRefundTicketInfoList_ != nullptr;};
    void deleteFlightRefundTicketInfoList() { this->flightRefundTicketInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList> & flightRefundTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightRefundTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList> flightRefundTicketInfoList() { DARABONBA_PTR_GET(flightRefundTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setFlightRefundTicketInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList> & flightRefundTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightRefundTicketInfoList_, flightRefundTicketInfoList) };
    inline FlightOrderQueryResponseBodyModule& setFlightRefundTicketInfoList(vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList> && flightRefundTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightRefundTicketInfoList_, flightRefundTicketInfoList) };


    // flightTicketInfoList Field Functions 
    bool hasFlightTicketInfoList() const { return this->flightTicketInfoList_ != nullptr;};
    void deleteFlightTicketInfoList() { this->flightTicketInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList> & flightTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList> flightTicketInfoList() { DARABONBA_PTR_GET(flightTicketInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setFlightTicketInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList> & flightTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightTicketInfoList_, flightTicketInfoList) };
    inline FlightOrderQueryResponseBodyModule& setFlightTicketInfoList(vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList> && flightTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightTicketInfoList_, flightTicketInfoList) };


    // insuranceInfoList Field Functions 
    bool hasInsuranceInfoList() const { return this->insuranceInfoList_ != nullptr;};
    void deleteInsuranceInfoList() { this->insuranceInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList> & insuranceInfoList() const { DARABONBA_PTR_GET_CONST(insuranceInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList> insuranceInfoList() { DARABONBA_PTR_GET(insuranceInfoList_, vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setInsuranceInfoList(const vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList> & insuranceInfoList) { DARABONBA_PTR_SET_VALUE(insuranceInfoList_, insuranceInfoList) };
    inline FlightOrderQueryResponseBodyModule& setInsuranceInfoList(vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList> && insuranceInfoList) { DARABONBA_PTR_SET_RVALUE(insuranceInfoList_, insuranceInfoList) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::FlightOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::FlightOrderQueryResponseBodyModuleInvoiceInfo) };
    inline Models::FlightOrderQueryResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::FlightOrderQueryResponseBodyModuleInvoiceInfo) };
    inline FlightOrderQueryResponseBodyModule& setInvoiceInfo(const Models::FlightOrderQueryResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline FlightOrderQueryResponseBodyModule& setInvoiceInfo(Models::FlightOrderQueryResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo orderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo) };
    inline FlightOrderQueryResponseBodyModule& setOrderBaseInfo(const Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline FlightOrderQueryResponseBodyModule& setOrderBaseInfo(Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // passengerInfoList Field Functions 
    bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
    void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList> & passengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList> passengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setPassengerInfoList(const vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
    inline FlightOrderQueryResponseBodyModule& setPassengerInfoList(vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList>) };
    inline vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList>) };
    inline FlightOrderQueryResponseBodyModule& setPriceInfoList(const vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline FlightOrderQueryResponseBodyModule& setPriceInfoList(vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleFlightChangeTicketInfoList>> flightChangeTicketInfoList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleFlightInfoList>> flightInfoList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleFlightRefundTicketInfoList>> flightRefundTicketInfoList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleFlightTicketInfoList>> flightTicketInfoList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModuleInsuranceInfoList>> insuranceInfoList_ = nullptr;
    std::shared_ptr<Models::FlightOrderQueryResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<Models::FlightOrderQueryResponseBodyModuleOrderBaseInfo> orderBaseInfo_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModulePassengerInfoList>> passengerInfoList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderQueryResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
