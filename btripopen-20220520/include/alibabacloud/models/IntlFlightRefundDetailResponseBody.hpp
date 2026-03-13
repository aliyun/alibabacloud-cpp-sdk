// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODY_HPP_
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
  class IntlFlightRefundDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightRefundDetailResponseBody() = default ;
    IntlFlightRefundDetailResponseBody(const IntlFlightRefundDetailResponseBody &) = default ;
    IntlFlightRefundDetailResponseBody(IntlFlightRefundDetailResponseBody &&) = default ;
    IntlFlightRefundDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBody() = default ;
    IntlFlightRefundDetailResponseBody& operator=(const IntlFlightRefundDetailResponseBody &) = default ;
    IntlFlightRefundDetailResponseBody& operator=(IntlFlightRefundDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(passenge_refund_fee_detail_list, passengeRefundFeeDetailList_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(refund_order_info, refundOrderInfo_);
        DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(passenge_refund_fee_detail_list, passengeRefundFeeDetailList_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_FROM_JSON(refund_order_info, refundOrderInfo_);
        DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
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
      class SegmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
          DARABONBA_PTR_TO_JSON(flight_stop_info_list, flightStopInfoList_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
          DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(one_more, oneMore_);
          DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
          DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
          DARABONBA_PTR_TO_JSON(share, share_);
          DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_TO_JSON(stop, stop_);
          DARABONBA_PTR_TO_JSON(total_time, totalTime_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
          DARABONBA_PTR_FROM_JSON(flight_stop_info_list, flightStopInfoList_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
          DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
          DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
          DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
          DARABONBA_PTR_FROM_JSON(share, share_);
          DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_FROM_JSON(stop, stop_);
          DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
        };
        SegmentList() = default ;
        SegmentList(const SegmentList &) = default ;
        SegmentList(SegmentList &&) = default ;
        SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentList() = default ;
        SegmentList& operator=(const SegmentList &) = default ;
        SegmentList& operator=(SegmentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentVisaRemark : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentVisaRemark& obj) { 
            DARABONBA_PTR_TO_JSON(dep_city_visa_remark, depCityVisaRemark_);
            DARABONBA_PTR_TO_JSON(dep_city_visa_type, depCityVisaType_);
            DARABONBA_PTR_TO_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
            DARABONBA_PTR_TO_JSON(stop_city_visa_types, stopCityVisaTypes_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentVisaRemark& obj) { 
            DARABONBA_PTR_FROM_JSON(dep_city_visa_remark, depCityVisaRemark_);
            DARABONBA_PTR_FROM_JSON(dep_city_visa_type, depCityVisaType_);
            DARABONBA_PTR_FROM_JSON(stop_city_visa_remarks, stopCityVisaRemarks_);
            DARABONBA_PTR_FROM_JSON(stop_city_visa_types, stopCityVisaTypes_);
          };
          SegmentVisaRemark() = default ;
          SegmentVisaRemark(const SegmentVisaRemark &) = default ;
          SegmentVisaRemark(SegmentVisaRemark &&) = default ;
          SegmentVisaRemark(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentVisaRemark() = default ;
          SegmentVisaRemark& operator=(const SegmentVisaRemark &) = default ;
          SegmentVisaRemark& operator=(SegmentVisaRemark &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->depCityVisaRemark_ == nullptr
        && this->depCityVisaType_ == nullptr && this->stopCityVisaRemarks_ == nullptr && this->stopCityVisaTypes_ == nullptr; };
          // depCityVisaRemark Field Functions 
          bool hasDepCityVisaRemark() const { return this->depCityVisaRemark_ != nullptr;};
          void deleteDepCityVisaRemark() { this->depCityVisaRemark_ = nullptr;};
          inline string getDepCityVisaRemark() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaRemark_, "") };
          inline SegmentVisaRemark& setDepCityVisaRemark(string depCityVisaRemark) { DARABONBA_PTR_SET_VALUE(depCityVisaRemark_, depCityVisaRemark) };


          // depCityVisaType Field Functions 
          bool hasDepCityVisaType() const { return this->depCityVisaType_ != nullptr;};
          void deleteDepCityVisaType() { this->depCityVisaType_ = nullptr;};
          inline int32_t getDepCityVisaType() const { DARABONBA_PTR_GET_DEFAULT(depCityVisaType_, 0) };
          inline SegmentVisaRemark& setDepCityVisaType(int32_t depCityVisaType) { DARABONBA_PTR_SET_VALUE(depCityVisaType_, depCityVisaType) };


          // stopCityVisaRemarks Field Functions 
          bool hasStopCityVisaRemarks() const { return this->stopCityVisaRemarks_ != nullptr;};
          void deleteStopCityVisaRemarks() { this->stopCityVisaRemarks_ = nullptr;};
          inline const vector<string> & getStopCityVisaRemarks() const { DARABONBA_PTR_GET_CONST(stopCityVisaRemarks_, vector<string>) };
          inline vector<string> getStopCityVisaRemarks() { DARABONBA_PTR_GET(stopCityVisaRemarks_, vector<string>) };
          inline SegmentVisaRemark& setStopCityVisaRemarks(const vector<string> & stopCityVisaRemarks) { DARABONBA_PTR_SET_VALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };
          inline SegmentVisaRemark& setStopCityVisaRemarks(vector<string> && stopCityVisaRemarks) { DARABONBA_PTR_SET_RVALUE(stopCityVisaRemarks_, stopCityVisaRemarks) };


          // stopCityVisaTypes Field Functions 
          bool hasStopCityVisaTypes() const { return this->stopCityVisaTypes_ != nullptr;};
          void deleteStopCityVisaTypes() { this->stopCityVisaTypes_ = nullptr;};
          inline const vector<int32_t> & getStopCityVisaTypes() const { DARABONBA_PTR_GET_CONST(stopCityVisaTypes_, vector<int32_t>) };
          inline vector<int32_t> getStopCityVisaTypes() { DARABONBA_PTR_GET(stopCityVisaTypes_, vector<int32_t>) };
          inline SegmentVisaRemark& setStopCityVisaTypes(const vector<int32_t> & stopCityVisaTypes) { DARABONBA_PTR_SET_VALUE(stopCityVisaTypes_, stopCityVisaTypes) };
          inline SegmentVisaRemark& setStopCityVisaTypes(vector<int32_t> && stopCityVisaTypes) { DARABONBA_PTR_SET_RVALUE(stopCityVisaTypes_, stopCityVisaTypes) };


        protected:
          shared_ptr<string> depCityVisaRemark_ {};
          shared_ptr<int32_t> depCityVisaType_ {};
          shared_ptr<vector<string>> stopCityVisaRemarks_ {};
          shared_ptr<vector<int32_t>> stopCityVisaTypes_ {};
        };

        class LuggageDirectInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LuggageDirectInfo& obj) { 
            DARABONBA_PTR_TO_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
            DARABONBA_PTR_TO_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
          };
          friend void from_json(const Darabonba::Json& j, LuggageDirectInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(dep_city_luggage_direct, depCityLuggageDirect_);
            DARABONBA_PTR_FROM_JSON(stop_city_luggage_direct, stopCityLuggageDirect_);
          };
          LuggageDirectInfo() = default ;
          LuggageDirectInfo(const LuggageDirectInfo &) = default ;
          LuggageDirectInfo(LuggageDirectInfo &&) = default ;
          LuggageDirectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LuggageDirectInfo() = default ;
          LuggageDirectInfo& operator=(const LuggageDirectInfo &) = default ;
          LuggageDirectInfo& operator=(LuggageDirectInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->depCityLuggageDirect_ == nullptr
        && this->stopCityLuggageDirect_ == nullptr; };
          // depCityLuggageDirect Field Functions 
          bool hasDepCityLuggageDirect() const { return this->depCityLuggageDirect_ != nullptr;};
          void deleteDepCityLuggageDirect() { this->depCityLuggageDirect_ = nullptr;};
          inline int32_t getDepCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(depCityLuggageDirect_, 0) };
          inline LuggageDirectInfo& setDepCityLuggageDirect(int32_t depCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(depCityLuggageDirect_, depCityLuggageDirect) };


          // stopCityLuggageDirect Field Functions 
          bool hasStopCityLuggageDirect() const { return this->stopCityLuggageDirect_ != nullptr;};
          void deleteStopCityLuggageDirect() { this->stopCityLuggageDirect_ = nullptr;};
          inline int32_t getStopCityLuggageDirect() const { DARABONBA_PTR_GET_DEFAULT(stopCityLuggageDirect_, 0) };
          inline LuggageDirectInfo& setStopCityLuggageDirect(int32_t stopCityLuggageDirect) { DARABONBA_PTR_SET_VALUE(stopCityLuggageDirect_, stopCityLuggageDirect) };


        protected:
          shared_ptr<int32_t> depCityLuggageDirect_ {};
          shared_ptr<int32_t> stopCityLuggageDirect_ {};
        };

        class FlightStopInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightStopInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
            DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
            DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightStopInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
            DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
            DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
          };
          FlightStopInfoList() = default ;
          FlightStopInfoList(const FlightStopInfoList &) = default ;
          FlightStopInfoList(FlightStopInfoList &&) = default ;
          FlightStopInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightStopInfoList() = default ;
          FlightStopInfoList& operator=(const FlightStopInfoList &) = default ;
          FlightStopInfoList& operator=(FlightStopInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr
        && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
          // stopAirport Field Functions 
          bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
          void deleteStopAirport() { this->stopAirport_ = nullptr;};
          inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
          inline FlightStopInfoList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


          // stopAirportName Field Functions 
          bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
          void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
          inline string getStopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
          inline FlightStopInfoList& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


          // stopArrTerm Field Functions 
          bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
          void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
          inline string getStopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
          inline FlightStopInfoList& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


          // stopArrTime Field Functions 
          bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
          void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
          inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
          inline FlightStopInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


          // stopCityCode Field Functions 
          bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
          void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
          inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
          inline FlightStopInfoList& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


          // stopCityName Field Functions 
          bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
          void deleteStopCityName() { this->stopCityName_ = nullptr;};
          inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
          inline FlightStopInfoList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


          // stopDepTerm Field Functions 
          bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
          void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
          inline string getStopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
          inline FlightStopInfoList& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


          // stopDepTime Field Functions 
          bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
          void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
          inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
          inline FlightStopInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


          // stopTime Field Functions 
          bool hasStopTime() const { return this->stopTime_ != nullptr;};
          void deleteStopTime() { this->stopTime_ = nullptr;};
          inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
          inline FlightStopInfoList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


        protected:
          shared_ptr<string> stopAirport_ {};
          shared_ptr<string> stopAirportName_ {};
          shared_ptr<string> stopArrTerm_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopCityName_ {};
          shared_ptr<string> stopDepTerm_ {};
          shared_ptr<string> stopDepTime_ {};
          shared_ptr<string> stopTime_ {};
        };

        class FlightShareInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightShareInfo& obj) { 
            DARABONBA_PTR_TO_JSON(operating_airline_info, operatingAirlineInfo_);
            DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
          };
          friend void from_json(const Darabonba::Json& j, FlightShareInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(operating_airline_info, operatingAirlineInfo_);
            DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
          };
          FlightShareInfo() = default ;
          FlightShareInfo(const FlightShareInfo &) = default ;
          FlightShareInfo(FlightShareInfo &&) = default ;
          FlightShareInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightShareInfo() = default ;
          FlightShareInfo& operator=(const FlightShareInfo &) = default ;
          FlightShareInfo& operator=(FlightShareInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OperatingAirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OperatingAirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
              DARABONBA_PTR_TO_JSON(short_name, shortName_);
            };
            friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(short_name, shortName_);
            };
            OperatingAirlineInfo() = default ;
            OperatingAirlineInfo(const OperatingAirlineInfo &) = default ;
            OperatingAirlineInfo(OperatingAirlineInfo &&) = default ;
            OperatingAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OperatingAirlineInfo() = default ;
            OperatingAirlineInfo& operator=(const OperatingAirlineInfo &) = default ;
            OperatingAirlineInfo& operator=(OperatingAirlineInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline OperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineName Field Functions 
            bool hasAirlineName() const { return this->airlineName_ != nullptr;};
            void deleteAirlineName() { this->airlineName_ = nullptr;};
            inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
            inline OperatingAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


            // shortName Field Functions 
            bool hasShortName() const { return this->shortName_ != nullptr;};
            void deleteShortName() { this->shortName_ = nullptr;};
            inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
            inline OperatingAirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<string> shortName_ {};
          };

          virtual bool empty() const override { return this->operatingAirlineInfo_ == nullptr
        && this->operatingFlightNo_ == nullptr; };
          // operatingAirlineInfo Field Functions 
          bool hasOperatingAirlineInfo() const { return this->operatingAirlineInfo_ != nullptr;};
          void deleteOperatingAirlineInfo() { this->operatingAirlineInfo_ = nullptr;};
          inline const FlightShareInfo::OperatingAirlineInfo & getOperatingAirlineInfo() const { DARABONBA_PTR_GET_CONST(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
          inline FlightShareInfo::OperatingAirlineInfo getOperatingAirlineInfo() { DARABONBA_PTR_GET(operatingAirlineInfo_, FlightShareInfo::OperatingAirlineInfo) };
          inline FlightShareInfo& setOperatingAirlineInfo(const FlightShareInfo::OperatingAirlineInfo & operatingAirlineInfo) { DARABONBA_PTR_SET_VALUE(operatingAirlineInfo_, operatingAirlineInfo) };
          inline FlightShareInfo& setOperatingAirlineInfo(FlightShareInfo::OperatingAirlineInfo && operatingAirlineInfo) { DARABONBA_PTR_SET_RVALUE(operatingAirlineInfo_, operatingAirlineInfo) };


          // operatingFlightNo Field Functions 
          bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
          void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
          inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
          inline FlightShareInfo& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


        protected:
          shared_ptr<FlightShareInfo::OperatingAirlineInfo> operatingAirlineInfo_ {};
          shared_ptr<string> operatingFlightNo_ {};
        };

        class DepAirportInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DepAirportInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
            DARABONBA_PTR_TO_JSON(terminal, terminal_);
          };
          friend void from_json(const Darabonba::Json& j, DepAirportInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
            DARABONBA_PTR_FROM_JSON(terminal, terminal_);
          };
          DepAirportInfo() = default ;
          DepAirportInfo(const DepAirportInfo &) = default ;
          DepAirportInfo(DepAirportInfo &&) = default ;
          DepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DepAirportInfo() = default ;
          DepAirportInfo& operator=(const DepAirportInfo &) = default ;
          DepAirportInfo& operator=(DepAirportInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
          // airportCode Field Functions 
          bool hasAirportCode() const { return this->airportCode_ != nullptr;};
          void deleteAirportCode() { this->airportCode_ = nullptr;};
          inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
          inline DepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


          // airportName Field Functions 
          bool hasAirportName() const { return this->airportName_ != nullptr;};
          void deleteAirportName() { this->airportName_ = nullptr;};
          inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
          inline DepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


          // airportShortName Field Functions 
          bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
          void deleteAirportShortName() { this->airportShortName_ = nullptr;};
          inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
          inline DepAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


          // terminal Field Functions 
          bool hasTerminal() const { return this->terminal_ != nullptr;};
          void deleteTerminal() { this->terminal_ = nullptr;};
          inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
          inline DepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


        protected:
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> airportShortName_ {};
          shared_ptr<string> terminal_ {};
        };

        class ArrAirportInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ArrAirportInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
            DARABONBA_PTR_TO_JSON(terminal, terminal_);
          };
          friend void from_json(const Darabonba::Json& j, ArrAirportInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(airport_short_name, airportShortName_);
            DARABONBA_PTR_FROM_JSON(terminal, terminal_);
          };
          ArrAirportInfo() = default ;
          ArrAirportInfo(const ArrAirportInfo &) = default ;
          ArrAirportInfo(ArrAirportInfo &&) = default ;
          ArrAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ArrAirportInfo() = default ;
          ArrAirportInfo& operator=(const ArrAirportInfo &) = default ;
          ArrAirportInfo& operator=(ArrAirportInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
          // airportCode Field Functions 
          bool hasAirportCode() const { return this->airportCode_ != nullptr;};
          void deleteAirportCode() { this->airportCode_ = nullptr;};
          inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
          inline ArrAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


          // airportName Field Functions 
          bool hasAirportName() const { return this->airportName_ != nullptr;};
          void deleteAirportName() { this->airportName_ = nullptr;};
          inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
          inline ArrAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


          // airportShortName Field Functions 
          bool hasAirportShortName() const { return this->airportShortName_ != nullptr;};
          void deleteAirportShortName() { this->airportShortName_ = nullptr;};
          inline string getAirportShortName() const { DARABONBA_PTR_GET_DEFAULT(airportShortName_, "") };
          inline ArrAirportInfo& setAirportShortName(string airportShortName) { DARABONBA_PTR_SET_VALUE(airportShortName_, airportShortName) };


          // terminal Field Functions 
          bool hasTerminal() const { return this->terminal_ != nullptr;};
          void deleteTerminal() { this->terminal_ = nullptr;};
          inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
          inline ArrAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


        protected:
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> airportShortName_ {};
          shared_ptr<string> terminal_ {};
        };

        class AirlineInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AirlineInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(short_name, shortName_);
          };
          friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(short_name, shortName_);
          };
          AirlineInfo() = default ;
          AirlineInfo(const AirlineInfo &) = default ;
          AirlineInfo(AirlineInfo &&) = default ;
          AirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AirlineInfo() = default ;
          AirlineInfo& operator=(const AirlineInfo &) = default ;
          AirlineInfo& operator=(AirlineInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->shortName_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline AirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline AirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // shortName Field Functions 
          bool hasShortName() const { return this->shortName_ != nullptr;};
          void deleteShortName() { this->shortName_ = nullptr;};
          inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
          inline AirlineInfo& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> shortName_ {};
        };

        virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depAirportInfo_ == nullptr
        && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr && this->flightNo_ == nullptr
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfoList_ == nullptr && this->flightType_ == nullptr && this->journeyIndex_ == nullptr
        && this->luggageDirectInfo_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr
        && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr && this->segmentVisaRemark_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr
        && this->stop_ == nullptr && this->totalTime_ == nullptr; };
        // airlineInfo Field Functions 
        bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
        void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
        inline const SegmentList::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, SegmentList::AirlineInfo) };
        inline SegmentList::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, SegmentList::AirlineInfo) };
        inline SegmentList& setAirlineInfo(const SegmentList::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
        inline SegmentList& setAirlineInfo(SegmentList::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


        // arrAirportInfo Field Functions 
        bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
        void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
        inline const SegmentList::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, SegmentList::ArrAirportInfo) };
        inline SegmentList::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, SegmentList::ArrAirportInfo) };
        inline SegmentList& setArrAirportInfo(const SegmentList::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
        inline SegmentList& setArrAirportInfo(SegmentList::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline SegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline SegmentList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline SegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depAirportInfo Field Functions 
        bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
        void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
        inline const SegmentList::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, SegmentList::DepAirportInfo) };
        inline SegmentList::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, SegmentList::DepAirportInfo) };
        inline SegmentList& setDepAirportInfo(const SegmentList::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
        inline SegmentList& setDepAirportInfo(SegmentList::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline SegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline SegmentList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline SegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline SegmentList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline SegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightShareInfo Field Functions 
        bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
        void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
        inline const SegmentList::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, SegmentList::FlightShareInfo) };
        inline SegmentList::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, SegmentList::FlightShareInfo) };
        inline SegmentList& setFlightShareInfo(const SegmentList::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
        inline SegmentList& setFlightShareInfo(SegmentList::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


        // flightSize Field Functions 
        bool hasFlightSize() const { return this->flightSize_ != nullptr;};
        void deleteFlightSize() { this->flightSize_ = nullptr;};
        inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
        inline SegmentList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


        // flightStopInfoList Field Functions 
        bool hasFlightStopInfoList() const { return this->flightStopInfoList_ != nullptr;};
        void deleteFlightStopInfoList() { this->flightStopInfoList_ = nullptr;};
        inline const vector<SegmentList::FlightStopInfoList> & getFlightStopInfoList() const { DARABONBA_PTR_GET_CONST(flightStopInfoList_, vector<SegmentList::FlightStopInfoList>) };
        inline vector<SegmentList::FlightStopInfoList> getFlightStopInfoList() { DARABONBA_PTR_GET(flightStopInfoList_, vector<SegmentList::FlightStopInfoList>) };
        inline SegmentList& setFlightStopInfoList(const vector<SegmentList::FlightStopInfoList> & flightStopInfoList) { DARABONBA_PTR_SET_VALUE(flightStopInfoList_, flightStopInfoList) };
        inline SegmentList& setFlightStopInfoList(vector<SegmentList::FlightStopInfoList> && flightStopInfoList) { DARABONBA_PTR_SET_RVALUE(flightStopInfoList_, flightStopInfoList) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline SegmentList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline SegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // luggageDirectInfo Field Functions 
        bool hasLuggageDirectInfo() const { return this->luggageDirectInfo_ != nullptr;};
        void deleteLuggageDirectInfo() { this->luggageDirectInfo_ = nullptr;};
        inline const SegmentList::LuggageDirectInfo & getLuggageDirectInfo() const { DARABONBA_PTR_GET_CONST(luggageDirectInfo_, SegmentList::LuggageDirectInfo) };
        inline SegmentList::LuggageDirectInfo getLuggageDirectInfo() { DARABONBA_PTR_GET(luggageDirectInfo_, SegmentList::LuggageDirectInfo) };
        inline SegmentList& setLuggageDirectInfo(const SegmentList::LuggageDirectInfo & luggageDirectInfo) { DARABONBA_PTR_SET_VALUE(luggageDirectInfo_, luggageDirectInfo) };
        inline SegmentList& setLuggageDirectInfo(SegmentList::LuggageDirectInfo && luggageDirectInfo) { DARABONBA_PTR_SET_RVALUE(luggageDirectInfo_, luggageDirectInfo) };


        // manufacturer Field Functions 
        bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
        void deleteManufacturer() { this->manufacturer_ = nullptr;};
        inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
        inline SegmentList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline SegmentList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // oneMore Field Functions 
        bool hasOneMore() const { return this->oneMore_ != nullptr;};
        void deleteOneMore() { this->oneMore_ = nullptr;};
        inline int32_t getOneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
        inline SegmentList& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


        // oneMoreShow Field Functions 
        bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
        void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
        inline string getOneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
        inline SegmentList& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline SegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // segmentKey Field Functions 
        bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
        void deleteSegmentKey() { this->segmentKey_ = nullptr;};
        inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
        inline SegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


        // segmentVisaRemark Field Functions 
        bool hasSegmentVisaRemark() const { return this->segmentVisaRemark_ != nullptr;};
        void deleteSegmentVisaRemark() { this->segmentVisaRemark_ = nullptr;};
        inline const SegmentList::SegmentVisaRemark & getSegmentVisaRemark() const { DARABONBA_PTR_GET_CONST(segmentVisaRemark_, SegmentList::SegmentVisaRemark) };
        inline SegmentList::SegmentVisaRemark getSegmentVisaRemark() { DARABONBA_PTR_GET(segmentVisaRemark_, SegmentList::SegmentVisaRemark) };
        inline SegmentList& setSegmentVisaRemark(const SegmentList::SegmentVisaRemark & segmentVisaRemark) { DARABONBA_PTR_SET_VALUE(segmentVisaRemark_, segmentVisaRemark) };
        inline SegmentList& setSegmentVisaRemark(SegmentList::SegmentVisaRemark && segmentVisaRemark) { DARABONBA_PTR_SET_RVALUE(segmentVisaRemark_, segmentVisaRemark) };


        // share Field Functions 
        bool hasShare() const { return this->share_ != nullptr;};
        void deleteShare() { this->share_ = nullptr;};
        inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
        inline SegmentList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


        // shortFlightSize Field Functions 
        bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
        void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
        inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
        inline SegmentList& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


        // stop Field Functions 
        bool hasStop() const { return this->stop_ != nullptr;};
        void deleteStop() { this->stop_ = nullptr;};
        inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
        inline SegmentList& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


        // totalTime Field Functions 
        bool hasTotalTime() const { return this->totalTime_ != nullptr;};
        void deleteTotalTime() { this->totalTime_ = nullptr;};
        inline string getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
        inline SegmentList& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


      protected:
        shared_ptr<SegmentList::AirlineInfo> airlineInfo_ {};
        shared_ptr<SegmentList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<SegmentList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<SegmentList::FlightShareInfo> flightShareInfo_ {};
        shared_ptr<string> flightSize_ {};
        shared_ptr<vector<SegmentList::FlightStopInfoList>> flightStopInfoList_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<SegmentList::LuggageDirectInfo> luggageDirectInfo_ {};
        shared_ptr<string> manufacturer_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<int32_t> oneMore_ {};
        shared_ptr<string> oneMoreShow_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<string> segmentKey_ {};
        shared_ptr<SegmentList::SegmentVisaRemark> segmentVisaRemark_ {};
        shared_ptr<bool> share_ {};
        shared_ptr<string> shortFlightSize_ {};
        shared_ptr<bool> stop_ {};
        shared_ptr<string> totalTime_ {};
      };

      class RefundOrderInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundOrderInfo& obj) { 
          DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
          DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
          DARABONBA_PTR_TO_JSON(handing_amount, handingAmount_);
          DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
          DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
          DARABONBA_PTR_TO_JSON(reason_desc, reasonDesc_);
          DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
          DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_TO_JSON(relation_refund_apply_id, relationRefundApplyId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(success_time, successTime_);
          DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
        };
        friend void from_json(const Darabonba::Json& j, RefundOrderInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
          DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
          DARABONBA_PTR_FROM_JSON(handing_amount, handingAmount_);
          DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
          DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
          DARABONBA_PTR_FROM_JSON(reason_desc, reasonDesc_);
          DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
          DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_FROM_JSON(relation_refund_apply_id, relationRefundApplyId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(success_time, successTime_);
          DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
        };
        RefundOrderInfo() = default ;
        RefundOrderInfo(const RefundOrderInfo &) = default ;
        RefundOrderInfo(RefundOrderInfo &&) = default ;
        RefundOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundOrderInfo() = default ;
        RefundOrderInfo& operator=(const RefundOrderInfo &) = default ;
        RefundOrderInfo& operator=(RefundOrderInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->closeReason_ == nullptr && this->handingAmount_ == nullptr && this->outRefundApplyId_ == nullptr && this->reasonCode_ == nullptr && this->reasonDesc_ == nullptr
        && this->refundAmount_ == nullptr && this->refundApplyId_ == nullptr && this->relationRefundApplyId_ == nullptr && this->status_ == nullptr && this->successTime_ == nullptr
        && this->voluntary_ == nullptr; };
        // applyTime Field Functions 
        bool hasApplyTime() const { return this->applyTime_ != nullptr;};
        void deleteApplyTime() { this->applyTime_ = nullptr;};
        inline string getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
        inline RefundOrderInfo& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


        // closeReason Field Functions 
        bool hasCloseReason() const { return this->closeReason_ != nullptr;};
        void deleteCloseReason() { this->closeReason_ = nullptr;};
        inline string getCloseReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
        inline RefundOrderInfo& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


        // handingAmount Field Functions 
        bool hasHandingAmount() const { return this->handingAmount_ != nullptr;};
        void deleteHandingAmount() { this->handingAmount_ = nullptr;};
        inline int64_t getHandingAmount() const { DARABONBA_PTR_GET_DEFAULT(handingAmount_, 0L) };
        inline RefundOrderInfo& setHandingAmount(int64_t handingAmount) { DARABONBA_PTR_SET_VALUE(handingAmount_, handingAmount) };


        // outRefundApplyId Field Functions 
        bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
        void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
        inline string getOutRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
        inline RefundOrderInfo& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


        // reasonCode Field Functions 
        bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
        void deleteReasonCode() { this->reasonCode_ = nullptr;};
        inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
        inline RefundOrderInfo& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


        // reasonDesc Field Functions 
        bool hasReasonDesc() const { return this->reasonDesc_ != nullptr;};
        void deleteReasonDesc() { this->reasonDesc_ = nullptr;};
        inline string getReasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reasonDesc_, "") };
        inline RefundOrderInfo& setReasonDesc(string reasonDesc) { DARABONBA_PTR_SET_VALUE(reasonDesc_, reasonDesc) };


        // refundAmount Field Functions 
        bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
        void deleteRefundAmount() { this->refundAmount_ = nullptr;};
        inline int64_t getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
        inline RefundOrderInfo& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline string getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
        inline RefundOrderInfo& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // relationRefundApplyId Field Functions 
        bool hasRelationRefundApplyId() const { return this->relationRefundApplyId_ != nullptr;};
        void deleteRelationRefundApplyId() { this->relationRefundApplyId_ = nullptr;};
        inline int64_t getRelationRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relationRefundApplyId_, 0L) };
        inline RefundOrderInfo& setRelationRefundApplyId(int64_t relationRefundApplyId) { DARABONBA_PTR_SET_VALUE(relationRefundApplyId_, relationRefundApplyId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline RefundOrderInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // successTime Field Functions 
        bool hasSuccessTime() const { return this->successTime_ != nullptr;};
        void deleteSuccessTime() { this->successTime_ = nullptr;};
        inline string getSuccessTime() const { DARABONBA_PTR_GET_DEFAULT(successTime_, "") };
        inline RefundOrderInfo& setSuccessTime(string successTime) { DARABONBA_PTR_SET_VALUE(successTime_, successTime) };


        // voluntary Field Functions 
        bool hasVoluntary() const { return this->voluntary_ != nullptr;};
        void deleteVoluntary() { this->voluntary_ = nullptr;};
        inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
        inline RefundOrderInfo& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


      protected:
        shared_ptr<string> applyTime_ {};
        shared_ptr<string> closeReason_ {};
        shared_ptr<int64_t> handingAmount_ {};
        shared_ptr<string> outRefundApplyId_ {};
        shared_ptr<string> reasonCode_ {};
        shared_ptr<string> reasonDesc_ {};
        shared_ptr<int64_t> refundAmount_ {};
        shared_ptr<string> refundApplyId_ {};
        shared_ptr<int64_t> relationRefundApplyId_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> successTime_ {};
        shared_ptr<bool> voluntary_ {};
      };

      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(birthday, birthday_);
          DARABONBA_PTR_TO_JSON(full_name, fullName_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(job_no, jobNo_);
          DARABONBA_PTR_TO_JSON(nationality, nationality_);
          DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(birthday, birthday_);
          DARABONBA_PTR_FROM_JSON(full_name, fullName_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
          DARABONBA_PTR_FROM_JSON(nationality, nationality_);
          DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
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
        virtual bool empty() const override { return this->birthday_ == nullptr
        && this->fullName_ == nullptr && this->gender_ == nullptr && this->jobNo_ == nullptr && this->nationality_ == nullptr && this->nationalityCode_ == nullptr
        && this->passengerId_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
        // birthday Field Functions 
        bool hasBirthday() const { return this->birthday_ != nullptr;};
        void deleteBirthday() { this->birthday_ = nullptr;};
        inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
        inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


        // fullName Field Functions 
        bool hasFullName() const { return this->fullName_ != nullptr;};
        void deleteFullName() { this->fullName_ = nullptr;};
        inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
        inline PassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // jobNo Field Functions 
        bool hasJobNo() const { return this->jobNo_ != nullptr;};
        void deleteJobNo() { this->jobNo_ = nullptr;};
        inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
        inline PassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


        // nationalityCode Field Functions 
        bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
        void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
        inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
        inline PassengerList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
        inline PassengerList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline PassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<string> birthday_ {};
        shared_ptr<string> fullName_ {};
        shared_ptr<int32_t> gender_ {};
        shared_ptr<string> jobNo_ {};
        shared_ptr<string> nationality_ {};
        shared_ptr<string> nationalityCode_ {};
        shared_ptr<int64_t> passengerId_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<int32_t> userType_ {};
      };

      class PassengeRefundFeeDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengeRefundFeeDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(refund_fee_detail, refundFeeDetail_);
          DARABONBA_PTR_TO_JSON(ticket_list, ticketList_);
        };
        friend void from_json(const Darabonba::Json& j, PassengeRefundFeeDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(refund_fee_detail, refundFeeDetail_);
          DARABONBA_PTR_FROM_JSON(ticket_list, ticketList_);
        };
        PassengeRefundFeeDetailList() = default ;
        PassengeRefundFeeDetailList(const PassengeRefundFeeDetailList &) = default ;
        PassengeRefundFeeDetailList(PassengeRefundFeeDetailList &&) = default ;
        PassengeRefundFeeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengeRefundFeeDetailList() = default ;
        PassengeRefundFeeDetailList& operator=(const PassengeRefundFeeDetailList &) = default ;
        PassengeRefundFeeDetailList& operator=(PassengeRefundFeeDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TicketList& obj) { 
            DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          };
          friend void from_json(const Darabonba::Json& j, TicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          };
          TicketList() = default ;
          TicketList(const TicketList &) = default ;
          TicketList(TicketList &&) = default ;
          TicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TicketList() = default ;
          TicketList& operator=(const TicketList &) = default ;
          TicketList& operator=(TicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->segmentKeyList_ == nullptr
        && this->ticketNo_ == nullptr; };
          // segmentKeyList Field Functions 
          bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
          void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
          inline const vector<string> & getSegmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
          inline vector<string> getSegmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
          inline TicketList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
          inline TicketList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline TicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        protected:
          shared_ptr<vector<string>> segmentKeyList_ {};
          shared_ptr<string> ticketNo_ {};
        };

        class RefundFeeDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundFeeDetail& obj) { 
            DARABONBA_PTR_TO_JSON(already_used_total_amount, alreadyUsedTotalAmount_);
            DARABONBA_PTR_TO_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
            DARABONBA_PTR_TO_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
            DARABONBA_PTR_TO_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
            DARABONBA_PTR_TO_JSON(re_shop_refund_amount, reShopRefundAmount_);
            DARABONBA_PTR_TO_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
            DARABONBA_PTR_TO_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
            DARABONBA_PTR_TO_JSON(refund_re_shop_fee_detail_list, refundReShopFeeDetailList_);
            DARABONBA_PTR_TO_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
            DARABONBA_PTR_TO_JSON(refund_tax_fee, refundTaxFee_);
            DARABONBA_PTR_TO_JSON(refund_ticket_fee, refundTicketFee_);
            DARABONBA_PTR_TO_JSON(tax_refund_amount, taxRefundAmount_);
            DARABONBA_PTR_TO_JSON(ticket_refund_amount, ticketRefundAmount_);
            DARABONBA_PTR_TO_JSON(total_refund_amount, totalRefundAmount_);
          };
          friend void from_json(const Darabonba::Json& j, RefundFeeDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(already_used_total_amount, alreadyUsedTotalAmount_);
            DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
            DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
            DARABONBA_PTR_FROM_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
            DARABONBA_PTR_FROM_JSON(re_shop_refund_amount, reShopRefundAmount_);
            DARABONBA_PTR_FROM_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
            DARABONBA_PTR_FROM_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
            DARABONBA_PTR_FROM_JSON(refund_re_shop_fee_detail_list, refundReShopFeeDetailList_);
            DARABONBA_PTR_FROM_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
            DARABONBA_PTR_FROM_JSON(refund_tax_fee, refundTaxFee_);
            DARABONBA_PTR_FROM_JSON(refund_ticket_fee, refundTicketFee_);
            DARABONBA_PTR_FROM_JSON(tax_refund_amount, taxRefundAmount_);
            DARABONBA_PTR_FROM_JSON(ticket_refund_amount, ticketRefundAmount_);
            DARABONBA_PTR_FROM_JSON(total_refund_amount, totalRefundAmount_);
          };
          RefundFeeDetail() = default ;
          RefundFeeDetail(const RefundFeeDetail &) = default ;
          RefundFeeDetail(RefundFeeDetail &&) = default ;
          RefundFeeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundFeeDetail() = default ;
          RefundFeeDetail& operator=(const RefundFeeDetail &) = default ;
          RefundFeeDetail& operator=(RefundFeeDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RefundReShopFeeDetailList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundReShopFeeDetailList& obj) { 
              DARABONBA_PTR_TO_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
              DARABONBA_PTR_TO_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
              DARABONBA_PTR_TO_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
              DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
              DARABONBA_PTR_TO_JSON(re_shop_refund_amount, reShopRefundAmount_);
              DARABONBA_PTR_TO_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
              DARABONBA_PTR_TO_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
              DARABONBA_PTR_TO_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
            };
            friend void from_json(const Darabonba::Json& j, RefundReShopFeeDetailList& obj) { 
              DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
              DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
              DARABONBA_PTR_FROM_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
              DARABONBA_PTR_FROM_JSON(re_shop_refund_amount, reShopRefundAmount_);
              DARABONBA_PTR_FROM_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
              DARABONBA_PTR_FROM_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
              DARABONBA_PTR_FROM_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
            };
            RefundReShopFeeDetailList() = default ;
            RefundReShopFeeDetailList(const RefundReShopFeeDetailList &) = default ;
            RefundReShopFeeDetailList(RefundReShopFeeDetailList &&) = default ;
            RefundReShopFeeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundReShopFeeDetailList() = default ;
            RefundReShopFeeDetailList& operator=(const RefundReShopFeeDetailList &) = default ;
            RefundReShopFeeDetailList& operator=(RefundReShopFeeDetailList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->nonRefundableReShopHandlingFee_ == nullptr
        && this->nonRefundableReShopUpgradeFee_ == nullptr && this->nonRefundableTaxDiffFee_ == nullptr && this->reShopApplyId_ == nullptr && this->reShopRefundAmount_ == nullptr && this->reShopServiceRefundAmount_ == nullptr
        && this->reShopUpgradeRefundAmount_ == nullptr && this->refundTaxDiffAmount_ == nullptr; };
            // nonRefundableReShopHandlingFee Field Functions 
            bool hasNonRefundableReShopHandlingFee() const { return this->nonRefundableReShopHandlingFee_ != nullptr;};
            void deleteNonRefundableReShopHandlingFee() { this->nonRefundableReShopHandlingFee_ = nullptr;};
            inline int64_t getNonRefundableReShopHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopHandlingFee_, 0L) };
            inline RefundReShopFeeDetailList& setNonRefundableReShopHandlingFee(int64_t nonRefundableReShopHandlingFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopHandlingFee_, nonRefundableReShopHandlingFee) };


            // nonRefundableReShopUpgradeFee Field Functions 
            bool hasNonRefundableReShopUpgradeFee() const { return this->nonRefundableReShopUpgradeFee_ != nullptr;};
            void deleteNonRefundableReShopUpgradeFee() { this->nonRefundableReShopUpgradeFee_ = nullptr;};
            inline int64_t getNonRefundableReShopUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopUpgradeFee_, 0L) };
            inline RefundReShopFeeDetailList& setNonRefundableReShopUpgradeFee(int64_t nonRefundableReShopUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopUpgradeFee_, nonRefundableReShopUpgradeFee) };


            // nonRefundableTaxDiffFee Field Functions 
            bool hasNonRefundableTaxDiffFee() const { return this->nonRefundableTaxDiffFee_ != nullptr;};
            void deleteNonRefundableTaxDiffFee() { this->nonRefundableTaxDiffFee_ = nullptr;};
            inline int64_t getNonRefundableTaxDiffFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxDiffFee_, 0L) };
            inline RefundReShopFeeDetailList& setNonRefundableTaxDiffFee(int64_t nonRefundableTaxDiffFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxDiffFee_, nonRefundableTaxDiffFee) };


            // reShopApplyId Field Functions 
            bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
            void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
            inline string getReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, "") };
            inline RefundReShopFeeDetailList& setReShopApplyId(string reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


            // reShopRefundAmount Field Functions 
            bool hasReShopRefundAmount() const { return this->reShopRefundAmount_ != nullptr;};
            void deleteReShopRefundAmount() { this->reShopRefundAmount_ = nullptr;};
            inline int64_t getReShopRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopRefundAmount_, 0L) };
            inline RefundReShopFeeDetailList& setReShopRefundAmount(int64_t reShopRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopRefundAmount_, reShopRefundAmount) };


            // reShopServiceRefundAmount Field Functions 
            bool hasReShopServiceRefundAmount() const { return this->reShopServiceRefundAmount_ != nullptr;};
            void deleteReShopServiceRefundAmount() { this->reShopServiceRefundAmount_ = nullptr;};
            inline int64_t getReShopServiceRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopServiceRefundAmount_, 0L) };
            inline RefundReShopFeeDetailList& setReShopServiceRefundAmount(int64_t reShopServiceRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopServiceRefundAmount_, reShopServiceRefundAmount) };


            // reShopUpgradeRefundAmount Field Functions 
            bool hasReShopUpgradeRefundAmount() const { return this->reShopUpgradeRefundAmount_ != nullptr;};
            void deleteReShopUpgradeRefundAmount() { this->reShopUpgradeRefundAmount_ = nullptr;};
            inline int64_t getReShopUpgradeRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopUpgradeRefundAmount_, 0L) };
            inline RefundReShopFeeDetailList& setReShopUpgradeRefundAmount(int64_t reShopUpgradeRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopUpgradeRefundAmount_, reShopUpgradeRefundAmount) };


            // refundTaxDiffAmount Field Functions 
            bool hasRefundTaxDiffAmount() const { return this->refundTaxDiffAmount_ != nullptr;};
            void deleteRefundTaxDiffAmount() { this->refundTaxDiffAmount_ = nullptr;};
            inline int64_t getRefundTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTaxDiffAmount_, 0L) };
            inline RefundReShopFeeDetailList& setRefundTaxDiffAmount(int64_t refundTaxDiffAmount) { DARABONBA_PTR_SET_VALUE(refundTaxDiffAmount_, refundTaxDiffAmount) };


          protected:
            shared_ptr<int64_t> nonRefundableReShopHandlingFee_ {};
            shared_ptr<int64_t> nonRefundableReShopUpgradeFee_ {};
            shared_ptr<int64_t> nonRefundableTaxDiffFee_ {};
            shared_ptr<string> reShopApplyId_ {};
            shared_ptr<int64_t> reShopRefundAmount_ {};
            shared_ptr<int64_t> reShopServiceRefundAmount_ {};
            shared_ptr<int64_t> reShopUpgradeRefundAmount_ {};
            shared_ptr<int64_t> refundTaxDiffAmount_ {};
          };

          virtual bool empty() const override { return this->alreadyUsedTotalAmount_ == nullptr
        && this->nonRefundableReShopHandlingFee_ == nullptr && this->nonRefundableReShopUpgradeFee_ == nullptr && this->nonRefundableTaxDiffFee_ == nullptr && this->reShopRefundAmount_ == nullptr && this->reShopServiceRefundAmount_ == nullptr
        && this->reShopUpgradeRefundAmount_ == nullptr && this->refundReShopFeeDetailList_ == nullptr && this->refundTaxDiffAmount_ == nullptr && this->refundTaxFee_ == nullptr && this->refundTicketFee_ == nullptr
        && this->taxRefundAmount_ == nullptr && this->ticketRefundAmount_ == nullptr && this->totalRefundAmount_ == nullptr; };
          // alreadyUsedTotalAmount Field Functions 
          bool hasAlreadyUsedTotalAmount() const { return this->alreadyUsedTotalAmount_ != nullptr;};
          void deleteAlreadyUsedTotalAmount() { this->alreadyUsedTotalAmount_ = nullptr;};
          inline int64_t getAlreadyUsedTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(alreadyUsedTotalAmount_, 0L) };
          inline RefundFeeDetail& setAlreadyUsedTotalAmount(int64_t alreadyUsedTotalAmount) { DARABONBA_PTR_SET_VALUE(alreadyUsedTotalAmount_, alreadyUsedTotalAmount) };


          // nonRefundableReShopHandlingFee Field Functions 
          bool hasNonRefundableReShopHandlingFee() const { return this->nonRefundableReShopHandlingFee_ != nullptr;};
          void deleteNonRefundableReShopHandlingFee() { this->nonRefundableReShopHandlingFee_ = nullptr;};
          inline int64_t getNonRefundableReShopHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopHandlingFee_, 0L) };
          inline RefundFeeDetail& setNonRefundableReShopHandlingFee(int64_t nonRefundableReShopHandlingFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopHandlingFee_, nonRefundableReShopHandlingFee) };


          // nonRefundableReShopUpgradeFee Field Functions 
          bool hasNonRefundableReShopUpgradeFee() const { return this->nonRefundableReShopUpgradeFee_ != nullptr;};
          void deleteNonRefundableReShopUpgradeFee() { this->nonRefundableReShopUpgradeFee_ = nullptr;};
          inline int64_t getNonRefundableReShopUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopUpgradeFee_, 0L) };
          inline RefundFeeDetail& setNonRefundableReShopUpgradeFee(int64_t nonRefundableReShopUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopUpgradeFee_, nonRefundableReShopUpgradeFee) };


          // nonRefundableTaxDiffFee Field Functions 
          bool hasNonRefundableTaxDiffFee() const { return this->nonRefundableTaxDiffFee_ != nullptr;};
          void deleteNonRefundableTaxDiffFee() { this->nonRefundableTaxDiffFee_ = nullptr;};
          inline int64_t getNonRefundableTaxDiffFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxDiffFee_, 0L) };
          inline RefundFeeDetail& setNonRefundableTaxDiffFee(int64_t nonRefundableTaxDiffFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxDiffFee_, nonRefundableTaxDiffFee) };


          // reShopRefundAmount Field Functions 
          bool hasReShopRefundAmount() const { return this->reShopRefundAmount_ != nullptr;};
          void deleteReShopRefundAmount() { this->reShopRefundAmount_ = nullptr;};
          inline int64_t getReShopRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopRefundAmount_, 0L) };
          inline RefundFeeDetail& setReShopRefundAmount(int64_t reShopRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopRefundAmount_, reShopRefundAmount) };


          // reShopServiceRefundAmount Field Functions 
          bool hasReShopServiceRefundAmount() const { return this->reShopServiceRefundAmount_ != nullptr;};
          void deleteReShopServiceRefundAmount() { this->reShopServiceRefundAmount_ = nullptr;};
          inline int64_t getReShopServiceRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopServiceRefundAmount_, 0L) };
          inline RefundFeeDetail& setReShopServiceRefundAmount(int64_t reShopServiceRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopServiceRefundAmount_, reShopServiceRefundAmount) };


          // reShopUpgradeRefundAmount Field Functions 
          bool hasReShopUpgradeRefundAmount() const { return this->reShopUpgradeRefundAmount_ != nullptr;};
          void deleteReShopUpgradeRefundAmount() { this->reShopUpgradeRefundAmount_ = nullptr;};
          inline int64_t getReShopUpgradeRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopUpgradeRefundAmount_, 0L) };
          inline RefundFeeDetail& setReShopUpgradeRefundAmount(int64_t reShopUpgradeRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopUpgradeRefundAmount_, reShopUpgradeRefundAmount) };


          // refundReShopFeeDetailList Field Functions 
          bool hasRefundReShopFeeDetailList() const { return this->refundReShopFeeDetailList_ != nullptr;};
          void deleteRefundReShopFeeDetailList() { this->refundReShopFeeDetailList_ = nullptr;};
          inline const vector<RefundFeeDetail::RefundReShopFeeDetailList> & getRefundReShopFeeDetailList() const { DARABONBA_PTR_GET_CONST(refundReShopFeeDetailList_, vector<RefundFeeDetail::RefundReShopFeeDetailList>) };
          inline vector<RefundFeeDetail::RefundReShopFeeDetailList> getRefundReShopFeeDetailList() { DARABONBA_PTR_GET(refundReShopFeeDetailList_, vector<RefundFeeDetail::RefundReShopFeeDetailList>) };
          inline RefundFeeDetail& setRefundReShopFeeDetailList(const vector<RefundFeeDetail::RefundReShopFeeDetailList> & refundReShopFeeDetailList) { DARABONBA_PTR_SET_VALUE(refundReShopFeeDetailList_, refundReShopFeeDetailList) };
          inline RefundFeeDetail& setRefundReShopFeeDetailList(vector<RefundFeeDetail::RefundReShopFeeDetailList> && refundReShopFeeDetailList) { DARABONBA_PTR_SET_RVALUE(refundReShopFeeDetailList_, refundReShopFeeDetailList) };


          // refundTaxDiffAmount Field Functions 
          bool hasRefundTaxDiffAmount() const { return this->refundTaxDiffAmount_ != nullptr;};
          void deleteRefundTaxDiffAmount() { this->refundTaxDiffAmount_ = nullptr;};
          inline int64_t getRefundTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTaxDiffAmount_, 0L) };
          inline RefundFeeDetail& setRefundTaxDiffAmount(int64_t refundTaxDiffAmount) { DARABONBA_PTR_SET_VALUE(refundTaxDiffAmount_, refundTaxDiffAmount) };


          // refundTaxFee Field Functions 
          bool hasRefundTaxFee() const { return this->refundTaxFee_ != nullptr;};
          void deleteRefundTaxFee() { this->refundTaxFee_ = nullptr;};
          inline int64_t getRefundTaxFee() const { DARABONBA_PTR_GET_DEFAULT(refundTaxFee_, 0L) };
          inline RefundFeeDetail& setRefundTaxFee(int64_t refundTaxFee) { DARABONBA_PTR_SET_VALUE(refundTaxFee_, refundTaxFee) };


          // refundTicketFee Field Functions 
          bool hasRefundTicketFee() const { return this->refundTicketFee_ != nullptr;};
          void deleteRefundTicketFee() { this->refundTicketFee_ = nullptr;};
          inline int64_t getRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(refundTicketFee_, 0L) };
          inline RefundFeeDetail& setRefundTicketFee(int64_t refundTicketFee) { DARABONBA_PTR_SET_VALUE(refundTicketFee_, refundTicketFee) };


          // taxRefundAmount Field Functions 
          bool hasTaxRefundAmount() const { return this->taxRefundAmount_ != nullptr;};
          void deleteTaxRefundAmount() { this->taxRefundAmount_ = nullptr;};
          inline int64_t getTaxRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(taxRefundAmount_, 0L) };
          inline RefundFeeDetail& setTaxRefundAmount(int64_t taxRefundAmount) { DARABONBA_PTR_SET_VALUE(taxRefundAmount_, taxRefundAmount) };


          // ticketRefundAmount Field Functions 
          bool hasTicketRefundAmount() const { return this->ticketRefundAmount_ != nullptr;};
          void deleteTicketRefundAmount() { this->ticketRefundAmount_ = nullptr;};
          inline int64_t getTicketRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketRefundAmount_, 0L) };
          inline RefundFeeDetail& setTicketRefundAmount(int64_t ticketRefundAmount) { DARABONBA_PTR_SET_VALUE(ticketRefundAmount_, ticketRefundAmount) };


          // totalRefundAmount Field Functions 
          bool hasTotalRefundAmount() const { return this->totalRefundAmount_ != nullptr;};
          void deleteTotalRefundAmount() { this->totalRefundAmount_ = nullptr;};
          inline int64_t getTotalRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(totalRefundAmount_, 0L) };
          inline RefundFeeDetail& setTotalRefundAmount(int64_t totalRefundAmount) { DARABONBA_PTR_SET_VALUE(totalRefundAmount_, totalRefundAmount) };


        protected:
          shared_ptr<int64_t> alreadyUsedTotalAmount_ {};
          shared_ptr<int64_t> nonRefundableReShopHandlingFee_ {};
          shared_ptr<int64_t> nonRefundableReShopUpgradeFee_ {};
          shared_ptr<int64_t> nonRefundableTaxDiffFee_ {};
          shared_ptr<int64_t> reShopRefundAmount_ {};
          shared_ptr<int64_t> reShopServiceRefundAmount_ {};
          shared_ptr<int64_t> reShopUpgradeRefundAmount_ {};
          shared_ptr<vector<RefundFeeDetail::RefundReShopFeeDetailList>> refundReShopFeeDetailList_ {};
          shared_ptr<int64_t> refundTaxDiffAmount_ {};
          shared_ptr<int64_t> refundTaxFee_ {};
          shared_ptr<int64_t> refundTicketFee_ {};
          shared_ptr<int64_t> taxRefundAmount_ {};
          shared_ptr<int64_t> ticketRefundAmount_ {};
          shared_ptr<int64_t> totalRefundAmount_ {};
        };

        virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->refundFeeDetail_ == nullptr && this->ticketList_ == nullptr; };
        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
        inline PassengeRefundFeeDetailList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // refundFeeDetail Field Functions 
        bool hasRefundFeeDetail() const { return this->refundFeeDetail_ != nullptr;};
        void deleteRefundFeeDetail() { this->refundFeeDetail_ = nullptr;};
        inline const PassengeRefundFeeDetailList::RefundFeeDetail & getRefundFeeDetail() const { DARABONBA_PTR_GET_CONST(refundFeeDetail_, PassengeRefundFeeDetailList::RefundFeeDetail) };
        inline PassengeRefundFeeDetailList::RefundFeeDetail getRefundFeeDetail() { DARABONBA_PTR_GET(refundFeeDetail_, PassengeRefundFeeDetailList::RefundFeeDetail) };
        inline PassengeRefundFeeDetailList& setRefundFeeDetail(const PassengeRefundFeeDetailList::RefundFeeDetail & refundFeeDetail) { DARABONBA_PTR_SET_VALUE(refundFeeDetail_, refundFeeDetail) };
        inline PassengeRefundFeeDetailList& setRefundFeeDetail(PassengeRefundFeeDetailList::RefundFeeDetail && refundFeeDetail) { DARABONBA_PTR_SET_RVALUE(refundFeeDetail_, refundFeeDetail) };


        // ticketList Field Functions 
        bool hasTicketList() const { return this->ticketList_ != nullptr;};
        void deleteTicketList() { this->ticketList_ = nullptr;};
        inline const vector<PassengeRefundFeeDetailList::TicketList> & getTicketList() const { DARABONBA_PTR_GET_CONST(ticketList_, vector<PassengeRefundFeeDetailList::TicketList>) };
        inline vector<PassengeRefundFeeDetailList::TicketList> getTicketList() { DARABONBA_PTR_GET(ticketList_, vector<PassengeRefundFeeDetailList::TicketList>) };
        inline PassengeRefundFeeDetailList& setTicketList(const vector<PassengeRefundFeeDetailList::TicketList> & ticketList) { DARABONBA_PTR_SET_VALUE(ticketList_, ticketList) };
        inline PassengeRefundFeeDetailList& setTicketList(vector<PassengeRefundFeeDetailList::TicketList> && ticketList) { DARABONBA_PTR_SET_RVALUE(ticketList_, ticketList) };


      protected:
        shared_ptr<int64_t> passengerId_ {};
        shared_ptr<PassengeRefundFeeDetailList::RefundFeeDetail> refundFeeDetail_ {};
        shared_ptr<vector<PassengeRefundFeeDetailList::TicketList>> ticketList_ {};
      };

      virtual bool empty() const override { return this->passengeRefundFeeDetailList_ == nullptr
        && this->passengerList_ == nullptr && this->refundOrderInfo_ == nullptr && this->segmentList_ == nullptr; };
      // passengeRefundFeeDetailList Field Functions 
      bool hasPassengeRefundFeeDetailList() const { return this->passengeRefundFeeDetailList_ != nullptr;};
      void deletePassengeRefundFeeDetailList() { this->passengeRefundFeeDetailList_ = nullptr;};
      inline const vector<Module::PassengeRefundFeeDetailList> & getPassengeRefundFeeDetailList() const { DARABONBA_PTR_GET_CONST(passengeRefundFeeDetailList_, vector<Module::PassengeRefundFeeDetailList>) };
      inline vector<Module::PassengeRefundFeeDetailList> getPassengeRefundFeeDetailList() { DARABONBA_PTR_GET(passengeRefundFeeDetailList_, vector<Module::PassengeRefundFeeDetailList>) };
      inline Module& setPassengeRefundFeeDetailList(const vector<Module::PassengeRefundFeeDetailList> & passengeRefundFeeDetailList) { DARABONBA_PTR_SET_VALUE(passengeRefundFeeDetailList_, passengeRefundFeeDetailList) };
      inline Module& setPassengeRefundFeeDetailList(vector<Module::PassengeRefundFeeDetailList> && passengeRefundFeeDetailList) { DARABONBA_PTR_SET_RVALUE(passengeRefundFeeDetailList_, passengeRefundFeeDetailList) };


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<Module::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Module::PassengerList>) };
      inline vector<Module::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<Module::PassengerList>) };
      inline Module& setPassengerList(const vector<Module::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline Module& setPassengerList(vector<Module::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


      // refundOrderInfo Field Functions 
      bool hasRefundOrderInfo() const { return this->refundOrderInfo_ != nullptr;};
      void deleteRefundOrderInfo() { this->refundOrderInfo_ = nullptr;};
      inline const Module::RefundOrderInfo & getRefundOrderInfo() const { DARABONBA_PTR_GET_CONST(refundOrderInfo_, Module::RefundOrderInfo) };
      inline Module::RefundOrderInfo getRefundOrderInfo() { DARABONBA_PTR_GET(refundOrderInfo_, Module::RefundOrderInfo) };
      inline Module& setRefundOrderInfo(const Module::RefundOrderInfo & refundOrderInfo) { DARABONBA_PTR_SET_VALUE(refundOrderInfo_, refundOrderInfo) };
      inline Module& setRefundOrderInfo(Module::RefundOrderInfo && refundOrderInfo) { DARABONBA_PTR_SET_RVALUE(refundOrderInfo_, refundOrderInfo) };


      // segmentList Field Functions 
      bool hasSegmentList() const { return this->segmentList_ != nullptr;};
      void deleteSegmentList() { this->segmentList_ = nullptr;};
      inline const vector<Module::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Module::SegmentList>) };
      inline vector<Module::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<Module::SegmentList>) };
      inline Module& setSegmentList(const vector<Module::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
      inline Module& setSegmentList(vector<Module::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    protected:
      shared_ptr<vector<Module::PassengeRefundFeeDetailList>> passengeRefundFeeDetailList_ {};
      shared_ptr<vector<Module::PassengerList>> passengerList_ {};
      shared_ptr<Module::RefundOrderInfo> refundOrderInfo_ {};
      shared_ptr<vector<Module::SegmentList>> segmentList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightRefundDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightRefundDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightRefundDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightRefundDetailResponseBody::Module) };
    inline IntlFlightRefundDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightRefundDetailResponseBody::Module) };
    inline IntlFlightRefundDetailResponseBody& setModule(const IntlFlightRefundDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightRefundDetailResponseBody& setModule(IntlFlightRefundDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightRefundDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightRefundDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightRefundDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightRefundDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
