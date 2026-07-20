// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValue.hpp>
#include <alibabacloud/models/ModuleItemListFlightRuleInfosValue.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValue.hpp>
#include <vector>
#include <alibabacloud/models/ModuleItemListSubItemPositionMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOtaSearchV2ResponseBody() = default ;
    FlightOtaSearchV2ResponseBody(const FlightOtaSearchV2ResponseBody &) = default ;
    FlightOtaSearchV2ResponseBody(FlightOtaSearchV2ResponseBody &&) = default ;
    FlightOtaSearchV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBody() = default ;
    FlightOtaSearchV2ResponseBody& operator=(const FlightOtaSearchV2ResponseBody &) = default ;
    FlightOtaSearchV2ResponseBody& operator=(FlightOtaSearchV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_TO_JSON(item_list, itemList_);
        DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
        DARABONBA_PTR_FROM_JSON(item_list, itemList_);
        DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
        DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
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
      class ItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
          DARABONBA_PTR_TO_JSON(code_type, codeType_);
          DARABONBA_PTR_TO_JSON(flight_rule_infos, flightRuleInfos_);
          DARABONBA_PTR_TO_JSON(item_id, itemId_);
          DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_TO_JSON(sub_item_position_map, subItemPositionMap_);
          DARABONBA_PTR_TO_JSON(sub_items, subItems_);
        };
        friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(code_type, codeType_);
          DARABONBA_PTR_FROM_JSON(flight_rule_infos, flightRuleInfos_);
          DARABONBA_PTR_FROM_JSON(item_id, itemId_);
          DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
          DARABONBA_PTR_FROM_JSON(sub_item_position_map, subItemPositionMap_);
          DARABONBA_PTR_FROM_JSON(sub_items, subItems_);
        };
        ItemList() = default ;
        ItemList(const ItemList &) = default ;
        ItemList(ItemList &&) = default ;
        ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemList() = default ;
        ItemList& operator=(const ItemList &) = default ;
        ItemList& operator=(ItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubItems& obj) { 
            DARABONBA_PTR_TO_JSON(shopping_item_map, shoppingItemMap_);
            DARABONBA_PTR_TO_JSON(tag, tag_);
            DARABONBA_PTR_TO_JSON(uniq_key, uniqKey_);
          };
          friend void from_json(const Darabonba::Json& j, SubItems& obj) { 
            DARABONBA_PTR_FROM_JSON(shopping_item_map, shoppingItemMap_);
            DARABONBA_PTR_FROM_JSON(tag, tag_);
            DARABONBA_PTR_FROM_JSON(uniq_key, uniqKey_);
          };
          SubItems() = default ;
          SubItems(const SubItems &) = default ;
          SubItems(SubItems &&) = default ;
          SubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubItems() = default ;
          SubItems& operator=(const SubItems &) = default ;
          SubItems& operator=(SubItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->shoppingItemMap_ == nullptr
        && this->tag_ == nullptr && this->uniqKey_ == nullptr; };
          // shoppingItemMap Field Functions 
          bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
          void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
          inline const map<string, ModuleItemListSubItemsShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleItemListSubItemsShoppingItemMapValue>) };
          inline map<string, ModuleItemListSubItemsShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleItemListSubItemsShoppingItemMapValue>) };
          inline SubItems& setShoppingItemMap(const map<string, ModuleItemListSubItemsShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
          inline SubItems& setShoppingItemMap(map<string, ModuleItemListSubItemsShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline SubItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // uniqKey Field Functions 
          bool hasUniqKey() const { return this->uniqKey_ != nullptr;};
          void deleteUniqKey() { this->uniqKey_ = nullptr;};
          inline string getUniqKey() const { DARABONBA_PTR_GET_DEFAULT(uniqKey_, "") };
          inline SubItems& setUniqKey(string uniqKey) { DARABONBA_PTR_SET_VALUE(uniqKey_, uniqKey) };


        protected:
          shared_ptr<map<string, ModuleItemListSubItemsShoppingItemMapValue>> shoppingItemMap_ {};
          shared_ptr<string> tag_ {};
          shared_ptr<string> uniqKey_ {};
        };

        virtual bool empty() const override { return this->codeType_ == nullptr
        && this->flightRuleInfos_ == nullptr && this->itemId_ == nullptr && this->shoppingItemMap_ == nullptr && this->subItemPositionMap_ == nullptr && this->subItems_ == nullptr; };
        // codeType Field Functions 
        bool hasCodeType() const { return this->codeType_ != nullptr;};
        void deleteCodeType() { this->codeType_ = nullptr;};
        inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
        inline ItemList& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


        // flightRuleInfos Field Functions 
        bool hasFlightRuleInfos() const { return this->flightRuleInfos_ != nullptr;};
        void deleteFlightRuleInfos() { this->flightRuleInfos_ = nullptr;};
        inline const map<string, ModuleItemListFlightRuleInfosValue> & getFlightRuleInfos() const { DARABONBA_PTR_GET_CONST(flightRuleInfos_, map<string, ModuleItemListFlightRuleInfosValue>) };
        inline map<string, ModuleItemListFlightRuleInfosValue> getFlightRuleInfos() { DARABONBA_PTR_GET(flightRuleInfos_, map<string, ModuleItemListFlightRuleInfosValue>) };
        inline ItemList& setFlightRuleInfos(const map<string, ModuleItemListFlightRuleInfosValue> & flightRuleInfos) { DARABONBA_PTR_SET_VALUE(flightRuleInfos_, flightRuleInfos) };
        inline ItemList& setFlightRuleInfos(map<string, ModuleItemListFlightRuleInfosValue> && flightRuleInfos) { DARABONBA_PTR_SET_RVALUE(flightRuleInfos_, flightRuleInfos) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline ItemList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // shoppingItemMap Field Functions 
        bool hasShoppingItemMap() const { return this->shoppingItemMap_ != nullptr;};
        void deleteShoppingItemMap() { this->shoppingItemMap_ = nullptr;};
        inline const map<string, ModuleItemListShoppingItemMapValue> & getShoppingItemMap() const { DARABONBA_PTR_GET_CONST(shoppingItemMap_, map<string, ModuleItemListShoppingItemMapValue>) };
        inline map<string, ModuleItemListShoppingItemMapValue> getShoppingItemMap() { DARABONBA_PTR_GET(shoppingItemMap_, map<string, ModuleItemListShoppingItemMapValue>) };
        inline ItemList& setShoppingItemMap(const map<string, ModuleItemListShoppingItemMapValue> & shoppingItemMap) { DARABONBA_PTR_SET_VALUE(shoppingItemMap_, shoppingItemMap) };
        inline ItemList& setShoppingItemMap(map<string, ModuleItemListShoppingItemMapValue> && shoppingItemMap) { DARABONBA_PTR_SET_RVALUE(shoppingItemMap_, shoppingItemMap) };


        // subItemPositionMap Field Functions 
        bool hasSubItemPositionMap() const { return this->subItemPositionMap_ != nullptr;};
        void deleteSubItemPositionMap() { this->subItemPositionMap_ = nullptr;};
        inline const map<string, vector<ModuleItemListSubItemPositionMapValue>> & getSubItemPositionMap() const { DARABONBA_PTR_GET_CONST(subItemPositionMap_, map<string, vector<ModuleItemListSubItemPositionMapValue>>) };
        inline map<string, vector<ModuleItemListSubItemPositionMapValue>> getSubItemPositionMap() { DARABONBA_PTR_GET(subItemPositionMap_, map<string, vector<ModuleItemListSubItemPositionMapValue>>) };
        inline ItemList& setSubItemPositionMap(const map<string, vector<ModuleItemListSubItemPositionMapValue>> & subItemPositionMap) { DARABONBA_PTR_SET_VALUE(subItemPositionMap_, subItemPositionMap) };
        inline ItemList& setSubItemPositionMap(map<string, vector<ModuleItemListSubItemPositionMapValue>> && subItemPositionMap) { DARABONBA_PTR_SET_RVALUE(subItemPositionMap_, subItemPositionMap) };


        // subItems Field Functions 
        bool hasSubItems() const { return this->subItems_ != nullptr;};
        void deleteSubItems() { this->subItems_ = nullptr;};
        inline const vector<ItemList::SubItems> & getSubItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<ItemList::SubItems>) };
        inline vector<ItemList::SubItems> getSubItems() { DARABONBA_PTR_GET(subItems_, vector<ItemList::SubItems>) };
        inline ItemList& setSubItems(const vector<ItemList::SubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
        inline ItemList& setSubItems(vector<ItemList::SubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


      protected:
        shared_ptr<string> codeType_ {};
        shared_ptr<map<string, ModuleItemListFlightRuleInfosValue>> flightRuleInfos_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<map<string, ModuleItemListShoppingItemMapValue>> shoppingItemMap_ {};
        shared_ptr<map<string, vector<ModuleItemListSubItemPositionMapValue>>> subItemPositionMap_ {};
        shared_ptr<vector<ItemList::SubItems>> subItems_ {};
      };

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
          DARABONBA_PTR_TO_JSON(extensions, extensions_);
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
          DARABONBA_PTR_FROM_JSON(extensions, extensions_);
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
            DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
            DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(duration, duration_);
            DARABONBA_ANY_TO_JSON(extra_info, extraInfo_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
            DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
            DARABONBA_PTR_TO_JSON(flight_type, flightType_);
            DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_TO_JSON(miles, miles_);
            DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_TO_JSON(one_more, oneMore_);
            DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(share, share_);
            DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_TO_JSON(stop, stop_);
            DARABONBA_PTR_TO_JSON(total_time, totalTime_);
            DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
            DARABONBA_PTR_TO_JSON(transfer_time_number, transferTimeNumber_);
          };
          friend void from_json(const Darabonba::Json& j, FlightSegmentInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
            DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
            DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(duration, duration_);
            DARABONBA_ANY_FROM_JSON(extra_info, extraInfo_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
            DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
            DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
            DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
            DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
            DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
            DARABONBA_PTR_FROM_JSON(miles, miles_);
            DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
            DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
            DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(share, share_);
            DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
            DARABONBA_PTR_FROM_JSON(stop, stop_);
            DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
            DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
            DARABONBA_PTR_FROM_JSON(transfer_time_number, transferTimeNumber_);
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
          class FlightStopInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightStopInfo& obj) { 
              DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_TO_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_TO_JSON(stop_city_names, stopCityNames_);
              DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_TO_JSON(stop_time, stopTime_);
            };
            friend void from_json(const Darabonba::Json& j, FlightStopInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_FROM_JSON(stop_airport_name, stopAirportName_);
              DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
              DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
              DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_FROM_JSON(stop_city_names, stopCityNames_);
              DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
              DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_FROM_JSON(stop_time, stopTime_);
            };
            FlightStopInfo() = default ;
            FlightStopInfo(const FlightStopInfo &) = default ;
            FlightStopInfo(FlightStopInfo &&) = default ;
            FlightStopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightStopInfo() = default ;
            FlightStopInfo& operator=(const FlightStopInfo &) = default ;
            FlightStopInfo& operator=(FlightStopInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->stopAirport_ == nullptr
        && this->stopAirportName_ == nullptr && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr
        && this->stopCityNames_ == nullptr && this->stopDepTerm_ == nullptr && this->stopDepTime_ == nullptr && this->stopTime_ == nullptr; };
            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline FlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopAirportName Field Functions 
            bool hasStopAirportName() const { return this->stopAirportName_ != nullptr;};
            void deleteStopAirportName() { this->stopAirportName_ = nullptr;};
            inline string getStopAirportName() const { DARABONBA_PTR_GET_DEFAULT(stopAirportName_, "") };
            inline FlightStopInfo& setStopAirportName(string stopAirportName) { DARABONBA_PTR_SET_VALUE(stopAirportName_, stopAirportName) };


            // stopArrTerm Field Functions 
            bool hasStopArrTerm() const { return this->stopArrTerm_ != nullptr;};
            void deleteStopArrTerm() { this->stopArrTerm_ = nullptr;};
            inline string getStopArrTerm() const { DARABONBA_PTR_GET_DEFAULT(stopArrTerm_, "") };
            inline FlightStopInfo& setStopArrTerm(string stopArrTerm) { DARABONBA_PTR_SET_VALUE(stopArrTerm_, stopArrTerm) };


            // stopArrTime Field Functions 
            bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
            void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
            inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
            inline FlightStopInfo& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


            // stopCityCode Field Functions 
            bool hasStopCityCode() const { return this->stopCityCode_ != nullptr;};
            void deleteStopCityCode() { this->stopCityCode_ = nullptr;};
            inline string getStopCityCode() const { DARABONBA_PTR_GET_DEFAULT(stopCityCode_, "") };
            inline FlightStopInfo& setStopCityCode(string stopCityCode) { DARABONBA_PTR_SET_VALUE(stopCityCode_, stopCityCode) };


            // stopCityName Field Functions 
            bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
            void deleteStopCityName() { this->stopCityName_ = nullptr;};
            inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
            inline FlightStopInfo& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


            // stopCityNames Field Functions 
            bool hasStopCityNames() const { return this->stopCityNames_ != nullptr;};
            void deleteStopCityNames() { this->stopCityNames_ = nullptr;};
            inline const vector<string> & getStopCityNames() const { DARABONBA_PTR_GET_CONST(stopCityNames_, vector<string>) };
            inline vector<string> getStopCityNames() { DARABONBA_PTR_GET(stopCityNames_, vector<string>) };
            inline FlightStopInfo& setStopCityNames(const vector<string> & stopCityNames) { DARABONBA_PTR_SET_VALUE(stopCityNames_, stopCityNames) };
            inline FlightStopInfo& setStopCityNames(vector<string> && stopCityNames) { DARABONBA_PTR_SET_RVALUE(stopCityNames_, stopCityNames) };


            // stopDepTerm Field Functions 
            bool hasStopDepTerm() const { return this->stopDepTerm_ != nullptr;};
            void deleteStopDepTerm() { this->stopDepTerm_ = nullptr;};
            inline string getStopDepTerm() const { DARABONBA_PTR_GET_DEFAULT(stopDepTerm_, "") };
            inline FlightStopInfo& setStopDepTerm(string stopDepTerm) { DARABONBA_PTR_SET_VALUE(stopDepTerm_, stopDepTerm) };


            // stopDepTime Field Functions 
            bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
            void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
            inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
            inline FlightStopInfo& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline FlightStopInfo& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


          protected:
            shared_ptr<string> stopAirport_ {};
            shared_ptr<string> stopAirportName_ {};
            shared_ptr<string> stopArrTerm_ {};
            shared_ptr<string> stopArrTime_ {};
            shared_ptr<string> stopCityCode_ {};
            shared_ptr<string> stopCityName_ {};
            shared_ptr<vector<string>> stopCityNames_ {};
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
                DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
                DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
                DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
                DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
              };
              friend void from_json(const Darabonba::Json& j, OperatingAirlineInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
                DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
                DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
                DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
                DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
              virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
              // airlineChineseName Field Functions 
              bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
              void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
              inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
              inline OperatingAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


              // airlineChineseShortName Field Functions 
              bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
              void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
              inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
              inline OperatingAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


              // airlineCode Field Functions 
              bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
              void deleteAirlineCode() { this->airlineCode_ = nullptr;};
              inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
              inline OperatingAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


              // airlineIcon Field Functions 
              bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
              void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
              inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
              inline OperatingAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


              // cheapFlight Field Functions 
              bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
              void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
              inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
              inline OperatingAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


            protected:
              shared_ptr<string> airlineChineseName_ {};
              shared_ptr<string> airlineChineseShortName_ {};
              shared_ptr<string> airlineCode_ {};
              shared_ptr<string> airlineIcon_ {};
              shared_ptr<bool> cheapFlight_ {};
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
              DARABONBA_PTR_TO_JSON(airport_name_color, airportNameColor_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, DepAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_name_color, airportNameColor_);
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
        && this->airportName_ == nullptr && this->airportNameColor_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
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


            // airportNameColor Field Functions 
            bool hasAirportNameColor() const { return this->airportNameColor_ != nullptr;};
            void deleteAirportNameColor() { this->airportNameColor_ = nullptr;};
            inline string getAirportNameColor() const { DARABONBA_PTR_GET_DEFAULT(airportNameColor_, "") };
            inline DepAirportInfo& setAirportNameColor(string airportNameColor) { DARABONBA_PTR_SET_VALUE(airportNameColor_, airportNameColor) };


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
            shared_ptr<string> airportNameColor_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class ArrAirportInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ArrAirportInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_name_color, airportNameColor_);
              DARABONBA_PTR_TO_JSON(airport_short_name, airportShortName_);
              DARABONBA_PTR_TO_JSON(terminal, terminal_);
            };
            friend void from_json(const Darabonba::Json& j, ArrAirportInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_name_color, airportNameColor_);
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
        && this->airportName_ == nullptr && this->airportNameColor_ == nullptr && this->airportShortName_ == nullptr && this->terminal_ == nullptr; };
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


            // airportNameColor Field Functions 
            bool hasAirportNameColor() const { return this->airportNameColor_ != nullptr;};
            void deleteAirportNameColor() { this->airportNameColor_ = nullptr;};
            inline string getAirportNameColor() const { DARABONBA_PTR_GET_DEFAULT(airportNameColor_, "") };
            inline ArrAirportInfo& setAirportNameColor(string airportNameColor) { DARABONBA_PTR_SET_VALUE(airportNameColor_, airportNameColor) };


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
            shared_ptr<string> airportNameColor_ {};
            shared_ptr<string> airportShortName_ {};
            shared_ptr<string> terminal_ {};
          };

          class AirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
            };
            friend void from_json(const Darabonba::Json& j, AirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
            virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
            // airlineChineseName Field Functions 
            bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
            void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
            inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
            inline AirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


            // airlineChineseShortName Field Functions 
            bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
            void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
            inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
            inline AirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline AirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineIcon Field Functions 
            bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
            void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
            inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
            inline AirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


            // cheapFlight Field Functions 
            bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
            void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
            inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
            inline AirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


          protected:
            shared_ptr<string> airlineChineseName_ {};
            shared_ptr<string> airlineChineseShortName_ {};
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineIcon_ {};
            shared_ptr<bool> cheapFlight_ {};
          };

          virtual bool empty() const override { return this->airlineInfo_ == nullptr
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->baggageDesc_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr
        && this->extraInfo_ == nullptr && this->flightNo_ == nullptr && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfo_ == nullptr
        && this->flightType_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->miles_ == nullptr && this->onTimeRate_ == nullptr
        && this->oneMore_ == nullptr && this->oneMoreShow_ == nullptr && this->segmentIndex_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr
        && this->stop_ == nullptr && this->totalTime_ == nullptr && this->transferTime_ == nullptr && this->transferTimeNumber_ == nullptr; };
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


          // baggageDesc Field Functions 
          bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
          void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
          inline string getBaggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
          inline FlightSegmentInfos& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


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


          // extraInfo Field Functions 
          bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
          void deleteExtraInfo() { this->extraInfo_ = nullptr;};
          inline           const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
          Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
          inline FlightSegmentInfos& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
          inline FlightSegmentInfos& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


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


          // flightStopInfo Field Functions 
          bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
          void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
          inline const FlightSegmentInfos::FlightStopInfo & getFlightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, FlightSegmentInfos::FlightStopInfo) };
          inline FlightSegmentInfos::FlightStopInfo getFlightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, FlightSegmentInfos::FlightStopInfo) };
          inline FlightSegmentInfos& setFlightStopInfo(const FlightSegmentInfos::FlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
          inline FlightSegmentInfos& setFlightStopInfo(FlightSegmentInfos::FlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


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


          // miles Field Functions 
          bool hasMiles() const { return this->miles_ != nullptr;};
          void deleteMiles() { this->miles_ = nullptr;};
          inline int32_t getMiles() const { DARABONBA_PTR_GET_DEFAULT(miles_, 0) };
          inline FlightSegmentInfos& setMiles(int32_t miles) { DARABONBA_PTR_SET_VALUE(miles_, miles) };


          // onTimeRate Field Functions 
          bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
          void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
          inline string getOnTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
          inline FlightSegmentInfos& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


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


          // transferTime Field Functions 
          bool hasTransferTime() const { return this->transferTime_ != nullptr;};
          void deleteTransferTime() { this->transferTime_ = nullptr;};
          inline string getTransferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, "") };
          inline FlightSegmentInfos& setTransferTime(string transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


          // transferTimeNumber Field Functions 
          bool hasTransferTimeNumber() const { return this->transferTimeNumber_ != nullptr;};
          void deleteTransferTimeNumber() { this->transferTimeNumber_ = nullptr;};
          inline int32_t getTransferTimeNumber() const { DARABONBA_PTR_GET_DEFAULT(transferTimeNumber_, 0) };
          inline FlightSegmentInfos& setTransferTimeNumber(int32_t transferTimeNumber) { DARABONBA_PTR_SET_VALUE(transferTimeNumber_, transferTimeNumber) };


        protected:
          shared_ptr<FlightSegmentInfos::AirlineInfo> airlineInfo_ {};
          shared_ptr<FlightSegmentInfos::ArrAirportInfo> arrAirportInfo_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> baggageDesc_ {};
          shared_ptr<FlightSegmentInfos::DepAirportInfo> depAirportInfo_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          // duration
          shared_ptr<int32_t> duration_ {};
          Darabonba::Json extraInfo_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<FlightSegmentInfos::FlightShareInfo> flightShareInfo_ {};
          shared_ptr<string> flightSize_ {};
          shared_ptr<FlightSegmentInfos::FlightStopInfo> flightStopInfo_ {};
          shared_ptr<string> flightType_ {};
          shared_ptr<string> manufacturer_ {};
          shared_ptr<string> mealDesc_ {};
          shared_ptr<int32_t> miles_ {};
          shared_ptr<string> onTimeRate_ {};
          shared_ptr<int32_t> oneMore_ {};
          shared_ptr<string> oneMoreShow_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<bool> share_ {};
          shared_ptr<string> shortFlightSize_ {};
          shared_ptr<bool> stop_ {};
          shared_ptr<string> totalTime_ {};
          shared_ptr<string> transferTime_ {};
          shared_ptr<int32_t> transferTimeNumber_ {};
        };

        virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->duration_ == nullptr && this->extensions_ == nullptr && this->flightSegmentInfos_ == nullptr && this->journeyIndex_ == nullptr && this->transferTime_ == nullptr; };
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


        // extensions Field Functions 
        bool hasExtensions() const { return this->extensions_ != nullptr;};
        void deleteExtensions() { this->extensions_ = nullptr;};
        inline const map<string, string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, map<string, string>) };
        inline map<string, string> getExtensions() { DARABONBA_PTR_GET(extensions_, map<string, string>) };
        inline FlightJourneyInfos& setExtensions(const map<string, string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
        inline FlightJourneyInfos& setExtensions(map<string, string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


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
        shared_ptr<map<string, string>> extensions_ {};
        shared_ptr<vector<FlightJourneyInfos::FlightSegmentInfos>> flightSegmentInfos_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> transferTime_ {};
      };

      virtual bool empty() const override { return this->flightJourneyInfos_ == nullptr
        && this->itemList_ == nullptr && this->searchMode_ == nullptr && this->tripType_ == nullptr; };
      // flightJourneyInfos Field Functions 
      bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
      void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
      inline const vector<Module::FlightJourneyInfos> & getFlightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline vector<Module::FlightJourneyInfos> getFlightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Module::FlightJourneyInfos>) };
      inline Module& setFlightJourneyInfos(const vector<Module::FlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
      inline Module& setFlightJourneyInfos(vector<Module::FlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


      // itemList Field Functions 
      bool hasItemList() const { return this->itemList_ != nullptr;};
      void deleteItemList() { this->itemList_ = nullptr;};
      inline const vector<Module::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Module::ItemList>) };
      inline vector<Module::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<Module::ItemList>) };
      inline Module& setItemList(const vector<Module::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
      inline Module& setItemList(vector<Module::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


      // searchMode Field Functions 
      bool hasSearchMode() const { return this->searchMode_ != nullptr;};
      void deleteSearchMode() { this->searchMode_ = nullptr;};
      inline int32_t getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
      inline Module& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline Module& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    protected:
      shared_ptr<vector<Module::FlightJourneyInfos>> flightJourneyInfos_ {};
      shared_ptr<vector<Module::ItemList>> itemList_ {};
      shared_ptr<int32_t> searchMode_ {};
      shared_ptr<int32_t> tripType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOtaSearchV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOtaSearchV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightOtaSearchV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightOtaSearchV2ResponseBody::Module) };
    inline FlightOtaSearchV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightOtaSearchV2ResponseBody::Module) };
    inline FlightOtaSearchV2ResponseBody& setModule(const FlightOtaSearchV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOtaSearchV2ResponseBody& setModule(FlightOtaSearchV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOtaSearchV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOtaSearchV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOtaSearchV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightOtaSearchV2ResponseBody::Module> module_ {};
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
