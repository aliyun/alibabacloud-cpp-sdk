// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODY_HPP_
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
  class FlightModifyOrderDetailV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightModifyOrderDetailV2ResponseBody() = default ;
    FlightModifyOrderDetailV2ResponseBody(const FlightModifyOrderDetailV2ResponseBody &) = default ;
    FlightModifyOrderDetailV2ResponseBody(FlightModifyOrderDetailV2ResponseBody &&) = default ;
    FlightModifyOrderDetailV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBody() = default ;
    FlightModifyOrderDetailV2ResponseBody& operator=(const FlightModifyOrderDetailV2ResponseBody &) = default ;
    FlightModifyOrderDetailV2ResponseBody& operator=(FlightModifyOrderDetailV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
        DARABONBA_PTR_TO_JSON(attributes, attributes_);
        DARABONBA_PTR_TO_JSON(book_user_email, bookUserEmail_);
        DARABONBA_PTR_TO_JSON(book_user_name, bookUserName_);
        DARABONBA_PTR_TO_JSON(bookuser_phone, bookuserPhone_);
        DARABONBA_PTR_TO_JSON(change_fail_reason, changeFailReason_);
        DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_TO_JSON(dest_flight_info_d_t_o_s, destFlightInfoDTOS_);
        DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
        DARABONBA_PTR_TO_JSON(ticket_time, ticketTime_);
        DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
        DARABONBA_PTR_TO_JSON(total_service_fee_price, totalServiceFeePrice_);
        DARABONBA_PTR_TO_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
        DARABONBA_PTR_FROM_JSON(attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(book_user_email, bookUserEmail_);
        DARABONBA_PTR_FROM_JSON(book_user_name, bookUserName_);
        DARABONBA_PTR_FROM_JSON(bookuser_phone, bookuserPhone_);
        DARABONBA_PTR_FROM_JSON(change_fail_reason, changeFailReason_);
        DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_FROM_JSON(dest_flight_info_d_t_o_s, destFlightInfoDTOS_);
        DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
        DARABONBA_PTR_FROM_JSON(ticket_time, ticketTime_);
        DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
        DARABONBA_PTR_FROM_JSON(total_service_fee_price, totalServiceFeePrice_);
        DARABONBA_PTR_FROM_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
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
      class TravelerInfoDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TravelerInfoDTOS& obj) { 
          DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
          DARABONBA_PTR_TO_JSON(cert_no, certNo_);
          DARABONBA_PTR_TO_JSON(cert_type, certType_);
          DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(origin_ticket_nos, originTicketNos_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(pid, pid_);
          DARABONBA_ANY_TO_JSON(ticket_no_segment_map, ticketNoSegmentMap_);
          DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerInfoDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(origin_ticket_nos, originTicketNos_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(pid, pid_);
          DARABONBA_ANY_FROM_JSON(ticket_no_segment_map, ticketNoSegmentMap_);
          DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
        };
        TravelerInfoDTOS() = default ;
        TravelerInfoDTOS(const TravelerInfoDTOS &) = default ;
        TravelerInfoDTOS(TravelerInfoDTOS &&) = default ;
        TravelerInfoDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TravelerInfoDTOS() = default ;
        TravelerInfoDTOS& operator=(const TravelerInfoDTOS &) = default ;
        TravelerInfoDTOS& operator=(TravelerInfoDTOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChangeFee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChangeFee& obj) { 
            DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
            DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
            DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
          };
          friend void from_json(const Darabonba::Json& j, ChangeFee& obj) { 
            DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
            DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
            DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
          };
          ChangeFee() = default ;
          ChangeFee(const ChangeFee &) = default ;
          ChangeFee(ChangeFee &&) = default ;
          ChangeFee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChangeFee() = default ;
          ChangeFee& operator=(const ChangeFee &) = default ;
          ChangeFee& operator=(ChangeFee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->changeFee_ == nullptr
        && this->serviceFee_ == nullptr && this->upgradePrice_ == nullptr; };
          // changeFee Field Functions 
          bool hasChangeFee() const { return this->changeFee_ != nullptr;};
          void deleteChangeFee() { this->changeFee_ = nullptr;};
          inline int64_t getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
          inline ChangeFee& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


          // serviceFee Field Functions 
          bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
          void deleteServiceFee() { this->serviceFee_ = nullptr;};
          inline int64_t getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
          inline ChangeFee& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


          // upgradePrice Field Functions 
          bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
          void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
          inline int64_t getUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0L) };
          inline ChangeFee& setUpgradePrice(int64_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


        protected:
          shared_ptr<int64_t> changeFee_ {};
          shared_ptr<int64_t> serviceFee_ {};
          shared_ptr<int64_t> upgradePrice_ {};
        };

        virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->certNo_ == nullptr && this->certType_ == nullptr && this->changeFee_ == nullptr && this->gender_ == nullptr && this->originTicketNos_ == nullptr
        && this->passengerId_ == nullptr && this->passengerName_ == nullptr && this->passengerType_ == nullptr && this->phone_ == nullptr && this->pid_ == nullptr
        && this->ticketNoSegmentMap_ == nullptr && this->ticketNos_ == nullptr; };
        // birthDate Field Functions 
        bool hasBirthDate() const { return this->birthDate_ != nullptr;};
        void deleteBirthDate() { this->birthDate_ = nullptr;};
        inline string getBirthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
        inline TravelerInfoDTOS& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


        // certNo Field Functions 
        bool hasCertNo() const { return this->certNo_ != nullptr;};
        void deleteCertNo() { this->certNo_ = nullptr;};
        inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
        inline TravelerInfoDTOS& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
        inline TravelerInfoDTOS& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // changeFee Field Functions 
        bool hasChangeFee() const { return this->changeFee_ != nullptr;};
        void deleteChangeFee() { this->changeFee_ = nullptr;};
        inline const TravelerInfoDTOS::ChangeFee & getChangeFee() const { DARABONBA_PTR_GET_CONST(changeFee_, TravelerInfoDTOS::ChangeFee) };
        inline TravelerInfoDTOS::ChangeFee getChangeFee() { DARABONBA_PTR_GET(changeFee_, TravelerInfoDTOS::ChangeFee) };
        inline TravelerInfoDTOS& setChangeFee(const TravelerInfoDTOS::ChangeFee & changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };
        inline TravelerInfoDTOS& setChangeFee(TravelerInfoDTOS::ChangeFee && changeFee) { DARABONBA_PTR_SET_RVALUE(changeFee_, changeFee) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline TravelerInfoDTOS& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // originTicketNos Field Functions 
        bool hasOriginTicketNos() const { return this->originTicketNos_ != nullptr;};
        void deleteOriginTicketNos() { this->originTicketNos_ = nullptr;};
        inline const vector<string> & getOriginTicketNos() const { DARABONBA_PTR_GET_CONST(originTicketNos_, vector<string>) };
        inline vector<string> getOriginTicketNos() { DARABONBA_PTR_GET(originTicketNos_, vector<string>) };
        inline TravelerInfoDTOS& setOriginTicketNos(const vector<string> & originTicketNos) { DARABONBA_PTR_SET_VALUE(originTicketNos_, originTicketNos) };
        inline TravelerInfoDTOS& setOriginTicketNos(vector<string> && originTicketNos) { DARABONBA_PTR_SET_RVALUE(originTicketNos_, originTicketNos) };


        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
        inline TravelerInfoDTOS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline TravelerInfoDTOS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // passengerType Field Functions 
        bool hasPassengerType() const { return this->passengerType_ != nullptr;};
        void deletePassengerType() { this->passengerType_ = nullptr;};
        inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
        inline TravelerInfoDTOS& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline TravelerInfoDTOS& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // pid Field Functions 
        bool hasPid() const { return this->pid_ != nullptr;};
        void deletePid() { this->pid_ = nullptr;};
        inline int64_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
        inline TravelerInfoDTOS& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


        // ticketNoSegmentMap Field Functions 
        bool hasTicketNoSegmentMap() const { return this->ticketNoSegmentMap_ != nullptr;};
        void deleteTicketNoSegmentMap() { this->ticketNoSegmentMap_ = nullptr;};
        inline         const Darabonba::Json & getTicketNoSegmentMap() const { DARABONBA_GET(ticketNoSegmentMap_) };
        Darabonba::Json & getTicketNoSegmentMap() { DARABONBA_GET(ticketNoSegmentMap_) };
        inline TravelerInfoDTOS& setTicketNoSegmentMap(const Darabonba::Json & ticketNoSegmentMap) { DARABONBA_SET_VALUE(ticketNoSegmentMap_, ticketNoSegmentMap) };
        inline TravelerInfoDTOS& setTicketNoSegmentMap(Darabonba::Json && ticketNoSegmentMap) { DARABONBA_SET_RVALUE(ticketNoSegmentMap_, ticketNoSegmentMap) };


        // ticketNos Field Functions 
        bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
        void deleteTicketNos() { this->ticketNos_ = nullptr;};
        inline const vector<string> & getTicketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
        inline vector<string> getTicketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
        inline TravelerInfoDTOS& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
        inline TravelerInfoDTOS& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


      protected:
        shared_ptr<string> birthDate_ {};
        shared_ptr<string> certNo_ {};
        shared_ptr<int32_t> certType_ {};
        shared_ptr<TravelerInfoDTOS::ChangeFee> changeFee_ {};
        shared_ptr<int32_t> gender_ {};
        shared_ptr<vector<string>> originTicketNos_ {};
        shared_ptr<string> passengerId_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> passengerType_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<int64_t> pid_ {};
        Darabonba::Json ticketNoSegmentMap_ {};
        shared_ptr<vector<string>> ticketNos_ {};
      };

      class DestFlightInfoDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestFlightInfoDTOS& obj) { 
          DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_TO_JSON(airline_icon_url, airlineIconUrl_);
          DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_TO_JSON(cabin_discount, cabinDiscount_);
          DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
          DARABONBA_PTR_TO_JSON(carrier_airline_icon_url, carrierAirlineIconUrl_);
          DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
          DARABONBA_PTR_TO_JSON(carrier_flight_no, carrierFlightNo_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(segmentI_id, segmentIId_);
          DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
          DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
        };
        friend void from_json(const Darabonba::Json& j, DestFlightInfoDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_FROM_JSON(airline_icon_url, airlineIconUrl_);
          DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(cabin_discount, cabinDiscount_);
          DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
          DARABONBA_PTR_FROM_JSON(carrier_airline_icon_url, carrierAirlineIconUrl_);
          DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
          DARABONBA_PTR_FROM_JSON(carrier_flight_no, carrierFlightNo_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(segmentI_id, segmentIId_);
          DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
          DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
        };
        DestFlightInfoDTOS() = default ;
        DestFlightInfoDTOS(const DestFlightInfoDTOS &) = default ;
        DestFlightInfoDTOS(DestFlightInfoDTOS &&) = default ;
        DestFlightInfoDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestFlightInfoDTOS() = default ;
        DestFlightInfoDTOS& operator=(const DestFlightInfoDTOS &) = default ;
        DestFlightInfoDTOS& operator=(DestFlightInfoDTOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentPosition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          };
          SegmentPosition() = default ;
          SegmentPosition(const SegmentPosition &) = default ;
          SegmentPosition(SegmentPosition &&) = default ;
          SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentPosition() = default ;
          SegmentPosition& operator=(const SegmentPosition &) = default ;
          SegmentPosition& operator=(SegmentPosition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        protected:
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
        };

        class FlightChange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightChange& obj) { 
            DARABONBA_PTR_TO_JSON(change_desc, changeDesc_);
            DARABONBA_PTR_TO_JSON(change_status, changeStatus_);
            DARABONBA_PTR_TO_JSON(change_status_code, changeStatusCode_);
            DARABONBA_ANY_TO_JSON(new_segment, newSegment_);
            DARABONBA_PTR_TO_JSON(passenger_names, passengerNames_);
          };
          friend void from_json(const Darabonba::Json& j, FlightChange& obj) { 
            DARABONBA_PTR_FROM_JSON(change_desc, changeDesc_);
            DARABONBA_PTR_FROM_JSON(change_status, changeStatus_);
            DARABONBA_PTR_FROM_JSON(change_status_code, changeStatusCode_);
            DARABONBA_ANY_FROM_JSON(new_segment, newSegment_);
            DARABONBA_PTR_FROM_JSON(passenger_names, passengerNames_);
          };
          FlightChange() = default ;
          FlightChange(const FlightChange &) = default ;
          FlightChange(FlightChange &&) = default ;
          FlightChange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightChange() = default ;
          FlightChange& operator=(const FlightChange &) = default ;
          FlightChange& operator=(FlightChange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->changeDesc_ == nullptr
        && this->changeStatus_ == nullptr && this->changeStatusCode_ == nullptr && this->newSegment_ == nullptr && this->passengerNames_ == nullptr; };
          // changeDesc Field Functions 
          bool hasChangeDesc() const { return this->changeDesc_ != nullptr;};
          void deleteChangeDesc() { this->changeDesc_ = nullptr;};
          inline string getChangeDesc() const { DARABONBA_PTR_GET_DEFAULT(changeDesc_, "") };
          inline FlightChange& setChangeDesc(string changeDesc) { DARABONBA_PTR_SET_VALUE(changeDesc_, changeDesc) };


          // changeStatus Field Functions 
          bool hasChangeStatus() const { return this->changeStatus_ != nullptr;};
          void deleteChangeStatus() { this->changeStatus_ = nullptr;};
          inline string getChangeStatus() const { DARABONBA_PTR_GET_DEFAULT(changeStatus_, "") };
          inline FlightChange& setChangeStatus(string changeStatus) { DARABONBA_PTR_SET_VALUE(changeStatus_, changeStatus) };


          // changeStatusCode Field Functions 
          bool hasChangeStatusCode() const { return this->changeStatusCode_ != nullptr;};
          void deleteChangeStatusCode() { this->changeStatusCode_ = nullptr;};
          inline string getChangeStatusCode() const { DARABONBA_PTR_GET_DEFAULT(changeStatusCode_, "") };
          inline FlightChange& setChangeStatusCode(string changeStatusCode) { DARABONBA_PTR_SET_VALUE(changeStatusCode_, changeStatusCode) };


          // newSegment Field Functions 
          bool hasNewSegment() const { return this->newSegment_ != nullptr;};
          void deleteNewSegment() { this->newSegment_ = nullptr;};
          inline           const Darabonba::Json & getNewSegment() const { DARABONBA_GET(newSegment_) };
          Darabonba::Json & getNewSegment() { DARABONBA_GET(newSegment_) };
          inline FlightChange& setNewSegment(const Darabonba::Json & newSegment) { DARABONBA_SET_VALUE(newSegment_, newSegment) };
          inline FlightChange& setNewSegment(Darabonba::Json && newSegment) { DARABONBA_SET_RVALUE(newSegment_, newSegment) };


          // passengerNames Field Functions 
          bool hasPassengerNames() const { return this->passengerNames_ != nullptr;};
          void deletePassengerNames() { this->passengerNames_ = nullptr;};
          inline const vector<string> & getPassengerNames() const { DARABONBA_PTR_GET_CONST(passengerNames_, vector<string>) };
          inline vector<string> getPassengerNames() { DARABONBA_PTR_GET(passengerNames_, vector<string>) };
          inline FlightChange& setPassengerNames(const vector<string> & passengerNames) { DARABONBA_PTR_SET_VALUE(passengerNames_, passengerNames) };
          inline FlightChange& setPassengerNames(vector<string> && passengerNames) { DARABONBA_PTR_SET_RVALUE(passengerNames_, passengerNames) };


        protected:
          shared_ptr<string> changeDesc_ {};
          shared_ptr<string> changeStatus_ {};
          shared_ptr<string> changeStatusCode_ {};
          Darabonba::Json newSegment_ {};
          shared_ptr<vector<string>> passengerNames_ {};
        };

        virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineIconUrl_ == nullptr && this->airlineName_ == nullptr && this->arrAirportCode_ == nullptr && this->arrAirportName_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr
        && this->cabinClassName_ == nullptr && this->cabinDiscount_ == nullptr && this->carrierAirlineCode_ == nullptr && this->carrierAirlineIconUrl_ == nullptr && this->carrierAirlineName_ == nullptr
        && this->carrierFlightNo_ == nullptr && this->depAirportCode_ == nullptr && this->depAirportName_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr
        && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightChange_ == nullptr && this->flightNo_ == nullptr && this->flightType_ == nullptr
        && this->mealDesc_ == nullptr && this->segmentIId_ == nullptr && this->segmentPosition_ == nullptr && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr
        && this->stopDepTime_ == nullptr; };
        // airlineCode Field Functions 
        bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
        void deleteAirlineCode() { this->airlineCode_ = nullptr;};
        inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
        inline DestFlightInfoDTOS& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


        // airlineIconUrl Field Functions 
        bool hasAirlineIconUrl() const { return this->airlineIconUrl_ != nullptr;};
        void deleteAirlineIconUrl() { this->airlineIconUrl_ = nullptr;};
        inline string getAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(airlineIconUrl_, "") };
        inline DestFlightInfoDTOS& setAirlineIconUrl(string airlineIconUrl) { DARABONBA_PTR_SET_VALUE(airlineIconUrl_, airlineIconUrl) };


        // airlineName Field Functions 
        bool hasAirlineName() const { return this->airlineName_ != nullptr;};
        void deleteAirlineName() { this->airlineName_ = nullptr;};
        inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
        inline DestFlightInfoDTOS& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline DestFlightInfoDTOS& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline DestFlightInfoDTOS& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline DestFlightInfoDTOS& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline DestFlightInfoDTOS& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTerminal Field Functions 
        bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
        void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
        inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
        inline DestFlightInfoDTOS& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline DestFlightInfoDTOS& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline DestFlightInfoDTOS& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline DestFlightInfoDTOS& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline DestFlightInfoDTOS& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // cabinDiscount Field Functions 
        bool hasCabinDiscount() const { return this->cabinDiscount_ != nullptr;};
        void deleteCabinDiscount() { this->cabinDiscount_ = nullptr;};
        inline int64_t getCabinDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinDiscount_, 0L) };
        inline DestFlightInfoDTOS& setCabinDiscount(int64_t cabinDiscount) { DARABONBA_PTR_SET_VALUE(cabinDiscount_, cabinDiscount) };


        // carrierAirlineCode Field Functions 
        bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
        void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
        inline string getCarrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
        inline DestFlightInfoDTOS& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


        // carrierAirlineIconUrl Field Functions 
        bool hasCarrierAirlineIconUrl() const { return this->carrierAirlineIconUrl_ != nullptr;};
        void deleteCarrierAirlineIconUrl() { this->carrierAirlineIconUrl_ = nullptr;};
        inline string getCarrierAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineIconUrl_, "") };
        inline DestFlightInfoDTOS& setCarrierAirlineIconUrl(string carrierAirlineIconUrl) { DARABONBA_PTR_SET_VALUE(carrierAirlineIconUrl_, carrierAirlineIconUrl) };


        // carrierAirlineName Field Functions 
        bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
        void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
        inline string getCarrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
        inline DestFlightInfoDTOS& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


        // carrierFlightNo Field Functions 
        bool hasCarrierFlightNo() const { return this->carrierFlightNo_ != nullptr;};
        void deleteCarrierFlightNo() { this->carrierFlightNo_ = nullptr;};
        inline string getCarrierFlightNo() const { DARABONBA_PTR_GET_DEFAULT(carrierFlightNo_, "") };
        inline DestFlightInfoDTOS& setCarrierFlightNo(string carrierFlightNo) { DARABONBA_PTR_SET_VALUE(carrierFlightNo_, carrierFlightNo) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline DestFlightInfoDTOS& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline DestFlightInfoDTOS& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline DestFlightInfoDTOS& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline DestFlightInfoDTOS& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTerminal Field Functions 
        bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
        void deleteDepTerminal() { this->depTerminal_ = nullptr;};
        inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
        inline DestFlightInfoDTOS& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline DestFlightInfoDTOS& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // flightChange Field Functions 
        bool hasFlightChange() const { return this->flightChange_ != nullptr;};
        void deleteFlightChange() { this->flightChange_ = nullptr;};
        inline const DestFlightInfoDTOS::FlightChange & getFlightChange() const { DARABONBA_PTR_GET_CONST(flightChange_, DestFlightInfoDTOS::FlightChange) };
        inline DestFlightInfoDTOS::FlightChange getFlightChange() { DARABONBA_PTR_GET(flightChange_, DestFlightInfoDTOS::FlightChange) };
        inline DestFlightInfoDTOS& setFlightChange(const DestFlightInfoDTOS::FlightChange & flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };
        inline DestFlightInfoDTOS& setFlightChange(DestFlightInfoDTOS::FlightChange && flightChange) { DARABONBA_PTR_SET_RVALUE(flightChange_, flightChange) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline DestFlightInfoDTOS& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline DestFlightInfoDTOS& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline DestFlightInfoDTOS& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // segmentIId Field Functions 
        bool hasSegmentIId() const { return this->segmentIId_ != nullptr;};
        void deleteSegmentIId() { this->segmentIId_ = nullptr;};
        inline string getSegmentIId() const { DARABONBA_PTR_GET_DEFAULT(segmentIId_, "") };
        inline DestFlightInfoDTOS& setSegmentIId(string segmentIId) { DARABONBA_PTR_SET_VALUE(segmentIId_, segmentIId) };


        // segmentPosition Field Functions 
        bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
        void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
        inline const DestFlightInfoDTOS::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, DestFlightInfoDTOS::SegmentPosition) };
        inline DestFlightInfoDTOS::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, DestFlightInfoDTOS::SegmentPosition) };
        inline DestFlightInfoDTOS& setSegmentPosition(const DestFlightInfoDTOS::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
        inline DestFlightInfoDTOS& setSegmentPosition(DestFlightInfoDTOS::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


        // stopArrTime Field Functions 
        bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
        void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
        inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
        inline DestFlightInfoDTOS& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
        inline DestFlightInfoDTOS& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


        // stopDepTime Field Functions 
        bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
        void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
        inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
        inline DestFlightInfoDTOS& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


      protected:
        shared_ptr<string> airlineCode_ {};
        shared_ptr<string> airlineIconUrl_ {};
        shared_ptr<string> airlineName_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrAirportName_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTerminal_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassName_ {};
        shared_ptr<int64_t> cabinDiscount_ {};
        shared_ptr<string> carrierAirlineCode_ {};
        shared_ptr<string> carrierAirlineIconUrl_ {};
        shared_ptr<string> carrierAirlineName_ {};
        shared_ptr<string> carrierFlightNo_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depAirportName_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTerminal_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<DestFlightInfoDTOS::FlightChange> flightChange_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<string> segmentIId_ {};
        shared_ptr<DestFlightInfoDTOS::SegmentPosition> segmentPosition_ {};
        shared_ptr<string> stopArrTime_ {};
        shared_ptr<string> stopCity_ {};
        shared_ptr<string> stopDepTime_ {};
      };

      class ContactInfoDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactInfoDTO& obj) { 
          DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_TO_JSON(contact_name, contactName_);
          DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_TO_JSON(send_msg_to_passenger, sendMsgToPassenger_);
        };
        friend void from_json(const Darabonba::Json& j, ContactInfoDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
          DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_FROM_JSON(send_msg_to_passenger, sendMsgToPassenger_);
        };
        ContactInfoDTO() = default ;
        ContactInfoDTO(const ContactInfoDTO &) = default ;
        ContactInfoDTO(ContactInfoDTO &&) = default ;
        ContactInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactInfoDTO() = default ;
        ContactInfoDTO& operator=(const ContactInfoDTO &) = default ;
        ContactInfoDTO& operator=(ContactInfoDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->sendMsgToPassenger_ == nullptr; };
        // contactEmail Field Functions 
        bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
        void deleteContactEmail() { this->contactEmail_ = nullptr;};
        inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
        inline ContactInfoDTO& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline ContactInfoDTO& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // contactPhone Field Functions 
        bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
        void deleteContactPhone() { this->contactPhone_ = nullptr;};
        inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
        inline ContactInfoDTO& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


        // sendMsgToPassenger Field Functions 
        bool hasSendMsgToPassenger() const { return this->sendMsgToPassenger_ != nullptr;};
        void deleteSendMsgToPassenger() { this->sendMsgToPassenger_ = nullptr;};
        inline bool getSendMsgToPassenger() const { DARABONBA_PTR_GET_DEFAULT(sendMsgToPassenger_, false) };
        inline ContactInfoDTO& setSendMsgToPassenger(bool sendMsgToPassenger) { DARABONBA_PTR_SET_VALUE(sendMsgToPassenger_, sendMsgToPassenger) };


      protected:
        shared_ptr<string> contactEmail_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<string> contactPhone_ {};
        shared_ptr<bool> sendMsgToPassenger_ {};
      };

      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
          DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
          DARABONBA_ANY_TO_JSON(latest_pay_time, latestPayTime_);
          DARABONBA_PTR_TO_JSON(latest_pay_time_str, latestPayTimeStr_);
          DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
          DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
          DARABONBA_ANY_FROM_JSON(latest_pay_time, latestPayTime_);
          DARABONBA_PTR_FROM_JSON(latest_pay_time_str, latestPayTimeStr_);
          DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baggageRule_ == nullptr
        && this->changeRule_ == nullptr && this->latestPayTime_ == nullptr && this->latestPayTimeStr_ == nullptr && this->refundRule_ == nullptr; };
        // baggageRule Field Functions 
        bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
        void deleteBaggageRule() { this->baggageRule_ = nullptr;};
        inline string getBaggageRule() const { DARABONBA_PTR_GET_DEFAULT(baggageRule_, "") };
        inline Attributes& setBaggageRule(string baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };


        // changeRule Field Functions 
        bool hasChangeRule() const { return this->changeRule_ != nullptr;};
        void deleteChangeRule() { this->changeRule_ = nullptr;};
        inline string getChangeRule() const { DARABONBA_PTR_GET_DEFAULT(changeRule_, "") };
        inline Attributes& setChangeRule(string changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };


        // latestPayTime Field Functions 
        bool hasLatestPayTime() const { return this->latestPayTime_ != nullptr;};
        void deleteLatestPayTime() { this->latestPayTime_ = nullptr;};
        inline         const Darabonba::Json & getLatestPayTime() const { DARABONBA_GET(latestPayTime_) };
        Darabonba::Json & getLatestPayTime() { DARABONBA_GET(latestPayTime_) };
        inline Attributes& setLatestPayTime(const Darabonba::Json & latestPayTime) { DARABONBA_SET_VALUE(latestPayTime_, latestPayTime) };
        inline Attributes& setLatestPayTime(Darabonba::Json && latestPayTime) { DARABONBA_SET_RVALUE(latestPayTime_, latestPayTime) };


        // latestPayTimeStr Field Functions 
        bool hasLatestPayTimeStr() const { return this->latestPayTimeStr_ != nullptr;};
        void deleteLatestPayTimeStr() { this->latestPayTimeStr_ = nullptr;};
        inline string getLatestPayTimeStr() const { DARABONBA_PTR_GET_DEFAULT(latestPayTimeStr_, "") };
        inline Attributes& setLatestPayTimeStr(string latestPayTimeStr) { DARABONBA_PTR_SET_VALUE(latestPayTimeStr_, latestPayTimeStr) };


        // refundRule Field Functions 
        bool hasRefundRule() const { return this->refundRule_ != nullptr;};
        void deleteRefundRule() { this->refundRule_ = nullptr;};
        inline string getRefundRule() const { DARABONBA_PTR_GET_DEFAULT(refundRule_, "") };
        inline Attributes& setRefundRule(string refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };


      protected:
        shared_ptr<string> baggageRule_ {};
        shared_ptr<string> changeRule_ {};
        Darabonba::Json latestPayTime_ {};
        shared_ptr<string> latestPayTimeStr_ {};
        shared_ptr<string> refundRule_ {};
      };

      virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->attributes_ == nullptr && this->bookUserEmail_ == nullptr && this->bookUserName_ == nullptr && this->bookuserPhone_ == nullptr && this->changeFailReason_ == nullptr
        && this->contactInfoDTO_ == nullptr && this->destFlightInfoDTOS_ == nullptr && this->lastPayTime_ == nullptr && this->orderId_ == nullptr && this->outOrderId_ == nullptr
        && this->outSubOrderId_ == nullptr && this->payTime_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr && this->subOrderId_ == nullptr
        && this->ticketTime_ == nullptr && this->totalPrice_ == nullptr && this->totalServiceFeePrice_ == nullptr && this->travelerInfoDTOS_ == nullptr; };
      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
      inline Module& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const Module::Attributes & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, Module::Attributes) };
      inline Module::Attributes getAttributes() { DARABONBA_PTR_GET(attributes_, Module::Attributes) };
      inline Module& setAttributes(const Module::Attributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Module& setAttributes(Module::Attributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // bookUserEmail Field Functions 
      bool hasBookUserEmail() const { return this->bookUserEmail_ != nullptr;};
      void deleteBookUserEmail() { this->bookUserEmail_ = nullptr;};
      inline string getBookUserEmail() const { DARABONBA_PTR_GET_DEFAULT(bookUserEmail_, "") };
      inline Module& setBookUserEmail(string bookUserEmail) { DARABONBA_PTR_SET_VALUE(bookUserEmail_, bookUserEmail) };


      // bookUserName Field Functions 
      bool hasBookUserName() const { return this->bookUserName_ != nullptr;};
      void deleteBookUserName() { this->bookUserName_ = nullptr;};
      inline string getBookUserName() const { DARABONBA_PTR_GET_DEFAULT(bookUserName_, "") };
      inline Module& setBookUserName(string bookUserName) { DARABONBA_PTR_SET_VALUE(bookUserName_, bookUserName) };


      // bookuserPhone Field Functions 
      bool hasBookuserPhone() const { return this->bookuserPhone_ != nullptr;};
      void deleteBookuserPhone() { this->bookuserPhone_ = nullptr;};
      inline string getBookuserPhone() const { DARABONBA_PTR_GET_DEFAULT(bookuserPhone_, "") };
      inline Module& setBookuserPhone(string bookuserPhone) { DARABONBA_PTR_SET_VALUE(bookuserPhone_, bookuserPhone) };


      // changeFailReason Field Functions 
      bool hasChangeFailReason() const { return this->changeFailReason_ != nullptr;};
      void deleteChangeFailReason() { this->changeFailReason_ = nullptr;};
      inline string getChangeFailReason() const { DARABONBA_PTR_GET_DEFAULT(changeFailReason_, "") };
      inline Module& setChangeFailReason(string changeFailReason) { DARABONBA_PTR_SET_VALUE(changeFailReason_, changeFailReason) };


      // contactInfoDTO Field Functions 
      bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
      void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
      inline const Module::ContactInfoDTO & getContactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module::ContactInfoDTO getContactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module& setContactInfoDTO(const Module::ContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
      inline Module& setContactInfoDTO(Module::ContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


      // destFlightInfoDTOS Field Functions 
      bool hasDestFlightInfoDTOS() const { return this->destFlightInfoDTOS_ != nullptr;};
      void deleteDestFlightInfoDTOS() { this->destFlightInfoDTOS_ = nullptr;};
      inline const vector<Module::DestFlightInfoDTOS> & getDestFlightInfoDTOS() const { DARABONBA_PTR_GET_CONST(destFlightInfoDTOS_, vector<Module::DestFlightInfoDTOS>) };
      inline vector<Module::DestFlightInfoDTOS> getDestFlightInfoDTOS() { DARABONBA_PTR_GET(destFlightInfoDTOS_, vector<Module::DestFlightInfoDTOS>) };
      inline Module& setDestFlightInfoDTOS(const vector<Module::DestFlightInfoDTOS> & destFlightInfoDTOS) { DARABONBA_PTR_SET_VALUE(destFlightInfoDTOS_, destFlightInfoDTOS) };
      inline Module& setDestFlightInfoDTOS(vector<Module::DestFlightInfoDTOS> && destFlightInfoDTOS) { DARABONBA_PTR_SET_RVALUE(destFlightInfoDTOS_, destFlightInfoDTOS) };


      // lastPayTime Field Functions 
      bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
      void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
      inline string getLastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
      inline Module& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Module& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // outOrderId Field Functions 
      bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
      void deleteOutOrderId() { this->outOrderId_ = nullptr;};
      inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
      inline Module& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


      // outSubOrderId Field Functions 
      bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
      void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
      inline string getOutSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
      inline Module& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Module& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subOrderId Field Functions 
      bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
      void deleteSubOrderId() { this->subOrderId_ = nullptr;};
      inline int64_t getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
      inline Module& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


      // ticketTime Field Functions 
      bool hasTicketTime() const { return this->ticketTime_ != nullptr;};
      void deleteTicketTime() { this->ticketTime_ = nullptr;};
      inline string getTicketTime() const { DARABONBA_PTR_GET_DEFAULT(ticketTime_, "") };
      inline Module& setTicketTime(string ticketTime) { DARABONBA_PTR_SET_VALUE(ticketTime_, ticketTime) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline int64_t getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
      inline Module& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


      // totalServiceFeePrice Field Functions 
      bool hasTotalServiceFeePrice() const { return this->totalServiceFeePrice_ != nullptr;};
      void deleteTotalServiceFeePrice() { this->totalServiceFeePrice_ = nullptr;};
      inline int64_t getTotalServiceFeePrice() const { DARABONBA_PTR_GET_DEFAULT(totalServiceFeePrice_, 0L) };
      inline Module& setTotalServiceFeePrice(int64_t totalServiceFeePrice) { DARABONBA_PTR_SET_VALUE(totalServiceFeePrice_, totalServiceFeePrice) };


      // travelerInfoDTOS Field Functions 
      bool hasTravelerInfoDTOS() const { return this->travelerInfoDTOS_ != nullptr;};
      void deleteTravelerInfoDTOS() { this->travelerInfoDTOS_ = nullptr;};
      inline const vector<Module::TravelerInfoDTOS> & getTravelerInfoDTOS() const { DARABONBA_PTR_GET_CONST(travelerInfoDTOS_, vector<Module::TravelerInfoDTOS>) };
      inline vector<Module::TravelerInfoDTOS> getTravelerInfoDTOS() { DARABONBA_PTR_GET(travelerInfoDTOS_, vector<Module::TravelerInfoDTOS>) };
      inline Module& setTravelerInfoDTOS(const vector<Module::TravelerInfoDTOS> & travelerInfoDTOS) { DARABONBA_PTR_SET_VALUE(travelerInfoDTOS_, travelerInfoDTOS) };
      inline Module& setTravelerInfoDTOS(vector<Module::TravelerInfoDTOS> && travelerInfoDTOS) { DARABONBA_PTR_SET_RVALUE(travelerInfoDTOS_, travelerInfoDTOS) };


    protected:
      shared_ptr<string> applyTime_ {};
      shared_ptr<Module::Attributes> attributes_ {};
      shared_ptr<string> bookUserEmail_ {};
      shared_ptr<string> bookUserName_ {};
      shared_ptr<string> bookuserPhone_ {};
      shared_ptr<string> changeFailReason_ {};
      shared_ptr<Module::ContactInfoDTO> contactInfoDTO_ {};
      shared_ptr<vector<Module::DestFlightInfoDTOS>> destFlightInfoDTOS_ {};
      shared_ptr<string> lastPayTime_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> outOrderId_ {};
      shared_ptr<string> outSubOrderId_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> subOrderId_ {};
      shared_ptr<string> ticketTime_ {};
      shared_ptr<int64_t> totalPrice_ {};
      shared_ptr<int64_t> totalServiceFeePrice_ {};
      shared_ptr<vector<Module::TravelerInfoDTOS>> travelerInfoDTOS_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightModifyOrderDetailV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightModifyOrderDetailV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightModifyOrderDetailV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightModifyOrderDetailV2ResponseBody::Module) };
    inline FlightModifyOrderDetailV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightModifyOrderDetailV2ResponseBody::Module) };
    inline FlightModifyOrderDetailV2ResponseBody& setModule(const FlightModifyOrderDetailV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightModifyOrderDetailV2ResponseBody& setModule(FlightModifyOrderDetailV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightModifyOrderDetailV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightModifyOrderDetailV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightModifyOrderDetailV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightModifyOrderDetailV2ResponseBody::Module> module_ {};
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
