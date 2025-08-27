// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSROOMINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSROOMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList.hpp>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& obj) { 
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
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& obj) { 
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
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos(const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos(HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos &&) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& operator=(const HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& operator=(HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedInfoGroupList_ != nullptr
        && this->bedInfos_ != nullptr && this->extraBed_ != nullptr && this->extraBedDesc_ != nullptr && this->floor_ != nullptr && this->internetWay_ != nullptr
        && this->maxOccupancy_ != nullptr && this->roomFacilities_ != nullptr && this->roomFacilityList_ != nullptr && this->roomId_ != nullptr && this->roomImage_ != nullptr
        && this->roomImages_ != nullptr && this->roomName_ != nullptr && this->roomType_ != nullptr && this->roomarea_ != nullptr && this->rooms_ != nullptr
        && this->window_ != nullptr && this->windowBad_ != nullptr && this->windowView_ != nullptr; };
    // bedInfoGroupList Field Functions 
    bool hasBedInfoGroupList() const { return this->bedInfoGroupList_ != nullptr;};
    void deleteBedInfoGroupList() { this->bedInfoGroupList_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList> & bedInfoGroupList() const { DARABONBA_PTR_GET_CONST(bedInfoGroupList_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList> bedInfoGroupList() { DARABONBA_PTR_GET(bedInfoGroupList_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setBedInfoGroupList(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList> & bedInfoGroupList) { DARABONBA_PTR_SET_VALUE(bedInfoGroupList_, bedInfoGroupList) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setBedInfoGroupList(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList> && bedInfoGroupList) { DARABONBA_PTR_SET_RVALUE(bedInfoGroupList_, bedInfoGroupList) };


    // bedInfos Field Functions 
    bool hasBedInfos() const { return this->bedInfos_ != nullptr;};
    void deleteBedInfos() { this->bedInfos_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos> & bedInfos() const { DARABONBA_PTR_GET_CONST(bedInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos> bedInfos() { DARABONBA_PTR_GET(bedInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setBedInfos(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos> & bedInfos) { DARABONBA_PTR_SET_VALUE(bedInfos_, bedInfos) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setBedInfos(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos> && bedInfos) { DARABONBA_PTR_SET_RVALUE(bedInfos_, bedInfos) };


    // extraBed Field Functions 
    bool hasExtraBed() const { return this->extraBed_ != nullptr;};
    void deleteExtraBed() { this->extraBed_ = nullptr;};
    inline int32_t extraBed() const { DARABONBA_PTR_GET_DEFAULT(extraBed_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setExtraBed(int32_t extraBed) { DARABONBA_PTR_SET_VALUE(extraBed_, extraBed) };


    // extraBedDesc Field Functions 
    bool hasExtraBedDesc() const { return this->extraBedDesc_ != nullptr;};
    void deleteExtraBedDesc() { this->extraBedDesc_ = nullptr;};
    inline string extraBedDesc() const { DARABONBA_PTR_GET_DEFAULT(extraBedDesc_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setExtraBedDesc(string extraBedDesc) { DARABONBA_PTR_SET_VALUE(extraBedDesc_, extraBedDesc) };


    // floor Field Functions 
    bool hasFloor() const { return this->floor_ != nullptr;};
    void deleteFloor() { this->floor_ = nullptr;};
    inline string floor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


    // internetWay Field Functions 
    bool hasInternetWay() const { return this->internetWay_ != nullptr;};
    void deleteInternetWay() { this->internetWay_ = nullptr;};
    inline string internetWay() const { DARABONBA_PTR_GET_DEFAULT(internetWay_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setInternetWay(string internetWay) { DARABONBA_PTR_SET_VALUE(internetWay_, internetWay) };


    // maxOccupancy Field Functions 
    bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
    void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
    inline int32_t maxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


    // roomFacilities Field Functions 
    bool hasRoomFacilities() const { return this->roomFacilities_ != nullptr;};
    void deleteRoomFacilities() { this->roomFacilities_ = nullptr;};
    inline string roomFacilities() const { DARABONBA_PTR_GET_DEFAULT(roomFacilities_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomFacilities(string roomFacilities) { DARABONBA_PTR_SET_VALUE(roomFacilities_, roomFacilities) };


    // roomFacilityList Field Functions 
    bool hasRoomFacilityList() const { return this->roomFacilityList_ != nullptr;};
    void deleteRoomFacilityList() { this->roomFacilityList_ = nullptr;};
    inline const vector<string> & roomFacilityList() const { DARABONBA_PTR_GET_CONST(roomFacilityList_, vector<string>) };
    inline vector<string> roomFacilityList() { DARABONBA_PTR_GET(roomFacilityList_, vector<string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomFacilityList(const vector<string> & roomFacilityList) { DARABONBA_PTR_SET_VALUE(roomFacilityList_, roomFacilityList) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomFacilityList(vector<string> && roomFacilityList) { DARABONBA_PTR_SET_RVALUE(roomFacilityList_, roomFacilityList) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomImage Field Functions 
    bool hasRoomImage() const { return this->roomImage_ != nullptr;};
    void deleteRoomImage() { this->roomImage_ = nullptr;};
    inline string roomImage() const { DARABONBA_PTR_GET_DEFAULT(roomImage_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomImage(string roomImage) { DARABONBA_PTR_SET_VALUE(roomImage_, roomImage) };


    // roomImages Field Functions 
    bool hasRoomImages() const { return this->roomImages_ != nullptr;};
    void deleteRoomImages() { this->roomImages_ = nullptr;};
    inline const vector<string> & roomImages() const { DARABONBA_PTR_GET_CONST(roomImages_, vector<string>) };
    inline vector<string> roomImages() { DARABONBA_PTR_GET(roomImages_, vector<string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomImages(const vector<string> & roomImages) { DARABONBA_PTR_SET_VALUE(roomImages_, roomImages) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomImages(vector<string> && roomImages) { DARABONBA_PTR_SET_RVALUE(roomImages_, roomImages) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomType Field Functions 
    bool hasRoomType() const { return this->roomType_ != nullptr;};
    void deleteRoomType() { this->roomType_ = nullptr;};
    inline int32_t roomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomType(int32_t roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


    // roomarea Field Functions 
    bool hasRoomarea() const { return this->roomarea_ != nullptr;};
    void deleteRoomarea() { this->roomarea_ = nullptr;};
    inline string roomarea() const { DARABONBA_PTR_GET_DEFAULT(roomarea_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRoomarea(string roomarea) { DARABONBA_PTR_SET_VALUE(roomarea_, roomarea) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline int32_t rooms() const { DARABONBA_PTR_GET_DEFAULT(rooms_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setRooms(int32_t rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };


    // window Field Functions 
    bool hasWindow() const { return this->window_ != nullptr;};
    void deleteWindow() { this->window_ = nullptr;};
    inline string window() const { DARABONBA_PTR_GET_DEFAULT(window_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setWindow(string window) { DARABONBA_PTR_SET_VALUE(window_, window) };


    // windowBad Field Functions 
    bool hasWindowBad() const { return this->windowBad_ != nullptr;};
    void deleteWindowBad() { this->windowBad_ = nullptr;};
    inline string windowBad() const { DARABONBA_PTR_GET_DEFAULT(windowBad_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setWindowBad(string windowBad) { DARABONBA_PTR_SET_VALUE(windowBad_, windowBad) };


    // windowView Field Functions 
    bool hasWindowView() const { return this->windowView_ != nullptr;};
    void deleteWindowView() { this->windowView_ = nullptr;};
    inline string windowView() const { DARABONBA_PTR_GET_DEFAULT(windowView_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos& setWindowView(string windowView) { DARABONBA_PTR_SET_VALUE(windowView_, windowView) };


  protected:
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfoGroupList>> bedInfoGroupList_ = nullptr;
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfosBedInfos>> bedInfos_ = nullptr;
    std::shared_ptr<int32_t> extraBed_ = nullptr;
    std::shared_ptr<string> extraBedDesc_ = nullptr;
    std::shared_ptr<string> floor_ = nullptr;
    std::shared_ptr<string> internetWay_ = nullptr;
    std::shared_ptr<int32_t> maxOccupancy_ = nullptr;
    std::shared_ptr<string> roomFacilities_ = nullptr;
    std::shared_ptr<vector<string>> roomFacilityList_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<string> roomImage_ = nullptr;
    std::shared_ptr<vector<string>> roomImages_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<int32_t> roomType_ = nullptr;
    std::shared_ptr<string> roomarea_ = nullptr;
    std::shared_ptr<int32_t> rooms_ = nullptr;
    std::shared_ptr<string> window_ = nullptr;
    std::shared_ptr<string> windowBad_ = nullptr;
    std::shared_ptr<string> windowView_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
