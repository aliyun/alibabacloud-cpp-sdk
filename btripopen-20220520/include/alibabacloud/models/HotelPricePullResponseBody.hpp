// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODY_HPP_
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
  class HotelPricePullResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelPricePullResponseBody() = default ;
    HotelPricePullResponseBody(const HotelPricePullResponseBody &) = default ;
    HotelPricePullResponseBody(HotelPricePullResponseBody &&) = default ;
    HotelPricePullResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBody() = default ;
    HotelPricePullResponseBody& operator=(const HotelPricePullResponseBody &) = default ;
    HotelPricePullResponseBody& operator=(HotelPricePullResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(hotel_price_infos, hotelPriceInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(hotel_price_infos, hotelPriceInfos_);
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
      class HotelPriceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelPriceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(rooms, rooms_);
          DARABONBA_PTR_TO_JSON(search_id, searchId_);
        };
        friend void from_json(const Darabonba::Json& j, HotelPriceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(rooms, rooms_);
          DARABONBA_PTR_FROM_JSON(search_id, searchId_);
        };
        HotelPriceInfos() = default ;
        HotelPriceInfos(const HotelPriceInfos &) = default ;
        HotelPriceInfos(HotelPriceInfos &&) = default ;
        HotelPriceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelPriceInfos() = default ;
        HotelPriceInfos& operator=(const HotelPriceInfos &) = default ;
        HotelPriceInfos& operator=(HotelPriceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rooms : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rooms& obj) { 
            DARABONBA_PTR_TO_JSON(area, area_);
            DARABONBA_PTR_TO_JSON(bed, bed_);
            DARABONBA_PTR_TO_JSON(bed_type_string, bedTypeString_);
            DARABONBA_PTR_TO_JSON(facility, facility_);
            DARABONBA_PTR_TO_JSON(floor, floor_);
            DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_TO_JSON(network_service, networkService_);
            DARABONBA_PTR_TO_JSON(pics, pics_);
            DARABONBA_PTR_TO_JSON(rates, rates_);
            DARABONBA_PTR_TO_JSON(room_id, roomId_);
            DARABONBA_PTR_TO_JSON(room_name, roomName_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(window_type, windowType_);
          };
          friend void from_json(const Darabonba::Json& j, Rooms& obj) { 
            DARABONBA_PTR_FROM_JSON(area, area_);
            DARABONBA_PTR_FROM_JSON(bed, bed_);
            DARABONBA_PTR_FROM_JSON(bed_type_string, bedTypeString_);
            DARABONBA_PTR_FROM_JSON(facility, facility_);
            DARABONBA_PTR_FROM_JSON(floor, floor_);
            DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_FROM_JSON(network_service, networkService_);
            DARABONBA_PTR_FROM_JSON(pics, pics_);
            DARABONBA_PTR_FROM_JSON(rates, rates_);
            DARABONBA_PTR_FROM_JSON(room_id, roomId_);
            DARABONBA_PTR_FROM_JSON(room_name, roomName_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(window_type, windowType_);
          };
          Rooms() = default ;
          Rooms(const Rooms &) = default ;
          Rooms(Rooms &&) = default ;
          Rooms(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rooms() = default ;
          Rooms& operator=(const Rooms &) = default ;
          Rooms& operator=(Rooms &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rates : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rates& obj) { 
              DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
              DARABONBA_PTR_TO_JSON(breakfast_count, breakfastCount_);
              DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy, btripHotelCancelPolicy_);
              DARABONBA_PTR_TO_JSON(cancel_policy_desc, cancelPolicyDesc_);
              DARABONBA_PTR_TO_JSON(company_aassist, companyAassist_);
              DARABONBA_PTR_TO_JSON(currency_code, currencyCode_);
              DARABONBA_PTR_TO_JSON(instant_confirm, instantConfirm_);
              DARABONBA_PTR_TO_JSON(item_id, itemId_);
              DARABONBA_PTR_TO_JSON(max_adv_hours, maxAdvHours_);
              DARABONBA_PTR_TO_JSON(max_days, maxDays_);
              DARABONBA_PTR_TO_JSON(min_adv_hours, minAdvHours_);
              DARABONBA_PTR_TO_JSON(min_days, minDays_);
              DARABONBA_PTR_TO_JSON(nod, nod_);
              DARABONBA_PTR_TO_JSON(nop, nop_);
              DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
              DARABONBA_PTR_TO_JSON(price, price_);
              DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
              DARABONBA_PTR_TO_JSON(quota, quota_);
              DARABONBA_PTR_TO_JSON(rate_dailys, rateDailys_);
              DARABONBA_PTR_TO_JSON(rate_id, rateId_);
              DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
              DARABONBA_PTR_TO_JSON(rp_id, rpId_);
              DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
              DARABONBA_PTR_TO_JSON(support_special_invoice, supportSpecialInvoice_);
            };
            friend void from_json(const Darabonba::Json& j, Rates& obj) { 
              DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
              DARABONBA_PTR_FROM_JSON(breakfast_count, breakfastCount_);
              DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy, btripHotelCancelPolicy_);
              DARABONBA_PTR_FROM_JSON(cancel_policy_desc, cancelPolicyDesc_);
              DARABONBA_PTR_FROM_JSON(company_aassist, companyAassist_);
              DARABONBA_PTR_FROM_JSON(currency_code, currencyCode_);
              DARABONBA_PTR_FROM_JSON(instant_confirm, instantConfirm_);
              DARABONBA_PTR_FROM_JSON(item_id, itemId_);
              DARABONBA_PTR_FROM_JSON(max_adv_hours, maxAdvHours_);
              DARABONBA_PTR_FROM_JSON(max_days, maxDays_);
              DARABONBA_PTR_FROM_JSON(min_adv_hours, minAdvHours_);
              DARABONBA_PTR_FROM_JSON(min_days, minDays_);
              DARABONBA_PTR_FROM_JSON(nod, nod_);
              DARABONBA_PTR_FROM_JSON(nop, nop_);
              DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
              DARABONBA_PTR_FROM_JSON(price, price_);
              DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
              DARABONBA_PTR_FROM_JSON(quota, quota_);
              DARABONBA_PTR_FROM_JSON(rate_dailys, rateDailys_);
              DARABONBA_PTR_FROM_JSON(rate_id, rateId_);
              DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
              DARABONBA_PTR_FROM_JSON(rp_id, rpId_);
              DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
              DARABONBA_PTR_FROM_JSON(support_special_invoice, supportSpecialInvoice_);
            };
            Rates() = default ;
            Rates(const Rates &) = default ;
            Rates(Rates &&) = default ;
            Rates(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rates() = default ;
            Rates& operator=(const Rates &) = default ;
            Rates& operator=(Rates &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RateDailys : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RateDailys& obj) { 
                DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
                DARABONBA_PTR_TO_JSON(last_discounts_price, lastDiscountsPrice_);
                DARABONBA_PTR_TO_JSON(price, price_);
                DARABONBA_PTR_TO_JSON(start_date, startDate_);
              };
              friend void from_json(const Darabonba::Json& j, RateDailys& obj) { 
                DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
                DARABONBA_PTR_FROM_JSON(last_discounts_price, lastDiscountsPrice_);
                DARABONBA_PTR_FROM_JSON(price, price_);
                DARABONBA_PTR_FROM_JSON(start_date, startDate_);
              };
              RateDailys() = default ;
              RateDailys(const RateDailys &) = default ;
              RateDailys(RateDailys &&) = default ;
              RateDailys(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RateDailys() = default ;
              RateDailys& operator=(const RateDailys &) = default ;
              RateDailys& operator=(RateDailys &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->lastDiscountsPrice_ == nullptr && this->price_ == nullptr && this->startDate_ == nullptr; };
              // discountPrice Field Functions 
              bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
              void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
              inline int64_t getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0L) };
              inline RateDailys& setDiscountPrice(int64_t discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


              // lastDiscountsPrice Field Functions 
              bool hasLastDiscountsPrice() const { return this->lastDiscountsPrice_ != nullptr;};
              void deleteLastDiscountsPrice() { this->lastDiscountsPrice_ = nullptr;};
              inline int64_t getLastDiscountsPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsPrice_, 0L) };
              inline RateDailys& setLastDiscountsPrice(int64_t lastDiscountsPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsPrice_, lastDiscountsPrice) };


              // price Field Functions 
              bool hasPrice() const { return this->price_ != nullptr;};
              void deletePrice() { this->price_ = nullptr;};
              inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
              inline RateDailys& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


              // startDate Field Functions 
              bool hasStartDate() const { return this->startDate_ != nullptr;};
              void deleteStartDate() { this->startDate_ = nullptr;};
              inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
              inline RateDailys& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


            protected:
              shared_ptr<int64_t> discountPrice_ {};
              shared_ptr<int64_t> lastDiscountsPrice_ {};
              shared_ptr<int64_t> price_ {};
              shared_ptr<string> startDate_ {};
            };

            class BtripHotelCancelPolicy : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicy& obj) { 
                DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
                DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
              };
              friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicy& obj) { 
                DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
                DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
              };
              BtripHotelCancelPolicy() = default ;
              BtripHotelCancelPolicy(const BtripHotelCancelPolicy &) = default ;
              BtripHotelCancelPolicy(BtripHotelCancelPolicy &&) = default ;
              BtripHotelCancelPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BtripHotelCancelPolicy() = default ;
              BtripHotelCancelPolicy& operator=(const BtripHotelCancelPolicy &) = default ;
              BtripHotelCancelPolicy& operator=(BtripHotelCancelPolicy &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class BtripHotelCancelPolicyInfoDTOList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicyInfoDTOList& obj) { 
                  DARABONBA_PTR_TO_JSON(hour, hour_);
                  DARABONBA_PTR_TO_JSON(value, value_);
                };
                friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicyInfoDTOList& obj) { 
                  DARABONBA_PTR_FROM_JSON(hour, hour_);
                  DARABONBA_PTR_FROM_JSON(value, value_);
                };
                BtripHotelCancelPolicyInfoDTOList() = default ;
                BtripHotelCancelPolicyInfoDTOList(const BtripHotelCancelPolicyInfoDTOList &) = default ;
                BtripHotelCancelPolicyInfoDTOList(BtripHotelCancelPolicyInfoDTOList &&) = default ;
                BtripHotelCancelPolicyInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BtripHotelCancelPolicyInfoDTOList() = default ;
                BtripHotelCancelPolicyInfoDTOList& operator=(const BtripHotelCancelPolicyInfoDTOList &) = default ;
                BtripHotelCancelPolicyInfoDTOList& operator=(BtripHotelCancelPolicyInfoDTOList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->hour_ == nullptr
        && this->value_ == nullptr; };
                // hour Field Functions 
                bool hasHour() const { return this->hour_ != nullptr;};
                void deleteHour() { this->hour_ = nullptr;};
                inline int64_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0L) };
                inline BtripHotelCancelPolicyInfoDTOList& setHour(int64_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
                inline BtripHotelCancelPolicyInfoDTOList& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<int64_t> hour_ {};
                shared_ptr<int64_t> value_ {};
              };

              virtual bool empty() const override { return this->btripHotelCancelPolicyInfoDTOList_ == nullptr
        && this->cancelPolicyType_ == nullptr; };
              // btripHotelCancelPolicyInfoDTOList Field Functions 
              bool hasBtripHotelCancelPolicyInfoDTOList() const { return this->btripHotelCancelPolicyInfoDTOList_ != nullptr;};
              void deleteBtripHotelCancelPolicyInfoDTOList() { this->btripHotelCancelPolicyInfoDTOList_ = nullptr;};
              inline const vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList> & getBtripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList>) };
              inline vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList> getBtripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList>) };
              inline BtripHotelCancelPolicy& setBtripHotelCancelPolicyInfoDTOList(const vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
              inline BtripHotelCancelPolicy& setBtripHotelCancelPolicyInfoDTOList(vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


              // cancelPolicyType Field Functions 
              bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
              void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
              inline int32_t getCancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
              inline BtripHotelCancelPolicy& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


            protected:
              shared_ptr<vector<BtripHotelCancelPolicy::BtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ {};
              shared_ptr<int32_t> cancelPolicyType_ {};
            };

            virtual bool empty() const override { return this->breakfast_ == nullptr
        && this->breakfastCount_ == nullptr && this->btripHotelCancelPolicy_ == nullptr && this->cancelPolicyDesc_ == nullptr && this->companyAassist_ == nullptr && this->currencyCode_ == nullptr
        && this->instantConfirm_ == nullptr && this->itemId_ == nullptr && this->maxAdvHours_ == nullptr && this->maxDays_ == nullptr && this->minAdvHours_ == nullptr
        && this->minDays_ == nullptr && this->nod_ == nullptr && this->nop_ == nullptr && this->paymentType_ == nullptr && this->price_ == nullptr
        && this->promotionInfo_ == nullptr && this->quota_ == nullptr && this->rateDailys_ == nullptr && this->rateId_ == nullptr && this->ratePlanName_ == nullptr
        && this->rpId_ == nullptr && this->sellerId_ == nullptr && this->supportSpecialInvoice_ == nullptr; };
            // breakfast Field Functions 
            bool hasBreakfast() const { return this->breakfast_ != nullptr;};
            void deleteBreakfast() { this->breakfast_ = nullptr;};
            inline string getBreakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
            inline Rates& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


            // breakfastCount Field Functions 
            bool hasBreakfastCount() const { return this->breakfastCount_ != nullptr;};
            void deleteBreakfastCount() { this->breakfastCount_ = nullptr;};
            inline int32_t getBreakfastCount() const { DARABONBA_PTR_GET_DEFAULT(breakfastCount_, 0) };
            inline Rates& setBreakfastCount(int32_t breakfastCount) { DARABONBA_PTR_SET_VALUE(breakfastCount_, breakfastCount) };


            // btripHotelCancelPolicy Field Functions 
            bool hasBtripHotelCancelPolicy() const { return this->btripHotelCancelPolicy_ != nullptr;};
            void deleteBtripHotelCancelPolicy() { this->btripHotelCancelPolicy_ = nullptr;};
            inline const Rates::BtripHotelCancelPolicy & getBtripHotelCancelPolicy() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicy_, Rates::BtripHotelCancelPolicy) };
            inline Rates::BtripHotelCancelPolicy getBtripHotelCancelPolicy() { DARABONBA_PTR_GET(btripHotelCancelPolicy_, Rates::BtripHotelCancelPolicy) };
            inline Rates& setBtripHotelCancelPolicy(const Rates::BtripHotelCancelPolicy & btripHotelCancelPolicy) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicy_, btripHotelCancelPolicy) };
            inline Rates& setBtripHotelCancelPolicy(Rates::BtripHotelCancelPolicy && btripHotelCancelPolicy) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicy_, btripHotelCancelPolicy) };


            // cancelPolicyDesc Field Functions 
            bool hasCancelPolicyDesc() const { return this->cancelPolicyDesc_ != nullptr;};
            void deleteCancelPolicyDesc() { this->cancelPolicyDesc_ = nullptr;};
            inline string getCancelPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyDesc_, "") };
            inline Rates& setCancelPolicyDesc(string cancelPolicyDesc) { DARABONBA_PTR_SET_VALUE(cancelPolicyDesc_, cancelPolicyDesc) };


            // companyAassist Field Functions 
            bool hasCompanyAassist() const { return this->companyAassist_ != nullptr;};
            void deleteCompanyAassist() { this->companyAassist_ = nullptr;};
            inline string getCompanyAassist() const { DARABONBA_PTR_GET_DEFAULT(companyAassist_, "") };
            inline Rates& setCompanyAassist(string companyAassist) { DARABONBA_PTR_SET_VALUE(companyAassist_, companyAassist) };


            // currencyCode Field Functions 
            bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
            void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
            inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
            inline Rates& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


            // instantConfirm Field Functions 
            bool hasInstantConfirm() const { return this->instantConfirm_ != nullptr;};
            void deleteInstantConfirm() { this->instantConfirm_ = nullptr;};
            inline bool getInstantConfirm() const { DARABONBA_PTR_GET_DEFAULT(instantConfirm_, false) };
            inline Rates& setInstantConfirm(bool instantConfirm) { DARABONBA_PTR_SET_VALUE(instantConfirm_, instantConfirm) };


            // itemId Field Functions 
            bool hasItemId() const { return this->itemId_ != nullptr;};
            void deleteItemId() { this->itemId_ = nullptr;};
            inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
            inline Rates& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


            // maxAdvHours Field Functions 
            bool hasMaxAdvHours() const { return this->maxAdvHours_ != nullptr;};
            void deleteMaxAdvHours() { this->maxAdvHours_ = nullptr;};
            inline int32_t getMaxAdvHours() const { DARABONBA_PTR_GET_DEFAULT(maxAdvHours_, 0) };
            inline Rates& setMaxAdvHours(int32_t maxAdvHours) { DARABONBA_PTR_SET_VALUE(maxAdvHours_, maxAdvHours) };


            // maxDays Field Functions 
            bool hasMaxDays() const { return this->maxDays_ != nullptr;};
            void deleteMaxDays() { this->maxDays_ = nullptr;};
            inline int32_t getMaxDays() const { DARABONBA_PTR_GET_DEFAULT(maxDays_, 0) };
            inline Rates& setMaxDays(int32_t maxDays) { DARABONBA_PTR_SET_VALUE(maxDays_, maxDays) };


            // minAdvHours Field Functions 
            bool hasMinAdvHours() const { return this->minAdvHours_ != nullptr;};
            void deleteMinAdvHours() { this->minAdvHours_ = nullptr;};
            inline int32_t getMinAdvHours() const { DARABONBA_PTR_GET_DEFAULT(minAdvHours_, 0) };
            inline Rates& setMinAdvHours(int32_t minAdvHours) { DARABONBA_PTR_SET_VALUE(minAdvHours_, minAdvHours) };


            // minDays Field Functions 
            bool hasMinDays() const { return this->minDays_ != nullptr;};
            void deleteMinDays() { this->minDays_ = nullptr;};
            inline int32_t getMinDays() const { DARABONBA_PTR_GET_DEFAULT(minDays_, 0) };
            inline Rates& setMinDays(int32_t minDays) { DARABONBA_PTR_SET_VALUE(minDays_, minDays) };


            // nod Field Functions 
            bool hasNod() const { return this->nod_ != nullptr;};
            void deleteNod() { this->nod_ = nullptr;};
            inline int32_t getNod() const { DARABONBA_PTR_GET_DEFAULT(nod_, 0) };
            inline Rates& setNod(int32_t nod) { DARABONBA_PTR_SET_VALUE(nod_, nod) };


            // nop Field Functions 
            bool hasNop() const { return this->nop_ != nullptr;};
            void deleteNop() { this->nop_ = nullptr;};
            inline int32_t getNop() const { DARABONBA_PTR_GET_DEFAULT(nop_, 0) };
            inline Rates& setNop(int32_t nop) { DARABONBA_PTR_SET_VALUE(nop_, nop) };


            // paymentType Field Functions 
            bool hasPaymentType() const { return this->paymentType_ != nullptr;};
            void deletePaymentType() { this->paymentType_ = nullptr;};
            inline int32_t getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
            inline Rates& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


            // price Field Functions 
            bool hasPrice() const { return this->price_ != nullptr;};
            void deletePrice() { this->price_ = nullptr;};
            inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
            inline Rates& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


            // promotionInfo Field Functions 
            bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
            void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
            inline string getPromotionInfo() const { DARABONBA_PTR_GET_DEFAULT(promotionInfo_, "") };
            inline Rates& setPromotionInfo(string promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };


            // quota Field Functions 
            bool hasQuota() const { return this->quota_ != nullptr;};
            void deleteQuota() { this->quota_ = nullptr;};
            inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
            inline Rates& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


            // rateDailys Field Functions 
            bool hasRateDailys() const { return this->rateDailys_ != nullptr;};
            void deleteRateDailys() { this->rateDailys_ = nullptr;};
            inline const vector<Rates::RateDailys> & getRateDailys() const { DARABONBA_PTR_GET_CONST(rateDailys_, vector<Rates::RateDailys>) };
            inline vector<Rates::RateDailys> getRateDailys() { DARABONBA_PTR_GET(rateDailys_, vector<Rates::RateDailys>) };
            inline Rates& setRateDailys(const vector<Rates::RateDailys> & rateDailys) { DARABONBA_PTR_SET_VALUE(rateDailys_, rateDailys) };
            inline Rates& setRateDailys(vector<Rates::RateDailys> && rateDailys) { DARABONBA_PTR_SET_RVALUE(rateDailys_, rateDailys) };


            // rateId Field Functions 
            bool hasRateId() const { return this->rateId_ != nullptr;};
            void deleteRateId() { this->rateId_ = nullptr;};
            inline string getRateId() const { DARABONBA_PTR_GET_DEFAULT(rateId_, "") };
            inline Rates& setRateId(string rateId) { DARABONBA_PTR_SET_VALUE(rateId_, rateId) };


            // ratePlanName Field Functions 
            bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
            void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
            inline string getRatePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
            inline Rates& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


            // rpId Field Functions 
            bool hasRpId() const { return this->rpId_ != nullptr;};
            void deleteRpId() { this->rpId_ = nullptr;};
            inline string getRpId() const { DARABONBA_PTR_GET_DEFAULT(rpId_, "") };
            inline Rates& setRpId(string rpId) { DARABONBA_PTR_SET_VALUE(rpId_, rpId) };


            // sellerId Field Functions 
            bool hasSellerId() const { return this->sellerId_ != nullptr;};
            void deleteSellerId() { this->sellerId_ = nullptr;};
            inline string getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, "") };
            inline Rates& setSellerId(string sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


            // supportSpecialInvoice Field Functions 
            bool hasSupportSpecialInvoice() const { return this->supportSpecialInvoice_ != nullptr;};
            void deleteSupportSpecialInvoice() { this->supportSpecialInvoice_ = nullptr;};
            inline bool getSupportSpecialInvoice() const { DARABONBA_PTR_GET_DEFAULT(supportSpecialInvoice_, false) };
            inline Rates& setSupportSpecialInvoice(bool supportSpecialInvoice) { DARABONBA_PTR_SET_VALUE(supportSpecialInvoice_, supportSpecialInvoice) };


          protected:
            shared_ptr<string> breakfast_ {};
            shared_ptr<int32_t> breakfastCount_ {};
            shared_ptr<Rates::BtripHotelCancelPolicy> btripHotelCancelPolicy_ {};
            shared_ptr<string> cancelPolicyDesc_ {};
            shared_ptr<string> companyAassist_ {};
            shared_ptr<string> currencyCode_ {};
            shared_ptr<bool> instantConfirm_ {};
            shared_ptr<string> itemId_ {};
            shared_ptr<int32_t> maxAdvHours_ {};
            shared_ptr<int32_t> maxDays_ {};
            shared_ptr<int32_t> minAdvHours_ {};
            shared_ptr<int32_t> minDays_ {};
            shared_ptr<int32_t> nod_ {};
            shared_ptr<int32_t> nop_ {};
            shared_ptr<int32_t> paymentType_ {};
            shared_ptr<int64_t> price_ {};
            shared_ptr<string> promotionInfo_ {};
            shared_ptr<int32_t> quota_ {};
            shared_ptr<vector<Rates::RateDailys>> rateDailys_ {};
            shared_ptr<string> rateId_ {};
            shared_ptr<string> ratePlanName_ {};
            shared_ptr<string> rpId_ {};
            shared_ptr<string> sellerId_ {};
            shared_ptr<bool> supportSpecialInvoice_ {};
          };

          virtual bool empty() const override { return this->area_ == nullptr
        && this->bed_ == nullptr && this->bedTypeString_ == nullptr && this->facility_ == nullptr && this->floor_ == nullptr && this->maxOccupancy_ == nullptr
        && this->networkService_ == nullptr && this->pics_ == nullptr && this->rates_ == nullptr && this->roomId_ == nullptr && this->roomName_ == nullptr
        && this->status_ == nullptr && this->windowType_ == nullptr; };
          // area Field Functions 
          bool hasArea() const { return this->area_ != nullptr;};
          void deleteArea() { this->area_ = nullptr;};
          inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
          inline Rooms& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


          // bed Field Functions 
          bool hasBed() const { return this->bed_ != nullptr;};
          void deleteBed() { this->bed_ = nullptr;};
          inline string getBed() const { DARABONBA_PTR_GET_DEFAULT(bed_, "") };
          inline Rooms& setBed(string bed) { DARABONBA_PTR_SET_VALUE(bed_, bed) };


          // bedTypeString Field Functions 
          bool hasBedTypeString() const { return this->bedTypeString_ != nullptr;};
          void deleteBedTypeString() { this->bedTypeString_ = nullptr;};
          inline string getBedTypeString() const { DARABONBA_PTR_GET_DEFAULT(bedTypeString_, "") };
          inline Rooms& setBedTypeString(string bedTypeString) { DARABONBA_PTR_SET_VALUE(bedTypeString_, bedTypeString) };


          // facility Field Functions 
          bool hasFacility() const { return this->facility_ != nullptr;};
          void deleteFacility() { this->facility_ = nullptr;};
          inline string getFacility() const { DARABONBA_PTR_GET_DEFAULT(facility_, "") };
          inline Rooms& setFacility(string facility) { DARABONBA_PTR_SET_VALUE(facility_, facility) };


          // floor Field Functions 
          bool hasFloor() const { return this->floor_ != nullptr;};
          void deleteFloor() { this->floor_ = nullptr;};
          inline string getFloor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
          inline Rooms& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


          // maxOccupancy Field Functions 
          bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
          void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
          inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
          inline Rooms& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


          // networkService Field Functions 
          bool hasNetworkService() const { return this->networkService_ != nullptr;};
          void deleteNetworkService() { this->networkService_ = nullptr;};
          inline string getNetworkService() const { DARABONBA_PTR_GET_DEFAULT(networkService_, "") };
          inline Rooms& setNetworkService(string networkService) { DARABONBA_PTR_SET_VALUE(networkService_, networkService) };


          // pics Field Functions 
          bool hasPics() const { return this->pics_ != nullptr;};
          void deletePics() { this->pics_ = nullptr;};
          inline const vector<string> & getPics() const { DARABONBA_PTR_GET_CONST(pics_, vector<string>) };
          inline vector<string> getPics() { DARABONBA_PTR_GET(pics_, vector<string>) };
          inline Rooms& setPics(const vector<string> & pics) { DARABONBA_PTR_SET_VALUE(pics_, pics) };
          inline Rooms& setPics(vector<string> && pics) { DARABONBA_PTR_SET_RVALUE(pics_, pics) };


          // rates Field Functions 
          bool hasRates() const { return this->rates_ != nullptr;};
          void deleteRates() { this->rates_ = nullptr;};
          inline const vector<Rooms::Rates> & getRates() const { DARABONBA_PTR_GET_CONST(rates_, vector<Rooms::Rates>) };
          inline vector<Rooms::Rates> getRates() { DARABONBA_PTR_GET(rates_, vector<Rooms::Rates>) };
          inline Rooms& setRates(const vector<Rooms::Rates> & rates) { DARABONBA_PTR_SET_VALUE(rates_, rates) };
          inline Rooms& setRates(vector<Rooms::Rates> && rates) { DARABONBA_PTR_SET_RVALUE(rates_, rates) };


          // roomId Field Functions 
          bool hasRoomId() const { return this->roomId_ != nullptr;};
          void deleteRoomId() { this->roomId_ = nullptr;};
          inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
          inline Rooms& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


          // roomName Field Functions 
          bool hasRoomName() const { return this->roomName_ != nullptr;};
          void deleteRoomName() { this->roomName_ = nullptr;};
          inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
          inline Rooms& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Rooms& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // windowType Field Functions 
          bool hasWindowType() const { return this->windowType_ != nullptr;};
          void deleteWindowType() { this->windowType_ = nullptr;};
          inline string getWindowType() const { DARABONBA_PTR_GET_DEFAULT(windowType_, "") };
          inline Rooms& setWindowType(string windowType) { DARABONBA_PTR_SET_VALUE(windowType_, windowType) };


        protected:
          shared_ptr<string> area_ {};
          shared_ptr<string> bed_ {};
          shared_ptr<string> bedTypeString_ {};
          shared_ptr<string> facility_ {};
          shared_ptr<string> floor_ {};
          shared_ptr<int32_t> maxOccupancy_ {};
          shared_ptr<string> networkService_ {};
          shared_ptr<vector<string>> pics_ {};
          shared_ptr<vector<Rooms::Rates>> rates_ {};
          shared_ptr<string> roomId_ {};
          shared_ptr<string> roomName_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> windowType_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->hotelId_ == nullptr && this->hotelName_ == nullptr && this->rooms_ == nullptr && this->searchId_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline HotelPriceInfos& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline HotelPriceInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelPriceInfos& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // rooms Field Functions 
        bool hasRooms() const { return this->rooms_ != nullptr;};
        void deleteRooms() { this->rooms_ = nullptr;};
        inline const vector<HotelPriceInfos::Rooms> & getRooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<HotelPriceInfos::Rooms>) };
        inline vector<HotelPriceInfos::Rooms> getRooms() { DARABONBA_PTR_GET(rooms_, vector<HotelPriceInfos::Rooms>) };
        inline HotelPriceInfos& setRooms(const vector<HotelPriceInfos::Rooms> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
        inline HotelPriceInfos& setRooms(vector<HotelPriceInfos::Rooms> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


        // searchId Field Functions 
        bool hasSearchId() const { return this->searchId_ != nullptr;};
        void deleteSearchId() { this->searchId_ = nullptr;};
        inline string getSearchId() const { DARABONBA_PTR_GET_DEFAULT(searchId_, "") };
        inline HotelPriceInfos& setSearchId(string searchId) { DARABONBA_PTR_SET_VALUE(searchId_, searchId) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<vector<HotelPriceInfos::Rooms>> rooms_ {};
        shared_ptr<string> searchId_ {};
      };

      virtual bool empty() const override { return this->hotelPriceInfos_ == nullptr; };
      // hotelPriceInfos Field Functions 
      bool hasHotelPriceInfos() const { return this->hotelPriceInfos_ != nullptr;};
      void deleteHotelPriceInfos() { this->hotelPriceInfos_ = nullptr;};
      inline const vector<Module::HotelPriceInfos> & getHotelPriceInfos() const { DARABONBA_PTR_GET_CONST(hotelPriceInfos_, vector<Module::HotelPriceInfos>) };
      inline vector<Module::HotelPriceInfos> getHotelPriceInfos() { DARABONBA_PTR_GET(hotelPriceInfos_, vector<Module::HotelPriceInfos>) };
      inline Module& setHotelPriceInfos(const vector<Module::HotelPriceInfos> & hotelPriceInfos) { DARABONBA_PTR_SET_VALUE(hotelPriceInfos_, hotelPriceInfos) };
      inline Module& setHotelPriceInfos(vector<Module::HotelPriceInfos> && hotelPriceInfos) { DARABONBA_PTR_SET_RVALUE(hotelPriceInfos_, hotelPriceInfos) };


    protected:
      shared_ptr<vector<Module::HotelPriceInfos>> hotelPriceInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelPricePullResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelPricePullResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelPricePullResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelPricePullResponseBody::Module) };
    inline HotelPricePullResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelPricePullResponseBody::Module) };
    inline HotelPricePullResponseBody& setModule(const HotelPricePullResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelPricePullResponseBody& setModule(HotelPricePullResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelPricePullResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelPricePullResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelPricePullResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelPricePullResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
