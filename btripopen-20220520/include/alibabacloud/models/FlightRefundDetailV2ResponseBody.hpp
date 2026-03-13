// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODY_HPP_
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
  class FlightRefundDetailV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightRefundDetailV2ResponseBody() = default ;
    FlightRefundDetailV2ResponseBody(const FlightRefundDetailV2ResponseBody &) = default ;
    FlightRefundDetailV2ResponseBody(FlightRefundDetailV2ResponseBody &&) = default ;
    FlightRefundDetailV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailV2ResponseBody() = default ;
    FlightRefundDetailV2ResponseBody& operator=(const FlightRefundDetailV2ResponseBody &) = default ;
    FlightRefundDetailV2ResponseBody& operator=(FlightRefundDetailV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
        DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_TO_JSON(flight_info_d_t_o_s, flightInfoDTOS_);
        DARABONBA_PTR_TO_JSON(non_refundable_change_service_price, nonRefundableChangeServicePrice_);
        DARABONBA_PTR_TO_JSON(non_refundable_change_upgrade_price, nonRefundableChangeUpgradePrice_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
        DARABONBA_PTR_TO_JSON(refund_fail_reason, refundFailReason_);
        DARABONBA_PTR_TO_JSON(refund_handling_fee, refundHandlingFee_);
        DARABONBA_PTR_TO_JSON(refund_money, refundMoney_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
        DARABONBA_PTR_TO_JSON(traveler_info_d_t_o_s, travelerInfoDTOS_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
        DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_FROM_JSON(flight_info_d_t_o_s, flightInfoDTOS_);
        DARABONBA_PTR_FROM_JSON(non_refundable_change_service_price, nonRefundableChangeServicePrice_);
        DARABONBA_PTR_FROM_JSON(non_refundable_change_upgrade_price, nonRefundableChangeUpgradePrice_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
        DARABONBA_PTR_FROM_JSON(refund_fail_reason, refundFailReason_);
        DARABONBA_PTR_FROM_JSON(refund_handling_fee, refundHandlingFee_);
        DARABONBA_PTR_FROM_JSON(refund_money, refundMoney_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
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
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(origin_ticket_nos, originTicketNos_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(pid, pid_);
          DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerInfoDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(origin_ticket_nos, originTicketNos_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(pid, pid_);
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
        virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->certNo_ == nullptr && this->certType_ == nullptr && this->gender_ == nullptr && this->originTicketNos_ == nullptr && this->passengerId_ == nullptr
        && this->passengerName_ == nullptr && this->passengerType_ == nullptr && this->phone_ == nullptr && this->pid_ == nullptr && this->ticketNos_ == nullptr; };
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
        shared_ptr<int32_t> gender_ {};
        shared_ptr<vector<string>> originTicketNos_ {};
        shared_ptr<string> passengerId_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> passengerType_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<int64_t> pid_ {};
        shared_ptr<vector<string>> ticketNos_ {};
      };

      class FlightInfoDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightInfoDTOS& obj) { 
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
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
          DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
          DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
        };
        friend void from_json(const Darabonba::Json& j, FlightInfoDTOS& obj) { 
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
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
          DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
          DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
        };
        FlightInfoDTOS() = default ;
        FlightInfoDTOS(const FlightInfoDTOS &) = default ;
        FlightInfoDTOS(FlightInfoDTOS &&) = default ;
        FlightInfoDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightInfoDTOS() = default ;
        FlightInfoDTOS& operator=(const FlightInfoDTOS &) = default ;
        FlightInfoDTOS& operator=(FlightInfoDTOS &&) = default ;
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

        virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineIconUrl_ == nullptr && this->airlineName_ == nullptr && this->arrAirportCode_ == nullptr && this->arrAirportName_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr
        && this->cabinClassName_ == nullptr && this->cabinDiscount_ == nullptr && this->carrierAirlineCode_ == nullptr && this->carrierAirlineIconUrl_ == nullptr && this->carrierAirlineName_ == nullptr
        && this->carrierFlightNo_ == nullptr && this->depAirportCode_ == nullptr && this->depAirportName_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr
        && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr && this->flightType_ == nullptr && this->mealDesc_ == nullptr
        && this->segmentId_ == nullptr && this->segmentPosition_ == nullptr && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopDepTime_ == nullptr; };
        // airlineCode Field Functions 
        bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
        void deleteAirlineCode() { this->airlineCode_ = nullptr;};
        inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
        inline FlightInfoDTOS& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


        // airlineIconUrl Field Functions 
        bool hasAirlineIconUrl() const { return this->airlineIconUrl_ != nullptr;};
        void deleteAirlineIconUrl() { this->airlineIconUrl_ = nullptr;};
        inline string getAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(airlineIconUrl_, "") };
        inline FlightInfoDTOS& setAirlineIconUrl(string airlineIconUrl) { DARABONBA_PTR_SET_VALUE(airlineIconUrl_, airlineIconUrl) };


        // airlineName Field Functions 
        bool hasAirlineName() const { return this->airlineName_ != nullptr;};
        void deleteAirlineName() { this->airlineName_ = nullptr;};
        inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
        inline FlightInfoDTOS& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightInfoDTOS& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline FlightInfoDTOS& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightInfoDTOS& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline FlightInfoDTOS& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTerminal Field Functions 
        bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
        void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
        inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
        inline FlightInfoDTOS& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightInfoDTOS& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline FlightInfoDTOS& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline FlightInfoDTOS& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline FlightInfoDTOS& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // cabinDiscount Field Functions 
        bool hasCabinDiscount() const { return this->cabinDiscount_ != nullptr;};
        void deleteCabinDiscount() { this->cabinDiscount_ = nullptr;};
        inline int64_t getCabinDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinDiscount_, 0L) };
        inline FlightInfoDTOS& setCabinDiscount(int64_t cabinDiscount) { DARABONBA_PTR_SET_VALUE(cabinDiscount_, cabinDiscount) };


        // carrierAirlineCode Field Functions 
        bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
        void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
        inline string getCarrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
        inline FlightInfoDTOS& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


        // carrierAirlineIconUrl Field Functions 
        bool hasCarrierAirlineIconUrl() const { return this->carrierAirlineIconUrl_ != nullptr;};
        void deleteCarrierAirlineIconUrl() { this->carrierAirlineIconUrl_ = nullptr;};
        inline string getCarrierAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineIconUrl_, "") };
        inline FlightInfoDTOS& setCarrierAirlineIconUrl(string carrierAirlineIconUrl) { DARABONBA_PTR_SET_VALUE(carrierAirlineIconUrl_, carrierAirlineIconUrl) };


        // carrierAirlineName Field Functions 
        bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
        void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
        inline string getCarrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
        inline FlightInfoDTOS& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


        // carrierFlightNo Field Functions 
        bool hasCarrierFlightNo() const { return this->carrierFlightNo_ != nullptr;};
        void deleteCarrierFlightNo() { this->carrierFlightNo_ = nullptr;};
        inline string getCarrierFlightNo() const { DARABONBA_PTR_GET_DEFAULT(carrierFlightNo_, "") };
        inline FlightInfoDTOS& setCarrierFlightNo(string carrierFlightNo) { DARABONBA_PTR_SET_VALUE(carrierFlightNo_, carrierFlightNo) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightInfoDTOS& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline FlightInfoDTOS& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightInfoDTOS& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline FlightInfoDTOS& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTerminal Field Functions 
        bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
        void deleteDepTerminal() { this->depTerminal_ = nullptr;};
        inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
        inline FlightInfoDTOS& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightInfoDTOS& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightInfoDTOS& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline FlightInfoDTOS& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline FlightInfoDTOS& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // segmentId Field Functions 
        bool hasSegmentId() const { return this->segmentId_ != nullptr;};
        void deleteSegmentId() { this->segmentId_ = nullptr;};
        inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
        inline FlightInfoDTOS& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


        // segmentPosition Field Functions 
        bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
        void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
        inline const FlightInfoDTOS::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, FlightInfoDTOS::SegmentPosition) };
        inline FlightInfoDTOS::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, FlightInfoDTOS::SegmentPosition) };
        inline FlightInfoDTOS& setSegmentPosition(const FlightInfoDTOS::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
        inline FlightInfoDTOS& setSegmentPosition(FlightInfoDTOS::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


        // stopArrTime Field Functions 
        bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
        void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
        inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
        inline FlightInfoDTOS& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
        inline FlightInfoDTOS& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


        // stopDepTime Field Functions 
        bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
        void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
        inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
        inline FlightInfoDTOS& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


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
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<string> segmentId_ {};
        shared_ptr<FlightInfoDTOS::SegmentPosition> segmentPosition_ {};
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

      virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->contactInfoDTO_ == nullptr && this->flightInfoDTOS_ == nullptr && this->nonRefundableChangeServicePrice_ == nullptr && this->nonRefundableChangeUpgradePrice_ == nullptr && this->orderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outSubOrderId_ == nullptr && this->reason_ == nullptr && this->reasonCode_ == nullptr && this->refundFailReason_ == nullptr
        && this->refundHandlingFee_ == nullptr && this->refundMoney_ == nullptr && this->status_ == nullptr && this->subOrderId_ == nullptr && this->travelerInfoDTOS_ == nullptr; };
      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
      inline Module& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // contactInfoDTO Field Functions 
      bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
      void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
      inline const Module::ContactInfoDTO & getContactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module::ContactInfoDTO getContactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module& setContactInfoDTO(const Module::ContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
      inline Module& setContactInfoDTO(Module::ContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


      // flightInfoDTOS Field Functions 
      bool hasFlightInfoDTOS() const { return this->flightInfoDTOS_ != nullptr;};
      void deleteFlightInfoDTOS() { this->flightInfoDTOS_ = nullptr;};
      inline const vector<Module::FlightInfoDTOS> & getFlightInfoDTOS() const { DARABONBA_PTR_GET_CONST(flightInfoDTOS_, vector<Module::FlightInfoDTOS>) };
      inline vector<Module::FlightInfoDTOS> getFlightInfoDTOS() { DARABONBA_PTR_GET(flightInfoDTOS_, vector<Module::FlightInfoDTOS>) };
      inline Module& setFlightInfoDTOS(const vector<Module::FlightInfoDTOS> & flightInfoDTOS) { DARABONBA_PTR_SET_VALUE(flightInfoDTOS_, flightInfoDTOS) };
      inline Module& setFlightInfoDTOS(vector<Module::FlightInfoDTOS> && flightInfoDTOS) { DARABONBA_PTR_SET_RVALUE(flightInfoDTOS_, flightInfoDTOS) };


      // nonRefundableChangeServicePrice Field Functions 
      bool hasNonRefundableChangeServicePrice() const { return this->nonRefundableChangeServicePrice_ != nullptr;};
      void deleteNonRefundableChangeServicePrice() { this->nonRefundableChangeServicePrice_ = nullptr;};
      inline int64_t getNonRefundableChangeServicePrice() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeServicePrice_, 0L) };
      inline Module& setNonRefundableChangeServicePrice(int64_t nonRefundableChangeServicePrice) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeServicePrice_, nonRefundableChangeServicePrice) };


      // nonRefundableChangeUpgradePrice Field Functions 
      bool hasNonRefundableChangeUpgradePrice() const { return this->nonRefundableChangeUpgradePrice_ != nullptr;};
      void deleteNonRefundableChangeUpgradePrice() { this->nonRefundableChangeUpgradePrice_ = nullptr;};
      inline int64_t getNonRefundableChangeUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeUpgradePrice_, 0L) };
      inline Module& setNonRefundableChangeUpgradePrice(int64_t nonRefundableChangeUpgradePrice) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeUpgradePrice_, nonRefundableChangeUpgradePrice) };


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


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Module& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline Module& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // refundFailReason Field Functions 
      bool hasRefundFailReason() const { return this->refundFailReason_ != nullptr;};
      void deleteRefundFailReason() { this->refundFailReason_ = nullptr;};
      inline string getRefundFailReason() const { DARABONBA_PTR_GET_DEFAULT(refundFailReason_, "") };
      inline Module& setRefundFailReason(string refundFailReason) { DARABONBA_PTR_SET_VALUE(refundFailReason_, refundFailReason) };


      // refundHandlingFee Field Functions 
      bool hasRefundHandlingFee() const { return this->refundHandlingFee_ != nullptr;};
      void deleteRefundHandlingFee() { this->refundHandlingFee_ = nullptr;};
      inline int64_t getRefundHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandlingFee_, 0L) };
      inline Module& setRefundHandlingFee(int64_t refundHandlingFee) { DARABONBA_PTR_SET_VALUE(refundHandlingFee_, refundHandlingFee) };


      // refundMoney Field Functions 
      bool hasRefundMoney() const { return this->refundMoney_ != nullptr;};
      void deleteRefundMoney() { this->refundMoney_ = nullptr;};
      inline int64_t getRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(refundMoney_, 0L) };
      inline Module& setRefundMoney(int64_t refundMoney) { DARABONBA_PTR_SET_VALUE(refundMoney_, refundMoney) };


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


      // travelerInfoDTOS Field Functions 
      bool hasTravelerInfoDTOS() const { return this->travelerInfoDTOS_ != nullptr;};
      void deleteTravelerInfoDTOS() { this->travelerInfoDTOS_ = nullptr;};
      inline const vector<Module::TravelerInfoDTOS> & getTravelerInfoDTOS() const { DARABONBA_PTR_GET_CONST(travelerInfoDTOS_, vector<Module::TravelerInfoDTOS>) };
      inline vector<Module::TravelerInfoDTOS> getTravelerInfoDTOS() { DARABONBA_PTR_GET(travelerInfoDTOS_, vector<Module::TravelerInfoDTOS>) };
      inline Module& setTravelerInfoDTOS(const vector<Module::TravelerInfoDTOS> & travelerInfoDTOS) { DARABONBA_PTR_SET_VALUE(travelerInfoDTOS_, travelerInfoDTOS) };
      inline Module& setTravelerInfoDTOS(vector<Module::TravelerInfoDTOS> && travelerInfoDTOS) { DARABONBA_PTR_SET_RVALUE(travelerInfoDTOS_, travelerInfoDTOS) };


    protected:
      shared_ptr<string> applyTime_ {};
      shared_ptr<Module::ContactInfoDTO> contactInfoDTO_ {};
      shared_ptr<vector<Module::FlightInfoDTOS>> flightInfoDTOS_ {};
      shared_ptr<int64_t> nonRefundableChangeServicePrice_ {};
      shared_ptr<int64_t> nonRefundableChangeUpgradePrice_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> outOrderId_ {};
      shared_ptr<string> outSubOrderId_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> reasonCode_ {};
      shared_ptr<string> refundFailReason_ {};
      shared_ptr<int64_t> refundHandlingFee_ {};
      shared_ptr<int64_t> refundMoney_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> subOrderId_ {};
      shared_ptr<vector<Module::TravelerInfoDTOS>> travelerInfoDTOS_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightRefundDetailV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightRefundDetailV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightRefundDetailV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightRefundDetailV2ResponseBody::Module) };
    inline FlightRefundDetailV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightRefundDetailV2ResponseBody::Module) };
    inline FlightRefundDetailV2ResponseBody& setModule(const FlightRefundDetailV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightRefundDetailV2ResponseBody& setModule(FlightRefundDetailV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightRefundDetailV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightRefundDetailV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightRefundDetailV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightRefundDetailV2ResponseBody::Module> module_ {};
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
