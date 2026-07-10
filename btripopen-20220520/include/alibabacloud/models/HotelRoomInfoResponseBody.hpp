// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODY_HPP_
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
  class HotelRoomInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelRoomInfoResponseBody() = default ;
    HotelRoomInfoResponseBody(const HotelRoomInfoResponseBody &) = default ;
    HotelRoomInfoResponseBody(HotelRoomInfoResponseBody &&) = default ;
    HotelRoomInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoResponseBody() = default ;
    HotelRoomInfoResponseBody& operator=(const HotelRoomInfoResponseBody &) = default ;
    HotelRoomInfoResponseBody& operator=(HotelRoomInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(bed_info_group_list, bedInfoGroupList_);
        DARABONBA_PTR_TO_JSON(bed_infos, bedInfos_);
        DARABONBA_PTR_TO_JSON(extra_bed, extraBed_);
        DARABONBA_PTR_TO_JSON(extra_bed_desc, extraBedDesc_);
        DARABONBA_PTR_TO_JSON(floor, floor_);
        DARABONBA_PTR_TO_JSON(internet_way, internetWay_);
        DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
        DARABONBA_PTR_TO_JSON(room_desc, roomDesc_);
        DARABONBA_PTR_TO_JSON(room_facilities, roomFacilities_);
        DARABONBA_PTR_TO_JSON(room_facility_list, roomFacilityList_);
        DARABONBA_PTR_TO_JSON(room_id, roomId_);
        DARABONBA_PTR_TO_JSON(room_image, roomImage_);
        DARABONBA_PTR_TO_JSON(room_images, roomImages_);
        DARABONBA_PTR_TO_JSON(room_name, roomName_);
        DARABONBA_PTR_TO_JSON(room_type, roomType_);
        DARABONBA_PTR_TO_JSON(roomarea, roomarea_);
        DARABONBA_PTR_TO_JSON(rooms, rooms_);
        DARABONBA_PTR_TO_JSON(smoke, smoke_);
        DARABONBA_PTR_TO_JSON(window, window_);
        DARABONBA_PTR_TO_JSON(window_bad, windowBad_);
        DARABONBA_PTR_TO_JSON(window_view, windowView_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(bed_info_group_list, bedInfoGroupList_);
        DARABONBA_PTR_FROM_JSON(bed_infos, bedInfos_);
        DARABONBA_PTR_FROM_JSON(extra_bed, extraBed_);
        DARABONBA_PTR_FROM_JSON(extra_bed_desc, extraBedDesc_);
        DARABONBA_PTR_FROM_JSON(floor, floor_);
        DARABONBA_PTR_FROM_JSON(internet_way, internetWay_);
        DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
        DARABONBA_PTR_FROM_JSON(room_desc, roomDesc_);
        DARABONBA_PTR_FROM_JSON(room_facilities, roomFacilities_);
        DARABONBA_PTR_FROM_JSON(room_facility_list, roomFacilityList_);
        DARABONBA_PTR_FROM_JSON(room_id, roomId_);
        DARABONBA_PTR_FROM_JSON(room_image, roomImage_);
        DARABONBA_PTR_FROM_JSON(room_images, roomImages_);
        DARABONBA_PTR_FROM_JSON(room_name, roomName_);
        DARABONBA_PTR_FROM_JSON(room_type, roomType_);
        DARABONBA_PTR_FROM_JSON(roomarea, roomarea_);
        DARABONBA_PTR_FROM_JSON(rooms, rooms_);
        DARABONBA_PTR_FROM_JSON(smoke, smoke_);
        DARABONBA_PTR_FROM_JSON(window, window_);
        DARABONBA_PTR_FROM_JSON(window_bad, windowBad_);
        DARABONBA_PTR_FROM_JSON(window_view, windowView_);
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
      class RoomImages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomImages& obj) { 
          DARABONBA_PTR_TO_JSON(bed_infos2, bedInfos2_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, RoomImages& obj) { 
          DARABONBA_PTR_FROM_JSON(bed_infos2, bedInfos2_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        RoomImages() = default ;
        RoomImages(const RoomImages &) = default ;
        RoomImages(RoomImages &&) = default ;
        RoomImages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomImages() = default ;
        RoomImages& operator=(const RoomImages &) = default ;
        RoomImages& operator=(RoomImages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bedInfos2_ == nullptr
        && this->tag_ == nullptr && this->url_ == nullptr; };
        // bedInfos2 Field Functions 
        bool hasBedInfos2() const { return this->bedInfos2_ != nullptr;};
        void deleteBedInfos2() { this->bedInfos2_ = nullptr;};
        inline string getBedInfos2() const { DARABONBA_PTR_GET_DEFAULT(bedInfos2_, "") };
        inline RoomImages& setBedInfos2(string bedInfos2) { DARABONBA_PTR_SET_VALUE(bedInfos2_, bedInfos2) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline int32_t getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, 0) };
        inline RoomImages& setTag(int32_t tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline RoomImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> bedInfos2_ {};
        shared_ptr<int32_t> tag_ {};
        shared_ptr<string> url_ {};
      };

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
          DARABONBA_PTR_TO_JSON(bed_infos, bedInfos_);
        };
        friend void from_json(const Darabonba::Json& j, BedInfoGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(bed_infos, bedInfos_);
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
        && this->maxOccupancy_ == nullptr && this->roomDesc_ == nullptr && this->roomFacilities_ == nullptr && this->roomFacilityList_ == nullptr && this->roomId_ == nullptr
        && this->roomImage_ == nullptr && this->roomImages_ == nullptr && this->roomName_ == nullptr && this->roomType_ == nullptr && this->roomarea_ == nullptr
        && this->rooms_ == nullptr && this->smoke_ == nullptr && this->window_ == nullptr && this->windowBad_ == nullptr && this->windowView_ == nullptr; };
      // bedInfoGroupList Field Functions 
      bool hasBedInfoGroupList() const { return this->bedInfoGroupList_ != nullptr;};
      void deleteBedInfoGroupList() { this->bedInfoGroupList_ = nullptr;};
      inline const vector<Module::BedInfoGroupList> & getBedInfoGroupList() const { DARABONBA_PTR_GET_CONST(bedInfoGroupList_, vector<Module::BedInfoGroupList>) };
      inline vector<Module::BedInfoGroupList> getBedInfoGroupList() { DARABONBA_PTR_GET(bedInfoGroupList_, vector<Module::BedInfoGroupList>) };
      inline Module& setBedInfoGroupList(const vector<Module::BedInfoGroupList> & bedInfoGroupList) { DARABONBA_PTR_SET_VALUE(bedInfoGroupList_, bedInfoGroupList) };
      inline Module& setBedInfoGroupList(vector<Module::BedInfoGroupList> && bedInfoGroupList) { DARABONBA_PTR_SET_RVALUE(bedInfoGroupList_, bedInfoGroupList) };


      // bedInfos Field Functions 
      bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
      void deleteBedInfos() { this->bedInfos_ = nullptr;};
      inline const vector<Module::BedInfos> & getBedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<Module::BedInfos>) };
      inline vector<Module::BedInfos> getBedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<Module::BedInfos>) };
      inline Module& setBedInfos(const vector<Module::BedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
      inline Module& setBedInfos(vector<Module::BedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


      // extraBed Field Functions 
      bool hasExtraBed() const { return this->extraBed_ != nullptr;};
      void deleteExtraBed() { this->extraBed_ = nullptr;};
      inline int32_t getExtraBed() const { DARABONBA_PTR_GET_DEFAULT(extraBed_, 0) };
      inline Module& setExtraBed(int32_t extraBed) { DARABONBA_PTR_SET_VALUE(extraBed_, extraBed) };


      // extraBedDesc Field Functions 
      bool hasExtraBedDesc() const { return this->extraBedDesc_ != nullptr;};
      void deleteExtraBedDesc() { this->extraBedDesc_ = nullptr;};
      inline string getExtraBedDesc() const { DARABONBA_PTR_GET_DEFAULT(extraBedDesc_, "") };
      inline Module& setExtraBedDesc(string extraBedDesc) { DARABONBA_PTR_SET_VALUE(extraBedDesc_, extraBedDesc) };


      // floor Field Functions 
      bool hasFloor() const { return this->floor_ != nullptr;};
      void deleteFloor() { this->floor_ = nullptr;};
      inline string getFloor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
      inline Module& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


      // internetWay Field Functions 
      bool hasInternetWay() const { return this->internetWay_ != nullptr;};
      void deleteInternetWay() { this->internetWay_ = nullptr;};
      inline string getInternetWay() const { DARABONBA_PTR_GET_DEFAULT(internetWay_, "") };
      inline Module& setInternetWay(string internetWay) { DARABONBA_PTR_SET_VALUE(internetWay_, internetWay) };


      // maxOccupancy Field Functions 
      bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
      void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
      inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
      inline Module& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


      // roomDesc Field Functions 
      bool hasRoomDesc() const { return this->roomDesc_ != nullptr;};
      void deleteRoomDesc() { this->roomDesc_ = nullptr;};
      inline string getRoomDesc() const { DARABONBA_PTR_GET_DEFAULT(roomDesc_, "") };
      inline Module& setRoomDesc(string roomDesc) { DARABONBA_PTR_SET_VALUE(roomDesc_, roomDesc) };


      // roomFacilities Field Functions 
      bool hasRoomFacilities() const { return this->roomFacilities_ != nullptr;};
      void deleteRoomFacilities() { this->roomFacilities_ = nullptr;};
      inline string getRoomFacilities() const { DARABONBA_PTR_GET_DEFAULT(roomFacilities_, "") };
      inline Module& setRoomFacilities(string roomFacilities) { DARABONBA_PTR_SET_VALUE(roomFacilities_, roomFacilities) };


      // roomFacilityList Field Functions 
      bool hasRoomFacilityList() const { return this->roomFacilityList_ != nullptr;};
      void deleteRoomFacilityList() { this->roomFacilityList_ = nullptr;};
      inline const vector<string> & getRoomFacilityList() const { DARABONBA_PTR_GET_CONST(roomFacilityList_, vector<string>) };
      inline vector<string> getRoomFacilityList() { DARABONBA_PTR_GET(roomFacilityList_, vector<string>) };
      inline Module& setRoomFacilityList(const vector<string> & roomFacilityList) { DARABONBA_PTR_SET_VALUE(roomFacilityList_, roomFacilityList) };
      inline Module& setRoomFacilityList(vector<string> && roomFacilityList) { DARABONBA_PTR_SET_RVALUE(roomFacilityList_, roomFacilityList) };


      // roomId Field Functions 
      bool hasRoomId() const { return this->roomId_ != nullptr;};
      void deleteRoomId() { this->roomId_ = nullptr;};
      inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
      inline Module& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


      // roomImage Field Functions 
      bool hasRoomImage() const { return this->roomImage_ != nullptr;};
      void deleteRoomImage() { this->roomImage_ = nullptr;};
      inline string getRoomImage() const { DARABONBA_PTR_GET_DEFAULT(roomImage_, "") };
      inline Module& setRoomImage(string roomImage) { DARABONBA_PTR_SET_VALUE(roomImage_, roomImage) };


      // roomImages Field Functions 
      bool hasRoomImages() const { return this->roomImages_ != nullptr;};
      void deleteRoomImages() { this->roomImages_ = nullptr;};
      inline const vector<Module::RoomImages> & getRoomImages() const { DARABONBA_PTR_GET_CONST(roomImages_, vector<Module::RoomImages>) };
      inline vector<Module::RoomImages> getRoomImages() { DARABONBA_PTR_GET(roomImages_, vector<Module::RoomImages>) };
      inline Module& setRoomImages(const vector<Module::RoomImages> & roomImages) { DARABONBA_PTR_SET_VALUE(roomImages_, roomImages) };
      inline Module& setRoomImages(vector<Module::RoomImages> && roomImages) { DARABONBA_PTR_SET_RVALUE(roomImages_, roomImages) };


      // roomName Field Functions 
      bool hasRoomName() const { return this->roomName_ != nullptr;};
      void deleteRoomName() { this->roomName_ = nullptr;};
      inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
      inline Module& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


      // roomType Field Functions 
      bool hasRoomType() const { return this->roomType_ != nullptr;};
      void deleteRoomType() { this->roomType_ = nullptr;};
      inline int32_t getRoomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, 0) };
      inline Module& setRoomType(int32_t roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


      // roomarea Field Functions 
      bool hasRoomarea() const { return this->roomarea_ != nullptr;};
      void deleteRoomarea() { this->roomarea_ = nullptr;};
      inline string getRoomarea() const { DARABONBA_PTR_GET_DEFAULT(roomarea_, "") };
      inline Module& setRoomarea(string roomarea) { DARABONBA_PTR_SET_VALUE(roomarea_, roomarea) };


      // rooms Field Functions 
      bool hasRooms() const { return this->rooms_ != nullptr;};
      void deleteRooms() { this->rooms_ = nullptr;};
      inline int32_t getRooms() const { DARABONBA_PTR_GET_DEFAULT(rooms_, 0) };
      inline Module& setRooms(int32_t rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };


      // smoke Field Functions 
      bool hasSmoke() const { return this->smoke_ != nullptr;};
      void deleteSmoke() { this->smoke_ = nullptr;};
      inline string getSmoke() const { DARABONBA_PTR_GET_DEFAULT(smoke_, "") };
      inline Module& setSmoke(string smoke) { DARABONBA_PTR_SET_VALUE(smoke_, smoke) };


      // window Field Functions 
      bool hasWindow() const { return this->window_ != nullptr;};
      void deleteWindow() { this->window_ = nullptr;};
      inline string getWindow() const { DARABONBA_PTR_GET_DEFAULT(window_, "") };
      inline Module& setWindow(string window) { DARABONBA_PTR_SET_VALUE(window_, window) };


      // windowBad Field Functions 
      bool hasWindowBad() const { return this->windowBad_ != nullptr;};
      void deleteWindowBad() { this->windowBad_ = nullptr;};
      inline string getWindowBad() const { DARABONBA_PTR_GET_DEFAULT(windowBad_, "") };
      inline Module& setWindowBad(string windowBad) { DARABONBA_PTR_SET_VALUE(windowBad_, windowBad) };


      // windowView Field Functions 
      bool hasWindowView() const { return this->windowView_ != nullptr;};
      void deleteWindowView() { this->windowView_ = nullptr;};
      inline string getWindowView() const { DARABONBA_PTR_GET_DEFAULT(windowView_, "") };
      inline Module& setWindowView(string windowView) { DARABONBA_PTR_SET_VALUE(windowView_, windowView) };


    protected:
      shared_ptr<vector<Module::BedInfoGroupList>> bedInfoGroupList_ {};
      shared_ptr<vector<Module::BedInfos>> bedInfos_ {};
      shared_ptr<int32_t> extraBed_ {};
      shared_ptr<string> extraBedDesc_ {};
      shared_ptr<string> floor_ {};
      shared_ptr<string> internetWay_ {};
      shared_ptr<int32_t> maxOccupancy_ {};
      shared_ptr<string> roomDesc_ {};
      shared_ptr<string> roomFacilities_ {};
      shared_ptr<vector<string>> roomFacilityList_ {};
      shared_ptr<string> roomId_ {};
      shared_ptr<string> roomImage_ {};
      shared_ptr<vector<Module::RoomImages>> roomImages_ {};
      shared_ptr<string> roomName_ {};
      shared_ptr<int32_t> roomType_ {};
      shared_ptr<string> roomarea_ {};
      shared_ptr<int32_t> rooms_ {};
      shared_ptr<string> smoke_ {};
      shared_ptr<string> window_ {};
      shared_ptr<string> windowBad_ {};
      shared_ptr<string> windowView_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelRoomInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelRoomInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<HotelRoomInfoResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<HotelRoomInfoResponseBody::Module>) };
    inline vector<HotelRoomInfoResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<HotelRoomInfoResponseBody::Module>) };
    inline HotelRoomInfoResponseBody& setModule(const vector<HotelRoomInfoResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelRoomInfoResponseBody& setModule(vector<HotelRoomInfoResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelRoomInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelRoomInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelRoomInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<HotelRoomInfoResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
