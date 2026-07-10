// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightListingSearchResponseBody() = default ;
    IntlFlightListingSearchResponseBody(const IntlFlightListingSearchResponseBody &) = default ;
    IntlFlightListingSearchResponseBody(IntlFlightListingSearchResponseBody &&) = default ;
    IntlFlightListingSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBody() = default ;
    IntlFlightListingSearchResponseBody& operator=(const IntlFlightListingSearchResponseBody &) = default ;
    IntlFlightListingSearchResponseBody& operator=(IntlFlightListingSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_item_list, flightItemList_);
        DARABONBA_PTR_TO_JSON(need_continue, needContinue_);
        DARABONBA_PTR_TO_JSON(query_record_id, queryRecordId_);
        DARABONBA_PTR_TO_JSON(token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_item_list, flightItemList_);
        DARABONBA_PTR_FROM_JSON(need_continue, needContinue_);
        DARABONBA_PTR_FROM_JSON(query_record_id, queryRecordId_);
        DARABONBA_PTR_FROM_JSON(token, token_);
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
      class FlightItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightItemList& obj) { 
          DARABONBA_PTR_TO_JSON(best_price_item, bestPriceItem_);
          DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
        };
        friend void from_json(const Darabonba::Json& j, FlightItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(best_price_item, bestPriceItem_);
          DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
        };
        FlightItemList() = default ;
        FlightItemList(const FlightItemList &) = default ;
        FlightItemList(FlightItemList &&) = default ;
        FlightItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightItemList() = default ;
        FlightItemList& operator=(const FlightItemList &) = default ;
        FlightItemList& operator=(FlightItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightJourneyInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightJourneyInfos& obj) { 
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightJourneyInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
          };
          FlightJourneyInfos() = default ;
          FlightJourneyInfos(const FlightJourneyInfos &) = default ;
          FlightJourneyInfos(FlightJourneyInfos &&) = default ;
          FlightJourneyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightJourneyInfos() = default ;
          FlightJourneyInfos& operator=(const FlightJourneyInfos &) = default ;
          FlightJourneyInfos& operator=(FlightJourneyInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FlightSegmentInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightSegmentInfos& obj) { 
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
              DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
              DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
              DARABONBA_PTR_TO_JSON(one_more, oneMore_);
              DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
              DARABONBA_PTR_TO_JSON(share, share_);
              DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
              DARABONBA_PTR_TO_JSON(stop, stop_);
              DARABONBA_PTR_TO_JSON(total_time, totalTime_);
            };
            friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
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
              DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
              DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
              DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
              DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
              DARABONBA_PTR_FROM_JSON(share, share_);
              DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
              DARABONBA_PTR_FROM_JSON(stop, stop_);
              DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
            };
            FlightSegmentInfos() = default ;
            FlightSegmentInfos(const FlightSegmentInfos &) = default ;
            FlightSegmentInfos(FlightSegmentInfos &&) = default ;
            FlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightSegmentInfos() = default ;
            FlightSegmentInfos& operator=(const FlightSegmentInfos &) = default ;
            FlightSegmentInfos& operator=(FlightSegmentInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfoList_ == nullptr && this->flightType_ == nullptr && this->manufacturer_ == nullptr
        && this->mealDesc_ == nullptr && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr && this->segmentIndex_ == nullptr && this->segmentKey_ == nullptr
        && this->share_ == nullptr && this->shortFlightSize_ == nullptr && this->stop_ == nullptr && this->totalTime_ == nullptr; };
            // airlineInfo Field Functions 
            bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
            void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
            inline const FlightSegmentInfos::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
            inline FlightSegmentInfos::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, FlightSegmentInfos::AirlineInfo) };
            inline FlightSegmentInfos& setAirlineInfo(const FlightSegmentInfos::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
            inline FlightSegmentInfos& setAirlineInfo(FlightSegmentInfos::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


            // arrAirportInfo Field Functions 
            bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
            void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
            inline const FlightSegmentInfos::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
            inline FlightSegmentInfos::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, FlightSegmentInfos::ArrAirportInfo) };
            inline FlightSegmentInfos& setArrAirportInfo(const FlightSegmentInfos::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
            inline FlightSegmentInfos& setArrAirportInfo(FlightSegmentInfos::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


            // arrCityCode Field Functions 
            bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
            void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
            inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
            inline FlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


            // arrCityName Field Functions 
            bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
            void deleteArrCityName() { this->arrCityName_ = nullptr;};
            inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
            inline FlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline FlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // depAirportInfo Field Functions 
            bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
            void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
            inline const FlightSegmentInfos::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
            inline FlightSegmentInfos::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, FlightSegmentInfos::DepAirportInfo) };
            inline FlightSegmentInfos& setDepAirportInfo(const FlightSegmentInfos::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
            inline FlightSegmentInfos& setDepAirportInfo(FlightSegmentInfos::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


            // depCityCode Field Functions 
            bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
            void deleteDepCityCode() { this->depCityCode_ = nullptr;};
            inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
            inline FlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


            // depCityName Field Functions 
            bool hasDepCityName() const { return this->depCityName_ != nullptr;};
            void deleteDepCityName() { this->depCityName_ = nullptr;};
            inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
            inline FlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline FlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
            inline FlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline FlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


            // flightShareInfo Field Functions 
            bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
            void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
            inline const FlightSegmentInfos::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
            inline FlightSegmentInfos::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, FlightSegmentInfos::FlightShareInfo) };
            inline FlightSegmentInfos& setFlightShareInfo(const FlightSegmentInfos::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
            inline FlightSegmentInfos& setFlightShareInfo(FlightSegmentInfos::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


            // flightSize Field Functions 
            bool hasFlightSize() const { return this->flightSize_ != nullptr;};
            void deleteFlightSize() { this->flightSize_ = nullptr;};
            inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
            inline FlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


            // flightStopInfoList Field Functions 
            bool hasFlightStopInfoList() const { return this->flightStopInfoList_ != nullptr;};
            void deleteFlightStopInfoList() { this->flightStopInfoList_ = nullptr;};
            inline const vector<FlightSegmentInfos::FlightStopInfoList> & getFlightStopInfoList() const { DARABONBA_PTR_GET_CONST(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
            inline vector<FlightSegmentInfos::FlightStopInfoList> getFlightStopInfoList() { DARABONBA_PTR_GET(flightStopInfoList_, vector<FlightSegmentInfos::FlightStopInfoList>) };
            inline FlightSegmentInfos& setFlightStopInfoList(const vector<FlightSegmentInfos::FlightStopInfoList> & flightStopInfoList) { DARABONBA_PTR_SET_VALUE(flightStopInfoList_, flightStopInfoList) };
            inline FlightSegmentInfos& setFlightStopInfoList(vector<FlightSegmentInfos::FlightStopInfoList> && flightStopInfoList) { DARABONBA_PTR_SET_RVALUE(flightStopInfoList_, flightStopInfoList) };


            // flightType Field Functions 
            bool hasFlightType() const { return this->flightType_ != nullptr;};
            void deleteFlightType() { this->flightType_ = nullptr;};
            inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
            inline FlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


            // manufacturer Field Functions 
            bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
            void deleteManufacturer() { this->manufacturer_ = nullptr;};
            inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
            inline FlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


            // mealDesc Field Functions 
            bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
            void deleteMealDesc() { this->mealDesc_ = nullptr;};
            inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
            inline FlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


            // oneMore Field Functions 
            bool hasOneMore() const { return this->oneMore_ != nullptr;};
            void deleteOneMore() { this->oneMore_ = nullptr;};
            inline int32_t getOneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
            inline FlightSegmentInfos& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


            // oneMoreShow Field Functions 
            bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
            void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
            inline string getOneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
            inline FlightSegmentInfos& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline FlightSegmentInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


            // segmentKey Field Functions 
            bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
            void deleteSegmentKey() { this->segmentKey_ = nullptr;};
            inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
            inline FlightSegmentInfos& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


            // share Field Functions 
            bool hasShare() const { return this->share_ != nullptr;};
            void deleteShare() { this->share_ = nullptr;};
            inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
            inline FlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


            // shortFlightSize Field Functions 
            bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
            void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
            inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
            inline FlightSegmentInfos& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


            // stop Field Functions 
            bool hasStop() const { return this->stop_ != nullptr;};
            void deleteStop() { this->stop_ = nullptr;};
            inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
            inline FlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


            // totalTime Field Functions 
            bool hasTotalTime() const { return this->totalTime_ != nullptr;};
            void deleteTotalTime() { this->totalTime_ = nullptr;};
            inline string getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
            inline FlightSegmentInfos& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


          protected:
            shared_ptr<FlightSegmentInfos::AirlineInfo> airlineInfo_ {};
            shared_ptr<FlightSegmentInfos::ArrAirportInfo> arrAirportInfo_ {};
            shared_ptr<string> arrCityCode_ {};
            shared_ptr<string> arrCityName_ {};
            shared_ptr<string> arrTime_ {};
            shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
            shared_ptr<string> depCityCode_ {};
            shared_ptr<string> depCityName_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<int32_t> duration_ {};
            shared_ptr<string> flightNo_ {};
            shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
            shared_ptr<string> flightSize_ {};
            shared_ptr<vector<FlightSegmentInfos::FlightStopInfoList>> flightStopInfoList_ {};
            shared_ptr<string> flightType_ {};
            shared_ptr<string> manufacturer_ {};
            shared_ptr<string> mealDesc_ {};
            shared_ptr<int32_t> oneMore_ {};
            shared_ptr<string> oneMoreShow_ {};
            shared_ptr<int32_t> segmentIndex_ {};
            shared_ptr<string> segmentKey_ {};
            shared_ptr<bool> share_ {};
            shared_ptr<string> shortFlightSize_ {};
            shared_ptr<bool> stop_ {};
            shared_ptr<string> totalTime_ {};
          };

          virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightJourneyInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrCityName Field Functions 
          bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
          void deleteArrCityName() { this->arrCityName_ = nullptr;};
          inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
          inline FlightJourneyInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightJourneyInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightJourneyInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depCityName Field Functions 
          bool hasDepCityName() const { return this->depCityName_ != nullptr;};
          void deleteDepCityName() { this->depCityName_ = nullptr;};
          inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
          inline FlightJourneyInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightJourneyInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline FlightJourneyInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // flightSegmentInfos Field Functions 
          bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
          void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
          inline const vector<FlightJourneyInfos::FlightSegmentInfos> & getFlightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<FlightJourneyInfos::FlightSegmentInfos>) };
          inline vector<FlightJourneyInfos::FlightSegmentInfos> getFlightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<FlightJourneyInfos::FlightSegmentInfos>) };
          inline FlightJourneyInfos& setFlightSegmentInfos(const vector<FlightJourneyInfos::FlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
          inline FlightJourneyInfos& setFlightSegmentInfos(vector<FlightJourneyInfos::FlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightJourneyInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // transferTime Field Functions 
          bool hasTransferTime() const { return this->transferTime_ != nullptr;};
          void deleteTransferTime() { this->transferTime_ = nullptr;};
          inline int32_t getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
          inline FlightJourneyInfos& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


        protected:
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<vector<FlightJourneyInfos::FlightSegmentInfos>> flightSegmentInfos_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> transferTime_ {};
        };

        class BestPriceItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BestPriceItem& obj) { 
            DARABONBA_PTR_TO_JSON(agreement_price_codes, agreementPriceCodes_);
            DARABONBA_PTR_TO_JSON(item_type, itemType_);
            DARABONBA_PTR_TO_JSON(label_list, labelList_);
            DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
          };
          friend void from_json(const Darabonba::Json& j, BestPriceItem& obj) { 
            DARABONBA_PTR_FROM_JSON(agreement_price_codes, agreementPriceCodes_);
            DARABONBA_PTR_FROM_JSON(item_type, itemType_);
            DARABONBA_PTR_FROM_JSON(label_list, labelList_);
            DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
          };
          BestPriceItem() = default ;
          BestPriceItem(const BestPriceItem &) = default ;
          BestPriceItem(BestPriceItem &&) = default ;
          BestPriceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BestPriceItem() = default ;
          BestPriceItem& operator=(const BestPriceItem &) = default ;
          BestPriceItem& operator=(BestPriceItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LabelList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LabelList& obj) { 
              DARABONBA_PTR_TO_JSON(labelCode, labelCode_);
              DARABONBA_PTR_TO_JSON(labelName, labelName_);
            };
            friend void from_json(const Darabonba::Json& j, LabelList& obj) { 
              DARABONBA_PTR_FROM_JSON(labelCode, labelCode_);
              DARABONBA_PTR_FROM_JSON(labelName, labelName_);
            };
            LabelList() = default ;
            LabelList(const LabelList &) = default ;
            LabelList(LabelList &&) = default ;
            LabelList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LabelList() = default ;
            LabelList& operator=(const LabelList &) = default ;
            LabelList& operator=(LabelList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->labelCode_ == nullptr
        && this->labelName_ == nullptr; };
            // labelCode Field Functions 
            bool hasLabelCode() const { return this->labelCode_ != nullptr;};
            void deleteLabelCode() { this->labelCode_ = nullptr;};
            inline int32_t getLabelCode() const { DARABONBA_PTR_GET_DEFAULT(labelCode_, 0) };
            inline LabelList& setLabelCode(int32_t labelCode) { DARABONBA_PTR_SET_VALUE(labelCode_, labelCode) };


            // labelName Field Functions 
            bool hasLabelName() const { return this->labelName_ != nullptr;};
            void deleteLabelName() { this->labelName_ = nullptr;};
            inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
            inline LabelList& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


          protected:
            shared_ptr<int32_t> labelCode_ {};
            shared_ptr<string> labelName_ {};
          };

          class AgreementPriceCodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AgreementPriceCodes& obj) { 
              DARABONBA_PTR_TO_JSON(code, code_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, AgreementPriceCodes& obj) { 
              DARABONBA_PTR_FROM_JSON(code, code_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            AgreementPriceCodes() = default ;
            AgreementPriceCodes(const AgreementPriceCodes &) = default ;
            AgreementPriceCodes(AgreementPriceCodes &&) = default ;
            AgreementPriceCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AgreementPriceCodes() = default ;
            AgreementPriceCodes& operator=(const AgreementPriceCodes &) = default ;
            AgreementPriceCodes& operator=(AgreementPriceCodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->type_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline AgreementPriceCodes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline AgreementPriceCodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->agreementPriceCodes_ == nullptr
        && this->itemType_ == nullptr && this->labelList_ == nullptr && this->shoppingItemMap_ == nullptr; };
          // agreementPriceCodes Field Functions 
          bool hasAgreementPriceCodes() const { return this->agreementPriceCodes_ != nullptr;};
          void deleteAgreementPriceCodes() { this->agreementPriceCodes_ = nullptr;};
          inline const vector<BestPriceItem::AgreementPriceCodes> & getAgreementPriceCodes() const { DARABONBA_PTR_GET_CONST(agreementPriceCodes_, vector<BestPriceItem::AgreementPriceCodes>) };
          inline vector<BestPriceItem::AgreementPriceCodes> getAgreementPriceCodes() { DARABONBA_PTR_GET(agreementPriceCodes_, vector<BestPriceItem::AgreementPriceCodes>) };
          inline BestPriceItem& setAgreementPriceCodes(const vector<BestPriceItem::AgreementPriceCodes> & agreementPriceCodes) { DARABONBA_PTR_SET_VALUE(agreementPriceCodes_, agreementPriceCodes) };
          inline BestPriceItem& setAgreementPriceCodes(vector<BestPriceItem::AgreementPriceCodes> && agreementPriceCodes) { DARABONBA_PTR_SET_RVALUE(agreementPriceCodes_, agreementPriceCodes) };


          // itemType Field Functions 
          bool hasItemType() const { return this->itemType_ != nullptr;};
          void deleteItemType() { this->itemType_ = nullptr;};
          inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
          inline BestPriceItem& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


          // labelList Field Functions 
          bool hasLabelList() const { return this->labelList_ != nullptr;};
          void deleteLabelList() { this->labelList_ = nullptr;};
          inline const vector<BestPriceItem::LabelList> & getLabelList() const { DARABONBA_PTR_GET_CONST(labelList_, vector<BestPriceItem::LabelList>) };
          inline vector<BestPriceItem::LabelList> getLabelList() { DARABONBA_PTR_GET(labelList_, vector<BestPriceItem::LabelList>) };
          inline BestPriceItem& setLabelList(const vector<BestPriceItem::LabelList> & labelList) { DARABONBA_PTR_SET_VALUE(labelList_, labelList) };
          inline BestPriceItem& setLabelList(vector<BestPriceItem::LabelList> && labelList) { DARABONBA_PTR_SET_RVALUE(labelList_, labelList) };


          // shoppingItemMap Field Functions 
          bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
          void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
          inline const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
          inline map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue>) };
          inline BestPriceItem& setShoppingItemMap(const map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
          inline BestPriceItem& setShoppingItemMap(map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


        protected:
          shared_ptr<vector<BestPriceItem::AgreementPriceCodes>> agreementPriceCodes_ {};
          shared_ptr<string> itemType_ {};
          shared_ptr<vector<BestPriceItem::LabelList>> labelList_ {};
          shared_ptr<map<string, ModuleFlightItemListBestPriceItemShoppingItemMapValue>> shoppingItemMap_ {};
        };

        virtual bool empty() const override { return this->bestPriceItem_ == nullptr
        && this->flightJourneyInfos_ == nullptr; };
        // bestPriceItem Field Functions 
        bool hasBestPriceItem() const { return this->bestPriceItem_ != nullptr;};
        void deleteBestPriceItem() { this->bestPriceItem_ = nullptr;};
        inline const FlightItemList::BestPriceItem & getBestPriceItem() const { DARABONBA_PTR_GET_CONST(bestPriceItem_, FlightItemList::BestPriceItem) };
        inline FlightItemList::BestPriceItem getBestPriceItem() { DARABONBA_PTR_GET(bestPriceItem_, FlightItemList::BestPriceItem) };
        inline FlightItemList& setBestPriceItem(const FlightItemList::BestPriceItem & bestPriceItem) { DARABONBA_PTR_SET_VALUE(bestPriceItem_, bestPriceItem) };
        inline FlightItemList& setBestPriceItem(FlightItemList::BestPriceItem && bestPriceItem) { DARABONBA_PTR_SET_RVALUE(bestPriceItem_, bestPriceItem) };


        // flightJourneyInfos Field Functions 
        bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
        void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
        inline const vector<FlightItemList::FlightJourneyInfos> & getFlightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<FlightItemList::FlightJourneyInfos>) };
        inline vector<FlightItemList::FlightJourneyInfos> getFlightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<FlightItemList::FlightJourneyInfos>) };
        inline FlightItemList& setFlightJourneyInfos(const vector<FlightItemList::FlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
        inline FlightItemList& setFlightJourneyInfos(vector<FlightItemList::FlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


      protected:
        shared_ptr<FlightItemList::BestPriceItem> bestPriceItem_ {};
        shared_ptr<vector<FlightItemList::FlightJourneyInfos>> flightJourneyInfos_ {};
      };

      virtual bool empty() const override { return this->flightItemList_ == nullptr
        && this->needContinue_ == nullptr && this->queryRecordId_ == nullptr && this->token_ == nullptr; };
      // flightItemList Field Functions 
      bool hasFlightItemList() const { return this->flightItemList_ != nullptr;};
      void deleteFlightItemList() { this->flightItemList_ = nullptr;};
      inline const vector<Module::FlightItemList> & getFlightItemList() const { DARABONBA_PTR_GET_CONST(flightItemList_, vector<Module::FlightItemList>) };
      inline vector<Module::FlightItemList> getFlightItemList() { DARABONBA_PTR_GET(flightItemList_, vector<Module::FlightItemList>) };
      inline Module& setFlightItemList(const vector<Module::FlightItemList> & flightItemList) { DARABONBA_PTR_SET_VALUE(flightItemList_, flightItemList) };
      inline Module& setFlightItemList(vector<Module::FlightItemList> && flightItemList) { DARABONBA_PTR_SET_RVALUE(flightItemList_, flightItemList) };


      // needContinue Field Functions 
      bool hasNeedContinue() const { return this->needContinue_ != nullptr;};
      void deleteNeedContinue() { this->needContinue_ = nullptr;};
      inline bool getNeedContinue() const { DARABONBA_PTR_GET_DEFAULT(needContinue_, false) };
      inline Module& setNeedContinue(bool needContinue) { DARABONBA_PTR_SET_VALUE(needContinue_, needContinue) };


      // queryRecordId Field Functions 
      bool hasQueryRecordId() const { return this->queryRecordId_ != nullptr;};
      void deleteQueryRecordId() { this->queryRecordId_ = nullptr;};
      inline string getQueryRecordId() const { DARABONBA_PTR_GET_DEFAULT(queryRecordId_, "") };
      inline Module& setQueryRecordId(string queryRecordId) { DARABONBA_PTR_SET_VALUE(queryRecordId_, queryRecordId) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Module& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      shared_ptr<vector<Module::FlightItemList>> flightItemList_ {};
      shared_ptr<bool> needContinue_ {};
      shared_ptr<string> queryRecordId_ {};
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightListingSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightListingSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightListingSearchResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightListingSearchResponseBody::Module) };
    inline IntlFlightListingSearchResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightListingSearchResponseBody::Module) };
    inline IntlFlightListingSearchResponseBody& setModule(const IntlFlightListingSearchResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightListingSearchResponseBody& setModule(IntlFlightListingSearchResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightListingSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightListingSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightListingSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightListingSearchResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
