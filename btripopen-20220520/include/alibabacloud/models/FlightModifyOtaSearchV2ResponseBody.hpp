// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleAgentInfoAttributeShowInfoMapValue.hpp>
#include <alibabacloud/models/ModuleAgentInfosAttributeShowInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightModifyOtaSearchV2ResponseBody() = default ;
    FlightModifyOtaSearchV2ResponseBody(const FlightModifyOtaSearchV2ResponseBody &) = default ;
    FlightModifyOtaSearchV2ResponseBody(FlightModifyOtaSearchV2ResponseBody &&) = default ;
    FlightModifyOtaSearchV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBody() = default ;
    FlightModifyOtaSearchV2ResponseBody& operator=(const FlightModifyOtaSearchV2ResponseBody &) = default ;
    FlightModifyOtaSearchV2ResponseBody& operator=(FlightModifyOtaSearchV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(agentInfos, agentInfos_);
        DARABONBA_PTR_TO_JSON(agent_info, agentInfo_);
        DARABONBA_PTR_TO_JSON(cache_key, cacheKey_);
        DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
        DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(agentInfos, agentInfos_);
        DARABONBA_PTR_FROM_JSON(agent_info, agentInfo_);
        DARABONBA_PTR_FROM_JSON(cache_key, cacheKey_);
        DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
        DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
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
      class PassengerCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerCount& obj) { 
          DARABONBA_PTR_TO_JSON(adult_passenger_num, adultPassengerNum_);
          DARABONBA_PTR_TO_JSON(child_passenger_num, childPassengerNum_);
          DARABONBA_PTR_TO_JSON(infant_passenger_num, infantPassengerNum_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerCount& obj) { 
          DARABONBA_PTR_FROM_JSON(adult_passenger_num, adultPassengerNum_);
          DARABONBA_PTR_FROM_JSON(child_passenger_num, childPassengerNum_);
          DARABONBA_PTR_FROM_JSON(infant_passenger_num, infantPassengerNum_);
        };
        PassengerCount() = default ;
        PassengerCount(const PassengerCount &) = default ;
        PassengerCount(PassengerCount &&) = default ;
        PassengerCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerCount() = default ;
        PassengerCount& operator=(const PassengerCount &) = default ;
        PassengerCount& operator=(PassengerCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adultPassengerNum_ == nullptr
        && this->childPassengerNum_ == nullptr && this->infantPassengerNum_ == nullptr; };
        // adultPassengerNum Field Functions 
        bool hasAdultPassengerNum() const { return this->adultPassengerNum_ != nullptr;};
        void deleteAdultPassengerNum() { this->adultPassengerNum_ = nullptr;};
        inline int32_t getAdultPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(adultPassengerNum_, 0) };
        inline PassengerCount& setAdultPassengerNum(int32_t adultPassengerNum) { DARABONBA_PTR_SET_VALUE(adultPassengerNum_, adultPassengerNum) };


        // childPassengerNum Field Functions 
        bool hasChildPassengerNum() const { return this->childPassengerNum_ != nullptr;};
        void deleteChildPassengerNum() { this->childPassengerNum_ = nullptr;};
        inline int32_t getChildPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(childPassengerNum_, 0) };
        inline PassengerCount& setChildPassengerNum(int32_t childPassengerNum) { DARABONBA_PTR_SET_VALUE(childPassengerNum_, childPassengerNum) };


        // infantPassengerNum Field Functions 
        bool hasInfantPassengerNum() const { return this->infantPassengerNum_ != nullptr;};
        void deleteInfantPassengerNum() { this->infantPassengerNum_ = nullptr;};
        inline int32_t getInfantPassengerNum() const { DARABONBA_PTR_GET_DEFAULT(infantPassengerNum_, 0) };
        inline PassengerCount& setInfantPassengerNum(int32_t infantPassengerNum) { DARABONBA_PTR_SET_VALUE(infantPassengerNum_, infantPassengerNum) };


      protected:
        shared_ptr<int32_t> adultPassengerNum_ {};
        shared_ptr<int32_t> childPassengerNum_ {};
        shared_ptr<int32_t> infantPassengerNum_ {};
      };

      class AgentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(attribute_show_info_map, attributeShowInfoMap_);
          DARABONBA_PTR_TO_JSON(best_discount, bestDiscount_);
          DARABONBA_PTR_TO_JSON(cabin_class_info, cabinClassInfo_);
          DARABONBA_PTR_TO_JSON(cabin_code, cabinCode_);
          DARABONBA_PTR_TO_JSON(cabin_name, cabinName_);
          DARABONBA_PTR_TO_JSON(item_id, itemId_);
          DARABONBA_PTR_TO_JSON(modify_type_desc, modifyTypeDesc_);
          DARABONBA_PTR_TO_JSON(modify_type_name, modifyTypeName_);
          DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_TO_JSON(quantity, quantity_);
          DARABONBA_PTR_TO_JSON(support_child_ticket, supportChildTicket_);
        };
        friend void from_json(const Darabonba::Json& j, AgentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute_show_info_map, attributeShowInfoMap_);
          DARABONBA_PTR_FROM_JSON(best_discount, bestDiscount_);
          DARABONBA_PTR_FROM_JSON(cabin_class_info, cabinClassInfo_);
          DARABONBA_PTR_FROM_JSON(cabin_code, cabinCode_);
          DARABONBA_PTR_FROM_JSON(cabin_name, cabinName_);
          DARABONBA_PTR_FROM_JSON(item_id, itemId_);
          DARABONBA_PTR_FROM_JSON(modify_type_desc, modifyTypeDesc_);
          DARABONBA_PTR_FROM_JSON(modify_type_name, modifyTypeName_);
          DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(support_child_ticket, supportChildTicket_);
        };
        AgentInfo() = default ;
        AgentInfo(const AgentInfo &) = default ;
        AgentInfo(AgentInfo &&) = default ;
        AgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentInfo() = default ;
        AgentInfo& operator=(const AgentInfo &) = default ;
        AgentInfo& operator=(AgentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PriceInfoDTO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceInfoDTO& obj) { 
            DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
            DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
            DARABONBA_PTR_TO_JSON(adult_total_price, adultTotalPrice_);
            DARABONBA_PTR_TO_JSON(before_control_price, beforeControlPrice_);
            DARABONBA_PTR_TO_JSON(child_price, childPrice_);
            DARABONBA_PTR_TO_JSON(child_tax, childTax_);
            DARABONBA_PTR_TO_JSON(child_total_price, childTotalPrice_);
            DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
            DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
            DARABONBA_PTR_TO_JSON(infant_total_price, infantTotalPrice_);
            DARABONBA_PTR_TO_JSON(original_adult_price, originalAdultPrice_);
            DARABONBA_PTR_TO_JSON(original_adult_total_price, originalAdultTotalPrice_);
            DARABONBA_PTR_TO_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
          };
          friend void from_json(const Darabonba::Json& j, PriceInfoDTO& obj) { 
            DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
            DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
            DARABONBA_PTR_FROM_JSON(adult_total_price, adultTotalPrice_);
            DARABONBA_PTR_FROM_JSON(before_control_price, beforeControlPrice_);
            DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
            DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
            DARABONBA_PTR_FROM_JSON(child_total_price, childTotalPrice_);
            DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
            DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
            DARABONBA_PTR_FROM_JSON(infant_total_price, infantTotalPrice_);
            DARABONBA_PTR_FROM_JSON(original_adult_price, originalAdultPrice_);
            DARABONBA_PTR_FROM_JSON(original_adult_total_price, originalAdultTotalPrice_);
            DARABONBA_PTR_FROM_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
          };
          PriceInfoDTO() = default ;
          PriceInfoDTO(const PriceInfoDTO &) = default ;
          PriceInfoDTO(PriceInfoDTO &&) = default ;
          PriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceInfoDTO() = default ;
          PriceInfoDTO& operator=(const PriceInfoDTO &) = default ;
          PriceInfoDTO& operator=(PriceInfoDTO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReShopPriceInfoDTO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReShopPriceInfoDTO& obj) { 
              DARABONBA_PTR_TO_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_adult_price, reShopAdultPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
              DARABONBA_PTR_TO_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_child_price, reShopChildPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_price, reShopInfPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
            };
            friend void from_json(const Darabonba::Json& j, ReShopPriceInfoDTO& obj) { 
              DARABONBA_PTR_FROM_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_adult_price, reShopAdultPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_price, reShopChildPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_price, reShopInfPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
            };
            ReShopPriceInfoDTO() = default ;
            ReShopPriceInfoDTO(const ReShopPriceInfoDTO &) = default ;
            ReShopPriceInfoDTO(ReShopPriceInfoDTO &&) = default ;
            ReShopPriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReShopPriceInfoDTO() = default ;
            ReShopPriceInfoDTO& operator=(const ReShopPriceInfoDTO &) = default ;
            ReShopPriceInfoDTO& operator=(ReShopPriceInfoDTO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->reShopAdultChangeFee_ == nullptr
        && this->reShopAdultPrice_ == nullptr && this->reShopAdultPriceGap_ == nullptr && this->reShopChildChangeFee_ == nullptr && this->reShopChildPrice_ == nullptr && this->reShopChildPriceGap_ == nullptr
        && this->reShopInfChangeFee_ == nullptr && this->reShopInfPrice_ == nullptr && this->reShopInfPriceGap_ == nullptr; };
            // reShopAdultChangeFee Field Functions 
            bool hasReShopAdultChangeFee() const { return this->reShopAdultChangeFee_ != nullptr;};
            void deleteReShopAdultChangeFee() { this->reShopAdultChangeFee_ = nullptr;};
            inline int32_t getReShopAdultChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultChangeFee(int32_t reShopAdultChangeFee) { DARABONBA_PTR_SET_VALUE(reShopAdultChangeFee_, reShopAdultChangeFee) };


            // reShopAdultPrice Field Functions 
            bool hasReShopAdultPrice() const { return this->reShopAdultPrice_ != nullptr;};
            void deleteReShopAdultPrice() { this->reShopAdultPrice_ = nullptr;};
            inline int32_t getReShopAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultPrice(int32_t reShopAdultPrice) { DARABONBA_PTR_SET_VALUE(reShopAdultPrice_, reShopAdultPrice) };


            // reShopAdultPriceGap Field Functions 
            bool hasReShopAdultPriceGap() const { return this->reShopAdultPriceGap_ != nullptr;};
            void deleteReShopAdultPriceGap() { this->reShopAdultPriceGap_ = nullptr;};
            inline int32_t getReShopAdultPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultPriceGap(int32_t reShopAdultPriceGap) { DARABONBA_PTR_SET_VALUE(reShopAdultPriceGap_, reShopAdultPriceGap) };


            // reShopChildChangeFee Field Functions 
            bool hasReShopChildChangeFee() const { return this->reShopChildChangeFee_ != nullptr;};
            void deleteReShopChildChangeFee() { this->reShopChildChangeFee_ = nullptr;};
            inline int32_t getReShopChildChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopChildChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildChangeFee(int32_t reShopChildChangeFee) { DARABONBA_PTR_SET_VALUE(reShopChildChangeFee_, reShopChildChangeFee) };


            // reShopChildPrice Field Functions 
            bool hasReShopChildPrice() const { return this->reShopChildPrice_ != nullptr;};
            void deleteReShopChildPrice() { this->reShopChildPrice_ = nullptr;};
            inline int32_t getReShopChildPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildPrice(int32_t reShopChildPrice) { DARABONBA_PTR_SET_VALUE(reShopChildPrice_, reShopChildPrice) };


            // reShopChildPriceGap Field Functions 
            bool hasReShopChildPriceGap() const { return this->reShopChildPriceGap_ != nullptr;};
            void deleteReShopChildPriceGap() { this->reShopChildPriceGap_ = nullptr;};
            inline int32_t getReShopChildPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildPriceGap(int32_t reShopChildPriceGap) { DARABONBA_PTR_SET_VALUE(reShopChildPriceGap_, reShopChildPriceGap) };


            // reShopInfChangeFee Field Functions 
            bool hasReShopInfChangeFee() const { return this->reShopInfChangeFee_ != nullptr;};
            void deleteReShopInfChangeFee() { this->reShopInfChangeFee_ = nullptr;};
            inline int32_t getReShopInfChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopInfChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfChangeFee(int32_t reShopInfChangeFee) { DARABONBA_PTR_SET_VALUE(reShopInfChangeFee_, reShopInfChangeFee) };


            // reShopInfPrice Field Functions 
            bool hasReShopInfPrice() const { return this->reShopInfPrice_ != nullptr;};
            void deleteReShopInfPrice() { this->reShopInfPrice_ = nullptr;};
            inline int32_t getReShopInfPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfPrice(int32_t reShopInfPrice) { DARABONBA_PTR_SET_VALUE(reShopInfPrice_, reShopInfPrice) };


            // reShopInfPriceGap Field Functions 
            bool hasReShopInfPriceGap() const { return this->reShopInfPriceGap_ != nullptr;};
            void deleteReShopInfPriceGap() { this->reShopInfPriceGap_ = nullptr;};
            inline int32_t getReShopInfPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfPriceGap(int32_t reShopInfPriceGap) { DARABONBA_PTR_SET_VALUE(reShopInfPriceGap_, reShopInfPriceGap) };


          protected:
            shared_ptr<int32_t> reShopAdultChangeFee_ {};
            shared_ptr<int32_t> reShopAdultPrice_ {};
            shared_ptr<int32_t> reShopAdultPriceGap_ {};
            shared_ptr<int32_t> reShopChildChangeFee_ {};
            shared_ptr<int32_t> reShopChildPrice_ {};
            shared_ptr<int32_t> reShopChildPriceGap_ {};
            shared_ptr<int32_t> reShopInfChangeFee_ {};
            shared_ptr<int32_t> reShopInfPrice_ {};
            shared_ptr<int32_t> reShopInfPriceGap_ {};
          };

          virtual bool empty() const override { return this->adultPrice_ == nullptr
        && this->adultTax_ == nullptr && this->adultTotalPrice_ == nullptr && this->beforeControlPrice_ == nullptr && this->childPrice_ == nullptr && this->childTax_ == nullptr
        && this->childTotalPrice_ == nullptr && this->infantPrice_ == nullptr && this->infantTax_ == nullptr && this->infantTotalPrice_ == nullptr && this->originalAdultPrice_ == nullptr
        && this->originalAdultTotalPrice_ == nullptr && this->reShopPriceInfoDTO_ == nullptr; };
          // adultPrice Field Functions 
          bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
          void deleteAdultPrice() { this->adultPrice_ = nullptr;};
          inline int32_t getAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0) };
          inline PriceInfoDTO& setAdultPrice(int32_t adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


          // adultTax Field Functions 
          bool hasAdultTax() const { return this->adultTax_ != nullptr;};
          void deleteAdultTax() { this->adultTax_ = nullptr;};
          inline int32_t getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0) };
          inline PriceInfoDTO& setAdultTax(int32_t adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


          // adultTotalPrice Field Functions 
          bool hasAdultTotalPrice() const { return this->adultTotalPrice_ != nullptr;};
          void deleteAdultTotalPrice() { this->adultTotalPrice_ = nullptr;};
          inline int32_t getAdultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(adultTotalPrice_, 0) };
          inline PriceInfoDTO& setAdultTotalPrice(int32_t adultTotalPrice) { DARABONBA_PTR_SET_VALUE(adultTotalPrice_, adultTotalPrice) };


          // beforeControlPrice Field Functions 
          bool hasBeforeControlPrice() const { return this->beforeControlPrice_ != nullptr;};
          void deleteBeforeControlPrice() { this->beforeControlPrice_ = nullptr;};
          inline int32_t getBeforeControlPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeControlPrice_, 0) };
          inline PriceInfoDTO& setBeforeControlPrice(int32_t beforeControlPrice) { DARABONBA_PTR_SET_VALUE(beforeControlPrice_, beforeControlPrice) };


          // childPrice Field Functions 
          bool hasChildPrice() const { return this->childPrice_ != nullptr;};
          void deleteChildPrice() { this->childPrice_ = nullptr;};
          inline int32_t getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0) };
          inline PriceInfoDTO& setChildPrice(int32_t childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


          // childTax Field Functions 
          bool hasChildTax() const { return this->childTax_ != nullptr;};
          void deleteChildTax() { this->childTax_ = nullptr;};
          inline int32_t getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0) };
          inline PriceInfoDTO& setChildTax(int32_t childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


          // childTotalPrice Field Functions 
          bool hasChildTotalPrice() const { return this->childTotalPrice_ != nullptr;};
          void deleteChildTotalPrice() { this->childTotalPrice_ = nullptr;};
          inline int32_t getChildTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(childTotalPrice_, 0) };
          inline PriceInfoDTO& setChildTotalPrice(int32_t childTotalPrice) { DARABONBA_PTR_SET_VALUE(childTotalPrice_, childTotalPrice) };


          // infantPrice Field Functions 
          bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
          void deleteInfantPrice() { this->infantPrice_ = nullptr;};
          inline int32_t getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0) };
          inline PriceInfoDTO& setInfantPrice(int32_t infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


          // infantTax Field Functions 
          bool hasInfantTax() const { return this->infantTax_ != nullptr;};
          void deleteInfantTax() { this->infantTax_ = nullptr;};
          inline int32_t getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0) };
          inline PriceInfoDTO& setInfantTax(int32_t infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


          // infantTotalPrice Field Functions 
          bool hasInfantTotalPrice() const { return this->infantTotalPrice_ != nullptr;};
          void deleteInfantTotalPrice() { this->infantTotalPrice_ = nullptr;};
          inline int32_t getInfantTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(infantTotalPrice_, 0) };
          inline PriceInfoDTO& setInfantTotalPrice(int32_t infantTotalPrice) { DARABONBA_PTR_SET_VALUE(infantTotalPrice_, infantTotalPrice) };


          // originalAdultPrice Field Functions 
          bool hasOriginalAdultPrice() const { return this->originalAdultPrice_ != nullptr;};
          void deleteOriginalAdultPrice() { this->originalAdultPrice_ = nullptr;};
          inline int32_t getOriginalAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultPrice_, 0) };
          inline PriceInfoDTO& setOriginalAdultPrice(int32_t originalAdultPrice) { DARABONBA_PTR_SET_VALUE(originalAdultPrice_, originalAdultPrice) };


          // originalAdultTotalPrice Field Functions 
          bool hasOriginalAdultTotalPrice() const { return this->originalAdultTotalPrice_ != nullptr;};
          void deleteOriginalAdultTotalPrice() { this->originalAdultTotalPrice_ = nullptr;};
          inline int32_t getOriginalAdultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultTotalPrice_, 0) };
          inline PriceInfoDTO& setOriginalAdultTotalPrice(int32_t originalAdultTotalPrice) { DARABONBA_PTR_SET_VALUE(originalAdultTotalPrice_, originalAdultTotalPrice) };


          // reShopPriceInfoDTO Field Functions 
          bool hasReShopPriceInfoDTO() const { return this->reShopPriceInfoDTO_ != nullptr;};
          void deleteReShopPriceInfoDTO() { this->reShopPriceInfoDTO_ = nullptr;};
          inline const PriceInfoDTO::ReShopPriceInfoDTO & getReShopPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(reShopPriceInfoDTO_, PriceInfoDTO::ReShopPriceInfoDTO) };
          inline PriceInfoDTO::ReShopPriceInfoDTO getReShopPriceInfoDTO() { DARABONBA_PTR_GET(reShopPriceInfoDTO_, PriceInfoDTO::ReShopPriceInfoDTO) };
          inline PriceInfoDTO& setReShopPriceInfoDTO(const PriceInfoDTO::ReShopPriceInfoDTO & reShopPriceInfoDTO) { DARABONBA_PTR_SET_VALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };
          inline PriceInfoDTO& setReShopPriceInfoDTO(PriceInfoDTO::ReShopPriceInfoDTO && reShopPriceInfoDTO) { DARABONBA_PTR_SET_RVALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };


        protected:
          shared_ptr<int32_t> adultPrice_ {};
          shared_ptr<int32_t> adultTax_ {};
          shared_ptr<int32_t> adultTotalPrice_ {};
          shared_ptr<int32_t> beforeControlPrice_ {};
          shared_ptr<int32_t> childPrice_ {};
          shared_ptr<int32_t> childTax_ {};
          shared_ptr<int32_t> childTotalPrice_ {};
          shared_ptr<int32_t> infantPrice_ {};
          shared_ptr<int32_t> infantTax_ {};
          shared_ptr<int32_t> infantTotalPrice_ {};
          shared_ptr<int32_t> originalAdultPrice_ {};
          shared_ptr<int32_t> originalAdultTotalPrice_ {};
          shared_ptr<PriceInfoDTO::ReShopPriceInfoDTO> reShopPriceInfoDTO_ {};
        };

        class CabinClassInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CabinClassInfo& obj) { 
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(class_name, className_);
            DARABONBA_PTR_TO_JSON(inner_cabin_class, innerCabinClass_);
            DARABONBA_PTR_TO_JSON(quantity, quantity_);
          };
          friend void from_json(const Darabonba::Json& j, CabinClassInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(class_name, className_);
            DARABONBA_PTR_FROM_JSON(inner_cabin_class, innerCabinClass_);
            DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          };
          CabinClassInfo() = default ;
          CabinClassInfo(const CabinClassInfo &) = default ;
          CabinClassInfo(CabinClassInfo &&) = default ;
          CabinClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CabinClassInfo() = default ;
          CabinClassInfo& operator=(const CabinClassInfo &) = default ;
          CabinClassInfo& operator=(CabinClassInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->className_ == nullptr && this->innerCabinClass_ == nullptr && this->quantity_ == nullptr; };
          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline CabinClassInfo& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // className Field Functions 
          bool hasClassName() const { return this->className_ != nullptr;};
          void deleteClassName() { this->className_ = nullptr;};
          inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
          inline CabinClassInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


          // innerCabinClass Field Functions 
          bool hasInnerCabinClass() const { return this->innerCabinClass_ != nullptr;};
          void deleteInnerCabinClass() { this->innerCabinClass_ = nullptr;};
          inline int32_t getInnerCabinClass() const { DARABONBA_PTR_GET_DEFAULT(innerCabinClass_, 0) };
          inline CabinClassInfo& setInnerCabinClass(int32_t innerCabinClass) { DARABONBA_PTR_SET_VALUE(innerCabinClass_, innerCabinClass) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
          inline CabinClassInfo& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        protected:
          shared_ptr<string> cabinClass_ {};
          shared_ptr<string> className_ {};
          shared_ptr<int32_t> innerCabinClass_ {};
          shared_ptr<string> quantity_ {};
        };

        virtual bool empty() const override { return this->attributeShowInfoMap_ == nullptr
        && this->bestDiscount_ == nullptr && this->cabinClassInfo_ == nullptr && this->cabinCode_ == nullptr && this->cabinName_ == nullptr && this->itemId_ == nullptr
        && this->modifyTypeDesc_ == nullptr && this->modifyTypeName_ == nullptr && this->priceInfoDTO_ == nullptr && this->quantity_ == nullptr && this->supportChildTicket_ == nullptr; };
        // attributeShowInfoMap Field Functions 
        bool hasAttributeShowInfoMap() const { return this->attributeShowInfoMap_ != nullptr;};
        void deleteAttributeShowInfoMap() { this->attributeShowInfoMap_ = nullptr;};
        inline const map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>> & getAttributeShowInfoMap() const { DARABONBA_PTR_GET_CONST(attributeShowInfoMap_, map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>>) };
        inline map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>> getAttributeShowInfoMap() { DARABONBA_PTR_GET(attributeShowInfoMap_, map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>>) };
        inline AgentInfo& setAttributeShowInfoMap(const map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>> & attributeShowInfoMap) { DARABONBA_PTR_SET_VALUE(attributeShowInfoMap_, attributeShowInfoMap) };
        inline AgentInfo& setAttributeShowInfoMap(map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>> && attributeShowInfoMap) { DARABONBA_PTR_SET_RVALUE(attributeShowInfoMap_, attributeShowInfoMap) };


        // bestDiscount Field Functions 
        bool hasBestDiscount() const { return this->bestDiscount_ != nullptr;};
        void deleteBestDiscount() { this->bestDiscount_ = nullptr;};
        inline double getBestDiscount() const { DARABONBA_PTR_GET_DEFAULT(bestDiscount_, 0.0) };
        inline AgentInfo& setBestDiscount(double bestDiscount) { DARABONBA_PTR_SET_VALUE(bestDiscount_, bestDiscount) };


        // cabinClassInfo Field Functions 
        bool hasCabinClassInfo() const { return this->cabinClassInfo_ != nullptr;};
        void deleteCabinClassInfo() { this->cabinClassInfo_ = nullptr;};
        inline const AgentInfo::CabinClassInfo & getCabinClassInfo() const { DARABONBA_PTR_GET_CONST(cabinClassInfo_, AgentInfo::CabinClassInfo) };
        inline AgentInfo::CabinClassInfo getCabinClassInfo() { DARABONBA_PTR_GET(cabinClassInfo_, AgentInfo::CabinClassInfo) };
        inline AgentInfo& setCabinClassInfo(const AgentInfo::CabinClassInfo & cabinClassInfo) { DARABONBA_PTR_SET_VALUE(cabinClassInfo_, cabinClassInfo) };
        inline AgentInfo& setCabinClassInfo(AgentInfo::CabinClassInfo && cabinClassInfo) { DARABONBA_PTR_SET_RVALUE(cabinClassInfo_, cabinClassInfo) };


        // cabinCode Field Functions 
        bool hasCabinCode() const { return this->cabinCode_ != nullptr;};
        void deleteCabinCode() { this->cabinCode_ = nullptr;};
        inline int32_t getCabinCode() const { DARABONBA_PTR_GET_DEFAULT(cabinCode_, 0) };
        inline AgentInfo& setCabinCode(int32_t cabinCode) { DARABONBA_PTR_SET_VALUE(cabinCode_, cabinCode) };


        // cabinName Field Functions 
        bool hasCabinName() const { return this->cabinName_ != nullptr;};
        void deleteCabinName() { this->cabinName_ = nullptr;};
        inline string getCabinName() const { DARABONBA_PTR_GET_DEFAULT(cabinName_, "") };
        inline AgentInfo& setCabinName(string cabinName) { DARABONBA_PTR_SET_VALUE(cabinName_, cabinName) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline AgentInfo& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // modifyTypeDesc Field Functions 
        bool hasModifyTypeDesc() const { return this->modifyTypeDesc_ != nullptr;};
        void deleteModifyTypeDesc() { this->modifyTypeDesc_ = nullptr;};
        inline string getModifyTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeDesc_, "") };
        inline AgentInfo& setModifyTypeDesc(string modifyTypeDesc) { DARABONBA_PTR_SET_VALUE(modifyTypeDesc_, modifyTypeDesc) };


        // modifyTypeName Field Functions 
        bool hasModifyTypeName() const { return this->modifyTypeName_ != nullptr;};
        void deleteModifyTypeName() { this->modifyTypeName_ = nullptr;};
        inline string getModifyTypeName() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeName_, "") };
        inline AgentInfo& setModifyTypeName(string modifyTypeName) { DARABONBA_PTR_SET_VALUE(modifyTypeName_, modifyTypeName) };


        // priceInfoDTO Field Functions 
        bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
        void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
        inline const AgentInfo::PriceInfoDTO & getPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, AgentInfo::PriceInfoDTO) };
        inline AgentInfo::PriceInfoDTO getPriceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, AgentInfo::PriceInfoDTO) };
        inline AgentInfo& setPriceInfoDTO(const AgentInfo::PriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
        inline AgentInfo& setPriceInfoDTO(AgentInfo::PriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
        inline AgentInfo& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // supportChildTicket Field Functions 
        bool hasSupportChildTicket() const { return this->supportChildTicket_ != nullptr;};
        void deleteSupportChildTicket() { this->supportChildTicket_ = nullptr;};
        inline bool getSupportChildTicket() const { DARABONBA_PTR_GET_DEFAULT(supportChildTicket_, false) };
        inline AgentInfo& setSupportChildTicket(bool supportChildTicket) { DARABONBA_PTR_SET_VALUE(supportChildTicket_, supportChildTicket) };


      protected:
        shared_ptr<map<string, vector<ModuleAgentInfoAttributeShowInfoMapValue>>> attributeShowInfoMap_ {};
        shared_ptr<double> bestDiscount_ {};
        shared_ptr<AgentInfo::CabinClassInfo> cabinClassInfo_ {};
        shared_ptr<int32_t> cabinCode_ {};
        shared_ptr<string> cabinName_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<string> modifyTypeDesc_ {};
        shared_ptr<string> modifyTypeName_ {};
        shared_ptr<AgentInfo::PriceInfoDTO> priceInfoDTO_ {};
        shared_ptr<int32_t> quantity_ {};
        shared_ptr<bool> supportChildTicket_ {};
      };

      class AgentInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentInfos& obj) { 
          DARABONBA_PTR_TO_JSON(attribute_show_info_map, attributeShowInfoMap_);
          DARABONBA_PTR_TO_JSON(best_discount, bestDiscount_);
          DARABONBA_PTR_TO_JSON(cabin_class_info, cabinClassInfo_);
          DARABONBA_PTR_TO_JSON(cabin_code, cabinCode_);
          DARABONBA_PTR_TO_JSON(cabin_name, cabinName_);
          DARABONBA_PTR_TO_JSON(item_id, itemId_);
          DARABONBA_PTR_TO_JSON(modify_type_desc, modifyTypeDesc_);
          DARABONBA_PTR_TO_JSON(modify_type_name, modifyTypeName_);
          DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_TO_JSON(quantity, quantity_);
          DARABONBA_PTR_TO_JSON(support_child_ticket, supportChildTicket_);
        };
        friend void from_json(const Darabonba::Json& j, AgentInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute_show_info_map, attributeShowInfoMap_);
          DARABONBA_PTR_FROM_JSON(best_discount, bestDiscount_);
          DARABONBA_PTR_FROM_JSON(cabin_class_info, cabinClassInfo_);
          DARABONBA_PTR_FROM_JSON(cabin_code, cabinCode_);
          DARABONBA_PTR_FROM_JSON(cabin_name, cabinName_);
          DARABONBA_PTR_FROM_JSON(item_id, itemId_);
          DARABONBA_PTR_FROM_JSON(modify_type_desc, modifyTypeDesc_);
          DARABONBA_PTR_FROM_JSON(modify_type_name, modifyTypeName_);
          DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(support_child_ticket, supportChildTicket_);
        };
        AgentInfos() = default ;
        AgentInfos(const AgentInfos &) = default ;
        AgentInfos(AgentInfos &&) = default ;
        AgentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentInfos() = default ;
        AgentInfos& operator=(const AgentInfos &) = default ;
        AgentInfos& operator=(AgentInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PriceInfoDTO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceInfoDTO& obj) { 
            DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
            DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
            DARABONBA_PTR_TO_JSON(adult_total_price, adultTotalPrice_);
            DARABONBA_PTR_TO_JSON(before_control_price, beforeControlPrice_);
            DARABONBA_PTR_TO_JSON(child_price, childPrice_);
            DARABONBA_PTR_TO_JSON(child_tax, childTax_);
            DARABONBA_PTR_TO_JSON(child_total_price, childTotalPrice_);
            DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
            DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
            DARABONBA_PTR_TO_JSON(infant_total_price, infantTotalPrice_);
            DARABONBA_PTR_TO_JSON(original_adult_price, originalAdultPrice_);
            DARABONBA_PTR_TO_JSON(original_adult_total_price, originalAdultTotalPrice_);
            DARABONBA_PTR_TO_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
          };
          friend void from_json(const Darabonba::Json& j, PriceInfoDTO& obj) { 
            DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
            DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
            DARABONBA_PTR_FROM_JSON(adult_total_price, adultTotalPrice_);
            DARABONBA_PTR_FROM_JSON(before_control_price, beforeControlPrice_);
            DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
            DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
            DARABONBA_PTR_FROM_JSON(child_total_price, childTotalPrice_);
            DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
            DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
            DARABONBA_PTR_FROM_JSON(infant_total_price, infantTotalPrice_);
            DARABONBA_PTR_FROM_JSON(original_adult_price, originalAdultPrice_);
            DARABONBA_PTR_FROM_JSON(original_adult_total_price, originalAdultTotalPrice_);
            DARABONBA_PTR_FROM_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
          };
          PriceInfoDTO() = default ;
          PriceInfoDTO(const PriceInfoDTO &) = default ;
          PriceInfoDTO(PriceInfoDTO &&) = default ;
          PriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceInfoDTO() = default ;
          PriceInfoDTO& operator=(const PriceInfoDTO &) = default ;
          PriceInfoDTO& operator=(PriceInfoDTO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReShopPriceInfoDTO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReShopPriceInfoDTO& obj) { 
              DARABONBA_PTR_TO_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_adult_price, reShopAdultPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
              DARABONBA_PTR_TO_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_child_price, reShopChildPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_price, reShopInfPrice_);
              DARABONBA_PTR_TO_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
            };
            friend void from_json(const Darabonba::Json& j, ReShopPriceInfoDTO& obj) { 
              DARABONBA_PTR_FROM_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_adult_price, reShopAdultPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_price, reShopChildPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_price, reShopInfPrice_);
              DARABONBA_PTR_FROM_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
            };
            ReShopPriceInfoDTO() = default ;
            ReShopPriceInfoDTO(const ReShopPriceInfoDTO &) = default ;
            ReShopPriceInfoDTO(ReShopPriceInfoDTO &&) = default ;
            ReShopPriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReShopPriceInfoDTO() = default ;
            ReShopPriceInfoDTO& operator=(const ReShopPriceInfoDTO &) = default ;
            ReShopPriceInfoDTO& operator=(ReShopPriceInfoDTO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->reShopAdultChangeFee_ == nullptr
        && this->reShopAdultPrice_ == nullptr && this->reShopAdultPriceGap_ == nullptr && this->reShopChildChangeFee_ == nullptr && this->reShopChildPrice_ == nullptr && this->reShopChildPriceGap_ == nullptr
        && this->reShopInfChangeFee_ == nullptr && this->reShopInfPrice_ == nullptr && this->reShopInfPriceGap_ == nullptr; };
            // reShopAdultChangeFee Field Functions 
            bool hasReShopAdultChangeFee() const { return this->reShopAdultChangeFee_ != nullptr;};
            void deleteReShopAdultChangeFee() { this->reShopAdultChangeFee_ = nullptr;};
            inline int32_t getReShopAdultChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultChangeFee(int32_t reShopAdultChangeFee) { DARABONBA_PTR_SET_VALUE(reShopAdultChangeFee_, reShopAdultChangeFee) };


            // reShopAdultPrice Field Functions 
            bool hasReShopAdultPrice() const { return this->reShopAdultPrice_ != nullptr;};
            void deleteReShopAdultPrice() { this->reShopAdultPrice_ = nullptr;};
            inline int32_t getReShopAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultPrice(int32_t reShopAdultPrice) { DARABONBA_PTR_SET_VALUE(reShopAdultPrice_, reShopAdultPrice) };


            // reShopAdultPriceGap Field Functions 
            bool hasReShopAdultPriceGap() const { return this->reShopAdultPriceGap_ != nullptr;};
            void deleteReShopAdultPriceGap() { this->reShopAdultPriceGap_ = nullptr;};
            inline int32_t getReShopAdultPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopAdultPriceGap(int32_t reShopAdultPriceGap) { DARABONBA_PTR_SET_VALUE(reShopAdultPriceGap_, reShopAdultPriceGap) };


            // reShopChildChangeFee Field Functions 
            bool hasReShopChildChangeFee() const { return this->reShopChildChangeFee_ != nullptr;};
            void deleteReShopChildChangeFee() { this->reShopChildChangeFee_ = nullptr;};
            inline int32_t getReShopChildChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopChildChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildChangeFee(int32_t reShopChildChangeFee) { DARABONBA_PTR_SET_VALUE(reShopChildChangeFee_, reShopChildChangeFee) };


            // reShopChildPrice Field Functions 
            bool hasReShopChildPrice() const { return this->reShopChildPrice_ != nullptr;};
            void deleteReShopChildPrice() { this->reShopChildPrice_ = nullptr;};
            inline int32_t getReShopChildPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildPrice(int32_t reShopChildPrice) { DARABONBA_PTR_SET_VALUE(reShopChildPrice_, reShopChildPrice) };


            // reShopChildPriceGap Field Functions 
            bool hasReShopChildPriceGap() const { return this->reShopChildPriceGap_ != nullptr;};
            void deleteReShopChildPriceGap() { this->reShopChildPriceGap_ = nullptr;};
            inline int32_t getReShopChildPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopChildPriceGap(int32_t reShopChildPriceGap) { DARABONBA_PTR_SET_VALUE(reShopChildPriceGap_, reShopChildPriceGap) };


            // reShopInfChangeFee Field Functions 
            bool hasReShopInfChangeFee() const { return this->reShopInfChangeFee_ != nullptr;};
            void deleteReShopInfChangeFee() { this->reShopInfChangeFee_ = nullptr;};
            inline int32_t getReShopInfChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopInfChangeFee_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfChangeFee(int32_t reShopInfChangeFee) { DARABONBA_PTR_SET_VALUE(reShopInfChangeFee_, reShopInfChangeFee) };


            // reShopInfPrice Field Functions 
            bool hasReShopInfPrice() const { return this->reShopInfPrice_ != nullptr;};
            void deleteReShopInfPrice() { this->reShopInfPrice_ = nullptr;};
            inline int32_t getReShopInfPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPrice_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfPrice(int32_t reShopInfPrice) { DARABONBA_PTR_SET_VALUE(reShopInfPrice_, reShopInfPrice) };


            // reShopInfPriceGap Field Functions 
            bool hasReShopInfPriceGap() const { return this->reShopInfPriceGap_ != nullptr;};
            void deleteReShopInfPriceGap() { this->reShopInfPriceGap_ = nullptr;};
            inline int32_t getReShopInfPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPriceGap_, 0) };
            inline ReShopPriceInfoDTO& setReShopInfPriceGap(int32_t reShopInfPriceGap) { DARABONBA_PTR_SET_VALUE(reShopInfPriceGap_, reShopInfPriceGap) };


          protected:
            shared_ptr<int32_t> reShopAdultChangeFee_ {};
            shared_ptr<int32_t> reShopAdultPrice_ {};
            shared_ptr<int32_t> reShopAdultPriceGap_ {};
            shared_ptr<int32_t> reShopChildChangeFee_ {};
            shared_ptr<int32_t> reShopChildPrice_ {};
            shared_ptr<int32_t> reShopChildPriceGap_ {};
            shared_ptr<int32_t> reShopInfChangeFee_ {};
            shared_ptr<int32_t> reShopInfPrice_ {};
            shared_ptr<int32_t> reShopInfPriceGap_ {};
          };

          virtual bool empty() const override { return this->adultPrice_ == nullptr
        && this->adultTax_ == nullptr && this->adultTotalPrice_ == nullptr && this->beforeControlPrice_ == nullptr && this->childPrice_ == nullptr && this->childTax_ == nullptr
        && this->childTotalPrice_ == nullptr && this->infantPrice_ == nullptr && this->infantTax_ == nullptr && this->infantTotalPrice_ == nullptr && this->originalAdultPrice_ == nullptr
        && this->originalAdultTotalPrice_ == nullptr && this->reShopPriceInfoDTO_ == nullptr; };
          // adultPrice Field Functions 
          bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
          void deleteAdultPrice() { this->adultPrice_ = nullptr;};
          inline int32_t getAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0) };
          inline PriceInfoDTO& setAdultPrice(int32_t adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


          // adultTax Field Functions 
          bool hasAdultTax() const { return this->adultTax_ != nullptr;};
          void deleteAdultTax() { this->adultTax_ = nullptr;};
          inline int32_t getAdultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0) };
          inline PriceInfoDTO& setAdultTax(int32_t adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


          // adultTotalPrice Field Functions 
          bool hasAdultTotalPrice() const { return this->adultTotalPrice_ != nullptr;};
          void deleteAdultTotalPrice() { this->adultTotalPrice_ = nullptr;};
          inline int32_t getAdultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(adultTotalPrice_, 0) };
          inline PriceInfoDTO& setAdultTotalPrice(int32_t adultTotalPrice) { DARABONBA_PTR_SET_VALUE(adultTotalPrice_, adultTotalPrice) };


          // beforeControlPrice Field Functions 
          bool hasBeforeControlPrice() const { return this->beforeControlPrice_ != nullptr;};
          void deleteBeforeControlPrice() { this->beforeControlPrice_ = nullptr;};
          inline int32_t getBeforeControlPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeControlPrice_, 0) };
          inline PriceInfoDTO& setBeforeControlPrice(int32_t beforeControlPrice) { DARABONBA_PTR_SET_VALUE(beforeControlPrice_, beforeControlPrice) };


          // childPrice Field Functions 
          bool hasChildPrice() const { return this->childPrice_ != nullptr;};
          void deleteChildPrice() { this->childPrice_ = nullptr;};
          inline int32_t getChildPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0) };
          inline PriceInfoDTO& setChildPrice(int32_t childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


          // childTax Field Functions 
          bool hasChildTax() const { return this->childTax_ != nullptr;};
          void deleteChildTax() { this->childTax_ = nullptr;};
          inline int32_t getChildTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0) };
          inline PriceInfoDTO& setChildTax(int32_t childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


          // childTotalPrice Field Functions 
          bool hasChildTotalPrice() const { return this->childTotalPrice_ != nullptr;};
          void deleteChildTotalPrice() { this->childTotalPrice_ = nullptr;};
          inline int32_t getChildTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(childTotalPrice_, 0) };
          inline PriceInfoDTO& setChildTotalPrice(int32_t childTotalPrice) { DARABONBA_PTR_SET_VALUE(childTotalPrice_, childTotalPrice) };


          // infantPrice Field Functions 
          bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
          void deleteInfantPrice() { this->infantPrice_ = nullptr;};
          inline int32_t getInfantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0) };
          inline PriceInfoDTO& setInfantPrice(int32_t infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


          // infantTax Field Functions 
          bool hasInfantTax() const { return this->infantTax_ != nullptr;};
          void deleteInfantTax() { this->infantTax_ = nullptr;};
          inline int32_t getInfantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0) };
          inline PriceInfoDTO& setInfantTax(int32_t infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


          // infantTotalPrice Field Functions 
          bool hasInfantTotalPrice() const { return this->infantTotalPrice_ != nullptr;};
          void deleteInfantTotalPrice() { this->infantTotalPrice_ = nullptr;};
          inline int32_t getInfantTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(infantTotalPrice_, 0) };
          inline PriceInfoDTO& setInfantTotalPrice(int32_t infantTotalPrice) { DARABONBA_PTR_SET_VALUE(infantTotalPrice_, infantTotalPrice) };


          // originalAdultPrice Field Functions 
          bool hasOriginalAdultPrice() const { return this->originalAdultPrice_ != nullptr;};
          void deleteOriginalAdultPrice() { this->originalAdultPrice_ = nullptr;};
          inline int32_t getOriginalAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultPrice_, 0) };
          inline PriceInfoDTO& setOriginalAdultPrice(int32_t originalAdultPrice) { DARABONBA_PTR_SET_VALUE(originalAdultPrice_, originalAdultPrice) };


          // originalAdultTotalPrice Field Functions 
          bool hasOriginalAdultTotalPrice() const { return this->originalAdultTotalPrice_ != nullptr;};
          void deleteOriginalAdultTotalPrice() { this->originalAdultTotalPrice_ = nullptr;};
          inline int32_t getOriginalAdultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultTotalPrice_, 0) };
          inline PriceInfoDTO& setOriginalAdultTotalPrice(int32_t originalAdultTotalPrice) { DARABONBA_PTR_SET_VALUE(originalAdultTotalPrice_, originalAdultTotalPrice) };


          // reShopPriceInfoDTO Field Functions 
          bool hasReShopPriceInfoDTO() const { return this->reShopPriceInfoDTO_ != nullptr;};
          void deleteReShopPriceInfoDTO() { this->reShopPriceInfoDTO_ = nullptr;};
          inline const PriceInfoDTO::ReShopPriceInfoDTO & getReShopPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(reShopPriceInfoDTO_, PriceInfoDTO::ReShopPriceInfoDTO) };
          inline PriceInfoDTO::ReShopPriceInfoDTO getReShopPriceInfoDTO() { DARABONBA_PTR_GET(reShopPriceInfoDTO_, PriceInfoDTO::ReShopPriceInfoDTO) };
          inline PriceInfoDTO& setReShopPriceInfoDTO(const PriceInfoDTO::ReShopPriceInfoDTO & reShopPriceInfoDTO) { DARABONBA_PTR_SET_VALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };
          inline PriceInfoDTO& setReShopPriceInfoDTO(PriceInfoDTO::ReShopPriceInfoDTO && reShopPriceInfoDTO) { DARABONBA_PTR_SET_RVALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };


        protected:
          shared_ptr<int32_t> adultPrice_ {};
          shared_ptr<int32_t> adultTax_ {};
          shared_ptr<int32_t> adultTotalPrice_ {};
          shared_ptr<int32_t> beforeControlPrice_ {};
          shared_ptr<int32_t> childPrice_ {};
          shared_ptr<int32_t> childTax_ {};
          shared_ptr<int32_t> childTotalPrice_ {};
          shared_ptr<int32_t> infantPrice_ {};
          shared_ptr<int32_t> infantTax_ {};
          shared_ptr<int32_t> infantTotalPrice_ {};
          shared_ptr<int32_t> originalAdultPrice_ {};
          shared_ptr<int32_t> originalAdultTotalPrice_ {};
          shared_ptr<PriceInfoDTO::ReShopPriceInfoDTO> reShopPriceInfoDTO_ {};
        };

        class CabinClassInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CabinClassInfo& obj) { 
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(class_name, className_);
            DARABONBA_PTR_TO_JSON(inner_cabin_class, innerCabinClass_);
            DARABONBA_PTR_TO_JSON(quantity, quantity_);
          };
          friend void from_json(const Darabonba::Json& j, CabinClassInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(class_name, className_);
            DARABONBA_PTR_FROM_JSON(inner_cabin_class, innerCabinClass_);
            DARABONBA_PTR_FROM_JSON(quantity, quantity_);
          };
          CabinClassInfo() = default ;
          CabinClassInfo(const CabinClassInfo &) = default ;
          CabinClassInfo(CabinClassInfo &&) = default ;
          CabinClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CabinClassInfo() = default ;
          CabinClassInfo& operator=(const CabinClassInfo &) = default ;
          CabinClassInfo& operator=(CabinClassInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->className_ == nullptr && this->innerCabinClass_ == nullptr && this->quantity_ == nullptr; };
          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline CabinClassInfo& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // className Field Functions 
          bool hasClassName() const { return this->className_ != nullptr;};
          void deleteClassName() { this->className_ = nullptr;};
          inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
          inline CabinClassInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


          // innerCabinClass Field Functions 
          bool hasInnerCabinClass() const { return this->innerCabinClass_ != nullptr;};
          void deleteInnerCabinClass() { this->innerCabinClass_ = nullptr;};
          inline int32_t getInnerCabinClass() const { DARABONBA_PTR_GET_DEFAULT(innerCabinClass_, 0) };
          inline CabinClassInfo& setInnerCabinClass(int32_t innerCabinClass) { DARABONBA_PTR_SET_VALUE(innerCabinClass_, innerCabinClass) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
          inline CabinClassInfo& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        protected:
          shared_ptr<string> cabinClass_ {};
          shared_ptr<string> className_ {};
          shared_ptr<int32_t> innerCabinClass_ {};
          shared_ptr<string> quantity_ {};
        };

        virtual bool empty() const override { return this->attributeShowInfoMap_ == nullptr
        && this->bestDiscount_ == nullptr && this->cabinClassInfo_ == nullptr && this->cabinCode_ == nullptr && this->cabinName_ == nullptr && this->itemId_ == nullptr
        && this->modifyTypeDesc_ == nullptr && this->modifyTypeName_ == nullptr && this->priceInfoDTO_ == nullptr && this->quantity_ == nullptr && this->supportChildTicket_ == nullptr; };
        // attributeShowInfoMap Field Functions 
        bool hasAttributeShowInfoMap() const { return this->attributeShowInfoMap_ != nullptr;};
        void deleteAttributeShowInfoMap() { this->attributeShowInfoMap_ = nullptr;};
        inline const map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>> & getAttributeShowInfoMap() const { DARABONBA_PTR_GET_CONST(attributeShowInfoMap_, map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>>) };
        inline map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>> getAttributeShowInfoMap() { DARABONBA_PTR_GET(attributeShowInfoMap_, map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>>) };
        inline AgentInfos& setAttributeShowInfoMap(const map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>> & attributeShowInfoMap) { DARABONBA_PTR_SET_VALUE(attributeShowInfoMap_, attributeShowInfoMap) };
        inline AgentInfos& setAttributeShowInfoMap(map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>> && attributeShowInfoMap) { DARABONBA_PTR_SET_RVALUE(attributeShowInfoMap_, attributeShowInfoMap) };


        // bestDiscount Field Functions 
        bool hasBestDiscount() const { return this->bestDiscount_ != nullptr;};
        void deleteBestDiscount() { this->bestDiscount_ = nullptr;};
        inline double getBestDiscount() const { DARABONBA_PTR_GET_DEFAULT(bestDiscount_, 0.0) };
        inline AgentInfos& setBestDiscount(double bestDiscount) { DARABONBA_PTR_SET_VALUE(bestDiscount_, bestDiscount) };


        // cabinClassInfo Field Functions 
        bool hasCabinClassInfo() const { return this->cabinClassInfo_ != nullptr;};
        void deleteCabinClassInfo() { this->cabinClassInfo_ = nullptr;};
        inline const AgentInfos::CabinClassInfo & getCabinClassInfo() const { DARABONBA_PTR_GET_CONST(cabinClassInfo_, AgentInfos::CabinClassInfo) };
        inline AgentInfos::CabinClassInfo getCabinClassInfo() { DARABONBA_PTR_GET(cabinClassInfo_, AgentInfos::CabinClassInfo) };
        inline AgentInfos& setCabinClassInfo(const AgentInfos::CabinClassInfo & cabinClassInfo) { DARABONBA_PTR_SET_VALUE(cabinClassInfo_, cabinClassInfo) };
        inline AgentInfos& setCabinClassInfo(AgentInfos::CabinClassInfo && cabinClassInfo) { DARABONBA_PTR_SET_RVALUE(cabinClassInfo_, cabinClassInfo) };


        // cabinCode Field Functions 
        bool hasCabinCode() const { return this->cabinCode_ != nullptr;};
        void deleteCabinCode() { this->cabinCode_ = nullptr;};
        inline int32_t getCabinCode() const { DARABONBA_PTR_GET_DEFAULT(cabinCode_, 0) };
        inline AgentInfos& setCabinCode(int32_t cabinCode) { DARABONBA_PTR_SET_VALUE(cabinCode_, cabinCode) };


        // cabinName Field Functions 
        bool hasCabinName() const { return this->cabinName_ != nullptr;};
        void deleteCabinName() { this->cabinName_ = nullptr;};
        inline string getCabinName() const { DARABONBA_PTR_GET_DEFAULT(cabinName_, "") };
        inline AgentInfos& setCabinName(string cabinName) { DARABONBA_PTR_SET_VALUE(cabinName_, cabinName) };


        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline AgentInfos& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // modifyTypeDesc Field Functions 
        bool hasModifyTypeDesc() const { return this->modifyTypeDesc_ != nullptr;};
        void deleteModifyTypeDesc() { this->modifyTypeDesc_ = nullptr;};
        inline string getModifyTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeDesc_, "") };
        inline AgentInfos& setModifyTypeDesc(string modifyTypeDesc) { DARABONBA_PTR_SET_VALUE(modifyTypeDesc_, modifyTypeDesc) };


        // modifyTypeName Field Functions 
        bool hasModifyTypeName() const { return this->modifyTypeName_ != nullptr;};
        void deleteModifyTypeName() { this->modifyTypeName_ = nullptr;};
        inline string getModifyTypeName() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeName_, "") };
        inline AgentInfos& setModifyTypeName(string modifyTypeName) { DARABONBA_PTR_SET_VALUE(modifyTypeName_, modifyTypeName) };


        // priceInfoDTO Field Functions 
        bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
        void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
        inline const AgentInfos::PriceInfoDTO & getPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, AgentInfos::PriceInfoDTO) };
        inline AgentInfos::PriceInfoDTO getPriceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, AgentInfos::PriceInfoDTO) };
        inline AgentInfos& setPriceInfoDTO(const AgentInfos::PriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
        inline AgentInfos& setPriceInfoDTO(AgentInfos::PriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
        inline AgentInfos& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // supportChildTicket Field Functions 
        bool hasSupportChildTicket() const { return this->supportChildTicket_ != nullptr;};
        void deleteSupportChildTicket() { this->supportChildTicket_ = nullptr;};
        inline bool getSupportChildTicket() const { DARABONBA_PTR_GET_DEFAULT(supportChildTicket_, false) };
        inline AgentInfos& setSupportChildTicket(bool supportChildTicket) { DARABONBA_PTR_SET_VALUE(supportChildTicket_, supportChildTicket) };


      protected:
        shared_ptr<map<string, vector<ModuleAgentInfosAttributeShowInfoMapValue>>> attributeShowInfoMap_ {};
        shared_ptr<double> bestDiscount_ {};
        shared_ptr<AgentInfos::CabinClassInfo> cabinClassInfo_ {};
        shared_ptr<int32_t> cabinCode_ {};
        shared_ptr<string> cabinName_ {};
        shared_ptr<string> itemId_ {};
        shared_ptr<string> modifyTypeDesc_ {};
        shared_ptr<string> modifyTypeName_ {};
        shared_ptr<AgentInfos::PriceInfoDTO> priceInfoDTO_ {};
        shared_ptr<int32_t> quantity_ {};
        shared_ptr<bool> supportChildTicket_ {};
      };

      virtual bool empty() const override { return this->agentInfos_ == nullptr
        && this->agentInfo_ == nullptr && this->cacheKey_ == nullptr && this->flightSegmentInfos_ == nullptr && this->passengerCount_ == nullptr && this->sessionId_ == nullptr; };
      // agentInfos Field Functions 
      bool hasAgentInfos() const { return this->agentInfos_ != nullptr;};
      void deleteAgentInfos() { this->agentInfos_ = nullptr;};
      inline const vector<Module::AgentInfos> & getAgentInfos() const { DARABONBA_PTR_GET_CONST(agentInfos_, vector<Module::AgentInfos>) };
      inline vector<Module::AgentInfos> getAgentInfos() { DARABONBA_PTR_GET(agentInfos_, vector<Module::AgentInfos>) };
      inline Module& setAgentInfos(const vector<Module::AgentInfos> & agentInfos) { DARABONBA_PTR_SET_VALUE(agentInfos_, agentInfos) };
      inline Module& setAgentInfos(vector<Module::AgentInfos> && agentInfos) { DARABONBA_PTR_SET_RVALUE(agentInfos_, agentInfos) };


      // agentInfo Field Functions 
      bool hasAgentInfo() const { return this->agentInfo_ != nullptr;};
      void deleteAgentInfo() { this->agentInfo_ = nullptr;};
      inline const Module::AgentInfo & getAgentInfo() const { DARABONBA_PTR_GET_CONST(agentInfo_, Module::AgentInfo) };
      inline Module::AgentInfo getAgentInfo() { DARABONBA_PTR_GET(agentInfo_, Module::AgentInfo) };
      inline Module& setAgentInfo(const Module::AgentInfo & agentInfo) { DARABONBA_PTR_SET_VALUE(agentInfo_, agentInfo) };
      inline Module& setAgentInfo(Module::AgentInfo && agentInfo) { DARABONBA_PTR_SET_RVALUE(agentInfo_, agentInfo) };


      // cacheKey Field Functions 
      bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
      void deleteCacheKey() { this->cacheKey_ = nullptr;};
      inline string getCacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
      inline Module& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


      // flightSegmentInfos Field Functions 
      bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
      void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
      inline const vector<vector<Module::FlightSegmentInfos>> & getFlightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<vector<Module::FlightSegmentInfos>>) };
      inline vector<vector<Module::FlightSegmentInfos>> getFlightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<vector<Module::FlightSegmentInfos>>) };
      inline Module& setFlightSegmentInfos(const vector<vector<Module::FlightSegmentInfos>> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
      inline Module& setFlightSegmentInfos(vector<vector<Module::FlightSegmentInfos>> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


      // passengerCount Field Functions 
      bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
      void deletePassengerCount() { this->passengerCount_ = nullptr;};
      inline const Module::PassengerCount & getPassengerCount() const { DARABONBA_PTR_GET_CONST(passengerCount_, Module::PassengerCount) };
      inline Module::PassengerCount getPassengerCount() { DARABONBA_PTR_GET(passengerCount_, Module::PassengerCount) };
      inline Module& setPassengerCount(const Module::PassengerCount & passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };
      inline Module& setPassengerCount(Module::PassengerCount && passengerCount) { DARABONBA_PTR_SET_RVALUE(passengerCount_, passengerCount) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Module& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<vector<Module::AgentInfos>> agentInfos_ {};
      shared_ptr<Module::AgentInfo> agentInfo_ {};
      shared_ptr<string> cacheKey_ {};
      shared_ptr<vector<vector<Module::FlightSegmentInfos>>> flightSegmentInfos_ {};
      shared_ptr<Module::PassengerCount> passengerCount_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightModifyOtaSearchV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightModifyOtaSearchV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightModifyOtaSearchV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightModifyOtaSearchV2ResponseBody::Module) };
    inline FlightModifyOtaSearchV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightModifyOtaSearchV2ResponseBody::Module) };
    inline FlightModifyOtaSearchV2ResponseBody& setModule(const FlightModifyOtaSearchV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightModifyOtaSearchV2ResponseBody& setModule(FlightModifyOtaSearchV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightModifyOtaSearchV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightModifyOtaSearchV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightModifyOtaSearchV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightModifyOtaSearchV2ResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
