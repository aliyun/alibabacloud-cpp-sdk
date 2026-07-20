// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODY_HPP_
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
  class FlightModifyListingSearchV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightModifyListingSearchV2ResponseBody() = default ;
    FlightModifyListingSearchV2ResponseBody(const FlightModifyListingSearchV2ResponseBody &) = default ;
    FlightModifyListingSearchV2ResponseBody(FlightModifyListingSearchV2ResponseBody &&) = default ;
    FlightModifyListingSearchV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBody() = default ;
    FlightModifyListingSearchV2ResponseBody& operator=(const FlightModifyListingSearchV2ResponseBody &) = default ;
    FlightModifyListingSearchV2ResponseBody& operator=(FlightModifyListingSearchV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(direct_flight_list, directFlightList_);
        DARABONBA_PTR_TO_JSON(next_req_wait_time, nextReqWaitTime_);
        DARABONBA_PTR_TO_JSON(retry, retry_);
        DARABONBA_PTR_TO_JSON(search_retry_token, searchRetryToken_);
        DARABONBA_PTR_TO_JSON(session_id, sessionId_);
        DARABONBA_PTR_TO_JSON(transfer_flight_list, transferFlightList_);
        DARABONBA_PTR_TO_JSON(transfer_title, transferTitle_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(direct_flight_list, directFlightList_);
        DARABONBA_PTR_FROM_JSON(next_req_wait_time, nextReqWaitTime_);
        DARABONBA_PTR_FROM_JSON(retry, retry_);
        DARABONBA_PTR_FROM_JSON(search_retry_token, searchRetryToken_);
        DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
        DARABONBA_PTR_FROM_JSON(transfer_flight_list, transferFlightList_);
        DARABONBA_PTR_FROM_JSON(transfer_title, transferTitle_);
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
      class TransferFlightList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransferFlightList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabinClass, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabinClassName, cabinClassName_);
          DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
          DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
          DARABONBA_PTR_TO_JSON(flight_transfer_info, flightTransferInfo_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
          DARABONBA_PTR_TO_JSON(left_num, leftNum_);
          DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
          DARABONBA_PTR_TO_JSON(share, share_);
          DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_TO_JSON(span_day, spanDay_);
          DARABONBA_PTR_TO_JSON(stop, stop_);
          DARABONBA_PTR_TO_JSON(transfer, transfer_);
        };
        friend void from_json(const Darabonba::Json& j, TransferFlightList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabinClass, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabinClassName, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
          DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
          DARABONBA_PTR_FROM_JSON(flight_transfer_info, flightTransferInfo_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
          DARABONBA_PTR_FROM_JSON(left_num, leftNum_);
          DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
          DARABONBA_PTR_FROM_JSON(share, share_);
          DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_FROM_JSON(span_day, spanDay_);
          DARABONBA_PTR_FROM_JSON(stop, stop_);
          DARABONBA_PTR_FROM_JSON(transfer, transfer_);
        };
        TransferFlightList() = default ;
        TransferFlightList(const TransferFlightList &) = default ;
        TransferFlightList(TransferFlightList &&) = default ;
        TransferFlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransferFlightList() = default ;
        TransferFlightList& operator=(const TransferFlightList &) = default ;
        TransferFlightList& operator=(TransferFlightList &&) = default ;
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

        class FlightTransferInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightTransferInfo& obj) { 
            DARABONBA_PTR_TO_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_TO_JSON(transfer_city_code, transferCityCode_);
            DARABONBA_PTR_TO_JSON(transfer_city_name, transferCityName_);
            DARABONBA_PTR_TO_JSON(transfer_dep_time, transferDepTime_);
            DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_TO_JSON(transfer_flight_size, transferFlightSize_);
            DARABONBA_PTR_TO_JSON(transfer_share, transferShare_);
            DARABONBA_PTR_TO_JSON(transfer_stop_time, transferStopTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightTransferInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_FROM_JSON(transfer_city_code, transferCityCode_);
            DARABONBA_PTR_FROM_JSON(transfer_city_name, transferCityName_);
            DARABONBA_PTR_FROM_JSON(transfer_dep_time, transferDepTime_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_size, transferFlightSize_);
            DARABONBA_PTR_FROM_JSON(transfer_share, transferShare_);
            DARABONBA_PTR_FROM_JSON(transfer_stop_time, transferStopTime_);
          };
          FlightTransferInfo() = default ;
          FlightTransferInfo(const FlightTransferInfo &) = default ;
          FlightTransferInfo(FlightTransferInfo &&) = default ;
          FlightTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightTransferInfo() = default ;
          FlightTransferInfo& operator=(const FlightTransferInfo &) = default ;
          FlightTransferInfo& operator=(FlightTransferInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TransferAirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferAirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
            };
            friend void from_json(const Darabonba::Json& j, TransferAirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
            virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
            // airlineChineseName Field Functions 
            bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
            void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
            inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
            inline TransferAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


            // airlineChineseShortName Field Functions 
            bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
            void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
            inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
            inline TransferAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline TransferAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineIcon Field Functions 
            bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
            void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
            inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
            inline TransferAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


            // cheapFlight Field Functions 
            bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
            void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
            inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
            inline TransferAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


          protected:
            shared_ptr<string> airlineChineseName_ {};
            shared_ptr<string> airlineChineseShortName_ {};
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineIcon_ {};
            shared_ptr<bool> cheapFlight_ {};
          };

          virtual bool empty() const override { return this->transferAirlineInfo_ == nullptr
        && this->transferCityCode_ == nullptr && this->transferCityName_ == nullptr && this->transferDepTime_ == nullptr && this->transferFlightNo_ == nullptr && this->transferFlightSize_ == nullptr
        && this->transferShare_ == nullptr && this->transferStopTime_ == nullptr; };
          // transferAirlineInfo Field Functions 
          bool hasTransferAirlineInfo() const { return this->transferAirlineInfo_ != nullptr;};
          void deleteTransferAirlineInfo() { this->transferAirlineInfo_ = nullptr;};
          inline const FlightTransferInfo::TransferAirlineInfo & getTransferAirlineInfo() const { DARABONBA_PTR_GET_CONST(transferAirlineInfo_, FlightTransferInfo::TransferAirlineInfo) };
          inline FlightTransferInfo::TransferAirlineInfo getTransferAirlineInfo() { DARABONBA_PTR_GET(transferAirlineInfo_, FlightTransferInfo::TransferAirlineInfo) };
          inline FlightTransferInfo& setTransferAirlineInfo(const FlightTransferInfo::TransferAirlineInfo & transferAirlineInfo) { DARABONBA_PTR_SET_VALUE(transferAirlineInfo_, transferAirlineInfo) };
          inline FlightTransferInfo& setTransferAirlineInfo(FlightTransferInfo::TransferAirlineInfo && transferAirlineInfo) { DARABONBA_PTR_SET_RVALUE(transferAirlineInfo_, transferAirlineInfo) };


          // transferCityCode Field Functions 
          bool hasTransferCityCode() const { return this->transferCityCode_ != nullptr;};
          void deleteTransferCityCode() { this->transferCityCode_ = nullptr;};
          inline string getTransferCityCode() const { DARABONBA_PTR_GET_DEFAULT(transferCityCode_, "") };
          inline FlightTransferInfo& setTransferCityCode(string transferCityCode) { DARABONBA_PTR_SET_VALUE(transferCityCode_, transferCityCode) };


          // transferCityName Field Functions 
          bool hasTransferCityName() const { return this->transferCityName_ != nullptr;};
          void deleteTransferCityName() { this->transferCityName_ = nullptr;};
          inline string getTransferCityName() const { DARABONBA_PTR_GET_DEFAULT(transferCityName_, "") };
          inline FlightTransferInfo& setTransferCityName(string transferCityName) { DARABONBA_PTR_SET_VALUE(transferCityName_, transferCityName) };


          // transferDepTime Field Functions 
          bool hasTransferDepTime() const { return this->transferDepTime_ != nullptr;};
          void deleteTransferDepTime() { this->transferDepTime_ = nullptr;};
          inline string getTransferDepTime() const { DARABONBA_PTR_GET_DEFAULT(transferDepTime_, "") };
          inline FlightTransferInfo& setTransferDepTime(string transferDepTime) { DARABONBA_PTR_SET_VALUE(transferDepTime_, transferDepTime) };


          // transferFlightNo Field Functions 
          bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
          void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
          inline string getTransferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
          inline FlightTransferInfo& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


          // transferFlightSize Field Functions 
          bool hasTransferFlightSize() const { return this->transferFlightSize_ != nullptr;};
          void deleteTransferFlightSize() { this->transferFlightSize_ = nullptr;};
          inline string getTransferFlightSize() const { DARABONBA_PTR_GET_DEFAULT(transferFlightSize_, "") };
          inline FlightTransferInfo& setTransferFlightSize(string transferFlightSize) { DARABONBA_PTR_SET_VALUE(transferFlightSize_, transferFlightSize) };


          // transferShare Field Functions 
          bool hasTransferShare() const { return this->transferShare_ != nullptr;};
          void deleteTransferShare() { this->transferShare_ = nullptr;};
          inline bool getTransferShare() const { DARABONBA_PTR_GET_DEFAULT(transferShare_, false) };
          inline FlightTransferInfo& setTransferShare(bool transferShare) { DARABONBA_PTR_SET_VALUE(transferShare_, transferShare) };


          // transferStopTime Field Functions 
          bool hasTransferStopTime() const { return this->transferStopTime_ != nullptr;};
          void deleteTransferStopTime() { this->transferStopTime_ = nullptr;};
          inline int32_t getTransferStopTime() const { DARABONBA_PTR_GET_DEFAULT(transferStopTime_, 0) };
          inline FlightTransferInfo& setTransferStopTime(int32_t transferStopTime) { DARABONBA_PTR_SET_VALUE(transferStopTime_, transferStopTime) };


        protected:
          shared_ptr<FlightTransferInfo::TransferAirlineInfo> transferAirlineInfo_ {};
          shared_ptr<string> transferCityCode_ {};
          shared_ptr<string> transferCityName_ {};
          shared_ptr<string> transferDepTime_ {};
          shared_ptr<string> transferFlightNo_ {};
          shared_ptr<string> transferFlightSize_ {};
          shared_ptr<bool> transferShare_ {};
          shared_ptr<int32_t> transferStopTime_ {};
        };

        class FlightStopInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightStopInfo& obj) { 
            DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightStopInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
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
        && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr && this->stopDepTerm_ == nullptr
        && this->stopDepTime_ == nullptr; };
          // stopAirport Field Functions 
          bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
          void deleteStopAirport() { this->stopAirport_ = nullptr;};
          inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
          inline FlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


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


        protected:
          shared_ptr<string> stopAirport_ {};
          shared_ptr<string> stopArrTerm_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopCityName_ {};
          shared_ptr<string> stopDepTerm_ {};
          shared_ptr<string> stopDepTime_ {};
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
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrTime_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr && this->flightNo_ == nullptr
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfo_ == nullptr && this->flightTransferInfo_ == nullptr && this->flightType_ == nullptr
        && this->journeySeq_ == nullptr && this->leftNum_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->priceInfoDTO_ == nullptr
        && this->segmentSeq_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr && this->spanDay_ == nullptr && this->stop_ == nullptr
        && this->transfer_ == nullptr; };
        // airlineInfo Field Functions 
        bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
        void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
        inline const TransferFlightList::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, TransferFlightList::AirlineInfo) };
        inline TransferFlightList::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, TransferFlightList::AirlineInfo) };
        inline TransferFlightList& setAirlineInfo(const TransferFlightList::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
        inline TransferFlightList& setAirlineInfo(TransferFlightList::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


        // arrAirportInfo Field Functions 
        bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
        void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
        inline const TransferFlightList::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, TransferFlightList::ArrAirportInfo) };
        inline TransferFlightList::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, TransferFlightList::ArrAirportInfo) };
        inline TransferFlightList& setArrAirportInfo(const TransferFlightList::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
        inline TransferFlightList& setArrAirportInfo(TransferFlightList::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline TransferFlightList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline TransferFlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline TransferFlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline TransferFlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // depAirportInfo Field Functions 
        bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
        void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
        inline const TransferFlightList::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, TransferFlightList::DepAirportInfo) };
        inline TransferFlightList::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, TransferFlightList::DepAirportInfo) };
        inline TransferFlightList& setDepAirportInfo(const TransferFlightList::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
        inline TransferFlightList& setDepAirportInfo(TransferFlightList::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline TransferFlightList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline TransferFlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline TransferFlightList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline TransferFlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightShareInfo Field Functions 
        bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
        void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
        inline const TransferFlightList::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, TransferFlightList::FlightShareInfo) };
        inline TransferFlightList::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, TransferFlightList::FlightShareInfo) };
        inline TransferFlightList& setFlightShareInfo(const TransferFlightList::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
        inline TransferFlightList& setFlightShareInfo(TransferFlightList::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


        // flightSize Field Functions 
        bool hasFlightSize() const { return this->flightSize_ != nullptr;};
        void deleteFlightSize() { this->flightSize_ = nullptr;};
        inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
        inline TransferFlightList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


        // flightStopInfo Field Functions 
        bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
        void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
        inline const TransferFlightList::FlightStopInfo & getFlightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, TransferFlightList::FlightStopInfo) };
        inline TransferFlightList::FlightStopInfo getFlightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, TransferFlightList::FlightStopInfo) };
        inline TransferFlightList& setFlightStopInfo(const TransferFlightList::FlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
        inline TransferFlightList& setFlightStopInfo(TransferFlightList::FlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


        // flightTransferInfo Field Functions 
        bool hasFlightTransferInfo() const { return this->flightTransferInfo_ != nullptr;};
        void deleteFlightTransferInfo() { this->flightTransferInfo_ = nullptr;};
        inline const TransferFlightList::FlightTransferInfo & getFlightTransferInfo() const { DARABONBA_PTR_GET_CONST(flightTransferInfo_, TransferFlightList::FlightTransferInfo) };
        inline TransferFlightList::FlightTransferInfo getFlightTransferInfo() { DARABONBA_PTR_GET(flightTransferInfo_, TransferFlightList::FlightTransferInfo) };
        inline TransferFlightList& setFlightTransferInfo(const TransferFlightList::FlightTransferInfo & flightTransferInfo) { DARABONBA_PTR_SET_VALUE(flightTransferInfo_, flightTransferInfo) };
        inline TransferFlightList& setFlightTransferInfo(TransferFlightList::FlightTransferInfo && flightTransferInfo) { DARABONBA_PTR_SET_RVALUE(flightTransferInfo_, flightTransferInfo) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline TransferFlightList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // journeySeq Field Functions 
        bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
        void deleteJourneySeq() { this->journeySeq_ = nullptr;};
        inline int32_t getJourneySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
        inline TransferFlightList& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


        // leftNum Field Functions 
        bool hasLeftNum() const { return this->leftNum_ != nullptr;};
        void deleteLeftNum() { this->leftNum_ = nullptr;};
        inline string getLeftNum() const { DARABONBA_PTR_GET_DEFAULT(leftNum_, "") };
        inline TransferFlightList& setLeftNum(string leftNum) { DARABONBA_PTR_SET_VALUE(leftNum_, leftNum) };


        // manufacturer Field Functions 
        bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
        void deleteManufacturer() { this->manufacturer_ = nullptr;};
        inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
        inline TransferFlightList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline TransferFlightList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // priceInfoDTO Field Functions 
        bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
        void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
        inline const TransferFlightList::PriceInfoDTO & getPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, TransferFlightList::PriceInfoDTO) };
        inline TransferFlightList::PriceInfoDTO getPriceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, TransferFlightList::PriceInfoDTO) };
        inline TransferFlightList& setPriceInfoDTO(const TransferFlightList::PriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
        inline TransferFlightList& setPriceInfoDTO(TransferFlightList::PriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


        // segmentSeq Field Functions 
        bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
        void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
        inline int32_t getSegmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
        inline TransferFlightList& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


        // share Field Functions 
        bool hasShare() const { return this->share_ != nullptr;};
        void deleteShare() { this->share_ = nullptr;};
        inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
        inline TransferFlightList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


        // shortFlightSize Field Functions 
        bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
        void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
        inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
        inline TransferFlightList& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


        // spanDay Field Functions 
        bool hasSpanDay() const { return this->spanDay_ != nullptr;};
        void deleteSpanDay() { this->spanDay_ = nullptr;};
        inline string getSpanDay() const { DARABONBA_PTR_GET_DEFAULT(spanDay_, "") };
        inline TransferFlightList& setSpanDay(string spanDay) { DARABONBA_PTR_SET_VALUE(spanDay_, spanDay) };


        // stop Field Functions 
        bool hasStop() const { return this->stop_ != nullptr;};
        void deleteStop() { this->stop_ = nullptr;};
        inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
        inline TransferFlightList& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


        // transfer Field Functions 
        bool hasTransfer() const { return this->transfer_ != nullptr;};
        void deleteTransfer() { this->transfer_ = nullptr;};
        inline bool getTransfer() const { DARABONBA_PTR_GET_DEFAULT(transfer_, false) };
        inline TransferFlightList& setTransfer(bool transfer) { DARABONBA_PTR_SET_VALUE(transfer_, transfer) };


      protected:
        shared_ptr<TransferFlightList::AirlineInfo> airlineInfo_ {};
        shared_ptr<TransferFlightList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassName_ {};
        shared_ptr<TransferFlightList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<TransferFlightList::FlightShareInfo> flightShareInfo_ {};
        shared_ptr<string> flightSize_ {};
        shared_ptr<TransferFlightList::FlightStopInfo> flightStopInfo_ {};
        shared_ptr<TransferFlightList::FlightTransferInfo> flightTransferInfo_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<int32_t> journeySeq_ {};
        shared_ptr<string> leftNum_ {};
        shared_ptr<string> manufacturer_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<TransferFlightList::PriceInfoDTO> priceInfoDTO_ {};
        shared_ptr<int32_t> segmentSeq_ {};
        shared_ptr<bool> share_ {};
        shared_ptr<string> shortFlightSize_ {};
        shared_ptr<string> spanDay_ {};
        shared_ptr<bool> stop_ {};
        shared_ptr<bool> transfer_ {};
      };

      class DirectFlightList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectFlightList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabinClass, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabinClassName, cabinClassName_);
          DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(duration, duration_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
          DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
          DARABONBA_PTR_TO_JSON(flight_transfer_info, flightTransferInfo_);
          DARABONBA_PTR_TO_JSON(flight_type, flightType_);
          DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
          DARABONBA_PTR_TO_JSON(left_num, leftNum_);
          DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
          DARABONBA_PTR_TO_JSON(share, share_);
          DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_TO_JSON(span_day, spanDay_);
          DARABONBA_PTR_TO_JSON(stop, stop_);
          DARABONBA_PTR_TO_JSON(transfer, transfer_);
        };
        friend void from_json(const Darabonba::Json& j, DirectFlightList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
          DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabinClass, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabinClassName, cabinClassName_);
          DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(duration, duration_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
          DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
          DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
          DARABONBA_PTR_FROM_JSON(flight_transfer_info, flightTransferInfo_);
          DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
          DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
          DARABONBA_PTR_FROM_JSON(left_num, leftNum_);
          DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
          DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
          DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
          DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
          DARABONBA_PTR_FROM_JSON(share, share_);
          DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
          DARABONBA_PTR_FROM_JSON(span_day, spanDay_);
          DARABONBA_PTR_FROM_JSON(stop, stop_);
          DARABONBA_PTR_FROM_JSON(transfer, transfer_);
        };
        DirectFlightList() = default ;
        DirectFlightList(const DirectFlightList &) = default ;
        DirectFlightList(DirectFlightList &&) = default ;
        DirectFlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectFlightList() = default ;
        DirectFlightList& operator=(const DirectFlightList &) = default ;
        DirectFlightList& operator=(DirectFlightList &&) = default ;
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

        class FlightTransferInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightTransferInfo& obj) { 
            DARABONBA_PTR_TO_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_TO_JSON(transfer_city_code, transferCityCode_);
            DARABONBA_PTR_TO_JSON(transfer_city_name, transferCityName_);
            DARABONBA_PTR_TO_JSON(transfer_dep_time, transferDepTime_);
            DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_TO_JSON(transfer_flight_size, transferFlightSize_);
            DARABONBA_PTR_TO_JSON(transfer_share, transferShare_);
            DARABONBA_PTR_TO_JSON(transfer_stop_time, transferStopTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightTransferInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(transfer_airline_info, transferAirlineInfo_);
            DARABONBA_PTR_FROM_JSON(transfer_city_code, transferCityCode_);
            DARABONBA_PTR_FROM_JSON(transfer_city_name, transferCityName_);
            DARABONBA_PTR_FROM_JSON(transfer_dep_time, transferDepTime_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
            DARABONBA_PTR_FROM_JSON(transfer_flight_size, transferFlightSize_);
            DARABONBA_PTR_FROM_JSON(transfer_share, transferShare_);
            DARABONBA_PTR_FROM_JSON(transfer_stop_time, transferStopTime_);
          };
          FlightTransferInfo() = default ;
          FlightTransferInfo(const FlightTransferInfo &) = default ;
          FlightTransferInfo(FlightTransferInfo &&) = default ;
          FlightTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightTransferInfo() = default ;
          FlightTransferInfo& operator=(const FlightTransferInfo &) = default ;
          FlightTransferInfo& operator=(FlightTransferInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TransferAirlineInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransferAirlineInfo& obj) { 
              DARABONBA_PTR_TO_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_TO_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_TO_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_TO_JSON(cheap_flight, cheapFlight_);
            };
            friend void from_json(const Darabonba::Json& j, TransferAirlineInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(airline_chinese_name, airlineChineseName_);
              DARABONBA_PTR_FROM_JSON(airline_chinese_short_name, airlineChineseShortName_);
              DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
              DARABONBA_PTR_FROM_JSON(airline_icon, airlineIcon_);
              DARABONBA_PTR_FROM_JSON(cheap_flight, cheapFlight_);
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
            virtual bool empty() const override { return this->airlineChineseName_ == nullptr
        && this->airlineChineseShortName_ == nullptr && this->airlineCode_ == nullptr && this->airlineIcon_ == nullptr && this->cheapFlight_ == nullptr; };
            // airlineChineseName Field Functions 
            bool hasAirlineChineseName() const { return this->airlineChineseName_ != nullptr;};
            void deleteAirlineChineseName() { this->airlineChineseName_ = nullptr;};
            inline string getAirlineChineseName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseName_, "") };
            inline TransferAirlineInfo& setAirlineChineseName(string airlineChineseName) { DARABONBA_PTR_SET_VALUE(airlineChineseName_, airlineChineseName) };


            // airlineChineseShortName Field Functions 
            bool hasAirlineChineseShortName() const { return this->airlineChineseShortName_ != nullptr;};
            void deleteAirlineChineseShortName() { this->airlineChineseShortName_ = nullptr;};
            inline string getAirlineChineseShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineChineseShortName_, "") };
            inline TransferAirlineInfo& setAirlineChineseShortName(string airlineChineseShortName) { DARABONBA_PTR_SET_VALUE(airlineChineseShortName_, airlineChineseShortName) };


            // airlineCode Field Functions 
            bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
            void deleteAirlineCode() { this->airlineCode_ = nullptr;};
            inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
            inline TransferAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


            // airlineIcon Field Functions 
            bool hasAirlineIcon() const { return this->airlineIcon_ != nullptr;};
            void deleteAirlineIcon() { this->airlineIcon_ = nullptr;};
            inline string getAirlineIcon() const { DARABONBA_PTR_GET_DEFAULT(airlineIcon_, "") };
            inline TransferAirlineInfo& setAirlineIcon(string airlineIcon) { DARABONBA_PTR_SET_VALUE(airlineIcon_, airlineIcon) };


            // cheapFlight Field Functions 
            bool hasCheapFlight() const { return this->cheapFlight_ != nullptr;};
            void deleteCheapFlight() { this->cheapFlight_ = nullptr;};
            inline bool getCheapFlight() const { DARABONBA_PTR_GET_DEFAULT(cheapFlight_, false) };
            inline TransferAirlineInfo& setCheapFlight(bool cheapFlight) { DARABONBA_PTR_SET_VALUE(cheapFlight_, cheapFlight) };


          protected:
            shared_ptr<string> airlineChineseName_ {};
            shared_ptr<string> airlineChineseShortName_ {};
            shared_ptr<string> airlineCode_ {};
            shared_ptr<string> airlineIcon_ {};
            shared_ptr<bool> cheapFlight_ {};
          };

          virtual bool empty() const override { return this->transferAirlineInfo_ == nullptr
        && this->transferCityCode_ == nullptr && this->transferCityName_ == nullptr && this->transferDepTime_ == nullptr && this->transferFlightNo_ == nullptr && this->transferFlightSize_ == nullptr
        && this->transferShare_ == nullptr && this->transferStopTime_ == nullptr; };
          // transferAirlineInfo Field Functions 
          bool hasTransferAirlineInfo() const { return this->transferAirlineInfo_ != nullptr;};
          void deleteTransferAirlineInfo() { this->transferAirlineInfo_ = nullptr;};
          inline const FlightTransferInfo::TransferAirlineInfo & getTransferAirlineInfo() const { DARABONBA_PTR_GET_CONST(transferAirlineInfo_, FlightTransferInfo::TransferAirlineInfo) };
          inline FlightTransferInfo::TransferAirlineInfo getTransferAirlineInfo() { DARABONBA_PTR_GET(transferAirlineInfo_, FlightTransferInfo::TransferAirlineInfo) };
          inline FlightTransferInfo& setTransferAirlineInfo(const FlightTransferInfo::TransferAirlineInfo & transferAirlineInfo) { DARABONBA_PTR_SET_VALUE(transferAirlineInfo_, transferAirlineInfo) };
          inline FlightTransferInfo& setTransferAirlineInfo(FlightTransferInfo::TransferAirlineInfo && transferAirlineInfo) { DARABONBA_PTR_SET_RVALUE(transferAirlineInfo_, transferAirlineInfo) };


          // transferCityCode Field Functions 
          bool hasTransferCityCode() const { return this->transferCityCode_ != nullptr;};
          void deleteTransferCityCode() { this->transferCityCode_ = nullptr;};
          inline string getTransferCityCode() const { DARABONBA_PTR_GET_DEFAULT(transferCityCode_, "") };
          inline FlightTransferInfo& setTransferCityCode(string transferCityCode) { DARABONBA_PTR_SET_VALUE(transferCityCode_, transferCityCode) };


          // transferCityName Field Functions 
          bool hasTransferCityName() const { return this->transferCityName_ != nullptr;};
          void deleteTransferCityName() { this->transferCityName_ = nullptr;};
          inline string getTransferCityName() const { DARABONBA_PTR_GET_DEFAULT(transferCityName_, "") };
          inline FlightTransferInfo& setTransferCityName(string transferCityName) { DARABONBA_PTR_SET_VALUE(transferCityName_, transferCityName) };


          // transferDepTime Field Functions 
          bool hasTransferDepTime() const { return this->transferDepTime_ != nullptr;};
          void deleteTransferDepTime() { this->transferDepTime_ = nullptr;};
          inline string getTransferDepTime() const { DARABONBA_PTR_GET_DEFAULT(transferDepTime_, "") };
          inline FlightTransferInfo& setTransferDepTime(string transferDepTime) { DARABONBA_PTR_SET_VALUE(transferDepTime_, transferDepTime) };


          // transferFlightNo Field Functions 
          bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
          void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
          inline string getTransferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
          inline FlightTransferInfo& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


          // transferFlightSize Field Functions 
          bool hasTransferFlightSize() const { return this->transferFlightSize_ != nullptr;};
          void deleteTransferFlightSize() { this->transferFlightSize_ = nullptr;};
          inline string getTransferFlightSize() const { DARABONBA_PTR_GET_DEFAULT(transferFlightSize_, "") };
          inline FlightTransferInfo& setTransferFlightSize(string transferFlightSize) { DARABONBA_PTR_SET_VALUE(transferFlightSize_, transferFlightSize) };


          // transferShare Field Functions 
          bool hasTransferShare() const { return this->transferShare_ != nullptr;};
          void deleteTransferShare() { this->transferShare_ = nullptr;};
          inline bool getTransferShare() const { DARABONBA_PTR_GET_DEFAULT(transferShare_, false) };
          inline FlightTransferInfo& setTransferShare(bool transferShare) { DARABONBA_PTR_SET_VALUE(transferShare_, transferShare) };


          // transferStopTime Field Functions 
          bool hasTransferStopTime() const { return this->transferStopTime_ != nullptr;};
          void deleteTransferStopTime() { this->transferStopTime_ = nullptr;};
          inline int32_t getTransferStopTime() const { DARABONBA_PTR_GET_DEFAULT(transferStopTime_, 0) };
          inline FlightTransferInfo& setTransferStopTime(int32_t transferStopTime) { DARABONBA_PTR_SET_VALUE(transferStopTime_, transferStopTime) };


        protected:
          shared_ptr<FlightTransferInfo::TransferAirlineInfo> transferAirlineInfo_ {};
          shared_ptr<string> transferCityCode_ {};
          shared_ptr<string> transferCityName_ {};
          shared_ptr<string> transferDepTime_ {};
          shared_ptr<string> transferFlightNo_ {};
          shared_ptr<string> transferFlightSize_ {};
          shared_ptr<bool> transferShare_ {};
          shared_ptr<int32_t> transferStopTime_ {};
        };

        class FlightStopInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightStopInfo& obj) { 
            DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_TO_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_TO_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_TO_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
          };
          friend void from_json(const Darabonba::Json& j, FlightStopInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
            DARABONBA_PTR_FROM_JSON(stop_arr_term, stopArrTerm_);
            DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
            DARABONBA_PTR_FROM_JSON(stop_city_code, stopCityCode_);
            DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
            DARABONBA_PTR_FROM_JSON(stop_dep_term, stopDepTerm_);
            DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
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
        && this->stopArrTerm_ == nullptr && this->stopArrTime_ == nullptr && this->stopCityCode_ == nullptr && this->stopCityName_ == nullptr && this->stopDepTerm_ == nullptr
        && this->stopDepTime_ == nullptr; };
          // stopAirport Field Functions 
          bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
          void deleteStopAirport() { this->stopAirport_ = nullptr;};
          inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
          inline FlightStopInfo& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


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


        protected:
          shared_ptr<string> stopAirport_ {};
          shared_ptr<string> stopArrTerm_ {};
          shared_ptr<string> stopArrTime_ {};
          shared_ptr<string> stopCityCode_ {};
          shared_ptr<string> stopCityName_ {};
          shared_ptr<string> stopDepTerm_ {};
          shared_ptr<string> stopDepTime_ {};
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
        && this->arrAirportInfo_ == nullptr && this->arrCityCode_ == nullptr && this->arrTime_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr
        && this->depAirportInfo_ == nullptr && this->depCityCode_ == nullptr && this->depTime_ == nullptr && this->duration_ == nullptr && this->flightNo_ == nullptr
        && this->flightShareInfo_ == nullptr && this->flightSize_ == nullptr && this->flightStopInfo_ == nullptr && this->flightTransferInfo_ == nullptr && this->flightType_ == nullptr
        && this->journeySeq_ == nullptr && this->leftNum_ == nullptr && this->manufacturer_ == nullptr && this->mealDesc_ == nullptr && this->priceInfoDTO_ == nullptr
        && this->segmentSeq_ == nullptr && this->share_ == nullptr && this->shortFlightSize_ == nullptr && this->spanDay_ == nullptr && this->stop_ == nullptr
        && this->transfer_ == nullptr; };
        // airlineInfo Field Functions 
        bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
        void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
        inline const DirectFlightList::AirlineInfo & getAirlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, DirectFlightList::AirlineInfo) };
        inline DirectFlightList::AirlineInfo getAirlineInfo() { DARABONBA_PTR_GET(airlineInfo_, DirectFlightList::AirlineInfo) };
        inline DirectFlightList& setAirlineInfo(const DirectFlightList::AirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
        inline DirectFlightList& setAirlineInfo(DirectFlightList::AirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


        // arrAirportInfo Field Functions 
        bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
        void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
        inline const DirectFlightList::ArrAirportInfo & getArrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, DirectFlightList::ArrAirportInfo) };
        inline DirectFlightList::ArrAirportInfo getArrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, DirectFlightList::ArrAirportInfo) };
        inline DirectFlightList& setArrAirportInfo(const DirectFlightList::ArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
        inline DirectFlightList& setArrAirportInfo(DirectFlightList::ArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline DirectFlightList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline DirectFlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
        inline DirectFlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassName Field Functions 
        bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
        void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
        inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
        inline DirectFlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


        // depAirportInfo Field Functions 
        bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
        void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
        inline const DirectFlightList::DepAirportInfo & getDepAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, DirectFlightList::DepAirportInfo) };
        inline DirectFlightList::DepAirportInfo getDepAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, DirectFlightList::DepAirportInfo) };
        inline DirectFlightList& setDepAirportInfo(const DirectFlightList::DepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
        inline DirectFlightList& setDepAirportInfo(DirectFlightList::DepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline DirectFlightList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline DirectFlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline DirectFlightList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline DirectFlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // flightShareInfo Field Functions 
        bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
        void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
        inline const DirectFlightList::FlightShareInfo & getFlightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, DirectFlightList::FlightShareInfo) };
        inline DirectFlightList::FlightShareInfo getFlightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, DirectFlightList::FlightShareInfo) };
        inline DirectFlightList& setFlightShareInfo(const DirectFlightList::FlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
        inline DirectFlightList& setFlightShareInfo(DirectFlightList::FlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


        // flightSize Field Functions 
        bool hasFlightSize() const { return this->flightSize_ != nullptr;};
        void deleteFlightSize() { this->flightSize_ = nullptr;};
        inline string getFlightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
        inline DirectFlightList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


        // flightStopInfo Field Functions 
        bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
        void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
        inline const DirectFlightList::FlightStopInfo & getFlightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, DirectFlightList::FlightStopInfo) };
        inline DirectFlightList::FlightStopInfo getFlightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, DirectFlightList::FlightStopInfo) };
        inline DirectFlightList& setFlightStopInfo(const DirectFlightList::FlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
        inline DirectFlightList& setFlightStopInfo(DirectFlightList::FlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


        // flightTransferInfo Field Functions 
        bool hasFlightTransferInfo() const { return this->flightTransferInfo_ != nullptr;};
        void deleteFlightTransferInfo() { this->flightTransferInfo_ = nullptr;};
        inline const DirectFlightList::FlightTransferInfo & getFlightTransferInfo() const { DARABONBA_PTR_GET_CONST(flightTransferInfo_, DirectFlightList::FlightTransferInfo) };
        inline DirectFlightList::FlightTransferInfo getFlightTransferInfo() { DARABONBA_PTR_GET(flightTransferInfo_, DirectFlightList::FlightTransferInfo) };
        inline DirectFlightList& setFlightTransferInfo(const DirectFlightList::FlightTransferInfo & flightTransferInfo) { DARABONBA_PTR_SET_VALUE(flightTransferInfo_, flightTransferInfo) };
        inline DirectFlightList& setFlightTransferInfo(DirectFlightList::FlightTransferInfo && flightTransferInfo) { DARABONBA_PTR_SET_RVALUE(flightTransferInfo_, flightTransferInfo) };


        // flightType Field Functions 
        bool hasFlightType() const { return this->flightType_ != nullptr;};
        void deleteFlightType() { this->flightType_ = nullptr;};
        inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
        inline DirectFlightList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


        // journeySeq Field Functions 
        bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
        void deleteJourneySeq() { this->journeySeq_ = nullptr;};
        inline int32_t getJourneySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
        inline DirectFlightList& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


        // leftNum Field Functions 
        bool hasLeftNum() const { return this->leftNum_ != nullptr;};
        void deleteLeftNum() { this->leftNum_ = nullptr;};
        inline string getLeftNum() const { DARABONBA_PTR_GET_DEFAULT(leftNum_, "") };
        inline DirectFlightList& setLeftNum(string leftNum) { DARABONBA_PTR_SET_VALUE(leftNum_, leftNum) };


        // manufacturer Field Functions 
        bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
        void deleteManufacturer() { this->manufacturer_ = nullptr;};
        inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
        inline DirectFlightList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


        // mealDesc Field Functions 
        bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
        void deleteMealDesc() { this->mealDesc_ = nullptr;};
        inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
        inline DirectFlightList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


        // priceInfoDTO Field Functions 
        bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
        void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
        inline const DirectFlightList::PriceInfoDTO & getPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, DirectFlightList::PriceInfoDTO) };
        inline DirectFlightList::PriceInfoDTO getPriceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, DirectFlightList::PriceInfoDTO) };
        inline DirectFlightList& setPriceInfoDTO(const DirectFlightList::PriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
        inline DirectFlightList& setPriceInfoDTO(DirectFlightList::PriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


        // segmentSeq Field Functions 
        bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
        void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
        inline int32_t getSegmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
        inline DirectFlightList& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


        // share Field Functions 
        bool hasShare() const { return this->share_ != nullptr;};
        void deleteShare() { this->share_ = nullptr;};
        inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
        inline DirectFlightList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


        // shortFlightSize Field Functions 
        bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
        void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
        inline string getShortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
        inline DirectFlightList& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


        // spanDay Field Functions 
        bool hasSpanDay() const { return this->spanDay_ != nullptr;};
        void deleteSpanDay() { this->spanDay_ = nullptr;};
        inline string getSpanDay() const { DARABONBA_PTR_GET_DEFAULT(spanDay_, "") };
        inline DirectFlightList& setSpanDay(string spanDay) { DARABONBA_PTR_SET_VALUE(spanDay_, spanDay) };


        // stop Field Functions 
        bool hasStop() const { return this->stop_ != nullptr;};
        void deleteStop() { this->stop_ = nullptr;};
        inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
        inline DirectFlightList& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


        // transfer Field Functions 
        bool hasTransfer() const { return this->transfer_ != nullptr;};
        void deleteTransfer() { this->transfer_ = nullptr;};
        inline bool getTransfer() const { DARABONBA_PTR_GET_DEFAULT(transfer_, false) };
        inline DirectFlightList& setTransfer(bool transfer) { DARABONBA_PTR_SET_VALUE(transfer_, transfer) };


      protected:
        shared_ptr<DirectFlightList::AirlineInfo> airlineInfo_ {};
        shared_ptr<DirectFlightList::ArrAirportInfo> arrAirportInfo_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabinClass_ {};
        shared_ptr<string> cabinClassName_ {};
        shared_ptr<DirectFlightList::DepAirportInfo> depAirportInfo_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<DirectFlightList::FlightShareInfo> flightShareInfo_ {};
        shared_ptr<string> flightSize_ {};
        shared_ptr<DirectFlightList::FlightStopInfo> flightStopInfo_ {};
        shared_ptr<DirectFlightList::FlightTransferInfo> flightTransferInfo_ {};
        shared_ptr<string> flightType_ {};
        shared_ptr<int32_t> journeySeq_ {};
        shared_ptr<string> leftNum_ {};
        shared_ptr<string> manufacturer_ {};
        shared_ptr<string> mealDesc_ {};
        shared_ptr<DirectFlightList::PriceInfoDTO> priceInfoDTO_ {};
        shared_ptr<int32_t> segmentSeq_ {};
        shared_ptr<bool> share_ {};
        shared_ptr<string> shortFlightSize_ {};
        shared_ptr<string> spanDay_ {};
        shared_ptr<bool> stop_ {};
        shared_ptr<bool> transfer_ {};
      };

      virtual bool empty() const override { return this->directFlightList_ == nullptr
        && this->nextReqWaitTime_ == nullptr && this->retry_ == nullptr && this->searchRetryToken_ == nullptr && this->sessionId_ == nullptr && this->transferFlightList_ == nullptr
        && this->transferTitle_ == nullptr; };
      // directFlightList Field Functions 
      bool hasDirectFlightList() const { return this->directFlightList_ != nullptr;};
      void deleteDirectFlightList() { this->directFlightList_ = nullptr;};
      inline const vector<Module::DirectFlightList> & getDirectFlightList() const { DARABONBA_PTR_GET_CONST(directFlightList_, vector<Module::DirectFlightList>) };
      inline vector<Module::DirectFlightList> getDirectFlightList() { DARABONBA_PTR_GET(directFlightList_, vector<Module::DirectFlightList>) };
      inline Module& setDirectFlightList(const vector<Module::DirectFlightList> & directFlightList) { DARABONBA_PTR_SET_VALUE(directFlightList_, directFlightList) };
      inline Module& setDirectFlightList(vector<Module::DirectFlightList> && directFlightList) { DARABONBA_PTR_SET_RVALUE(directFlightList_, directFlightList) };


      // nextReqWaitTime Field Functions 
      bool hasNextReqWaitTime() const { return this->nextReqWaitTime_ != nullptr;};
      void deleteNextReqWaitTime() { this->nextReqWaitTime_ = nullptr;};
      inline int64_t getNextReqWaitTime() const { DARABONBA_PTR_GET_DEFAULT(nextReqWaitTime_, 0L) };
      inline Module& setNextReqWaitTime(int64_t nextReqWaitTime) { DARABONBA_PTR_SET_VALUE(nextReqWaitTime_, nextReqWaitTime) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline bool getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
      inline Module& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


      // searchRetryToken Field Functions 
      bool hasSearchRetryToken() const { return this->searchRetryToken_ != nullptr;};
      void deleteSearchRetryToken() { this->searchRetryToken_ = nullptr;};
      inline string getSearchRetryToken() const { DARABONBA_PTR_GET_DEFAULT(searchRetryToken_, "") };
      inline Module& setSearchRetryToken(string searchRetryToken) { DARABONBA_PTR_SET_VALUE(searchRetryToken_, searchRetryToken) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Module& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // transferFlightList Field Functions 
      bool hasTransferFlightList() const { return this->transferFlightList_ != nullptr;};
      void deleteTransferFlightList() { this->transferFlightList_ = nullptr;};
      inline const vector<Module::TransferFlightList> & getTransferFlightList() const { DARABONBA_PTR_GET_CONST(transferFlightList_, vector<Module::TransferFlightList>) };
      inline vector<Module::TransferFlightList> getTransferFlightList() { DARABONBA_PTR_GET(transferFlightList_, vector<Module::TransferFlightList>) };
      inline Module& setTransferFlightList(const vector<Module::TransferFlightList> & transferFlightList) { DARABONBA_PTR_SET_VALUE(transferFlightList_, transferFlightList) };
      inline Module& setTransferFlightList(vector<Module::TransferFlightList> && transferFlightList) { DARABONBA_PTR_SET_RVALUE(transferFlightList_, transferFlightList) };


      // transferTitle Field Functions 
      bool hasTransferTitle() const { return this->transferTitle_ != nullptr;};
      void deleteTransferTitle() { this->transferTitle_ = nullptr;};
      inline string getTransferTitle() const { DARABONBA_PTR_GET_DEFAULT(transferTitle_, "") };
      inline Module& setTransferTitle(string transferTitle) { DARABONBA_PTR_SET_VALUE(transferTitle_, transferTitle) };


    protected:
      shared_ptr<vector<Module::DirectFlightList>> directFlightList_ {};
      shared_ptr<int64_t> nextReqWaitTime_ {};
      shared_ptr<bool> retry_ {};
      shared_ptr<string> searchRetryToken_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<vector<Module::TransferFlightList>> transferFlightList_ {};
      shared_ptr<string> transferTitle_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightModifyListingSearchV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightModifyListingSearchV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightModifyListingSearchV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightModifyListingSearchV2ResponseBody::Module) };
    inline FlightModifyListingSearchV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightModifyListingSearchV2ResponseBody::Module) };
    inline FlightModifyListingSearchV2ResponseBody& setModule(const FlightModifyListingSearchV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightModifyListingSearchV2ResponseBody& setModule(FlightModifyListingSearchV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightModifyListingSearchV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightModifyListingSearchV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightModifyListingSearchV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightModifyListingSearchV2ResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // requestId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
