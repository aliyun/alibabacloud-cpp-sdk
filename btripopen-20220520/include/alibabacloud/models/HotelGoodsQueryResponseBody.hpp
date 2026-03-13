// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelGoodsQueryResponseBody() = default ;
    HotelGoodsQueryResponseBody(const HotelGoodsQueryResponseBody &) = default ;
    HotelGoodsQueryResponseBody(HotelGoodsQueryResponseBody &&) = default ;
    HotelGoodsQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBody() = default ;
    HotelGoodsQueryResponseBody& operator=(const HotelGoodsQueryResponseBody &) = default ;
    HotelGoodsQueryResponseBody& operator=(HotelGoodsQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(address, address_);
        DARABONBA_PTR_TO_JSON(booking_instructions, bookingInstructions_);
        DARABONBA_PTR_TO_JSON(can_foreigner, canForeigner_);
        DARABONBA_PTR_TO_JSON(check_in, checkIn_);
        DARABONBA_PTR_TO_JSON(check_out, checkOut_);
        DARABONBA_PTR_TO_JSON(descriptions, descriptions_);
        DARABONBA_PTR_TO_JSON(dinamic_banner_pic_urls, dinamicBannerPicUrls_);
        DARABONBA_PTR_TO_JSON(early_arrival_time, earlyArrivalTime_);
        DARABONBA_PTR_TO_JSON(hotel_group_desc, hotelGroupDesc_);
        DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
        DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
        DARABONBA_PTR_TO_JSON(late_arrival_time, lateArrivalTime_);
        DARABONBA_PTR_TO_JSON(rooms, rooms_);
        DARABONBA_PTR_TO_JSON(search_id, searchId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(address, address_);
        DARABONBA_PTR_FROM_JSON(booking_instructions, bookingInstructions_);
        DARABONBA_PTR_FROM_JSON(can_foreigner, canForeigner_);
        DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
        DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
        DARABONBA_PTR_FROM_JSON(descriptions, descriptions_);
        DARABONBA_PTR_FROM_JSON(dinamic_banner_pic_urls, dinamicBannerPicUrls_);
        DARABONBA_PTR_FROM_JSON(early_arrival_time, earlyArrivalTime_);
        DARABONBA_PTR_FROM_JSON(hotel_group_desc, hotelGroupDesc_);
        DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
        DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
        DARABONBA_PTR_FROM_JSON(late_arrival_time, lateArrivalTime_);
        DARABONBA_PTR_FROM_JSON(rooms, rooms_);
        DARABONBA_PTR_FROM_JSON(search_id, searchId_);
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
      class Rooms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rooms& obj) { 
          DARABONBA_PTR_TO_JSON(area, area_);
          DARABONBA_PTR_TO_JSON(bed_type_string, bedTypeString_);
          DARABONBA_PTR_TO_JSON(extra_bed, extraBed_);
          DARABONBA_PTR_TO_JSON(facility, facility_);
          DARABONBA_PTR_TO_JSON(floor, floor_);
          DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(network_service, networkService_);
          DARABONBA_PTR_TO_JSON(pics, pics_);
          DARABONBA_PTR_TO_JSON(rates, rates_);
          DARABONBA_PTR_TO_JSON(room_dasc, roomDasc_);
          DARABONBA_PTR_TO_JSON(room_facility, roomFacility_);
          DARABONBA_PTR_TO_JSON(room_service, roomService_);
          DARABONBA_PTR_TO_JSON(srid, srid_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(window_type, windowType_);
        };
        friend void from_json(const Darabonba::Json& j, Rooms& obj) { 
          DARABONBA_PTR_FROM_JSON(area, area_);
          DARABONBA_PTR_FROM_JSON(bed_type_string, bedTypeString_);
          DARABONBA_PTR_FROM_JSON(extra_bed, extraBed_);
          DARABONBA_PTR_FROM_JSON(facility, facility_);
          DARABONBA_PTR_FROM_JSON(floor, floor_);
          DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(network_service, networkService_);
          DARABONBA_PTR_FROM_JSON(pics, pics_);
          DARABONBA_PTR_FROM_JSON(rates, rates_);
          DARABONBA_PTR_FROM_JSON(room_dasc, roomDasc_);
          DARABONBA_PTR_FROM_JSON(room_facility, roomFacility_);
          DARABONBA_PTR_FROM_JSON(room_service, roomService_);
          DARABONBA_PTR_FROM_JSON(srid, srid_);
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
        class RoomService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoomService& obj) { 
            DARABONBA_PTR_TO_JSON(color, color_);
            DARABONBA_PTR_TO_JSON(desc, desc_);
            DARABONBA_PTR_TO_JSON(highlight_color_color, highlightColorColor_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, RoomService& obj) { 
            DARABONBA_PTR_FROM_JSON(color, color_);
            DARABONBA_PTR_FROM_JSON(desc, desc_);
            DARABONBA_PTR_FROM_JSON(highlight_color_color, highlightColorColor_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          RoomService() = default ;
          RoomService(const RoomService &) = default ;
          RoomService(RoomService &&) = default ;
          RoomService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoomService() = default ;
          RoomService& operator=(const RoomService &) = default ;
          RoomService& operator=(RoomService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->color_ == nullptr
        && this->desc_ == nullptr && this->highlightColorColor_ == nullptr && this->title_ == nullptr; };
          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline RoomService& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline RoomService& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // highlightColorColor Field Functions 
          bool hasHighlightColorColor() const { return this->highlightColorColor_ != nullptr;};
          void deleteHighlightColorColor() { this->highlightColorColor_ = nullptr;};
          inline string getHighlightColorColor() const { DARABONBA_PTR_GET_DEFAULT(highlightColorColor_, "") };
          inline RoomService& setHighlightColorColor(string highlightColorColor) { DARABONBA_PTR_SET_VALUE(highlightColorColor_, highlightColorColor) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline RoomService& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> color_ {};
          shared_ptr<string> desc_ {};
          shared_ptr<string> highlightColorColor_ {};
          shared_ptr<string> title_ {};
        };

        class Rates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rates& obj) { 
            DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
            DARABONBA_PTR_TO_JSON(bed_type, bedType_);
            DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
            DARABONBA_PTR_TO_JSON(btrip_cancel_rule, btripCancelRule_);
            DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_desc, btripHotelCancelDesc_);
            DARABONBA_PTR_TO_JSON(can_smoking, canSmoking_);
            DARABONBA_PTR_TO_JSON(cancel_policy_desc, cancelPolicyDesc_);
            DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
            DARABONBA_PTR_TO_JSON(company_aassist, companyAassist_);
            DARABONBA_PTR_TO_JSON(company_assist_type, companyAssistType_);
            DARABONBA_PTR_TO_JSON(confirm_type, confirmType_);
            DARABONBA_PTR_TO_JSON(currency_code, currencyCode_);
            DARABONBA_PTR_TO_JSON(daily_price_format_yuan, dailyPriceFormatYuan_);
            DARABONBA_PTR_TO_JSON(daily_price_view, dailyPriceView_);
            DARABONBA_PTR_TO_JSON(discount_desc, discountDesc_);
            DARABONBA_PTR_TO_JSON(end_time_daily, endTimeDaily_);
            DARABONBA_PTR_TO_JSON(hotel_detail_rate_price_d_t_o, hotelDetailRatePriceDTO_);
            DARABONBA_PTR_TO_JSON(hotel_member_benefit, hotelMemberBenefit_);
            DARABONBA_PTR_TO_JSON(instant_confirm, instantConfirm_);
            DARABONBA_PTR_TO_JSON(inventory_desc, inventoryDesc_);
            DARABONBA_PTR_TO_JSON(inventory_price, inventoryPrice_);
            DARABONBA_PTR_TO_JSON(is_business_pay4_goods, isBusinessPay4Goods_);
            DARABONBA_PTR_TO_JSON(is_guarantee, isGuarantee_);
            DARABONBA_PTR_TO_JSON(is_need_email, isNeedEmail_);
            DARABONBA_PTR_TO_JSON(item_id, itemId_);
            DARABONBA_PTR_TO_JSON(last_cancel_time, lastCancelTime_);
            DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_TO_JSON(min_adv_hours, minAdvHours_);
            DARABONBA_PTR_TO_JSON(min_days, minDays_);
            DARABONBA_PTR_TO_JSON(need_certificate, needCertificate_);
            DARABONBA_PTR_TO_JSON(nod, nod_);
            DARABONBA_PTR_TO_JSON(nop, nop_);
            DARABONBA_PTR_TO_JSON(order_ship_time, orderShipTime_);
            DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
            DARABONBA_PTR_TO_JSON(price_type, priceType_);
            DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
            DARABONBA_PTR_TO_JSON(rate_id, rateId_);
            DARABONBA_PTR_TO_JSON(rate_key, rateKey_);
            DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
            DARABONBA_PTR_TO_JSON(rp_id, rpId_);
            DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
            DARABONBA_PTR_TO_JSON(start_time_daily, startTimeDaily_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
            DARABONBA_PTR_TO_JSON(supplier_name, supplierName_);
            DARABONBA_PTR_TO_JSON(support_special_invoice, supportSpecialInvoice_);
            DARABONBA_PTR_TO_JSON(unrounding_daily_price_format_yuan, unroundingDailyPriceFormatYuan_);
          };
          friend void from_json(const Darabonba::Json& j, Rates& obj) { 
            DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
            DARABONBA_PTR_FROM_JSON(bed_type, bedType_);
            DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
            DARABONBA_PTR_FROM_JSON(btrip_cancel_rule, btripCancelRule_);
            DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_desc, btripHotelCancelDesc_);
            DARABONBA_PTR_FROM_JSON(can_smoking, canSmoking_);
            DARABONBA_PTR_FROM_JSON(cancel_policy_desc, cancelPolicyDesc_);
            DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
            DARABONBA_PTR_FROM_JSON(company_aassist, companyAassist_);
            DARABONBA_PTR_FROM_JSON(company_assist_type, companyAssistType_);
            DARABONBA_PTR_FROM_JSON(confirm_type, confirmType_);
            DARABONBA_PTR_FROM_JSON(currency_code, currencyCode_);
            DARABONBA_PTR_FROM_JSON(daily_price_format_yuan, dailyPriceFormatYuan_);
            DARABONBA_PTR_FROM_JSON(daily_price_view, dailyPriceView_);
            DARABONBA_PTR_FROM_JSON(discount_desc, discountDesc_);
            DARABONBA_PTR_FROM_JSON(end_time_daily, endTimeDaily_);
            DARABONBA_PTR_FROM_JSON(hotel_detail_rate_price_d_t_o, hotelDetailRatePriceDTO_);
            DARABONBA_PTR_FROM_JSON(hotel_member_benefit, hotelMemberBenefit_);
            DARABONBA_PTR_FROM_JSON(instant_confirm, instantConfirm_);
            DARABONBA_PTR_FROM_JSON(inventory_desc, inventoryDesc_);
            DARABONBA_PTR_FROM_JSON(inventory_price, inventoryPrice_);
            DARABONBA_PTR_FROM_JSON(is_business_pay4_goods, isBusinessPay4Goods_);
            DARABONBA_PTR_FROM_JSON(is_guarantee, isGuarantee_);
            DARABONBA_PTR_FROM_JSON(is_need_email, isNeedEmail_);
            DARABONBA_PTR_FROM_JSON(item_id, itemId_);
            DARABONBA_PTR_FROM_JSON(last_cancel_time, lastCancelTime_);
            DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_FROM_JSON(min_adv_hours, minAdvHours_);
            DARABONBA_PTR_FROM_JSON(min_days, minDays_);
            DARABONBA_PTR_FROM_JSON(need_certificate, needCertificate_);
            DARABONBA_PTR_FROM_JSON(nod, nod_);
            DARABONBA_PTR_FROM_JSON(nop, nop_);
            DARABONBA_PTR_FROM_JSON(order_ship_time, orderShipTime_);
            DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
            DARABONBA_PTR_FROM_JSON(price_type, priceType_);
            DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
            DARABONBA_PTR_FROM_JSON(rate_id, rateId_);
            DARABONBA_PTR_FROM_JSON(rate_key, rateKey_);
            DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
            DARABONBA_PTR_FROM_JSON(rp_id, rpId_);
            DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
            DARABONBA_PTR_FROM_JSON(start_time_daily, startTimeDaily_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
            DARABONBA_PTR_FROM_JSON(supplier_name, supplierName_);
            DARABONBA_PTR_FROM_JSON(support_special_invoice, supportSpecialInvoice_);
            DARABONBA_PTR_FROM_JSON(unrounding_daily_price_format_yuan, unroundingDailyPriceFormatYuan_);
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
          class HotelDetailRatePriceDTO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HotelDetailRatePriceDTO& obj) { 
              DARABONBA_PTR_TO_JSON(before_discount_price, beforeDiscountPrice_);
              DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
              DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
              DARABONBA_PTR_TO_JSON(last_discounts_price, lastDiscountsPrice_);
              DARABONBA_PTR_TO_JSON(last_discounts_rounding_price, lastDiscountsRoundingPrice_);
              DARABONBA_PTR_TO_JSON(last_num, lastNum_);
              DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
              DARABONBA_PTR_TO_JSON(status, status_);
            };
            friend void from_json(const Darabonba::Json& j, HotelDetailRatePriceDTO& obj) { 
              DARABONBA_PTR_FROM_JSON(before_discount_price, beforeDiscountPrice_);
              DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
              DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
              DARABONBA_PTR_FROM_JSON(last_discounts_price, lastDiscountsPrice_);
              DARABONBA_PTR_FROM_JSON(last_discounts_rounding_price, lastDiscountsRoundingPrice_);
              DARABONBA_PTR_FROM_JSON(last_num, lastNum_);
              DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
              DARABONBA_PTR_FROM_JSON(status, status_);
            };
            HotelDetailRatePriceDTO() = default ;
            HotelDetailRatePriceDTO(const HotelDetailRatePriceDTO &) = default ;
            HotelDetailRatePriceDTO(HotelDetailRatePriceDTO &&) = default ;
            HotelDetailRatePriceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HotelDetailRatePriceDTO() = default ;
            HotelDetailRatePriceDTO& operator=(const HotelDetailRatePriceDTO &) = default ;
            HotelDetailRatePriceDTO& operator=(HotelDetailRatePriceDTO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->beforeDiscountPrice_ == nullptr
        && this->breakfast_ == nullptr && this->discountPrice_ == nullptr && this->lastDiscountsPrice_ == nullptr && this->lastDiscountsRoundingPrice_ == nullptr && this->lastNum_ == nullptr
        && this->rateStartTime_ == nullptr && this->status_ == nullptr; };
            // beforeDiscountPrice Field Functions 
            bool hasBeforeDiscountPrice() const { return this->beforeDiscountPrice_ != nullptr;};
            void deleteBeforeDiscountPrice() { this->beforeDiscountPrice_ = nullptr;};
            inline int64_t getBeforeDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeDiscountPrice_, 0L) };
            inline HotelDetailRatePriceDTO& setBeforeDiscountPrice(int64_t beforeDiscountPrice) { DARABONBA_PTR_SET_VALUE(beforeDiscountPrice_, beforeDiscountPrice) };


            // breakfast Field Functions 
            bool hasBreakfast() const { return this->breakfast_ != nullptr;};
            void deleteBreakfast() { this->breakfast_ = nullptr;};
            inline string getBreakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
            inline HotelDetailRatePriceDTO& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


            // discountPrice Field Functions 
            bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
            void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
            inline int64_t getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0L) };
            inline HotelDetailRatePriceDTO& setDiscountPrice(int64_t discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


            // lastDiscountsPrice Field Functions 
            bool hasLastDiscountsPrice() const { return this->lastDiscountsPrice_ != nullptr;};
            void deleteLastDiscountsPrice() { this->lastDiscountsPrice_ = nullptr;};
            inline int64_t getLastDiscountsPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsPrice_, 0L) };
            inline HotelDetailRatePriceDTO& setLastDiscountsPrice(int64_t lastDiscountsPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsPrice_, lastDiscountsPrice) };


            // lastDiscountsRoundingPrice Field Functions 
            bool hasLastDiscountsRoundingPrice() const { return this->lastDiscountsRoundingPrice_ != nullptr;};
            void deleteLastDiscountsRoundingPrice() { this->lastDiscountsRoundingPrice_ = nullptr;};
            inline int64_t getLastDiscountsRoundingPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsRoundingPrice_, 0L) };
            inline HotelDetailRatePriceDTO& setLastDiscountsRoundingPrice(int64_t lastDiscountsRoundingPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsRoundingPrice_, lastDiscountsRoundingPrice) };


            // lastNum Field Functions 
            bool hasLastNum() const { return this->lastNum_ != nullptr;};
            void deleteLastNum() { this->lastNum_ = nullptr;};
            inline int32_t getLastNum() const { DARABONBA_PTR_GET_DEFAULT(lastNum_, 0) };
            inline HotelDetailRatePriceDTO& setLastNum(int32_t lastNum) { DARABONBA_PTR_SET_VALUE(lastNum_, lastNum) };


            // rateStartTime Field Functions 
            bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
            void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
            inline string getRateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
            inline HotelDetailRatePriceDTO& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline HotelDetailRatePriceDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            shared_ptr<int64_t> beforeDiscountPrice_ {};
            shared_ptr<string> breakfast_ {};
            shared_ptr<int64_t> discountPrice_ {};
            shared_ptr<int64_t> lastDiscountsPrice_ {};
            shared_ptr<int64_t> lastDiscountsRoundingPrice_ {};
            shared_ptr<int32_t> lastNum_ {};
            shared_ptr<string> rateStartTime_ {};
            shared_ptr<int32_t> status_ {};
          };

          class DiscountDesc : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiscountDesc& obj) { 
              DARABONBA_PTR_TO_JSON(cash_reduce_total, cashReduceTotal_);
              DARABONBA_PTR_TO_JSON(dinamic_label, dinamicLabel_);
              DARABONBA_PTR_TO_JSON(discount_detail, discountDetail_);
              DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
              DARABONBA_PTR_TO_JSON(title, title_);
            };
            friend void from_json(const Darabonba::Json& j, DiscountDesc& obj) { 
              DARABONBA_PTR_FROM_JSON(cash_reduce_total, cashReduceTotal_);
              DARABONBA_PTR_FROM_JSON(dinamic_label, dinamicLabel_);
              DARABONBA_PTR_FROM_JSON(discount_detail, discountDetail_);
              DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
              DARABONBA_PTR_FROM_JSON(title, title_);
            };
            DiscountDesc() = default ;
            DiscountDesc(const DiscountDesc &) = default ;
            DiscountDesc(DiscountDesc &&) = default ;
            DiscountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiscountDesc() = default ;
            DiscountDesc& operator=(const DiscountDesc &) = default ;
            DiscountDesc& operator=(DiscountDesc &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class DiscountDetail : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DiscountDetail& obj) { 
                DARABONBA_PTR_TO_JSON(label_name, labelName_);
                DARABONBA_PTR_TO_JSON(money_desc, moneyDesc_);
              };
              friend void from_json(const Darabonba::Json& j, DiscountDetail& obj) { 
                DARABONBA_PTR_FROM_JSON(label_name, labelName_);
                DARABONBA_PTR_FROM_JSON(money_desc, moneyDesc_);
              };
              DiscountDetail() = default ;
              DiscountDetail(const DiscountDetail &) = default ;
              DiscountDetail(DiscountDetail &&) = default ;
              DiscountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DiscountDetail() = default ;
              DiscountDetail& operator=(const DiscountDetail &) = default ;
              DiscountDetail& operator=(DiscountDetail &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->labelName_ == nullptr
        && this->moneyDesc_ == nullptr; };
              // labelName Field Functions 
              bool hasLabelName() const { return this->labelName_ != nullptr;};
              void deleteLabelName() { this->labelName_ = nullptr;};
              inline const vector<string> & getLabelName() const { DARABONBA_PTR_GET_CONST(labelName_, vector<string>) };
              inline vector<string> getLabelName() { DARABONBA_PTR_GET(labelName_, vector<string>) };
              inline DiscountDetail& setLabelName(const vector<string> & labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };
              inline DiscountDetail& setLabelName(vector<string> && labelName) { DARABONBA_PTR_SET_RVALUE(labelName_, labelName) };


              // moneyDesc Field Functions 
              bool hasMoneyDesc() const { return this->moneyDesc_ != nullptr;};
              void deleteMoneyDesc() { this->moneyDesc_ = nullptr;};
              inline string getMoneyDesc() const { DARABONBA_PTR_GET_DEFAULT(moneyDesc_, "") };
              inline DiscountDetail& setMoneyDesc(string moneyDesc) { DARABONBA_PTR_SET_VALUE(moneyDesc_, moneyDesc) };


            protected:
              shared_ptr<vector<string>> labelName_ {};
              shared_ptr<string> moneyDesc_ {};
            };

            virtual bool empty() const override { return this->cashReduceTotal_ == nullptr
        && this->dinamicLabel_ == nullptr && this->discountDetail_ == nullptr && this->subTitle_ == nullptr && this->title_ == nullptr; };
            // cashReduceTotal Field Functions 
            bool hasCashReduceTotal() const { return this->cashReduceTotal_ != nullptr;};
            void deleteCashReduceTotal() { this->cashReduceTotal_ = nullptr;};
            inline string getCashReduceTotal() const { DARABONBA_PTR_GET_DEFAULT(cashReduceTotal_, "") };
            inline DiscountDesc& setCashReduceTotal(string cashReduceTotal) { DARABONBA_PTR_SET_VALUE(cashReduceTotal_, cashReduceTotal) };


            // dinamicLabel Field Functions 
            bool hasDinamicLabel() const { return this->dinamicLabel_ != nullptr;};
            void deleteDinamicLabel() { this->dinamicLabel_ = nullptr;};
            inline string getDinamicLabel() const { DARABONBA_PTR_GET_DEFAULT(dinamicLabel_, "") };
            inline DiscountDesc& setDinamicLabel(string dinamicLabel) { DARABONBA_PTR_SET_VALUE(dinamicLabel_, dinamicLabel) };


            // discountDetail Field Functions 
            bool hasDiscountDetail() const { return this->discountDetail_ != nullptr;};
            void deleteDiscountDetail() { this->discountDetail_ = nullptr;};
            inline const vector<DiscountDesc::DiscountDetail> & getDiscountDetail() const { DARABONBA_PTR_GET_CONST(discountDetail_, vector<DiscountDesc::DiscountDetail>) };
            inline vector<DiscountDesc::DiscountDetail> getDiscountDetail() { DARABONBA_PTR_GET(discountDetail_, vector<DiscountDesc::DiscountDetail>) };
            inline DiscountDesc& setDiscountDetail(const vector<DiscountDesc::DiscountDetail> & discountDetail) { DARABONBA_PTR_SET_VALUE(discountDetail_, discountDetail) };
            inline DiscountDesc& setDiscountDetail(vector<DiscountDesc::DiscountDetail> && discountDetail) { DARABONBA_PTR_SET_RVALUE(discountDetail_, discountDetail) };


            // subTitle Field Functions 
            bool hasSubTitle() const { return this->subTitle_ != nullptr;};
            void deleteSubTitle() { this->subTitle_ = nullptr;};
            inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
            inline DiscountDesc& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline DiscountDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            shared_ptr<string> cashReduceTotal_ {};
            shared_ptr<string> dinamicLabel_ {};
            shared_ptr<vector<DiscountDesc::DiscountDetail>> discountDetail_ {};
            shared_ptr<string> subTitle_ {};
            shared_ptr<string> title_ {};
          };

          class BtripHotelCancelDesc : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BtripHotelCancelDesc& obj) { 
              DARABONBA_PTR_TO_JSON(desc, desc_);
              DARABONBA_PTR_TO_JSON(title, title_);
            };
            friend void from_json(const Darabonba::Json& j, BtripHotelCancelDesc& obj) { 
              DARABONBA_PTR_FROM_JSON(desc, desc_);
              DARABONBA_PTR_FROM_JSON(title, title_);
            };
            BtripHotelCancelDesc() = default ;
            BtripHotelCancelDesc(const BtripHotelCancelDesc &) = default ;
            BtripHotelCancelDesc(BtripHotelCancelDesc &&) = default ;
            BtripHotelCancelDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BtripHotelCancelDesc() = default ;
            BtripHotelCancelDesc& operator=(const BtripHotelCancelDesc &) = default ;
            BtripHotelCancelDesc& operator=(BtripHotelCancelDesc &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->desc_ == nullptr
        && this->title_ == nullptr; };
            // desc Field Functions 
            bool hasDesc() const { return this->desc_ != nullptr;};
            void deleteDesc() { this->desc_ = nullptr;};
            inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
            inline BtripHotelCancelDesc& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline BtripHotelCancelDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            shared_ptr<string> desc_ {};
            shared_ptr<string> title_ {};
          };

          class BtripCancelRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BtripCancelRule& obj) { 
              DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
              DARABONBA_PTR_TO_JSON(cancel_policy_title, cancelPolicyTitle_);
              DARABONBA_PTR_TO_JSON(check_in, checkIn_);
            };
            friend void from_json(const Darabonba::Json& j, BtripCancelRule& obj) { 
              DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
              DARABONBA_PTR_FROM_JSON(cancel_policy_title, cancelPolicyTitle_);
              DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
            };
            BtripCancelRule() = default ;
            BtripCancelRule(const BtripCancelRule &) = default ;
            BtripCancelRule(BtripCancelRule &&) = default ;
            BtripCancelRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BtripCancelRule() = default ;
            BtripCancelRule& operator=(const BtripCancelRule &) = default ;
            BtripCancelRule& operator=(BtripCancelRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class BtripHotelCancelPolicyDTO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicyDTO& obj) { 
                DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
                DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
              };
              friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicyDTO& obj) { 
                DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
                DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
              };
              BtripHotelCancelPolicyDTO() = default ;
              BtripHotelCancelPolicyDTO(const BtripHotelCancelPolicyDTO &) = default ;
              BtripHotelCancelPolicyDTO(BtripHotelCancelPolicyDTO &&) = default ;
              BtripHotelCancelPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BtripHotelCancelPolicyDTO() = default ;
              BtripHotelCancelPolicyDTO& operator=(const BtripHotelCancelPolicyDTO &) = default ;
              BtripHotelCancelPolicyDTO& operator=(BtripHotelCancelPolicyDTO &&) = default ;
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
              inline const vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> & getBtripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>) };
              inline vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> getBtripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>) };
              inline BtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(const vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
              inline BtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


              // cancelPolicyType Field Functions 
              bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
              void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
              inline int32_t getCancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
              inline BtripHotelCancelPolicyDTO& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


            protected:
              shared_ptr<vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ {};
              shared_ptr<int32_t> cancelPolicyType_ {};
            };

            virtual bool empty() const override { return this->btripHotelCancelPolicyDTO_ == nullptr
        && this->cancelPolicyTitle_ == nullptr && this->checkIn_ == nullptr; };
            // btripHotelCancelPolicyDTO Field Functions 
            bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
            void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
            inline const BtripCancelRule::BtripHotelCancelPolicyDTO & getBtripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, BtripCancelRule::BtripHotelCancelPolicyDTO) };
            inline BtripCancelRule::BtripHotelCancelPolicyDTO getBtripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, BtripCancelRule::BtripHotelCancelPolicyDTO) };
            inline BtripCancelRule& setBtripHotelCancelPolicyDTO(const BtripCancelRule::BtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
            inline BtripCancelRule& setBtripHotelCancelPolicyDTO(BtripCancelRule::BtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


            // cancelPolicyTitle Field Functions 
            bool hasCancelPolicyTitle() const { return this->cancelPolicyTitle_ != nullptr;};
            void deleteCancelPolicyTitle() { this->cancelPolicyTitle_ = nullptr;};
            inline string getCancelPolicyTitle() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyTitle_, "") };
            inline BtripCancelRule& setCancelPolicyTitle(string cancelPolicyTitle) { DARABONBA_PTR_SET_VALUE(cancelPolicyTitle_, cancelPolicyTitle) };


            // checkIn Field Functions 
            bool hasCheckIn() const { return this->checkIn_ != nullptr;};
            void deleteCheckIn() { this->checkIn_ = nullptr;};
            inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
            inline BtripCancelRule& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


          protected:
            shared_ptr<BtripCancelRule::BtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ {};
            shared_ptr<string> cancelPolicyTitle_ {};
            shared_ptr<string> checkIn_ {};
          };

          virtual bool empty() const override { return this->bedDesc_ == nullptr
        && this->bedType_ == nullptr && this->breakfast_ == nullptr && this->btripCancelRule_ == nullptr && this->btripHotelCancelDesc_ == nullptr && this->canSmoking_ == nullptr
        && this->cancelPolicyDesc_ == nullptr && this->cancelPolicyType_ == nullptr && this->companyAassist_ == nullptr && this->companyAssistType_ == nullptr && this->confirmType_ == nullptr
        && this->currencyCode_ == nullptr && this->dailyPriceFormatYuan_ == nullptr && this->dailyPriceView_ == nullptr && this->discountDesc_ == nullptr && this->endTimeDaily_ == nullptr
        && this->hotelDetailRatePriceDTO_ == nullptr && this->hotelMemberBenefit_ == nullptr && this->instantConfirm_ == nullptr && this->inventoryDesc_ == nullptr && this->inventoryPrice_ == nullptr
        && this->isBusinessPay4Goods_ == nullptr && this->isGuarantee_ == nullptr && this->isNeedEmail_ == nullptr && this->itemId_ == nullptr && this->lastCancelTime_ == nullptr
        && this->maxOccupancy_ == nullptr && this->minAdvHours_ == nullptr && this->minDays_ == nullptr && this->needCertificate_ == nullptr && this->nod_ == nullptr
        && this->nop_ == nullptr && this->orderShipTime_ == nullptr && this->paymentType_ == nullptr && this->priceType_ == nullptr && this->promotionInfo_ == nullptr
        && this->rateId_ == nullptr && this->rateKey_ == nullptr && this->ratePlanName_ == nullptr && this->rpId_ == nullptr && this->sellerId_ == nullptr
        && this->startTimeDaily_ == nullptr && this->status_ == nullptr && this->supplierCode_ == nullptr && this->supplierName_ == nullptr && this->supportSpecialInvoice_ == nullptr
        && this->unroundingDailyPriceFormatYuan_ == nullptr; };
          // bedDesc Field Functions 
          bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
          void deleteBedDesc() { this->bedDesc_ = nullptr;};
          inline string getBedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
          inline Rates& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


          // bedType Field Functions 
          bool hasBedType() const { return this->bedType_ != nullptr;};
          void deleteBedType() { this->bedType_ = nullptr;};
          inline string getBedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
          inline Rates& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


          // breakfast Field Functions 
          bool hasBreakfast() const { return this->breakfast_ != nullptr;};
          void deleteBreakfast() { this->breakfast_ = nullptr;};
          inline string getBreakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
          inline Rates& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


          // btripCancelRule Field Functions 
          bool hasBtripCancelRule() const { return this->btripCancelRule_ != nullptr;};
          void deleteBtripCancelRule() { this->btripCancelRule_ = nullptr;};
          inline const Rates::BtripCancelRule & getBtripCancelRule() const { DARABONBA_PTR_GET_CONST(btripCancelRule_, Rates::BtripCancelRule) };
          inline Rates::BtripCancelRule getBtripCancelRule() { DARABONBA_PTR_GET(btripCancelRule_, Rates::BtripCancelRule) };
          inline Rates& setBtripCancelRule(const Rates::BtripCancelRule & btripCancelRule) { DARABONBA_PTR_SET_VALUE(btripCancelRule_, btripCancelRule) };
          inline Rates& setBtripCancelRule(Rates::BtripCancelRule && btripCancelRule) { DARABONBA_PTR_SET_RVALUE(btripCancelRule_, btripCancelRule) };


          // btripHotelCancelDesc Field Functions 
          bool hasBtripHotelCancelDesc() const { return this->btripHotelCancelDesc_ != nullptr;};
          void deleteBtripHotelCancelDesc() { this->btripHotelCancelDesc_ = nullptr;};
          inline const vector<Rates::BtripHotelCancelDesc> & getBtripHotelCancelDesc() const { DARABONBA_PTR_GET_CONST(btripHotelCancelDesc_, vector<Rates::BtripHotelCancelDesc>) };
          inline vector<Rates::BtripHotelCancelDesc> getBtripHotelCancelDesc() { DARABONBA_PTR_GET(btripHotelCancelDesc_, vector<Rates::BtripHotelCancelDesc>) };
          inline Rates& setBtripHotelCancelDesc(const vector<Rates::BtripHotelCancelDesc> & btripHotelCancelDesc) { DARABONBA_PTR_SET_VALUE(btripHotelCancelDesc_, btripHotelCancelDesc) };
          inline Rates& setBtripHotelCancelDesc(vector<Rates::BtripHotelCancelDesc> && btripHotelCancelDesc) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelDesc_, btripHotelCancelDesc) };


          // canSmoking Field Functions 
          bool hasCanSmoking() const { return this->canSmoking_ != nullptr;};
          void deleteCanSmoking() { this->canSmoking_ = nullptr;};
          inline bool getCanSmoking() const { DARABONBA_PTR_GET_DEFAULT(canSmoking_, false) };
          inline Rates& setCanSmoking(bool canSmoking) { DARABONBA_PTR_SET_VALUE(canSmoking_, canSmoking) };


          // cancelPolicyDesc Field Functions 
          bool hasCancelPolicyDesc() const { return this->cancelPolicyDesc_ != nullptr;};
          void deleteCancelPolicyDesc() { this->cancelPolicyDesc_ = nullptr;};
          inline string getCancelPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyDesc_, "") };
          inline Rates& setCancelPolicyDesc(string cancelPolicyDesc) { DARABONBA_PTR_SET_VALUE(cancelPolicyDesc_, cancelPolicyDesc) };


          // cancelPolicyType Field Functions 
          bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
          void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
          inline int32_t getCancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
          inline Rates& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


          // companyAassist Field Functions 
          bool hasCompanyAassist() const { return this->companyAassist_ != nullptr;};
          void deleteCompanyAassist() { this->companyAassist_ = nullptr;};
          inline string getCompanyAassist() const { DARABONBA_PTR_GET_DEFAULT(companyAassist_, "") };
          inline Rates& setCompanyAassist(string companyAassist) { DARABONBA_PTR_SET_VALUE(companyAassist_, companyAassist) };


          // companyAssistType Field Functions 
          bool hasCompanyAssistType() const { return this->companyAssistType_ != nullptr;};
          void deleteCompanyAssistType() { this->companyAssistType_ = nullptr;};
          inline string getCompanyAssistType() const { DARABONBA_PTR_GET_DEFAULT(companyAssistType_, "") };
          inline Rates& setCompanyAssistType(string companyAssistType) { DARABONBA_PTR_SET_VALUE(companyAssistType_, companyAssistType) };


          // confirmType Field Functions 
          bool hasConfirmType() const { return this->confirmType_ != nullptr;};
          void deleteConfirmType() { this->confirmType_ = nullptr;};
          inline int32_t getConfirmType() const { DARABONBA_PTR_GET_DEFAULT(confirmType_, 0) };
          inline Rates& setConfirmType(int32_t confirmType) { DARABONBA_PTR_SET_VALUE(confirmType_, confirmType) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline Rates& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


          // dailyPriceFormatYuan Field Functions 
          bool hasDailyPriceFormatYuan() const { return this->dailyPriceFormatYuan_ != nullptr;};
          void deleteDailyPriceFormatYuan() { this->dailyPriceFormatYuan_ = nullptr;};
          inline string getDailyPriceFormatYuan() const { DARABONBA_PTR_GET_DEFAULT(dailyPriceFormatYuan_, "") };
          inline Rates& setDailyPriceFormatYuan(string dailyPriceFormatYuan) { DARABONBA_PTR_SET_VALUE(dailyPriceFormatYuan_, dailyPriceFormatYuan) };


          // dailyPriceView Field Functions 
          bool hasDailyPriceView() const { return this->dailyPriceView_ != nullptr;};
          void deleteDailyPriceView() { this->dailyPriceView_ = nullptr;};
          inline string getDailyPriceView() const { DARABONBA_PTR_GET_DEFAULT(dailyPriceView_, "") };
          inline Rates& setDailyPriceView(string dailyPriceView) { DARABONBA_PTR_SET_VALUE(dailyPriceView_, dailyPriceView) };


          // discountDesc Field Functions 
          bool hasDiscountDesc() const { return this->discountDesc_ != nullptr;};
          void deleteDiscountDesc() { this->discountDesc_ = nullptr;};
          inline const Rates::DiscountDesc & getDiscountDesc() const { DARABONBA_PTR_GET_CONST(discountDesc_, Rates::DiscountDesc) };
          inline Rates::DiscountDesc getDiscountDesc() { DARABONBA_PTR_GET(discountDesc_, Rates::DiscountDesc) };
          inline Rates& setDiscountDesc(const Rates::DiscountDesc & discountDesc) { DARABONBA_PTR_SET_VALUE(discountDesc_, discountDesc) };
          inline Rates& setDiscountDesc(Rates::DiscountDesc && discountDesc) { DARABONBA_PTR_SET_RVALUE(discountDesc_, discountDesc) };


          // endTimeDaily Field Functions 
          bool hasEndTimeDaily() const { return this->endTimeDaily_ != nullptr;};
          void deleteEndTimeDaily() { this->endTimeDaily_ = nullptr;};
          inline string getEndTimeDaily() const { DARABONBA_PTR_GET_DEFAULT(endTimeDaily_, "") };
          inline Rates& setEndTimeDaily(string endTimeDaily) { DARABONBA_PTR_SET_VALUE(endTimeDaily_, endTimeDaily) };


          // hotelDetailRatePriceDTO Field Functions 
          bool hasHotelDetailRatePriceDTO() const { return this->hotelDetailRatePriceDTO_ != nullptr;};
          void deleteHotelDetailRatePriceDTO() { this->hotelDetailRatePriceDTO_ = nullptr;};
          inline const vector<Rates::HotelDetailRatePriceDTO> & getHotelDetailRatePriceDTO() const { DARABONBA_PTR_GET_CONST(hotelDetailRatePriceDTO_, vector<Rates::HotelDetailRatePriceDTO>) };
          inline vector<Rates::HotelDetailRatePriceDTO> getHotelDetailRatePriceDTO() { DARABONBA_PTR_GET(hotelDetailRatePriceDTO_, vector<Rates::HotelDetailRatePriceDTO>) };
          inline Rates& setHotelDetailRatePriceDTO(const vector<Rates::HotelDetailRatePriceDTO> & hotelDetailRatePriceDTO) { DARABONBA_PTR_SET_VALUE(hotelDetailRatePriceDTO_, hotelDetailRatePriceDTO) };
          inline Rates& setHotelDetailRatePriceDTO(vector<Rates::HotelDetailRatePriceDTO> && hotelDetailRatePriceDTO) { DARABONBA_PTR_SET_RVALUE(hotelDetailRatePriceDTO_, hotelDetailRatePriceDTO) };


          // hotelMemberBenefit Field Functions 
          bool hasHotelMemberBenefit() const { return this->hotelMemberBenefit_ != nullptr;};
          void deleteHotelMemberBenefit() { this->hotelMemberBenefit_ = nullptr;};
          inline const map<string, string> & getHotelMemberBenefit() const { DARABONBA_PTR_GET_CONST(hotelMemberBenefit_, map<string, string>) };
          inline map<string, string> getHotelMemberBenefit() { DARABONBA_PTR_GET(hotelMemberBenefit_, map<string, string>) };
          inline Rates& setHotelMemberBenefit(const map<string, string> & hotelMemberBenefit) { DARABONBA_PTR_SET_VALUE(hotelMemberBenefit_, hotelMemberBenefit) };
          inline Rates& setHotelMemberBenefit(map<string, string> && hotelMemberBenefit) { DARABONBA_PTR_SET_RVALUE(hotelMemberBenefit_, hotelMemberBenefit) };


          // instantConfirm Field Functions 
          bool hasInstantConfirm() const { return this->instantConfirm_ != nullptr;};
          void deleteInstantConfirm() { this->instantConfirm_ = nullptr;};
          inline bool getInstantConfirm() const { DARABONBA_PTR_GET_DEFAULT(instantConfirm_, false) };
          inline Rates& setInstantConfirm(bool instantConfirm) { DARABONBA_PTR_SET_VALUE(instantConfirm_, instantConfirm) };


          // inventoryDesc Field Functions 
          bool hasInventoryDesc() const { return this->inventoryDesc_ != nullptr;};
          void deleteInventoryDesc() { this->inventoryDesc_ = nullptr;};
          inline string getInventoryDesc() const { DARABONBA_PTR_GET_DEFAULT(inventoryDesc_, "") };
          inline Rates& setInventoryDesc(string inventoryDesc) { DARABONBA_PTR_SET_VALUE(inventoryDesc_, inventoryDesc) };


          // inventoryPrice Field Functions 
          bool hasInventoryPrice() const { return this->inventoryPrice_ != nullptr;};
          void deleteInventoryPrice() { this->inventoryPrice_ = nullptr;};
          inline string getInventoryPrice() const { DARABONBA_PTR_GET_DEFAULT(inventoryPrice_, "") };
          inline Rates& setInventoryPrice(string inventoryPrice) { DARABONBA_PTR_SET_VALUE(inventoryPrice_, inventoryPrice) };


          // isBusinessPay4Goods Field Functions 
          bool hasIsBusinessPay4Goods() const { return this->isBusinessPay4Goods_ != nullptr;};
          void deleteIsBusinessPay4Goods() { this->isBusinessPay4Goods_ = nullptr;};
          inline bool getIsBusinessPay4Goods() const { DARABONBA_PTR_GET_DEFAULT(isBusinessPay4Goods_, false) };
          inline Rates& setIsBusinessPay4Goods(bool isBusinessPay4Goods) { DARABONBA_PTR_SET_VALUE(isBusinessPay4Goods_, isBusinessPay4Goods) };


          // isGuarantee Field Functions 
          bool hasIsGuarantee() const { return this->isGuarantee_ != nullptr;};
          void deleteIsGuarantee() { this->isGuarantee_ = nullptr;};
          inline int32_t getIsGuarantee() const { DARABONBA_PTR_GET_DEFAULT(isGuarantee_, 0) };
          inline Rates& setIsGuarantee(int32_t isGuarantee) { DARABONBA_PTR_SET_VALUE(isGuarantee_, isGuarantee) };


          // isNeedEmail Field Functions 
          bool hasIsNeedEmail() const { return this->isNeedEmail_ != nullptr;};
          void deleteIsNeedEmail() { this->isNeedEmail_ = nullptr;};
          inline bool getIsNeedEmail() const { DARABONBA_PTR_GET_DEFAULT(isNeedEmail_, false) };
          inline Rates& setIsNeedEmail(bool isNeedEmail) { DARABONBA_PTR_SET_VALUE(isNeedEmail_, isNeedEmail) };


          // itemId Field Functions 
          bool hasItemId() const { return this->itemId_ != nullptr;};
          void deleteItemId() { this->itemId_ = nullptr;};
          inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
          inline Rates& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


          // lastCancelTime Field Functions 
          bool hasLastCancelTime() const { return this->lastCancelTime_ != nullptr;};
          void deleteLastCancelTime() { this->lastCancelTime_ = nullptr;};
          inline string getLastCancelTime() const { DARABONBA_PTR_GET_DEFAULT(lastCancelTime_, "") };
          inline Rates& setLastCancelTime(string lastCancelTime) { DARABONBA_PTR_SET_VALUE(lastCancelTime_, lastCancelTime) };


          // maxOccupancy Field Functions 
          bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
          void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
          inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
          inline Rates& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


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


          // needCertificate Field Functions 
          bool hasNeedCertificate() const { return this->needCertificate_ != nullptr;};
          void deleteNeedCertificate() { this->needCertificate_ = nullptr;};
          inline bool getNeedCertificate() const { DARABONBA_PTR_GET_DEFAULT(needCertificate_, false) };
          inline Rates& setNeedCertificate(bool needCertificate) { DARABONBA_PTR_SET_VALUE(needCertificate_, needCertificate) };


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


          // orderShipTime Field Functions 
          bool hasOrderShipTime() const { return this->orderShipTime_ != nullptr;};
          void deleteOrderShipTime() { this->orderShipTime_ = nullptr;};
          inline int32_t getOrderShipTime() const { DARABONBA_PTR_GET_DEFAULT(orderShipTime_, 0) };
          inline Rates& setOrderShipTime(int32_t orderShipTime) { DARABONBA_PTR_SET_VALUE(orderShipTime_, orderShipTime) };


          // paymentType Field Functions 
          bool hasPaymentType() const { return this->paymentType_ != nullptr;};
          void deletePaymentType() { this->paymentType_ = nullptr;};
          inline int32_t getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
          inline Rates& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


          // priceType Field Functions 
          bool hasPriceType() const { return this->priceType_ != nullptr;};
          void deletePriceType() { this->priceType_ = nullptr;};
          inline int32_t getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, 0) };
          inline Rates& setPriceType(int32_t priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


          // promotionInfo Field Functions 
          bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
          void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
          inline string getPromotionInfo() const { DARABONBA_PTR_GET_DEFAULT(promotionInfo_, "") };
          inline Rates& setPromotionInfo(string promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };


          // rateId Field Functions 
          bool hasRateId() const { return this->rateId_ != nullptr;};
          void deleteRateId() { this->rateId_ = nullptr;};
          inline int64_t getRateId() const { DARABONBA_PTR_GET_DEFAULT(rateId_, 0L) };
          inline Rates& setRateId(int64_t rateId) { DARABONBA_PTR_SET_VALUE(rateId_, rateId) };


          // rateKey Field Functions 
          bool hasRateKey() const { return this->rateKey_ != nullptr;};
          void deleteRateKey() { this->rateKey_ = nullptr;};
          inline string getRateKey() const { DARABONBA_PTR_GET_DEFAULT(rateKey_, "") };
          inline Rates& setRateKey(string rateKey) { DARABONBA_PTR_SET_VALUE(rateKey_, rateKey) };


          // ratePlanName Field Functions 
          bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
          void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
          inline string getRatePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
          inline Rates& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


          // rpId Field Functions 
          bool hasRpId() const { return this->rpId_ != nullptr;};
          void deleteRpId() { this->rpId_ = nullptr;};
          inline int64_t getRpId() const { DARABONBA_PTR_GET_DEFAULT(rpId_, 0L) };
          inline Rates& setRpId(int64_t rpId) { DARABONBA_PTR_SET_VALUE(rpId_, rpId) };


          // sellerId Field Functions 
          bool hasSellerId() const { return this->sellerId_ != nullptr;};
          void deleteSellerId() { this->sellerId_ = nullptr;};
          inline int64_t getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
          inline Rates& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


          // startTimeDaily Field Functions 
          bool hasStartTimeDaily() const { return this->startTimeDaily_ != nullptr;};
          void deleteStartTimeDaily() { this->startTimeDaily_ = nullptr;};
          inline string getStartTimeDaily() const { DARABONBA_PTR_GET_DEFAULT(startTimeDaily_, "") };
          inline Rates& setStartTimeDaily(string startTimeDaily) { DARABONBA_PTR_SET_VALUE(startTimeDaily_, startTimeDaily) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Rates& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // supplierCode Field Functions 
          bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
          void deleteSupplierCode() { this->supplierCode_ = nullptr;};
          inline string getSupplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
          inline Rates& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


          // supplierName Field Functions 
          bool hasSupplierName() const { return this->supplierName_ != nullptr;};
          void deleteSupplierName() { this->supplierName_ = nullptr;};
          inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
          inline Rates& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


          // supportSpecialInvoice Field Functions 
          bool hasSupportSpecialInvoice() const { return this->supportSpecialInvoice_ != nullptr;};
          void deleteSupportSpecialInvoice() { this->supportSpecialInvoice_ = nullptr;};
          inline bool getSupportSpecialInvoice() const { DARABONBA_PTR_GET_DEFAULT(supportSpecialInvoice_, false) };
          inline Rates& setSupportSpecialInvoice(bool supportSpecialInvoice) { DARABONBA_PTR_SET_VALUE(supportSpecialInvoice_, supportSpecialInvoice) };


          // unroundingDailyPriceFormatYuan Field Functions 
          bool hasUnroundingDailyPriceFormatYuan() const { return this->unroundingDailyPriceFormatYuan_ != nullptr;};
          void deleteUnroundingDailyPriceFormatYuan() { this->unroundingDailyPriceFormatYuan_ = nullptr;};
          inline string getUnroundingDailyPriceFormatYuan() const { DARABONBA_PTR_GET_DEFAULT(unroundingDailyPriceFormatYuan_, "") };
          inline Rates& setUnroundingDailyPriceFormatYuan(string unroundingDailyPriceFormatYuan) { DARABONBA_PTR_SET_VALUE(unroundingDailyPriceFormatYuan_, unroundingDailyPriceFormatYuan) };


        protected:
          shared_ptr<string> bedDesc_ {};
          shared_ptr<string> bedType_ {};
          shared_ptr<string> breakfast_ {};
          shared_ptr<Rates::BtripCancelRule> btripCancelRule_ {};
          shared_ptr<vector<Rates::BtripHotelCancelDesc>> btripHotelCancelDesc_ {};
          shared_ptr<bool> canSmoking_ {};
          shared_ptr<string> cancelPolicyDesc_ {};
          shared_ptr<int32_t> cancelPolicyType_ {};
          shared_ptr<string> companyAassist_ {};
          shared_ptr<string> companyAssistType_ {};
          shared_ptr<int32_t> confirmType_ {};
          shared_ptr<string> currencyCode_ {};
          shared_ptr<string> dailyPriceFormatYuan_ {};
          shared_ptr<string> dailyPriceView_ {};
          shared_ptr<Rates::DiscountDesc> discountDesc_ {};
          shared_ptr<string> endTimeDaily_ {};
          shared_ptr<vector<Rates::HotelDetailRatePriceDTO>> hotelDetailRatePriceDTO_ {};
          shared_ptr<map<string, string>> hotelMemberBenefit_ {};
          shared_ptr<bool> instantConfirm_ {};
          shared_ptr<string> inventoryDesc_ {};
          shared_ptr<string> inventoryPrice_ {};
          shared_ptr<bool> isBusinessPay4Goods_ {};
          shared_ptr<int32_t> isGuarantee_ {};
          shared_ptr<bool> isNeedEmail_ {};
          shared_ptr<int64_t> itemId_ {};
          shared_ptr<string> lastCancelTime_ {};
          shared_ptr<int32_t> maxOccupancy_ {};
          shared_ptr<int32_t> minAdvHours_ {};
          shared_ptr<int32_t> minDays_ {};
          shared_ptr<bool> needCertificate_ {};
          shared_ptr<int32_t> nod_ {};
          shared_ptr<int32_t> nop_ {};
          shared_ptr<int32_t> orderShipTime_ {};
          shared_ptr<int32_t> paymentType_ {};
          shared_ptr<int32_t> priceType_ {};
          shared_ptr<string> promotionInfo_ {};
          shared_ptr<int64_t> rateId_ {};
          shared_ptr<string> rateKey_ {};
          shared_ptr<string> ratePlanName_ {};
          shared_ptr<int64_t> rpId_ {};
          shared_ptr<int64_t> sellerId_ {};
          shared_ptr<string> startTimeDaily_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> supplierCode_ {};
          shared_ptr<string> supplierName_ {};
          shared_ptr<bool> supportSpecialInvoice_ {};
          shared_ptr<string> unroundingDailyPriceFormatYuan_ {};
        };

        virtual bool empty() const override { return this->area_ == nullptr
        && this->bedTypeString_ == nullptr && this->extraBed_ == nullptr && this->facility_ == nullptr && this->floor_ == nullptr && this->maxOccupancy_ == nullptr
        && this->name_ == nullptr && this->networkService_ == nullptr && this->pics_ == nullptr && this->rates_ == nullptr && this->roomDasc_ == nullptr
        && this->roomFacility_ == nullptr && this->roomService_ == nullptr && this->srid_ == nullptr && this->status_ == nullptr && this->windowType_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline Rooms& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // bedTypeString Field Functions 
        bool hasBedTypeString() const { return this->bedTypeString_ != nullptr;};
        void deleteBedTypeString() { this->bedTypeString_ = nullptr;};
        inline string getBedTypeString() const { DARABONBA_PTR_GET_DEFAULT(bedTypeString_, "") };
        inline Rooms& setBedTypeString(string bedTypeString) { DARABONBA_PTR_SET_VALUE(bedTypeString_, bedTypeString) };


        // extraBed Field Functions 
        bool hasExtraBed() const { return this->extraBed_ != nullptr;};
        void deleteExtraBed() { this->extraBed_ = nullptr;};
        inline bool getExtraBed() const { DARABONBA_PTR_GET_DEFAULT(extraBed_, false) };
        inline Rooms& setExtraBed(bool extraBed) { DARABONBA_PTR_SET_VALUE(extraBed_, extraBed) };


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


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rooms& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkService Field Functions 
        bool hasNetworkService() const { return this->networkService_ != nullptr;};
        void deleteNetworkService() { this->networkService_ = nullptr;};
        inline string getNetworkService() const { DARABONBA_PTR_GET_DEFAULT(networkService_, "") };
        inline Rooms& setNetworkService(string networkService) { DARABONBA_PTR_SET_VALUE(networkService_, networkService) };


        // pics Field Functions 
        bool hasPics() const { return this->pics_ != nullptr;};
        void deletePics() { this->pics_ = nullptr;};
        inline string getPics() const { DARABONBA_PTR_GET_DEFAULT(pics_, "") };
        inline Rooms& setPics(string pics) { DARABONBA_PTR_SET_VALUE(pics_, pics) };


        // rates Field Functions 
        bool hasRates() const { return this->rates_ != nullptr;};
        void deleteRates() { this->rates_ = nullptr;};
        inline const vector<Rooms::Rates> & getRates() const { DARABONBA_PTR_GET_CONST(rates_, vector<Rooms::Rates>) };
        inline vector<Rooms::Rates> getRates() { DARABONBA_PTR_GET(rates_, vector<Rooms::Rates>) };
        inline Rooms& setRates(const vector<Rooms::Rates> & rates) { DARABONBA_PTR_SET_VALUE(rates_, rates) };
        inline Rooms& setRates(vector<Rooms::Rates> && rates) { DARABONBA_PTR_SET_RVALUE(rates_, rates) };


        // roomDasc Field Functions 
        bool hasRoomDasc() const { return this->roomDasc_ != nullptr;};
        void deleteRoomDasc() { this->roomDasc_ = nullptr;};
        inline string getRoomDasc() const { DARABONBA_PTR_GET_DEFAULT(roomDasc_, "") };
        inline Rooms& setRoomDasc(string roomDasc) { DARABONBA_PTR_SET_VALUE(roomDasc_, roomDasc) };


        // roomFacility Field Functions 
        bool hasRoomFacility() const { return this->roomFacility_ != nullptr;};
        void deleteRoomFacility() { this->roomFacility_ = nullptr;};
        inline const vector<string> & getRoomFacility() const { DARABONBA_PTR_GET_CONST(roomFacility_, vector<string>) };
        inline vector<string> getRoomFacility() { DARABONBA_PTR_GET(roomFacility_, vector<string>) };
        inline Rooms& setRoomFacility(const vector<string> & roomFacility) { DARABONBA_PTR_SET_VALUE(roomFacility_, roomFacility) };
        inline Rooms& setRoomFacility(vector<string> && roomFacility) { DARABONBA_PTR_SET_RVALUE(roomFacility_, roomFacility) };


        // roomService Field Functions 
        bool hasRoomService() const { return this->roomService_ != nullptr;};
        void deleteRoomService() { this->roomService_ = nullptr;};
        inline const vector<Rooms::RoomService> & getRoomService() const { DARABONBA_PTR_GET_CONST(roomService_, vector<Rooms::RoomService>) };
        inline vector<Rooms::RoomService> getRoomService() { DARABONBA_PTR_GET(roomService_, vector<Rooms::RoomService>) };
        inline Rooms& setRoomService(const vector<Rooms::RoomService> & roomService) { DARABONBA_PTR_SET_VALUE(roomService_, roomService) };
        inline Rooms& setRoomService(vector<Rooms::RoomService> && roomService) { DARABONBA_PTR_SET_RVALUE(roomService_, roomService) };


        // srid Field Functions 
        bool hasSrid() const { return this->srid_ != nullptr;};
        void deleteSrid() { this->srid_ = nullptr;};
        inline int64_t getSrid() const { DARABONBA_PTR_GET_DEFAULT(srid_, 0L) };
        inline Rooms& setSrid(int64_t srid) { DARABONBA_PTR_SET_VALUE(srid_, srid) };


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
        shared_ptr<string> bedTypeString_ {};
        shared_ptr<bool> extraBed_ {};
        shared_ptr<string> facility_ {};
        shared_ptr<string> floor_ {};
        shared_ptr<int32_t> maxOccupancy_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> networkService_ {};
        shared_ptr<string> pics_ {};
        shared_ptr<vector<Rooms::Rates>> rates_ {};
        shared_ptr<string> roomDasc_ {};
        shared_ptr<vector<string>> roomFacility_ {};
        shared_ptr<vector<Rooms::RoomService>> roomService_ {};
        shared_ptr<int64_t> srid_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> windowType_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->bookingInstructions_ == nullptr && this->canForeigner_ == nullptr && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->descriptions_ == nullptr
        && this->dinamicBannerPicUrls_ == nullptr && this->earlyArrivalTime_ == nullptr && this->hotelGroupDesc_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr
        && this->lateArrivalTime_ == nullptr && this->rooms_ == nullptr && this->searchId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Module& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // bookingInstructions Field Functions 
      bool hasBookingInstructions() const { return this->bookingInstructions_ != nullptr;};
      void deleteBookingInstructions() { this->bookingInstructions_ = nullptr;};
      inline const map<string, string> & getBookingInstructions() const { DARABONBA_PTR_GET_CONST(bookingInstructions_, map<string, string>) };
      inline map<string, string> getBookingInstructions() { DARABONBA_PTR_GET(bookingInstructions_, map<string, string>) };
      inline Module& setBookingInstructions(const map<string, string> & bookingInstructions) { DARABONBA_PTR_SET_VALUE(bookingInstructions_, bookingInstructions) };
      inline Module& setBookingInstructions(map<string, string> && bookingInstructions) { DARABONBA_PTR_SET_RVALUE(bookingInstructions_, bookingInstructions) };


      // canForeigner Field Functions 
      bool hasCanForeigner() const { return this->canForeigner_ != nullptr;};
      void deleteCanForeigner() { this->canForeigner_ = nullptr;};
      inline bool getCanForeigner() const { DARABONBA_PTR_GET_DEFAULT(canForeigner_, false) };
      inline Module& setCanForeigner(bool canForeigner) { DARABONBA_PTR_SET_VALUE(canForeigner_, canForeigner) };


      // checkIn Field Functions 
      bool hasCheckIn() const { return this->checkIn_ != nullptr;};
      void deleteCheckIn() { this->checkIn_ = nullptr;};
      inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
      inline Module& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


      // checkOut Field Functions 
      bool hasCheckOut() const { return this->checkOut_ != nullptr;};
      void deleteCheckOut() { this->checkOut_ = nullptr;};
      inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
      inline Module& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


      // descriptions Field Functions 
      bool hasDescriptions() const { return this->descriptions_ != nullptr;};
      void deleteDescriptions() { this->descriptions_ = nullptr;};
      inline const vector<string> & getDescriptions() const { DARABONBA_PTR_GET_CONST(descriptions_, vector<string>) };
      inline vector<string> getDescriptions() { DARABONBA_PTR_GET(descriptions_, vector<string>) };
      inline Module& setDescriptions(const vector<string> & descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };
      inline Module& setDescriptions(vector<string> && descriptions) { DARABONBA_PTR_SET_RVALUE(descriptions_, descriptions) };


      // dinamicBannerPicUrls Field Functions 
      bool hasDinamicBannerPicUrls() const { return this->dinamicBannerPicUrls_ != nullptr;};
      void deleteDinamicBannerPicUrls() { this->dinamicBannerPicUrls_ = nullptr;};
      inline const vector<string> & getDinamicBannerPicUrls() const { DARABONBA_PTR_GET_CONST(dinamicBannerPicUrls_, vector<string>) };
      inline vector<string> getDinamicBannerPicUrls() { DARABONBA_PTR_GET(dinamicBannerPicUrls_, vector<string>) };
      inline Module& setDinamicBannerPicUrls(const vector<string> & dinamicBannerPicUrls) { DARABONBA_PTR_SET_VALUE(dinamicBannerPicUrls_, dinamicBannerPicUrls) };
      inline Module& setDinamicBannerPicUrls(vector<string> && dinamicBannerPicUrls) { DARABONBA_PTR_SET_RVALUE(dinamicBannerPicUrls_, dinamicBannerPicUrls) };


      // earlyArrivalTime Field Functions 
      bool hasEarlyArrivalTime() const { return this->earlyArrivalTime_ != nullptr;};
      void deleteEarlyArrivalTime() { this->earlyArrivalTime_ = nullptr;};
      inline string getEarlyArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(earlyArrivalTime_, "") };
      inline Module& setEarlyArrivalTime(string earlyArrivalTime) { DARABONBA_PTR_SET_VALUE(earlyArrivalTime_, earlyArrivalTime) };


      // hotelGroupDesc Field Functions 
      bool hasHotelGroupDesc() const { return this->hotelGroupDesc_ != nullptr;};
      void deleteHotelGroupDesc() { this->hotelGroupDesc_ = nullptr;};
      inline string getHotelGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(hotelGroupDesc_, "") };
      inline Module& setHotelGroupDesc(string hotelGroupDesc) { DARABONBA_PTR_SET_VALUE(hotelGroupDesc_, hotelGroupDesc) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline int64_t getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, 0L) };
      inline Module& setHotelId(int64_t hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // hotelName Field Functions 
      bool hasHotelName() const { return this->hotelName_ != nullptr;};
      void deleteHotelName() { this->hotelName_ = nullptr;};
      inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
      inline Module& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


      // lateArrivalTime Field Functions 
      bool hasLateArrivalTime() const { return this->lateArrivalTime_ != nullptr;};
      void deleteLateArrivalTime() { this->lateArrivalTime_ = nullptr;};
      inline string getLateArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(lateArrivalTime_, "") };
      inline Module& setLateArrivalTime(string lateArrivalTime) { DARABONBA_PTR_SET_VALUE(lateArrivalTime_, lateArrivalTime) };


      // rooms Field Functions 
      bool hasRooms() const { return this->rooms_ != nullptr;};
      void deleteRooms() { this->rooms_ = nullptr;};
      inline const vector<Module::Rooms> & getRooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<Module::Rooms>) };
      inline vector<Module::Rooms> getRooms() { DARABONBA_PTR_GET(rooms_, vector<Module::Rooms>) };
      inline Module& setRooms(const vector<Module::Rooms> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
      inline Module& setRooms(vector<Module::Rooms> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


      // searchId Field Functions 
      bool hasSearchId() const { return this->searchId_ != nullptr;};
      void deleteSearchId() { this->searchId_ = nullptr;};
      inline string getSearchId() const { DARABONBA_PTR_GET_DEFAULT(searchId_, "") };
      inline Module& setSearchId(string searchId) { DARABONBA_PTR_SET_VALUE(searchId_, searchId) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<map<string, string>> bookingInstructions_ {};
      shared_ptr<bool> canForeigner_ {};
      shared_ptr<string> checkIn_ {};
      shared_ptr<string> checkOut_ {};
      shared_ptr<vector<string>> descriptions_ {};
      shared_ptr<vector<string>> dinamicBannerPicUrls_ {};
      shared_ptr<string> earlyArrivalTime_ {};
      shared_ptr<string> hotelGroupDesc_ {};
      shared_ptr<int64_t> hotelId_ {};
      shared_ptr<string> hotelName_ {};
      shared_ptr<string> lateArrivalTime_ {};
      shared_ptr<vector<Module::Rooms>> rooms_ {};
      shared_ptr<string> searchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelGoodsQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelGoodsQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelGoodsQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelGoodsQueryResponseBody::Module) };
    inline HotelGoodsQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelGoodsQueryResponseBody::Module) };
    inline HotelGoodsQueryResponseBody& setModule(const HotelGoodsQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelGoodsQueryResponseBody& setModule(HotelGoodsQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelGoodsQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelGoodsQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelGoodsQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelGoodsQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
