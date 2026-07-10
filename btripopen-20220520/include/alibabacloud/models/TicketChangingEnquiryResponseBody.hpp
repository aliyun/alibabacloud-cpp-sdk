// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODY_HPP_
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
  class TicketChangingEnquiryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TicketChangingEnquiryResponseBody() = default ;
    TicketChangingEnquiryResponseBody(const TicketChangingEnquiryResponseBody &) = default ;
    TicketChangingEnquiryResponseBody(TicketChangingEnquiryResponseBody &&) = default ;
    TicketChangingEnquiryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBody() = default ;
    TicketChangingEnquiryResponseBody& operator=(const TicketChangingEnquiryResponseBody &) = default ;
    TicketChangingEnquiryResponseBody& operator=(TicketChangingEnquiryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
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
      class FlightInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_TO_JSON(cabin_list, cabinList_);
          DARABONBA_PTR_TO_JSON(carrier_airline, carrierAirline_);
          DARABONBA_PTR_TO_JSON(carrier_no, carrierNo_);
          DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(is_share, isShare_);
          DARABONBA_PTR_TO_JSON(lowest_cabin, lowestCabin_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_class, lowestCabinClass_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_desc, lowestCabinDesc_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_num, lowestCabinNum_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_price, lowestCabinPrice_);
          DARABONBA_PTR_TO_JSON(modify_flight_arr_time, modifyFlightArrTime_);
          DARABONBA_PTR_TO_JSON(modify_flight_dep_date, modifyFlightDepDate_);
          DARABONBA_PTR_TO_JSON(modify_flight_dep_time, modifyFlightDepTime_);
          DARABONBA_PTR_TO_JSON(session_id, sessionId_);
        };
        friend void from_json(const Darabonba::Json& j, FlightInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(cabin_list, cabinList_);
          DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
          DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(is_share, isShare_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin, lowestCabin_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_class, lowestCabinClass_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_desc, lowestCabinDesc_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_num, lowestCabinNum_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_price, lowestCabinPrice_);
          DARABONBA_PTR_FROM_JSON(modify_flight_arr_time, modifyFlightArrTime_);
          DARABONBA_PTR_FROM_JSON(modify_flight_dep_date, modifyFlightDepDate_);
          DARABONBA_PTR_FROM_JSON(modify_flight_dep_time, modifyFlightDepTime_);
          DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
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
        class LowestCabinPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LowestCabinPrice& obj) { 
            DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
            DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
          };
          friend void from_json(const Darabonba::Json& j, LowestCabinPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
            DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
          };
          LowestCabinPrice() = default ;
          LowestCabinPrice(const LowestCabinPrice &) = default ;
          LowestCabinPrice(LowestCabinPrice &&) = default ;
          LowestCabinPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LowestCabinPrice() = default ;
          LowestCabinPrice& operator=(const LowestCabinPrice &) = default ;
          LowestCabinPrice& operator=(LowestCabinPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->passengerType_ == nullptr
        && this->ticketPrice_ == nullptr && this->upgradeFee_ == nullptr && this->upgradePrice_ == nullptr; };
          // passengerType Field Functions 
          bool hasPassengerType() const { return this->passengerType_ != nullptr;};
          void deletePassengerType() { this->passengerType_ = nullptr;};
          inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
          inline LowestCabinPrice& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
          inline LowestCabinPrice& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


          // upgradeFee Field Functions 
          bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
          void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
          inline int32_t getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0) };
          inline LowestCabinPrice& setUpgradeFee(int32_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


          // upgradePrice Field Functions 
          bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
          void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
          inline int32_t getUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0) };
          inline LowestCabinPrice& setUpgradePrice(int32_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


        protected:
          shared_ptr<int32_t> passengerType_ {};
          shared_ptr<int32_t> ticketPrice_ {};
          shared_ptr<int32_t> upgradeFee_ {};
          shared_ptr<int32_t> upgradePrice_ {};
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

        class CabinList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CabinList& obj) { 
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(cabin_desc, cabinDesc_);
            DARABONBA_PTR_TO_JSON(cabin_discount, cabinDiscount_);
            DARABONBA_PTR_TO_JSON(change_ota_item_rule_rq, changeOtaItemRuleRq_);
            DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
            DARABONBA_PTR_TO_JSON(left_num, leftNum_);
            DARABONBA_PTR_TO_JSON(modify_price_list, modifyPriceList_);
            DARABONBA_PTR_TO_JSON(ota_itemid, otaItemid_);
          };
          friend void from_json(const Darabonba::Json& j, CabinList& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(cabin_desc, cabinDesc_);
            DARABONBA_PTR_FROM_JSON(cabin_discount, cabinDiscount_);
            DARABONBA_PTR_FROM_JSON(change_ota_item_rule_rq, changeOtaItemRuleRq_);
            DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
            DARABONBA_PTR_FROM_JSON(left_num, leftNum_);
            DARABONBA_PTR_FROM_JSON(modify_price_list, modifyPriceList_);
            DARABONBA_PTR_FROM_JSON(ota_itemid, otaItemid_);
          };
          CabinList() = default ;
          CabinList(const CabinList &) = default ;
          CabinList(CabinList &&) = default ;
          CabinList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CabinList() = default ;
          CabinList& operator=(const CabinList &) = default ;
          CabinList& operator=(CabinList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ModifyPriceList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModifyPriceList& obj) { 
              DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
              DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
              DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
            };
            friend void from_json(const Darabonba::Json& j, ModifyPriceList& obj) { 
              DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
              DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
              DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
            };
            ModifyPriceList() = default ;
            ModifyPriceList(const ModifyPriceList &) = default ;
            ModifyPriceList(ModifyPriceList &&) = default ;
            ModifyPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModifyPriceList() = default ;
            ModifyPriceList& operator=(const ModifyPriceList &) = default ;
            ModifyPriceList& operator=(ModifyPriceList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->passengerType_ == nullptr
        && this->ticketPrice_ == nullptr && this->upgradeFee_ == nullptr && this->upgradePrice_ == nullptr; };
            // passengerType Field Functions 
            bool hasPassengerType() const { return this->passengerType_ != nullptr;};
            void deletePassengerType() { this->passengerType_ = nullptr;};
            inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
            inline ModifyPriceList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


            // ticketPrice Field Functions 
            bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
            void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
            inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
            inline ModifyPriceList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


            // upgradeFee Field Functions 
            bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
            void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
            inline int32_t getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0) };
            inline ModifyPriceList& setUpgradeFee(int32_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


            // upgradePrice Field Functions 
            bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
            void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
            inline int32_t getUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0) };
            inline ModifyPriceList& setUpgradePrice(int32_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


          protected:
            shared_ptr<int32_t> passengerType_ {};
            shared_ptr<int32_t> ticketPrice_ {};
            shared_ptr<int32_t> upgradeFee_ {};
            shared_ptr<int32_t> upgradePrice_ {};
          };

          class ChangeOtaItemRuleRq : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChangeOtaItemRuleRq& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_details, baggageDetails_);
              DARABONBA_PTR_TO_JSON(change_details, changeDetails_);
              DARABONBA_PTR_TO_JSON(refund_details, refundDetails_);
            };
            friend void from_json(const Darabonba::Json& j, ChangeOtaItemRuleRq& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_details, baggageDetails_);
              DARABONBA_PTR_FROM_JSON(change_details, changeDetails_);
              DARABONBA_PTR_FROM_JSON(refund_details, refundDetails_);
            };
            ChangeOtaItemRuleRq() = default ;
            ChangeOtaItemRuleRq(const ChangeOtaItemRuleRq &) = default ;
            ChangeOtaItemRuleRq(ChangeOtaItemRuleRq &&) = default ;
            ChangeOtaItemRuleRq(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChangeOtaItemRuleRq() = default ;
            ChangeOtaItemRuleRq& operator=(const ChangeOtaItemRuleRq &) = default ;
            ChangeOtaItemRuleRq& operator=(ChangeOtaItemRuleRq &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RefundDetails : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefundDetails& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, RefundDetails& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              RefundDetails() = default ;
              RefundDetails(const RefundDetails &) = default ;
              RefundDetails(RefundDetails &&) = default ;
              RefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefundDetails() = default ;
              RefundDetails& operator=(const RefundDetails &) = default ;
              RefundDetails& operator=(RefundDetails &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
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
                  inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
                  inline RefundSubContents& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<string> style_ {};
                };

                virtual bool empty() const override { return this->content_ == nullptr
        && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline RefundSubItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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
                shared_ptr<string> content_ {};
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(icon, icon_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(icon, icon_);
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
        && this->icon_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // icon Field Functions 
                bool hasIcon() const { return this->icon_ != nullptr;};
                void deleteIcon() { this->icon_ = nullptr;};
                inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                inline ExtraContents& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> icon_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<RefundDetails::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<RefundDetails::ExtraContents>) };
              inline vector<RefundDetails::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<RefundDetails::ExtraContents>) };
              inline RefundDetails& setExtraContents(const vector<RefundDetails::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline RefundDetails& setExtraContents(vector<RefundDetails::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline RefundDetails& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<RefundDetails::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<RefundDetails::RefundSubItems>) };
              inline vector<RefundDetails::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<RefundDetails::RefundSubItems>) };
              inline RefundDetails& setRefundSubItems(const vector<RefundDetails::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline RefundDetails& setRefundSubItems(vector<RefundDetails::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline RefundDetails& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline RefundDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline RefundDetails& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<RefundDetails::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<RefundDetails::RefundSubItems>> refundSubItems_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class ChangeDetails : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ChangeDetails& obj) { 
                DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, ChangeDetails& obj) { 
                DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              ChangeDetails() = default ;
              ChangeDetails(const ChangeDetails &) = default ;
              ChangeDetails(ChangeDetails &&) = default ;
              ChangeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ChangeDetails() = default ;
              ChangeDetails& operator=(const ChangeDetails &) = default ;
              ChangeDetails& operator=(ChangeDetails &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RefundSubItems : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RefundSubItems& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, RefundSubItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
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
                  inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
                  inline RefundSubContents& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                protected:
                  shared_ptr<string> feeDesc_ {};
                  shared_ptr<string> feeRange_ {};
                  shared_ptr<string> style_ {};
                };

                virtual bool empty() const override { return this->content_ == nullptr
        && this->isStruct_ == nullptr && this->ptc_ == nullptr && this->refundSubContents_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline RefundSubItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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
                shared_ptr<string> content_ {};
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<vector<RefundSubItems::RefundSubContents>> refundSubContents_ {};
                shared_ptr<string> title_ {};
              };

              class ExtraContents : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtraContents& obj) { 
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(icon, icon_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, ExtraContents& obj) { 
                  DARABONBA_PTR_FROM_JSON(content, content_);
                  DARABONBA_PTR_FROM_JSON(icon, icon_);
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
        && this->icon_ == nullptr && this->title_ == nullptr; };
                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline ExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // icon Field Functions 
                bool hasIcon() const { return this->icon_ != nullptr;};
                void deleteIcon() { this->icon_ = nullptr;};
                inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                inline ExtraContents& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline ExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                shared_ptr<string> content_ {};
                shared_ptr<string> icon_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->extraContents_ == nullptr
        && this->index_ == nullptr && this->refundSubItems_ == nullptr && this->tableHead_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
              // extraContents Field Functions 
              bool hasExtraContents() const { return this->extraContents_ != nullptr;};
              void deleteExtraContents() { this->extraContents_ = nullptr;};
              inline const vector<ChangeDetails::ExtraContents> & getExtraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<ChangeDetails::ExtraContents>) };
              inline vector<ChangeDetails::ExtraContents> getExtraContents() { DARABONBA_PTR_GET(extraContents_, vector<ChangeDetails::ExtraContents>) };
              inline ChangeDetails& setExtraContents(const vector<ChangeDetails::ExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
              inline ChangeDetails& setExtraContents(vector<ChangeDetails::ExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline ChangeDetails& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // refundSubItems Field Functions 
              bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
              void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
              inline const vector<ChangeDetails::RefundSubItems> & getRefundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<ChangeDetails::RefundSubItems>) };
              inline vector<ChangeDetails::RefundSubItems> getRefundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<ChangeDetails::RefundSubItems>) };
              inline ChangeDetails& setRefundSubItems(const vector<ChangeDetails::RefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
              inline ChangeDetails& setRefundSubItems(vector<ChangeDetails::RefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline ChangeDetails& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline ChangeDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline ChangeDetails& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<ChangeDetails::ExtraContents>> extraContents_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<vector<ChangeDetails::RefundSubItems>> refundSubItems_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            class BaggageDetails : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BaggageDetails& obj) { 
                DARABONBA_PTR_TO_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_TO_JSON(index, index_);
                DARABONBA_PTR_TO_JSON(table_head, tableHead_);
                DARABONBA_PTR_TO_JSON(tips, tips_);
                DARABONBA_PTR_TO_JSON(title, title_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, BaggageDetails& obj) { 
                DARABONBA_PTR_FROM_JSON(baggage_sub_items, baggageSubItems_);
                DARABONBA_PTR_FROM_JSON(index, index_);
                DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
                DARABONBA_PTR_FROM_JSON(tips, tips_);
                DARABONBA_PTR_FROM_JSON(title, title_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              BaggageDetails() = default ;
              BaggageDetails(const BaggageDetails &) = default ;
              BaggageDetails(BaggageDetails &&) = default ;
              BaggageDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BaggageDetails() = default ;
              BaggageDetails& operator=(const BaggageDetails &) = default ;
              BaggageDetails& operator=(BaggageDetails &&) = default ;
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
                  DARABONBA_ANY_TO_JSON(attributes, attributes_);
                  DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_TO_JSON(baggage_sub_contents, baggageSubContents_);
                  DARABONBA_PTR_TO_JSON(content, content_);
                  DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
                  DARABONBA_PTR_TO_JSON(ptc, ptc_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, BaggageSubItems& obj) { 
                  DARABONBA_ANY_FROM_JSON(attributes, attributes_);
                  DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
                  DARABONBA_PTR_FROM_JSON(baggage_sub_contents, baggageSubContents_);
                  DARABONBA_PTR_FROM_JSON(content, content_);
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
                class BaggageSubContents : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const BaggageSubContents& obj) { 
                    DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_TO_JSON(icon, icon_);
                    DARABONBA_PTR_TO_JSON(style, style_);
                    DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
                  };
                  friend void from_json(const Darabonba::Json& j, BaggageSubContents& obj) { 
                    DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_FROM_JSON(icon, icon_);
                    DARABONBA_PTR_FROM_JSON(style, style_);
                    DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
                  };
                  BaggageSubContents() = default ;
                  BaggageSubContents(const BaggageSubContents &) = default ;
                  BaggageSubContents(BaggageSubContents &&) = default ;
                  BaggageSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~BaggageSubContents() = default ;
                  BaggageSubContents& operator=(const BaggageSubContents &) = default ;
                  BaggageSubContents& operator=(BaggageSubContents &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->baggageDesc_ == nullptr
        && this->icon_ == nullptr && this->style_ == nullptr && this->subTitle_ == nullptr; };
                  // baggageDesc Field Functions 
                  bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
                  void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
                  inline string getBaggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
                  inline BaggageSubContents& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


                  // icon Field Functions 
                  bool hasIcon() const { return this->icon_ != nullptr;};
                  void deleteIcon() { this->icon_ = nullptr;};
                  inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
                  inline BaggageSubContents& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


                  // style Field Functions 
                  bool hasStyle() const { return this->style_ != nullptr;};
                  void deleteStyle() { this->style_ = nullptr;};
                  inline int32_t getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
                  inline BaggageSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


                  // subTitle Field Functions 
                  bool hasSubTitle() const { return this->subTitle_ != nullptr;};
                  void deleteSubTitle() { this->subTitle_ = nullptr;};
                  inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
                  inline BaggageSubContents& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


                protected:
                  shared_ptr<string> baggageDesc_ {};
                  shared_ptr<string> icon_ {};
                  shared_ptr<int32_t> style_ {};
                  shared_ptr<string> subTitle_ {};
                };

                class BaggageSubContentVisualizes : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_TO_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_TO_JSON(description, description_);
                    DARABONBA_PTR_TO_JSON(imageDO, imageDO_);
                    DARABONBA_PTR_TO_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_TO_JSON(subTitle, subTitle_);
                  };
                  friend void from_json(const Darabonba::Json& j, BaggageSubContentVisualizes& obj) { 
                    DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
                    DARABONBA_PTR_FROM_JSON(baggage_sub_content_type, baggageSubContentType_);
                    DARABONBA_PTR_FROM_JSON(description, description_);
                    DARABONBA_PTR_FROM_JSON(imageDO, imageDO_);
                    DARABONBA_PTR_FROM_JSON(is_highlight, isHighlight_);
                    DARABONBA_PTR_FROM_JSON(subTitle, subTitle_);
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

                virtual bool empty() const override { return this->attributes_ == nullptr
        && this->baggageSubContentVisualizes_ == nullptr && this->baggageSubContents_ == nullptr && this->content_ == nullptr && this->isStruct_ == nullptr && this->ptc_ == nullptr
        && this->title_ == nullptr; };
                // attributes Field Functions 
                bool hasAttributes() const { return this->attributes_ != nullptr;};
                void deleteAttributes() { this->attributes_ = nullptr;};
                inline                 const Darabonba::Json & getAttributes() const { DARABONBA_GET(attributes_) };
                Darabonba::Json & getAttributes() { DARABONBA_GET(attributes_) };
                inline BaggageSubItems& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
                inline BaggageSubItems& setAttributes(Darabonba::Json && attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


                // baggageSubContentVisualizes Field Functions 
                bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
                void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
                inline const vector<BaggageSubItems::BaggageSubContentVisualizes> & getBaggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline vector<BaggageSubItems::BaggageSubContentVisualizes> getBaggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<BaggageSubItems::BaggageSubContentVisualizes>) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(const vector<BaggageSubItems::BaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
                inline BaggageSubItems& setBaggageSubContentVisualizes(vector<BaggageSubItems::BaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


                // baggageSubContents Field Functions 
                bool hasBaggageSubContents() const { return this->baggageSubContents_ != nullptr;};
                void deleteBaggageSubContents() { this->baggageSubContents_ = nullptr;};
                inline const vector<BaggageSubItems::BaggageSubContents> & getBaggageSubContents() const { DARABONBA_PTR_GET_CONST(baggageSubContents_, vector<BaggageSubItems::BaggageSubContents>) };
                inline vector<BaggageSubItems::BaggageSubContents> getBaggageSubContents() { DARABONBA_PTR_GET(baggageSubContents_, vector<BaggageSubItems::BaggageSubContents>) };
                inline BaggageSubItems& setBaggageSubContents(const vector<BaggageSubItems::BaggageSubContents> & baggageSubContents) { DARABONBA_PTR_SET_VALUE(baggageSubContents_, baggageSubContents) };
                inline BaggageSubItems& setBaggageSubContents(vector<BaggageSubItems::BaggageSubContents> && baggageSubContents) { DARABONBA_PTR_SET_RVALUE(baggageSubContents_, baggageSubContents) };


                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline BaggageSubItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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
                Darabonba::Json attributes_ {};
                shared_ptr<vector<BaggageSubItems::BaggageSubContentVisualizes>> baggageSubContentVisualizes_ {};
                shared_ptr<vector<BaggageSubItems::BaggageSubContents>> baggageSubContents_ {};
                shared_ptr<string> content_ {};
                shared_ptr<bool> isStruct_ {};
                shared_ptr<string> ptc_ {};
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->baggageSubItems_ == nullptr
        && this->index_ == nullptr && this->tableHead_ == nullptr && this->tips_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
              // baggageSubItems Field Functions 
              bool hasBaggageSubItems() const { return this->baggageSubItems_ != nullptr;};
              void deleteBaggageSubItems() { this->baggageSubItems_ = nullptr;};
              inline const vector<BaggageDetails::BaggageSubItems> & getBaggageSubItems() const { DARABONBA_PTR_GET_CONST(baggageSubItems_, vector<BaggageDetails::BaggageSubItems>) };
              inline vector<BaggageDetails::BaggageSubItems> getBaggageSubItems() { DARABONBA_PTR_GET(baggageSubItems_, vector<BaggageDetails::BaggageSubItems>) };
              inline BaggageDetails& setBaggageSubItems(const vector<BaggageDetails::BaggageSubItems> & baggageSubItems) { DARABONBA_PTR_SET_VALUE(baggageSubItems_, baggageSubItems) };
              inline BaggageDetails& setBaggageSubItems(vector<BaggageDetails::BaggageSubItems> && baggageSubItems) { DARABONBA_PTR_SET_RVALUE(baggageSubItems_, baggageSubItems) };


              // index Field Functions 
              bool hasIndex() const { return this->index_ != nullptr;};
              void deleteIndex() { this->index_ = nullptr;};
              inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
              inline BaggageDetails& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


              // tableHead Field Functions 
              bool hasTableHead() const { return this->tableHead_ != nullptr;};
              void deleteTableHead() { this->tableHead_ = nullptr;};
              inline string getTableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
              inline BaggageDetails& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


              // tips Field Functions 
              bool hasTips() const { return this->tips_ != nullptr;};
              void deleteTips() { this->tips_ = nullptr;};
              inline const BaggageDetails::Tips & getTips() const { DARABONBA_PTR_GET_CONST(tips_, BaggageDetails::Tips) };
              inline BaggageDetails::Tips getTips() { DARABONBA_PTR_GET(tips_, BaggageDetails::Tips) };
              inline BaggageDetails& setTips(const BaggageDetails::Tips & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
              inline BaggageDetails& setTips(BaggageDetails::Tips && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


              // title Field Functions 
              bool hasTitle() const { return this->title_ != nullptr;};
              void deleteTitle() { this->title_ = nullptr;};
              inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
              inline BaggageDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
              inline BaggageDetails& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<vector<BaggageDetails::BaggageSubItems>> baggageSubItems_ {};
              shared_ptr<int32_t> index_ {};
              shared_ptr<string> tableHead_ {};
              shared_ptr<BaggageDetails::Tips> tips_ {};
              shared_ptr<string> title_ {};
              shared_ptr<int32_t> type_ {};
            };

            virtual bool empty() const override { return this->baggageDetails_ == nullptr
        && this->changeDetails_ == nullptr && this->refundDetails_ == nullptr; };
            // baggageDetails Field Functions 
            bool hasBaggageDetails() const { return this->baggageDetails_ != nullptr;};
            void deleteBaggageDetails() { this->baggageDetails_ = nullptr;};
            inline const vector<ChangeOtaItemRuleRq::BaggageDetails> & getBaggageDetails() const { DARABONBA_PTR_GET_CONST(baggageDetails_, vector<ChangeOtaItemRuleRq::BaggageDetails>) };
            inline vector<ChangeOtaItemRuleRq::BaggageDetails> getBaggageDetails() { DARABONBA_PTR_GET(baggageDetails_, vector<ChangeOtaItemRuleRq::BaggageDetails>) };
            inline ChangeOtaItemRuleRq& setBaggageDetails(const vector<ChangeOtaItemRuleRq::BaggageDetails> & baggageDetails) { DARABONBA_PTR_SET_VALUE(baggageDetails_, baggageDetails) };
            inline ChangeOtaItemRuleRq& setBaggageDetails(vector<ChangeOtaItemRuleRq::BaggageDetails> && baggageDetails) { DARABONBA_PTR_SET_RVALUE(baggageDetails_, baggageDetails) };


            // changeDetails Field Functions 
            bool hasChangeDetails() const { return this->changeDetails_ != nullptr;};
            void deleteChangeDetails() { this->changeDetails_ = nullptr;};
            inline const vector<ChangeOtaItemRuleRq::ChangeDetails> & getChangeDetails() const { DARABONBA_PTR_GET_CONST(changeDetails_, vector<ChangeOtaItemRuleRq::ChangeDetails>) };
            inline vector<ChangeOtaItemRuleRq::ChangeDetails> getChangeDetails() { DARABONBA_PTR_GET(changeDetails_, vector<ChangeOtaItemRuleRq::ChangeDetails>) };
            inline ChangeOtaItemRuleRq& setChangeDetails(const vector<ChangeOtaItemRuleRq::ChangeDetails> & changeDetails) { DARABONBA_PTR_SET_VALUE(changeDetails_, changeDetails) };
            inline ChangeOtaItemRuleRq& setChangeDetails(vector<ChangeOtaItemRuleRq::ChangeDetails> && changeDetails) { DARABONBA_PTR_SET_RVALUE(changeDetails_, changeDetails) };


            // refundDetails Field Functions 
            bool hasRefundDetails() const { return this->refundDetails_ != nullptr;};
            void deleteRefundDetails() { this->refundDetails_ = nullptr;};
            inline const vector<ChangeOtaItemRuleRq::RefundDetails> & getRefundDetails() const { DARABONBA_PTR_GET_CONST(refundDetails_, vector<ChangeOtaItemRuleRq::RefundDetails>) };
            inline vector<ChangeOtaItemRuleRq::RefundDetails> getRefundDetails() { DARABONBA_PTR_GET(refundDetails_, vector<ChangeOtaItemRuleRq::RefundDetails>) };
            inline ChangeOtaItemRuleRq& setRefundDetails(const vector<ChangeOtaItemRuleRq::RefundDetails> & refundDetails) { DARABONBA_PTR_SET_VALUE(refundDetails_, refundDetails) };
            inline ChangeOtaItemRuleRq& setRefundDetails(vector<ChangeOtaItemRuleRq::RefundDetails> && refundDetails) { DARABONBA_PTR_SET_RVALUE(refundDetails_, refundDetails) };


          protected:
            shared_ptr<vector<ChangeOtaItemRuleRq::BaggageDetails>> baggageDetails_ {};
            shared_ptr<vector<ChangeOtaItemRuleRq::ChangeDetails>> changeDetails_ {};
            shared_ptr<vector<ChangeOtaItemRuleRq::RefundDetails>> refundDetails_ {};
          };

          virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->cabinDesc_ == nullptr && this->cabinDiscount_ == nullptr && this->changeOtaItemRuleRq_ == nullptr && this->childCabin_ == nullptr
        && this->leftNum_ == nullptr && this->modifyPriceList_ == nullptr && this->otaItemid_ == nullptr; };
          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline CabinList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline CabinList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // cabinDesc Field Functions 
          bool hasCabinDesc() const { return this->cabinDesc_ != nullptr;};
          void deleteCabinDesc() { this->cabinDesc_ = nullptr;};
          inline string getCabinDesc() const { DARABONBA_PTR_GET_DEFAULT(cabinDesc_, "") };
          inline CabinList& setCabinDesc(string cabinDesc) { DARABONBA_PTR_SET_VALUE(cabinDesc_, cabinDesc) };


          // cabinDiscount Field Functions 
          bool hasCabinDiscount() const { return this->cabinDiscount_ != nullptr;};
          void deleteCabinDiscount() { this->cabinDiscount_ = nullptr;};
          inline int32_t getCabinDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinDiscount_, 0) };
          inline CabinList& setCabinDiscount(int32_t cabinDiscount) { DARABONBA_PTR_SET_VALUE(cabinDiscount_, cabinDiscount) };


          // changeOtaItemRuleRq Field Functions 
          bool hasChangeOtaItemRuleRq() const { return this->changeOtaItemRuleRq_ != nullptr;};
          void deleteChangeOtaItemRuleRq() { this->changeOtaItemRuleRq_ = nullptr;};
          inline const CabinList::ChangeOtaItemRuleRq & getChangeOtaItemRuleRq() const { DARABONBA_PTR_GET_CONST(changeOtaItemRuleRq_, CabinList::ChangeOtaItemRuleRq) };
          inline CabinList::ChangeOtaItemRuleRq getChangeOtaItemRuleRq() { DARABONBA_PTR_GET(changeOtaItemRuleRq_, CabinList::ChangeOtaItemRuleRq) };
          inline CabinList& setChangeOtaItemRuleRq(const CabinList::ChangeOtaItemRuleRq & changeOtaItemRuleRq) { DARABONBA_PTR_SET_VALUE(changeOtaItemRuleRq_, changeOtaItemRuleRq) };
          inline CabinList& setChangeOtaItemRuleRq(CabinList::ChangeOtaItemRuleRq && changeOtaItemRuleRq) { DARABONBA_PTR_SET_RVALUE(changeOtaItemRuleRq_, changeOtaItemRuleRq) };


          // childCabin Field Functions 
          bool hasChildCabin() const { return this->childCabin_ != nullptr;};
          void deleteChildCabin() { this->childCabin_ = nullptr;};
          inline string getChildCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
          inline CabinList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


          // leftNum Field Functions 
          bool hasLeftNum() const { return this->leftNum_ != nullptr;};
          void deleteLeftNum() { this->leftNum_ = nullptr;};
          inline string getLeftNum() const { DARABONBA_PTR_GET_DEFAULT(leftNum_, "") };
          inline CabinList& setLeftNum(string leftNum) { DARABONBA_PTR_SET_VALUE(leftNum_, leftNum) };


          // modifyPriceList Field Functions 
          bool hasModifyPriceList() const { return this->modifyPriceList_ != nullptr;};
          void deleteModifyPriceList() { this->modifyPriceList_ = nullptr;};
          inline const vector<CabinList::ModifyPriceList> & getModifyPriceList() const { DARABONBA_PTR_GET_CONST(modifyPriceList_, vector<CabinList::ModifyPriceList>) };
          inline vector<CabinList::ModifyPriceList> getModifyPriceList() { DARABONBA_PTR_GET(modifyPriceList_, vector<CabinList::ModifyPriceList>) };
          inline CabinList& setModifyPriceList(const vector<CabinList::ModifyPriceList> & modifyPriceList) { DARABONBA_PTR_SET_VALUE(modifyPriceList_, modifyPriceList) };
          inline CabinList& setModifyPriceList(vector<CabinList::ModifyPriceList> && modifyPriceList) { DARABONBA_PTR_SET_RVALUE(modifyPriceList_, modifyPriceList) };


          // otaItemid Field Functions 
          bool hasOtaItemid() const { return this->otaItemid_ != nullptr;};
          void deleteOtaItemid() { this->otaItemid_ = nullptr;};
          inline string getOtaItemid() const { DARABONBA_PTR_GET_DEFAULT(otaItemid_, "") };
          inline CabinList& setOtaItemid(string otaItemid) { DARABONBA_PTR_SET_VALUE(otaItemid_, otaItemid) };


        protected:
          shared_ptr<string> cabin_ {};
          shared_ptr<string> cabinClass_ {};
          shared_ptr<string> cabinDesc_ {};
          shared_ptr<int32_t> cabinDiscount_ {};
          shared_ptr<CabinList::ChangeOtaItemRuleRq> changeOtaItemRuleRq_ {};
          shared_ptr<string> childCabin_ {};
          shared_ptr<string> leftNum_ {};
          shared_ptr<vector<CabinList::ModifyPriceList>> modifyPriceList_ {};
          shared_ptr<string> otaItemid_ {};
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
        && this->arrAirportInfo_ == nullptr && this->cabinList_ == nullptr && this->carrierAirline_ == nullptr && this->carrierNo_ == nullptr && this->depAirportInfo_ == nullptr
        && this->depCityCode_ == nullptr && this->flightNo_ == nullptr && this->isShare_ == nullptr && this->lowestCabin_ == nullptr && this->lowestCabinClass_ == nullptr
        && this->lowestCabinDesc_ == nullptr && this->lowestCabinNum_ == nullptr && this->lowestCabinPrice_ == nullptr && this->modifyFlightArrTime_ == nullptr && this->modifyFlightDepDate_ == nullptr
        && this->modifyFlightDepTime_ == nullptr && this->sessionId_ == nullptr; };
        // airlineInfo Field Functions 
        bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
        void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
        inline const FlightInfoList::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, FlightInfoList::AirlineInfo) };
        inline FlightInfoList::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, FlightInfoList::AirlineInfo) };
        inline FlightInfoList& setAirlineInfo(const FlightInfoList::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
        inline FlightInfoList& setAirlineInfo(FlightInfoList::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


        // arrAirportInfo Field Functions 
        bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
        void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
        inline const FlightInfoList::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, FlightInfoList::ArrAirportInfo) };
        inline FlightInfoList::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, FlightInfoList::ArrAirportInfo) };
        inline FlightInfoList& setArrAirportInfo(const FlightInfoList::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
        inline FlightInfoList& setArrAirportInfo(FlightInfoList::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


        // cabinList Field Functions 
        bool hasCabinList() const { return this->cabinList_ != nullptr;};
        void deleteCabinList() { this->cabinList_ = nullptr;};
        inline const vector<FlightInfoList::CabinList> & getCabinList() const { DARABONBA_PTR_GET_CONST(cabinList_, vector<FlightInfoList::CabinList>) };
        inline vector<FlightInfoList::CabinList> getCabinList() { DARABONBA_PTR_GET(cabinList_, vector<FlightInfoList::CabinList>) };
        inline FlightInfoList& setCabinList(const vector<FlightInfoList::CabinList> & cabinList) { DARABONBA_PTR_SET_VALUE(cabinList_, cabinList) };
        inline FlightInfoList& setCabinList(vector<FlightInfoList::CabinList> && cabinList) { DARABONBA_PTR_SET_RVALUE(cabinList_, cabinList) };


        // carrierAirline Field Functions 
        bool hasCarrierAirline() const { return this->carrierAirline_ != nullptr;};
        void deleteCarrierAirline() { this->carrierAirline_ = nullptr;};
        inline string getCarrierAirline() const { DARABONBA_PTR_GET_DEFAULT(carrierAirline_, "") };
        inline FlightInfoList& setCarrierAirline(string carrierAirline) { DARABONBA_PTR_SET_VALUE(carrierAirline_, carrierAirline) };


        // carrierNo Field Functions 
        bool hasCarrierNo() const { return this->carrierNo_ != nullptr;};
        void deleteCarrierNo() { this->carrierNo_ = nullptr;};
        inline string getCarrierNo() const { DARABONBA_PTR_GET_DEFAULT(carrierNo_, "") };
        inline FlightInfoList& setCarrierNo(string carrierNo) { DARABONBA_PTR_SET_VALUE(carrierNo_, carrierNo) };


        // depAirportInfo Field Functions 
        bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
        void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
        inline const FlightInfoList::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, FlightInfoList::DepAirportInfo) };
        inline FlightInfoList::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, FlightInfoList::DepAirportInfo) };
        inline FlightInfoList& setDepAirportInfo(const FlightInfoList::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
        inline FlightInfoList& setDepAirportInfo(FlightInfoList::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // isShare Field Functions 
        bool hasIsShare() const { return this->isShare_ != nullptr;};
        void deleteIsShare() { this->isShare_ = nullptr;};
        inline bool getIsShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
        inline FlightInfoList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


        // lowestCabin Field Functions 
        bool hasLowestCabin() const { return this->lowestCabin_ != nullptr;};
        void deleteLowestCabin() { this->lowestCabin_ = nullptr;};
        inline string getLowestCabin() const { DARABONBA_PTR_GET_DEFAULT(lowestCabin_, "") };
        inline FlightInfoList& setLowestCabin(string lowestCabin) { DARABONBA_PTR_SET_VALUE(lowestCabin_, lowestCabin) };


        // lowestCabinClass Field Functions 
        bool hasLowestCabinClass() const { return this->lowestCabinClass_ != nullptr;};
        void deleteLowestCabinClass() { this->lowestCabinClass_ = nullptr;};
        inline string getLowestCabinClass() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinClass_, "") };
        inline FlightInfoList& setLowestCabinClass(string lowestCabinClass) { DARABONBA_PTR_SET_VALUE(lowestCabinClass_, lowestCabinClass) };


        // lowestCabinDesc Field Functions 
        bool hasLowestCabinDesc() const { return this->lowestCabinDesc_ != nullptr;};
        void deleteLowestCabinDesc() { this->lowestCabinDesc_ = nullptr;};
        inline string getLowestCabinDesc() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinDesc_, "") };
        inline FlightInfoList& setLowestCabinDesc(string lowestCabinDesc) { DARABONBA_PTR_SET_VALUE(lowestCabinDesc_, lowestCabinDesc) };


        // lowestCabinNum Field Functions 
        bool hasLowestCabinNum() const { return this->lowestCabinNum_ != nullptr;};
        void deleteLowestCabinNum() { this->lowestCabinNum_ = nullptr;};
        inline string getLowestCabinNum() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinNum_, "") };
        inline FlightInfoList& setLowestCabinNum(string lowestCabinNum) { DARABONBA_PTR_SET_VALUE(lowestCabinNum_, lowestCabinNum) };


        // lowestCabinPrice Field Functions 
        bool hasLowestCabinPrice() const { return this->lowestCabinPrice_ != nullptr;};
        void deleteLowestCabinPrice() { this->lowestCabinPrice_ = nullptr;};
        inline const vector<FlightInfoList::LowestCabinPrice> & getLowestCabinPrice() const { DARABONBA_PTR_GET_CONST(lowestCabinPrice_, vector<FlightInfoList::LowestCabinPrice>) };
        inline vector<FlightInfoList::LowestCabinPrice> getLowestCabinPrice() { DARABONBA_PTR_GET(lowestCabinPrice_, vector<FlightInfoList::LowestCabinPrice>) };
        inline FlightInfoList& setLowestCabinPrice(const vector<FlightInfoList::LowestCabinPrice> & lowestCabinPrice) { DARABONBA_PTR_SET_VALUE(lowestCabinPrice_, lowestCabinPrice) };
        inline FlightInfoList& setLowestCabinPrice(vector<FlightInfoList::LowestCabinPrice> && lowestCabinPrice) { DARABONBA_PTR_SET_RVALUE(lowestCabinPrice_, lowestCabinPrice) };


        // modifyFlightArrTime Field Functions 
        bool hasModifyFlightArrTime() const { return this->modifyFlightArrTime_ != nullptr;};
        void deleteModifyFlightArrTime() { this->modifyFlightArrTime_ = nullptr;};
        inline string getModifyFlightArrTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightArrTime_, "") };
        inline FlightInfoList& setModifyFlightArrTime(string modifyFlightArrTime) { DARABONBA_PTR_SET_VALUE(modifyFlightArrTime_, modifyFlightArrTime) };


        // modifyFlightDepDate Field Functions 
        bool hasModifyFlightDepDate() const { return this->modifyFlightDepDate_ != nullptr;};
        void deleteModifyFlightDepDate() { this->modifyFlightDepDate_ = nullptr;};
        inline string getModifyFlightDepDate() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepDate_, "") };
        inline FlightInfoList& setModifyFlightDepDate(string modifyFlightDepDate) { DARABONBA_PTR_SET_VALUE(modifyFlightDepDate_, modifyFlightDepDate) };


        // modifyFlightDepTime Field Functions 
        bool hasModifyFlightDepTime() const { return this->modifyFlightDepTime_ != nullptr;};
        void deleteModifyFlightDepTime() { this->modifyFlightDepTime_ = nullptr;};
        inline string getModifyFlightDepTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepTime_, "") };
        inline FlightInfoList& setModifyFlightDepTime(string modifyFlightDepTime) { DARABONBA_PTR_SET_VALUE(modifyFlightDepTime_, modifyFlightDepTime) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline FlightInfoList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      protected:
        shared_ptr<FlightInfoList::AirlineInfo> airlineInfo_ {};
        shared_ptr<FlightInfoList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<vector<FlightInfoList::CabinList>> cabinList_ {};
        shared_ptr<string> carrierAirline_ {};
        shared_ptr<string> carrierNo_ {};
        shared_ptr<FlightInfoList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<bool> isShare_ {};
        shared_ptr<string> lowestCabin_ {};
        shared_ptr<string> lowestCabinClass_ {};
        shared_ptr<string> lowestCabinDesc_ {};
        shared_ptr<string> lowestCabinNum_ {};
        shared_ptr<vector<FlightInfoList::LowestCabinPrice>> lowestCabinPrice_ {};
        shared_ptr<string> modifyFlightArrTime_ {};
        shared_ptr<string> modifyFlightDepDate_ {};
        shared_ptr<string> modifyFlightDepTime_ {};
        shared_ptr<string> sessionId_ {};
      };

      virtual bool empty() const override { return this->flightInfoList_ == nullptr; };
      // flightInfoList Field Functions 
      bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
      void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
      inline const vector<Module::FlightInfoList> & getFlightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Module::FlightInfoList>) };
      inline vector<Module::FlightInfoList> getFlightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Module::FlightInfoList>) };
      inline Module& setFlightInfoList(const vector<Module::FlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
      inline Module& setFlightInfoList(vector<Module::FlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


    protected:
      shared_ptr<vector<Module::FlightInfoList>> flightInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TicketChangingEnquiryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TicketChangingEnquiryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TicketChangingEnquiryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TicketChangingEnquiryResponseBody::Module) };
    inline TicketChangingEnquiryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TicketChangingEnquiryResponseBody::Module) };
    inline TicketChangingEnquiryResponseBody& setModule(const TicketChangingEnquiryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TicketChangingEnquiryResponseBody& setModule(TicketChangingEnquiryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketChangingEnquiryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketChangingEnquiryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TicketChangingEnquiryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TicketChangingEnquiryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
