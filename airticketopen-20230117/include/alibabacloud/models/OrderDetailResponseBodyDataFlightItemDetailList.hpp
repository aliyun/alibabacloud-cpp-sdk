// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAFLIGHTITEMDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderDetailResponseBodyDataFlightItemDetailListFlightPrice.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataFlightItemDetailListPassenger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataFlightItemDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataFlightItemDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(b_pnr_list, bPnrList_);
      DARABONBA_PTR_TO_JSON(c_pnr_list, cPnrList_);
      DARABONBA_PTR_TO_JSON(flight_price, flightPrice_);
      DARABONBA_PTR_TO_JSON(flight_segment_cabin_relation, flightSegmentCabinRelation_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
      DARABONBA_PTR_TO_JSON(ticket_air_line, ticketAirLine_);
      DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataFlightItemDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(b_pnr_list, bPnrList_);
      DARABONBA_PTR_FROM_JSON(c_pnr_list, cPnrList_);
      DARABONBA_PTR_FROM_JSON(flight_price, flightPrice_);
      DARABONBA_PTR_FROM_JSON(flight_segment_cabin_relation, flightSegmentCabinRelation_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
      DARABONBA_PTR_FROM_JSON(ticket_air_line, ticketAirLine_);
      DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
    };
    OrderDetailResponseBodyDataFlightItemDetailList() = default ;
    OrderDetailResponseBodyDataFlightItemDetailList(const OrderDetailResponseBodyDataFlightItemDetailList &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailList(OrderDetailResponseBodyDataFlightItemDetailList &&) = default ;
    OrderDetailResponseBodyDataFlightItemDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataFlightItemDetailList() = default ;
    OrderDetailResponseBodyDataFlightItemDetailList& operator=(const OrderDetailResponseBodyDataFlightItemDetailList &) = default ;
    OrderDetailResponseBodyDataFlightItemDetailList& operator=(OrderDetailResponseBodyDataFlightItemDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bPnrList_ == nullptr
        && return this->cPnrList_ == nullptr && return this->flightPrice_ == nullptr && return this->flightSegmentCabinRelation_ == nullptr && return this->passenger_ == nullptr && return this->ticketAirLine_ == nullptr
        && return this->ticketNos_ == nullptr; };
    // bPnrList Field Functions 
    bool hasBPnrList() const { return this->bPnrList_ != nullptr;};
    void deleteBPnrList() { this->bPnrList_ = nullptr;};
    inline const vector<string> & bPnrList() const { DARABONBA_PTR_GET_CONST(bPnrList_, vector<string>) };
    inline vector<string> bPnrList() { DARABONBA_PTR_GET(bPnrList_, vector<string>) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setBPnrList(const vector<string> & bPnrList) { DARABONBA_PTR_SET_VALUE(bPnrList_, bPnrList) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setBPnrList(vector<string> && bPnrList) { DARABONBA_PTR_SET_RVALUE(bPnrList_, bPnrList) };


    // cPnrList Field Functions 
    bool hasCPnrList() const { return this->cPnrList_ != nullptr;};
    void deleteCPnrList() { this->cPnrList_ = nullptr;};
    inline const vector<string> & cPnrList() const { DARABONBA_PTR_GET_CONST(cPnrList_, vector<string>) };
    inline vector<string> cPnrList() { DARABONBA_PTR_GET(cPnrList_, vector<string>) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setCPnrList(const vector<string> & cPnrList) { DARABONBA_PTR_SET_VALUE(cPnrList_, cPnrList) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setCPnrList(vector<string> && cPnrList) { DARABONBA_PTR_SET_RVALUE(cPnrList_, cPnrList) };


    // flightPrice Field Functions 
    bool hasFlightPrice() const { return this->flightPrice_ != nullptr;};
    void deleteFlightPrice() { this->flightPrice_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice & flightPrice() const { DARABONBA_PTR_GET_CONST(flightPrice_, Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice) };
    inline Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice flightPrice() { DARABONBA_PTR_GET(flightPrice_, Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setFlightPrice(const Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice & flightPrice) { DARABONBA_PTR_SET_VALUE(flightPrice_, flightPrice) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setFlightPrice(Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice && flightPrice) { DARABONBA_PTR_SET_RVALUE(flightPrice_, flightPrice) };


    // flightSegmentCabinRelation Field Functions 
    bool hasFlightSegmentCabinRelation() const { return this->flightSegmentCabinRelation_ != nullptr;};
    void deleteFlightSegmentCabinRelation() { this->flightSegmentCabinRelation_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation> & flightSegmentCabinRelation() const { DARABONBA_PTR_GET_CONST(flightSegmentCabinRelation_, vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation>) };
    inline vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation> flightSegmentCabinRelation() { DARABONBA_PTR_GET(flightSegmentCabinRelation_, vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation>) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setFlightSegmentCabinRelation(const vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation> & flightSegmentCabinRelation) { DARABONBA_PTR_SET_VALUE(flightSegmentCabinRelation_, flightSegmentCabinRelation) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setFlightSegmentCabinRelation(vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation> && flightSegmentCabinRelation) { DARABONBA_PTR_SET_RVALUE(flightSegmentCabinRelation_, flightSegmentCabinRelation) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger) };
    inline Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setPassenger(const Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setPassenger(Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


    // ticketAirLine Field Functions 
    bool hasTicketAirLine() const { return this->ticketAirLine_ != nullptr;};
    void deleteTicketAirLine() { this->ticketAirLine_ = nullptr;};
    inline string ticketAirLine() const { DARABONBA_PTR_GET_DEFAULT(ticketAirLine_, "") };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setTicketAirLine(string ticketAirLine) { DARABONBA_PTR_SET_VALUE(ticketAirLine_, ticketAirLine) };


    // ticketNos Field Functions 
    bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
    void deleteTicketNos() { this->ticketNos_ = nullptr;};
    inline const vector<string> & ticketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
    inline vector<string> ticketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
    inline OrderDetailResponseBodyDataFlightItemDetailList& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


  protected:
    // b PNR(airline booking code) list
    std::shared_ptr<vector<string>> bPnrList_ = nullptr;
    // c PNR(airline booking code) list
    std::shared_ptr<vector<string>> cPnrList_ = nullptr;
    // flight price information for current passenger
    std::shared_ptr<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightPrice> flightPrice_ = nullptr;
    // RBD information in flight segment dimension
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataFlightItemDetailListFlightSegmentCabinRelation>> flightSegmentCabinRelation_ = nullptr;
    // passenger
    std::shared_ptr<Models::OrderDetailResponseBodyDataFlightItemDetailListPassenger> passenger_ = nullptr;
    // ticketing airline
    std::shared_ptr<string> ticketAirLine_ = nullptr;
    // ticket number list
    std::shared_ptr<vector<string>> ticketNos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
