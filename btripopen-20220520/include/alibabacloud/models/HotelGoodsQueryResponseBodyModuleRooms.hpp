// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMS_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRates.hpp>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRoomService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRooms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRooms& obj) { 
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
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRooms& obj) { 
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
    HotelGoodsQueryResponseBodyModuleRooms() = default ;
    HotelGoodsQueryResponseBodyModuleRooms(const HotelGoodsQueryResponseBodyModuleRooms &) = default ;
    HotelGoodsQueryResponseBodyModuleRooms(HotelGoodsQueryResponseBodyModuleRooms &&) = default ;
    HotelGoodsQueryResponseBodyModuleRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRooms() = default ;
    HotelGoodsQueryResponseBodyModuleRooms& operator=(const HotelGoodsQueryResponseBodyModuleRooms &) = default ;
    HotelGoodsQueryResponseBodyModuleRooms& operator=(HotelGoodsQueryResponseBodyModuleRooms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->bedTypeString_ != nullptr && this->extraBed_ != nullptr && this->facility_ != nullptr && this->floor_ != nullptr && this->maxOccupancy_ != nullptr
        && this->name_ != nullptr && this->networkService_ != nullptr && this->pics_ != nullptr && this->rates_ != nullptr && this->roomDasc_ != nullptr
        && this->roomFacility_ != nullptr && this->roomService_ != nullptr && this->srid_ != nullptr && this->status_ != nullptr && this->windowType_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bedTypeString Field Functions 
    bool hasBedTypeString() const { return this->bedTypeString_ != nullptr;};
    void deleteBedTypeString() { this->bedTypeString_ = nullptr;};
    inline string bedTypeString() const { DARABONBA_PTR_GET_DEFAULT(bedTypeString_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setBedTypeString(string bedTypeString) { DARABONBA_PTR_SET_VALUE(bedTypeString_, bedTypeString) };


    // extraBed Field Functions 
    bool hasExtraBed() const { return this->extraBed_ != nullptr;};
    void deleteExtraBed() { this->extraBed_ = nullptr;};
    inline bool extraBed() const { DARABONBA_PTR_GET_DEFAULT(extraBed_, false) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setExtraBed(bool extraBed) { DARABONBA_PTR_SET_VALUE(extraBed_, extraBed) };


    // facility Field Functions 
    bool hasFacility() const { return this->facility_ != nullptr;};
    void deleteFacility() { this->facility_ = nullptr;};
    inline string facility() const { DARABONBA_PTR_GET_DEFAULT(facility_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setFacility(string facility) { DARABONBA_PTR_SET_VALUE(facility_, facility) };


    // floor Field Functions 
    bool hasFloor() const { return this->floor_ != nullptr;};
    void deleteFloor() { this->floor_ = nullptr;};
    inline string floor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


    // maxOccupancy Field Functions 
    bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
    void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
    inline int32_t maxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkService Field Functions 
    bool hasNetworkService() const { return this->networkService_ != nullptr;};
    void deleteNetworkService() { this->networkService_ = nullptr;};
    inline string networkService() const { DARABONBA_PTR_GET_DEFAULT(networkService_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setNetworkService(string networkService) { DARABONBA_PTR_SET_VALUE(networkService_, networkService) };


    // pics Field Functions 
    bool hasPics() const { return this->pics_ != nullptr;};
    void deletePics() { this->pics_ = nullptr;};
    inline string pics() const { DARABONBA_PTR_GET_DEFAULT(pics_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setPics(string pics) { DARABONBA_PTR_SET_VALUE(pics_, pics) };


    // rates Field Functions 
    bool hasRates() const { return this->rates_ != nullptr;};
    void deleteRates() { this->rates_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates> & rates() const { DARABONBA_PTR_GET_CONST(rates_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates> rates() { DARABONBA_PTR_GET(rates_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates>) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRates(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates> & rates) { DARABONBA_PTR_SET_VALUE(rates_, rates) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRates(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates> && rates) { DARABONBA_PTR_SET_RVALUE(rates_, rates) };


    // roomDasc Field Functions 
    bool hasRoomDasc() const { return this->roomDasc_ != nullptr;};
    void deleteRoomDasc() { this->roomDasc_ = nullptr;};
    inline string roomDasc() const { DARABONBA_PTR_GET_DEFAULT(roomDasc_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRoomDasc(string roomDasc) { DARABONBA_PTR_SET_VALUE(roomDasc_, roomDasc) };


    // roomFacility Field Functions 
    bool hasRoomFacility() const { return this->roomFacility_ != nullptr;};
    void deleteRoomFacility() { this->roomFacility_ = nullptr;};
    inline const vector<string> & roomFacility() const { DARABONBA_PTR_GET_CONST(roomFacility_, vector<string>) };
    inline vector<string> roomFacility() { DARABONBA_PTR_GET(roomFacility_, vector<string>) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRoomFacility(const vector<string> & roomFacility) { DARABONBA_PTR_SET_VALUE(roomFacility_, roomFacility) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRoomFacility(vector<string> && roomFacility) { DARABONBA_PTR_SET_RVALUE(roomFacility_, roomFacility) };


    // roomService Field Functions 
    bool hasRoomService() const { return this->roomService_ != nullptr;};
    void deleteRoomService() { this->roomService_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService> & roomService() const { DARABONBA_PTR_GET_CONST(roomService_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService> roomService() { DARABONBA_PTR_GET(roomService_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService>) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRoomService(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService> & roomService) { DARABONBA_PTR_SET_VALUE(roomService_, roomService) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setRoomService(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService> && roomService) { DARABONBA_PTR_SET_RVALUE(roomService_, roomService) };


    // srid Field Functions 
    bool hasSrid() const { return this->srid_ != nullptr;};
    void deleteSrid() { this->srid_ = nullptr;};
    inline int64_t srid() const { DARABONBA_PTR_GET_DEFAULT(srid_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setSrid(int64_t srid) { DARABONBA_PTR_SET_VALUE(srid_, srid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRooms& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // windowType Field Functions 
    bool hasWindowType() const { return this->windowType_ != nullptr;};
    void deleteWindowType() { this->windowType_ = nullptr;};
    inline string windowType() const { DARABONBA_PTR_GET_DEFAULT(windowType_, "") };
    inline HotelGoodsQueryResponseBodyModuleRooms& setWindowType(string windowType) { DARABONBA_PTR_SET_VALUE(windowType_, windowType) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<string> bedTypeString_ = nullptr;
    std::shared_ptr<bool> extraBed_ = nullptr;
    std::shared_ptr<string> facility_ = nullptr;
    std::shared_ptr<string> floor_ = nullptr;
    std::shared_ptr<int32_t> maxOccupancy_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networkService_ = nullptr;
    std::shared_ptr<string> pics_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRates>> rates_ = nullptr;
    std::shared_ptr<string> roomDasc_ = nullptr;
    std::shared_ptr<vector<string>> roomFacility_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRoomService>> roomService_ = nullptr;
    std::shared_ptr<int64_t> srid_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> windowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
