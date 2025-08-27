// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODYMODULEPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryResponseBodyModulePriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
      DARABONBA_PTR_TO_JSON(category_type, categoryType_);
      DARABONBA_PTR_TO_JSON(change_flight_no, changeFlightNo_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(original_ticket_no, originalTicketNo_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBodyModulePriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
      DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
      DARABONBA_PTR_FROM_JSON(change_flight_no, changeFlightNo_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(original_ticket_no, originalTicketNo_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOrderListQueryResponseBodyModulePriceInfoList() = default ;
    FlightOrderListQueryResponseBodyModulePriceInfoList(const FlightOrderListQueryResponseBodyModulePriceInfoList &) = default ;
    FlightOrderListQueryResponseBodyModulePriceInfoList(FlightOrderListQueryResponseBodyModulePriceInfoList &&) = default ;
    FlightOrderListQueryResponseBodyModulePriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBodyModulePriceInfoList() = default ;
    FlightOrderListQueryResponseBodyModulePriceInfoList& operator=(const FlightOrderListQueryResponseBodyModulePriceInfoList &) = default ;
    FlightOrderListQueryResponseBodyModulePriceInfoList& operator=(FlightOrderListQueryResponseBodyModulePriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCode_ != nullptr
        && this->categoryType_ != nullptr && this->changeFlightNo_ != nullptr && this->discount_ != nullptr && this->endTime_ != nullptr && this->gmtCreate_ != nullptr
        && this->originalTicketNo_ != nullptr && this->passengerName_ != nullptr && this->payType_ != nullptr && this->price_ != nullptr && this->startTime_ != nullptr
        && this->ticketNo_ != nullptr && this->tradeId_ != nullptr && this->type_ != nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline int32_t categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // changeFlightNo Field Functions 
    bool hasChangeFlightNo() const { return this->changeFlightNo_ != nullptr;};
    void deleteChangeFlightNo() { this->changeFlightNo_ = nullptr;};
    inline string changeFlightNo() const { DARABONBA_PTR_GET_DEFAULT(changeFlightNo_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setChangeFlightNo(string changeFlightNo) { DARABONBA_PTR_SET_VALUE(changeFlightNo_, changeFlightNo) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // originalTicketNo Field Functions 
    bool hasOriginalTicketNo() const { return this->originalTicketNo_ != nullptr;};
    void deleteOriginalTicketNo() { this->originalTicketNo_ = nullptr;};
    inline string originalTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originalTicketNo_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setOriginalTicketNo(string originalTicketNo) { DARABONBA_PTR_SET_VALUE(originalTicketNo_, originalTicketNo) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // tradeId Field Functions 
    bool hasTradeId() const { return this->tradeId_ != nullptr;};
    void deleteTradeId() { this->tradeId_ = nullptr;};
    inline string tradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOrderListQueryResponseBodyModulePriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> categoryCode_ = nullptr;
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    std::shared_ptr<string> changeFlightNo_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> originalTicketNo_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> tradeId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
