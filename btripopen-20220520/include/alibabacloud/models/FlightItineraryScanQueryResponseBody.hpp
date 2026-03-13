// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTITINERARYSCANQUERYRESPONSEBODY_HPP_
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
  class FlightItineraryScanQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightItineraryScanQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightItineraryScanQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightItineraryScanQueryResponseBody() = default ;
    FlightItineraryScanQueryResponseBody(const FlightItineraryScanQueryResponseBody &) = default ;
    FlightItineraryScanQueryResponseBody(FlightItineraryScanQueryResponseBody &&) = default ;
    FlightItineraryScanQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightItineraryScanQueryResponseBody() = default ;
    FlightItineraryScanQueryResponseBody& operator=(const FlightItineraryScanQueryResponseBody &) = default ;
    FlightItineraryScanQueryResponseBody& operator=(FlightItineraryScanQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page_no, pageNo_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_page, totalPage_);
        DARABONBA_PTR_TO_JSON(total_size, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
        DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(agent_code, agentCode_);
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(bill_date, billDate_);
          DARABONBA_PTR_TO_JSON(blue_or_red, blueOrRed_);
          DARABONBA_PTR_TO_JSON(build, build_);
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(flights, flights_);
          DARABONBA_PTR_TO_JSON(fuel_surcharge, fuelSurcharge_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(insurance, insurance_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_TO_JSON(issue_company, issueCompany_);
          DARABONBA_PTR_TO_JSON(issue_date, issueDate_);
          DARABONBA_PTR_TO_JSON(itinerary_num, itineraryNum_);
          DARABONBA_PTR_TO_JSON(ofd_oss_url, ofdOssUrl_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(oss_url, ossUrl_);
          DARABONBA_PTR_TO_JSON(other_taxes, otherTaxes_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pdf_oss_url, pdfOssUrl_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(prompt_message, promptMessage_);
          DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
          DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
          DARABONBA_PTR_TO_JSON(purchaser_type, purchaserType_);
          DARABONBA_PTR_TO_JSON(tax_amount, taxAmount_);
          DARABONBA_PTR_TO_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
          DARABONBA_PTR_TO_JSON(validation_code, validationCode_);
          DARABONBA_PTR_TO_JSON(xml_oss_url, xmlOssUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(agent_code, agentCode_);
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
          DARABONBA_PTR_FROM_JSON(blue_or_red, blueOrRed_);
          DARABONBA_PTR_FROM_JSON(build, build_);
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(flights, flights_);
          DARABONBA_PTR_FROM_JSON(fuel_surcharge, fuelSurcharge_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(insurance, insurance_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_FROM_JSON(issue_company, issueCompany_);
          DARABONBA_PTR_FROM_JSON(issue_date, issueDate_);
          DARABONBA_PTR_FROM_JSON(itinerary_num, itineraryNum_);
          DARABONBA_PTR_FROM_JSON(ofd_oss_url, ofdOssUrl_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(oss_url, ossUrl_);
          DARABONBA_PTR_FROM_JSON(other_taxes, otherTaxes_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(pdf_oss_url, pdfOssUrl_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(prompt_message, promptMessage_);
          DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
          DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
          DARABONBA_PTR_FROM_JSON(purchaser_type, purchaserType_);
          DARABONBA_PTR_FROM_JSON(tax_amount, taxAmount_);
          DARABONBA_PTR_FROM_JSON(tax_rate, taxRate_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
          DARABONBA_PTR_FROM_JSON(validation_code, validationCode_);
          DARABONBA_PTR_FROM_JSON(xml_oss_url, xmlOssUrl_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Flights : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Flights& obj) { 
            DARABONBA_PTR_TO_JSON(arrival_station, arrivalStation_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(carrier, carrier_);
            DARABONBA_PTR_TO_JSON(departure_station, departureStation_);
            DARABONBA_PTR_TO_JSON(flight_date, flightDate_);
            DARABONBA_PTR_TO_JSON(flight_number, flightNumber_);
            DARABONBA_PTR_TO_JSON(flight_time, flightTime_);
            DARABONBA_PTR_TO_JSON(free_baggage_allowance, freeBaggageAllowance_);
            DARABONBA_PTR_TO_JSON(index, index_);
            DARABONBA_PTR_TO_JSON(seat_class, seatClass_);
            DARABONBA_PTR_TO_JSON(valid_from_date, validFromDate_);
            DARABONBA_PTR_TO_JSON(valid_to_date, validToDate_);
          };
          friend void from_json(const Darabonba::Json& j, Flights& obj) { 
            DARABONBA_PTR_FROM_JSON(arrival_station, arrivalStation_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(carrier, carrier_);
            DARABONBA_PTR_FROM_JSON(departure_station, departureStation_);
            DARABONBA_PTR_FROM_JSON(flight_date, flightDate_);
            DARABONBA_PTR_FROM_JSON(flight_number, flightNumber_);
            DARABONBA_PTR_FROM_JSON(flight_time, flightTime_);
            DARABONBA_PTR_FROM_JSON(free_baggage_allowance, freeBaggageAllowance_);
            DARABONBA_PTR_FROM_JSON(index, index_);
            DARABONBA_PTR_FROM_JSON(seat_class, seatClass_);
            DARABONBA_PTR_FROM_JSON(valid_from_date, validFromDate_);
            DARABONBA_PTR_FROM_JSON(valid_to_date, validToDate_);
          };
          Flights() = default ;
          Flights(const Flights &) = default ;
          Flights(Flights &&) = default ;
          Flights(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Flights() = default ;
          Flights& operator=(const Flights &) = default ;
          Flights& operator=(Flights &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrivalStation_ == nullptr
        && this->cabinClass_ == nullptr && this->carrier_ == nullptr && this->departureStation_ == nullptr && this->flightDate_ == nullptr && this->flightNumber_ == nullptr
        && this->flightTime_ == nullptr && this->freeBaggageAllowance_ == nullptr && this->index_ == nullptr && this->seatClass_ == nullptr && this->validFromDate_ == nullptr
        && this->validToDate_ == nullptr; };
          // arrivalStation Field Functions 
          bool hasArrivalStation() const { return this->arrivalStation_ != nullptr;};
          void deleteArrivalStation() { this->arrivalStation_ = nullptr;};
          inline string getArrivalStation() const { DARABONBA_PTR_GET_DEFAULT(arrivalStation_, "") };
          inline Flights& setArrivalStation(string arrivalStation) { DARABONBA_PTR_SET_VALUE(arrivalStation_, arrivalStation) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline Flights& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // carrier Field Functions 
          bool hasCarrier() const { return this->carrier_ != nullptr;};
          void deleteCarrier() { this->carrier_ = nullptr;};
          inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
          inline Flights& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


          // departureStation Field Functions 
          bool hasDepartureStation() const { return this->departureStation_ != nullptr;};
          void deleteDepartureStation() { this->departureStation_ = nullptr;};
          inline string getDepartureStation() const { DARABONBA_PTR_GET_DEFAULT(departureStation_, "") };
          inline Flights& setDepartureStation(string departureStation) { DARABONBA_PTR_SET_VALUE(departureStation_, departureStation) };


          // flightDate Field Functions 
          bool hasFlightDate() const { return this->flightDate_ != nullptr;};
          void deleteFlightDate() { this->flightDate_ = nullptr;};
          inline string getFlightDate() const { DARABONBA_PTR_GET_DEFAULT(flightDate_, "") };
          inline Flights& setFlightDate(string flightDate) { DARABONBA_PTR_SET_VALUE(flightDate_, flightDate) };


          // flightNumber Field Functions 
          bool hasFlightNumber() const { return this->flightNumber_ != nullptr;};
          void deleteFlightNumber() { this->flightNumber_ = nullptr;};
          inline string getFlightNumber() const { DARABONBA_PTR_GET_DEFAULT(flightNumber_, "") };
          inline Flights& setFlightNumber(string flightNumber) { DARABONBA_PTR_SET_VALUE(flightNumber_, flightNumber) };


          // flightTime Field Functions 
          bool hasFlightTime() const { return this->flightTime_ != nullptr;};
          void deleteFlightTime() { this->flightTime_ = nullptr;};
          inline string getFlightTime() const { DARABONBA_PTR_GET_DEFAULT(flightTime_, "") };
          inline Flights& setFlightTime(string flightTime) { DARABONBA_PTR_SET_VALUE(flightTime_, flightTime) };


          // freeBaggageAllowance Field Functions 
          bool hasFreeBaggageAllowance() const { return this->freeBaggageAllowance_ != nullptr;};
          void deleteFreeBaggageAllowance() { this->freeBaggageAllowance_ = nullptr;};
          inline string getFreeBaggageAllowance() const { DARABONBA_PTR_GET_DEFAULT(freeBaggageAllowance_, "") };
          inline Flights& setFreeBaggageAllowance(string freeBaggageAllowance) { DARABONBA_PTR_SET_VALUE(freeBaggageAllowance_, freeBaggageAllowance) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline Flights& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // seatClass Field Functions 
          bool hasSeatClass() const { return this->seatClass_ != nullptr;};
          void deleteSeatClass() { this->seatClass_ = nullptr;};
          inline string getSeatClass() const { DARABONBA_PTR_GET_DEFAULT(seatClass_, "") };
          inline Flights& setSeatClass(string seatClass) { DARABONBA_PTR_SET_VALUE(seatClass_, seatClass) };


          // validFromDate Field Functions 
          bool hasValidFromDate() const { return this->validFromDate_ != nullptr;};
          void deleteValidFromDate() { this->validFromDate_ = nullptr;};
          inline string getValidFromDate() const { DARABONBA_PTR_GET_DEFAULT(validFromDate_, "") };
          inline Flights& setValidFromDate(string validFromDate) { DARABONBA_PTR_SET_VALUE(validFromDate_, validFromDate) };


          // validToDate Field Functions 
          bool hasValidToDate() const { return this->validToDate_ != nullptr;};
          void deleteValidToDate() { this->validToDate_ = nullptr;};
          inline string getValidToDate() const { DARABONBA_PTR_GET_DEFAULT(validToDate_, "") };
          inline Flights& setValidToDate(string validToDate) { DARABONBA_PTR_SET_VALUE(validToDate_, validToDate) };


        protected:
          // 航班至
          shared_ptr<string> arrivalStation_ {};
          // 座位等级
          shared_ptr<string> cabinClass_ {};
          // 承运人
          shared_ptr<string> carrier_ {};
          // 航班从
          shared_ptr<string> departureStation_ {};
          // 日期
          shared_ptr<string> flightDate_ {};
          // 航班号
          shared_ptr<string> flightNumber_ {};
          // 时间
          shared_ptr<string> flightTime_ {};
          // 免费行李
          shared_ptr<string> freeBaggageAllowance_ {};
          // 行号
          shared_ptr<string> index_ {};
          // 客票级别
          shared_ptr<string> seatClass_ {};
          // 客票生效日期
          shared_ptr<string> validFromDate_ {};
          // 有效截止日期
          shared_ptr<string> validToDate_ {};
        };

        virtual bool empty() const override { return this->agentCode_ == nullptr
        && this->applyId_ == nullptr && this->billDate_ == nullptr && this->blueOrRed_ == nullptr && this->build_ == nullptr && this->costCenter_ == nullptr
        && this->department_ == nullptr && this->flights_ == nullptr && this->fuelSurcharge_ == nullptr && this->id_ == nullptr && this->insurance_ == nullptr
        && this->invoiceTitle_ == nullptr && this->invoiceType_ == nullptr && this->issueCompany_ == nullptr && this->issueDate_ == nullptr && this->itineraryNum_ == nullptr
        && this->ofdOssUrl_ == nullptr && this->orderId_ == nullptr && this->ossUrl_ == nullptr && this->otherTaxes_ == nullptr && this->passengerName_ == nullptr
        && this->pdfOssUrl_ == nullptr && this->project_ == nullptr && this->promptMessage_ == nullptr && this->purchaserName_ == nullptr && this->purchaserTaxNo_ == nullptr
        && this->purchaserType_ == nullptr && this->taxAmount_ == nullptr && this->taxRate_ == nullptr && this->ticketNo_ == nullptr && this->ticketPrice_ == nullptr
        && this->totalPrice_ == nullptr && this->validationCode_ == nullptr && this->xmlOssUrl_ == nullptr; };
        // agentCode Field Functions 
        bool hasAgentCode() const { return this->agentCode_ != nullptr;};
        void deleteAgentCode() { this->agentCode_ = nullptr;};
        inline string getAgentCode() const { DARABONBA_PTR_GET_DEFAULT(agentCode_, "") };
        inline Items& setAgentCode(string agentCode) { DARABONBA_PTR_SET_VALUE(agentCode_, agentCode) };


        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline Items& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // billDate Field Functions 
        bool hasBillDate() const { return this->billDate_ != nullptr;};
        void deleteBillDate() { this->billDate_ = nullptr;};
        inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
        inline Items& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


        // blueOrRed Field Functions 
        bool hasBlueOrRed() const { return this->blueOrRed_ != nullptr;};
        void deleteBlueOrRed() { this->blueOrRed_ = nullptr;};
        inline int32_t getBlueOrRed() const { DARABONBA_PTR_GET_DEFAULT(blueOrRed_, 0) };
        inline Items& setBlueOrRed(int32_t blueOrRed) { DARABONBA_PTR_SET_VALUE(blueOrRed_, blueOrRed) };


        // build Field Functions 
        bool hasBuild() const { return this->build_ != nullptr;};
        void deleteBuild() { this->build_ = nullptr;};
        inline string getBuild() const { DARABONBA_PTR_GET_DEFAULT(build_, "") };
        inline Items& setBuild(string build) { DARABONBA_PTR_SET_VALUE(build_, build) };


        // costCenter Field Functions 
        bool hasCostCenter() const { return this->costCenter_ != nullptr;};
        void deleteCostCenter() { this->costCenter_ = nullptr;};
        inline string getCostCenter() const { DARABONBA_PTR_GET_DEFAULT(costCenter_, "") };
        inline Items& setCostCenter(string costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
        inline Items& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


        // flights Field Functions 
        bool hasFlights() const { return this->flights_ != nullptr;};
        void deleteFlights() { this->flights_ = nullptr;};
        inline const vector<Items::Flights> & getFlights() const { DARABONBA_PTR_GET_CONST(flights_, vector<Items::Flights>) };
        inline vector<Items::Flights> getFlights() { DARABONBA_PTR_GET(flights_, vector<Items::Flights>) };
        inline Items& setFlights(const vector<Items::Flights> & flights) { DARABONBA_PTR_SET_VALUE(flights_, flights) };
        inline Items& setFlights(vector<Items::Flights> && flights) { DARABONBA_PTR_SET_RVALUE(flights_, flights) };


        // fuelSurcharge Field Functions 
        bool hasFuelSurcharge() const { return this->fuelSurcharge_ != nullptr;};
        void deleteFuelSurcharge() { this->fuelSurcharge_ = nullptr;};
        inline string getFuelSurcharge() const { DARABONBA_PTR_GET_DEFAULT(fuelSurcharge_, "") };
        inline Items& setFuelSurcharge(string fuelSurcharge) { DARABONBA_PTR_SET_VALUE(fuelSurcharge_, fuelSurcharge) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // insurance Field Functions 
        bool hasInsurance() const { return this->insurance_ != nullptr;};
        void deleteInsurance() { this->insurance_ = nullptr;};
        inline string getInsurance() const { DARABONBA_PTR_GET_DEFAULT(insurance_, "") };
        inline Items& setInsurance(string insurance) { DARABONBA_PTR_SET_VALUE(insurance_, insurance) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline Items& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // invoiceType Field Functions 
        bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
        void deleteInvoiceType() { this->invoiceType_ = nullptr;};
        inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
        inline Items& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        // issueCompany Field Functions 
        bool hasIssueCompany() const { return this->issueCompany_ != nullptr;};
        void deleteIssueCompany() { this->issueCompany_ = nullptr;};
        inline string getIssueCompany() const { DARABONBA_PTR_GET_DEFAULT(issueCompany_, "") };
        inline Items& setIssueCompany(string issueCompany) { DARABONBA_PTR_SET_VALUE(issueCompany_, issueCompany) };


        // issueDate Field Functions 
        bool hasIssueDate() const { return this->issueDate_ != nullptr;};
        void deleteIssueDate() { this->issueDate_ = nullptr;};
        inline string getIssueDate() const { DARABONBA_PTR_GET_DEFAULT(issueDate_, "") };
        inline Items& setIssueDate(string issueDate) { DARABONBA_PTR_SET_VALUE(issueDate_, issueDate) };


        // itineraryNum Field Functions 
        bool hasItineraryNum() const { return this->itineraryNum_ != nullptr;};
        void deleteItineraryNum() { this->itineraryNum_ = nullptr;};
        inline string getItineraryNum() const { DARABONBA_PTR_GET_DEFAULT(itineraryNum_, "") };
        inline Items& setItineraryNum(string itineraryNum) { DARABONBA_PTR_SET_VALUE(itineraryNum_, itineraryNum) };


        // ofdOssUrl Field Functions 
        bool hasOfdOssUrl() const { return this->ofdOssUrl_ != nullptr;};
        void deleteOfdOssUrl() { this->ofdOssUrl_ = nullptr;};
        inline string getOfdOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ofdOssUrl_, "") };
        inline Items& setOfdOssUrl(string ofdOssUrl) { DARABONBA_PTR_SET_VALUE(ofdOssUrl_, ofdOssUrl) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline Items& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // ossUrl Field Functions 
        bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
        void deleteOssUrl() { this->ossUrl_ = nullptr;};
        inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
        inline Items& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        // otherTaxes Field Functions 
        bool hasOtherTaxes() const { return this->otherTaxes_ != nullptr;};
        void deleteOtherTaxes() { this->otherTaxes_ = nullptr;};
        inline string getOtherTaxes() const { DARABONBA_PTR_GET_DEFAULT(otherTaxes_, "") };
        inline Items& setOtherTaxes(string otherTaxes) { DARABONBA_PTR_SET_VALUE(otherTaxes_, otherTaxes) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline Items& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // pdfOssUrl Field Functions 
        bool hasPdfOssUrl() const { return this->pdfOssUrl_ != nullptr;};
        void deletePdfOssUrl() { this->pdfOssUrl_ = nullptr;};
        inline string getPdfOssUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfOssUrl_, "") };
        inline Items& setPdfOssUrl(string pdfOssUrl) { DARABONBA_PTR_SET_VALUE(pdfOssUrl_, pdfOssUrl) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Items& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // promptMessage Field Functions 
        bool hasPromptMessage() const { return this->promptMessage_ != nullptr;};
        void deletePromptMessage() { this->promptMessage_ = nullptr;};
        inline string getPromptMessage() const { DARABONBA_PTR_GET_DEFAULT(promptMessage_, "") };
        inline Items& setPromptMessage(string promptMessage) { DARABONBA_PTR_SET_VALUE(promptMessage_, promptMessage) };


        // purchaserName Field Functions 
        bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
        void deletePurchaserName() { this->purchaserName_ = nullptr;};
        inline string getPurchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
        inline Items& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


        // purchaserTaxNo Field Functions 
        bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
        void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
        inline string getPurchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
        inline Items& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


        // purchaserType Field Functions 
        bool hasPurchaserType() const { return this->purchaserType_ != nullptr;};
        void deletePurchaserType() { this->purchaserType_ = nullptr;};
        inline int32_t getPurchaserType() const { DARABONBA_PTR_GET_DEFAULT(purchaserType_, 0) };
        inline Items& setPurchaserType(int32_t purchaserType) { DARABONBA_PTR_SET_VALUE(purchaserType_, purchaserType) };


        // taxAmount Field Functions 
        bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
        void deleteTaxAmount() { this->taxAmount_ = nullptr;};
        inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
        inline Items& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


        // taxRate Field Functions 
        bool hasTaxRate() const { return this->taxRate_ != nullptr;};
        void deleteTaxRate() { this->taxRate_ = nullptr;};
        inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
        inline Items& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline Items& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline string getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, "") };
        inline Items& setTicketPrice(string ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // totalPrice Field Functions 
        bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
        void deleteTotalPrice() { this->totalPrice_ = nullptr;};
        inline string getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, "") };
        inline Items& setTotalPrice(string totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


        // validationCode Field Functions 
        bool hasValidationCode() const { return this->validationCode_ != nullptr;};
        void deleteValidationCode() { this->validationCode_ = nullptr;};
        inline string getValidationCode() const { DARABONBA_PTR_GET_DEFAULT(validationCode_, "") };
        inline Items& setValidationCode(string validationCode) { DARABONBA_PTR_SET_VALUE(validationCode_, validationCode) };


        // xmlOssUrl Field Functions 
        bool hasXmlOssUrl() const { return this->xmlOssUrl_ != nullptr;};
        void deleteXmlOssUrl() { this->xmlOssUrl_ = nullptr;};
        inline string getXmlOssUrl() const { DARABONBA_PTR_GET_DEFAULT(xmlOssUrl_, "") };
        inline Items& setXmlOssUrl(string xmlOssUrl) { DARABONBA_PTR_SET_VALUE(xmlOssUrl_, xmlOssUrl) };


      protected:
        // 销售单位代号
        shared_ptr<string> agentCode_ {};
        shared_ptr<string> applyId_ {};
        shared_ptr<string> billDate_ {};
        shared_ptr<int32_t> blueOrRed_ {};
        shared_ptr<string> build_ {};
        shared_ptr<string> costCenter_ {};
        shared_ptr<string> department_ {};
        // 机票行程明细
        shared_ptr<vector<Items::Flights>> flights_ {};
        shared_ptr<string> fuelSurcharge_ {};
        // UK
        shared_ptr<string> id_ {};
        shared_ptr<string> insurance_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<int32_t> invoiceType_ {};
        // 填开单位
        shared_ptr<string> issueCompany_ {};
        // 填开日期
        shared_ptr<string> issueDate_ {};
        shared_ptr<string> itineraryNum_ {};
        shared_ptr<string> ofdOssUrl_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<string> ossUrl_ {};
        shared_ptr<string> otherTaxes_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<string> pdfOssUrl_ {};
        shared_ptr<string> project_ {};
        // 提示信息
        shared_ptr<string> promptMessage_ {};
        shared_ptr<string> purchaserName_ {};
        shared_ptr<string> purchaserTaxNo_ {};
        shared_ptr<int32_t> purchaserType_ {};
        shared_ptr<string> taxAmount_ {};
        shared_ptr<string> taxRate_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> ticketPrice_ {};
        shared_ptr<string> totalPrice_ {};
        // 验证码
        shared_ptr<string> validationCode_ {};
        shared_ptr<string> xmlOssUrl_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalPage_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Module& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Module& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Module& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalPage_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightItineraryScanQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightItineraryScanQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightItineraryScanQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightItineraryScanQueryResponseBody::Module) };
    inline FlightItineraryScanQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightItineraryScanQueryResponseBody::Module) };
    inline FlightItineraryScanQueryResponseBody& setModule(const FlightItineraryScanQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightItineraryScanQueryResponseBody& setModule(FlightItineraryScanQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightItineraryScanQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightItineraryScanQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightItineraryScanQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightItineraryScanQueryResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
