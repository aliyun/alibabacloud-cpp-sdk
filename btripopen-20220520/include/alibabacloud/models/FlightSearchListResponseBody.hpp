// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODY_HPP_
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
  class FlightSearchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightSearchListResponseBody() = default ;
    FlightSearchListResponseBody(const FlightSearchListResponseBody &) = default ;
    FlightSearchListResponseBody(FlightSearchListResponseBody &&) = default ;
    FlightSearchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBody() = default ;
    FlightSearchListResponseBody& operator=(const FlightSearchListResponseBody &) = default ;
    FlightSearchListResponseBody& operator=(FlightSearchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_list, flightList_);
        DARABONBA_PTR_TO_JSON(is_replace_pnr, isReplacePnr_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
        DARABONBA_PTR_FROM_JSON(is_replace_pnr, isReplacePnr_);
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
      class FlightList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
          DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_info_list, cabinInfoList_);
          DARABONBA_PTR_TO_JSON(carrier_airline, carrierAirline_);
          DARABONBA_PTR_TO_JSON(carrier_no, carrierNo_);
          DARABONBA_PTR_TO_JSON(class_rule, classRule_);
          DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_rule_list, flightRuleList_);
          DARABONBA_PTR_TO_JSON(flight_rule_list_str, flightRuleListStr_);
          DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_TO_JSON(is_share, isShare_);
          DARABONBA_PTR_TO_JSON(is_stop, isStop_);
          DARABONBA_PTR_TO_JSON(is_transfer, isTransfer_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(memo, memo_);
          DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(product_type, productType_);
          DARABONBA_PTR_TO_JSON(product_type_desc, productTypeDesc_);
          DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_TO_JSON(remained_seat_count, remainedSeatCount_);
          DARABONBA_PTR_TO_JSON(secret_params, secretParams_);
          DARABONBA_PTR_TO_JSON(segment_number, segmentNumber_);
          DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
          DARABONBA_PTR_TO_JSON(transfer_info, transferInfo_);
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
        };
        friend void from_json(const Darabonba::Json& j, FlightList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
          DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_info_list, cabinInfoList_);
          DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
          DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
          DARABONBA_PTR_FROM_JSON(class_rule, classRule_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_rule_list, flightRuleList_);
          DARABONBA_PTR_FROM_JSON(flight_rule_list_str, flightRuleListStr_);
          DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_FROM_JSON(is_share, isShare_);
          DARABONBA_PTR_FROM_JSON(is_stop, isStop_);
          DARABONBA_PTR_FROM_JSON(is_transfer, isTransfer_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(memo, memo_);
          DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(product_type, productType_);
          DARABONBA_PTR_FROM_JSON(product_type_desc, productTypeDesc_);
          DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_FROM_JSON(remained_seat_count, remainedSeatCount_);
          DARABONBA_PTR_FROM_JSON(secret_params, secretParams_);
          DARABONBA_PTR_FROM_JSON(segment_number, segmentNumber_);
          DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
          DARABONBA_PTR_FROM_JSON(transfer_info, transferInfo_);
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
        };
        FlightList() = default ;
        FlightList(const FlightList &) = default ;
        FlightList(FlightList &&) = default ;
        FlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightList() = default ;
        FlightList& operator=(const FlightList &) = default ;
        FlightList& operator=(FlightList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TransferInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TransferInfo& obj) { 
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_TO_JSON(transfer_arr_airport_info, transferArrAirportInfo_);
            DARABONBA_PTR_TO_JSON(transfer_arr_date, transferArrDate_);
            DARABONBA_PTR_TO_JSON(transfer_dep_airport_info, transferDepAirportInfo_);
            DARABONBA_PTR_TO_JSON(transfer_dep_date, transferDepDate_);
            DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_TO_JSON(transfer_flight_rule_list, transferFlightRuleList_);
          };
          friend void from_json(const Darabonba::Json& j, TransferInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_FROM_JSON(transfer_arr_airport_info, transferArrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(transfer_arr_date, transferArrDate_);
            DARABONBA_PTR_FROM_JSON(transfer_dep_airport_info, transferDepAirportInfo_);
            DARABONBA_PTR_FROM_JSON(transfer_dep_date, transferDepDate_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_rule_list, transferFlightRuleList_);
          };
          TransferInfo() = default ;
          TransferInfo(const TransferInfo &) = default ;
          TransferInfo(TransferInfo &&) = default ;
          TransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TransferInfo() = default ;
          TransferInfo& operator=(const TransferInfo &) = default ;
          TransferInfo& operator=(TransferInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TransferFlightRuleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferFlightRuleList& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_info, baggageInfo_);
              DARABONBA_PTR_TO_JSON(baggage_item, baggageItem_);
              DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
              DARABONBA_PTR_TO_JSON(change_rule_item, changeRuleItem_);
              DARABONBA_PTR_TO_JSON(extra, extra_);
              DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
              DARABONBA_PTR_TO_JSON(refund_rule_item, refundRuleItem_);
              DARABONBA_PTR_TO_JSON(sign_rule, signRule_);
              DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
              DARABONBA_PTR_TO_JSON(upgrade_rule, upgradeRule_);
            };
            friend void from_json(const Darabonba::Json& j, TransferFlightRuleList& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_info, baggageInfo_);
              DARABONBA_PTR_FROM_JSON(baggage_item, baggageItem_);
              DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
              DARABONBA_PTR_FROM_JSON(change_rule_item, changeRuleItem_);
              DARABONBA_PTR_FROM_JSON(extra, extra_);
              DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
              DARABONBA_PTR_FROM_JSON(refund_rule_item, refundRuleItem_);
              DARABONBA_PTR_FROM_JSON(sign_rule, signRule_);
              DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
              DARABONBA_PTR_FROM_JSON(upgrade_rule, upgradeRule_);
            };
            TransferFlightRuleList() = default ;
            TransferFlightRuleList(const TransferFlightRuleList &) = default ;
            TransferFlightRuleList(TransferFlightRuleList &&) = default ;
            TransferFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TransferFlightRuleList() = default ;
            TransferFlightRuleList& operator=(const TransferFlightRuleList &) = default ;
            TransferFlightRuleList& operator=(TransferFlightRuleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class UpgradeRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const UpgradeRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, UpgradeRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              UpgradeRule() = default ;
              UpgradeRule(const UpgradeRule &) = default ;
              UpgradeRule(UpgradeRule &&) = default ;
              UpgradeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~UpgradeRule() = default ;
              UpgradeRule& operator=(const UpgradeRule &) = default ;
              UpgradeRule& operator=(UpgradeRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline UpgradeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<UpgradeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<UpgradeRule::Info>) };
              inline vector<UpgradeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<UpgradeRule::Info>) };
              inline UpgradeRule& setInfo(const vector<UpgradeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline UpgradeRule& setInfo(vector<UpgradeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<UpgradeRule::Info>> info_ {};
            };

            class SignRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SignRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, SignRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              SignRule() = default ;
              SignRule(const SignRule &) = default ;
              SignRule(SignRule &&) = default ;
              SignRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SignRule() = default ;
              SignRule& operator=(const SignRule &) = default ;
              SignRule& operator=(SignRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline SignRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<SignRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<SignRule::Info>) };
              inline vector<SignRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<SignRule::Info>) };
              inline SignRule& setInfo(const vector<SignRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline SignRule& setInfo(vector<SignRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<SignRule::Info>> info_ {};
            };

            class RefundRuleItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundRuleItem& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, RefundRuleItem& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              RefundRuleItem() = default ;
              RefundRuleItem(const RefundRuleItem &) = default ;
              RefundRuleItem(RefundRuleItem &&) = default ;
              RefundRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundRuleItem() = default ;
              RefundRuleItem& operator=(const RefundRuleItem &) = default ;
              RefundRuleItem& operator=(RefundRuleItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                RefundSubItems() = default ;
                RefundSubItems(const RefundSubItems &) = default ;
                RefundSubItems(RefundSubItems &&) = default ;
                RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubItems() = default ;
                RefundSubItems& operator=(const RefundSubItems &) = default ;
                RefundSubItems& operator=(RefundSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class RefundSubContents : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                    DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_TO_JSON(style, style_);
                  };
                  friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                    DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_FROM_JSON(style, style_);
                  };
                  RefundSubContents() = default ;
                  RefundSubContents(const RefundSubContents &) = default ;
                  RefundSubContents(RefundSubContents &&) = default ;
                  RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~RefundSubContents() = default ;
                  RefundSubContents& operator=(const RefundSubContents &) = default ;
                  RefundSubContents& operator=(RefundSubContents &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                  // feeDesc Field Functions 
                  bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                  void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                  inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                  inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                  // feeRange Field Functions 
                  bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                  void deleteFeeRange() { this->feeRange_ = nullptr;};
                  inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                  inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                  // style Field Functions 
                  bool hasStyle() const { return this->style_ != nullptr;};
                  void deleteStyle() { this->style_ = nullptr;};
                  inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                  inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<int32_t> style_ {};
                };

                virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // refundSubContents Field Functions 
                bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
                void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
                inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
                inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                ExtraContents() = default ;
                ExtraContents(const ExtraContents &) = default ;
                ExtraContents(ExtraContents &&) = default ;
                ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtraContents() = default ;
                ExtraContents& operator=(const ExtraContents &) = default ;
                ExtraContents& operator=(ExtraContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<RefundRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<RefundRuleItem::ExtraContents>) };
              inline vector<RefundRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<RefundRuleItem::ExtraContents>) };
              inline RefundRuleItem& setExtraContents(const vector<RefundRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline RefundRuleItem& setExtraContents(vector<RefundRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline RefundRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<RefundRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
              inline vector<RefundRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
              inline RefundRuleItem& setRefundSubItems(const vector<RefundRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline RefundRuleItem& setRefundSubItems(vector<RefundRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // subTableHead Field Functions 
              bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
              void deleteSubTableHead() { this->subTableHead_ = nullptr;};
              inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
              inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
              inline RefundRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
              inline RefundRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline RefundRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline RefundRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline RefundRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<RefundRuleItem::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<RefundRuleItem::RefundSubItems>> refundSubItems_ {};
              shared_ptr<vector<string>> subTableHead_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class RefundRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              RefundRule() = default ;
              RefundRule(const RefundRule &) = default ;
              RefundRule(RefundRule &&) = default ;
              RefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundRule() = default ;
              RefundRule& operator=(const RefundRule &) = default ;
              RefundRule& operator=(RefundRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline RefundRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<RefundRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<RefundRule::Info>) };
              inline vector<RefundRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<RefundRule::Info>) };
              inline RefundRule& setInfo(const vector<RefundRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline RefundRule& setInfo(vector<RefundRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<RefundRule::Info>> info_ {};
            };

            class ChangeRuleItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ChangeRuleItem& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, ChangeRuleItem& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              ChangeRuleItem() = default ;
              ChangeRuleItem(const ChangeRuleItem &) = default ;
              ChangeRuleItem(ChangeRuleItem &&) = default ;
              ChangeRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ChangeRuleItem() = default ;
              ChangeRuleItem& operator=(const ChangeRuleItem &) = default ;
              ChangeRuleItem& operator=(ChangeRuleItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                RefundSubItems() = default ;
                RefundSubItems(const RefundSubItems &) = default ;
                RefundSubItems(RefundSubItems &&) = default ;
                RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubItems() = default ;
                RefundSubItems& operator=(const RefundSubItems &) = default ;
                RefundSubItems& operator=(RefundSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class RefundSubContents : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                    DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_TO_JSON(style, style_);
                  };
                  friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                    DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_FROM_JSON(style, style_);
                  };
                  RefundSubContents() = default ;
                  RefundSubContents(const RefundSubContents &) = default ;
                  RefundSubContents(RefundSubContents &&) = default ;
                  RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~RefundSubContents() = default ;
                  RefundSubContents& operator=(const RefundSubContents &) = default ;
                  RefundSubContents& operator=(RefundSubContents &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                  // feeDesc Field Functions 
                  bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                  void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                  inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                  inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                  // feeRange Field Functions 
                  bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                  void deleteFeeRange() { this->feeRange_ = nullptr;};
                  inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                  inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                  // style Field Functions 
                  bool hasStyle() const { return this->style_ != nullptr;};
                  void deleteStyle() { this->style_ = nullptr;};
                  inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                  inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<int32_t> style_ {};
                };

                virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // refundSubContents Field Functions 
                bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
                void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
                inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
                inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                ExtraContents() = default ;
                ExtraContents(const ExtraContents &) = default ;
                ExtraContents(ExtraContents &&) = default ;
                ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtraContents() = default ;
                ExtraContents& operator=(const ExtraContents &) = default ;
                ExtraContents& operator=(ExtraContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<ChangeRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
              inline vector<ChangeRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
              inline ChangeRuleItem& setExtraContents(const vector<ChangeRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline ChangeRuleItem& setExtraContents(vector<ChangeRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline ChangeRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<ChangeRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
              inline vector<ChangeRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
              inline ChangeRuleItem& setRefundSubItems(const vector<ChangeRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline ChangeRuleItem& setRefundSubItems(vector<ChangeRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // subTableHead Field Functions 
              bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
              void deleteSubTableHead() { this->subTableHead_ = nullptr;};
              inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
              inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
              inline ChangeRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
              inline ChangeRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline ChangeRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline ChangeRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline ChangeRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<ChangeRuleItem::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<ChangeRuleItem::RefundSubItems>> refundSubItems_ {};
              shared_ptr<vector<string>> subTableHead_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class ChangeRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ChangeRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, ChangeRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              ChangeRule() = default ;
              ChangeRule(const ChangeRule &) = default ;
              ChangeRule(ChangeRule &&) = default ;
              ChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ChangeRule() = default ;
              ChangeRule& operator=(const ChangeRule &) = default ;
              ChangeRule& operator=(ChangeRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline ChangeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<ChangeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<ChangeRule::Info>) };
              inline vector<ChangeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<ChangeRule::Info>) };
              inline ChangeRule& setInfo(const vector<ChangeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline ChangeRule& setInfo(vector<ChangeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<ChangeRule::Info>> info_ {};
            };

            class BaggageItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BaggageItem& obj) { 
                DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(tips, tips_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, BaggageItem& obj) { 
                DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(tips, tips_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              BaggageItem() = default ;
              BaggageItem(const BaggageItem &) = default ;
              BaggageItem(BaggageItem &&) = default ;
              BaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BaggageItem() = default ;
              BaggageItem& operator=(const BaggageItem &) = default ;
              BaggageItem& operator=(BaggageItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Tips : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Tips& obj) { 
                  DARABONBA_PTR_TO_JSON(logo, logo_);
                  DARABONBA_PTR_TO_JSON(tips_desc, tipsDesc_);
                  DARABONBA_PTR_TO_JSON(tips_image, tipsImage_);
                };
                friend void from_json(const Darabonba::Json& j, Tips& obj) { 
                  DARABONBA_PTR_FROM_JSON(logo, logo_);
                  DARABONBA_PTR_FROM_JSON(tips_desc, tipsDesc_);
                  DARABONBA_PTR_FROM_JSON(tips_image, tipsImage_);
                };
                Tips() = default ;
                Tips(const Tips &) = default ;
                Tips(Tips &&) = default ;
                Tips(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Tips() = default ;
                Tips& operator=(const Tips &) = default ;
                Tips& operator=(Tips &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->logo_ == nullptr
        && this->tipsDesc_ == nullptr && this->tipsImage_ == nullptr; };
                // logo Field Functions 
                bool hasLogo() const { return this->logo_ != nullptr;};
                void deleteLogo() { this->logo_ = nullptr;};
                inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
                inline Tips& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


                // tipsDesc Field Functions 
                bool hasTipsDesc() const { return this->tipsDesc_ != nullptr;};
                void deleteTipsDesc() { this->tipsDesc_ = nullptr;};
                inline string getTipsDesc() const { DARABONBA_PTR_GET_DEFAULT(tipsDesc_, "") };
                inline Tips& setTipsDesc(string tipsDesc) { DARABONBA_PTR_SET_VALUE(tipsDesc_, tipsDesc) };


                // tipsImage Field Functions 
                bool hasTipsImage() const { return this->tipsImage_ != nullptr;};
                void deleteTipsImage() { this->tipsImage_ = nullptr;};
                inline string getTipsImage() const { DARABONBA_PTR_GET_DEFAULT(tipsImage_, "") };
                inline Tips& setTipsImage(string tipsImage) { DARABONBA_PTR_SET_VALUE(tipsImage_, tipsImage) };


              protected:
                shared_ptr<string> logo_ {};
                shared_ptr<string> tipsDesc_ {};
                shared_ptr<string> tipsImage_ {};
              };

              class BaggageSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BaggageSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, BaggageSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                BaggageSubItems() = default ;
                BaggageSubItems(const BaggageSubItems &) = default ;
                BaggageSubItems(BaggageSubItems &&) = default ;
                BaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BaggageSubItems() = default ;
                BaggageSubItems& operator=(const BaggageSubItems &) = default ;
                BaggageSubItems& operator=(BaggageSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class BaggageSubContentVisualizes : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_TO_JSON(description, description_);
                    DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
                    DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
                  };
                  friend void from_json(const Darabonba::Json& j, BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_FROM_JSON(description, description_);
                    DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
                    DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
                  };
                  BaggageSubContentVisualizes() = default ;
                  BaggageSubContentVisualizes(const BaggageSubContentVisualizes &) = default ;
                  BaggageSubContentVisualizes(BaggageSubContentVisualizes &&) = default ;
                  BaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~BaggageSubContentVisualizes() = default ;
                  BaggageSubContentVisualizes& operator=(const BaggageSubContentVisualizes &) = default ;
                  BaggageSubContentVisualizes& operator=(BaggageSubContentVisualizes &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class ImageDO : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ImageDO& obj) { 
                      DARABONBA_PTR_TO_JSON(image, image_);
                      DARABONBA_PTR_TO_JSON(largest, largest_);
                      DARABONBA_PTR_TO_JSON(middle, middle_);
                      DARABONBA_PTR_TO_JSON(smallest, smallest_);
                    };
                    friend void from_json(const Darabonba::Json& j, ImageDO& obj) { 
                      DARABONBA_PTR_FROM_JSON(image, image_);
                      DARABONBA_PTR_FROM_JSON(largest, largest_);
                      DARABONBA_PTR_FROM_JSON(middle, middle_);
                      DARABONBA_PTR_FROM_JSON(smallest, smallest_);
                    };
                    ImageDO() = default ;
                    ImageDO(const ImageDO &) = default ;
                    ImageDO(ImageDO &&) = default ;
                    ImageDO(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ImageDO() = default ;
                    ImageDO& operator=(const ImageDO &) = default ;
                    ImageDO& operator=(ImageDO &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->image_ == nullptr
        && this->largest_ == nullptr && this->middle_ == nullptr && this->smallest_ == nullptr; };
                    // image Field Functions 
                    bool hasImage() const { return this->image_ != nullptr;};
                    void deleteImage() { this->image_ = nullptr;};
                    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                    inline ImageDO& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                    // largest Field Functions 
                    bool hasLargest() const { return this->largest_ != nullptr;};
                    void deleteLargest() { this->largest_ = nullptr;};
                    inline string getLargest() const { DARABONBA_PTR_GET_DEFAULT(largest_, "") };
                    inline ImageDO& setLargest(string largest) { DARABONBA_PTR_SET_VALUE(largest_, largest) };


                    // middle Field Functions 
                    bool hasMiddle() const { return this->middle_ != nullptr;};
                    void deleteMiddle() { this->middle_ = nullptr;};
                    inline string getMiddle() const { DARABONBA_PTR_GET_DEFAULT(middle_, "") };
                    inline ImageDO& setMiddle(string middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


                    // smallest Field Functions 
                    bool hasSmallest() const { return this->smallest_ != nullptr;};
                    void deleteSmallest() { this->smallest_ = nullptr;};
                    inline string getSmallest() const { DARABONBA_PTR_GET_DEFAULT(smallest_, "") };
                    inline ImageDO& setSmallest(string smallest) { DARABONBA_PTR_SET_VALUE(smallest_, smallest) };


                  protected:
                    shared_ptr<string> image_ {};
                    shared_ptr<string> largest_ {};
                    shared_ptr<string> middle_ {};
                    shared_ptr<string> smallest_ {};
                  };

                  class Description : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Description& obj) { 
                      DARABONBA_PTR_TO_JSON(desc, desc_);
                      DARABONBA_PTR_TO_JSON(icon, icon_);
                      DARABONBA_PTR_TO_JSON(image, image_);
                      DARABONBA_PTR_TO_JSON(title, title_);
                    };
                    friend void from_json(const Darabonba::Json& j, Description& obj) { 
                      DARABONBA_PTR_FROM_JSON(desc, desc_);
                      DARABONBA_PTR_FROM_JSON(icon, icon_);
                      DARABONBA_PTR_FROM_JSON(image, image_);
                      DARABONBA_PTR_FROM_JSON(title, title_);
                    };
                    Description() = default ;
                    Description(const Description &) = default ;
                    Description(Description &&) = default ;
                    Description(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Description() = default ;
                    Description& operator=(const Description &) = default ;
                    Description& operator=(Description &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->desc_ == nullptr
        && this->icon_ == nullptr && this->image_ == nullptr && this->title_ == nullptr; };
                    // desc Field Functions 
                    bool hasDesc() const { return this->desc_ != nullptr;};
                    void deleteDesc() { this->desc_ = nullptr;};
                    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
                    inline Description& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


                    // icon Field Functions 
                    bool hasIcon() const { return this->icon_ != nullptr;};
                    void deleteIcon() { this->icon_ = nullptr;};
                    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                    inline Description& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                    // image Field Functions 
                    bool hasImage() const { return this->image_ != nullptr;};
                    void deleteImage() { this->image_ = nullptr;};
                    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                    inline Description& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Description& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  protected:
                    shared_ptr<string> desc_ {};
                    shared_ptr<string> icon_ {};
                    shared_ptr<string> image_ {};
                    shared_ptr<string> title_ {};
                  };

                  virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->baggageSubContentType_ == nullptr && this->description_ == nullptr && this->imageDO_ == nullptr && this->isHighlight_ == nullptr && this->subTitle_ == nullptr; };
                  // baggageDesc Field Functions 
                  bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
                  void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
                  inline const vector<string> & getBaggageDesc() const { DARABONBA_PTR_GET_CONST(baggageDesc_, vector<string>) };
                  inline vector<string> getBaggageDesc() { DARABONBA_PTR_GET(baggageDesc_, vector<string>) };
                  inline BaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
                  inline BaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


                  // baggageSubContentType Field Functions 
                  bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
                  void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
                  inline int32_t getBaggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
                  inline BaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


                  // description Field Functions 
                  bool hasDescription() const { return this->description_ != nullptr;};
                  void deleteDescription() { this->description_ = nullptr;};
                  inline const BaggageSubContentVisualizes::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, BaggageSubContentVisualizes::Description) };
                  inline BaggageSubContentVisualizes::Description getDescription() { DARABONBA_PTR_GET(description_, BaggageSubContentVisualizes::Description) };
                  inline BaggageSubContentVisualizes& setDescription(const BaggageSubContentVisualizes::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
                  inline BaggageSubContentVisualizes& setDescription(BaggageSubContentVisualizes::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


                  // imageDO Field Functions 
                  bool hasImageDO() const { return this->imageDO_ != nullptr;};
                  void deleteImageDO() { this->imageDO_ = nullptr;};
                  inline const BaggageSubContentVisualizes::ImageDO & getImageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                  inline BaggageSubContentVisualizes::ImageDO getImageDO() { DARABONBA_PTR_GET(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                  inline BaggageSubContentVisualizes& setImageDO(const BaggageSubContentVisualizes::ImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
                  inline BaggageSubContentVisualizes& setImageDO(BaggageSubContentVisualizes::ImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


                  // isHighlight Field Functions 
                  bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
                  void deleteIsHighlight() { this->isHighlight_ = nullptr;};
                  inline bool getIsHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
                  inline BaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


                  // subTitle Field Functions 
                  bool hasSubTitle() const { return this->subTitle_ != nullptr;};
                  void deleteSubTitle() { this->subTitle_ = nullptr;};
                  inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
                  inline BaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


                protected:
                  shared_ptr<vector<string>> baggageDesc_ {};
                  shared_ptr<int32_t> baggageSubContentType_ {};
                  shared_ptr<BaggageSubContentVisualizes::Description> description_ {};
                  shared_ptr<BaggageSubContentVisualizes::ImageDO> imageDO_ {};
                  shared_ptr<bool> isHighlight_ {};
                  shared_ptr<string> subTitle_ {};
                };

                virtual bool empty() const override { return this->baggageSubContentVisualizes_ == nullptr
        && this->extraContentVisualizes_ == nullptr && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->title_ == nullptr; };
                // baggageSubContentVisualizes Field Functions 
                bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
                void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
                inline const vector<BaggageSubItems::BaggageSubContentVisualizes> & getBaggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline vector<BaggageSubItems::BaggageSubContentVisualizes> getBaggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(const vector<BaggageSubItems::BaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(vector<BaggageSubItems::BaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


                // extraContentVisualizes Field Functions 
                bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
                void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
                inline const vector<Darabonba::Json> & getExtraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
                inline vector<Darabonba::Json> getExtraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
                inline BaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
                inline BaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline BaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline BaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline BaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<vector<BaggageSubItems::BaggageSubContentVisualizes>> baggageSubContentVisualizes_ {};
                shared_ptr<vector<Darabonba::Json>> extraContentVisualizes_ {};
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->baggageSubItems_ == nullptr
        && this->index_ == nullptr && this->tableHead_ == nullptr && this->tips_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
              // baggageSubItems Field Functions 
              bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
              void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
              inline const vector<BaggageItem::BaggageSubItems> & getBaggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
              inline vector<BaggageItem::BaggageSubItems> getBaggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
              inline BaggageItem& setBaggageSubItems(const vector<BaggageItem::BaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
              inline BaggageItem& setBaggageSubItems(vector<BaggageItem::BaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline BaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline BaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // tips Field Functions 
              bool hasTips() const { return this->tips_ != nullptr;};
              void deleteTips() { this->tips_ = nullptr;};
              inline const BaggageItem::Tips & getTips() const { DARABONBA_PTR_GET_CONST(tips_, BaggageItem::Tips) };
              inline BaggageItem::Tips getTips() { DARABONBA_PTR_GET(tips_, BaggageItem::Tips) };
              inline BaggageItem& setTips(const BaggageItem::Tips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
              inline BaggageItem& setTips(BaggageItem::Tips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline BaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline BaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<BaggageItem::BaggageSubItems>> baggageSubItems_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<BaggageItem::Tips> tips_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            virtual bool empty() const override { return this->baggageInfo_ == nullptr
        && this->baggageItem_ == nullptr && this->changeRule_ == nullptr && this->changeRuleItem_ == nullptr && this->extra_ == nullptr && this->refundRule_ == nullptr
        && this->refundRuleItem_ == nullptr && this->signRule_ == nullptr && this->tuigaiqianInfo_ == nullptr && this->upgradeRule_ == nullptr; };
            // baggageInfo Field Functions 
            bool hasBaggageInfo() const { return this->baggageInfo_ != nullptr;};
            void deleteBaggageInfo() { this->baggageInfo_ = nullptr;};
            inline string getBaggageInfo() const { DARABONBA_PTR_GET_DEFAULT(baggageInfo_, "") };
            inline TransferFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


            // baggageItem Field Functions 
            bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
            void deleteBaggageItem() { this->baggageItem_ = nullptr;};
            inline const TransferFlightRuleList::BaggageItem & getBaggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, TransferFlightRuleList::BaggageItem) };
            inline TransferFlightRuleList::BaggageItem getBaggageItem() { DARABONBA_PTR_GET(baggageItem_, TransferFlightRuleList::BaggageItem) };
            inline TransferFlightRuleList& setBaggageItem(const TransferFlightRuleList::BaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
            inline TransferFlightRuleList& setBaggageItem(TransferFlightRuleList::BaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


            // changeRule Field Functions 
            bool hasChangeRule() const { return this->changeRule_ != nullptr;};
            void deleteChangeRule() { this->changeRule_ = nullptr;};
            inline const TransferFlightRuleList::ChangeRule & getChangeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, TransferFlightRuleList::ChangeRule) };
            inline TransferFlightRuleList::ChangeRule getChangeRule() { DARABONBA_PTR_GET(changeRule_, TransferFlightRuleList::ChangeRule) };
            inline TransferFlightRuleList& setChangeRule(const TransferFlightRuleList::ChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
            inline TransferFlightRuleList& setChangeRule(TransferFlightRuleList::ChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


            // changeRuleItem Field Functions 
            bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
            void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
            inline const TransferFlightRuleList::ChangeRuleItem & getChangeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, TransferFlightRuleList::ChangeRuleItem) };
            inline TransferFlightRuleList::ChangeRuleItem getChangeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, TransferFlightRuleList::ChangeRuleItem) };
            inline TransferFlightRuleList& setChangeRuleItem(const TransferFlightRuleList::ChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
            inline TransferFlightRuleList& setChangeRuleItem(TransferFlightRuleList::ChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


            // extra Field Functions 
            bool hasExtra() const { return this->extra_ != nullptr;};
            void deleteExtra() { this->extra_ = nullptr;};
            inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
            inline TransferFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


            // refundRule Field Functions 
            bool hasRefundRule() const { return this->refundRule_ != nullptr;};
            void deleteRefundRule() { this->refundRule_ = nullptr;};
            inline const TransferFlightRuleList::RefundRule & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, TransferFlightRuleList::RefundRule) };
            inline TransferFlightRuleList::RefundRule getRefundRule() { DARABONBA_PTR_GET(refundRule_, TransferFlightRuleList::RefundRule) };
            inline TransferFlightRuleList& setRefundRule(const TransferFlightRuleList::RefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
            inline TransferFlightRuleList& setRefundRule(TransferFlightRuleList::RefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


            // refundRuleItem Field Functions 
            bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
            void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
            inline const TransferFlightRuleList::RefundRuleItem & getRefundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, TransferFlightRuleList::RefundRuleItem) };
            inline TransferFlightRuleList::RefundRuleItem getRefundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, TransferFlightRuleList::RefundRuleItem) };
            inline TransferFlightRuleList& setRefundRuleItem(const TransferFlightRuleList::RefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
            inline TransferFlightRuleList& setRefundRuleItem(TransferFlightRuleList::RefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


            // signRule Field Functions 
            bool hasSignRule() const { return this->signRule_ != nullptr;};
            void deleteSignRule() { this->signRule_ = nullptr;};
            inline const TransferFlightRuleList::SignRule & getSignRule() const { DARABONBA_PTR_GET_CONST(signRule_, TransferFlightRuleList::SignRule) };
            inline TransferFlightRuleList::SignRule getSignRule() { DARABONBA_PTR_GET(signRule_, TransferFlightRuleList::SignRule) };
            inline TransferFlightRuleList& setSignRule(const TransferFlightRuleList::SignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
            inline TransferFlightRuleList& setSignRule(TransferFlightRuleList::SignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


            // tuigaiqianInfo Field Functions 
            bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
            void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
            inline string getTuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
            inline TransferFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


            // upgradeRule Field Functions 
            bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
            void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
            inline const TransferFlightRuleList::UpgradeRule & getUpgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, TransferFlightRuleList::UpgradeRule) };
            inline TransferFlightRuleList::UpgradeRule getUpgradeRule() { DARABONBA_PTR_GET(upgradeRule_, TransferFlightRuleList::UpgradeRule) };
            inline TransferFlightRuleList& setUpgradeRule(const TransferFlightRuleList::UpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
            inline TransferFlightRuleList& setUpgradeRule(TransferFlightRuleList::UpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


          protected:
            shared_ptr<string> baggageInfo_ {};
            shared_ptr<TransferFlightRuleList::BaggageItem> baggageItem_ {};
            shared_ptr<TransferFlightRuleList::ChangeRule> changeRule_ {};
            shared_ptr<TransferFlightRuleList::ChangeRuleItem> changeRuleItem_ {};
            shared_ptr<string> extra_ {};
            shared_ptr<TransferFlightRuleList::RefundRule> refundRule_ {};
            shared_ptr<TransferFlightRuleList::RefundRuleItem> refundRuleItem_ {};
            shared_ptr<TransferFlightRuleList::SignRule> signRule_ {};
            shared_ptr<string> tuigaiqianInfo_ {};
            shared_ptr<TransferFlightRuleList::UpgradeRule> upgradeRule_ {};
          };

          class TransferDepAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferDepAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(city_code, cityCode_);
              DARABONBA_PTR_TO_JSON(city_name, cityName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, TransferDepAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
              DARABONBA_PTR_FROM_JSON(city_name, cityName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            TransferDepAirportInfo() = default ;
            TransferDepAirportInfo(const TransferDepAirportInfo &) = default ;
            TransferDepAirportInfo(TransferDepAirportInfo &&) = default ;
            TransferDepAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TransferDepAirportInfo() = default ;
            TransferDepAirportInfo& operator=(const TransferDepAirportInfo &) = default ;
            TransferDepAirportInfo& operator=(TransferDepAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline TransferDepAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline TransferDepAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // cityCode Field Functions 
            bool hasCityCode() const { return this->cityCode_ != nullptr;};
            void deleteCityCode() { this->cityCode_ = nullptr;};
            inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
            inline TransferDepAirportInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


            // cityName Field Functions 
            bool hasCityName() const { return this->cityName_ != nullptr;};
            void deleteCityName() { this->cityName_ = nullptr;};
            inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
            inline TransferDepAirportInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline TransferDepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> cityCode_ {};
            shared_ptr<string> cityName_ {};
            shared_ptr<string> terminal_ {};
          };

          class TransferArrAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferArrAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(city_code, cityCode_);
              DARABONBA_PTR_TO_JSON(city_name, cityName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, TransferArrAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
              DARABONBA_PTR_FROM_JSON(city_name, cityName_);
              DARABONBA_PTR_FROM_JSON(terminal, terminal_);
            };
            TransferArrAirportInfo() = default ;
            TransferArrAirportInfo(const TransferArrAirportInfo &) = default ;
            TransferArrAirportInfo(TransferArrAirportInfo &&) = default ;
            TransferArrAirportInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TransferArrAirportInfo() = default ;
            TransferArrAirportInfo& operator=(const TransferArrAirportInfo &) = default ;
            TransferArrAirportInfo& operator=(TransferArrAirportInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airportCode_ == nullptr
        && this->airportName_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->terminal_ == nullptr; };
            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline TransferArrAirportInfo& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline TransferArrAirportInfo& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // cityCode Field Functions 
            bool hasCityCode() const { return this->cityCode_ != nullptr;};
            void deleteCityCode() { this->cityCode_ = nullptr;};
            inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
            inline TransferArrAirportInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


            // cityName Field Functions 
            bool hasCityName() const { return this->cityName_ != nullptr;};
            void deleteCityName() { this->cityName_ = nullptr;};
            inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
            inline TransferArrAirportInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


            // terminal Field Functions 
            bool hasTerminal() const { return this->terminal_ != nullptr;};
            void deleteTerminal() { this->terminal_ = nullptr;};
            inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
            inline TransferArrAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


          protected:
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> cityCode_ {};
            shared_ptr<string> cityName_ {};
            shared_ptr<string> terminal_ {};
          };

          class TransferAirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferAirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
              DARABONBA_PTR_TO_JSON(airline_simple_name, airlineSimpleName_);
            };
            friend void from_json(const Darabonba::Json& j, TransferAirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
              DARABONBA_PTR_FROM_JSON(airline_simple_name, airlineSimpleName_);
            };
            TransferAirlineInfo() = default ;
            TransferAirlineInfo(const TransferAirlineInfo &) = default ;
            TransferAirlineInfo(TransferAirlineInfo &&) = default ;
            TransferAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TransferAirlineInfo() = default ;
            TransferAirlineInfo& operator=(const TransferAirlineInfo &) = default ;
            TransferAirlineInfo& operator=(TransferAirlineInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->airlineSimpleName_ == nullptr; };
            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline TransferAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineName Field Functions 
            bool hasAirlineName() const { return this->airlineName_ != nullptr;};
            void deleteAirlineName() { this->airlineName_ = nullptr;};
            inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
            inline TransferAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


            // airlineSimpleName Field Functions 
            bool hasAirlineSimpleName() const { return this->airlineSimpleName_ != nullptr;};
            void deleteAirlineSimpleName() { this->airlineSimpleName_ = nullptr;};
            inline string getAirlineSimpleName() const { DARABONBA_PTR_GET_DEFAULT(airlineSimpleName_, "") };
            inline TransferAirlineInfo& setAirlineSimpleName(string airlineSimpleName) { DARABONBA_PTR_SET_VALUE(airlineSimpleName_, airlineSimpleName) };


          protected:
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineName_ {};
            shared_ptr<string> airlineSimpleName_ {};
          };

          virtual bool empty() const override { return this->flightSize_ == nullptr
        && this->flightType_ == nullptr && this->transferAirlineInfo_ == nullptr && this->transferArrAirportInfo_ == nullptr && this->transferArrDate_ == nullptr && this->transferDepAirportInfo_ == nullptr
        && this->transferDepDate_ == nullptr && this->transferFlightNo_ == nullptr && this->transferFlightRuleList_ == nullptr; };
          // flightSize Field Functions 
          bool hasFlightSize() const { return this->flightSize_ != nullptr;};
          void deleteFlightSize() { this->flightSize_ = nullptr;};
          inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
          inline TransferInfo& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


          // flightType Field Functions 
          bool hasFlightType() const { return this->flightType_ != nullptr;};
          void deleteFlightType() { this->flightType_ = nullptr;};
          inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
          inline TransferInfo& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


          // transferAirlineInfo Field Functions 
          bool hasTransferAirlineInfo() const { return this->transferAirlineInfo_ != nullptr;};
          void deleteTransferAirlineInfo() { this->transferAirlineInfo_ = nullptr;};
          inline const TransferInfo::TransferAirlineInfo & getTransferAirlineInfo() const { DARABONBA_PTR_GET_CONST(transferAirlineInfo_, TransferInfo::TransferAirlineInfo) };
          inline TransferInfo::TransferAirlineInfo getTransferAirlineInfo() { DARABONBA_PTR_GET(transferAirlineInfo_, TransferInfo::TransferAirlineInfo) };
          inline TransferInfo& setTransferAirlineInfo(const TransferInfo::TransferAirlineInfo & transferAirlineInfo) { DARABONBA_PTR_SET_VALUE(transferAirlineInfo_, transferAirlineInfo) };
          inline TransferInfo& setTransferAirlineInfo(TransferInfo::TransferAirlineInfo && transferAirlineInfo) { DARABONBA_PTR_SET_RVALUE(transferAirlineInfo_, transferAirlineInfo) };


          // transferArrAirportInfo Field Functions 
          bool hasTransferArrAirportInfo() const { return this->transferArrAirportInfo_ != nullptr;};
          void deleteTransferArrAirportInfo() { this->transferArrAirportInfo_ = nullptr;};
          inline const TransferInfo::TransferArrAirportInfo & getTransferArrAirportInfo() const { DARABONBA_PTR_GET_CONST(transferArrAirportInfo_, TransferInfo::TransferArrAirportInfo) };
          inline TransferInfo::TransferArrAirportInfo getTransferArrAirportInfo() { DARABONBA_PTR_GET(transferArrAirportInfo_, TransferInfo::TransferArrAirportInfo) };
          inline TransferInfo& setTransferArrAirportInfo(const TransferInfo::TransferArrAirportInfo & transferArrAirportInfo) { DARABONBA_PTR_SET_VALUE(transferArrAirportInfo_, transferArrAirportInfo) };
          inline TransferInfo& setTransferArrAirportInfo(TransferInfo::TransferArrAirportInfo && transferArrAirportInfo) { DARABONBA_PTR_SET_RVALUE(transferArrAirportInfo_, transferArrAirportInfo) };


          // transferArrDate Field Functions 
          bool hasTransferArrDate() const { return this->transferArrDate_ != nullptr;};
          void deleteTransferArrDate() { this->transferArrDate_ = nullptr;};
          inline string getTransferArrDate() const { DARABONBA_PTR_GET_DEFAULT(transferArrDate_, "") };
          inline TransferInfo& setTransferArrDate(string transferArrDate) { DARABONBA_PTR_SET_VALUE(transferArrDate_, transferArrDate) };


          // transferDepAirportInfo Field Functions 
          bool hasTransferDepAirportInfo() const { return this->transferDepAirportInfo_ != nullptr;};
          void deleteTransferDepAirportInfo() { this->transferDepAirportInfo_ = nullptr;};
          inline const TransferInfo::TransferDepAirportInfo & getTransferDepAirportInfo() const { DARABONBA_PTR_GET_CONST(transferDepAirportInfo_, TransferInfo::TransferDepAirportInfo) };
          inline TransferInfo::TransferDepAirportInfo getTransferDepAirportInfo() { DARABONBA_PTR_GET(transferDepAirportInfo_, TransferInfo::TransferDepAirportInfo) };
          inline TransferInfo& setTransferDepAirportInfo(const TransferInfo::TransferDepAirportInfo & transferDepAirportInfo) { DARABONBA_PTR_SET_VALUE(transferDepAirportInfo_, transferDepAirportInfo) };
          inline TransferInfo& setTransferDepAirportInfo(TransferInfo::TransferDepAirportInfo && transferDepAirportInfo) { DARABONBA_PTR_SET_RVALUE(transferDepAirportInfo_, transferDepAirportInfo) };


          // transferDepDate Field Functions 
          bool hasTransferDepDate() const { return this->transferDepDate_ != nullptr;};
          void deleteTransferDepDate() { this->transferDepDate_ = nullptr;};
          inline string getTransferDepDate() const { DARABONBA_PTR_GET_DEFAULT(transferDepDate_, "") };
          inline TransferInfo& setTransferDepDate(string transferDepDate) { DARABONBA_PTR_SET_VALUE(transferDepDate_, transferDepDate) };


          // transferFlightNo Field Functions 
          bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
          void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
          inline string getTransferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
          inline TransferInfo& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


          // transferFlightRuleList Field Functions 
          bool hasTransferFlightRuleList() const { return this->transferFlightRuleList_ != nullptr;};
          void deleteTransferFlightRuleList() { this->transferFlightRuleList_ = nullptr;};
          inline const vector<TransferInfo::TransferFlightRuleList> & getTransferFlightRuleList() const { DARABONBA_PTR_GET_CONST(transferFlightRuleList_, vector<TransferInfo::TransferFlightRuleList>) };
          inline vector<TransferInfo::TransferFlightRuleList> getTransferFlightRuleList() { DARABONBA_PTR_GET(transferFlightRuleList_, vector<TransferInfo::TransferFlightRuleList>) };
          inline TransferInfo& setTransferFlightRuleList(const vector<TransferInfo::TransferFlightRuleList> & transferFlightRuleList) { DARABONBA_PTR_SET_VALUE(transferFlightRuleList_, transferFlightRuleList) };
          inline TransferInfo& setTransferFlightRuleList(vector<TransferInfo::TransferFlightRuleList> && transferFlightRuleList) { DARABONBA_PTR_SET_RVALUE(transferFlightRuleList_, transferFlightRuleList) };


        protected:
          shared_ptr<string> flightSize_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<TransferInfo::TransferAirlineInfo> transferAirlineInfo_ {};
          shared_ptr<TransferInfo::TransferArrAirportInfo> transferArrAirportInfo_ {};
          shared_ptr<string> transferArrDate_ {};
          shared_ptr<TransferInfo::TransferDepAirportInfo> transferDepAirportInfo_ {};
          shared_ptr<string> transferDepDate_ {};
          shared_ptr<string> transferFlightNo_ {};
          shared_ptr<vector<TransferInfo::TransferFlightRuleList>> transferFlightRuleList_ {};
        };

        class FlightRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(baggage_info, baggageInfo_);
            DARABONBA_PTR_TO_JSON(baggage_item, baggageItem_);
            DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
            DARABONBA_PTR_TO_JSON(change_rule_item, changeRuleItem_);
            DARABONBA_PTR_TO_JSON(extra, extra_);
            DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
            DARABONBA_PTR_TO_JSON(refund_rule_item, refundRuleItem_);
            DARABONBA_PTR_TO_JSON(sign_rule, signRule_);
            DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
            DARABONBA_PTR_TO_JSON(upgrade_rule, upgradeRule_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(baggage_info, baggageInfo_);
            DARABONBA_PTR_FROM_JSON(baggage_item, baggageItem_);
            DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
            DARABONBA_PTR_FROM_JSON(change_rule_item, changeRuleItem_);
            DARABONBA_PTR_FROM_JSON(extra, extra_);
            DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
            DARABONBA_PTR_FROM_JSON(refund_rule_item, refundRuleItem_);
            DARABONBA_PTR_FROM_JSON(sign_rule, signRule_);
            DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
            DARABONBA_PTR_FROM_JSON(upgrade_rule, upgradeRule_);
          };
          FlightRuleList() = default ;
          FlightRuleList(const FlightRuleList &) = default ;
          FlightRuleList(FlightRuleList &&) = default ;
          FlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRuleList() = default ;
          FlightRuleList& operator=(const FlightRuleList &) = default ;
          FlightRuleList& operator=(FlightRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UpgradeRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UpgradeRule& obj) { 
              DARABONBA_PTR_TO_JSON(able, able_);
              DARABONBA_PTR_TO_JSON(info, info_);
            };
            friend void from_json(const Darabonba::Json& j, UpgradeRule& obj) { 
              DARABONBA_PTR_FROM_JSON(able, able_);
              DARABONBA_PTR_FROM_JSON(info, info_);
            };
            UpgradeRule() = default ;
            UpgradeRule(const UpgradeRule &) = default ;
            UpgradeRule(UpgradeRule &&) = default ;
            UpgradeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UpgradeRule() = default ;
            UpgradeRule& operator=(const UpgradeRule &) = default ;
            UpgradeRule& operator=(UpgradeRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Info : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Info& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(cost, cost_);
                DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_TO_JSON(time_type, timeType_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, Info& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(cost, cost_);
                DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              Info() = default ;
              Info(const Info &) = default ;
              Info(Info &&) = default ;
              Info(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Info() = default ;
              Info& operator=(const Info &) = default ;
              Info& operator=(Info &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // cost Field Functions 
              bool hasCost() const { return this->cost_ != nullptr;};
              void deleteCost() { this->cost_ = nullptr;};
              inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
              inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


              // costPercent Field Functions 
              bool hasCostPercent() const { return this->costPercent_ != nullptr;};
              void deleteCostPercent() { this->costPercent_ = nullptr;};
              inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
              inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


              // timeStamp Field Functions 
              bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
              void deleteTimeStamp() { this->timeStamp_ = nullptr;};
              inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
              inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


              // timeType Field Functions 
              bool hasTimeType() const { return this->timeType_ != nullptr;};
              void deleteTimeType() { this->timeType_ = nullptr;};
              inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
              inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<int32_t> cost_ {};
              shared_ptr<int32_t> costPercent_ {};
              shared_ptr<int32_t> timeStamp_ {};
              shared_ptr<string> timeType_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
            // able Field Functions 
            bool hasAble() const { return this->able_ != nullptr;};
            void deleteAble() { this->able_ = nullptr;};
            inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
            inline UpgradeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline const vector<UpgradeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<UpgradeRule::Info>) };
            inline vector<UpgradeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<UpgradeRule::Info>) };
            inline UpgradeRule& setInfo(const vector<UpgradeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
            inline UpgradeRule& setInfo(vector<UpgradeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


          protected:
            shared_ptr<bool> able_ {};
            shared_ptr<vector<UpgradeRule::Info>> info_ {};
          };

          class SignRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SignRule& obj) { 
              DARABONBA_PTR_TO_JSON(able, able_);
              DARABONBA_PTR_TO_JSON(info, info_);
            };
            friend void from_json(const Darabonba::Json& j, SignRule& obj) { 
              DARABONBA_PTR_FROM_JSON(able, able_);
              DARABONBA_PTR_FROM_JSON(info, info_);
            };
            SignRule() = default ;
            SignRule(const SignRule &) = default ;
            SignRule(SignRule &&) = default ;
            SignRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SignRule() = default ;
            SignRule& operator=(const SignRule &) = default ;
            SignRule& operator=(SignRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Info : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Info& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(cost, cost_);
                DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_TO_JSON(time_type, timeType_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, Info& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(cost, cost_);
                DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              Info() = default ;
              Info(const Info &) = default ;
              Info(Info &&) = default ;
              Info(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Info() = default ;
              Info& operator=(const Info &) = default ;
              Info& operator=(Info &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // cost Field Functions 
              bool hasCost() const { return this->cost_ != nullptr;};
              void deleteCost() { this->cost_ = nullptr;};
              inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
              inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


              // costPercent Field Functions 
              bool hasCostPercent() const { return this->costPercent_ != nullptr;};
              void deleteCostPercent() { this->costPercent_ = nullptr;};
              inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
              inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


              // timeStamp Field Functions 
              bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
              void deleteTimeStamp() { this->timeStamp_ = nullptr;};
              inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
              inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


              // timeType Field Functions 
              bool hasTimeType() const { return this->timeType_ != nullptr;};
              void deleteTimeType() { this->timeType_ = nullptr;};
              inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
              inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<int32_t> cost_ {};
              shared_ptr<int32_t> costPercent_ {};
              shared_ptr<int32_t> timeStamp_ {};
              shared_ptr<string> timeType_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
            // able Field Functions 
            bool hasAble() const { return this->able_ != nullptr;};
            void deleteAble() { this->able_ = nullptr;};
            inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
            inline SignRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline const vector<SignRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<SignRule::Info>) };
            inline vector<SignRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<SignRule::Info>) };
            inline SignRule& setInfo(const vector<SignRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
            inline SignRule& setInfo(vector<SignRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


          protected:
            shared_ptr<bool> able_ {};
            shared_ptr<vector<SignRule::Info>> info_ {};
          };

          class RefundRuleItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundRuleItem& obj) { 
              DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
              DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
              DARABONBA_PTR_TO_JSON(table_head, tableHead_);
              DARABONBA_PTR_TO_JSON(title, title_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, RefundRuleItem& obj) { 
              DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
              DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
              DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
              DARABONBA_PTR_FROM_JSON(title, title_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            RefundRuleItem() = default ;
            RefundRuleItem(const RefundRuleItem &) = default ;
            RefundRuleItem(RefundRuleItem &&) = default ;
            RefundRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundRuleItem() = default ;
            RefundRuleItem& operator=(const RefundRuleItem &) = default ;
            RefundRuleItem& operator=(RefundRuleItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RefundSubItems : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                DARABONBA_PTR_TO_JSON(ptc, ptc_);
                DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              RefundSubItems() = default ;
              RefundSubItems(const RefundSubItems &) = default ;
              RefundSubItems(RefundSubItems &&) = default ;
              RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundSubItems() = default ;
              RefundSubItems& operator=(const RefundSubItems &) = default ;
              RefundSubItems& operator=(RefundSubItems &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                  DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                  DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                  DARABONBA_PTR_TO_JSON(style, style_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                  DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                  DARABONBA_PTR_FROM_JSON(style, style_);
                };
                RefundSubContents() = default ;
                RefundSubContents(const RefundSubContents &) = default ;
                RefundSubContents(RefundSubContents &&) = default ;
                RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubContents() = default ;
                RefundSubContents& operator=(const RefundSubContents &) = default ;
                RefundSubContents& operator=(RefundSubContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                // feeDesc Field Functions 
                bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                // feeRange Field Functions 
                bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                void deleteFeeRange() { this->feeRange_ = nullptr;};
                inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                // style Field Functions 
                bool hasStyle() const { return this->style_ != nullptr;};
                void deleteStyle() { this->style_ = nullptr;};
                inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


              protected:
                shared_ptr<string> feeDesc_ {};
                shared_ptr<string> feeRange_ {};
                shared_ptr<int32_t> style_ {};
              };

              virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
              // isStruct Field Functions 
              bool hasIsStruct() const { return this->isStruct_ != nullptr;};
              void deleteIsStruct() { this->isStruct_ = nullptr;};
              inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
              inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


              // ptc Field Functions 
              bool hasPtc() const { return this->ptc_ != nullptr;};
              void deletePtc() { this->ptc_ = nullptr;};
              inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
              inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


              // refundSubContents Field Functions 
              bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
              void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
              inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
              inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
              inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
              inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<bool> isStruct_ {};
              shared_ptr<string> ptc_ {};
              shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
              shared_ptr<string> title_ {};
            };

            class ExtraContents : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              ExtraContents() = default ;
              ExtraContents(const ExtraContents &) = default ;
              ExtraContents(ExtraContents &&) = default ;
              ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExtraContents() = default ;
              ExtraContents& operator=(const ExtraContents &) = default ;
              ExtraContents& operator=(ExtraContents &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
            // extraContents Field Functions 
            bool hasExtraContents() const { return this->extraContents_ != nullptr;};
            void deleteExtraContents() { this->extraContents_ = nullptr;};
            inline const vector<RefundRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<RefundRuleItem::ExtraContents>) };
            inline vector<RefundRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<RefundRuleItem::ExtraContents>) };
            inline RefundRuleItem& setExtraContents(const vector<RefundRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
            inline RefundRuleItem& setExtraContents(vector<RefundRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline RefundRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // refundSubItems Field Functions 
            bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
            void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
            inline const vector<RefundRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
            inline vector<RefundRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
            inline RefundRuleItem& setRefundSubItems(const vector<RefundRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
            inline RefundRuleItem& setRefundSubItems(vector<RefundRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


            // subTableHead Field Functions 
            bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
            void deleteSubTableHead() { this->subTableHead_ = nullptr;};
            inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
            inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
            inline RefundRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
            inline RefundRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


            // tableHead Field Functions 
            bool hasTableHead() const { return this->tableHead_ != nullptr;};
            void deleteTableHead() { this->tableHead_ = nullptr;};
            inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
            inline RefundRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline RefundRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
            inline RefundRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<vector<RefundRuleItem::ExtraContents>> extraContents_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<vector<RefundRuleItem::RefundSubItems>> refundSubItems_ {};
            shared_ptr<vector<string>> subTableHead_ {};
            shared_ptr<string> tableHead_ {};
            shared_ptr<string> title_ {};
            shared_ptr<int32_t> type_ {};
          };

          class RefundRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
              DARABONBA_PTR_TO_JSON(able, able_);
              DARABONBA_PTR_TO_JSON(info, info_);
            };
            friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
              DARABONBA_PTR_FROM_JSON(able, able_);
              DARABONBA_PTR_FROM_JSON(info, info_);
            };
            RefundRule() = default ;
            RefundRule(const RefundRule &) = default ;
            RefundRule(RefundRule &&) = default ;
            RefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundRule() = default ;
            RefundRule& operator=(const RefundRule &) = default ;
            RefundRule& operator=(RefundRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Info : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Info& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(cost, cost_);
                DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_TO_JSON(time_type, timeType_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, Info& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(cost, cost_);
                DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              Info() = default ;
              Info(const Info &) = default ;
              Info(Info &&) = default ;
              Info(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Info() = default ;
              Info& operator=(const Info &) = default ;
              Info& operator=(Info &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // cost Field Functions 
              bool hasCost() const { return this->cost_ != nullptr;};
              void deleteCost() { this->cost_ = nullptr;};
              inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
              inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


              // costPercent Field Functions 
              bool hasCostPercent() const { return this->costPercent_ != nullptr;};
              void deleteCostPercent() { this->costPercent_ = nullptr;};
              inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
              inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


              // timeStamp Field Functions 
              bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
              void deleteTimeStamp() { this->timeStamp_ = nullptr;};
              inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
              inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


              // timeType Field Functions 
              bool hasTimeType() const { return this->timeType_ != nullptr;};
              void deleteTimeType() { this->timeType_ = nullptr;};
              inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
              inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<int32_t> cost_ {};
              shared_ptr<int32_t> costPercent_ {};
              shared_ptr<int32_t> timeStamp_ {};
              shared_ptr<string> timeType_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
            // able Field Functions 
            bool hasAble() const { return this->able_ != nullptr;};
            void deleteAble() { this->able_ = nullptr;};
            inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
            inline RefundRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline const vector<RefundRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<RefundRule::Info>) };
            inline vector<RefundRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<RefundRule::Info>) };
            inline RefundRule& setInfo(const vector<RefundRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
            inline RefundRule& setInfo(vector<RefundRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


          protected:
            shared_ptr<bool> able_ {};
            shared_ptr<vector<RefundRule::Info>> info_ {};
          };

          class ChangeRuleItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChangeRuleItem& obj) { 
              DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
              DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
              DARABONBA_PTR_TO_JSON(table_head, tableHead_);
              DARABONBA_PTR_TO_JSON(title, title_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, ChangeRuleItem& obj) { 
              DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
              DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
              DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
              DARABONBA_PTR_FROM_JSON(title, title_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            ChangeRuleItem() = default ;
            ChangeRuleItem(const ChangeRuleItem &) = default ;
            ChangeRuleItem(ChangeRuleItem &&) = default ;
            ChangeRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChangeRuleItem() = default ;
            ChangeRuleItem& operator=(const ChangeRuleItem &) = default ;
            ChangeRuleItem& operator=(ChangeRuleItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RefundSubItems : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                DARABONBA_PTR_TO_JSON(ptc, ptc_);
                DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              RefundSubItems() = default ;
              RefundSubItems(const RefundSubItems &) = default ;
              RefundSubItems(RefundSubItems &&) = default ;
              RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundSubItems() = default ;
              RefundSubItems& operator=(const RefundSubItems &) = default ;
              RefundSubItems& operator=(RefundSubItems &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                  DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                  DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                  DARABONBA_PTR_TO_JSON(style, style_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                  DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                  DARABONBA_PTR_FROM_JSON(style, style_);
                };
                RefundSubContents() = default ;
                RefundSubContents(const RefundSubContents &) = default ;
                RefundSubContents(RefundSubContents &&) = default ;
                RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubContents() = default ;
                RefundSubContents& operator=(const RefundSubContents &) = default ;
                RefundSubContents& operator=(RefundSubContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                // feeDesc Field Functions 
                bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                // feeRange Field Functions 
                bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                void deleteFeeRange() { this->feeRange_ = nullptr;};
                inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                // style Field Functions 
                bool hasStyle() const { return this->style_ != nullptr;};
                void deleteStyle() { this->style_ = nullptr;};
                inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


              protected:
                shared_ptr<string> feeDesc_ {};
                shared_ptr<string> feeRange_ {};
                shared_ptr<int32_t> style_ {};
              };

              virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
              // isStruct Field Functions 
              bool hasIsStruct() const { return this->isStruct_ != nullptr;};
              void deleteIsStruct() { this->isStruct_ = nullptr;};
              inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
              inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


              // ptc Field Functions 
              bool hasPtc() const { return this->ptc_ != nullptr;};
              void deletePtc() { this->ptc_ = nullptr;};
              inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
              inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


              // refundSubContents Field Functions 
              bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
              void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
              inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
              inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
              inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
              inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<bool> isStruct_ {};
              shared_ptr<string> ptc_ {};
              shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
              shared_ptr<string> title_ {};
            };

            class ExtraContents : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              ExtraContents() = default ;
              ExtraContents(const ExtraContents &) = default ;
              ExtraContents(ExtraContents &&) = default ;
              ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExtraContents() = default ;
              ExtraContents& operator=(const ExtraContents &) = default ;
              ExtraContents& operator=(ExtraContents &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
            // extraContents Field Functions 
            bool hasExtraContents() const { return this->extraContents_ != nullptr;};
            void deleteExtraContents() { this->extraContents_ = nullptr;};
            inline const vector<ChangeRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
            inline vector<ChangeRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
            inline ChangeRuleItem& setExtraContents(const vector<ChangeRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
            inline ChangeRuleItem& setExtraContents(vector<ChangeRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline ChangeRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // refundSubItems Field Functions 
            bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
            void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
            inline const vector<ChangeRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
            inline vector<ChangeRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
            inline ChangeRuleItem& setRefundSubItems(const vector<ChangeRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
            inline ChangeRuleItem& setRefundSubItems(vector<ChangeRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


            // subTableHead Field Functions 
            bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
            void deleteSubTableHead() { this->subTableHead_ = nullptr;};
            inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
            inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
            inline ChangeRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
            inline ChangeRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


            // tableHead Field Functions 
            bool hasTableHead() const { return this->tableHead_ != nullptr;};
            void deleteTableHead() { this->tableHead_ = nullptr;};
            inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
            inline ChangeRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline ChangeRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
            inline ChangeRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<vector<ChangeRuleItem::ExtraContents>> extraContents_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<vector<ChangeRuleItem::RefundSubItems>> refundSubItems_ {};
            shared_ptr<vector<string>> subTableHead_ {};
            shared_ptr<string> tableHead_ {};
            shared_ptr<string> title_ {};
            shared_ptr<int32_t> type_ {};
          };

          class ChangeRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChangeRule& obj) { 
              DARABONBA_PTR_TO_JSON(able, able_);
              DARABONBA_PTR_TO_JSON(info, info_);
            };
            friend void from_json(const Darabonba::Json& j, ChangeRule& obj) { 
              DARABONBA_PTR_FROM_JSON(able, able_);
              DARABONBA_PTR_FROM_JSON(info, info_);
            };
            ChangeRule() = default ;
            ChangeRule(const ChangeRule &) = default ;
            ChangeRule(ChangeRule &&) = default ;
            ChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChangeRule() = default ;
            ChangeRule& operator=(const ChangeRule &) = default ;
            ChangeRule& operator=(ChangeRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Info : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Info& obj) { 
                DARABONBA_PTR_TO_JSON(content, content_);
                DARABONBA_PTR_TO_JSON(cost, cost_);
                DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_TO_JSON(time_type, timeType_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, Info& obj) { 
                DARABONBA_PTR_FROM_JSON(content, content_);
                DARABONBA_PTR_FROM_JSON(cost, cost_);
                DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              Info() = default ;
              Info(const Info &) = default ;
              Info(Info &&) = default ;
              Info(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Info() = default ;
              Info& operator=(const Info &) = default ;
              Info& operator=(Info &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
              // content Field Functions 
              bool hasContent() const { return this->content_ != nullptr;};
              void deleteContent() { this->content_ = nullptr;};
              inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
              inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


              // cost Field Functions 
              bool hasCost() const { return this->cost_ != nullptr;};
              void deleteCost() { this->cost_ = nullptr;};
              inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
              inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


              // costPercent Field Functions 
              bool hasCostPercent() const { return this->costPercent_ != nullptr;};
              void deleteCostPercent() { this->costPercent_ = nullptr;};
              inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
              inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


              // timeStamp Field Functions 
              bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
              void deleteTimeStamp() { this->timeStamp_ = nullptr;};
              inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
              inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


              // timeType Field Functions 
              bool hasTimeType() const { return this->timeType_ != nullptr;};
              void deleteTimeType() { this->timeType_ = nullptr;};
              inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
              inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<string> content_ {};
              shared_ptr<int32_t> cost_ {};
              shared_ptr<int32_t> costPercent_ {};
              shared_ptr<int32_t> timeStamp_ {};
              shared_ptr<string> timeType_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
            // able Field Functions 
            bool hasAble() const { return this->able_ != nullptr;};
            void deleteAble() { this->able_ = nullptr;};
            inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
            inline ChangeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline const vector<ChangeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<ChangeRule::Info>) };
            inline vector<ChangeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<ChangeRule::Info>) };
            inline ChangeRule& setInfo(const vector<ChangeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
            inline ChangeRule& setInfo(vector<ChangeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


          protected:
            shared_ptr<bool> able_ {};
            shared_ptr<vector<ChangeRule::Info>> info_ {};
          };

          class BaggageItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageItem& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(table_head, tableHead_);
              DARABONBA_PTR_TO_JSON(tips, tips_);
              DARABONBA_PTR_TO_JSON(title, title_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageItem& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
              DARABONBA_PTR_FROM_JSON(tips, tips_);
              DARABONBA_PTR_FROM_JSON(title, title_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            BaggageItem() = default ;
            BaggageItem(const BaggageItem &) = default ;
            BaggageItem(BaggageItem &&) = default ;
            BaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BaggageItem() = default ;
            BaggageItem& operator=(const BaggageItem &) = default ;
            BaggageItem& operator=(BaggageItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Tips : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Tips& obj) { 
                DARABONBA_PTR_TO_JSON(logo, logo_);
                DARABONBA_PTR_TO_JSON(tips_desc, tipsDesc_);
                DARABONBA_PTR_TO_JSON(tips_image, tipsImage_);
              };
              friend void from_json(const Darabonba::Json& j, Tips& obj) { 
                DARABONBA_PTR_FROM_JSON(logo, logo_);
                DARABONBA_PTR_FROM_JSON(tips_desc, tipsDesc_);
                DARABONBA_PTR_FROM_JSON(tips_image, tipsImage_);
              };
              Tips() = default ;
              Tips(const Tips &) = default ;
              Tips(Tips &&) = default ;
              Tips(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Tips() = default ;
              Tips& operator=(const Tips &) = default ;
              Tips& operator=(Tips &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->logo_ == nullptr
        && this->tipsDesc_ == nullptr && this->tipsImage_ == nullptr; };
              // logo Field Functions 
              bool hasLogo() const { return this->logo_ != nullptr;};
              void deleteLogo() { this->logo_ = nullptr;};
              inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
              inline Tips& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


              // tipsDesc Field Functions 
              bool hasTipsDesc() const { return this->tipsDesc_ != nullptr;};
              void deleteTipsDesc() { this->tipsDesc_ = nullptr;};
              inline string getTipsDesc() const { DARABONBA_PTR_GET_DEFAULT(tipsDesc_, "") };
              inline Tips& setTipsDesc(string tipsDesc) { DARABONBA_PTR_SET_VALUE(tipsDesc_, tipsDesc) };


              // tipsImage Field Functions 
              bool hasTipsImage() const { return this->tipsImage_ != nullptr;};
              void deleteTipsImage() { this->tipsImage_ = nullptr;};
              inline string getTipsImage() const { DARABONBA_PTR_GET_DEFAULT(tipsImage_, "") };
              inline Tips& setTipsImage(string tipsImage) { DARABONBA_PTR_SET_VALUE(tipsImage_, tipsImage) };


            protected:
              shared_ptr<string> logo_ {};
              shared_ptr<string> tipsDesc_ {};
              shared_ptr<string> tipsImage_ {};
            };

            class BaggageSubItems : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BaggageSubItems& obj) { 
                DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
                DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                DARABONBA_PTR_TO_JSON(ptc, ptc_);
                DARABONBA_PTR_TO_JSON(title, title_);
              };
              friend void from_json(const Darabonba::Json& j, BaggageSubItems& obj) { 
                DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
                DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                DARABONBA_PTR_FROM_JSON(title, title_);
              };
              BaggageSubItems() = default ;
              BaggageSubItems(const BaggageSubItems &) = default ;
              BaggageSubItems(BaggageSubItems &&) = default ;
              BaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BaggageSubItems() = default ;
              BaggageSubItems& operator=(const BaggageSubItems &) = default ;
              BaggageSubItems& operator=(BaggageSubItems &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class BaggageSubContentVisualizes : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BaggageSubContentVisualizes& obj) { 
                  DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
                  DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
                  DARABONBA_PTR_TO_JSON(description, description_);
                  DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
                  DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
                  DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
                };
                friend void from_json(const Darabonba::Json& j, BaggageSubContentVisualizes& obj) { 
                  DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
                  DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
                  DARABONBA_PTR_FROM_JSON(description, description_);
                  DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
                  DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
                  DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
                };
                BaggageSubContentVisualizes() = default ;
                BaggageSubContentVisualizes(const BaggageSubContentVisualizes &) = default ;
                BaggageSubContentVisualizes(BaggageSubContentVisualizes &&) = default ;
                BaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BaggageSubContentVisualizes() = default ;
                BaggageSubContentVisualizes& operator=(const BaggageSubContentVisualizes &) = default ;
                BaggageSubContentVisualizes& operator=(BaggageSubContentVisualizes &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class ImageDO : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ImageDO& obj) { 
                    DARABONBA_PTR_TO_JSON(image, image_);
                    DARABONBA_PTR_TO_JSON(largest, largest_);
                    DARABONBA_PTR_TO_JSON(middle, middle_);
                    DARABONBA_PTR_TO_JSON(smallest, smallest_);
                  };
                  friend void from_json(const Darabonba::Json& j, ImageDO& obj) { 
                    DARABONBA_PTR_FROM_JSON(image, image_);
                    DARABONBA_PTR_FROM_JSON(largest, largest_);
                    DARABONBA_PTR_FROM_JSON(middle, middle_);
                    DARABONBA_PTR_FROM_JSON(smallest, smallest_);
                  };
                  ImageDO() = default ;
                  ImageDO(const ImageDO &) = default ;
                  ImageDO(ImageDO &&) = default ;
                  ImageDO(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ImageDO() = default ;
                  ImageDO& operator=(const ImageDO &) = default ;
                  ImageDO& operator=(ImageDO &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->image_ == nullptr
        && this->largest_ == nullptr && this->middle_ == nullptr && this->smallest_ == nullptr; };
                  // image Field Functions 
                  bool hasImage() const { return this->image_ != nullptr;};
                  void deleteImage() { this->image_ = nullptr;};
                  inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                  inline ImageDO& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                  // largest Field Functions 
                  bool hasLargest() const { return this->largest_ != nullptr;};
                  void deleteLargest() { this->largest_ = nullptr;};
                  inline string getLargest() const { DARABONBA_PTR_GET_DEFAULT(largest_, "") };
                  inline ImageDO& setLargest(string largest) { DARABONBA_PTR_SET_VALUE(largest_, largest) };


                  // middle Field Functions 
                  bool hasMiddle() const { return this->middle_ != nullptr;};
                  void deleteMiddle() { this->middle_ = nullptr;};
                  inline string getMiddle() const { DARABONBA_PTR_GET_DEFAULT(middle_, "") };
                  inline ImageDO& setMiddle(string middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


                  // smallest Field Functions 
                  bool hasSmallest() const { return this->smallest_ != nullptr;};
                  void deleteSmallest() { this->smallest_ = nullptr;};
                  inline string getSmallest() const { DARABONBA_PTR_GET_DEFAULT(smallest_, "") };
                  inline ImageDO& setSmallest(string smallest) { DARABONBA_PTR_SET_VALUE(smallest_, smallest) };


                protected:
                  shared_ptr<string> image_ {};
                  shared_ptr<string> largest_ {};
                  shared_ptr<string> middle_ {};
                  shared_ptr<string> smallest_ {};
                };

                class Description : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Description& obj) { 
                    DARABONBA_PTR_TO_JSON(desc, desc_);
                    DARABONBA_PTR_TO_JSON(icon, icon_);
                    DARABONBA_PTR_TO_JSON(image, image_);
                    DARABONBA_PTR_TO_JSON(title, title_);
                  };
                  friend void from_json(const Darabonba::Json& j, Description& obj) { 
                    DARABONBA_PTR_FROM_JSON(desc, desc_);
                    DARABONBA_PTR_FROM_JSON(icon, icon_);
                    DARABONBA_PTR_FROM_JSON(image, image_);
                    DARABONBA_PTR_FROM_JSON(title, title_);
                  };
                  Description() = default ;
                  Description(const Description &) = default ;
                  Description(Description &&) = default ;
                  Description(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Description() = default ;
                  Description& operator=(const Description &) = default ;
                  Description& operator=(Description &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->desc_ == nullptr
        && this->icon_ == nullptr && this->image_ == nullptr && this->title_ == nullptr; };
                  // desc Field Functions 
                  bool hasDesc() const { return this->desc_ != nullptr;};
                  void deleteDesc() { this->desc_ = nullptr;};
                  inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
                  inline Description& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


                  // icon Field Functions 
                  bool hasIcon() const { return this->icon_ != nullptr;};
                  void deleteIcon() { this->icon_ = nullptr;};
                  inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                  inline Description& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                  // image Field Functions 
                  bool hasImage() const { return this->image_ != nullptr;};
                  void deleteImage() { this->image_ = nullptr;};
                  inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                  inline Description& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                  // title Field Functions 
                  bool hasTitle() const { return this->title_ != nullptr;};
                  void deleteTitle() { this->title_ = nullptr;};
                  inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                  inline Description& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                protected:
                  shared_ptr<string> desc_ {};
                  shared_ptr<string> icon_ {};
                  shared_ptr<string> image_ {};
                  shared_ptr<string> title_ {};
                };

                virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->baggageSubContentType_ == nullptr && this->description_ == nullptr && this->imageDO_ == nullptr && this->isHighlight_ == nullptr && this->subTitle_ == nullptr; };
                // baggageDesc Field Functions 
                bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
                void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
                inline const vector<string> & getBaggageDesc() const { DARABONBA_PTR_GET_CONST(baggageDesc_, vector<string>) };
                inline vector<string> getBaggageDesc() { DARABONBA_PTR_GET(baggageDesc_, vector<string>) };
                inline BaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
                inline BaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


                // baggageSubContentType Field Functions 
                bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
                void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
                inline int32_t getBaggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
                inline BaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


                // description Field Functions 
                bool hasDescription() const { return this->description_ != nullptr;};
                void deleteDescription() { this->description_ = nullptr;};
                inline const BaggageSubContentVisualizes::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, BaggageSubContentVisualizes::Description) };
                inline BaggageSubContentVisualizes::Description getDescription() { DARABONBA_PTR_GET(description_, BaggageSubContentVisualizes::Description) };
                inline BaggageSubContentVisualizes& setDescription(const BaggageSubContentVisualizes::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
                inline BaggageSubContentVisualizes& setDescription(BaggageSubContentVisualizes::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


                // imageDO Field Functions 
                bool hasImageDO() const { return this->imageDO_ != nullptr;};
                void deleteImageDO() { this->imageDO_ = nullptr;};
                inline const BaggageSubContentVisualizes::ImageDO & getImageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                inline BaggageSubContentVisualizes::ImageDO getImageDO() { DARABONBA_PTR_GET(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                inline BaggageSubContentVisualizes& setImageDO(const BaggageSubContentVisualizes::ImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
                inline BaggageSubContentVisualizes& setImageDO(BaggageSubContentVisualizes::ImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


                // isHighlight Field Functions 
                bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
                void deleteIsHighlight() { this->isHighlight_ = nullptr;};
                inline bool getIsHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
                inline BaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


                // subTitle Field Functions 
                bool hasSubTitle() const { return this->subTitle_ != nullptr;};
                void deleteSubTitle() { this->subTitle_ = nullptr;};
                inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
                inline BaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


              protected:
                shared_ptr<vector<string>> baggageDesc_ {};
                shared_ptr<int32_t> baggageSubContentType_ {};
                shared_ptr<BaggageSubContentVisualizes::Description> description_ {};
                shared_ptr<BaggageSubContentVisualizes::ImageDO> imageDO_ {};
                shared_ptr<bool> isHighlight_ {};
                shared_ptr<string> subTitle_ {};
              };

              virtual bool empty() const override { return this->baggageSubContentVisualizes_ == nullptr
        && this->extraContentVisualizes_ == nullptr && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->title_ == nullptr; };
              // baggageSubContentVisualizes Field Functions 
              bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
              void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
              inline const vector<BaggageSubItems::BaggageSubContentVisualizes> & getBaggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
              inline vector<BaggageSubItems::BaggageSubContentVisualizes> getBaggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
              inline BaggageSubItems& setBaggageSubContentVisualizes(const vector<BaggageSubItems::BaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
              inline BaggageSubItems& setBaggageSubContentVisualizes(vector<BaggageSubItems::BaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


              // extraContentVisualizes Field Functions 
              bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
              void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
              inline const vector<Darabonba::Json> & getExtraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
              inline vector<Darabonba::Json> getExtraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
              inline BaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
              inline BaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


              // isStruct Field Functions 
              bool hasIsStruct() const { return this->isStruct_ != nullptr;};
              void deleteIsStruct() { this->isStruct_ = nullptr;};
              inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
              inline BaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


              // ptc Field Functions 
              bool hasPtc() const { return this->ptc_ != nullptr;};
              void deletePtc() { this->ptc_ = nullptr;};
              inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
              inline BaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline BaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            protected:
              shared_ptr<vector<BaggageSubItems::BaggageSubContentVisualizes>> baggageSubContentVisualizes_ {};
              shared_ptr<vector<Darabonba::Json>> extraContentVisualizes_ {};
              shared_ptr<bool> isStruct_ {};
              shared_ptr<string> ptc_ {};
              shared_ptr<string> title_ {};
            };

            virtual bool empty() const override { return this->baggageSubItems_ == nullptr
        && this->index_ == nullptr && this->tableHead_ == nullptr && this->tips_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
            // baggageSubItems Field Functions 
            bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
            void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
            inline const vector<BaggageItem::BaggageSubItems> & getBaggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
            inline vector<BaggageItem::BaggageSubItems> getBaggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
            inline BaggageItem& setBaggageSubItems(const vector<BaggageItem::BaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
            inline BaggageItem& setBaggageSubItems(vector<BaggageItem::BaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline BaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // tableHead Field Functions 
            bool hasTableHead() const { return this->tableHead_ != nullptr;};
            void deleteTableHead() { this->tableHead_ = nullptr;};
            inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
            inline BaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


            // tips Field Functions 
            bool hasTips() const { return this->tips_ != nullptr;};
            void deleteTips() { this->tips_ = nullptr;};
            inline const BaggageItem::Tips & getTips() const { DARABONBA_PTR_GET_CONST(tips_, BaggageItem::Tips) };
            inline BaggageItem::Tips getTips() { DARABONBA_PTR_GET(tips_, BaggageItem::Tips) };
            inline BaggageItem& setTips(const BaggageItem::Tips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
            inline BaggageItem& setTips(BaggageItem::Tips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline BaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
            inline BaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<vector<BaggageItem::BaggageSubItems>> baggageSubItems_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> tableHead_ {};
            shared_ptr<BaggageItem::Tips> tips_ {};
            shared_ptr<string> title_ {};
            shared_ptr<int32_t> type_ {};
          };

          virtual bool empty() const override { return this->baggageInfo_ == nullptr
        && this->baggageItem_ == nullptr && this->changeRule_ == nullptr && this->changeRuleItem_ == nullptr && this->extra_ == nullptr && this->refundRule_ == nullptr
        && this->refundRuleItem_ == nullptr && this->signRule_ == nullptr && this->tuigaiqianInfo_ == nullptr && this->upgradeRule_ == nullptr; };
          // baggageInfo Field Functions 
          bool hasBaggageInfo() const { return this->baggageInfo_ != nullptr;};
          void deleteBaggageInfo() { this->baggageInfo_ = nullptr;};
          inline string getBaggageInfo() const { DARABONBA_PTR_GET_DEFAULT(baggageInfo_, "") };
          inline FlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


          // baggageItem Field Functions 
          bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
          void deleteBaggageItem() { this->baggageItem_ = nullptr;};
          inline const FlightRuleList::BaggageItem & getBaggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, FlightRuleList::BaggageItem) };
          inline FlightRuleList::BaggageItem getBaggageItem() { DARABONBA_PTR_GET(baggageItem_, FlightRuleList::BaggageItem) };
          inline FlightRuleList& setBaggageItem(const FlightRuleList::BaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
          inline FlightRuleList& setBaggageItem(FlightRuleList::BaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


          // changeRule Field Functions 
          bool hasChangeRule() const { return this->changeRule_ != nullptr;};
          void deleteChangeRule() { this->changeRule_ = nullptr;};
          inline const FlightRuleList::ChangeRule & getChangeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, FlightRuleList::ChangeRule) };
          inline FlightRuleList::ChangeRule getChangeRule() { DARABONBA_PTR_GET(changeRule_, FlightRuleList::ChangeRule) };
          inline FlightRuleList& setChangeRule(const FlightRuleList::ChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
          inline FlightRuleList& setChangeRule(FlightRuleList::ChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


          // changeRuleItem Field Functions 
          bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
          void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
          inline const FlightRuleList::ChangeRuleItem & getChangeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, FlightRuleList::ChangeRuleItem) };
          inline FlightRuleList::ChangeRuleItem getChangeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, FlightRuleList::ChangeRuleItem) };
          inline FlightRuleList& setChangeRuleItem(const FlightRuleList::ChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
          inline FlightRuleList& setChangeRuleItem(FlightRuleList::ChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


          // extra Field Functions 
          bool hasExtra() const { return this->extra_ != nullptr;};
          void deleteExtra() { this->extra_ = nullptr;};
          inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
          inline FlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


          // refundRule Field Functions 
          bool hasRefundRule() const { return this->refundRule_ != nullptr;};
          void deleteRefundRule() { this->refundRule_ = nullptr;};
          inline const FlightRuleList::RefundRule & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, FlightRuleList::RefundRule) };
          inline FlightRuleList::RefundRule getRefundRule() { DARABONBA_PTR_GET(refundRule_, FlightRuleList::RefundRule) };
          inline FlightRuleList& setRefundRule(const FlightRuleList::RefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
          inline FlightRuleList& setRefundRule(FlightRuleList::RefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


          // refundRuleItem Field Functions 
          bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
          void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
          inline const FlightRuleList::RefundRuleItem & getRefundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, FlightRuleList::RefundRuleItem) };
          inline FlightRuleList::RefundRuleItem getRefundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, FlightRuleList::RefundRuleItem) };
          inline FlightRuleList& setRefundRuleItem(const FlightRuleList::RefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
          inline FlightRuleList& setRefundRuleItem(FlightRuleList::RefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


          // signRule Field Functions 
          bool hasSignRule() const { return this->signRule_ != nullptr;};
          void deleteSignRule() { this->signRule_ = nullptr;};
          inline const FlightRuleList::SignRule & getSignRule() const { DARABONBA_PTR_GET_CONST(signRule_, FlightRuleList::SignRule) };
          inline FlightRuleList::SignRule getSignRule() { DARABONBA_PTR_GET(signRule_, FlightRuleList::SignRule) };
          inline FlightRuleList& setSignRule(const FlightRuleList::SignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
          inline FlightRuleList& setSignRule(FlightRuleList::SignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


          // tuigaiqianInfo Field Functions 
          bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
          void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
          inline string getTuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
          inline FlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


          // upgradeRule Field Functions 
          bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
          void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
          inline const FlightRuleList::UpgradeRule & getUpgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, FlightRuleList::UpgradeRule) };
          inline FlightRuleList::UpgradeRule getUpgradeRule() { DARABONBA_PTR_GET(upgradeRule_, FlightRuleList::UpgradeRule) };
          inline FlightRuleList& setUpgradeRule(const FlightRuleList::UpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
          inline FlightRuleList& setUpgradeRule(FlightRuleList::UpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


        protected:
          shared_ptr<string> baggageInfo_ {};
          shared_ptr<FlightRuleList::BaggageItem> baggageItem_ {};
          shared_ptr<FlightRuleList::ChangeRule> changeRule_ {};
          shared_ptr<FlightRuleList::ChangeRuleItem> changeRuleItem_ {};
          shared_ptr<string> extra_ {};
          shared_ptr<FlightRuleList::RefundRule> refundRule_ {};
          shared_ptr<FlightRuleList::RefundRuleItem> refundRuleItem_ {};
          shared_ptr<FlightRuleList::SignRule> signRule_ {};
          shared_ptr<string> tuigaiqianInfo_ {};
          shared_ptr<FlightRuleList::UpgradeRule> upgradeRule_ {};
        };

        class DepAirportInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DepAirportInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(city_code, cityCode_);
            DARABONBA_PTR_TO_JSON(city_name, cityName_);
            DARABONBA_PTR_TO_JSON(terminal, terminal_);
          };
          friend void from_json(const Darabonba::Json& j, DepAirportInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
            DARABONBA_PTR_FROM_JSON(city_name, cityName_);
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
        && this->airportName_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->terminal_ == nullptr; };
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


          // cityCode Field Functions 
          bool hasCityCode() const { return this->cityCode_ != nullptr;};
          void deleteCityCode() { this->cityCode_ = nullptr;};
          inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
          inline DepAirportInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline DepAirportInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


          // terminal Field Functions 
          bool hasTerminal() const { return this->terminal_ != nullptr;};
          void deleteTerminal() { this->terminal_ = nullptr;};
          inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
          inline DepAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


        protected:
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> cityCode_ {};
          shared_ptr<string> cityName_ {};
          shared_ptr<string> terminal_ {};
        };

        class CabinInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CabinInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(agent_id, agentId_);
            DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
            DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
            DARABONBA_PTR_TO_JSON(class_name, className_);
            DARABONBA_PTR_TO_JSON(class_rule, classRule_);
            DARABONBA_PTR_TO_JSON(discount, discount_);
            DARABONBA_PTR_TO_JSON(flight_rule_list, flightRuleList_);
            DARABONBA_PTR_TO_JSON(flight_rule_list_str, flightRuleListStr_);
            DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
            DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
            DARABONBA_PTR_TO_JSON(memo, memo_);
            DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
            DARABONBA_PTR_TO_JSON(order_params, orderParams_);
            DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(product_type, productType_);
            DARABONBA_PTR_TO_JSON(product_type_desc, productTypeDesc_);
            DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
            DARABONBA_PTR_TO_JSON(remained_seat_count, remainedSeatCount_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
          };
          friend void from_json(const Darabonba::Json& j, CabinInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
            DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
            DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
            DARABONBA_PTR_FROM_JSON(class_name, className_);
            DARABONBA_PTR_FROM_JSON(class_rule, classRule_);
            DARABONBA_PTR_FROM_JSON(discount, discount_);
            DARABONBA_PTR_FROM_JSON(flight_rule_list, flightRuleList_);
            DARABONBA_PTR_FROM_JSON(flight_rule_list_str, flightRuleListStr_);
            DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
            DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
            DARABONBA_PTR_FROM_JSON(memo, memo_);
            DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
            DARABONBA_PTR_FROM_JSON(order_params, orderParams_);
            DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(product_type, productType_);
            DARABONBA_PTR_FROM_JSON(product_type_desc, productTypeDesc_);
            DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
            DARABONBA_PTR_FROM_JSON(remained_seat_count, remainedSeatCount_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
          };
          CabinInfoList() = default ;
          CabinInfoList(const CabinInfoList &) = default ;
          CabinInfoList(CabinInfoList &&) = default ;
          CabinInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CabinInfoList() = default ;
          CabinInfoList& operator=(const CabinInfoList &) = default ;
          CabinInfoList& operator=(CabinInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FlightRuleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightRuleList& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_info, baggageInfo_);
              DARABONBA_PTR_TO_JSON(baggage_item, baggageItem_);
              DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
              DARABONBA_PTR_TO_JSON(change_rule_item, changeRuleItem_);
              DARABONBA_PTR_TO_JSON(extra, extra_);
              DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
              DARABONBA_PTR_TO_JSON(refund_rule_item, refundRuleItem_);
              DARABONBA_PTR_TO_JSON(sign_rule, signRule_);
              DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
              DARABONBA_PTR_TO_JSON(upgrade_rule, upgradeRule_);
            };
            friend void from_json(const Darabonba::Json& j, FlightRuleList& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_info, baggageInfo_);
              DARABONBA_PTR_FROM_JSON(baggage_item, baggageItem_);
              DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
              DARABONBA_PTR_FROM_JSON(change_rule_item, changeRuleItem_);
              DARABONBA_PTR_FROM_JSON(extra, extra_);
              DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
              DARABONBA_PTR_FROM_JSON(refund_rule_item, refundRuleItem_);
              DARABONBA_PTR_FROM_JSON(sign_rule, signRule_);
              DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
              DARABONBA_PTR_FROM_JSON(upgrade_rule, upgradeRule_);
            };
            FlightRuleList() = default ;
            FlightRuleList(const FlightRuleList &) = default ;
            FlightRuleList(FlightRuleList &&) = default ;
            FlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightRuleList() = default ;
            FlightRuleList& operator=(const FlightRuleList &) = default ;
            FlightRuleList& operator=(FlightRuleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class UpgradeRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const UpgradeRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, UpgradeRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              UpgradeRule() = default ;
              UpgradeRule(const UpgradeRule &) = default ;
              UpgradeRule(UpgradeRule &&) = default ;
              UpgradeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~UpgradeRule() = default ;
              UpgradeRule& operator=(const UpgradeRule &) = default ;
              UpgradeRule& operator=(UpgradeRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline UpgradeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<UpgradeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<UpgradeRule::Info>) };
              inline vector<UpgradeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<UpgradeRule::Info>) };
              inline UpgradeRule& setInfo(const vector<UpgradeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline UpgradeRule& setInfo(vector<UpgradeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<UpgradeRule::Info>> info_ {};
            };

            class SignRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SignRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, SignRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              SignRule() = default ;
              SignRule(const SignRule &) = default ;
              SignRule(SignRule &&) = default ;
              SignRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SignRule() = default ;
              SignRule& operator=(const SignRule &) = default ;
              SignRule& operator=(SignRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline SignRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<SignRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<SignRule::Info>) };
              inline vector<SignRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<SignRule::Info>) };
              inline SignRule& setInfo(const vector<SignRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline SignRule& setInfo(vector<SignRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<SignRule::Info>> info_ {};
            };

            class RefundRuleItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundRuleItem& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, RefundRuleItem& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              RefundRuleItem() = default ;
              RefundRuleItem(const RefundRuleItem &) = default ;
              RefundRuleItem(RefundRuleItem &&) = default ;
              RefundRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundRuleItem() = default ;
              RefundRuleItem& operator=(const RefundRuleItem &) = default ;
              RefundRuleItem& operator=(RefundRuleItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                RefundSubItems() = default ;
                RefundSubItems(const RefundSubItems &) = default ;
                RefundSubItems(RefundSubItems &&) = default ;
                RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubItems() = default ;
                RefundSubItems& operator=(const RefundSubItems &) = default ;
                RefundSubItems& operator=(RefundSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class RefundSubContents : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                    DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_TO_JSON(style, style_);
                  };
                  friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                    DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_FROM_JSON(style, style_);
                  };
                  RefundSubContents() = default ;
                  RefundSubContents(const RefundSubContents &) = default ;
                  RefundSubContents(RefundSubContents &&) = default ;
                  RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~RefundSubContents() = default ;
                  RefundSubContents& operator=(const RefundSubContents &) = default ;
                  RefundSubContents& operator=(RefundSubContents &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                  // feeDesc Field Functions 
                  bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                  void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                  inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                  inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                  // feeRange Field Functions 
                  bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                  void deleteFeeRange() { this->feeRange_ = nullptr;};
                  inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                  inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                  // style Field Functions 
                  bool hasStyle() const { return this->style_ != nullptr;};
                  void deleteStyle() { this->style_ = nullptr;};
                  inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                  inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<int32_t> style_ {};
                };

                virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // refundSubContents Field Functions 
                bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
                void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
                inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
                inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                ExtraContents() = default ;
                ExtraContents(const ExtraContents &) = default ;
                ExtraContents(ExtraContents &&) = default ;
                ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtraContents() = default ;
                ExtraContents& operator=(const ExtraContents &) = default ;
                ExtraContents& operator=(ExtraContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<RefundRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<RefundRuleItem::ExtraContents>) };
              inline vector<RefundRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<RefundRuleItem::ExtraContents>) };
              inline RefundRuleItem& setExtraContents(const vector<RefundRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline RefundRuleItem& setExtraContents(vector<RefundRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline RefundRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<RefundRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
              inline vector<RefundRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<RefundRuleItem::RefundSubItems>) };
              inline RefundRuleItem& setRefundSubItems(const vector<RefundRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline RefundRuleItem& setRefundSubItems(vector<RefundRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // subTableHead Field Functions 
              bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
              void deleteSubTableHead() { this->subTableHead_ = nullptr;};
              inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
              inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
              inline RefundRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
              inline RefundRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline RefundRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline RefundRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline RefundRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<RefundRuleItem::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<RefundRuleItem::RefundSubItems>> refundSubItems_ {};
              shared_ptr<vector<string>> subTableHead_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class RefundRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              RefundRule() = default ;
              RefundRule(const RefundRule &) = default ;
              RefundRule(RefundRule &&) = default ;
              RefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundRule() = default ;
              RefundRule& operator=(const RefundRule &) = default ;
              RefundRule& operator=(RefundRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline RefundRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<RefundRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<RefundRule::Info>) };
              inline vector<RefundRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<RefundRule::Info>) };
              inline RefundRule& setInfo(const vector<RefundRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline RefundRule& setInfo(vector<RefundRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<RefundRule::Info>> info_ {};
            };

            class ChangeRuleItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ChangeRuleItem& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, ChangeRuleItem& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(sub_table_head, subTableHead_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              ChangeRuleItem() = default ;
              ChangeRuleItem(const ChangeRuleItem &) = default ;
              ChangeRuleItem(ChangeRuleItem &&) = default ;
              ChangeRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ChangeRuleItem() = default ;
              ChangeRuleItem& operator=(const ChangeRuleItem &) = default ;
              ChangeRuleItem& operator=(ChangeRuleItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                RefundSubItems() = default ;
                RefundSubItems(const RefundSubItems &) = default ;
                RefundSubItems(RefundSubItems &&) = default ;
                RefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RefundSubItems() = default ;
                RefundSubItems& operator=(const RefundSubItems &) = default ;
                RefundSubItems& operator=(RefundSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class RefundSubContents : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const RefundSubContents& obj) { 
                    DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_TO_JSON(style, style_);
                  };
                  friend void from_json(const Darabonba::Json& j, RefundSubContents& obj) { 
                    DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
                    DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
                    DARABONBA_PTR_FROM_JSON(style, style_);
                  };
                  RefundSubContents() = default ;
                  RefundSubContents(const RefundSubContents &) = default ;
                  RefundSubContents(RefundSubContents &&) = default ;
                  RefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~RefundSubContents() = default ;
                  RefundSubContents& operator=(const RefundSubContents &) = default ;
                  RefundSubContents& operator=(RefundSubContents &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->feeDesc_ == nullptr
        && this->feeRange_ == nullptr && this->style_ == nullptr; };
                  // feeDesc Field Functions 
                  bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
                  void deleteFeeDesc() { this->feeDesc_ = nullptr;};
                  inline string getFeeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
                  inline RefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


                  // feeRange Field Functions 
                  bool hasFeeRange() const { return this->feeRange_ != nullptr;};
                  void deleteFeeRange() { this->feeRange_ = nullptr;};
                  inline string getFeeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
                  inline RefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


                  // style Field Functions 
                  bool hasStyle() const { return this->style_ != nullptr;};
                  void deleteStyle() { this->style_ = nullptr;};
                  inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                  inline RefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<int32_t> style_ {};
                };

                virtual bool empty() const override { return this->isStruct_ == nullptr
        && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline RefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline RefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // refundSubContents Field Functions 
                bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
                void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
                inline const vector<RefundSubItems::RefundSubContents> & getRefundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline vector<RefundSubItems::RefundSubContents> getRefundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<RefundSubItems::RefundSubContents>) };
                inline RefundSubItems& setRefundSubContents(const vector<RefundSubItems::RefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
                inline RefundSubItems& setRefundSubContents(vector<RefundSubItems::RefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline RefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                ExtraContents() = default ;
                ExtraContents(const ExtraContents &) = default ;
                ExtraContents(ExtraContents &&) = default ;
                ExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtraContents() = default ;
                ExtraContents& operator=(const ExtraContents &) = default ;
                ExtraContents& operator=(ExtraContents &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->subTableHead_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<ChangeRuleItem::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
              inline vector<ChangeRuleItem::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<ChangeRuleItem::ExtraContents>) };
              inline ChangeRuleItem& setExtraContents(const vector<ChangeRuleItem::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline ChangeRuleItem& setExtraContents(vector<ChangeRuleItem::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline ChangeRuleItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<ChangeRuleItem::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
              inline vector<ChangeRuleItem::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<ChangeRuleItem::RefundSubItems>) };
              inline ChangeRuleItem& setRefundSubItems(const vector<ChangeRuleItem::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline ChangeRuleItem& setRefundSubItems(vector<ChangeRuleItem::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // subTableHead Field Functions 
              bool hasSubTableHead() const { return this->subTableHead_ != nullptr;};
              void deleteSubTableHead() { this->subTableHead_ = nullptr;};
              inline const vector<string> & getSubTableHead() const { DARABONBA_PTR_GET_CONST(subTableHead_, vector<string>) };
              inline vector<string> getSubTableHead() { DARABONBA_PTR_GET(subTableHead_, vector<string>) };
              inline ChangeRuleItem& setSubTableHead(const vector<string> & subTableHead) { DARABONBA_PTR_SET_VALUE(subTableHead_, subTableHead) };
              inline ChangeRuleItem& setSubTableHead(vector<string> && subTableHead) { DARABONBA_PTR_SET_RVALUE(subTableHead_, subTableHead) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline ChangeRuleItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline ChangeRuleItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline ChangeRuleItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<ChangeRuleItem::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<ChangeRuleItem::RefundSubItems>> refundSubItems_ {};
              shared_ptr<vector<string>> subTableHead_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class ChangeRule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ChangeRule& obj) { 
                DARABONBA_PTR_TO_JSON(able, able_);
                DARABONBA_PTR_TO_JSON(info, info_);
              };
              friend void from_json(const Darabonba::Json& j, ChangeRule& obj) { 
                DARABONBA_PTR_FROM_JSON(able, able_);
                DARABONBA_PTR_FROM_JSON(info, info_);
              };
              ChangeRule() = default ;
              ChangeRule(const ChangeRule &) = default ;
              ChangeRule(ChangeRule &&) = default ;
              ChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ChangeRule() = default ;
              ChangeRule& operator=(const ChangeRule &) = default ;
              ChangeRule& operator=(ChangeRule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Info : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Info& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(cost, cost_);
                  DARABONBA_PTR_TO_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_TO_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_TO_JSON(time_type, timeType_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Info& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(cost, cost_);
                  DARABONBA_PTR_FROM_JSON(cost_percent, costPercent_);
                  DARABONBA_PTR_FROM_JSON(time_stamp, timeStamp_);
                  DARABONBA_PTR_FROM_JSON(time_type, timeType_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                Info() = default ;
                Info(const Info &) = default ;
                Info(Info &&) = default ;
                Info(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Info() = default ;
                Info& operator=(const Info &) = default ;
                Info& operator=(Info &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->content_ == nullptr
        && this->cost_ == nullptr && this->costPercent_ == nullptr && this->timeStamp_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Info& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // cost Field Functions 
                bool hasCost() const { return this->cost_ != nullptr;};
                void deleteCost() { this->cost_ = nullptr;};
                inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
                inline Info& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


                // costPercent Field Functions 
                bool hasCostPercent() const { return this->costPercent_ != nullptr;};
                void deleteCostPercent() { this->costPercent_ = nullptr;};
                inline int32_t getCostPercent() const { DARABONBA_PTR_GET_DEFAULT(costPercent_, 0) };
                inline Info& setCostPercent(int32_t costPercent) { DARABONBA_PTR_SET_VALUE(costPercent_, costPercent) };


                // timeStamp Field Functions 
                bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
                void deleteTimeStamp() { this->timeStamp_ = nullptr;};
                inline int32_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0) };
                inline Info& setTimeStamp(int32_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


                // timeType Field Functions 
                bool hasTimeType() const { return this->timeType_ != nullptr;};
                void deleteTimeType() { this->timeType_ = nullptr;};
                inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
                inline Info& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<int32_t> cost_ {};
                shared_ptr<int32_t> costPercent_ {};
                shared_ptr<int32_t> timeStamp_ {};
                shared_ptr<string> timeType_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->able_ == nullptr
        && this->info_ == nullptr; };
              // able Field Functions 
              bool hasAble() const { return this->able_ != nullptr;};
              void deleteAble() { this->able_ = nullptr;};
              inline bool getAble() const { DARABONBA_PTR_GET_DEFAULT(able_, false) };
              inline ChangeRule& setAble(bool able) { DARABONBA_PTR_SET_VALUE(able_, able) };


              // info Field Functions 
              bool hasInfo() const { return this->info_ != nullptr;};
              void deleteInfo() { this->info_ = nullptr;};
              inline const vector<ChangeRule::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<ChangeRule::Info>) };
              inline vector<ChangeRule::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<ChangeRule::Info>) };
              inline ChangeRule& setInfo(const vector<ChangeRule::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
              inline ChangeRule& setInfo(vector<ChangeRule::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            protected:
              shared_ptr<bool> able_ {};
              shared_ptr<vector<ChangeRule::Info>> info_ {};
            };

            class BaggageItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BaggageItem& obj) { 
                DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(tips, tips_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, BaggageItem& obj) { 
                DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(tips, tips_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              BaggageItem() = default ;
              BaggageItem(const BaggageItem &) = default ;
              BaggageItem(BaggageItem &&) = default ;
              BaggageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BaggageItem() = default ;
              BaggageItem& operator=(const BaggageItem &) = default ;
              BaggageItem& operator=(BaggageItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Tips : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Tips& obj) { 
                  DARABONBA_PTR_TO_JSON(logo, logo_);
                  DARABONBA_PTR_TO_JSON(tips_desc, tipsDesc_);
                  DARABONBA_PTR_TO_JSON(tips_image, tipsImage_);
                };
                friend void from_json(const Darabonba::Json& j, Tips& obj) { 
                  DARABONBA_PTR_FROM_JSON(logo, logo_);
                  DARABONBA_PTR_FROM_JSON(tips_desc, tipsDesc_);
                  DARABONBA_PTR_FROM_JSON(tips_image, tipsImage_);
                };
                Tips() = default ;
                Tips(const Tips &) = default ;
                Tips(Tips &&) = default ;
                Tips(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Tips() = default ;
                Tips& operator=(const Tips &) = default ;
                Tips& operator=(Tips &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->logo_ == nullptr
        && this->tipsDesc_ == nullptr && this->tipsImage_ == nullptr; };
                // logo Field Functions 
                bool hasLogo() const { return this->logo_ != nullptr;};
                void deleteLogo() { this->logo_ = nullptr;};
                inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
                inline Tips& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


                // tipsDesc Field Functions 
                bool hasTipsDesc() const { return this->tipsDesc_ != nullptr;};
                void deleteTipsDesc() { this->tipsDesc_ = nullptr;};
                inline string getTipsDesc() const { DARABONBA_PTR_GET_DEFAULT(tipsDesc_, "") };
                inline Tips& setTipsDesc(string tipsDesc) { DARABONBA_PTR_SET_VALUE(tipsDesc_, tipsDesc) };


                // tipsImage Field Functions 
                bool hasTipsImage() const { return this->tipsImage_ != nullptr;};
                void deleteTipsImage() { this->tipsImage_ = nullptr;};
                inline string getTipsImage() const { DARABONBA_PTR_GET_DEFAULT(tipsImage_, "") };
                inline Tips& setTipsImage(string tipsImage) { DARABONBA_PTR_SET_VALUE(tipsImage_, tipsImage) };


              protected:
                shared_ptr<string> logo_ {};
                shared_ptr<string> tipsDesc_ {};
                shared_ptr<string> tipsImage_ {};
              };

              class BaggageSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BaggageSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_TO_JSON(extra_content_visualizes, extraContentVisualizes_);
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, BaggageSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_FROM_JSON(extra_content_visualizes, extraContentVisualizes_);
                  DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_FROM_JSON(ptc, ptc_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                };
                BaggageSubItems() = default ;
                BaggageSubItems(const BaggageSubItems &) = default ;
                BaggageSubItems(BaggageSubItems &&) = default ;
                BaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BaggageSubItems() = default ;
                BaggageSubItems& operator=(const BaggageSubItems &) = default ;
                BaggageSubItems& operator=(BaggageSubItems &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class BaggageSubContentVisualizes : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_TO_JSON(description, description_);
                    DARABONBA_PTR_TO_JSON(image_d_o, imageDO_);
                    DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
                  };
                  friend void from_json(const Darabonba::Json& j, BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_FROM_JSON(description, description_);
                    DARABONBA_PTR_FROM_JSON(image_d_o, imageDO_);
                    DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
                  };
                  BaggageSubContentVisualizes() = default ;
                  BaggageSubContentVisualizes(const BaggageSubContentVisualizes &) = default ;
                  BaggageSubContentVisualizes(BaggageSubContentVisualizes &&) = default ;
                  BaggageSubContentVisualizes(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~BaggageSubContentVisualizes() = default ;
                  BaggageSubContentVisualizes& operator=(const BaggageSubContentVisualizes &) = default ;
                  BaggageSubContentVisualizes& operator=(BaggageSubContentVisualizes &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class ImageDO : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ImageDO& obj) { 
                      DARABONBA_PTR_TO_JSON(image, image_);
                      DARABONBA_PTR_TO_JSON(largest, largest_);
                      DARABONBA_PTR_TO_JSON(middle, middle_);
                      DARABONBA_PTR_TO_JSON(smallest, smallest_);
                    };
                    friend void from_json(const Darabonba::Json& j, ImageDO& obj) { 
                      DARABONBA_PTR_FROM_JSON(image, image_);
                      DARABONBA_PTR_FROM_JSON(largest, largest_);
                      DARABONBA_PTR_FROM_JSON(middle, middle_);
                      DARABONBA_PTR_FROM_JSON(smallest, smallest_);
                    };
                    ImageDO() = default ;
                    ImageDO(const ImageDO &) = default ;
                    ImageDO(ImageDO &&) = default ;
                    ImageDO(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ImageDO() = default ;
                    ImageDO& operator=(const ImageDO &) = default ;
                    ImageDO& operator=(ImageDO &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->image_ == nullptr
        && this->largest_ == nullptr && this->middle_ == nullptr && this->smallest_ == nullptr; };
                    // image Field Functions 
                    bool hasImage() const { return this->image_ != nullptr;};
                    void deleteImage() { this->image_ = nullptr;};
                    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                    inline ImageDO& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                    // largest Field Functions 
                    bool hasLargest() const { return this->largest_ != nullptr;};
                    void deleteLargest() { this->largest_ = nullptr;};
                    inline string getLargest() const { DARABONBA_PTR_GET_DEFAULT(largest_, "") };
                    inline ImageDO& setLargest(string largest) { DARABONBA_PTR_SET_VALUE(largest_, largest) };


                    // middle Field Functions 
                    bool hasMiddle() const { return this->middle_ != nullptr;};
                    void deleteMiddle() { this->middle_ = nullptr;};
                    inline string getMiddle() const { DARABONBA_PTR_GET_DEFAULT(middle_, "") };
                    inline ImageDO& setMiddle(string middle) { DARABONBA_PTR_SET_VALUE(middle_, middle) };


                    // smallest Field Functions 
                    bool hasSmallest() const { return this->smallest_ != nullptr;};
                    void deleteSmallest() { this->smallest_ = nullptr;};
                    inline string getSmallest() const { DARABONBA_PTR_GET_DEFAULT(smallest_, "") };
                    inline ImageDO& setSmallest(string smallest) { DARABONBA_PTR_SET_VALUE(smallest_, smallest) };


                  protected:
                    shared_ptr<string> image_ {};
                    shared_ptr<string> largest_ {};
                    shared_ptr<string> middle_ {};
                    shared_ptr<string> smallest_ {};
                  };

                  class Description : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Description& obj) { 
                      DARABONBA_PTR_TO_JSON(desc, desc_);
                      DARABONBA_PTR_TO_JSON(icon, icon_);
                      DARABONBA_PTR_TO_JSON(image, image_);
                      DARABONBA_PTR_TO_JSON(title, title_);
                    };
                    friend void from_json(const Darabonba::Json& j, Description& obj) { 
                      DARABONBA_PTR_FROM_JSON(desc, desc_);
                      DARABONBA_PTR_FROM_JSON(icon, icon_);
                      DARABONBA_PTR_FROM_JSON(image, image_);
                      DARABONBA_PTR_FROM_JSON(title, title_);
                    };
                    Description() = default ;
                    Description(const Description &) = default ;
                    Description(Description &&) = default ;
                    Description(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Description() = default ;
                    Description& operator=(const Description &) = default ;
                    Description& operator=(Description &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->desc_ == nullptr
        && this->icon_ == nullptr && this->image_ == nullptr && this->title_ == nullptr; };
                    // desc Field Functions 
                    bool hasDesc() const { return this->desc_ != nullptr;};
                    void deleteDesc() { this->desc_ = nullptr;};
                    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
                    inline Description& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


                    // icon Field Functions 
                    bool hasIcon() const { return this->icon_ != nullptr;};
                    void deleteIcon() { this->icon_ = nullptr;};
                    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                    inline Description& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                    // image Field Functions 
                    bool hasImage() const { return this->image_ != nullptr;};
                    void deleteImage() { this->image_ = nullptr;};
                    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
                    inline Description& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Description& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  protected:
                    shared_ptr<string> desc_ {};
                    shared_ptr<string> icon_ {};
                    shared_ptr<string> image_ {};
                    shared_ptr<string> title_ {};
                  };

                  virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->baggageSubContentType_ == nullptr && this->description_ == nullptr && this->imageDO_ == nullptr && this->isHighlight_ == nullptr && this->subTitle_ == nullptr; };
                  // baggageDesc Field Functions 
                  bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
                  void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
                  inline const vector<string> & getBaggageDesc() const { DARABONBA_PTR_GET_CONST(baggageDesc_, vector<string>) };
                  inline vector<string> getBaggageDesc() { DARABONBA_PTR_GET(baggageDesc_, vector<string>) };
                  inline BaggageSubContentVisualizes& setBaggageDesc(const vector<string> & baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };
                  inline BaggageSubContentVisualizes& setBaggageDesc(vector<string> && baggageDesc) { DARABONBA_PTR_SET_RVALUE(baggageDesc_, baggageDesc) };


                  // baggageSubContentType Field Functions 
                  bool hasBaggageSubContentType() const { return this->baggageSubContentType_ != nullptr;};
                  void deleteBaggageSubContentType() { this->baggageSubContentType_ = nullptr;};
                  inline int32_t getBaggageSubContentType() const { DARABONBA_PTR_GET_DEFAULT(baggageSubContentType_, 0) };
                  inline BaggageSubContentVisualizes& setBaggageSubContentType(int32_t baggageSubContentType) { DARABONBA_PTR_SET_VALUE(baggageSubContentType_, baggageSubContentType) };


                  // description Field Functions 
                  bool hasDescription() const { return this->description_ != nullptr;};
                  void deleteDescription() { this->description_ = nullptr;};
                  inline const BaggageSubContentVisualizes::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, BaggageSubContentVisualizes::Description) };
                  inline BaggageSubContentVisualizes::Description getDescription() { DARABONBA_PTR_GET(description_, BaggageSubContentVisualizes::Description) };
                  inline BaggageSubContentVisualizes& setDescription(const BaggageSubContentVisualizes::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
                  inline BaggageSubContentVisualizes& setDescription(BaggageSubContentVisualizes::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


                  // imageDO Field Functions 
                  bool hasImageDO() const { return this->imageDO_ != nullptr;};
                  void deleteImageDO() { this->imageDO_ = nullptr;};
                  inline const BaggageSubContentVisualizes::ImageDO & getImageDO() const { DARABONBA_PTR_GET_CONST(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                  inline BaggageSubContentVisualizes::ImageDO getImageDO() { DARABONBA_PTR_GET(imageDO_, BaggageSubContentVisualizes::ImageDO) };
                  inline BaggageSubContentVisualizes& setImageDO(const BaggageSubContentVisualizes::ImageDO & imageDO) { DARABONBA_PTR_SET_VALUE(imageDO_, imageDO) };
                  inline BaggageSubContentVisualizes& setImageDO(BaggageSubContentVisualizes::ImageDO && imageDO) { DARABONBA_PTR_SET_RVALUE(imageDO_, imageDO) };


                  // isHighlight Field Functions 
                  bool hasIsHighlight() const { return this->isHighlight_ != nullptr;};
                  void deleteIsHighlight() { this->isHighlight_ = nullptr;};
                  inline bool getIsHighlight() const { DARABONBA_PTR_GET_DEFAULT(isHighlight_, false) };
                  inline BaggageSubContentVisualizes& setIsHighlight(bool isHighlight) { DARABONBA_PTR_SET_VALUE(isHighlight_, isHighlight) };


                  // subTitle Field Functions 
                  bool hasSubTitle() const { return this->subTitle_ != nullptr;};
                  void deleteSubTitle() { this->subTitle_ = nullptr;};
                  inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
                  inline BaggageSubContentVisualizes& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


                protected:
                  shared_ptr<vector<string>> baggageDesc_ {};
                  shared_ptr<int32_t> baggageSubContentType_ {};
                  shared_ptr<BaggageSubContentVisualizes::Description> description_ {};
                  shared_ptr<BaggageSubContentVisualizes::ImageDO> imageDO_ {};
                  shared_ptr<bool> isHighlight_ {};
                  shared_ptr<string> subTitle_ {};
                };

                virtual bool empty() const override { return this->baggageSubContentVisualizes_ == nullptr
        && this->extraContentVisualizes_ == nullptr && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->title_ == nullptr; };
                // baggageSubContentVisualizes Field Functions 
                bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
                void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
                inline const vector<BaggageSubItems::BaggageSubContentVisualizes> & getBaggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline vector<BaggageSubItems::BaggageSubContentVisualizes> getBaggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(const vector<BaggageSubItems::BaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(vector<BaggageSubItems::BaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


                // extraContentVisualizes Field Functions 
                bool hasExtraContentVisualizes() const { return this->extraContentVisualizes_ != nullptr;};
                void deleteExtraContentVisualizes() { this->extraContentVisualizes_ = nullptr;};
                inline const vector<Darabonba::Json> & getExtraContentVisualizes() const { DARABONBA_PTR_GET_CONST(extraContentVisualizes_, vector<Darabonba::Json>) };
                inline vector<Darabonba::Json> getExtraContentVisualizes() { DARABONBA_PTR_GET(extraContentVisualizes_, vector<Darabonba::Json>) };
                inline BaggageSubItems& setExtraContentVisualizes(const vector<Darabonba::Json> & extraContentVisualizes) { DARABONBA_PTR_SET_VALUE(extraContentVisualizes_, extraContentVisualizes) };
                inline BaggageSubItems& setExtraContentVisualizes(vector<Darabonba::Json> && extraContentVisualizes) { DARABONBA_PTR_SET_RVALUE(extraContentVisualizes_, extraContentVisualizes) };


                // isStruct Field Functions 
                bool hasIsStruct() const { return this->isStruct_ != nullptr;};
                void deleteIsStruct() { this->isStruct_ = nullptr;};
                inline bool getIsStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
                inline BaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


                // ptc Field Functions 
                bool hasPtc() const { return this->ptc_ != nullptr;};
                void deletePtc() { this->ptc_ = nullptr;};
                inline string getPtc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
                inline BaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline BaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<vector<BaggageSubItems::BaggageSubContentVisualizes>> baggageSubContentVisualizes_ {};
                shared_ptr<vector<Darabonba::Json>> extraContentVisualizes_ {};
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->baggageSubItems_ == nullptr
        && this->index_ == nullptr && this->tableHead_ == nullptr && this->tips_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
              // baggageSubItems Field Functions 
              bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
              void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
              inline const vector<BaggageItem::BaggageSubItems> & getBaggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
              inline vector<BaggageItem::BaggageSubItems> getBaggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<BaggageItem::BaggageSubItems>) };
              inline BaggageItem& setBaggageSubItems(const vector<BaggageItem::BaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
              inline BaggageItem& setBaggageSubItems(vector<BaggageItem::BaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline BaggageItem& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline BaggageItem& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // tips Field Functions 
              bool hasTips() const { return this->tips_ != nullptr;};
              void deleteTips() { this->tips_ = nullptr;};
              inline const BaggageItem::Tips & getTips() const { DARABONBA_PTR_GET_CONST(tips_, BaggageItem::Tips) };
              inline BaggageItem::Tips getTips() { DARABONBA_PTR_GET(tips_, BaggageItem::Tips) };
              inline BaggageItem& setTips(const BaggageItem::Tips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
              inline BaggageItem& setTips(BaggageItem::Tips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline BaggageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline BaggageItem& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<BaggageItem::BaggageSubItems>> baggageSubItems_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<BaggageItem::Tips> tips_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            virtual bool empty() const override { return this->baggageInfo_ == nullptr
        && this->baggageItem_ == nullptr && this->changeRule_ == nullptr && this->changeRuleItem_ == nullptr && this->extra_ == nullptr && this->refundRule_ == nullptr
        && this->refundRuleItem_ == nullptr && this->signRule_ == nullptr && this->tuigaiqianInfo_ == nullptr && this->upgradeRule_ == nullptr; };
            // baggageInfo Field Functions 
            bool hasBaggageInfo() const { return this->baggageInfo_ != nullptr;};
            void deleteBaggageInfo() { this->baggageInfo_ = nullptr;};
            inline string getBaggageInfo() const { DARABONBA_PTR_GET_DEFAULT(baggageInfo_, "") };
            inline FlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


            // baggageItem Field Functions 
            bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
            void deleteBaggageItem() { this->baggageItem_ = nullptr;};
            inline const FlightRuleList::BaggageItem & getBaggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, FlightRuleList::BaggageItem) };
            inline FlightRuleList::BaggageItem getBaggageItem() { DARABONBA_PTR_GET(baggageItem_, FlightRuleList::BaggageItem) };
            inline FlightRuleList& setBaggageItem(const FlightRuleList::BaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
            inline FlightRuleList& setBaggageItem(FlightRuleList::BaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


            // changeRule Field Functions 
            bool hasChangeRule() const { return this->changeRule_ != nullptr;};
            void deleteChangeRule() { this->changeRule_ = nullptr;};
            inline const FlightRuleList::ChangeRule & getChangeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, FlightRuleList::ChangeRule) };
            inline FlightRuleList::ChangeRule getChangeRule() { DARABONBA_PTR_GET(changeRule_, FlightRuleList::ChangeRule) };
            inline FlightRuleList& setChangeRule(const FlightRuleList::ChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
            inline FlightRuleList& setChangeRule(FlightRuleList::ChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


            // changeRuleItem Field Functions 
            bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
            void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
            inline const FlightRuleList::ChangeRuleItem & getChangeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, FlightRuleList::ChangeRuleItem) };
            inline FlightRuleList::ChangeRuleItem getChangeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, FlightRuleList::ChangeRuleItem) };
            inline FlightRuleList& setChangeRuleItem(const FlightRuleList::ChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
            inline FlightRuleList& setChangeRuleItem(FlightRuleList::ChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


            // extra Field Functions 
            bool hasExtra() const { return this->extra_ != nullptr;};
            void deleteExtra() { this->extra_ = nullptr;};
            inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
            inline FlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


            // refundRule Field Functions 
            bool hasRefundRule() const { return this->refundRule_ != nullptr;};
            void deleteRefundRule() { this->refundRule_ = nullptr;};
            inline const FlightRuleList::RefundRule & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, FlightRuleList::RefundRule) };
            inline FlightRuleList::RefundRule getRefundRule() { DARABONBA_PTR_GET(refundRule_, FlightRuleList::RefundRule) };
            inline FlightRuleList& setRefundRule(const FlightRuleList::RefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
            inline FlightRuleList& setRefundRule(FlightRuleList::RefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


            // refundRuleItem Field Functions 
            bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
            void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
            inline const FlightRuleList::RefundRuleItem & getRefundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, FlightRuleList::RefundRuleItem) };
            inline FlightRuleList::RefundRuleItem getRefundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, FlightRuleList::RefundRuleItem) };
            inline FlightRuleList& setRefundRuleItem(const FlightRuleList::RefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
            inline FlightRuleList& setRefundRuleItem(FlightRuleList::RefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


            // signRule Field Functions 
            bool hasSignRule() const { return this->signRule_ != nullptr;};
            void deleteSignRule() { this->signRule_ = nullptr;};
            inline const FlightRuleList::SignRule & getSignRule() const { DARABONBA_PTR_GET_CONST(signRule_, FlightRuleList::SignRule) };
            inline FlightRuleList::SignRule getSignRule() { DARABONBA_PTR_GET(signRule_, FlightRuleList::SignRule) };
            inline FlightRuleList& setSignRule(const FlightRuleList::SignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
            inline FlightRuleList& setSignRule(FlightRuleList::SignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


            // tuigaiqianInfo Field Functions 
            bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
            void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
            inline string getTuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
            inline FlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


            // upgradeRule Field Functions 
            bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
            void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
            inline const FlightRuleList::UpgradeRule & getUpgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, FlightRuleList::UpgradeRule) };
            inline FlightRuleList::UpgradeRule getUpgradeRule() { DARABONBA_PTR_GET(upgradeRule_, FlightRuleList::UpgradeRule) };
            inline FlightRuleList& setUpgradeRule(const FlightRuleList::UpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
            inline FlightRuleList& setUpgradeRule(FlightRuleList::UpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


          protected:
            shared_ptr<string> baggageInfo_ {};
            shared_ptr<FlightRuleList::BaggageItem> baggageItem_ {};
            shared_ptr<FlightRuleList::ChangeRule> changeRule_ {};
            shared_ptr<FlightRuleList::ChangeRuleItem> changeRuleItem_ {};
            shared_ptr<string> extra_ {};
            shared_ptr<FlightRuleList::RefundRule> refundRule_ {};
            shared_ptr<FlightRuleList::RefundRuleItem> refundRuleItem_ {};
            shared_ptr<FlightRuleList::SignRule> signRule_ {};
            shared_ptr<string> tuigaiqianInfo_ {};
            shared_ptr<FlightRuleList::UpgradeRule> upgradeRule_ {};
          };

          virtual bool empty() const override { return this->agentId_ == nullptr
        && this->basicCabinPrice_ == nullptr && this->buildPrice_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr
        && this->childCabin_ == nullptr && this->className_ == nullptr && this->classRule_ == nullptr && this->discount_ == nullptr && this->flightRuleList_ == nullptr
        && this->flightRuleListStr_ == nullptr && this->invoiceType_ == nullptr && this->isProtocol_ == nullptr && this->memo_ == nullptr && this->oilPrice_ == nullptr
        && this->orderParams_ == nullptr && this->otaItemId_ == nullptr && this->price_ == nullptr && this->productType_ == nullptr && this->productTypeDesc_ == nullptr
        && this->promotionPrice_ == nullptr && this->remainedSeatCount_ == nullptr && this->ticketPrice_ == nullptr && this->totalPrice_ == nullptr; };
          // agentId Field Functions 
          bool hasAgentId() const { return this->agentId_ != nullptr;};
          void deleteAgentId() { this->agentId_ = nullptr;};
          inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
          inline CabinInfoList& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


          // basicCabinPrice Field Functions 
          bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
          void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
          inline int32_t getBasicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
          inline CabinInfoList& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


          // buildPrice Field Functions 
          bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
          void deleteBuildPrice() { this->buildPrice_ = nullptr;};
          inline int32_t getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
          inline CabinInfoList& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline CabinInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline CabinInfoList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // cabinClassName Field Functions 
          bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
          void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
          inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
          inline CabinInfoList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


          // childCabin Field Functions 
          bool hasChildCabin() const { return this->childCabin_ != nullptr;};
          void deleteChildCabin() { this->childCabin_ = nullptr;};
          inline string getChildCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
          inline CabinInfoList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


          // className Field Functions 
          bool hasClassName() const { return this->className_ != nullptr;};
          void deleteClassName() { this->className_ = nullptr;};
          inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
          inline CabinInfoList& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


          // classRule Field Functions 
          bool hasClassRule() const { return this->classRule_ != nullptr;};
          void deleteClassRule() { this->classRule_ = nullptr;};
          inline string getClassRule() const { DARABONBA_PTR_GET_DEFAULT(classRule_, "") };
          inline CabinInfoList& setClassRule(string classRule) { DARABONBA_PTR_SET_VALUE(classRule_, classRule) };


          // discount Field Functions 
          bool hasDiscount() const { return this->discount_ != nullptr;};
          void deleteDiscount() { this->discount_ = nullptr;};
          inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
          inline CabinInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


          // flightRuleList Field Functions 
          bool hasFlightRuleList() const { return this->flightRuleList_ != nullptr;};
          void deleteFlightRuleList() { this->flightRuleList_ = nullptr;};
          inline const vector<CabinInfoList::FlightRuleList> & getFlightRuleList() const { DARABONBA_PTR_GET_CONST(flightRuleList_, vector<CabinInfoList::FlightRuleList>) };
          inline vector<CabinInfoList::FlightRuleList> getFlightRuleList() { DARABONBA_PTR_GET(flightRuleList_, vector<CabinInfoList::FlightRuleList>) };
          inline CabinInfoList& setFlightRuleList(const vector<CabinInfoList::FlightRuleList> & flightRuleList) { DARABONBA_PTR_SET_VALUE(flightRuleList_, flightRuleList) };
          inline CabinInfoList& setFlightRuleList(vector<CabinInfoList::FlightRuleList> && flightRuleList) { DARABONBA_PTR_SET_RVALUE(flightRuleList_, flightRuleList) };


          // flightRuleListStr Field Functions 
          bool hasFlightRuleListStr() const { return this->flightRuleListStr_ != nullptr;};
          void deleteFlightRuleListStr() { this->flightRuleListStr_ = nullptr;};
          inline string getFlightRuleListStr() const { DARABONBA_PTR_GET_DEFAULT(flightRuleListStr_, "") };
          inline CabinInfoList& setFlightRuleListStr(string flightRuleListStr) { DARABONBA_PTR_SET_VALUE(flightRuleListStr_, flightRuleListStr) };


          // invoiceType Field Functions 
          bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
          void deleteInvoiceType() { this->invoiceType_ = nullptr;};
          inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
          inline CabinInfoList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


          // isProtocol Field Functions 
          bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
          void deleteIsProtocol() { this->isProtocol_ = nullptr;};
          inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
          inline CabinInfoList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


          // memo Field Functions 
          bool hasMemo() const { return this->memo_ != nullptr;};
          void deleteMemo() { this->memo_ = nullptr;};
          inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
          inline CabinInfoList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


          // oilPrice Field Functions 
          bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
          void deleteOilPrice() { this->oilPrice_ = nullptr;};
          inline int32_t getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
          inline CabinInfoList& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


          // orderParams Field Functions 
          bool hasOrderParams() const { return this->orderParams_ != nullptr;};
          void deleteOrderParams() { this->orderParams_ = nullptr;};
          inline string getOrderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
          inline CabinInfoList& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


          // otaItemId Field Functions 
          bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
          void deleteOtaItemId() { this->otaItemId_ = nullptr;};
          inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
          inline CabinInfoList& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline int32_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0) };
          inline CabinInfoList& setPrice(int32_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
          inline CabinInfoList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // productTypeDesc Field Functions 
          bool hasProductTypeDesc() const { return this->productTypeDesc_ != nullptr;};
          void deleteProductTypeDesc() { this->productTypeDesc_ = nullptr;};
          inline string getProductTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(productTypeDesc_, "") };
          inline CabinInfoList& setProductTypeDesc(string productTypeDesc) { DARABONBA_PTR_SET_VALUE(productTypeDesc_, productTypeDesc) };


          // promotionPrice Field Functions 
          bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
          void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
          inline string getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, "") };
          inline CabinInfoList& setPromotionPrice(string promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


          // remainedSeatCount Field Functions 
          bool hasRemainedSeatCount() const { return this->remainedSeatCount_ != nullptr;};
          void deleteRemainedSeatCount() { this->remainedSeatCount_ = nullptr;};
          inline string getRemainedSeatCount() const { DARABONBA_PTR_GET_DEFAULT(remainedSeatCount_, "") };
          inline CabinInfoList& setRemainedSeatCount(string remainedSeatCount) { DARABONBA_PTR_SET_VALUE(remainedSeatCount_, remainedSeatCount) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
          inline CabinInfoList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


          // totalPrice Field Functions 
          bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
          void deleteTotalPrice() { this->totalPrice_ = nullptr;};
          inline int32_t getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0) };
          inline CabinInfoList& setTotalPrice(int32_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


        protected:
          shared_ptr<int64_t> agentId_ {};
          shared_ptr<int32_t> basicCabinPrice_ {};
          shared_ptr<int32_t> buildPrice_ {};
          shared_ptr<string> cabin_ {};
          shared_ptr<string> cabinClass_ {};
          shared_ptr<string> cabinClassName_ {};
          shared_ptr<string> childCabin_ {};
          shared_ptr<string> className_ {};
          shared_ptr<string> classRule_ {};
          shared_ptr<string> discount_ {};
          shared_ptr<vector<CabinInfoList::FlightRuleList>> flightRuleList_ {};
          shared_ptr<string> flightRuleListStr_ {};
          shared_ptr<int32_t> invoiceType_ {};
          shared_ptr<bool> isProtocol_ {};
          shared_ptr<string> memo_ {};
          shared_ptr<int32_t> oilPrice_ {};
          shared_ptr<string> orderParams_ {};
          shared_ptr<string> otaItemId_ {};
          shared_ptr<int32_t> price_ {};
          shared_ptr<int64_t> productType_ {};
          shared_ptr<string> productTypeDesc_ {};
          shared_ptr<string> promotionPrice_ {};
          shared_ptr<string> remainedSeatCount_ {};
          shared_ptr<int32_t> ticketPrice_ {};
          shared_ptr<int32_t> totalPrice_ {};
        };

        class ArrAirportInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ArrAirportInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(city_code, cityCode_);
            DARABONBA_PTR_TO_JSON(city_name, cityName_);
            DARABONBA_PTR_TO_JSON(terminal, terminal_);
          };
          friend void from_json(const Darabonba::Json& j, ArrAirportInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
            DARABONBA_PTR_FROM_JSON(city_name, cityName_);
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
        && this->airportName_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->terminal_ == nullptr; };
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


          // cityCode Field Functions 
          bool hasCityCode() const { return this->cityCode_ != nullptr;};
          void deleteCityCode() { this->cityCode_ = nullptr;};
          inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
          inline ArrAirportInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline ArrAirportInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


          // terminal Field Functions 
          bool hasTerminal() const { return this->terminal_ != nullptr;};
          void deleteTerminal() { this->terminal_ = nullptr;};
          inline string getTerminal() const { DARABONBA_PTR_GET_DEFAULT(terminal_, "") };
          inline ArrAirportInfo& setTerminal(string terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };


        protected:
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> cityCode_ {};
          shared_ptr<string> cityName_ {};
          shared_ptr<string> terminal_ {};
        };

        class AirlineInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AirlineInfo& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(airline_simple_name, airlineSimpleName_);
          };
          friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(airline_simple_name, airlineSimpleName_);
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
        && this->airlineName_ == nullptr && this->airlineSimpleName_ == nullptr; };
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


          // airlineSimpleName Field Functions 
          bool hasAirlineSimpleName() const { return this->airlineSimpleName_ != nullptr;};
          void deleteAirlineSimpleName() { this->airlineSimpleName_ = nullptr;};
          inline string getAirlineSimpleName() const { DARABONBA_PTR_GET_DEFAULT(airlineSimpleName_, "") };
          inline AirlineInfo& setAirlineSimpleName(string airlineSimpleName) { DARABONBA_PTR_SET_VALUE(airlineSimpleName_, airlineSimpleName) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> airlineSimpleName_ {};
        };

        virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrDate_ == nullptr && this->basicCabinPrice_ == nullptr && this->buildPrice_ == nullptr && this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->cabinInfoList_ == nullptr && this->carrierAirline_ == nullptr && this->carrierNo_ == nullptr && this->classRule_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->discount_ == nullptr && this->flightNo_ == nullptr
        && this->flightRuleList_ == nullptr && this->flightRuleListStr_ == nullptr && this->flightSize_ == nullptr && this->flightType_ == nullptr && this->invoiceType_ == nullptr
        && this->isProtocol_ == nullptr && this->isShare_ == nullptr && this->isStop_ == nullptr && this->isTransfer_ == nullptr && this->mealDesc_ == nullptr
        && this->memo_ == nullptr && this->oilPrice_ == nullptr && this->otaItemId_ == nullptr && this->price_ == nullptr && this->productType_ == nullptr
        && this->productTypeDesc_ == nullptr && this->promotionPrice_ == nullptr && this->remainedSeatCount_ == nullptr && this->secretParams_ == nullptr && this->segmentNumber_ == nullptr
        && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopDepTime_ == nullptr && this->ticketPrice_ == nullptr && this->totalPrice_ == nullptr
        && this->transferInfo_ == nullptr && this->tripType_ == nullptr; };
        // airlineInfo Field Functions 
        bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
        void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
        inline const FlightList::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, FlightList::AirlineInfo) };
        inline FlightList::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, FlightList::AirlineInfo) };
        inline FlightList& setAirlineInfo(const FlightList::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
        inline FlightList& setAirlineInfo(FlightList::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


        // arrAirportInfo Field Functions 
        bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
        void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
        inline const FlightList::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, FlightList::ArrAirportInfo) };
        inline FlightList::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, FlightList::ArrAirportInfo) };
        inline FlightList& setArrAirportInfo(const FlightList::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
        inline FlightList& setArrAirportInfo(FlightList::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline FlightList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // basicCabinPrice Field Functions 
        bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
        void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
        inline int32_t getBasicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
        inline FlightList& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


        // buildPrice Field Functions 
        bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
        void deleteBuildPrice() { this->buildPrice_ = nullptr;};
        inline int32_t getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
        inline FlightList& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline FlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline FlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinInfoList Field Functions 
        bool hasCabinInfoList() const { return this->cabinInfoList_ != nullptr;};
        void deleteCabinInfoList() { this->cabinInfoList_ = nullptr;};
        inline const vector<FlightList::CabinInfoList> & getCabinInfoList() const { DARABONBA_PTR_GET_CONST(cabinInfoList_, vector<FlightList::CabinInfoList>) };
        inline vector<FlightList::CabinInfoList> getCabinInfoList() { DARABONBA_PTR_GET(cabinInfoList_, vector<FlightList::CabinInfoList>) };
        inline FlightList& setCabinInfoList(const vector<FlightList::CabinInfoList> & cabinInfoList) { DARABONBA_PTR_SET_VALUE(cabinInfoList_, cabinInfoList) };
        inline FlightList& setCabinInfoList(vector<FlightList::CabinInfoList> && cabinInfoList) { DARABONBA_PTR_SET_RVALUE(cabinInfoList_, cabinInfoList) };


        // carrierAirline Field Functions 
        bool hasCarrierAirline() const { return this->carrierAirline_ != nullptr;};
        void deleteCarrierAirline() { this->carrierAirline_ = nullptr;};
        inline string getCarrierAirline() const { DARABONBA_PTR_GET_DEFAULT(carrierAirline_, "") };
        inline FlightList& setCarrierAirline(string carrierAirline) { DARABONBA_PTR_SET_VALUE(carrierAirline_, carrierAirline) };


        // carrierNo Field Functions 
        bool hasCarrierNo() const { return this->carrierNo_ != nullptr;};
        void deleteCarrierNo() { this->carrierNo_ = nullptr;};
        inline string getCarrierNo() const { DARABONBA_PTR_GET_DEFAULT(carrierNo_, "") };
        inline FlightList& setCarrierNo(string carrierNo) { DARABONBA_PTR_SET_VALUE(carrierNo_, carrierNo) };


        // classRule Field Functions 
        bool hasClassRule() const { return this->classRule_ != nullptr;};
        void deleteClassRule() { this->classRule_ = nullptr;};
        inline string getClassRule() const { DARABONBA_PTR_GET_DEFAULT(classRule_, "") };
        inline FlightList& setClassRule(string classRule) { DARABONBA_PTR_SET_VALUE(classRule_, classRule) };


        // depAirportInfo Field Functions 
        bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
        void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
        inline const FlightList::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, FlightList::DepAirportInfo) };
        inline FlightList::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, FlightList::DepAirportInfo) };
        inline FlightList& setDepAirportInfo(const FlightList::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
        inline FlightList& setDepAirportInfo(FlightList::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline FlightList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline int32_t getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0) };
        inline FlightList& setDiscount(int32_t discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightRuleList Field Functions 
        bool hasFlightRuleList() const { return this->flightRuleList_ != nullptr;};
        void deleteFlightRuleList() { this->flightRuleList_ = nullptr;};
        inline const vector<FlightList::FlightRuleList> & getFlightRuleList() const { DARABONBA_PTR_GET_CONST(flightRuleList_, vector<FlightList::FlightRuleList>) };
        inline vector<FlightList::FlightRuleList> getFlightRuleList() { DARABONBA_PTR_GET(flightRuleList_, vector<FlightList::FlightRuleList>) };
        inline FlightList& setFlightRuleList(const vector<FlightList::FlightRuleList> & flightRuleList) { DARABONBA_PTR_SET_VALUE(flightRuleList_, flightRuleList) };
        inline FlightList& setFlightRuleList(vector<FlightList::FlightRuleList> && flightRuleList) { DARABONBA_PTR_SET_RVALUE(flightRuleList_, flightRuleList) };


        // flightRuleListStr Field Functions 
        bool hasFlightRuleListStr() const { return this->flightRuleListStr_ != nullptr;};
        void deleteFlightRuleListStr() { this->flightRuleListStr_ = nullptr;};
        inline string getFlightRuleListStr() const { DARABONBA_PTR_GET_DEFAULT(flightRuleListStr_, "") };
        inline FlightList& setFlightRuleListStr(string flightRuleListStr) { DARABONBA_PTR_SET_VALUE(flightRuleListStr_, flightRuleListStr) };


        // flightSize Field Functions 
        bool hasFlightSize() const { return this->flightSize_ != nullptr;};
        void deleteFlightSize() { this->flightSize_ = nullptr;};
        inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
        inline FlightList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline FlightList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // invoiceType Field Functions 
        bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
        void deleteInvoiceType() { this->invoiceType_ = nullptr;};
        inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
        inline FlightList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        // isProtocol Field Functions 
        bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
        void deleteIsProtocol() { this->isProtocol_ = nullptr;};
        inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
        inline FlightList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


        // isShare Field Functions 
        bool hasIsShare() const { return this->isShare_ != nullptr;};
        void deleteIsShare() { this->isShare_ = nullptr;};
        inline bool getIsShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
        inline FlightList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


        // isStop Field Functions 
        bool hasIsStop() const { return this->isStop_ != nullptr;};
        void deleteIsStop() { this->isStop_ = nullptr;};
        inline bool getIsStop() const { DARABONBA_PTR_GET_DEFAULT(isStop_, false) };
        inline FlightList& setIsStop(bool isStop) { DARABONBA_PTR_SET_VALUE(isStop_, isStop) };


        // isTransfer Field Functions 
        bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
        void deleteIsTransfer() { this->isTransfer_ = nullptr;};
        inline bool getIsTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, false) };
        inline FlightList& setIsTransfer(bool isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline FlightList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline FlightList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // oilPrice Field Functions 
        bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
        void deleteOilPrice() { this->oilPrice_ = nullptr;};
        inline int32_t getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
        inline FlightList& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


        // otaItemId Field Functions 
        bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
        void deleteOtaItemId() { this->otaItemId_ = nullptr;};
        inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
        inline FlightList& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int32_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0) };
        inline FlightList& setPrice(int32_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
        inline FlightList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // productTypeDesc Field Functions 
        bool hasProductTypeDesc() const { return this->productTypeDesc_ != nullptr;};
        void deleteProductTypeDesc() { this->productTypeDesc_ = nullptr;};
        inline string getProductTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(productTypeDesc_, "") };
        inline FlightList& setProductTypeDesc(string productTypeDesc) { DARABONBA_PTR_SET_VALUE(productTypeDesc_, productTypeDesc) };


        // promotionPrice Field Functions 
        bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
        void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
        inline string getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, "") };
        inline FlightList& setPromotionPrice(string promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


        // remainedSeatCount Field Functions 
        bool hasRemainedSeatCount() const { return this->remainedSeatCount_ != nullptr;};
        void deleteRemainedSeatCount() { this->remainedSeatCount_ = nullptr;};
        inline string getRemainedSeatCount() const { DARABONBA_PTR_GET_DEFAULT(remainedSeatCount_, "") };
        inline FlightList& setRemainedSeatCount(string remainedSeatCount) { DARABONBA_PTR_SET_VALUE(remainedSeatCount_, remainedSeatCount) };


        // secretParams Field Functions 
        bool hasSecretParams() const { return this->secretParams_ != nullptr;};
        void deleteSecretParams() { this->secretParams_ = nullptr;};
        inline string getSecretParams() const { DARABONBA_PTR_GET_DEFAULT(secretParams_, "") };
        inline FlightList& setSecretParams(string secretParams) { DARABONBA_PTR_SET_VALUE(secretParams_, secretParams) };


        // segmentNumber Field Functions 
        bool hasSegmentNumber() const { return this->segmentNumber_ != nullptr;};
        void deleteSegmentNumber() { this->segmentNumber_ = nullptr;};
        inline string getSegmentNumber() const { DARABONBA_PTR_GET_DEFAULT(segmentNumber_, "") };
        inline FlightList& setSegmentNumber(string segmentNumber) { DARABONBA_PTR_SET_VALUE(segmentNumber_, segmentNumber) };


        // stopArrTime Field Functions 
        bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
        void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
        inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
        inline FlightList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
        inline FlightList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


        // stopDepTime Field Functions 
        bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
        void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
        inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
        inline FlightList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
        inline FlightList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // totalPrice Field Functions 
        bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
        void deleteTotalPrice() { this->totalPrice_ = nullptr;};
        inline string getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, "") };
        inline FlightList& setTotalPrice(string totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


        // transferInfo Field Functions 
        bool hasTransferInfo() const { return this->transferInfo_ != nullptr;};
        void deleteTransferInfo() { this->transferInfo_ = nullptr;};
        inline const FlightList::TransferInfo & getTransferInfo() const { DARABONBA_PTR_GET_CONST(transferInfo_, FlightList::TransferInfo) };
        inline FlightList::TransferInfo getTransferInfo() { DARABONBA_PTR_GET(transferInfo_, FlightList::TransferInfo) };
        inline FlightList& setTransferInfo(const FlightList::TransferInfo & transferInfo) { DARABONBA_PTR_SET_VALUE(transferInfo_, transferInfo) };
        inline FlightList& setTransferInfo(FlightList::TransferInfo && transferInfo) { DARABONBA_PTR_SET_RVALUE(transferInfo_, transferInfo) };


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
        inline FlightList& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


      protected:
        shared_ptr<FlightList::AirlineInfo> airlineInfo_ {};
        shared_ptr<FlightList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<int32_t> basicCabinPrice_ {};
        shared_ptr<int32_t> buildPrice_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<vector<FlightList::CabinInfoList>> cabinInfoList_ {};
        shared_ptr<string> carrierAirline_ {};
        shared_ptr<string> carrierNo_ {};
        shared_ptr<string> classRule_ {};
        shared_ptr<FlightList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<int32_t> discount_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<vector<FlightList::FlightRuleList>> flightRuleList_ {};
        shared_ptr<string> flightRuleListStr_ {};
        shared_ptr<string> flightSize_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<int32_t> invoiceType_ {};
        shared_ptr<bool> isProtocol_ {};
        shared_ptr<bool> isShare_ {};
        shared_ptr<bool> isStop_ {};
        shared_ptr<bool> isTransfer_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<int32_t> oilPrice_ {};
        shared_ptr<string> otaItemId_ {};
        shared_ptr<int32_t> price_ {};
        shared_ptr<int64_t> productType_ {};
        shared_ptr<string> productTypeDesc_ {};
        shared_ptr<string> promotionPrice_ {};
        shared_ptr<string> remainedSeatCount_ {};
        shared_ptr<string> secretParams_ {};
        shared_ptr<string> segmentNumber_ {};
        shared_ptr<string> stopArrTime_ {};
        shared_ptr<string> stopCity_ {};
        shared_ptr<string> stopDepTime_ {};
        shared_ptr<int32_t> ticketPrice_ {};
        shared_ptr<string> totalPrice_ {};
        shared_ptr<FlightList::TransferInfo> transferInfo_ {};
        shared_ptr<int32_t> tripType_ {};
      };

      virtual bool empty() const override { return this->flightList_ == nullptr
        && this->isReplacePnr_ == nullptr; };
      // flightList Field Functions 
      bool hasFlightList() const { return this->flightList_ != nullptr;};
      void deleteFlightList() { this->flightList_ = nullptr;};
      inline const vector<Module::FlightList> & getFlightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Module::FlightList>) };
      inline vector<Module::FlightList> getFlightList() { DARABONBA_PTR_GET(flightList_, vector<Module::FlightList>) };
      inline Module& setFlightList(const vector<Module::FlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
      inline Module& setFlightList(vector<Module::FlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


      // isReplacePnr Field Functions 
      bool hasIsReplacePnr() const { return this->isReplacePnr_ != nullptr;};
      void deleteIsReplacePnr() { this->isReplacePnr_ = nullptr;};
      inline bool getIsReplacePnr() const { DARABONBA_PTR_GET_DEFAULT(isReplacePnr_, false) };
      inline Module& setIsReplacePnr(bool isReplacePnr) { DARABONBA_PTR_SET_VALUE(isReplacePnr_, isReplacePnr) };


    protected:
      shared_ptr<vector<Module::FlightList>> flightList_ {};
      shared_ptr<bool> isReplacePnr_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightSearchListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightSearchListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightSearchListResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightSearchListResponseBody::Module) };
    inline FlightSearchListResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightSearchListResponseBody::Module) };
    inline FlightSearchListResponseBody& setModule(const FlightSearchListResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightSearchListResponseBody& setModule(FlightSearchListResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightSearchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightSearchListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightSearchListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightSearchListResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
