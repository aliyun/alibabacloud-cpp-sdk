// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODY_HPP_
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
  class HotelStaticInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelStaticInfoResponseBody() = default ;
    HotelStaticInfoResponseBody(const HotelStaticInfoResponseBody &) = default ;
    HotelStaticInfoResponseBody(HotelStaticInfoResponseBody &&) = default ;
    HotelStaticInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBody() = default ;
    HotelStaticInfoResponseBody& operator=(const HotelStaticInfoResponseBody &) = default ;
    HotelStaticInfoResponseBody& operator=(HotelStaticInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(hotel_static_infos, hotelStaticInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(hotel_static_infos, hotelStaticInfos_);
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
      class HotelStaticInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelStaticInfos& obj) { 
          DARABONBA_PTR_TO_JSON(block_room_type_information, blockRoomTypeInformation_);
          DARABONBA_PTR_TO_JSON(brand, brand_);
          DARABONBA_PTR_TO_JSON(brand_name, brandName_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(country, country_);
          DARABONBA_PTR_TO_JSON(country_code, countryCode_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(district, district_);
          DARABONBA_PTR_TO_JSON(district_name, districtName_);
          DARABONBA_PTR_TO_JSON(expand_info, expandInfo_);
          DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_TO_JSON(hotel_en_address, hotelEnAddress_);
          DARABONBA_PTR_TO_JSON(hotel_en_name, hotelEnName_);
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(hotel_open_time, hotelOpenTime_);
          DARABONBA_PTR_TO_JSON(hotel_phones, hotelPhones_);
          DARABONBA_PTR_TO_JSON(hotel_policies, hotelPolicies_);
          DARABONBA_PTR_TO_JSON(hotelfax, hotelfax_);
          DARABONBA_PTR_TO_JSON(hotelpics, hotelpics_);
          DARABONBA_PTR_TO_JSON(imageinfos, imageinfos_);
          DARABONBA_PTR_TO_JSON(invoice_provider_method, invoiceProviderMethod_);
          DARABONBA_PTR_TO_JSON(invoice_types, invoiceTypes_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(province, province_);
          DARABONBA_PTR_TO_JSON(province_name, provinceName_);
          DARABONBA_PTR_TO_JSON(rating_average, ratingAverage_);
          DARABONBA_PTR_TO_JSON(room_infos, roomInfos_);
          DARABONBA_PTR_TO_JSON(star, star_);
          DARABONBA_PTR_TO_JSON(star_rate, starRate_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(themes, themes_);
          DARABONBA_PTR_TO_JSON(visa_reminding, visaReminding_);
        };
        friend void from_json(const Darabonba::Json& j, HotelStaticInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(block_room_type_information, blockRoomTypeInformation_);
          DARABONBA_PTR_FROM_JSON(brand, brand_);
          DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(country, country_);
          DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(district, district_);
          DARABONBA_PTR_FROM_JSON(district_name, districtName_);
          DARABONBA_PTR_FROM_JSON(expand_info, expandInfo_);
          DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_en_address, hotelEnAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_en_name, hotelEnName_);
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(hotel_open_time, hotelOpenTime_);
          DARABONBA_PTR_FROM_JSON(hotel_phones, hotelPhones_);
          DARABONBA_PTR_FROM_JSON(hotel_policies, hotelPolicies_);
          DARABONBA_PTR_FROM_JSON(hotelfax, hotelfax_);
          DARABONBA_PTR_FROM_JSON(hotelpics, hotelpics_);
          DARABONBA_PTR_FROM_JSON(imageinfos, imageinfos_);
          DARABONBA_PTR_FROM_JSON(invoice_provider_method, invoiceProviderMethod_);
          DARABONBA_PTR_FROM_JSON(invoice_types, invoiceTypes_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(province, province_);
          DARABONBA_PTR_FROM_JSON(province_name, provinceName_);
          DARABONBA_PTR_FROM_JSON(rating_average, ratingAverage_);
          DARABONBA_PTR_FROM_JSON(room_infos, roomInfos_);
          DARABONBA_PTR_FROM_JSON(star, star_);
          DARABONBA_PTR_FROM_JSON(star_rate, starRate_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(themes, themes_);
          DARABONBA_PTR_FROM_JSON(visa_reminding, visaReminding_);
        };
        HotelStaticInfos() = default ;
        HotelStaticInfos(const HotelStaticInfos &) = default ;
        HotelStaticInfos(HotelStaticInfos &&) = default ;
        HotelStaticInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelStaticInfos() = default ;
        HotelStaticInfos& operator=(const HotelStaticInfos &) = default ;
        HotelStaticInfos& operator=(HotelStaticInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoomInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoomInfos& obj) { 
            DARABONBA_PTR_TO_JSON(bed_info_group_list, bedInfoGroupList_);
            DARABONBA_PTR_TO_JSON(bed_infos, bedInfos_);
            DARABONBA_PTR_TO_JSON(extra_bed, extraBed_);
            DARABONBA_PTR_TO_JSON(extra_bed_desc, extraBedDesc_);
            DARABONBA_PTR_TO_JSON(floor, floor_);
            DARABONBA_PTR_TO_JSON(internet_way, internetWay_);
            DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_TO_JSON(room_facilities, roomFacilities_);
            DARABONBA_PTR_TO_JSON(room_facility_list, roomFacilityList_);
            DARABONBA_PTR_TO_JSON(room_id, roomId_);
            DARABONBA_PTR_TO_JSON(room_image, roomImage_);
            DARABONBA_PTR_TO_JSON(room_images, roomImages_);
            DARABONBA_PTR_TO_JSON(room_name, roomName_);
            DARABONBA_PTR_TO_JSON(room_type, roomType_);
            DARABONBA_PTR_TO_JSON(roomarea, roomarea_);
            DARABONBA_PTR_TO_JSON(rooms, rooms_);
            DARABONBA_PTR_TO_JSON(window, window_);
            DARABONBA_PTR_TO_JSON(window_bad, windowBad_);
            DARABONBA_PTR_TO_JSON(window_view, windowView_);
          };
          friend void from_json(const Darabonba::Json& j, RoomInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(bed_info_group_list, bedInfoGroupList_);
            DARABONBA_PTR_FROM_JSON(bed_infos, bedInfos_);
            DARABONBA_PTR_FROM_JSON(extra_bed, extraBed_);
            DARABONBA_PTR_FROM_JSON(extra_bed_desc, extraBedDesc_);
            DARABONBA_PTR_FROM_JSON(floor, floor_);
            DARABONBA_PTR_FROM_JSON(internet_way, internetWay_);
            DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
            DARABONBA_PTR_FROM_JSON(room_facilities, roomFacilities_);
            DARABONBA_PTR_FROM_JSON(room_facility_list, roomFacilityList_);
            DARABONBA_PTR_FROM_JSON(room_id, roomId_);
            DARABONBA_PTR_FROM_JSON(room_image, roomImage_);
            DARABONBA_PTR_FROM_JSON(room_images, roomImages_);
            DARABONBA_PTR_FROM_JSON(room_name, roomName_);
            DARABONBA_PTR_FROM_JSON(room_type, roomType_);
            DARABONBA_PTR_FROM_JSON(roomarea, roomarea_);
            DARABONBA_PTR_FROM_JSON(rooms, rooms_);
            DARABONBA_PTR_FROM_JSON(window, window_);
            DARABONBA_PTR_FROM_JSON(window_bad, windowBad_);
            DARABONBA_PTR_FROM_JSON(window_view, windowView_);
          };
          RoomInfos() = default ;
          RoomInfos(const RoomInfos &) = default ;
          RoomInfos(RoomInfos &&) = default ;
          RoomInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoomInfos() = default ;
          RoomInfos& operator=(const RoomInfos &) = default ;
          RoomInfos& operator=(RoomInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BedInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BedInfos& obj) { 
              DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
              DARABONBA_PTR_TO_JSON(bed_num, bedNum_);
              DARABONBA_PTR_TO_JSON(bed_size, bedSize_);
              DARABONBA_PTR_TO_JSON(bed_type, bedType_);
              DARABONBA_PTR_TO_JSON(length, length_);
              DARABONBA_PTR_TO_JSON(width, width_);
            };
            friend void from_json(const Darabonba::Json& j, BedInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
              DARABONBA_PTR_FROM_JSON(bed_num, bedNum_);
              DARABONBA_PTR_FROM_JSON(bed_size, bedSize_);
              DARABONBA_PTR_FROM_JSON(bed_type, bedType_);
              DARABONBA_PTR_FROM_JSON(length, length_);
              DARABONBA_PTR_FROM_JSON(width, width_);
            };
            BedInfos() = default ;
            BedInfos(const BedInfos &) = default ;
            BedInfos(BedInfos &&) = default ;
            BedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BedInfos() = default ;
            BedInfos& operator=(const BedInfos &) = default ;
            BedInfos& operator=(BedInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bedDesc_ == nullptr
        && this->bedNum_ == nullptr && this->bedSize_ == nullptr && this->bedType_ == nullptr && this->length_ == nullptr && this->width_ == nullptr; };
            // bedDesc Field Functions 
            bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
            void deleteBedDesc() { this->bedDesc_ = nullptr;};
            inline string getBedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
            inline BedInfos& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


            // bedNum Field Functions 
            bool hasBedNum() const { return this->bedNum_ != nullptr;};
            void deleteBedNum() { this->bedNum_ = nullptr;};
            inline int32_t getBedNum() const { DARABONBA_PTR_GET_DEFAULT(bedNum_, 0) };
            inline BedInfos& setBedNum(int32_t bedNum) { DARABONBA_PTR_SET_VALUE(bedNum_, bedNum) };


            // bedSize Field Functions 
            bool hasBedSize() const { return this->bedSize_ != nullptr;};
            void deleteBedSize() { this->bedSize_ = nullptr;};
            inline string getBedSize() const { DARABONBA_PTR_GET_DEFAULT(bedSize_, "") };
            inline BedInfos& setBedSize(string bedSize) { DARABONBA_PTR_SET_VALUE(bedSize_, bedSize) };


            // bedType Field Functions 
            bool hasBedType() const { return this->bedType_ != nullptr;};
            void deleteBedType() { this->bedType_ = nullptr;};
            inline string getBedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
            inline BedInfos& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


            // length Field Functions 
            bool hasLength() const { return this->length_ != nullptr;};
            void deleteLength() { this->length_ = nullptr;};
            inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
            inline BedInfos& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline BedInfos& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            shared_ptr<string> bedDesc_ {};
            shared_ptr<int32_t> bedNum_ {};
            shared_ptr<string> bedSize_ {};
            shared_ptr<string> bedType_ {};
            shared_ptr<string> length_ {};
            shared_ptr<string> width_ {};
          };

          class BedInfoGroupList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BedInfoGroupList& obj) { 
              DARABONBA_PTR_TO_JSON(bed_Infos, bedInfos_);
            };
            friend void from_json(const Darabonba::Json& j, BedInfoGroupList& obj) { 
              DARABONBA_PTR_FROM_JSON(bed_Infos, bedInfos_);
            };
            BedInfoGroupList() = default ;
            BedInfoGroupList(const BedInfoGroupList &) = default ;
            BedInfoGroupList(BedInfoGroupList &&) = default ;
            BedInfoGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BedInfoGroupList() = default ;
            BedInfoGroupList& operator=(const BedInfoGroupList &) = default ;
            BedInfoGroupList& operator=(BedInfoGroupList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class BedInfos : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BedInfos& obj) { 
                DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
                DARABONBA_PTR_TO_JSON(bed_num, bedNum_);
                DARABONBA_PTR_TO_JSON(bed_size, bedSize_);
                DARABONBA_PTR_TO_JSON(bed_type, bedType_);
                DARABONBA_PTR_TO_JSON(length, length_);
                DARABONBA_PTR_TO_JSON(width, width_);
              };
              friend void from_json(const Darabonba::Json& j, BedInfos& obj) { 
                DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
                DARABONBA_PTR_FROM_JSON(bed_num, bedNum_);
                DARABONBA_PTR_FROM_JSON(bed_size, bedSize_);
                DARABONBA_PTR_FROM_JSON(bed_type, bedType_);
                DARABONBA_PTR_FROM_JSON(length, length_);
                DARABONBA_PTR_FROM_JSON(width, width_);
              };
              BedInfos() = default ;
              BedInfos(const BedInfos &) = default ;
              BedInfos(BedInfos &&) = default ;
              BedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BedInfos() = default ;
              BedInfos& operator=(const BedInfos &) = default ;
              BedInfos& operator=(BedInfos &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->bedDesc_ == nullptr
        && this->bedNum_ == nullptr && this->bedSize_ == nullptr && this->bedType_ == nullptr && this->length_ == nullptr && this->width_ == nullptr; };
              // bedDesc Field Functions 
              bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
              void deleteBedDesc() { this->bedDesc_ = nullptr;};
              inline string getBedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
              inline BedInfos& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


              // bedNum Field Functions 
              bool hasBedNum() const { return this->bedNum_ != nullptr;};
              void deleteBedNum() { this->bedNum_ = nullptr;};
              inline int32_t getBedNum() const { DARABONBA_PTR_GET_DEFAULT(bedNum_, 0) };
              inline BedInfos& setBedNum(int32_t bedNum) { DARABONBA_PTR_SET_VALUE(bedNum_, bedNum) };


              // bedSize Field Functions 
              bool hasBedSize() const { return this->bedSize_ != nullptr;};
              void deleteBedSize() { this->bedSize_ = nullptr;};
              inline string getBedSize() const { DARABONBA_PTR_GET_DEFAULT(bedSize_, "") };
              inline BedInfos& setBedSize(string bedSize) { DARABONBA_PTR_SET_VALUE(bedSize_, bedSize) };


              // bedType Field Functions 
              bool hasBedType() const { return this->bedType_ != nullptr;};
              void deleteBedType() { this->bedType_ = nullptr;};
              inline string getBedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
              inline BedInfos& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


              // length Field Functions 
              bool hasLength() const { return this->length_ != nullptr;};
              void deleteLength() { this->length_ = nullptr;};
              inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
              inline BedInfos& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline BedInfos& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              shared_ptr<string> bedDesc_ {};
              shared_ptr<int32_t> bedNum_ {};
              shared_ptr<string> bedSize_ {};
              shared_ptr<string> bedType_ {};
              shared_ptr<string> length_ {};
              shared_ptr<string> width_ {};
            };

            virtual bool empty() const override { return this->bedInfos_ == nullptr; };
            // bedInfos Field Functions 
            bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
            void deleteBedInfos() { this->bedInfos_ = nullptr;};
            inline const vector<BedInfoGroupList::BedInfos> & getBedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<BedInfoGroupList::BedInfos>) };
            inline vector<BedInfoGroupList::BedInfos> getBedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<BedInfoGroupList::BedInfos>) };
            inline BedInfoGroupList& setBedInfos(const vector<BedInfoGroupList::BedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
            inline BedInfoGroupList& setBedInfos(vector<BedInfoGroupList::BedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


          protected:
            shared_ptr<vector<BedInfoGroupList::BedInfos>> bedInfos_ {};
          };

          virtual bool empty() const override { return this->bedInfoGroupList_ == nullptr
        && this->bedInfos_ == nullptr && this->extraBed_ == nullptr && this->extraBedDesc_ == nullptr && this->floor_ == nullptr && this->internetWay_ == nullptr
        && this->maxOccupancy_ == nullptr && this->roomFacilities_ == nullptr && this->roomFacilityList_ == nullptr && this->roomId_ == nullptr && this->roomImage_ == nullptr
        && this->roomImages_ == nullptr && this->roomName_ == nullptr && this->roomType_ == nullptr && this->roomarea_ == nullptr && this->rooms_ == nullptr
        && this->window_ == nullptr && this->windowBad_ == nullptr && this->windowView_ == nullptr; };
          // bedInfoGroupList Field Functions 
          bool hasBedInfoGroupList() const { return this->bedInfoGroupList_ != nullptr;};
          void deleteBedInfoGroupList() { this->bedInfoGroupList_ = nullptr;};
          inline const vector<RoomInfos::BedInfoGroupList> & getBedInfoGroupList() const { DARABONBA_PTR_GET_CONST(bedInfoGroupList_, vector<RoomInfos::BedInfoGroupList>) };
          inline vector<RoomInfos::BedInfoGroupList> getBedInfoGroupList() { DARABONBA_PTR_GET(bedInfoGroupList_, vector<RoomInfos::BedInfoGroupList>) };
          inline RoomInfos& setBedInfoGroupList(const vector<RoomInfos::BedInfoGroupList> & bedInfoGroupList) { DARABONBA_PTR_SET_VALUE(bedInfoGroupList_, bedInfoGroupList) };
          inline RoomInfos& setBedInfoGroupList(vector<RoomInfos::BedInfoGroupList> && bedInfoGroupList) { DARABONBA_PTR_SET_RVALUE(bedInfoGroupList_, bedInfoGroupList) };


          // bedInfos Field Functions 
          bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
          void deleteBedInfos() { this->bedInfos_ = nullptr;};
          inline const vector<RoomInfos::BedInfos> & getBedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<RoomInfos::BedInfos>) };
          inline vector<RoomInfos::BedInfos> getBedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<RoomInfos::BedInfos>) };
          inline RoomInfos& setBedInfos(const vector<RoomInfos::BedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
          inline RoomInfos& setBedInfos(vector<RoomInfos::BedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


          // extraBed Field Functions 
          bool hasExtraBed() const { return this->extraBed_ != nullptr;};
          void deleteExtraBed() { this->extraBed_ = nullptr;};
          inline int32_t getExtraBed() const { DARABONBA_PTR_GET_DEFAULT(extraBed_, 0) };
          inline RoomInfos& setExtraBed(int32_t extraBed) { DARABONBA_PTR_SET_VALUE(extraBed_, extraBed) };


          // extraBedDesc Field Functions 
          bool hasExtraBedDesc() const { return this->extraBedDesc_ != nullptr;};
          void deleteExtraBedDesc() { this->extraBedDesc_ = nullptr;};
          inline string getExtraBedDesc() const { DARABONBA_PTR_GET_DEFAULT(extraBedDesc_, "") };
          inline RoomInfos& setExtraBedDesc(string extraBedDesc) { DARABONBA_PTR_SET_VALUE(extraBedDesc_, extraBedDesc) };


          // floor Field Functions 
          bool hasFloor() const { return this->floor_ != nullptr;};
          void deleteFloor() { this->floor_ = nullptr;};
          inline string getFloor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
          inline RoomInfos& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


          // internetWay Field Functions 
          bool hasInternetWay() const { return this->internetWay_ != nullptr;};
          void deleteInternetWay() { this->internetWay_ = nullptr;};
          inline string getInternetWay() const { DARABONBA_PTR_GET_DEFAULT(internetWay_, "") };
          inline RoomInfos& setInternetWay(string internetWay) { DARABONBA_PTR_SET_VALUE(internetWay_, internetWay) };


          // maxOccupancy Field Functions 
          bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
          void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
          inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
          inline RoomInfos& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


          // roomFacilities Field Functions 
          bool hasRoomFacilities() const { return this->roomFacilities_ != nullptr;};
          void deleteRoomFacilities() { this->roomFacilities_ = nullptr;};
          inline string getRoomFacilities() const { DARABONBA_PTR_GET_DEFAULT(roomFacilities_, "") };
          inline RoomInfos& setRoomFacilities(string roomFacilities) { DARABONBA_PTR_SET_VALUE(roomFacilities_, roomFacilities) };


          // roomFacilityList Field Functions 
          bool hasRoomFacilityList() const { return this->roomFacilityList_ != nullptr;};
          void deleteRoomFacilityList() { this->roomFacilityList_ = nullptr;};
          inline const vector<string> & getRoomFacilityList() const { DARABONBA_PTR_GET_CONST(roomFacilityList_, vector<string>) };
          inline vector<string> getRoomFacilityList() { DARABONBA_PTR_GET(roomFacilityList_, vector<string>) };
          inline RoomInfos& setRoomFacilityList(const vector<string> & roomFacilityList) { DARABONBA_PTR_SET_VALUE(roomFacilityList_, roomFacilityList) };
          inline RoomInfos& setRoomFacilityList(vector<string> && roomFacilityList) { DARABONBA_PTR_SET_RVALUE(roomFacilityList_, roomFacilityList) };


          // roomId Field Functions 
          bool hasRoomId() const { return this->roomId_ != nullptr;};
          void deleteRoomId() { this->roomId_ = nullptr;};
          inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
          inline RoomInfos& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


          // roomImage Field Functions 
          bool hasRoomImage() const { return this->roomImage_ != nullptr;};
          void deleteRoomImage() { this->roomImage_ = nullptr;};
          inline string getRoomImage() const { DARABONBA_PTR_GET_DEFAULT(roomImage_, "") };
          inline RoomInfos& setRoomImage(string roomImage) { DARABONBA_PTR_SET_VALUE(roomImage_, roomImage) };


          // roomImages Field Functions 
          bool hasRoomImages() const { return this->roomImages_ != nullptr;};
          void deleteRoomImages() { this->roomImages_ = nullptr;};
          inline const vector<string> & getRoomImages() const { DARABONBA_PTR_GET_CONST(roomImages_, vector<string>) };
          inline vector<string> getRoomImages() { DARABONBA_PTR_GET(roomImages_, vector<string>) };
          inline RoomInfos& setRoomImages(const vector<string> & roomImages) { DARABONBA_PTR_SET_VALUE(roomImages_, roomImages) };
          inline RoomInfos& setRoomImages(vector<string> && roomImages) { DARABONBA_PTR_SET_RVALUE(roomImages_, roomImages) };


          // roomName Field Functions 
          bool hasRoomName() const { return this->roomName_ != nullptr;};
          void deleteRoomName() { this->roomName_ = nullptr;};
          inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
          inline RoomInfos& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


          // roomType Field Functions 
          bool hasRoomType() const { return this->roomType_ != nullptr;};
          void deleteRoomType() { this->roomType_ = nullptr;};
          inline int32_t getRoomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, 0) };
          inline RoomInfos& setRoomType(int32_t roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


          // roomarea Field Functions 
          bool hasRoomarea() const { return this->roomarea_ != nullptr;};
          void deleteRoomarea() { this->roomarea_ = nullptr;};
          inline string getRoomarea() const { DARABONBA_PTR_GET_DEFAULT(roomarea_, "") };
          inline RoomInfos& setRoomarea(string roomarea) { DARABONBA_PTR_SET_VALUE(roomarea_, roomarea) };


          // rooms Field Functions 
          bool hasRooms() const { return this->rooms_ != nullptr;};
          void deleteRooms() { this->rooms_ = nullptr;};
          inline int32_t getRooms() const { DARABONBA_PTR_GET_DEFAULT(rooms_, 0) };
          inline RoomInfos& setRooms(int32_t rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };


          // window Field Functions 
          bool hasWindow() const { return this->window_ != nullptr;};
          void deleteWindow() { this->window_ = nullptr;};
          inline string getWindow() const { DARABONBA_PTR_GET_DEFAULT(window_, "") };
          inline RoomInfos& setWindow(string window) { DARABONBA_PTR_SET_VALUE(window_, window) };


          // windowBad Field Functions 
          bool hasWindowBad() const { return this->windowBad_ != nullptr;};
          void deleteWindowBad() { this->windowBad_ = nullptr;};
          inline string getWindowBad() const { DARABONBA_PTR_GET_DEFAULT(windowBad_, "") };
          inline RoomInfos& setWindowBad(string windowBad) { DARABONBA_PTR_SET_VALUE(windowBad_, windowBad) };


          // windowView Field Functions 
          bool hasWindowView() const { return this->windowView_ != nullptr;};
          void deleteWindowView() { this->windowView_ = nullptr;};
          inline string getWindowView() const { DARABONBA_PTR_GET_DEFAULT(windowView_, "") };
          inline RoomInfos& setWindowView(string windowView) { DARABONBA_PTR_SET_VALUE(windowView_, windowView) };


        protected:
          shared_ptr<vector<RoomInfos::BedInfoGroupList>> bedInfoGroupList_ {};
          shared_ptr<vector<RoomInfos::BedInfos>> bedInfos_ {};
          shared_ptr<int32_t> extraBed_ {};
          shared_ptr<string> extraBedDesc_ {};
          shared_ptr<string> floor_ {};
          shared_ptr<string> internetWay_ {};
          shared_ptr<int32_t> maxOccupancy_ {};
          shared_ptr<string> roomFacilities_ {};
          shared_ptr<vector<string>> roomFacilityList_ {};
          shared_ptr<string> roomId_ {};
          shared_ptr<string> roomImage_ {};
          shared_ptr<vector<string>> roomImages_ {};
          shared_ptr<string> roomName_ {};
          shared_ptr<int32_t> roomType_ {};
          shared_ptr<string> roomarea_ {};
          shared_ptr<int32_t> rooms_ {};
          shared_ptr<string> window_ {};
          shared_ptr<string> windowBad_ {};
          shared_ptr<string> windowView_ {};
        };

        class Imageinfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Imageinfos& obj) { 
            DARABONBA_PTR_TO_JSON(desc, desc_);
            DARABONBA_PTR_TO_JSON(tag, tag_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Imageinfos& obj) { 
            DARABONBA_PTR_FROM_JSON(desc, desc_);
            DARABONBA_PTR_FROM_JSON(tag, tag_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          Imageinfos() = default ;
          Imageinfos(const Imageinfos &) = default ;
          Imageinfos(Imageinfos &&) = default ;
          Imageinfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Imageinfos() = default ;
          Imageinfos& operator=(const Imageinfos &) = default ;
          Imageinfos& operator=(Imageinfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->tag_ == nullptr && this->url_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline Imageinfos& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline int32_t getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, 0) };
          inline Imageinfos& setTag(int32_t tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Imageinfos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<int32_t> tag_ {};
          shared_ptr<string> url_ {};
        };

        class ExpandInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExpandInfo& obj) { 
            DARABONBA_PTR_TO_JSON(check_in, checkIn_);
            DARABONBA_PTR_TO_JSON(check_out, checkOut_);
            DARABONBA_PTR_TO_JSON(decorate_time, decorateTime_);
            DARABONBA_PTR_TO_JSON(floors, floors_);
            DARABONBA_PTR_TO_JSON(hotel_facilities, hotelFacilities_);
            DARABONBA_PTR_TO_JSON(hotel_type, hotelType_);
            DARABONBA_PTR_TO_JSON(opening_time, openingTime_);
            DARABONBA_PTR_TO_JSON(room_facilities, roomFacilities_);
            DARABONBA_PTR_TO_JSON(rooms, rooms_);
            DARABONBA_PTR_TO_JSON(service, service_);
            DARABONBA_PTR_TO_JSON(theme_tag, themeTag_);
          };
          friend void from_json(const Darabonba::Json& j, ExpandInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
            DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
            DARABONBA_PTR_FROM_JSON(decorate_time, decorateTime_);
            DARABONBA_PTR_FROM_JSON(floors, floors_);
            DARABONBA_PTR_FROM_JSON(hotel_facilities, hotelFacilities_);
            DARABONBA_PTR_FROM_JSON(hotel_type, hotelType_);
            DARABONBA_PTR_FROM_JSON(opening_time, openingTime_);
            DARABONBA_PTR_FROM_JSON(room_facilities, roomFacilities_);
            DARABONBA_PTR_FROM_JSON(rooms, rooms_);
            DARABONBA_PTR_FROM_JSON(service, service_);
            DARABONBA_PTR_FROM_JSON(theme_tag, themeTag_);
          };
          ExpandInfo() = default ;
          ExpandInfo(const ExpandInfo &) = default ;
          ExpandInfo(ExpandInfo &&) = default ;
          ExpandInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExpandInfo() = default ;
          ExpandInfo& operator=(const ExpandInfo &) = default ;
          ExpandInfo& operator=(ExpandInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkIn_ == nullptr
        && this->checkOut_ == nullptr && this->decorateTime_ == nullptr && this->floors_ == nullptr && this->hotelFacilities_ == nullptr && this->hotelType_ == nullptr
        && this->openingTime_ == nullptr && this->roomFacilities_ == nullptr && this->rooms_ == nullptr && this->service_ == nullptr && this->themeTag_ == nullptr; };
          // checkIn Field Functions 
          bool hasCheckIn() const { return this->checkIn_ != nullptr;};
          void deleteCheckIn() { this->checkIn_ = nullptr;};
          inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
          inline ExpandInfo& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


          // checkOut Field Functions 
          bool hasCheckOut() const { return this->checkOut_ != nullptr;};
          void deleteCheckOut() { this->checkOut_ = nullptr;};
          inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
          inline ExpandInfo& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


          // decorateTime Field Functions 
          bool hasDecorateTime() const { return this->decorateTime_ != nullptr;};
          void deleteDecorateTime() { this->decorateTime_ = nullptr;};
          inline string getDecorateTime() const { DARABONBA_PTR_GET_DEFAULT(decorateTime_, "") };
          inline ExpandInfo& setDecorateTime(string decorateTime) { DARABONBA_PTR_SET_VALUE(decorateTime_, decorateTime) };


          // floors Field Functions 
          bool hasFloors() const { return this->floors_ != nullptr;};
          void deleteFloors() { this->floors_ = nullptr;};
          inline string getFloors() const { DARABONBA_PTR_GET_DEFAULT(floors_, "") };
          inline ExpandInfo& setFloors(string floors) { DARABONBA_PTR_SET_VALUE(floors_, floors) };


          // hotelFacilities Field Functions 
          bool hasHotelFacilities() const { return this->hotelFacilities_ != nullptr;};
          void deleteHotelFacilities() { this->hotelFacilities_ = nullptr;};
          inline const vector<string> & getHotelFacilities() const { DARABONBA_PTR_GET_CONST(hotelFacilities_, vector<string>) };
          inline vector<string> getHotelFacilities() { DARABONBA_PTR_GET(hotelFacilities_, vector<string>) };
          inline ExpandInfo& setHotelFacilities(const vector<string> & hotelFacilities) { DARABONBA_PTR_SET_VALUE(hotelFacilities_, hotelFacilities) };
          inline ExpandInfo& setHotelFacilities(vector<string> && hotelFacilities) { DARABONBA_PTR_SET_RVALUE(hotelFacilities_, hotelFacilities) };


          // hotelType Field Functions 
          bool hasHotelType() const { return this->hotelType_ != nullptr;};
          void deleteHotelType() { this->hotelType_ = nullptr;};
          inline int32_t getHotelType() const { DARABONBA_PTR_GET_DEFAULT(hotelType_, 0) };
          inline ExpandInfo& setHotelType(int32_t hotelType) { DARABONBA_PTR_SET_VALUE(hotelType_, hotelType) };


          // openingTime Field Functions 
          bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
          void deleteOpeningTime() { this->openingTime_ = nullptr;};
          inline string getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
          inline ExpandInfo& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


          // roomFacilities Field Functions 
          bool hasRoomFacilities() const { return this->roomFacilities_ != nullptr;};
          void deleteRoomFacilities() { this->roomFacilities_ = nullptr;};
          inline const vector<string> & getRoomFacilities() const { DARABONBA_PTR_GET_CONST(roomFacilities_, vector<string>) };
          inline vector<string> getRoomFacilities() { DARABONBA_PTR_GET(roomFacilities_, vector<string>) };
          inline ExpandInfo& setRoomFacilities(const vector<string> & roomFacilities) { DARABONBA_PTR_SET_VALUE(roomFacilities_, roomFacilities) };
          inline ExpandInfo& setRoomFacilities(vector<string> && roomFacilities) { DARABONBA_PTR_SET_RVALUE(roomFacilities_, roomFacilities) };


          // rooms Field Functions 
          bool hasRooms() const { return this->rooms_ != nullptr;};
          void deleteRooms() { this->rooms_ = nullptr;};
          inline int32_t getRooms() const { DARABONBA_PTR_GET_DEFAULT(rooms_, 0) };
          inline ExpandInfo& setRooms(int32_t rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };


          // service Field Functions 
          bool hasService() const { return this->service_ != nullptr;};
          void deleteService() { this->service_ = nullptr;};
          inline const vector<string> & getService() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
          inline vector<string> getService() { DARABONBA_PTR_GET(service_, vector<string>) };
          inline ExpandInfo& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
          inline ExpandInfo& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


          // themeTag Field Functions 
          bool hasThemeTag() const { return this->themeTag_ != nullptr;};
          void deleteThemeTag() { this->themeTag_ = nullptr;};
          inline string getThemeTag() const { DARABONBA_PTR_GET_DEFAULT(themeTag_, "") };
          inline ExpandInfo& setThemeTag(string themeTag) { DARABONBA_PTR_SET_VALUE(themeTag_, themeTag) };


        protected:
          shared_ptr<string> checkIn_ {};
          shared_ptr<string> checkOut_ {};
          shared_ptr<string> decorateTime_ {};
          shared_ptr<string> floors_ {};
          shared_ptr<vector<string>> hotelFacilities_ {};
          shared_ptr<int32_t> hotelType_ {};
          shared_ptr<string> openingTime_ {};
          shared_ptr<vector<string>> roomFacilities_ {};
          shared_ptr<int32_t> rooms_ {};
          shared_ptr<vector<string>> service_ {};
          shared_ptr<string> themeTag_ {};
        };

        virtual bool empty() const override { return this->blockRoomTypeInformation_ == nullptr
        && this->brand_ == nullptr && this->brandName_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->country_ == nullptr
        && this->countryCode_ == nullptr && this->description_ == nullptr && this->district_ == nullptr && this->districtName_ == nullptr && this->expandInfo_ == nullptr
        && this->hotelAddress_ == nullptr && this->hotelEnAddress_ == nullptr && this->hotelEnName_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr
        && this->hotelOpenTime_ == nullptr && this->hotelPhones_ == nullptr && this->hotelPolicies_ == nullptr && this->hotelfax_ == nullptr && this->hotelpics_ == nullptr
        && this->imageinfos_ == nullptr && this->invoiceProviderMethod_ == nullptr && this->invoiceTypes_ == nullptr && this->location_ == nullptr && this->province_ == nullptr
        && this->provinceName_ == nullptr && this->ratingAverage_ == nullptr && this->roomInfos_ == nullptr && this->star_ == nullptr && this->starRate_ == nullptr
        && this->status_ == nullptr && this->themes_ == nullptr && this->visaReminding_ == nullptr; };
        // blockRoomTypeInformation Field Functions 
        bool hasBlockRoomTypeInformation() const { return this->blockRoomTypeInformation_ != nullptr;};
        void deleteBlockRoomTypeInformation() { this->blockRoomTypeInformation_ = nullptr;};
        inline const map<string, string> & getBlockRoomTypeInformation() const { DARABONBA_PTR_GET_CONST(blockRoomTypeInformation_, map<string, string>) };
        inline map<string, string> getBlockRoomTypeInformation() { DARABONBA_PTR_GET(blockRoomTypeInformation_, map<string, string>) };
        inline HotelStaticInfos& setBlockRoomTypeInformation(const map<string, string> & blockRoomTypeInformation) { DARABONBA_PTR_SET_VALUE(blockRoomTypeInformation_, blockRoomTypeInformation) };
        inline HotelStaticInfos& setBlockRoomTypeInformation(map<string, string> && blockRoomTypeInformation) { DARABONBA_PTR_SET_RVALUE(blockRoomTypeInformation_, blockRoomTypeInformation) };


        // brand Field Functions 
        bool hasBrand() const { return this->brand_ != nullptr;};
        void deleteBrand() { this->brand_ = nullptr;};
        inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
        inline HotelStaticInfos& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


        // brandName Field Functions 
        bool hasBrandName() const { return this->brandName_ != nullptr;};
        void deleteBrandName() { this->brandName_ = nullptr;};
        inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
        inline HotelStaticInfos& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelStaticInfos& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelStaticInfos& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline HotelStaticInfos& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline HotelStaticInfos& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HotelStaticInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // district Field Functions 
        bool hasDistrict() const { return this->district_ != nullptr;};
        void deleteDistrict() { this->district_ = nullptr;};
        inline string getDistrict() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
        inline HotelStaticInfos& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


        // districtName Field Functions 
        bool hasDistrictName() const { return this->districtName_ != nullptr;};
        void deleteDistrictName() { this->districtName_ = nullptr;};
        inline string getDistrictName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
        inline HotelStaticInfos& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


        // expandInfo Field Functions 
        bool hasExpandInfo() const { return this->expandInfo_ != nullptr;};
        void deleteExpandInfo() { this->expandInfo_ = nullptr;};
        inline const HotelStaticInfos::ExpandInfo & getExpandInfo() const { DARABONBA_PTR_GET_CONST(expandInfo_, HotelStaticInfos::ExpandInfo) };
        inline HotelStaticInfos::ExpandInfo getExpandInfo() { DARABONBA_PTR_GET(expandInfo_, HotelStaticInfos::ExpandInfo) };
        inline HotelStaticInfos& setExpandInfo(const HotelStaticInfos::ExpandInfo & expandInfo) { DARABONBA_PTR_SET_VALUE(expandInfo_, expandInfo) };
        inline HotelStaticInfos& setExpandInfo(HotelStaticInfos::ExpandInfo && expandInfo) { DARABONBA_PTR_SET_RVALUE(expandInfo_, expandInfo) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline HotelStaticInfos& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelEnAddress Field Functions 
        bool hasHotelEnAddress() const { return this->hotelEnAddress_ != nullptr;};
        void deleteHotelEnAddress() { this->hotelEnAddress_ = nullptr;};
        inline string getHotelEnAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelEnAddress_, "") };
        inline HotelStaticInfos& setHotelEnAddress(string hotelEnAddress) { DARABONBA_PTR_SET_VALUE(hotelEnAddress_, hotelEnAddress) };


        // hotelEnName Field Functions 
        bool hasHotelEnName() const { return this->hotelEnName_ != nullptr;};
        void deleteHotelEnName() { this->hotelEnName_ = nullptr;};
        inline string getHotelEnName() const { DARABONBA_PTR_GET_DEFAULT(hotelEnName_, "") };
        inline HotelStaticInfos& setHotelEnName(string hotelEnName) { DARABONBA_PTR_SET_VALUE(hotelEnName_, hotelEnName) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline HotelStaticInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelStaticInfos& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelOpenTime Field Functions 
        bool hasHotelOpenTime() const { return this->hotelOpenTime_ != nullptr;};
        void deleteHotelOpenTime() { this->hotelOpenTime_ = nullptr;};
        inline string getHotelOpenTime() const { DARABONBA_PTR_GET_DEFAULT(hotelOpenTime_, "") };
        inline HotelStaticInfos& setHotelOpenTime(string hotelOpenTime) { DARABONBA_PTR_SET_VALUE(hotelOpenTime_, hotelOpenTime) };


        // hotelPhones Field Functions 
        bool hasHotelPhones() const { return this->hotelPhones_ != nullptr;};
        void deleteHotelPhones() { this->hotelPhones_ = nullptr;};
        inline string getHotelPhones() const { DARABONBA_PTR_GET_DEFAULT(hotelPhones_, "") };
        inline HotelStaticInfos& setHotelPhones(string hotelPhones) { DARABONBA_PTR_SET_VALUE(hotelPhones_, hotelPhones) };


        // hotelPolicies Field Functions 
        bool hasHotelPolicies() const { return this->hotelPolicies_ != nullptr;};
        void deleteHotelPolicies() { this->hotelPolicies_ = nullptr;};
        inline string getHotelPolicies() const { DARABONBA_PTR_GET_DEFAULT(hotelPolicies_, "") };
        inline HotelStaticInfos& setHotelPolicies(string hotelPolicies) { DARABONBA_PTR_SET_VALUE(hotelPolicies_, hotelPolicies) };


        // hotelfax Field Functions 
        bool hasHotelfax() const { return this->hotelfax_ != nullptr;};
        void deleteHotelfax() { this->hotelfax_ = nullptr;};
        inline string getHotelfax() const { DARABONBA_PTR_GET_DEFAULT(hotelfax_, "") };
        inline HotelStaticInfos& setHotelfax(string hotelfax) { DARABONBA_PTR_SET_VALUE(hotelfax_, hotelfax) };


        // hotelpics Field Functions 
        bool hasHotelpics() const { return this->hotelpics_ != nullptr;};
        void deleteHotelpics() { this->hotelpics_ = nullptr;};
        inline string getHotelpics() const { DARABONBA_PTR_GET_DEFAULT(hotelpics_, "") };
        inline HotelStaticInfos& setHotelpics(string hotelpics) { DARABONBA_PTR_SET_VALUE(hotelpics_, hotelpics) };


        // imageinfos Field Functions 
        bool hasImageinfos() const { return this->imageinfos_ != nullptr;};
        void deleteImageinfos() { this->imageinfos_ = nullptr;};
        inline const vector<HotelStaticInfos::Imageinfos> & getImageinfos() const { DARABONBA_PTR_GET_CONST(imageinfos_, vector<HotelStaticInfos::Imageinfos>) };
        inline vector<HotelStaticInfos::Imageinfos> getImageinfos() { DARABONBA_PTR_GET(imageinfos_, vector<HotelStaticInfos::Imageinfos>) };
        inline HotelStaticInfos& setImageinfos(const vector<HotelStaticInfos::Imageinfos> & imageinfos) { DARABONBA_PTR_SET_VALUE(imageinfos_, imageinfos) };
        inline HotelStaticInfos& setImageinfos(vector<HotelStaticInfos::Imageinfos> && imageinfos) { DARABONBA_PTR_SET_RVALUE(imageinfos_, imageinfos) };


        // invoiceProviderMethod Field Functions 
        bool hasInvoiceProviderMethod() const { return this->invoiceProviderMethod_ != nullptr;};
        void deleteInvoiceProviderMethod() { this->invoiceProviderMethod_ = nullptr;};
        inline string getInvoiceProviderMethod() const { DARABONBA_PTR_GET_DEFAULT(invoiceProviderMethod_, "") };
        inline HotelStaticInfos& setInvoiceProviderMethod(string invoiceProviderMethod) { DARABONBA_PTR_SET_VALUE(invoiceProviderMethod_, invoiceProviderMethod) };


        // invoiceTypes Field Functions 
        bool hasInvoiceTypes() const { return this->invoiceTypes_ != nullptr;};
        void deleteInvoiceTypes() { this->invoiceTypes_ = nullptr;};
        inline const vector<int32_t> & getInvoiceTypes() const { DARABONBA_PTR_GET_CONST(invoiceTypes_, vector<int32_t>) };
        inline vector<int32_t> getInvoiceTypes() { DARABONBA_PTR_GET(invoiceTypes_, vector<int32_t>) };
        inline HotelStaticInfos& setInvoiceTypes(const vector<int32_t> & invoiceTypes) { DARABONBA_PTR_SET_VALUE(invoiceTypes_, invoiceTypes) };
        inline HotelStaticInfos& setInvoiceTypes(vector<int32_t> && invoiceTypes) { DARABONBA_PTR_SET_RVALUE(invoiceTypes_, invoiceTypes) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline HotelStaticInfos& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline HotelStaticInfos& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline HotelStaticInfos& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


        // ratingAverage Field Functions 
        bool hasRatingAverage() const { return this->ratingAverage_ != nullptr;};
        void deleteRatingAverage() { this->ratingAverage_ = nullptr;};
        inline string getRatingAverage() const { DARABONBA_PTR_GET_DEFAULT(ratingAverage_, "") };
        inline HotelStaticInfos& setRatingAverage(string ratingAverage) { DARABONBA_PTR_SET_VALUE(ratingAverage_, ratingAverage) };


        // roomInfos Field Functions 
        bool hasRoomInfos() const { return this->roomInfos_ != nullptr;};
        void deleteRoomInfos() { this->roomInfos_ = nullptr;};
        inline const vector<HotelStaticInfos::RoomInfos> & getRoomInfos() const { DARABONBA_PTR_GET_CONST(roomInfos_, vector<HotelStaticInfos::RoomInfos>) };
        inline vector<HotelStaticInfos::RoomInfos> getRoomInfos() { DARABONBA_PTR_GET(roomInfos_, vector<HotelStaticInfos::RoomInfos>) };
        inline HotelStaticInfos& setRoomInfos(const vector<HotelStaticInfos::RoomInfos> & roomInfos) { DARABONBA_PTR_SET_VALUE(roomInfos_, roomInfos) };
        inline HotelStaticInfos& setRoomInfos(vector<HotelStaticInfos::RoomInfos> && roomInfos) { DARABONBA_PTR_SET_RVALUE(roomInfos_, roomInfos) };


        // star Field Functions 
        bool hasStar() const { return this->star_ != nullptr;};
        void deleteStar() { this->star_ = nullptr;};
        inline string getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
        inline HotelStaticInfos& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


        // starRate Field Functions 
        bool hasStarRate() const { return this->starRate_ != nullptr;};
        void deleteStarRate() { this->starRate_ = nullptr;};
        inline string getStarRate() const { DARABONBA_PTR_GET_DEFAULT(starRate_, "") };
        inline HotelStaticInfos& setStarRate(string starRate) { DARABONBA_PTR_SET_VALUE(starRate_, starRate) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HotelStaticInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // themes Field Functions 
        bool hasThemes() const { return this->themes_ != nullptr;};
        void deleteThemes() { this->themes_ = nullptr;};
        inline string getThemes() const { DARABONBA_PTR_GET_DEFAULT(themes_, "") };
        inline HotelStaticInfos& setThemes(string themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };


        // visaReminding Field Functions 
        bool hasVisaReminding() const { return this->visaReminding_ != nullptr;};
        void deleteVisaReminding() { this->visaReminding_ = nullptr;};
        inline bool getVisaReminding() const { DARABONBA_PTR_GET_DEFAULT(visaReminding_, false) };
        inline HotelStaticInfos& setVisaReminding(bool visaReminding) { DARABONBA_PTR_SET_VALUE(visaReminding_, visaReminding) };


      protected:
        shared_ptr<map<string, string>> blockRoomTypeInformation_ {};
        shared_ptr<string> brand_ {};
        shared_ptr<string> brandName_ {};
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> district_ {};
        shared_ptr<string> districtName_ {};
        shared_ptr<HotelStaticInfos::ExpandInfo> expandInfo_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelEnAddress_ {};
        shared_ptr<string> hotelEnName_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> hotelOpenTime_ {};
        shared_ptr<string> hotelPhones_ {};
        shared_ptr<string> hotelPolicies_ {};
        shared_ptr<string> hotelfax_ {};
        shared_ptr<string> hotelpics_ {};
        shared_ptr<vector<HotelStaticInfos::Imageinfos>> imageinfos_ {};
        shared_ptr<string> invoiceProviderMethod_ {};
        shared_ptr<vector<int32_t>> invoiceTypes_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> province_ {};
        shared_ptr<string> provinceName_ {};
        shared_ptr<string> ratingAverage_ {};
        shared_ptr<vector<HotelStaticInfos::RoomInfos>> roomInfos_ {};
        shared_ptr<string> star_ {};
        shared_ptr<string> starRate_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> themes_ {};
        shared_ptr<bool> visaReminding_ {};
      };

      virtual bool empty() const override { return this->hotelStaticInfos_ == nullptr; };
      // hotelStaticInfos Field Functions 
      bool hasHotelStaticInfos() const { return this->hotelStaticInfos_ != nullptr;};
      void deleteHotelStaticInfos() { this->hotelStaticInfos_ = nullptr;};
      inline const vector<Module::HotelStaticInfos> & getHotelStaticInfos() const { DARABONBA_PTR_GET_CONST(hotelStaticInfos_, vector<Module::HotelStaticInfos>) };
      inline vector<Module::HotelStaticInfos> getHotelStaticInfos() { DARABONBA_PTR_GET(hotelStaticInfos_, vector<Module::HotelStaticInfos>) };
      inline Module& setHotelStaticInfos(const vector<Module::HotelStaticInfos> & hotelStaticInfos) { DARABONBA_PTR_SET_VALUE(hotelStaticInfos_, hotelStaticInfos) };
      inline Module& setHotelStaticInfos(vector<Module::HotelStaticInfos> && hotelStaticInfos) { DARABONBA_PTR_SET_RVALUE(hotelStaticInfos_, hotelStaticInfos) };


    protected:
      shared_ptr<vector<Module::HotelStaticInfos>> hotelStaticInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelStaticInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelStaticInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelStaticInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelStaticInfoResponseBody::Module) };
    inline HotelStaticInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelStaticInfoResponseBody::Module) };
    inline HotelStaticInfoResponseBody& setModule(const HotelStaticInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelStaticInfoResponseBody& setModule(HotelStaticInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelStaticInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelStaticInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelStaticInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelStaticInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
