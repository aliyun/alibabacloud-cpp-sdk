// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderDetailInfoResponseBody() = default ;
    FlightOrderDetailInfoResponseBody(const FlightOrderDetailInfoResponseBody &) = default ;
    FlightOrderDetailInfoResponseBody(FlightOrderDetailInfoResponseBody &&) = default ;
    FlightOrderDetailInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailInfoResponseBody() = default ;
    FlightOrderDetailInfoResponseBody& operator=(const FlightOrderDetailInfoResponseBody &) = default ;
    FlightOrderDetailInfoResponseBody& operator=(FlightOrderDetailInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_TO_JSON(book_user_id, bookUserId_);
        DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_TO_JSON(contact_name, contactName_);
        DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
        DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
        DARABONBA_PTR_TO_JSON(settle_amount, settleAmount_);
        DARABONBA_PTR_TO_JSON(settle_type, settleType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(ticket_info_list, ticketInfoList_);
        DARABONBA_PTR_TO_JSON(total_build_price, totalBuildPrice_);
        DARABONBA_PTR_TO_JSON(total_oil_price, totalOilPrice_);
        DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
        DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_FROM_JSON(book_user_id, bookUserId_);
        DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
        DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
        DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
        DARABONBA_PTR_FROM_JSON(settle_amount, settleAmount_);
        DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(ticket_info_list, ticketInfoList_);
        DARABONBA_PTR_FROM_JSON(total_build_price, totalBuildPrice_);
        DARABONBA_PTR_FROM_JSON(total_oil_price, totalOilPrice_);
        DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
        DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoList_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TravelerInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TravelerInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
          DARABONBA_PTR_TO_JSON(cert_no, certNo_);
          DARABONBA_PTR_TO_JSON(cert_type, certType_);
          DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        TravelerInfoList() = default ;
        TravelerInfoList(const TravelerInfoList &) = default ;
        TravelerInfoList(TravelerInfoList &&) = default ;
        TravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TravelerInfoList() = default ;
        TravelerInfoList& operator=(const TravelerInfoList &) = default ;
        TravelerInfoList& operator=(TravelerInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->certNo_ == nullptr && this->certType_ == nullptr && this->openTicketStatus_ == nullptr && this->passengerName_ == nullptr && this->passengerType_ == nullptr
        && this->phone_ == nullptr && this->ticketNo_ == nullptr && this->userId_ == nullptr; };
        // birthDate Field Functions 
        bool hasBirthDate() const { return this->birthDate_ != nullptr;};
        void deleteBirthDate() { this->birthDate_ = nullptr;};
        inline string getBirthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
        inline TravelerInfoList& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


        // certNo Field Functions 
        bool hasCertNo() const { return this->certNo_ != nullptr;};
        void deleteCertNo() { this->certNo_ = nullptr;};
        inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
        inline TravelerInfoList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline TravelerInfoList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // openTicketStatus Field Functions 
        bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
        void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
        inline int32_t getOpenTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, 0) };
        inline TravelerInfoList& setOpenTicketStatus(int32_t openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline TravelerInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // passengerType Field Functions 
        bool hasPassengerType() const { return this->passengerType_ != nullptr;};
        void deletePassengerType() { this->passengerType_ = nullptr;};
        inline string getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, "") };
        inline TravelerInfoList& setPassengerType(string passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline TravelerInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline TravelerInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TravelerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> birthDate_ {};
        shared_ptr<string> certNo_ {};
        shared_ptr<string> certType_ {};
        shared_ptr<int32_t> openTicketStatus_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<string> passengerType_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> userId_ {};
      };

      class TicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
          DARABONBA_PTR_TO_JSON(pnr_code, pnrCode_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
        };
        friend void from_json(const Darabonba::Json& j, TicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
          DARABONBA_PTR_FROM_JSON(pnr_code, pnrCode_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
        };
        TicketInfoList() = default ;
        TicketInfoList(const TicketInfoList &) = default ;
        TicketInfoList(TicketInfoList &&) = default ;
        TicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TicketInfoList() = default ;
        TicketInfoList& operator=(const TicketInfoList &) = default ;
        TicketInfoList& operator=(TicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->openTicketStatus_ == nullptr
        && this->pnrCode_ == nullptr && this->ticketNo_ == nullptr && this->ticketStatus_ == nullptr; };
        // openTicketStatus Field Functions 
        bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
        void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
        inline string getOpenTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
        inline TicketInfoList& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


        // pnrCode Field Functions 
        bool hasPnrCode() const { return this->pnrCode_ != nullptr;};
        void deletePnrCode() { this->pnrCode_ = nullptr;};
        inline string getPnrCode() const { DARABONBA_PTR_GET_DEFAULT(pnrCode_, "") };
        inline TicketInfoList& setPnrCode(string pnrCode) { DARABONBA_PTR_SET_VALUE(pnrCode_, pnrCode) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline TicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketStatus Field Functions 
        bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
        void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
        inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
        inline TicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


      protected:
        shared_ptr<string> openTicketStatus_ {};
        shared_ptr<string> pnrCode_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> ticketStatus_ {};
      };

      class FlightInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
          DARABONBA_PTR_TO_JSON(airline_simple_name, airlineSimpleName_);
          DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_airport_code_name, arrAirportCodeName_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(baggage, baggage_);
          DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(carrier, carrier_);
          DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_airport_code_name, depAirportCodeName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(last_cabin, lastCabin_);
          DARABONBA_PTR_TO_JSON(last_flight_no, lastFlightNo_);
          DARABONBA_PTR_TO_JSON(meal, meal_);
          DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_TO_JSON(segment_type, segmentType_);
          DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
        };
        friend void from_json(const Darabonba::Json& j, FlightInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
          DARABONBA_PTR_FROM_JSON(airline_simple_name, airlineSimpleName_);
          DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code_name, arrAirportCodeName_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(baggage, baggage_);
          DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(carrier, carrier_);
          DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code_name, depAirportCodeName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(last_cabin, lastCabin_);
          DARABONBA_PTR_FROM_JSON(last_flight_no, lastFlightNo_);
          DARABONBA_PTR_FROM_JSON(meal, meal_);
          DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_FROM_JSON(segment_type, segmentType_);
          DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
        };
        FlightInfoList() = default ;
        FlightInfoList(const FlightInfoList &) = default ;
        FlightInfoList(FlightInfoList &&) = default ;
        FlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightInfoList() = default ;
        FlightInfoList& operator=(const FlightInfoList &) = default ;
        FlightInfoList& operator=(FlightInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->airlineSimpleName_ == nullptr && this->arrAirport_ == nullptr && this->arrAirportCode_ == nullptr && this->arrAirportCodeName_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->baggage_ == nullptr
        && this->buildPrice_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->carrier_ == nullptr && this->depAirport_ == nullptr
        && this->depAirportCode_ == nullptr && this->depAirportCodeName_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr
        && this->depTime_ == nullptr && this->flightNo_ == nullptr && this->lastCabin_ == nullptr && this->lastFlightNo_ == nullptr && this->meal_ == nullptr
        && this->oilPrice_ == nullptr && this->segmentType_ == nullptr && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopDepTime_ == nullptr
        && this->ticketPrice_ == nullptr && this->tuigaiqianInfo_ == nullptr; };
        // airlineCode Field Functions 
        bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
        void deleteAirlineCode() { this->airlineCode_ = nullptr;};
        inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
        inline FlightInfoList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


        // airlineName Field Functions 
        bool hasAirlineName() const { return this->airlineName_ != nullptr;};
        void deleteAirlineName() { this->airlineName_ = nullptr;};
        inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
        inline FlightInfoList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


        // airlineSimpleName Field Functions 
        bool hasAirlineSimpleName() const { return this->airlineSimpleName_ != nullptr;};
        void deleteAirlineSimpleName() { this->airlineSimpleName_ = nullptr;};
        inline string getAirlineSimpleName() const { DARABONBA_PTR_GET_DEFAULT(airlineSimpleName_, "") };
        inline FlightInfoList& setAirlineSimpleName(string airlineSimpleName) { DARABONBA_PTR_SET_VALUE(airlineSimpleName_, airlineSimpleName) };


        // arrAirport Field Functions 
        bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
        void deleteArrAirport() { this->arrAirport_ = nullptr;};
        inline string getArrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
        inline FlightInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrAirportCodeName Field Functions 
        bool hasArrAirportCodeName() const { return this->arrAirportCodeName_ != nullptr;};
        void deleteArrAirportCodeName() { this->arrAirportCodeName_ = nullptr;};
        inline string getArrAirportCodeName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCodeName_, "") };
        inline FlightInfoList& setArrAirportCodeName(string arrAirportCodeName) { DARABONBA_PTR_SET_VALUE(arrAirportCodeName_, arrAirportCodeName) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline FlightInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrTerminal Field Functions 
        bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
        void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
        inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
        inline FlightInfoList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // baggage Field Functions 
        bool hasBaggage() const { return this->baggage_ != nullptr;};
        void deleteBaggage() { this->baggage_ = nullptr;};
        inline string getBaggage() const { DARABONBA_PTR_GET_DEFAULT(baggage_, "") };
        inline FlightInfoList& setBaggage(string baggage) { DARABONBA_PTR_SET_VALUE(baggage_, baggage) };


        // buildPrice Field Functions 
        bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
        void deleteBuildPrice() { this->buildPrice_ = nullptr;};
        inline int64_t getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0L) };
        inline FlightInfoList& setBuildPrice(int64_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline FlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline FlightInfoList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // carrier Field Functions 
        bool hasCarrier() const { return this->carrier_ != nullptr;};
        void deleteCarrier() { this->carrier_ = nullptr;};
        inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
        inline FlightInfoList& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


        // depAirport Field Functions 
        bool hasDepAirport() const { return this->depAirport_ != nullptr;};
        void deleteDepAirport() { this->depAirport_ = nullptr;};
        inline string getDepAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
        inline FlightInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depAirportCodeName Field Functions 
        bool hasDepAirportCodeName() const { return this->depAirportCodeName_ != nullptr;};
        void deleteDepAirportCodeName() { this->depAirportCodeName_ = nullptr;};
        inline string getDepAirportCodeName() const { DARABONBA_PTR_GET_DEFAULT(depAirportCodeName_, "") };
        inline FlightInfoList& setDepAirportCodeName(string depAirportCodeName) { DARABONBA_PTR_SET_VALUE(depAirportCodeName_, depAirportCodeName) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline FlightInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depTerminal Field Functions 
        bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
        void deleteDepTerminal() { this->depTerminal_ = nullptr;};
        inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
        inline FlightInfoList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // lastCabin Field Functions 
        bool hasLastCabin() const { return this->lastCabin_ != nullptr;};
        void deleteLastCabin() { this->lastCabin_ = nullptr;};
        inline string getLastCabin() const { DARABONBA_PTR_GET_DEFAULT(lastCabin_, "") };
        inline FlightInfoList& setLastCabin(string lastCabin) { DARABONBA_PTR_SET_VALUE(lastCabin_, lastCabin) };


        // lastFlightNo Field Functions 
        bool hasLastFlightNo() const { return this->lastFlightNo_ != nullptr;};
        void deleteLastFlightNo() { this->lastFlightNo_ = nullptr;};
        inline string getLastFlightNo() const { DARABONBA_PTR_GET_DEFAULT(lastFlightNo_, "") };
        inline FlightInfoList& setLastFlightNo(string lastFlightNo) { DARABONBA_PTR_SET_VALUE(lastFlightNo_, lastFlightNo) };


        // meal Field Functions 
        bool hasMeal() const { return this->meal_ != nullptr;};
        void deleteMeal() { this->meal_ = nullptr;};
        inline string getMeal() const { DARABONBA_PTR_GET_DEFAULT(meal_, "") };
        inline FlightInfoList& setMeal(string meal) { DARABONBA_PTR_SET_VALUE(meal_, meal) };


        // oilPrice Field Functions 
        bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
        void deleteOilPrice() { this->oilPrice_ = nullptr;};
        inline int64_t getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0L) };
        inline FlightInfoList& setOilPrice(int64_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


        // segmentType Field Functions 
        bool hasSegmentType() const { return this->segmentType_ != nullptr;};
        void deleteSegmentType() { this->segmentType_ = nullptr;};
        inline int32_t getSegmentType() const { DARABONBA_PTR_GET_DEFAULT(segmentType_, 0) };
        inline FlightInfoList& setSegmentType(int32_t segmentType) { DARABONBA_PTR_SET_VALUE(segmentType_, segmentType) };


        // stopArrTime Field Functions 
        bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
        void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
        inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
        inline FlightInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
        inline FlightInfoList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


        // stopDepTime Field Functions 
        bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
        void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
        inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
        inline FlightInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
        inline FlightInfoList& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // tuigaiqianInfo Field Functions 
        bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
        void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
        inline string getTuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
        inline FlightInfoList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


      protected:
        shared_ptr<string> airlineCode_ {};
        shared_ptr<string> airlineName_ {};
        shared_ptr<string> airlineSimpleName_ {};
        shared_ptr<string> arrAirport_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrAirportCodeName_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrTerminal_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> baggage_ {};
        shared_ptr<int64_t> buildPrice_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> carrier_ {};
        shared_ptr<string> depAirport_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depAirportCodeName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depTerminal_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> lastCabin_ {};
        shared_ptr<string> lastFlightNo_ {};
        shared_ptr<string> meal_ {};
        shared_ptr<int64_t> oilPrice_ {};
        shared_ptr<int32_t> segmentType_ {};
        shared_ptr<string> stopArrTime_ {};
        shared_ptr<string> stopCity_ {};
        shared_ptr<string> stopDepTime_ {};
        shared_ptr<int64_t> ticketPrice_ {};
        shared_ptr<string> tuigaiqianInfo_ {};
      };

      virtual bool empty() const override { return this->alipayTradeNo_ == nullptr
        && this->bookUserId_ == nullptr && this->btripOrderId_ == nullptr && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->disOrderId_ == nullptr
        && this->extra_ == nullptr && this->flightInfoList_ == nullptr && this->lastPayTime_ == nullptr && this->payStatus_ == nullptr && this->payTime_ == nullptr
        && this->promotionPrice_ == nullptr && this->settleAmount_ == nullptr && this->settleType_ == nullptr && this->status_ == nullptr && this->ticketInfoList_ == nullptr
        && this->totalBuildPrice_ == nullptr && this->totalOilPrice_ == nullptr && this->totalOrderPrice_ == nullptr && this->travelerInfoList_ == nullptr; };
      // alipayTradeNo Field Functions 
      bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
      void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
      inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
      inline Module& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


      // bookUserId Field Functions 
      bool hasBookUserId() const { return this->bookUserId_ != nullptr;};
      void deleteBookUserId() { this->bookUserId_ = nullptr;};
      inline string getBookUserId() const { DARABONBA_PTR_GET_DEFAULT(bookUserId_, "") };
      inline Module& setBookUserId(string bookUserId) { DARABONBA_PTR_SET_VALUE(bookUserId_, bookUserId) };


      // btripOrderId Field Functions 
      bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
      void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
      inline int64_t getBtripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
      inline Module& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Module& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // contactPhone Field Functions 
      bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
      void deleteContactPhone() { this->contactPhone_ = nullptr;};
      inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
      inline Module& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


      // disOrderId Field Functions 
      bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
      void deleteDisOrderId() { this->disOrderId_ = nullptr;};
      inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
      inline Module& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Module& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // flightInfoList Field Functions 
      bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
      void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
      inline const vector<Module::FlightInfoList> & getFlightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Module::FlightInfoList>) };
      inline vector<Module::FlightInfoList> getFlightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Module::FlightInfoList>) };
      inline Module& setFlightInfoList(const vector<Module::FlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
      inline Module& setFlightInfoList(vector<Module::FlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


      // lastPayTime Field Functions 
      bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
      void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
      inline string getLastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
      inline Module& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Module& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // promotionPrice Field Functions 
      bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
      void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
      inline int64_t getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0L) };
      inline Module& setPromotionPrice(int64_t promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


      // settleAmount Field Functions 
      bool hasSettleAmount() const { return this->settleAmount_ != nullptr;};
      void deleteSettleAmount() { this->settleAmount_ = nullptr;};
      inline int64_t getSettleAmount() const { DARABONBA_PTR_GET_DEFAULT(settleAmount_, 0L) };
      inline Module& setSettleAmount(int64_t settleAmount) { DARABONBA_PTR_SET_VALUE(settleAmount_, settleAmount) };


      // settleType Field Functions 
      bool hasSettleType() const { return this->settleType_ != nullptr;};
      void deleteSettleType() { this->settleType_ = nullptr;};
      inline int32_t getSettleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
      inline Module& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // ticketInfoList Field Functions 
      bool hasTicketInfoList() const { return this->ticketInfoList_ != nullptr;};
      void deleteTicketInfoList() { this->ticketInfoList_ = nullptr;};
      inline const vector<Module::TicketInfoList> & getTicketInfoList() const { DARABONBA_PTR_GET_CONST(ticketInfoList_, vector<Module::TicketInfoList>) };
      inline vector<Module::TicketInfoList> getTicketInfoList() { DARABONBA_PTR_GET(ticketInfoList_, vector<Module::TicketInfoList>) };
      inline Module& setTicketInfoList(const vector<Module::TicketInfoList> & ticketInfoList) { DARABONBA_PTR_SET_VALUE(ticketInfoList_, ticketInfoList) };
      inline Module& setTicketInfoList(vector<Module::TicketInfoList> && ticketInfoList) { DARABONBA_PTR_SET_RVALUE(ticketInfoList_, ticketInfoList) };


      // totalBuildPrice Field Functions 
      bool hasTotalBuildPrice() const { return this->totalBuildPrice_ != nullptr;};
      void deleteTotalBuildPrice() { this->totalBuildPrice_ = nullptr;};
      inline int64_t getTotalBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(totalBuildPrice_, 0L) };
      inline Module& setTotalBuildPrice(int64_t totalBuildPrice) { DARABONBA_PTR_SET_VALUE(totalBuildPrice_, totalBuildPrice) };


      // totalOilPrice Field Functions 
      bool hasTotalOilPrice() const { return this->totalOilPrice_ != nullptr;};
      void deleteTotalOilPrice() { this->totalOilPrice_ = nullptr;};
      inline int64_t getTotalOilPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOilPrice_, 0L) };
      inline Module& setTotalOilPrice(int64_t totalOilPrice) { DARABONBA_PTR_SET_VALUE(totalOilPrice_, totalOilPrice) };


      // totalOrderPrice Field Functions 
      bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
      void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
      inline int64_t getTotalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
      inline Module& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


      // travelerInfoList Field Functions 
      bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
      void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
      inline const vector<Module::TravelerInfoList> & getTravelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<Module::TravelerInfoList>) };
      inline vector<Module::TravelerInfoList> getTravelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<Module::TravelerInfoList>) };
      inline Module& setTravelerInfoList(const vector<Module::TravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
      inline Module& setTravelerInfoList(vector<Module::TravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


    protected:
      shared_ptr<string> alipayTradeNo_ {};
      shared_ptr<string> bookUserId_ {};
      shared_ptr<int64_t> btripOrderId_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> contactPhone_ {};
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<vector<Module::FlightInfoList>> flightInfoList_ {};
      shared_ptr<string> lastPayTime_ {};
      shared_ptr<int32_t> payStatus_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<int64_t> promotionPrice_ {};
      shared_ptr<int64_t> settleAmount_ {};
      shared_ptr<int32_t> settleType_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<vector<Module::TicketInfoList>> ticketInfoList_ {};
      shared_ptr<int64_t> totalBuildPrice_ {};
      shared_ptr<int64_t> totalOilPrice_ {};
      shared_ptr<int64_t> totalOrderPrice_ {};
      shared_ptr<vector<Module::TravelerInfoList>> travelerInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOrderDetailInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderDetailInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightOrderDetailInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightOrderDetailInfoResponseBody::Module) };
    inline FlightOrderDetailInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightOrderDetailInfoResponseBody::Module) };
    inline FlightOrderDetailInfoResponseBody& setModule(const FlightOrderDetailInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderDetailInfoResponseBody& setModule(FlightOrderDetailInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderDetailInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderDetailInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderDetailInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightOrderDetailInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
