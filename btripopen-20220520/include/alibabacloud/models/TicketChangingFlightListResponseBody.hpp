// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODY_HPP_
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
  class TicketChangingFlightListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TicketChangingFlightListResponseBody() = default ;
    TicketChangingFlightListResponseBody(const TicketChangingFlightListResponseBody &) = default ;
    TicketChangingFlightListResponseBody(TicketChangingFlightListResponseBody &&) = default ;
    TicketChangingFlightListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListResponseBody() = default ;
    TicketChangingFlightListResponseBody& operator=(const TicketChangingFlightListResponseBody &) = default ;
    TicketChangingFlightListResponseBody& operator=(TicketChangingFlightListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_TO_JSON(is_share, isShare_);
          DARABONBA_PTR_TO_JSON(is_stop, isStop_);
          DARABONBA_PTR_TO_JSON(lowest_cabin, lowestCabin_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_class, lowestCabinClass_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_desc, lowestCabinDesc_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_num, lowestCabinNum_);
          DARABONBA_PTR_TO_JSON(lowest_cabin_price, lowestCabinPrice_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(modify_flight_arr_time, modifyFlightArrTime_);
          DARABONBA_PTR_TO_JSON(modify_flight_dep_date, modifyFlightDepDate_);
          DARABONBA_PTR_TO_JSON(modify_flight_dep_time, modifyFlightDepTime_);
          DARABONBA_PTR_TO_JSON(session_id, sessionId_);
          DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
        };
        friend void from_json(const Darabonba::Json& j, FlightInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(cabin_list, cabinList_);
          DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
          DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_FROM_JSON(is_share, isShare_);
          DARABONBA_PTR_FROM_JSON(is_stop, isStop_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin, lowestCabin_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_class, lowestCabinClass_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_desc, lowestCabinDesc_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_num, lowestCabinNum_);
          DARABONBA_PTR_FROM_JSON(lowest_cabin_price, lowestCabinPrice_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(modify_flight_arr_time, modifyFlightArrTime_);
          DARABONBA_PTR_FROM_JSON(modify_flight_dep_date, modifyFlightDepDate_);
          DARABONBA_PTR_FROM_JSON(modify_flight_dep_time, modifyFlightDepTime_);
          DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
          DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
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

          virtual bool empty() const override { return this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->cabinDesc_ == nullptr && this->cabinDiscount_ == nullptr && this->childCabin_ == nullptr && this->leftNum_ == nullptr
        && this->modifyPriceList_ == nullptr && this->otaItemid_ == nullptr; };
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
        && this->flightNo_ == nullptr && this->flightSize_ == nullptr && this->flightType_ == nullptr && this->isProtocol_ == nullptr && this->isShare_ == nullptr
        && this->isStop_ == nullptr && this->lowestCabin_ == nullptr && this->lowestCabinClass_ == nullptr && this->lowestCabinDesc_ == nullptr && this->lowestCabinNum_ == nullptr
        && this->lowestCabinPrice_ == nullptr && this->mealDesc_ == nullptr && this->modifyFlightArrTime_ == nullptr && this->modifyFlightDepDate_ == nullptr && this->modifyFlightDepTime_ == nullptr
        && this->sessionId_ == nullptr && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopDepTime_ == nullptr; };
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


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightSize Field Functions 
        bool hasFlightSize() const { return this->flightSize_ != nullptr;};
        void deleteFlightSize() { this->flightSize_ = nullptr;};
        inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
        inline FlightInfoList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline FlightInfoList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // isProtocol Field Functions 
        bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
        void deleteIsProtocol() { this->isProtocol_ = nullptr;};
        inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
        inline FlightInfoList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


        // isShare Field Functions 
        bool hasIsShare() const { return this->isShare_ != nullptr;};
        void deleteIsShare() { this->isShare_ = nullptr;};
        inline bool getIsShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
        inline FlightInfoList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


        // isStop Field Functions 
        bool hasIsStop() const { return this->isStop_ != nullptr;};
        void deleteIsStop() { this->isStop_ = nullptr;};
        inline bool getIsStop() const { DARABONBA_PTR_GET_DEFAULT(isStop_, false) };
        inline FlightInfoList& setIsStop(bool isStop) { DARABONBA_PTR_SET_VALUE(isStop_, isStop) };


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


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline FlightInfoList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


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


      protected:
        shared_ptr<FlightInfoList::AirlineInfo> airlineInfo_ {};
        shared_ptr<FlightInfoList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<vector<FlightInfoList::CabinList>> cabinList_ {};
        shared_ptr<string> carrierAirline_ {};
        shared_ptr<string> carrierNo_ {};
        shared_ptr<FlightInfoList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> flightSize_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<bool> isProtocol_ {};
        shared_ptr<bool> isShare_ {};
        shared_ptr<bool> isStop_ {};
        shared_ptr<string> lowestCabin_ {};
        shared_ptr<string> lowestCabinClass_ {};
        shared_ptr<string> lowestCabinDesc_ {};
        shared_ptr<string> lowestCabinNum_ {};
        shared_ptr<vector<FlightInfoList::LowestCabinPrice>> lowestCabinPrice_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<string> modifyFlightArrTime_ {};
        shared_ptr<string> modifyFlightDepDate_ {};
        shared_ptr<string> modifyFlightDepTime_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> stopArrTime_ {};
        shared_ptr<string> stopCity_ {};
        shared_ptr<string> stopDepTime_ {};
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
    inline TicketChangingFlightListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TicketChangingFlightListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TicketChangingFlightListResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TicketChangingFlightListResponseBody::Module) };
    inline TicketChangingFlightListResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TicketChangingFlightListResponseBody::Module) };
    inline TicketChangingFlightListResponseBody& setModule(const TicketChangingFlightListResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TicketChangingFlightListResponseBody& setModule(TicketChangingFlightListResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketChangingFlightListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketChangingFlightListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TicketChangingFlightListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TicketChangingFlightListResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
