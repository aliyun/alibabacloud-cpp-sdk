// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODY_HPP_
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
  class HotelOrderPreValidateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderPreValidateResponseBody() = default ;
    HotelOrderPreValidateResponseBody(const HotelOrderPreValidateResponseBody &) = default ;
    HotelOrderPreValidateResponseBody(HotelOrderPreValidateResponseBody &&) = default ;
    HotelOrderPreValidateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBody() = default ;
    HotelOrderPreValidateResponseBody& operator=(const HotelOrderPreValidateResponseBody &) = default ;
    HotelOrderPreValidateResponseBody& operator=(HotelOrderPreValidateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(extend_info, extendInfo_);
        DARABONBA_PTR_TO_JSON(item_invoice, itemInvoice_);
        DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
        DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
        DARABONBA_PTR_TO_JSON(rate_plan_daily, ratePlanDaily_);
        DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
        DARABONBA_PTR_TO_JSON(rate_plan_info, ratePlanInfo_);
        DARABONBA_PTR_TO_JSON(validate_res_key, validateResKey_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(extend_info, extendInfo_);
        DARABONBA_PTR_FROM_JSON(item_invoice, itemInvoice_);
        DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
        DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
        DARABONBA_PTR_FROM_JSON(rate_plan_daily, ratePlanDaily_);
        DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
        DARABONBA_PTR_FROM_JSON(rate_plan_info, ratePlanInfo_);
        DARABONBA_PTR_FROM_JSON(validate_res_key, validateResKey_);
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
      class RatePlanInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RatePlanInfo& obj) { 
          DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
          DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
          DARABONBA_PTR_TO_JSON(cert_type_list, certTypeList_);
          DARABONBA_PTR_TO_JSON(earliest_check_in_time, earliestCheckInTime_);
          DARABONBA_PTR_TO_JSON(hour_item_arrival_time_info, hourItemArrivalTimeInfo_);
          DARABONBA_PTR_TO_JSON(latest_check_out_time, latestCheckOutTime_);
          DARABONBA_PTR_TO_JSON(max_booking_num, maxBookingNum_);
          DARABONBA_PTR_TO_JSON(max_occupancy_num, maxOccupancyNum_);
          DARABONBA_PTR_TO_JSON(need_certificate, needCertificate_);
          DARABONBA_PTR_TO_JSON(need_email, needEmail_);
          DARABONBA_PTR_TO_JSON(need_english_name, needEnglishName_);
          DARABONBA_PTR_TO_JSON(rp_type, rpType_);
          DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
          DARABONBA_PTR_TO_JSON(total_room_price, totalRoomPrice_);
        };
        friend void from_json(const Darabonba::Json& j, RatePlanInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
          DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
          DARABONBA_PTR_FROM_JSON(cert_type_list, certTypeList_);
          DARABONBA_PTR_FROM_JSON(earliest_check_in_time, earliestCheckInTime_);
          DARABONBA_PTR_FROM_JSON(hour_item_arrival_time_info, hourItemArrivalTimeInfo_);
          DARABONBA_PTR_FROM_JSON(latest_check_out_time, latestCheckOutTime_);
          DARABONBA_PTR_FROM_JSON(max_booking_num, maxBookingNum_);
          DARABONBA_PTR_FROM_JSON(max_occupancy_num, maxOccupancyNum_);
          DARABONBA_PTR_FROM_JSON(need_certificate, needCertificate_);
          DARABONBA_PTR_FROM_JSON(need_email, needEmail_);
          DARABONBA_PTR_FROM_JSON(need_english_name, needEnglishName_);
          DARABONBA_PTR_FROM_JSON(rp_type, rpType_);
          DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
          DARABONBA_PTR_FROM_JSON(total_room_price, totalRoomPrice_);
        };
        RatePlanInfo() = default ;
        RatePlanInfo(const RatePlanInfo &) = default ;
        RatePlanInfo(RatePlanInfo &&) = default ;
        RatePlanInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RatePlanInfo() = default ;
        RatePlanInfo& operator=(const RatePlanInfo &) = default ;
        RatePlanInfo& operator=(RatePlanInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HourItemArrivalTimeInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HourItemArrivalTimeInfo& obj) { 
            DARABONBA_PTR_TO_JSON(actual_live_hour, actualLiveHour_);
            DARABONBA_PTR_TO_JSON(earliest_check_in_time, earliestCheckInTime_);
            DARABONBA_PTR_TO_JSON(latest_check_in_time, latestCheckInTime_);
            DARABONBA_PTR_TO_JSON(latest_check_out_time, latestCheckOutTime_);
            DARABONBA_PTR_TO_JSON(live_hour, liveHour_);
          };
          friend void from_json(const Darabonba::Json& j, HourItemArrivalTimeInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(actual_live_hour, actualLiveHour_);
            DARABONBA_PTR_FROM_JSON(earliest_check_in_time, earliestCheckInTime_);
            DARABONBA_PTR_FROM_JSON(latest_check_in_time, latestCheckInTime_);
            DARABONBA_PTR_FROM_JSON(latest_check_out_time, latestCheckOutTime_);
            DARABONBA_PTR_FROM_JSON(live_hour, liveHour_);
          };
          HourItemArrivalTimeInfo() = default ;
          HourItemArrivalTimeInfo(const HourItemArrivalTimeInfo &) = default ;
          HourItemArrivalTimeInfo(HourItemArrivalTimeInfo &&) = default ;
          HourItemArrivalTimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HourItemArrivalTimeInfo() = default ;
          HourItemArrivalTimeInfo& operator=(const HourItemArrivalTimeInfo &) = default ;
          HourItemArrivalTimeInfo& operator=(HourItemArrivalTimeInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actualLiveHour_ == nullptr
        && this->earliestCheckInTime_ == nullptr && this->latestCheckInTime_ == nullptr && this->latestCheckOutTime_ == nullptr && this->liveHour_ == nullptr; };
          // actualLiveHour Field Functions 
          bool hasActualLiveHour() const { return this->actualLiveHour_ != nullptr;};
          void deleteActualLiveHour() { this->actualLiveHour_ = nullptr;};
          inline string getActualLiveHour() const { DARABONBA_PTR_GET_DEFAULT(actualLiveHour_, "") };
          inline HourItemArrivalTimeInfo& setActualLiveHour(string actualLiveHour) { DARABONBA_PTR_SET_VALUE(actualLiveHour_, actualLiveHour) };


          // earliestCheckInTime Field Functions 
          bool hasEarliestCheckInTime() const { return this->earliestCheckInTime_ != nullptr;};
          void deleteEarliestCheckInTime() { this->earliestCheckInTime_ = nullptr;};
          inline string getEarliestCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(earliestCheckInTime_, "") };
          inline HourItemArrivalTimeInfo& setEarliestCheckInTime(string earliestCheckInTime) { DARABONBA_PTR_SET_VALUE(earliestCheckInTime_, earliestCheckInTime) };


          // latestCheckInTime Field Functions 
          bool hasLatestCheckInTime() const { return this->latestCheckInTime_ != nullptr;};
          void deleteLatestCheckInTime() { this->latestCheckInTime_ = nullptr;};
          inline string getLatestCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(latestCheckInTime_, "") };
          inline HourItemArrivalTimeInfo& setLatestCheckInTime(string latestCheckInTime) { DARABONBA_PTR_SET_VALUE(latestCheckInTime_, latestCheckInTime) };


          // latestCheckOutTime Field Functions 
          bool hasLatestCheckOutTime() const { return this->latestCheckOutTime_ != nullptr;};
          void deleteLatestCheckOutTime() { this->latestCheckOutTime_ = nullptr;};
          inline string getLatestCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(latestCheckOutTime_, "") };
          inline HourItemArrivalTimeInfo& setLatestCheckOutTime(string latestCheckOutTime) { DARABONBA_PTR_SET_VALUE(latestCheckOutTime_, latestCheckOutTime) };


          // liveHour Field Functions 
          bool hasLiveHour() const { return this->liveHour_ != nullptr;};
          void deleteLiveHour() { this->liveHour_ = nullptr;};
          inline string getLiveHour() const { DARABONBA_PTR_GET_DEFAULT(liveHour_, "") };
          inline HourItemArrivalTimeInfo& setLiveHour(string liveHour) { DARABONBA_PTR_SET_VALUE(liveHour_, liveHour) };


        protected:
          shared_ptr<string> actualLiveHour_ {};
          shared_ptr<string> earliestCheckInTime_ {};
          shared_ptr<string> latestCheckInTime_ {};
          shared_ptr<string> latestCheckOutTime_ {};
          shared_ptr<string> liveHour_ {};
        };

        class BtripHotelCancelPolicyDTO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicyDTO& obj) { 
            DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
            DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(short_desc, shortDesc_);
          };
          friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicyDTO& obj) { 
            DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
            DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(short_desc, shortDesc_);
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
        && this->cancelPolicyType_ == nullptr && this->content_ == nullptr && this->shortDesc_ == nullptr; };
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


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline BtripHotelCancelPolicyDTO& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // shortDesc Field Functions 
          bool hasShortDesc() const { return this->shortDesc_ != nullptr;};
          void deleteShortDesc() { this->shortDesc_ = nullptr;};
          inline string getShortDesc() const { DARABONBA_PTR_GET_DEFAULT(shortDesc_, "") };
          inline BtripHotelCancelPolicyDTO& setShortDesc(string shortDesc) { DARABONBA_PTR_SET_VALUE(shortDesc_, shortDesc) };


        protected:
          shared_ptr<vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ {};
          shared_ptr<int32_t> cancelPolicyType_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> shortDesc_ {};
        };

        virtual bool empty() const override { return this->bedDesc_ == nullptr
        && this->btripHotelCancelPolicyDTO_ == nullptr && this->certTypeList_ == nullptr && this->earliestCheckInTime_ == nullptr && this->hourItemArrivalTimeInfo_ == nullptr && this->latestCheckOutTime_ == nullptr
        && this->maxBookingNum_ == nullptr && this->maxOccupancyNum_ == nullptr && this->needCertificate_ == nullptr && this->needEmail_ == nullptr && this->needEnglishName_ == nullptr
        && this->rpType_ == nullptr && this->totalOrderPrice_ == nullptr && this->totalRoomPrice_ == nullptr; };
        // bedDesc Field Functions 
        bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
        void deleteBedDesc() { this->bedDesc_ = nullptr;};
        inline string getBedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
        inline RatePlanInfo& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


        // btripHotelCancelPolicyDTO Field Functions 
        bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
        void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
        inline const RatePlanInfo::BtripHotelCancelPolicyDTO & getBtripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, RatePlanInfo::BtripHotelCancelPolicyDTO) };
        inline RatePlanInfo::BtripHotelCancelPolicyDTO getBtripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, RatePlanInfo::BtripHotelCancelPolicyDTO) };
        inline RatePlanInfo& setBtripHotelCancelPolicyDTO(const RatePlanInfo::BtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
        inline RatePlanInfo& setBtripHotelCancelPolicyDTO(RatePlanInfo::BtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


        // certTypeList Field Functions 
        bool hasCertTypeList() const { return this->certTypeList_ != nullptr;};
        void deleteCertTypeList() { this->certTypeList_ = nullptr;};
        inline const vector<string> & getCertTypeList() const { DARABONBA_PTR_GET_CONST(certTypeList_, vector<string>) };
        inline vector<string> getCertTypeList() { DARABONBA_PTR_GET(certTypeList_, vector<string>) };
        inline RatePlanInfo& setCertTypeList(const vector<string> & certTypeList) { DARABONBA_PTR_SET_VALUE(certTypeList_, certTypeList) };
        inline RatePlanInfo& setCertTypeList(vector<string> && certTypeList) { DARABONBA_PTR_SET_RVALUE(certTypeList_, certTypeList) };


        // earliestCheckInTime Field Functions 
        bool hasEarliestCheckInTime() const { return this->earliestCheckInTime_ != nullptr;};
        void deleteEarliestCheckInTime() { this->earliestCheckInTime_ = nullptr;};
        inline string getEarliestCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(earliestCheckInTime_, "") };
        inline RatePlanInfo& setEarliestCheckInTime(string earliestCheckInTime) { DARABONBA_PTR_SET_VALUE(earliestCheckInTime_, earliestCheckInTime) };


        // hourItemArrivalTimeInfo Field Functions 
        bool hasHourItemArrivalTimeInfo() const { return this->hourItemArrivalTimeInfo_ != nullptr;};
        void deleteHourItemArrivalTimeInfo() { this->hourItemArrivalTimeInfo_ = nullptr;};
        inline const RatePlanInfo::HourItemArrivalTimeInfo & getHourItemArrivalTimeInfo() const { DARABONBA_PTR_GET_CONST(hourItemArrivalTimeInfo_, RatePlanInfo::HourItemArrivalTimeInfo) };
        inline RatePlanInfo::HourItemArrivalTimeInfo getHourItemArrivalTimeInfo() { DARABONBA_PTR_GET(hourItemArrivalTimeInfo_, RatePlanInfo::HourItemArrivalTimeInfo) };
        inline RatePlanInfo& setHourItemArrivalTimeInfo(const RatePlanInfo::HourItemArrivalTimeInfo & hourItemArrivalTimeInfo) { DARABONBA_PTR_SET_VALUE(hourItemArrivalTimeInfo_, hourItemArrivalTimeInfo) };
        inline RatePlanInfo& setHourItemArrivalTimeInfo(RatePlanInfo::HourItemArrivalTimeInfo && hourItemArrivalTimeInfo) { DARABONBA_PTR_SET_RVALUE(hourItemArrivalTimeInfo_, hourItemArrivalTimeInfo) };


        // latestCheckOutTime Field Functions 
        bool hasLatestCheckOutTime() const { return this->latestCheckOutTime_ != nullptr;};
        void deleteLatestCheckOutTime() { this->latestCheckOutTime_ = nullptr;};
        inline string getLatestCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(latestCheckOutTime_, "") };
        inline RatePlanInfo& setLatestCheckOutTime(string latestCheckOutTime) { DARABONBA_PTR_SET_VALUE(latestCheckOutTime_, latestCheckOutTime) };


        // maxBookingNum Field Functions 
        bool hasMaxBookingNum() const { return this->maxBookingNum_ != nullptr;};
        void deleteMaxBookingNum() { this->maxBookingNum_ = nullptr;};
        inline int32_t getMaxBookingNum() const { DARABONBA_PTR_GET_DEFAULT(maxBookingNum_, 0) };
        inline RatePlanInfo& setMaxBookingNum(int32_t maxBookingNum) { DARABONBA_PTR_SET_VALUE(maxBookingNum_, maxBookingNum) };


        // maxOccupancyNum Field Functions 
        bool hasMaxOccupancyNum() const { return this->maxOccupancyNum_ != nullptr;};
        void deleteMaxOccupancyNum() { this->maxOccupancyNum_ = nullptr;};
        inline int32_t getMaxOccupancyNum() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancyNum_, 0) };
        inline RatePlanInfo& setMaxOccupancyNum(int32_t maxOccupancyNum) { DARABONBA_PTR_SET_VALUE(maxOccupancyNum_, maxOccupancyNum) };


        // needCertificate Field Functions 
        bool hasNeedCertificate() const { return this->needCertificate_ != nullptr;};
        void deleteNeedCertificate() { this->needCertificate_ = nullptr;};
        inline bool getNeedCertificate() const { DARABONBA_PTR_GET_DEFAULT(needCertificate_, false) };
        inline RatePlanInfo& setNeedCertificate(bool needCertificate) { DARABONBA_PTR_SET_VALUE(needCertificate_, needCertificate) };


        // needEmail Field Functions 
        bool hasNeedEmail() const { return this->needEmail_ != nullptr;};
        void deleteNeedEmail() { this->needEmail_ = nullptr;};
        inline bool getNeedEmail() const { DARABONBA_PTR_GET_DEFAULT(needEmail_, false) };
        inline RatePlanInfo& setNeedEmail(bool needEmail) { DARABONBA_PTR_SET_VALUE(needEmail_, needEmail) };


        // needEnglishName Field Functions 
        bool hasNeedEnglishName() const { return this->needEnglishName_ != nullptr;};
        void deleteNeedEnglishName() { this->needEnglishName_ = nullptr;};
        inline bool getNeedEnglishName() const { DARABONBA_PTR_GET_DEFAULT(needEnglishName_, false) };
        inline RatePlanInfo& setNeedEnglishName(bool needEnglishName) { DARABONBA_PTR_SET_VALUE(needEnglishName_, needEnglishName) };


        // rpType Field Functions 
        bool hasRpType() const { return this->rpType_ != nullptr;};
        void deleteRpType() { this->rpType_ = nullptr;};
        inline int32_t getRpType() const { DARABONBA_PTR_GET_DEFAULT(rpType_, 0) };
        inline RatePlanInfo& setRpType(int32_t rpType) { DARABONBA_PTR_SET_VALUE(rpType_, rpType) };


        // totalOrderPrice Field Functions 
        bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
        void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
        inline int64_t getTotalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
        inline RatePlanInfo& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


        // totalRoomPrice Field Functions 
        bool hasTotalRoomPrice() const { return this->totalRoomPrice_ != nullptr;};
        void deleteTotalRoomPrice() { this->totalRoomPrice_ = nullptr;};
        inline int64_t getTotalRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(totalRoomPrice_, 0L) };
        inline RatePlanInfo& setTotalRoomPrice(int64_t totalRoomPrice) { DARABONBA_PTR_SET_VALUE(totalRoomPrice_, totalRoomPrice) };


      protected:
        shared_ptr<string> bedDesc_ {};
        shared_ptr<RatePlanInfo::BtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ {};
        shared_ptr<vector<string>> certTypeList_ {};
        shared_ptr<string> earliestCheckInTime_ {};
        shared_ptr<RatePlanInfo::HourItemArrivalTimeInfo> hourItemArrivalTimeInfo_ {};
        shared_ptr<string> latestCheckOutTime_ {};
        shared_ptr<int32_t> maxBookingNum_ {};
        shared_ptr<int32_t> maxOccupancyNum_ {};
        shared_ptr<bool> needCertificate_ {};
        shared_ptr<bool> needEmail_ {};
        shared_ptr<bool> needEnglishName_ {};
        shared_ptr<int32_t> rpType_ {};
        shared_ptr<int64_t> totalOrderPrice_ {};
        shared_ptr<int64_t> totalRoomPrice_ {};
      };

      class RatePlanDaily : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RatePlanDaily& obj) { 
          DARABONBA_PTR_TO_JSON(board, board_);
          DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
          DARABONBA_PTR_TO_JSON(max_booking_num, maxBookingNum_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
          DARABONBA_PTR_TO_JSON(room_count, roomCount_);
          DARABONBA_PTR_TO_JSON(rounding_discount_price, roundingDiscountPrice_);
          DARABONBA_PTR_TO_JSON(rounding_price, roundingPrice_);
          DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
        };
        friend void from_json(const Darabonba::Json& j, RatePlanDaily& obj) { 
          DARABONBA_PTR_FROM_JSON(board, board_);
          DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
          DARABONBA_PTR_FROM_JSON(max_booking_num, maxBookingNum_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
          DARABONBA_PTR_FROM_JSON(room_count, roomCount_);
          DARABONBA_PTR_FROM_JSON(rounding_discount_price, roundingDiscountPrice_);
          DARABONBA_PTR_FROM_JSON(rounding_price, roundingPrice_);
          DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
        };
        RatePlanDaily() = default ;
        RatePlanDaily(const RatePlanDaily &) = default ;
        RatePlanDaily(RatePlanDaily &&) = default ;
        RatePlanDaily(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RatePlanDaily() = default ;
        RatePlanDaily& operator=(const RatePlanDaily &) = default ;
        RatePlanDaily& operator=(RatePlanDaily &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->board_ == nullptr
        && this->discountPrice_ == nullptr && this->maxBookingNum_ == nullptr && this->price_ == nullptr && this->rateStartTime_ == nullptr && this->roomCount_ == nullptr
        && this->roundingDiscountPrice_ == nullptr && this->roundingPrice_ == nullptr && this->serviceFee_ == nullptr; };
        // board Field Functions 
        bool hasBoard() const { return this->board_ != nullptr;};
        void deleteBoard() { this->board_ = nullptr;};
        inline string getBoard() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
        inline RatePlanDaily& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline string getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
        inline RatePlanDaily& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // maxBookingNum Field Functions 
        bool hasMaxBookingNum() const { return this->maxBookingNum_ != nullptr;};
        void deleteMaxBookingNum() { this->maxBookingNum_ = nullptr;};
        inline int32_t getMaxBookingNum() const { DARABONBA_PTR_GET_DEFAULT(maxBookingNum_, 0) };
        inline RatePlanDaily& setMaxBookingNum(int32_t maxBookingNum) { DARABONBA_PTR_SET_VALUE(maxBookingNum_, maxBookingNum) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline RatePlanDaily& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // rateStartTime Field Functions 
        bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
        void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
        inline string getRateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
        inline RatePlanDaily& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


        // roomCount Field Functions 
        bool hasRoomCount() const { return this->roomCount_ != nullptr;};
        void deleteRoomCount() { this->roomCount_ = nullptr;};
        inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
        inline RatePlanDaily& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


        // roundingDiscountPrice Field Functions 
        bool hasRoundingDiscountPrice() const { return this->roundingDiscountPrice_ != nullptr;};
        void deleteRoundingDiscountPrice() { this->roundingDiscountPrice_ = nullptr;};
        inline string getRoundingDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(roundingDiscountPrice_, "") };
        inline RatePlanDaily& setRoundingDiscountPrice(string roundingDiscountPrice) { DARABONBA_PTR_SET_VALUE(roundingDiscountPrice_, roundingDiscountPrice) };


        // roundingPrice Field Functions 
        bool hasRoundingPrice() const { return this->roundingPrice_ != nullptr;};
        void deleteRoundingPrice() { this->roundingPrice_ = nullptr;};
        inline string getRoundingPrice() const { DARABONBA_PTR_GET_DEFAULT(roundingPrice_, "") };
        inline RatePlanDaily& setRoundingPrice(string roundingPrice) { DARABONBA_PTR_SET_VALUE(roundingPrice_, roundingPrice) };


        // serviceFee Field Functions 
        bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
        void deleteServiceFee() { this->serviceFee_ = nullptr;};
        inline int64_t getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
        inline RatePlanDaily& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


      protected:
        shared_ptr<string> board_ {};
        shared_ptr<string> discountPrice_ {};
        shared_ptr<int32_t> maxBookingNum_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> rateStartTime_ {};
        shared_ptr<int32_t> roomCount_ {};
        shared_ptr<string> roundingDiscountPrice_ {};
        shared_ptr<string> roundingPrice_ {};
        shared_ptr<int64_t> serviceFee_ {};
      };

      class PromotionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ext_attr_map, extAttrMap_);
          DARABONBA_PTR_TO_JSON(promotion_detail_info_list, promotionDetailInfoList_);
          DARABONBA_PTR_TO_JSON(promotion_total_price, promotionTotalPrice_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ext_attr_map, extAttrMap_);
          DARABONBA_PTR_FROM_JSON(promotion_detail_info_list, promotionDetailInfoList_);
          DARABONBA_PTR_FROM_JSON(promotion_total_price, promotionTotalPrice_);
        };
        PromotionInfo() = default ;
        PromotionInfo(const PromotionInfo &) = default ;
        PromotionInfo(PromotionInfo &&) = default ;
        PromotionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionInfo() = default ;
        PromotionInfo& operator=(const PromotionInfo &) = default ;
        PromotionInfo& operator=(PromotionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PromotionDetailInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromotionDetailInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(check_status, checkStatus_);
            DARABONBA_PTR_TO_JSON(need_check, needCheck_);
            DARABONBA_PTR_TO_JSON(promotion_code, promotionCode_);
            DARABONBA_PTR_TO_JSON(promotion_id, promotionId_);
            DARABONBA_PTR_TO_JSON(promotion_name, promotionName_);
            DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
            DARABONBA_PTR_TO_JSON(promotion_type, promotionType_);
          };
          friend void from_json(const Darabonba::Json& j, PromotionDetailInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(check_status, checkStatus_);
            DARABONBA_PTR_FROM_JSON(need_check, needCheck_);
            DARABONBA_PTR_FROM_JSON(promotion_code, promotionCode_);
            DARABONBA_PTR_FROM_JSON(promotion_id, promotionId_);
            DARABONBA_PTR_FROM_JSON(promotion_name, promotionName_);
            DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
            DARABONBA_PTR_FROM_JSON(promotion_type, promotionType_);
          };
          PromotionDetailInfoList() = default ;
          PromotionDetailInfoList(const PromotionDetailInfoList &) = default ;
          PromotionDetailInfoList(PromotionDetailInfoList &&) = default ;
          PromotionDetailInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromotionDetailInfoList() = default ;
          PromotionDetailInfoList& operator=(const PromotionDetailInfoList &) = default ;
          PromotionDetailInfoList& operator=(PromotionDetailInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->needCheck_ == nullptr && this->promotionCode_ == nullptr && this->promotionId_ == nullptr && this->promotionName_ == nullptr && this->promotionPrice_ == nullptr
        && this->promotionType_ == nullptr; };
          // checkStatus Field Functions 
          bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
          void deleteCheckStatus() { this->checkStatus_ = nullptr;};
          inline bool getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, false) };
          inline PromotionDetailInfoList& setCheckStatus(bool checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


          // needCheck Field Functions 
          bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
          void deleteNeedCheck() { this->needCheck_ = nullptr;};
          inline bool getNeedCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, false) };
          inline PromotionDetailInfoList& setNeedCheck(bool needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


          // promotionCode Field Functions 
          bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
          void deletePromotionCode() { this->promotionCode_ = nullptr;};
          inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
          inline PromotionDetailInfoList& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


          // promotionId Field Functions 
          bool hasPromotionId() const { return this->promotionId_ != nullptr;};
          void deletePromotionId() { this->promotionId_ = nullptr;};
          inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
          inline PromotionDetailInfoList& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


          // promotionName Field Functions 
          bool hasPromotionName() const { return this->promotionName_ != nullptr;};
          void deletePromotionName() { this->promotionName_ = nullptr;};
          inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
          inline PromotionDetailInfoList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


          // promotionPrice Field Functions 
          bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
          void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
          inline int64_t getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0L) };
          inline PromotionDetailInfoList& setPromotionPrice(int64_t promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


          // promotionType Field Functions 
          bool hasPromotionType() const { return this->promotionType_ != nullptr;};
          void deletePromotionType() { this->promotionType_ = nullptr;};
          inline string getPromotionType() const { DARABONBA_PTR_GET_DEFAULT(promotionType_, "") };
          inline PromotionDetailInfoList& setPromotionType(string promotionType) { DARABONBA_PTR_SET_VALUE(promotionType_, promotionType) };


        protected:
          shared_ptr<bool> checkStatus_ {};
          shared_ptr<bool> needCheck_ {};
          shared_ptr<string> promotionCode_ {};
          shared_ptr<string> promotionId_ {};
          shared_ptr<string> promotionName_ {};
          shared_ptr<int64_t> promotionPrice_ {};
          shared_ptr<string> promotionType_ {};
        };

        virtual bool empty() const override { return this->extAttrMap_ == nullptr
        && this->promotionDetailInfoList_ == nullptr && this->promotionTotalPrice_ == nullptr; };
        // extAttrMap Field Functions 
        bool hasExtAttrMap() const { return this->extAttrMap_ != nullptr;};
        void deleteExtAttrMap() { this->extAttrMap_ = nullptr;};
        inline const map<string, string> & getExtAttrMap() const { DARABONBA_PTR_GET_CONST(extAttrMap_, map<string, string>) };
        inline map<string, string> getExtAttrMap() { DARABONBA_PTR_GET(extAttrMap_, map<string, string>) };
        inline PromotionInfo& setExtAttrMap(const map<string, string> & extAttrMap) { DARABONBA_PTR_SET_VALUE(extAttrMap_, extAttrMap) };
        inline PromotionInfo& setExtAttrMap(map<string, string> && extAttrMap) { DARABONBA_PTR_SET_RVALUE(extAttrMap_, extAttrMap) };


        // promotionDetailInfoList Field Functions 
        bool hasPromotionDetailInfoList() const { return this->promotionDetailInfoList_ != nullptr;};
        void deletePromotionDetailInfoList() { this->promotionDetailInfoList_ = nullptr;};
        inline const vector<PromotionInfo::PromotionDetailInfoList> & getPromotionDetailInfoList() const { DARABONBA_PTR_GET_CONST(promotionDetailInfoList_, vector<PromotionInfo::PromotionDetailInfoList>) };
        inline vector<PromotionInfo::PromotionDetailInfoList> getPromotionDetailInfoList() { DARABONBA_PTR_GET(promotionDetailInfoList_, vector<PromotionInfo::PromotionDetailInfoList>) };
        inline PromotionInfo& setPromotionDetailInfoList(const vector<PromotionInfo::PromotionDetailInfoList> & promotionDetailInfoList) { DARABONBA_PTR_SET_VALUE(promotionDetailInfoList_, promotionDetailInfoList) };
        inline PromotionInfo& setPromotionDetailInfoList(vector<PromotionInfo::PromotionDetailInfoList> && promotionDetailInfoList) { DARABONBA_PTR_SET_RVALUE(promotionDetailInfoList_, promotionDetailInfoList) };


        // promotionTotalPrice Field Functions 
        bool hasPromotionTotalPrice() const { return this->promotionTotalPrice_ != nullptr;};
        void deletePromotionTotalPrice() { this->promotionTotalPrice_ = nullptr;};
        inline int64_t getPromotionTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionTotalPrice_, 0L) };
        inline PromotionInfo& setPromotionTotalPrice(int64_t promotionTotalPrice) { DARABONBA_PTR_SET_VALUE(promotionTotalPrice_, promotionTotalPrice) };


      protected:
        shared_ptr<map<string, string>> extAttrMap_ {};
        shared_ptr<vector<PromotionInfo::PromotionDetailInfoList>> promotionDetailInfoList_ {};
        shared_ptr<int64_t> promotionTotalPrice_ {};
      };

      class ItemInvoice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemInvoice& obj) { 
          DARABONBA_PTR_TO_JSON(support_special, supportSpecial_);
        };
        friend void from_json(const Darabonba::Json& j, ItemInvoice& obj) { 
          DARABONBA_PTR_FROM_JSON(support_special, supportSpecial_);
        };
        ItemInvoice() = default ;
        ItemInvoice(const ItemInvoice &) = default ;
        ItemInvoice(ItemInvoice &&) = default ;
        ItemInvoice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemInvoice() = default ;
        ItemInvoice& operator=(const ItemInvoice &) = default ;
        ItemInvoice& operator=(ItemInvoice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->supportSpecial_ == nullptr; };
        // supportSpecial Field Functions 
        bool hasSupportSpecial() const { return this->supportSpecial_ != nullptr;};
        void deleteSupportSpecial() { this->supportSpecial_ = nullptr;};
        inline bool getSupportSpecial() const { DARABONBA_PTR_GET_DEFAULT(supportSpecial_, false) };
        inline ItemInvoice& setSupportSpecial(bool supportSpecial) { DARABONBA_PTR_SET_VALUE(supportSpecial_, supportSpecial) };


      protected:
        shared_ptr<bool> supportSpecial_ {};
      };

      virtual bool empty() const override { return this->extendInfo_ == nullptr
        && this->itemInvoice_ == nullptr && this->itineraryNo_ == nullptr && this->promotionInfo_ == nullptr && this->ratePlanDaily_ == nullptr && this->ratePlanId_ == nullptr
        && this->ratePlanInfo_ == nullptr && this->validateResKey_ == nullptr; };
      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Module& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // itemInvoice Field Functions 
      bool hasItemInvoice() const { return this->itemInvoice_ != nullptr;};
      void deleteItemInvoice() { this->itemInvoice_ = nullptr;};
      inline const Module::ItemInvoice & getItemInvoice() const { DARABONBA_PTR_GET_CONST(itemInvoice_, Module::ItemInvoice) };
      inline Module::ItemInvoice getItemInvoice() { DARABONBA_PTR_GET(itemInvoice_, Module::ItemInvoice) };
      inline Module& setItemInvoice(const Module::ItemInvoice & itemInvoice) { DARABONBA_PTR_SET_VALUE(itemInvoice_, itemInvoice) };
      inline Module& setItemInvoice(Module::ItemInvoice && itemInvoice) { DARABONBA_PTR_SET_RVALUE(itemInvoice_, itemInvoice) };


      // itineraryNo Field Functions 
      bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
      void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
      inline string getItineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
      inline Module& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


      // promotionInfo Field Functions 
      bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
      void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
      inline const Module::PromotionInfo & getPromotionInfo() const { DARABONBA_PTR_GET_CONST(promotionInfo_, Module::PromotionInfo) };
      inline Module::PromotionInfo getPromotionInfo() { DARABONBA_PTR_GET(promotionInfo_, Module::PromotionInfo) };
      inline Module& setPromotionInfo(const Module::PromotionInfo & promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };
      inline Module& setPromotionInfo(Module::PromotionInfo && promotionInfo) { DARABONBA_PTR_SET_RVALUE(promotionInfo_, promotionInfo) };


      // ratePlanDaily Field Functions 
      bool hasRatePlanDaily() const { return this->ratePlanDaily_ != nullptr;};
      void deleteRatePlanDaily() { this->ratePlanDaily_ = nullptr;};
      inline const vector<Module::RatePlanDaily> & getRatePlanDaily() const { DARABONBA_PTR_GET_CONST(ratePlanDaily_, vector<Module::RatePlanDaily>) };
      inline vector<Module::RatePlanDaily> getRatePlanDaily() { DARABONBA_PTR_GET(ratePlanDaily_, vector<Module::RatePlanDaily>) };
      inline Module& setRatePlanDaily(const vector<Module::RatePlanDaily> & ratePlanDaily) { DARABONBA_PTR_SET_VALUE(ratePlanDaily_, ratePlanDaily) };
      inline Module& setRatePlanDaily(vector<Module::RatePlanDaily> && ratePlanDaily) { DARABONBA_PTR_SET_RVALUE(ratePlanDaily_, ratePlanDaily) };


      // ratePlanId Field Functions 
      bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
      void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
      inline int64_t getRatePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
      inline Module& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


      // ratePlanInfo Field Functions 
      bool hasRatePlanInfo() const { return this->ratePlanInfo_ != nullptr;};
      void deleteRatePlanInfo() { this->ratePlanInfo_ = nullptr;};
      inline const Module::RatePlanInfo & getRatePlanInfo() const { DARABONBA_PTR_GET_CONST(ratePlanInfo_, Module::RatePlanInfo) };
      inline Module::RatePlanInfo getRatePlanInfo() { DARABONBA_PTR_GET(ratePlanInfo_, Module::RatePlanInfo) };
      inline Module& setRatePlanInfo(const Module::RatePlanInfo & ratePlanInfo) { DARABONBA_PTR_SET_VALUE(ratePlanInfo_, ratePlanInfo) };
      inline Module& setRatePlanInfo(Module::RatePlanInfo && ratePlanInfo) { DARABONBA_PTR_SET_RVALUE(ratePlanInfo_, ratePlanInfo) };


      // validateResKey Field Functions 
      bool hasValidateResKey() const { return this->validateResKey_ != nullptr;};
      void deleteValidateResKey() { this->validateResKey_ = nullptr;};
      inline string getValidateResKey() const { DARABONBA_PTR_GET_DEFAULT(validateResKey_, "") };
      inline Module& setValidateResKey(string validateResKey) { DARABONBA_PTR_SET_VALUE(validateResKey_, validateResKey) };


    protected:
      shared_ptr<string> extendInfo_ {};
      shared_ptr<Module::ItemInvoice> itemInvoice_ {};
      shared_ptr<string> itineraryNo_ {};
      shared_ptr<Module::PromotionInfo> promotionInfo_ {};
      shared_ptr<vector<Module::RatePlanDaily>> ratePlanDaily_ {};
      shared_ptr<int64_t> ratePlanId_ {};
      shared_ptr<Module::RatePlanInfo> ratePlanInfo_ {};
      shared_ptr<string> validateResKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderPreValidateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderPreValidateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderPreValidateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderPreValidateResponseBody::Module) };
    inline HotelOrderPreValidateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderPreValidateResponseBody::Module) };
    inline HotelOrderPreValidateResponseBody& setModule(const HotelOrderPreValidateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderPreValidateResponseBody& setModule(HotelOrderPreValidateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderPreValidateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderPreValidateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderPreValidateResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelOrderPreValidateResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
