// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODY_HPP_
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
  class IFlightOrderDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IFlightOrderDetailQueryResponseBody() = default ;
    IFlightOrderDetailQueryResponseBody(const IFlightOrderDetailQueryResponseBody &) = default ;
    IFlightOrderDetailQueryResponseBody(IFlightOrderDetailQueryResponseBody &&) = default ;
    IFlightOrderDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBody() = default ;
    IFlightOrderDetailQueryResponseBody& operator=(const IFlightOrderDetailQueryResponseBody &) = default ;
    IFlightOrderDetailQueryResponseBody& operator=(IFlightOrderDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_modify_order_list, flightModifyOrderList_);
        DARABONBA_PTR_TO_JSON(flight_refund_order_list, flightRefundOrderList_);
        DARABONBA_PTR_TO_JSON(flight_sale_order, flightSaleOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_modify_order_list, flightModifyOrderList_);
        DARABONBA_PTR_FROM_JSON(flight_refund_order_list, flightRefundOrderList_);
        DARABONBA_PTR_FROM_JSON(flight_sale_order, flightSaleOrder_);
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
      class FlightSaleOrder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightSaleOrder& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(book_type, bookType_);
          DARABONBA_PTR_TO_JSON(booker_info, bookerInfo_);
          DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
          DARABONBA_PTR_TO_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_TO_JSON(flight_order_insure_list, flightOrderInsureList_);
          DARABONBA_PTR_TO_JSON(flight_order_ticket_list, flightOrderTicketList_);
          DARABONBA_PTR_TO_JSON(flight_segment_list, flightSegmentList_);
          DARABONBA_PTR_TO_JSON(mix_pay, mixPay_);
          DARABONBA_PTR_TO_JSON(order_create_time, orderCreateTime_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_pay_time, orderPayTime_);
          DARABONBA_PTR_TO_JSON(order_reserve_price, orderReservePrice_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(order_type, orderType_);
          DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
          DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
        };
        friend void from_json(const Darabonba::Json& j, FlightSaleOrder& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(book_type, bookType_);
          DARABONBA_PTR_FROM_JSON(booker_info, bookerInfo_);
          DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
          DARABONBA_PTR_FROM_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_FROM_JSON(flight_order_insure_list, flightOrderInsureList_);
          DARABONBA_PTR_FROM_JSON(flight_order_ticket_list, flightOrderTicketList_);
          DARABONBA_PTR_FROM_JSON(flight_segment_list, flightSegmentList_);
          DARABONBA_PTR_FROM_JSON(mix_pay, mixPay_);
          DARABONBA_PTR_FROM_JSON(order_create_time, orderCreateTime_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_pay_time, orderPayTime_);
          DARABONBA_PTR_FROM_JSON(order_reserve_price, orderReservePrice_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(order_type, orderType_);
          DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
          DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
        };
        FlightSaleOrder() = default ;
        FlightSaleOrder(const FlightSaleOrder &) = default ;
        FlightSaleOrder(FlightSaleOrder &&) = default ;
        FlightSaleOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightSaleOrder() = default ;
        FlightSaleOrder& operator=(const FlightSaleOrder &) = default ;
        FlightSaleOrder& operator=(FlightSaleOrder &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PassengerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
            DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
            DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
            DARABONBA_PTR_TO_JSON(department_id, departmentId_);
            DARABONBA_PTR_TO_JSON(department_name, departmentName_);
            DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
            DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
            DARABONBA_PTR_TO_JSON(job_no, jobNo_);
            DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
            DARABONBA_PTR_TO_JSON(project_code, projectCode_);
            DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
            DARABONBA_PTR_TO_JSON(user_name, userName_);
          };
          friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
            DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
            DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
            DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
            DARABONBA_PTR_FROM_JSON(department_name, departmentName_);
            DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
            DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
            DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
            DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
            DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
            DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
            DARABONBA_PTR_FROM_JSON(user_name, userName_);
          };
          PassengerList() = default ;
          PassengerList(const PassengerList &) = default ;
          PassengerList(PassengerList &&) = default ;
          PassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PassengerList() = default ;
          PassengerList& operator=(const PassengerList &) = default ;
          PassengerList& operator=(PassengerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->departmentId_ == nullptr && this->departmentName_ == nullptr && this->invoiceId_ == nullptr && this->invoiceTitle_ == nullptr
        && this->jobNo_ == nullptr && this->passengerType_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
          // costCenterId Field Functions 
          bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
          void deleteCostCenterId() { this->costCenterId_ = nullptr;};
          inline string getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
          inline PassengerList& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


          // costCenterName Field Functions 
          bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
          void deleteCostCenterName() { this->costCenterName_ = nullptr;};
          inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
          inline PassengerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


          // departmentId Field Functions 
          bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
          void deleteDepartmentId() { this->departmentId_ = nullptr;};
          inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
          inline PassengerList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


          // departmentName Field Functions 
          bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
          void deleteDepartmentName() { this->departmentName_ = nullptr;};
          inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
          inline PassengerList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


          // invoiceId Field Functions 
          bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
          void deleteInvoiceId() { this->invoiceId_ = nullptr;};
          inline string getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
          inline PassengerList& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


          // invoiceTitle Field Functions 
          bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
          void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
          inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
          inline PassengerList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


          // jobNo Field Functions 
          bool hasJobNo() const { return this->jobNo_ != nullptr;};
          void deleteJobNo() { this->jobNo_ = nullptr;};
          inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
          inline PassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


          // passengerType Field Functions 
          bool hasPassengerType() const { return this->passengerType_ != nullptr;};
          void deletePassengerType() { this->passengerType_ = nullptr;};
          inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
          inline PassengerList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


          // projectCode Field Functions 
          bool hasProjectCode() const { return this->projectCode_ != nullptr;};
          void deleteProjectCode() { this->projectCode_ = nullptr;};
          inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
          inline PassengerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


          // projectTitle Field Functions 
          bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
          void deleteProjectTitle() { this->projectTitle_ = nullptr;};
          inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
          inline PassengerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline PassengerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          shared_ptr<string> costCenterId_ {};
          shared_ptr<string> costCenterName_ {};
          shared_ptr<string> departmentId_ {};
          shared_ptr<string> departmentName_ {};
          shared_ptr<string> invoiceId_ {};
          shared_ptr<string> invoiceTitle_ {};
          shared_ptr<string> jobNo_ {};
          shared_ptr<int32_t> passengerType_ {};
          shared_ptr<string> projectCode_ {};
          shared_ptr<string> projectTitle_ {};
          shared_ptr<string> userId_ {};
          shared_ptr<string> userName_ {};
        };

        class FlightSegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightSegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
            DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
            DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
          };
          FlightSegmentList() = default ;
          FlightSegmentList(const FlightSegmentList &) = default ;
          FlightSegmentList(FlightSegmentList &&) = default ;
          FlightSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightSegmentList() = default ;
          FlightSegmentList& operator=(const FlightSegmentList &) = default ;
          FlightSegmentList& operator=(FlightSegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->carrierAirlineCode_ == nullptr && this->carrierAirlineName_ == nullptr && this->depApt_ == nullptr
        && this->depAptCode_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr
        && this->flightNo_ == nullptr && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->share_ == nullptr && this->stopAptCode_ == nullptr
        && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopCityCode_ == nullptr && this->stopDepTime_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline FlightSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline FlightSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // arrApt Field Functions 
          bool hasArrApt() const { return this->arrApt_ != nullptr;};
          void deleteArrApt() { this->arrApt_ = nullptr;};
          inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
          inline FlightSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


          // arrAptCode Field Functions 
          bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
          void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
          inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
          inline FlightSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline FlightSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTerminal Field Functions 
          bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
          void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
          inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
          inline FlightSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // carrierAirlineCode Field Functions 
          bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
          void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
          inline string getCarrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
          inline FlightSegmentList& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


          // carrierAirlineName Field Functions 
          bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
          void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
          inline string getCarrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
          inline FlightSegmentList& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


          // depApt Field Functions 
          bool hasDepApt() const { return this->depApt_ != nullptr;};
          void deleteDepApt() { this->depApt_ = nullptr;};
          inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
          inline FlightSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


          // depAptCode Field Functions 
          bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
          void deleteDepAptCode() { this->depAptCode_ = nullptr;};
          inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
          inline FlightSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline FlightSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTerminal Field Functions 
          bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
          void deleteDepTerminal() { this->depTerminal_ = nullptr;};
          inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
          inline FlightSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // share Field Functions 
          bool hasShare() const { return this->share_ != nullptr;};
          void deleteShare() { this->share_ = nullptr;};
          inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
          inline FlightSegmentList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


          // stopAptCode Field Functions 
          bool hasStopAptCode() const { return this->stopAptCode_ != nullptr;};
          void deleteStopAptCode() { this->stopAptCode_ = nullptr;};
          inline string getStopAptCode() const { DARABONBA_PTR_GET_DEFAULT(stopAptCode_, "") };
          inline FlightSegmentList& setStopAptCode(string stopAptCode) { DARABONBA_PTR_SET_VALUE(stopAptCode_, stopAptCode) };


          // stopArrTime Field Functions 
          bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
          void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
          inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
          inline FlightSegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


          // stopCity Field Functions 
          bool hasStopCity() const { return this->stopCity_ != nullptr;};
          void deleteStopCity() { this->stopCity_ = nullptr;};
          inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
          inline FlightSegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


          // stopCityCode Field Functions 
          bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
          void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
          inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
          inline FlightSegmentList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


          // stopDepTime Field Functions 
          bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
          void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
          inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
          inline FlightSegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> arrApt_ {};
          shared_ptr<string> arrAptCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTerminal_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> carrierAirlineCode_ {};
          shared_ptr<string> carrierAirlineName_ {};
          shared_ptr<string> depApt_ {};
          shared_ptr<string> depAptCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTerminal_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> stopAptCode_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCity_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopDepTime_ {};
        };

        class FlightOrderTicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightOrderTicketList& obj) { 
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(tax, tax_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightOrderTicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(tax, tax_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightOrderTicketList() = default ;
          FlightOrderTicketList(const FlightOrderTicketList &) = default ;
          FlightOrderTicketList(FlightOrderTicketList &&) = default ;
          FlightOrderTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightOrderTicketList() = default ;
          FlightOrderTicketList& operator=(const FlightOrderTicketList &) = default ;
          FlightOrderTicketList& operator=(FlightOrderTicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CabinClass : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CabinClass& obj) { 
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            };
            friend void from_json(const Darabonba::Json& j, CabinClass& obj) { 
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            };
            CabinClass() = default ;
            CabinClass(const CabinClass &) = default ;
            CabinClass(CabinClass &&) = default ;
            CabinClass(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CabinClass() = default ;
            CabinClass& operator=(const CabinClass &) = default ;
            CabinClass& operator=(CabinClass &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->flightNo_ == nullptr; };
            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline CabinClass& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline CabinClass& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline CabinClass& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          protected:
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<string> flightNo_ {};
          };

          virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->tax_ == nullptr && this->ticketNo_ == nullptr && this->ticketPrice_ == nullptr && this->userId_ == nullptr; };
          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline const vector<FlightOrderTicketList::CabinClass> & getCabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<FlightOrderTicketList::CabinClass>) };
          inline vector<FlightOrderTicketList::CabinClass> getCabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<FlightOrderTicketList::CabinClass>) };
          inline FlightOrderTicketList& setCabinClass(const vector<FlightOrderTicketList::CabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
          inline FlightOrderTicketList& setCabinClass(vector<FlightOrderTicketList::CabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
          inline FlightOrderTicketList& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline FlightOrderTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
          inline FlightOrderTicketList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightOrderTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<vector<FlightOrderTicketList::CabinClass>> cabinClass_ {};
          shared_ptr<int32_t> tax_ {};
          shared_ptr<string> ticketNo_ {};
          shared_ptr<int32_t> ticketPrice_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightOrderInsureList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightOrderInsureList& obj) { 
            DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
            DARABONBA_PTR_TO_JSON(ins_pay_type, insPayType_);
            DARABONBA_PTR_TO_JSON(ins_total_price, insTotalPrice_);
            DARABONBA_PTR_TO_JSON(trade_action, tradeAction_);
          };
          friend void from_json(const Darabonba::Json& j, FlightOrderInsureList& obj) { 
            DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
            DARABONBA_PTR_FROM_JSON(ins_pay_type, insPayType_);
            DARABONBA_PTR_FROM_JSON(ins_total_price, insTotalPrice_);
            DARABONBA_PTR_FROM_JSON(trade_action, tradeAction_);
          };
          FlightOrderInsureList() = default ;
          FlightOrderInsureList(const FlightOrderInsureList &) = default ;
          FlightOrderInsureList(FlightOrderInsureList &&) = default ;
          FlightOrderInsureList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightOrderInsureList() = default ;
          FlightOrderInsureList& operator=(const FlightOrderInsureList &) = default ;
          FlightOrderInsureList& operator=(FlightOrderInsureList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->insOrderId_ == nullptr
        && this->insPayType_ == nullptr && this->insTotalPrice_ == nullptr && this->tradeAction_ == nullptr; };
          // insOrderId Field Functions 
          bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
          void deleteInsOrderId() { this->insOrderId_ = nullptr;};
          inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
          inline FlightOrderInsureList& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


          // insPayType Field Functions 
          bool hasInsPayType() const { return this->insPayType_ != nullptr;};
          void deleteInsPayType() { this->insPayType_ = nullptr;};
          inline string getInsPayType() const { DARABONBA_PTR_GET_DEFAULT(insPayType_, "") };
          inline FlightOrderInsureList& setInsPayType(string insPayType) { DARABONBA_PTR_SET_VALUE(insPayType_, insPayType) };


          // insTotalPrice Field Functions 
          bool hasInsTotalPrice() const { return this->insTotalPrice_ != nullptr;};
          void deleteInsTotalPrice() { this->insTotalPrice_ = nullptr;};
          inline int32_t getInsTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(insTotalPrice_, 0) };
          inline FlightOrderInsureList& setInsTotalPrice(int32_t insTotalPrice) { DARABONBA_PTR_SET_VALUE(insTotalPrice_, insTotalPrice) };


          // tradeAction Field Functions 
          bool hasTradeAction() const { return this->tradeAction_ != nullptr;};
          void deleteTradeAction() { this->tradeAction_ = nullptr;};
          inline string getTradeAction() const { DARABONBA_PTR_GET_DEFAULT(tradeAction_, "") };
          inline FlightOrderInsureList& setTradeAction(string tradeAction) { DARABONBA_PTR_SET_VALUE(tradeAction_, tradeAction) };


        protected:
          shared_ptr<string> insOrderId_ {};
          shared_ptr<string> insPayType_ {};
          shared_ptr<int32_t> insTotalPrice_ {};
          shared_ptr<string> tradeAction_ {};
        };

        class BookerInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BookerInfo& obj) { 
            DARABONBA_PTR_TO_JSON(user_id, userId_);
            DARABONBA_PTR_TO_JSON(user_name, userName_);
          };
          friend void from_json(const Darabonba::Json& j, BookerInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
            DARABONBA_PTR_FROM_JSON(user_name, userName_);
          };
          BookerInfo() = default ;
          BookerInfo(const BookerInfo &) = default ;
          BookerInfo(BookerInfo &&) = default ;
          BookerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BookerInfo() = default ;
          BookerInfo& operator=(const BookerInfo &) = default ;
          BookerInfo& operator=(BookerInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline BookerInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline BookerInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          shared_ptr<string> userId_ {};
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->bookType_ == nullptr && this->bookerInfo_ == nullptr && this->corpPayPrice_ == nullptr && this->exceedApplyId_ == nullptr && this->flightOrderInsureList_ == nullptr
        && this->flightOrderTicketList_ == nullptr && this->flightSegmentList_ == nullptr && this->mixPay_ == nullptr && this->orderCreateTime_ == nullptr && this->orderId_ == nullptr
        && this->orderPayTime_ == nullptr && this->orderReservePrice_ == nullptr && this->orderStatus_ == nullptr && this->orderStatusDesc_ == nullptr && this->orderType_ == nullptr
        && this->passengerList_ == nullptr && this->payType_ == nullptr && this->personPayPrice_ == nullptr && this->serviceFee_ == nullptr && this->thirdPartApplyId_ == nullptr
        && this->tripType_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
        inline FlightSaleOrder& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // bookType Field Functions 
        bool hasBookType() const { return this->bookType_ != nullptr;};
        void deleteBookType() { this->bookType_ = nullptr;};
        inline int32_t getBookType() const { DARABONBA_PTR_GET_DEFAULT(bookType_, 0) };
        inline FlightSaleOrder& setBookType(int32_t bookType) { DARABONBA_PTR_SET_VALUE(bookType_, bookType) };


        // bookerInfo Field Functions 
        bool hasBookerInfo() const { return this->bookerInfo_ != nullptr;};
        void deleteBookerInfo() { this->bookerInfo_ = nullptr;};
        inline const FlightSaleOrder::BookerInfo & getBookerInfo() const { DARABONBA_PTR_GET_CONST(bookerInfo_, FlightSaleOrder::BookerInfo) };
        inline FlightSaleOrder::BookerInfo getBookerInfo() { DARABONBA_PTR_GET(bookerInfo_, FlightSaleOrder::BookerInfo) };
        inline FlightSaleOrder& setBookerInfo(const FlightSaleOrder::BookerInfo & bookerInfo) { DARABONBA_PTR_SET_VALUE(bookerInfo_, bookerInfo) };
        inline FlightSaleOrder& setBookerInfo(FlightSaleOrder::BookerInfo && bookerInfo) { DARABONBA_PTR_SET_RVALUE(bookerInfo_, bookerInfo) };


        // corpPayPrice Field Functions 
        bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
        void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
        inline int64_t getCorpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
        inline FlightSaleOrder& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


        // exceedApplyId Field Functions 
        bool hasExceedApplyId() const { return this->exceedApplyId_ != nullptr;};
        void deleteExceedApplyId() { this->exceedApplyId_ = nullptr;};
        inline string getExceedApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedApplyId_, "") };
        inline FlightSaleOrder& setExceedApplyId(string exceedApplyId) { DARABONBA_PTR_SET_VALUE(exceedApplyId_, exceedApplyId) };


        // flightOrderInsureList Field Functions 
        bool hasFlightOrderInsureList() const { return this->flightOrderInsureList_ != nullptr;};
        void deleteFlightOrderInsureList() { this->flightOrderInsureList_ = nullptr;};
        inline const vector<FlightSaleOrder::FlightOrderInsureList> & getFlightOrderInsureList() const { DARABONBA_PTR_GET_CONST(flightOrderInsureList_, vector<FlightSaleOrder::FlightOrderInsureList>) };
        inline vector<FlightSaleOrder::FlightOrderInsureList> getFlightOrderInsureList() { DARABONBA_PTR_GET(flightOrderInsureList_, vector<FlightSaleOrder::FlightOrderInsureList>) };
        inline FlightSaleOrder& setFlightOrderInsureList(const vector<FlightSaleOrder::FlightOrderInsureList> & flightOrderInsureList) { DARABONBA_PTR_SET_VALUE(flightOrderInsureList_, flightOrderInsureList) };
        inline FlightSaleOrder& setFlightOrderInsureList(vector<FlightSaleOrder::FlightOrderInsureList> && flightOrderInsureList) { DARABONBA_PTR_SET_RVALUE(flightOrderInsureList_, flightOrderInsureList) };


        // flightOrderTicketList Field Functions 
        bool hasFlightOrderTicketList() const { return this->flightOrderTicketList_ != nullptr;};
        void deleteFlightOrderTicketList() { this->flightOrderTicketList_ = nullptr;};
        inline const vector<FlightSaleOrder::FlightOrderTicketList> & getFlightOrderTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderTicketList_, vector<FlightSaleOrder::FlightOrderTicketList>) };
        inline vector<FlightSaleOrder::FlightOrderTicketList> getFlightOrderTicketList() { DARABONBA_PTR_GET(flightOrderTicketList_, vector<FlightSaleOrder::FlightOrderTicketList>) };
        inline FlightSaleOrder& setFlightOrderTicketList(const vector<FlightSaleOrder::FlightOrderTicketList> & flightOrderTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderTicketList_, flightOrderTicketList) };
        inline FlightSaleOrder& setFlightOrderTicketList(vector<FlightSaleOrder::FlightOrderTicketList> && flightOrderTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderTicketList_, flightOrderTicketList) };


        // flightSegmentList Field Functions 
        bool hasFlightSegmentList() const { return this->flightSegmentList_ != nullptr;};
        void deleteFlightSegmentList() { this->flightSegmentList_ = nullptr;};
        inline const vector<FlightSaleOrder::FlightSegmentList> & getFlightSegmentList() const { DARABONBA_PTR_GET_CONST(flightSegmentList_, vector<FlightSaleOrder::FlightSegmentList>) };
        inline vector<FlightSaleOrder::FlightSegmentList> getFlightSegmentList() { DARABONBA_PTR_GET(flightSegmentList_, vector<FlightSaleOrder::FlightSegmentList>) };
        inline FlightSaleOrder& setFlightSegmentList(const vector<FlightSaleOrder::FlightSegmentList> & flightSegmentList) { DARABONBA_PTR_SET_VALUE(flightSegmentList_, flightSegmentList) };
        inline FlightSaleOrder& setFlightSegmentList(vector<FlightSaleOrder::FlightSegmentList> && flightSegmentList) { DARABONBA_PTR_SET_RVALUE(flightSegmentList_, flightSegmentList) };


        // mixPay Field Functions 
        bool hasMixPay() const { return this->mixPay_ != nullptr;};
        void deleteMixPay() { this->mixPay_ = nullptr;};
        inline bool getMixPay() const { DARABONBA_PTR_GET_DEFAULT(mixPay_, false) };
        inline FlightSaleOrder& setMixPay(bool mixPay) { DARABONBA_PTR_SET_VALUE(mixPay_, mixPay) };


        // orderCreateTime Field Functions 
        bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
        void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
        inline string getOrderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, "") };
        inline FlightSaleOrder& setOrderCreateTime(string orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline FlightSaleOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderPayTime Field Functions 
        bool hasOrderPayTime() const { return this->orderPayTime_ != nullptr;};
        void deleteOrderPayTime() { this->orderPayTime_ = nullptr;};
        inline string getOrderPayTime() const { DARABONBA_PTR_GET_DEFAULT(orderPayTime_, "") };
        inline FlightSaleOrder& setOrderPayTime(string orderPayTime) { DARABONBA_PTR_SET_VALUE(orderPayTime_, orderPayTime) };


        // orderReservePrice Field Functions 
        bool hasOrderReservePrice() const { return this->orderReservePrice_ != nullptr;};
        void deleteOrderReservePrice() { this->orderReservePrice_ = nullptr;};
        inline int64_t getOrderReservePrice() const { DARABONBA_PTR_GET_DEFAULT(orderReservePrice_, 0L) };
        inline FlightSaleOrder& setOrderReservePrice(int64_t orderReservePrice) { DARABONBA_PTR_SET_VALUE(orderReservePrice_, orderReservePrice) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline FlightSaleOrder& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // orderStatusDesc Field Functions 
        bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
        void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
        inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
        inline FlightSaleOrder& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
        inline FlightSaleOrder& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // passengerList Field Functions 
        bool hasPassengerList() const { return this->passengerList_ != nullptr;};
        void deletePassengerList() { this->passengerList_ = nullptr;};
        inline const vector<FlightSaleOrder::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<FlightSaleOrder::PassengerList>) };
        inline vector<FlightSaleOrder::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<FlightSaleOrder::PassengerList>) };
        inline FlightSaleOrder& setPassengerList(const vector<FlightSaleOrder::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
        inline FlightSaleOrder& setPassengerList(vector<FlightSaleOrder::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
        inline FlightSaleOrder& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // personPayPrice Field Functions 
        bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
        void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
        inline int64_t getPersonPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0L) };
        inline FlightSaleOrder& setPersonPayPrice(int64_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


        // serviceFee Field Functions 
        bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
        void deleteServiceFee() { this->serviceFee_ = nullptr;};
        inline int64_t getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
        inline FlightSaleOrder& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


        // thirdPartApplyId Field Functions 
        bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
        void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
        inline string getThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
        inline FlightSaleOrder& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
        inline FlightSaleOrder& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


      protected:
        shared_ptr<int64_t> applyId_ {};
        shared_ptr<int32_t> bookType_ {};
        shared_ptr<FlightSaleOrder::BookerInfo> bookerInfo_ {};
        shared_ptr<int64_t> corpPayPrice_ {};
        shared_ptr<string> exceedApplyId_ {};
        shared_ptr<vector<FlightSaleOrder::FlightOrderInsureList>> flightOrderInsureList_ {};
        shared_ptr<vector<FlightSaleOrder::FlightOrderTicketList>> flightOrderTicketList_ {};
        shared_ptr<vector<FlightSaleOrder::FlightSegmentList>> flightSegmentList_ {};
        shared_ptr<bool> mixPay_ {};
        shared_ptr<string> orderCreateTime_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> orderPayTime_ {};
        shared_ptr<int64_t> orderReservePrice_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<int32_t> orderType_ {};
        shared_ptr<vector<FlightSaleOrder::PassengerList>> passengerList_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<int64_t> personPayPrice_ {};
        shared_ptr<int64_t> serviceFee_ {};
        shared_ptr<string> thirdPartApplyId_ {};
        shared_ptr<int32_t> tripType_ {};
      };

      class FlightRefundOrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightRefundOrderList& obj) { 
          DARABONBA_PTR_TO_JSON(corp_refund_Amount, corpRefundAmount_);
          DARABONBA_PTR_TO_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
          DARABONBA_PTR_TO_JSON(flight_passenger_fee, flightPassengerFee_);
          DARABONBA_PTR_TO_JSON(flight_refund_segment_list, flightRefundSegmentList_);
          DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_TO_JSON(person_refund_Amount, personRefundAmount_);
          DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
          DARABONBA_PTR_TO_JSON(refund_order_status, refundOrderStatus_);
          DARABONBA_PTR_TO_JSON(refund_service_fee, refundServiceFee_);
          DARABONBA_PTR_TO_JSON(refund_total_Amount, refundTotalAmount_);
          DARABONBA_PTR_TO_JSON(relate_modify_apply_id, relateModifyApplyId_);
          DARABONBA_PTR_TO_JSON(relate_refund_apply_id, relateRefundApplyId_);
          DARABONBA_PTR_TO_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_TO_JSON(submit_refund_time, submitRefundTime_);
          DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
        };
        friend void from_json(const Darabonba::Json& j, FlightRefundOrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_refund_Amount, corpRefundAmount_);
          DARABONBA_PTR_FROM_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
          DARABONBA_PTR_FROM_JSON(flight_passenger_fee, flightPassengerFee_);
          DARABONBA_PTR_FROM_JSON(flight_refund_segment_list, flightRefundSegmentList_);
          DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_FROM_JSON(person_refund_Amount, personRefundAmount_);
          DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
          DARABONBA_PTR_FROM_JSON(refund_order_status, refundOrderStatus_);
          DARABONBA_PTR_FROM_JSON(refund_service_fee, refundServiceFee_);
          DARABONBA_PTR_FROM_JSON(refund_total_Amount, refundTotalAmount_);
          DARABONBA_PTR_FROM_JSON(relate_modify_apply_id, relateModifyApplyId_);
          DARABONBA_PTR_FROM_JSON(relate_refund_apply_id, relateRefundApplyId_);
          DARABONBA_PTR_FROM_JSON(repeat_refund, repeatRefund_);
          DARABONBA_PTR_FROM_JSON(submit_refund_time, submitRefundTime_);
          DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
        };
        FlightRefundOrderList() = default ;
        FlightRefundOrderList(const FlightRefundOrderList &) = default ;
        FlightRefundOrderList(FlightRefundOrderList &&) = default ;
        FlightRefundOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightRefundOrderList() = default ;
        FlightRefundOrderList& operator=(const FlightRefundOrderList &) = default ;
        FlightRefundOrderList& operator=(FlightRefundOrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightRefundSegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRefundSegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
            DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRefundSegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
            DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
          };
          FlightRefundSegmentList() = default ;
          FlightRefundSegmentList(const FlightRefundSegmentList &) = default ;
          FlightRefundSegmentList(FlightRefundSegmentList &&) = default ;
          FlightRefundSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRefundSegmentList() = default ;
          FlightRefundSegmentList& operator=(const FlightRefundSegmentList &) = default ;
          FlightRefundSegmentList& operator=(FlightRefundSegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->carrierAirlineCode_ == nullptr && this->carrierAirlineName_ == nullptr && this->depApt_ == nullptr
        && this->depAptCode_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr
        && this->flightNo_ == nullptr && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->share_ == nullptr && this->stopAptCode_ == nullptr
        && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopCityCode_ == nullptr && this->stopDepTime_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline FlightRefundSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline FlightRefundSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // arrApt Field Functions 
          bool hasArrApt() const { return this->arrApt_ != nullptr;};
          void deleteArrApt() { this->arrApt_ = nullptr;};
          inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
          inline FlightRefundSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


          // arrAptCode Field Functions 
          bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
          void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
          inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
          inline FlightRefundSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline FlightRefundSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightRefundSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTerminal Field Functions 
          bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
          void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
          inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
          inline FlightRefundSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightRefundSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // carrierAirlineCode Field Functions 
          bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
          void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
          inline string getCarrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
          inline FlightRefundSegmentList& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


          // carrierAirlineName Field Functions 
          bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
          void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
          inline string getCarrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
          inline FlightRefundSegmentList& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


          // depApt Field Functions 
          bool hasDepApt() const { return this->depApt_ != nullptr;};
          void deleteDepApt() { this->depApt_ = nullptr;};
          inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
          inline FlightRefundSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


          // depAptCode Field Functions 
          bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
          void deleteDepAptCode() { this->depAptCode_ = nullptr;};
          inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
          inline FlightRefundSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline FlightRefundSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightRefundSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTerminal Field Functions 
          bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
          void deleteDepTerminal() { this->depTerminal_ = nullptr;};
          inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
          inline FlightRefundSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightRefundSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightRefundSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightRefundSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightRefundSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // share Field Functions 
          bool hasShare() const { return this->share_ != nullptr;};
          void deleteShare() { this->share_ = nullptr;};
          inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
          inline FlightRefundSegmentList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


          // stopAptCode Field Functions 
          bool hasStopAptCode() const { return this->stopAptCode_ != nullptr;};
          void deleteStopAptCode() { this->stopAptCode_ = nullptr;};
          inline string getStopAptCode() const { DARABONBA_PTR_GET_DEFAULT(stopAptCode_, "") };
          inline FlightRefundSegmentList& setStopAptCode(string stopAptCode) { DARABONBA_PTR_SET_VALUE(stopAptCode_, stopAptCode) };


          // stopArrTime Field Functions 
          bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
          void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
          inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
          inline FlightRefundSegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


          // stopCity Field Functions 
          bool hasStopCity() const { return this->stopCity_ != nullptr;};
          void deleteStopCity() { this->stopCity_ = nullptr;};
          inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
          inline FlightRefundSegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


          // stopCityCode Field Functions 
          bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
          void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
          inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
          inline FlightRefundSegmentList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


          // stopDepTime Field Functions 
          bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
          void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
          inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
          inline FlightRefundSegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> arrApt_ {};
          shared_ptr<string> arrAptCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTerminal_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> carrierAirlineCode_ {};
          shared_ptr<string> carrierAirlineName_ {};
          shared_ptr<string> depApt_ {};
          shared_ptr<string> depAptCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTerminal_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> stopAptCode_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCity_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopDepTime_ {};
        };

        class FlightPassengerFee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightPassengerFee& obj) { 
            DARABONBA_PTR_TO_JSON(no_refund_modify_hand_fee, noRefundModifyHandFee_);
            DARABONBA_PTR_TO_JSON(no_refund_modify_upgrade_fee, noRefundModifyUpgradeFee_);
            DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
            DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
            DARABONBA_PTR_TO_JSON(refund_modify_amount, refundModifyAmount_);
            DARABONBA_PTR_TO_JSON(refund_modify_hand_amount, refundModifyHandAmount_);
            DARABONBA_PTR_TO_JSON(refund_modify_upgrade_amount, refundModifyUpgradeAmount_);
            DARABONBA_PTR_TO_JSON(refund_tax_hand_fee, refundTaxHandFee_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightPassengerFee& obj) { 
            DARABONBA_PTR_FROM_JSON(no_refund_modify_hand_fee, noRefundModifyHandFee_);
            DARABONBA_PTR_FROM_JSON(no_refund_modify_upgrade_fee, noRefundModifyUpgradeFee_);
            DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
            DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
            DARABONBA_PTR_FROM_JSON(refund_modify_amount, refundModifyAmount_);
            DARABONBA_PTR_FROM_JSON(refund_modify_hand_amount, refundModifyHandAmount_);
            DARABONBA_PTR_FROM_JSON(refund_modify_upgrade_amount, refundModifyUpgradeAmount_);
            DARABONBA_PTR_FROM_JSON(refund_tax_hand_fee, refundTaxHandFee_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightPassengerFee() = default ;
          FlightPassengerFee(const FlightPassengerFee &) = default ;
          FlightPassengerFee(FlightPassengerFee &&) = default ;
          FlightPassengerFee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightPassengerFee() = default ;
          FlightPassengerFee& operator=(const FlightPassengerFee &) = default ;
          FlightPassengerFee& operator=(FlightPassengerFee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->noRefundModifyHandFee_ == nullptr
        && this->noRefundModifyUpgradeFee_ == nullptr && this->refundAmount_ == nullptr && this->refundHandFee_ == nullptr && this->refundModifyAmount_ == nullptr && this->refundModifyHandAmount_ == nullptr
        && this->refundModifyUpgradeAmount_ == nullptr && this->refundTaxHandFee_ == nullptr && this->userId_ == nullptr; };
          // noRefundModifyHandFee Field Functions 
          bool hasNoRefundModifyHandFee() const { return this->noRefundModifyHandFee_ != nullptr;};
          void deleteNoRefundModifyHandFee() { this->noRefundModifyHandFee_ = nullptr;};
          inline int64_t getNoRefundModifyHandFee() const { DARABONBA_PTR_GET_DEFAULT(noRefundModifyHandFee_, 0L) };
          inline FlightPassengerFee& setNoRefundModifyHandFee(int64_t noRefundModifyHandFee) { DARABONBA_PTR_SET_VALUE(noRefundModifyHandFee_, noRefundModifyHandFee) };


          // noRefundModifyUpgradeFee Field Functions 
          bool hasNoRefundModifyUpgradeFee() const { return this->noRefundModifyUpgradeFee_ != nullptr;};
          void deleteNoRefundModifyUpgradeFee() { this->noRefundModifyUpgradeFee_ = nullptr;};
          inline int64_t getNoRefundModifyUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(noRefundModifyUpgradeFee_, 0L) };
          inline FlightPassengerFee& setNoRefundModifyUpgradeFee(int64_t noRefundModifyUpgradeFee) { DARABONBA_PTR_SET_VALUE(noRefundModifyUpgradeFee_, noRefundModifyUpgradeFee) };


          // refundAmount Field Functions 
          bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
          void deleteRefundAmount() { this->refundAmount_ = nullptr;};
          inline int64_t getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
          inline FlightPassengerFee& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


          // refundHandFee Field Functions 
          bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
          void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
          inline int64_t getRefundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0L) };
          inline FlightPassengerFee& setRefundHandFee(int64_t refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


          // refundModifyAmount Field Functions 
          bool hasRefundModifyAmount() const { return this->refundModifyAmount_ != nullptr;};
          void deleteRefundModifyAmount() { this->refundModifyAmount_ = nullptr;};
          inline int64_t getRefundModifyAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyAmount_, 0L) };
          inline FlightPassengerFee& setRefundModifyAmount(int64_t refundModifyAmount) { DARABONBA_PTR_SET_VALUE(refundModifyAmount_, refundModifyAmount) };


          // refundModifyHandAmount Field Functions 
          bool hasRefundModifyHandAmount() const { return this->refundModifyHandAmount_ != nullptr;};
          void deleteRefundModifyHandAmount() { this->refundModifyHandAmount_ = nullptr;};
          inline int64_t getRefundModifyHandAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyHandAmount_, 0L) };
          inline FlightPassengerFee& setRefundModifyHandAmount(int64_t refundModifyHandAmount) { DARABONBA_PTR_SET_VALUE(refundModifyHandAmount_, refundModifyHandAmount) };


          // refundModifyUpgradeAmount Field Functions 
          bool hasRefundModifyUpgradeAmount() const { return this->refundModifyUpgradeAmount_ != nullptr;};
          void deleteRefundModifyUpgradeAmount() { this->refundModifyUpgradeAmount_ = nullptr;};
          inline int64_t getRefundModifyUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(refundModifyUpgradeAmount_, 0L) };
          inline FlightPassengerFee& setRefundModifyUpgradeAmount(int64_t refundModifyUpgradeAmount) { DARABONBA_PTR_SET_VALUE(refundModifyUpgradeAmount_, refundModifyUpgradeAmount) };


          // refundTaxHandFee Field Functions 
          bool hasRefundTaxHandFee() const { return this->refundTaxHandFee_ != nullptr;};
          void deleteRefundTaxHandFee() { this->refundTaxHandFee_ = nullptr;};
          inline int64_t getRefundTaxHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundTaxHandFee_, 0L) };
          inline FlightPassengerFee& setRefundTaxHandFee(int64_t refundTaxHandFee) { DARABONBA_PTR_SET_VALUE(refundTaxHandFee_, refundTaxHandFee) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightPassengerFee& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<int64_t> noRefundModifyHandFee_ {};
          shared_ptr<int64_t> noRefundModifyUpgradeFee_ {};
          shared_ptr<int64_t> refundAmount_ {};
          shared_ptr<int64_t> refundHandFee_ {};
          shared_ptr<int64_t> refundModifyAmount_ {};
          shared_ptr<int64_t> refundModifyHandAmount_ {};
          shared_ptr<int64_t> refundModifyUpgradeAmount_ {};
          shared_ptr<int64_t> refundTaxHandFee_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightOrderRefundTicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightOrderRefundTicketList& obj) { 
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightOrderRefundTicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightOrderRefundTicketList() = default ;
          FlightOrderRefundTicketList(const FlightOrderRefundTicketList &) = default ;
          FlightOrderRefundTicketList(FlightOrderRefundTicketList &&) = default ;
          FlightOrderRefundTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightOrderRefundTicketList() = default ;
          FlightOrderRefundTicketList& operator=(const FlightOrderRefundTicketList &) = default ;
          FlightOrderRefundTicketList& operator=(FlightOrderRefundTicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CabinClass : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CabinClass& obj) { 
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            };
            friend void from_json(const Darabonba::Json& j, CabinClass& obj) { 
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            };
            CabinClass() = default ;
            CabinClass(const CabinClass &) = default ;
            CabinClass(CabinClass &&) = default ;
            CabinClass(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CabinClass() = default ;
            CabinClass& operator=(const CabinClass &) = default ;
            CabinClass& operator=(CabinClass &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->flightNo_ == nullptr; };
            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline CabinClass& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline CabinClass& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline CabinClass& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          protected:
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<string> flightNo_ {};
          };

          virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->flightNo_ == nullptr && this->ticketNo_ == nullptr && this->userId_ == nullptr; };
          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline const vector<FlightOrderRefundTicketList::CabinClass> & getCabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<FlightOrderRefundTicketList::CabinClass>) };
          inline vector<FlightOrderRefundTicketList::CabinClass> getCabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<FlightOrderRefundTicketList::CabinClass>) };
          inline FlightOrderRefundTicketList& setCabinClass(const vector<FlightOrderRefundTicketList::CabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
          inline FlightOrderRefundTicketList& setCabinClass(vector<FlightOrderRefundTicketList::CabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightOrderRefundTicketList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline FlightOrderRefundTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightOrderRefundTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<vector<FlightOrderRefundTicketList::CabinClass>> cabinClass_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<string> ticketNo_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->corpRefundAmount_ == nullptr
        && this->flightOrderRefundTicketList_ == nullptr && this->flightPassengerFee_ == nullptr && this->flightRefundSegmentList_ == nullptr && this->passengerList_ == nullptr && this->personRefundAmount_ == nullptr
        && this->refundApplyId_ == nullptr && this->refundHandFee_ == nullptr && this->refundOrderStatus_ == nullptr && this->refundServiceFee_ == nullptr && this->refundTotalAmount_ == nullptr
        && this->relateModifyApplyId_ == nullptr && this->relateRefundApplyId_ == nullptr && this->repeatRefund_ == nullptr && this->submitRefundTime_ == nullptr && this->voluntary_ == nullptr; };
        // corpRefundAmount Field Functions 
        bool hasCorpRefundAmount() const { return this->corpRefundAmount_ != nullptr;};
        void deleteCorpRefundAmount() { this->corpRefundAmount_ = nullptr;};
        inline int32_t getCorpRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(corpRefundAmount_, 0) };
        inline FlightRefundOrderList& setCorpRefundAmount(int32_t corpRefundAmount) { DARABONBA_PTR_SET_VALUE(corpRefundAmount_, corpRefundAmount) };


        // flightOrderRefundTicketList Field Functions 
        bool hasFlightOrderRefundTicketList() const { return this->flightOrderRefundTicketList_ != nullptr;};
        void deleteFlightOrderRefundTicketList() { this->flightOrderRefundTicketList_ = nullptr;};
        inline const vector<FlightRefundOrderList::FlightOrderRefundTicketList> & getFlightOrderRefundTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderRefundTicketList_, vector<FlightRefundOrderList::FlightOrderRefundTicketList>) };
        inline vector<FlightRefundOrderList::FlightOrderRefundTicketList> getFlightOrderRefundTicketList() { DARABONBA_PTR_GET(flightOrderRefundTicketList_, vector<FlightRefundOrderList::FlightOrderRefundTicketList>) };
        inline FlightRefundOrderList& setFlightOrderRefundTicketList(const vector<FlightRefundOrderList::FlightOrderRefundTicketList> & flightOrderRefundTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };
        inline FlightRefundOrderList& setFlightOrderRefundTicketList(vector<FlightRefundOrderList::FlightOrderRefundTicketList> && flightOrderRefundTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };


        // flightPassengerFee Field Functions 
        bool hasFlightPassengerFee() const { return this->flightPassengerFee_ != nullptr;};
        void deleteFlightPassengerFee() { this->flightPassengerFee_ = nullptr;};
        inline const vector<FlightRefundOrderList::FlightPassengerFee> & getFlightPassengerFee() const { DARABONBA_PTR_GET_CONST(flightPassengerFee_, vector<FlightRefundOrderList::FlightPassengerFee>) };
        inline vector<FlightRefundOrderList::FlightPassengerFee> getFlightPassengerFee() { DARABONBA_PTR_GET(flightPassengerFee_, vector<FlightRefundOrderList::FlightPassengerFee>) };
        inline FlightRefundOrderList& setFlightPassengerFee(const vector<FlightRefundOrderList::FlightPassengerFee> & flightPassengerFee) { DARABONBA_PTR_SET_VALUE(flightPassengerFee_, flightPassengerFee) };
        inline FlightRefundOrderList& setFlightPassengerFee(vector<FlightRefundOrderList::FlightPassengerFee> && flightPassengerFee) { DARABONBA_PTR_SET_RVALUE(flightPassengerFee_, flightPassengerFee) };


        // flightRefundSegmentList Field Functions 
        bool hasFlightRefundSegmentList() const { return this->flightRefundSegmentList_ != nullptr;};
        void deleteFlightRefundSegmentList() { this->flightRefundSegmentList_ = nullptr;};
        inline const vector<FlightRefundOrderList::FlightRefundSegmentList> & getFlightRefundSegmentList() const { DARABONBA_PTR_GET_CONST(flightRefundSegmentList_, vector<FlightRefundOrderList::FlightRefundSegmentList>) };
        inline vector<FlightRefundOrderList::FlightRefundSegmentList> getFlightRefundSegmentList() { DARABONBA_PTR_GET(flightRefundSegmentList_, vector<FlightRefundOrderList::FlightRefundSegmentList>) };
        inline FlightRefundOrderList& setFlightRefundSegmentList(const vector<FlightRefundOrderList::FlightRefundSegmentList> & flightRefundSegmentList) { DARABONBA_PTR_SET_VALUE(flightRefundSegmentList_, flightRefundSegmentList) };
        inline FlightRefundOrderList& setFlightRefundSegmentList(vector<FlightRefundOrderList::FlightRefundSegmentList> && flightRefundSegmentList) { DARABONBA_PTR_SET_RVALUE(flightRefundSegmentList_, flightRefundSegmentList) };


        // passengerList Field Functions 
        bool hasPassengerList() const { return this->passengerList_ != nullptr;};
        void deletePassengerList() { this->passengerList_ = nullptr;};
        inline const vector<string> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<string>) };
        inline vector<string> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<string>) };
        inline FlightRefundOrderList& setPassengerList(const vector<string> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
        inline FlightRefundOrderList& setPassengerList(vector<string> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


        // personRefundAmount Field Functions 
        bool hasPersonRefundAmount() const { return this->personRefundAmount_ != nullptr;};
        void deletePersonRefundAmount() { this->personRefundAmount_ = nullptr;};
        inline int32_t getPersonRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(personRefundAmount_, 0) };
        inline FlightRefundOrderList& setPersonRefundAmount(int32_t personRefundAmount) { DARABONBA_PTR_SET_VALUE(personRefundAmount_, personRefundAmount) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline int64_t getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
        inline FlightRefundOrderList& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // refundHandFee Field Functions 
        bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
        void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
        inline int32_t getRefundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0) };
        inline FlightRefundOrderList& setRefundHandFee(int32_t refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


        // refundOrderStatus Field Functions 
        bool hasRefundOrderStatus() const { return this->refundOrderStatus_ != nullptr;};
        void deleteRefundOrderStatus() { this->refundOrderStatus_ = nullptr;};
        inline int32_t getRefundOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(refundOrderStatus_, 0) };
        inline FlightRefundOrderList& setRefundOrderStatus(int32_t refundOrderStatus) { DARABONBA_PTR_SET_VALUE(refundOrderStatus_, refundOrderStatus) };


        // refundServiceFee Field Functions 
        bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
        void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
        inline int64_t getRefundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0L) };
        inline FlightRefundOrderList& setRefundServiceFee(int64_t refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


        // refundTotalAmount Field Functions 
        bool hasRefundTotalAmount() const { return this->refundTotalAmount_ != nullptr;};
        void deleteRefundTotalAmount() { this->refundTotalAmount_ = nullptr;};
        inline int32_t getRefundTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTotalAmount_, 0) };
        inline FlightRefundOrderList& setRefundTotalAmount(int32_t refundTotalAmount) { DARABONBA_PTR_SET_VALUE(refundTotalAmount_, refundTotalAmount) };


        // relateModifyApplyId Field Functions 
        bool hasRelateModifyApplyId() const { return this->relateModifyApplyId_ != nullptr;};
        void deleteRelateModifyApplyId() { this->relateModifyApplyId_ = nullptr;};
        inline const vector<int64_t> & getRelateModifyApplyId() const { DARABONBA_PTR_GET_CONST(relateModifyApplyId_, vector<int64_t>) };
        inline vector<int64_t> getRelateModifyApplyId() { DARABONBA_PTR_GET(relateModifyApplyId_, vector<int64_t>) };
        inline FlightRefundOrderList& setRelateModifyApplyId(const vector<int64_t> & relateModifyApplyId) { DARABONBA_PTR_SET_VALUE(relateModifyApplyId_, relateModifyApplyId) };
        inline FlightRefundOrderList& setRelateModifyApplyId(vector<int64_t> && relateModifyApplyId) { DARABONBA_PTR_SET_RVALUE(relateModifyApplyId_, relateModifyApplyId) };


        // relateRefundApplyId Field Functions 
        bool hasRelateRefundApplyId() const { return this->relateRefundApplyId_ != nullptr;};
        void deleteRelateRefundApplyId() { this->relateRefundApplyId_ = nullptr;};
        inline int64_t getRelateRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateRefundApplyId_, 0L) };
        inline FlightRefundOrderList& setRelateRefundApplyId(int64_t relateRefundApplyId) { DARABONBA_PTR_SET_VALUE(relateRefundApplyId_, relateRefundApplyId) };


        // repeatRefund Field Functions 
        bool hasRepeatRefund() const { return this->repeatRefund_ != nullptr;};
        void deleteRepeatRefund() { this->repeatRefund_ = nullptr;};
        inline bool getRepeatRefund() const { DARABONBA_PTR_GET_DEFAULT(repeatRefund_, false) };
        inline FlightRefundOrderList& setRepeatRefund(bool repeatRefund) { DARABONBA_PTR_SET_VALUE(repeatRefund_, repeatRefund) };


        // submitRefundTime Field Functions 
        bool hasSubmitRefundTime() const { return this->submitRefundTime_ != nullptr;};
        void deleteSubmitRefundTime() { this->submitRefundTime_ = nullptr;};
        inline string getSubmitRefundTime() const { DARABONBA_PTR_GET_DEFAULT(submitRefundTime_, "") };
        inline FlightRefundOrderList& setSubmitRefundTime(string submitRefundTime) { DARABONBA_PTR_SET_VALUE(submitRefundTime_, submitRefundTime) };


        // voluntary Field Functions 
        bool hasVoluntary() const { return this->voluntary_ != nullptr;};
        void deleteVoluntary() { this->voluntary_ = nullptr;};
        inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
        inline FlightRefundOrderList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


      protected:
        shared_ptr<int32_t> corpRefundAmount_ {};
        shared_ptr<vector<FlightRefundOrderList::FlightOrderRefundTicketList>> flightOrderRefundTicketList_ {};
        shared_ptr<vector<FlightRefundOrderList::FlightPassengerFee>> flightPassengerFee_ {};
        shared_ptr<vector<FlightRefundOrderList::FlightRefundSegmentList>> flightRefundSegmentList_ {};
        shared_ptr<vector<string>> passengerList_ {};
        shared_ptr<int32_t> personRefundAmount_ {};
        shared_ptr<int64_t> refundApplyId_ {};
        shared_ptr<int32_t> refundHandFee_ {};
        shared_ptr<int32_t> refundOrderStatus_ {};
        shared_ptr<int64_t> refundServiceFee_ {};
        shared_ptr<int32_t> refundTotalAmount_ {};
        shared_ptr<vector<int64_t>> relateModifyApplyId_ {};
        shared_ptr<int64_t> relateRefundApplyId_ {};
        shared_ptr<bool> repeatRefund_ {};
        shared_ptr<string> submitRefundTime_ {};
        shared_ptr<bool> voluntary_ {};
      };

      class FlightModifyOrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightModifyOrderList& obj) { 
          DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
          DARABONBA_PTR_TO_JSON(flight_modify_segment_list, flightModifySegmentList_);
          DARABONBA_PTR_TO_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
          DARABONBA_PTR_TO_JSON(modify_apply_id, modifyApplyId_);
          DARABONBA_PTR_TO_JSON(modify_fee, modifyFee_);
          DARABONBA_PTR_TO_JSON(modify_order_status, modifyOrderStatus_);
          DARABONBA_PTR_TO_JSON(modify_total_fee, modifyTotalFee_);
          DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
          DARABONBA_PTR_TO_JSON(relate_modify_apply_id, relateModifyApplyId_);
          DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_TO_JSON(submit_modify_time, submitModifyTime_);
          DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
        };
        friend void from_json(const Darabonba::Json& j, FlightModifyOrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
          DARABONBA_PTR_FROM_JSON(flight_modify_segment_list, flightModifySegmentList_);
          DARABONBA_PTR_FROM_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
          DARABONBA_PTR_FROM_JSON(modify_apply_id, modifyApplyId_);
          DARABONBA_PTR_FROM_JSON(modify_fee, modifyFee_);
          DARABONBA_PTR_FROM_JSON(modify_order_status, modifyOrderStatus_);
          DARABONBA_PTR_FROM_JSON(modify_total_fee, modifyTotalFee_);
          DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
          DARABONBA_PTR_FROM_JSON(relate_modify_apply_id, relateModifyApplyId_);
          DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
          DARABONBA_PTR_FROM_JSON(submit_modify_time, submitModifyTime_);
          DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
        };
        FlightModifyOrderList() = default ;
        FlightModifyOrderList(const FlightModifyOrderList &) = default ;
        FlightModifyOrderList(FlightModifyOrderList &&) = default ;
        FlightModifyOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightModifyOrderList() = default ;
        FlightModifyOrderList& operator=(const FlightModifyOrderList &) = default ;
        FlightModifyOrderList& operator=(FlightModifyOrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModifyFee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModifyFee& obj) { 
            DARABONBA_PTR_TO_JSON(modify_hand_fee, modifyHandFee_);
            DARABONBA_PTR_TO_JSON(modify_upgrade_fee, modifyUpgradeFee_);
            DARABONBA_PTR_TO_JSON(tax_gap, taxGap_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, ModifyFee& obj) { 
            DARABONBA_PTR_FROM_JSON(modify_hand_fee, modifyHandFee_);
            DARABONBA_PTR_FROM_JSON(modify_upgrade_fee, modifyUpgradeFee_);
            DARABONBA_PTR_FROM_JSON(tax_gap, taxGap_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          ModifyFee() = default ;
          ModifyFee(const ModifyFee &) = default ;
          ModifyFee(ModifyFee &&) = default ;
          ModifyFee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModifyFee() = default ;
          ModifyFee& operator=(const ModifyFee &) = default ;
          ModifyFee& operator=(ModifyFee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modifyHandFee_ == nullptr
        && this->modifyUpgradeFee_ == nullptr && this->taxGap_ == nullptr && this->userId_ == nullptr; };
          // modifyHandFee Field Functions 
          bool hasModifyHandFee() const { return this->modifyHandFee_ != nullptr;};
          void deleteModifyHandFee() { this->modifyHandFee_ = nullptr;};
          inline int64_t getModifyHandFee() const { DARABONBA_PTR_GET_DEFAULT(modifyHandFee_, 0L) };
          inline ModifyFee& setModifyHandFee(int64_t modifyHandFee) { DARABONBA_PTR_SET_VALUE(modifyHandFee_, modifyHandFee) };


          // modifyUpgradeFee Field Functions 
          bool hasModifyUpgradeFee() const { return this->modifyUpgradeFee_ != nullptr;};
          void deleteModifyUpgradeFee() { this->modifyUpgradeFee_ = nullptr;};
          inline int64_t getModifyUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(modifyUpgradeFee_, 0L) };
          inline ModifyFee& setModifyUpgradeFee(int64_t modifyUpgradeFee) { DARABONBA_PTR_SET_VALUE(modifyUpgradeFee_, modifyUpgradeFee) };


          // taxGap Field Functions 
          bool hasTaxGap() const { return this->taxGap_ != nullptr;};
          void deleteTaxGap() { this->taxGap_ = nullptr;};
          inline int64_t getTaxGap() const { DARABONBA_PTR_GET_DEFAULT(taxGap_, 0L) };
          inline ModifyFee& setTaxGap(int64_t taxGap) { DARABONBA_PTR_SET_VALUE(taxGap_, taxGap) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline ModifyFee& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<int64_t> modifyHandFee_ {};
          shared_ptr<int64_t> modifyUpgradeFee_ {};
          shared_ptr<int64_t> taxGap_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightOrderModifyTicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightOrderModifyTicketList& obj) { 
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightOrderModifyTicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightOrderModifyTicketList() = default ;
          FlightOrderModifyTicketList(const FlightOrderModifyTicketList &) = default ;
          FlightOrderModifyTicketList(FlightOrderModifyTicketList &&) = default ;
          FlightOrderModifyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightOrderModifyTicketList() = default ;
          FlightOrderModifyTicketList& operator=(const FlightOrderModifyTicketList &) = default ;
          FlightOrderModifyTicketList& operator=(FlightOrderModifyTicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CabinClass : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CabinClass& obj) { 
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            };
            friend void from_json(const Darabonba::Json& j, CabinClass& obj) { 
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            };
            CabinClass() = default ;
            CabinClass(const CabinClass &) = default ;
            CabinClass(CabinClass &&) = default ;
            CabinClass(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CabinClass() = default ;
            CabinClass& operator=(const CabinClass &) = default ;
            CabinClass& operator=(CabinClass &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->flightNo_ == nullptr; };
            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline CabinClass& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline CabinClass& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline CabinClass& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          protected:
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<string> flightNo_ {};
          };

          virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->flightNo_ == nullptr && this->ticketNo_ == nullptr && this->userId_ == nullptr; };
          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline const vector<FlightOrderModifyTicketList::CabinClass> & getCabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<FlightOrderModifyTicketList::CabinClass>) };
          inline vector<FlightOrderModifyTicketList::CabinClass> getCabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<FlightOrderModifyTicketList::CabinClass>) };
          inline FlightOrderModifyTicketList& setCabinClass(const vector<FlightOrderModifyTicketList::CabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
          inline FlightOrderModifyTicketList& setCabinClass(vector<FlightOrderModifyTicketList::CabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightOrderModifyTicketList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline FlightOrderModifyTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightOrderModifyTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<vector<FlightOrderModifyTicketList::CabinClass>> cabinClass_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<string> ticketNo_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightModifySegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightModifySegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
            DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightModifySegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
            DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
            DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
            DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(stop_apt_code, stopAptCode_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
          };
          FlightModifySegmentList() = default ;
          FlightModifySegmentList(const FlightModifySegmentList &) = default ;
          FlightModifySegmentList(FlightModifySegmentList &&) = default ;
          FlightModifySegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightModifySegmentList() = default ;
          FlightModifySegmentList& operator=(const FlightModifySegmentList &) = default ;
          FlightModifySegmentList& operator=(FlightModifySegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->carrierAirlineCode_ == nullptr && this->carrierAirlineName_ == nullptr && this->depApt_ == nullptr
        && this->depAptCode_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr
        && this->flightNo_ == nullptr && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->share_ == nullptr && this->stopAptCode_ == nullptr
        && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopCityCode_ == nullptr && this->stopDepTime_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline FlightModifySegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline FlightModifySegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // arrApt Field Functions 
          bool hasArrApt() const { return this->arrApt_ != nullptr;};
          void deleteArrApt() { this->arrApt_ = nullptr;};
          inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
          inline FlightModifySegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


          // arrAptCode Field Functions 
          bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
          void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
          inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
          inline FlightModifySegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline FlightModifySegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightModifySegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTerminal Field Functions 
          bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
          void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
          inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
          inline FlightModifySegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightModifySegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // carrierAirlineCode Field Functions 
          bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
          void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
          inline string getCarrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
          inline FlightModifySegmentList& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


          // carrierAirlineName Field Functions 
          bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
          void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
          inline string getCarrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
          inline FlightModifySegmentList& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


          // depApt Field Functions 
          bool hasDepApt() const { return this->depApt_ != nullptr;};
          void deleteDepApt() { this->depApt_ = nullptr;};
          inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
          inline FlightModifySegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


          // depAptCode Field Functions 
          bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
          void deleteDepAptCode() { this->depAptCode_ = nullptr;};
          inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
          inline FlightModifySegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline FlightModifySegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightModifySegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTerminal Field Functions 
          bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
          void deleteDepTerminal() { this->depTerminal_ = nullptr;};
          inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
          inline FlightModifySegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightModifySegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightModifySegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightModifySegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightModifySegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // share Field Functions 
          bool hasShare() const { return this->share_ != nullptr;};
          void deleteShare() { this->share_ = nullptr;};
          inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
          inline FlightModifySegmentList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


          // stopAptCode Field Functions 
          bool hasStopAptCode() const { return this->stopAptCode_ != nullptr;};
          void deleteStopAptCode() { this->stopAptCode_ = nullptr;};
          inline string getStopAptCode() const { DARABONBA_PTR_GET_DEFAULT(stopAptCode_, "") };
          inline FlightModifySegmentList& setStopAptCode(string stopAptCode) { DARABONBA_PTR_SET_VALUE(stopAptCode_, stopAptCode) };


          // stopArrTime Field Functions 
          bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
          void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
          inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
          inline FlightModifySegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


          // stopCity Field Functions 
          bool hasStopCity() const { return this->stopCity_ != nullptr;};
          void deleteStopCity() { this->stopCity_ = nullptr;};
          inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
          inline FlightModifySegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


          // stopCityCode Field Functions 
          bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
          void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
          inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
          inline FlightModifySegmentList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


          // stopDepTime Field Functions 
          bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
          void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
          inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
          inline FlightModifySegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> arrApt_ {};
          shared_ptr<string> arrAptCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTerminal_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> carrierAirlineCode_ {};
          shared_ptr<string> carrierAirlineName_ {};
          shared_ptr<string> depApt_ {};
          shared_ptr<string> depAptCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTerminal_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> stopAptCode_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCity_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopDepTime_ {};
        };

        virtual bool empty() const override { return this->corpPayPrice_ == nullptr
        && this->flightModifySegmentList_ == nullptr && this->flightOrderModifyTicketList_ == nullptr && this->modifyApplyId_ == nullptr && this->modifyFee_ == nullptr && this->modifyOrderStatus_ == nullptr
        && this->modifyTotalFee_ == nullptr && this->passengerList_ == nullptr && this->personPayPrice_ == nullptr && this->relateModifyApplyId_ == nullptr && this->serviceFee_ == nullptr
        && this->submitModifyTime_ == nullptr && this->voluntary_ == nullptr; };
        // corpPayPrice Field Functions 
        bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
        void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
        inline int32_t getCorpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0) };
        inline FlightModifyOrderList& setCorpPayPrice(int32_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


        // flightModifySegmentList Field Functions 
        bool hasFlightModifySegmentList() const { return this->flightModifySegmentList_ != nullptr;};
        void deleteFlightModifySegmentList() { this->flightModifySegmentList_ = nullptr;};
        inline const vector<FlightModifyOrderList::FlightModifySegmentList> & getFlightModifySegmentList() const { DARABONBA_PTR_GET_CONST(flightModifySegmentList_, vector<FlightModifyOrderList::FlightModifySegmentList>) };
        inline vector<FlightModifyOrderList::FlightModifySegmentList> getFlightModifySegmentList() { DARABONBA_PTR_GET(flightModifySegmentList_, vector<FlightModifyOrderList::FlightModifySegmentList>) };
        inline FlightModifyOrderList& setFlightModifySegmentList(const vector<FlightModifyOrderList::FlightModifySegmentList> & flightModifySegmentList) { DARABONBA_PTR_SET_VALUE(flightModifySegmentList_, flightModifySegmentList) };
        inline FlightModifyOrderList& setFlightModifySegmentList(vector<FlightModifyOrderList::FlightModifySegmentList> && flightModifySegmentList) { DARABONBA_PTR_SET_RVALUE(flightModifySegmentList_, flightModifySegmentList) };


        // flightOrderModifyTicketList Field Functions 
        bool hasFlightOrderModifyTicketList() const { return this->flightOrderModifyTicketList_ != nullptr;};
        void deleteFlightOrderModifyTicketList() { this->flightOrderModifyTicketList_ = nullptr;};
        inline const vector<FlightModifyOrderList::FlightOrderModifyTicketList> & getFlightOrderModifyTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderModifyTicketList_, vector<FlightModifyOrderList::FlightOrderModifyTicketList>) };
        inline vector<FlightModifyOrderList::FlightOrderModifyTicketList> getFlightOrderModifyTicketList() { DARABONBA_PTR_GET(flightOrderModifyTicketList_, vector<FlightModifyOrderList::FlightOrderModifyTicketList>) };
        inline FlightModifyOrderList& setFlightOrderModifyTicketList(const vector<FlightModifyOrderList::FlightOrderModifyTicketList> & flightOrderModifyTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };
        inline FlightModifyOrderList& setFlightOrderModifyTicketList(vector<FlightModifyOrderList::FlightOrderModifyTicketList> && flightOrderModifyTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };


        // modifyApplyId Field Functions 
        bool hasModifyApplyId() const { return this->modifyApplyId_ != nullptr;};
        void deleteModifyApplyId() { this->modifyApplyId_ = nullptr;};
        inline int64_t getModifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(modifyApplyId_, 0L) };
        inline FlightModifyOrderList& setModifyApplyId(int64_t modifyApplyId) { DARABONBA_PTR_SET_VALUE(modifyApplyId_, modifyApplyId) };


        // modifyFee Field Functions 
        bool hasModifyFee() const { return this->modifyFee_ != nullptr;};
        void deleteModifyFee() { this->modifyFee_ = nullptr;};
        inline const vector<FlightModifyOrderList::ModifyFee> & getModifyFee() const { DARABONBA_PTR_GET_CONST(modifyFee_, vector<FlightModifyOrderList::ModifyFee>) };
        inline vector<FlightModifyOrderList::ModifyFee> getModifyFee() { DARABONBA_PTR_GET(modifyFee_, vector<FlightModifyOrderList::ModifyFee>) };
        inline FlightModifyOrderList& setModifyFee(const vector<FlightModifyOrderList::ModifyFee> & modifyFee) { DARABONBA_PTR_SET_VALUE(modifyFee_, modifyFee) };
        inline FlightModifyOrderList& setModifyFee(vector<FlightModifyOrderList::ModifyFee> && modifyFee) { DARABONBA_PTR_SET_RVALUE(modifyFee_, modifyFee) };


        // modifyOrderStatus Field Functions 
        bool hasModifyOrderStatus() const { return this->modifyOrderStatus_ != nullptr;};
        void deleteModifyOrderStatus() { this->modifyOrderStatus_ = nullptr;};
        inline int32_t getModifyOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(modifyOrderStatus_, 0) };
        inline FlightModifyOrderList& setModifyOrderStatus(int32_t modifyOrderStatus) { DARABONBA_PTR_SET_VALUE(modifyOrderStatus_, modifyOrderStatus) };


        // modifyTotalFee Field Functions 
        bool hasModifyTotalFee() const { return this->modifyTotalFee_ != nullptr;};
        void deleteModifyTotalFee() { this->modifyTotalFee_ = nullptr;};
        inline int32_t getModifyTotalFee() const { DARABONBA_PTR_GET_DEFAULT(modifyTotalFee_, 0) };
        inline FlightModifyOrderList& setModifyTotalFee(int32_t modifyTotalFee) { DARABONBA_PTR_SET_VALUE(modifyTotalFee_, modifyTotalFee) };


        // passengerList Field Functions 
        bool hasPassengerList() const { return this->passengerList_ != nullptr;};
        void deletePassengerList() { this->passengerList_ = nullptr;};
        inline const vector<string> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<string>) };
        inline vector<string> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<string>) };
        inline FlightModifyOrderList& setPassengerList(const vector<string> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
        inline FlightModifyOrderList& setPassengerList(vector<string> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


        // personPayPrice Field Functions 
        bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
        void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
        inline int32_t getPersonPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0) };
        inline FlightModifyOrderList& setPersonPayPrice(int32_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


        // relateModifyApplyId Field Functions 
        bool hasRelateModifyApplyId() const { return this->relateModifyApplyId_ != nullptr;};
        void deleteRelateModifyApplyId() { this->relateModifyApplyId_ = nullptr;};
        inline int64_t getRelateModifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateModifyApplyId_, 0L) };
        inline FlightModifyOrderList& setRelateModifyApplyId(int64_t relateModifyApplyId) { DARABONBA_PTR_SET_VALUE(relateModifyApplyId_, relateModifyApplyId) };


        // serviceFee Field Functions 
        bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
        void deleteServiceFee() { this->serviceFee_ = nullptr;};
        inline int64_t getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
        inline FlightModifyOrderList& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


        // submitModifyTime Field Functions 
        bool hasSubmitModifyTime() const { return this->submitModifyTime_ != nullptr;};
        void deleteSubmitModifyTime() { this->submitModifyTime_ = nullptr;};
        inline string getSubmitModifyTime() const { DARABONBA_PTR_GET_DEFAULT(submitModifyTime_, "") };
        inline FlightModifyOrderList& setSubmitModifyTime(string submitModifyTime) { DARABONBA_PTR_SET_VALUE(submitModifyTime_, submitModifyTime) };


        // voluntary Field Functions 
        bool hasVoluntary() const { return this->voluntary_ != nullptr;};
        void deleteVoluntary() { this->voluntary_ = nullptr;};
        inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
        inline FlightModifyOrderList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


      protected:
        shared_ptr<int32_t> corpPayPrice_ {};
        shared_ptr<vector<FlightModifyOrderList::FlightModifySegmentList>> flightModifySegmentList_ {};
        shared_ptr<vector<FlightModifyOrderList::FlightOrderModifyTicketList>> flightOrderModifyTicketList_ {};
        shared_ptr<int64_t> modifyApplyId_ {};
        shared_ptr<vector<FlightModifyOrderList::ModifyFee>> modifyFee_ {};
        shared_ptr<int32_t> modifyOrderStatus_ {};
        shared_ptr<int32_t> modifyTotalFee_ {};
        shared_ptr<vector<string>> passengerList_ {};
        shared_ptr<int32_t> personPayPrice_ {};
        shared_ptr<int64_t> relateModifyApplyId_ {};
        shared_ptr<int64_t> serviceFee_ {};
        shared_ptr<string> submitModifyTime_ {};
        shared_ptr<bool> voluntary_ {};
      };

      virtual bool empty() const override { return this->flightModifyOrderList_ == nullptr
        && this->flightRefundOrderList_ == nullptr && this->flightSaleOrder_ == nullptr; };
      // flightModifyOrderList Field Functions 
      bool hasFlightModifyOrderList() const { return this->flightModifyOrderList_ != nullptr;};
      void deleteFlightModifyOrderList() { this->flightModifyOrderList_ = nullptr;};
      inline const vector<Module::FlightModifyOrderList> & getFlightModifyOrderList() const { DARABONBA_PTR_GET_CONST(flightModifyOrderList_, vector<Module::FlightModifyOrderList>) };
      inline vector<Module::FlightModifyOrderList> getFlightModifyOrderList() { DARABONBA_PTR_GET(flightModifyOrderList_, vector<Module::FlightModifyOrderList>) };
      inline Module& setFlightModifyOrderList(const vector<Module::FlightModifyOrderList> & flightModifyOrderList) { DARABONBA_PTR_SET_VALUE(flightModifyOrderList_, flightModifyOrderList) };
      inline Module& setFlightModifyOrderList(vector<Module::FlightModifyOrderList> && flightModifyOrderList) { DARABONBA_PTR_SET_RVALUE(flightModifyOrderList_, flightModifyOrderList) };


      // flightRefundOrderList Field Functions 
      bool hasFlightRefundOrderList() const { return this->flightRefundOrderList_ != nullptr;};
      void deleteFlightRefundOrderList() { this->flightRefundOrderList_ = nullptr;};
      inline const vector<Module::FlightRefundOrderList> & getFlightRefundOrderList() const { DARABONBA_PTR_GET_CONST(flightRefundOrderList_, vector<Module::FlightRefundOrderList>) };
      inline vector<Module::FlightRefundOrderList> getFlightRefundOrderList() { DARABONBA_PTR_GET(flightRefundOrderList_, vector<Module::FlightRefundOrderList>) };
      inline Module& setFlightRefundOrderList(const vector<Module::FlightRefundOrderList> & flightRefundOrderList) { DARABONBA_PTR_SET_VALUE(flightRefundOrderList_, flightRefundOrderList) };
      inline Module& setFlightRefundOrderList(vector<Module::FlightRefundOrderList> && flightRefundOrderList) { DARABONBA_PTR_SET_RVALUE(flightRefundOrderList_, flightRefundOrderList) };


      // flightSaleOrder Field Functions 
      bool hasFlightSaleOrder() const { return this->flightSaleOrder_ != nullptr;};
      void deleteFlightSaleOrder() { this->flightSaleOrder_ = nullptr;};
      inline const Module::FlightSaleOrder & getFlightSaleOrder() const { DARABONBA_PTR_GET_CONST(flightSaleOrder_, Module::FlightSaleOrder) };
      inline Module::FlightSaleOrder getFlightSaleOrder() { DARABONBA_PTR_GET(flightSaleOrder_, Module::FlightSaleOrder) };
      inline Module& setFlightSaleOrder(const Module::FlightSaleOrder & flightSaleOrder) { DARABONBA_PTR_SET_VALUE(flightSaleOrder_, flightSaleOrder) };
      inline Module& setFlightSaleOrder(Module::FlightSaleOrder && flightSaleOrder) { DARABONBA_PTR_SET_RVALUE(flightSaleOrder_, flightSaleOrder) };


    protected:
      shared_ptr<vector<Module::FlightModifyOrderList>> flightModifyOrderList_ {};
      shared_ptr<vector<Module::FlightRefundOrderList>> flightRefundOrderList_ {};
      shared_ptr<Module::FlightSaleOrder> flightSaleOrder_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IFlightOrderDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IFlightOrderDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IFlightOrderDetailQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IFlightOrderDetailQueryResponseBody::Module) };
    inline IFlightOrderDetailQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IFlightOrderDetailQueryResponseBody::Module) };
    inline IFlightOrderDetailQueryResponseBody& setModule(const IFlightOrderDetailQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IFlightOrderDetailQueryResponseBody& setModule(IFlightOrderDetailQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IFlightOrderDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IFlightOrderDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IFlightOrderDetailQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IFlightOrderDetailQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
