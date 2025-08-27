// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMS_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullResponseBodyModuleHotelPriceInfosRooms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBodyModuleHotelPriceInfosRooms& obj) { 
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
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBodyModuleHotelPriceInfosRooms& obj) { 
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
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms(const HotelPricePullResponseBodyModuleHotelPriceInfosRooms &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms(HotelPricePullResponseBodyModuleHotelPriceInfosRooms &&) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBodyModuleHotelPriceInfosRooms() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms& operator=(const HotelPricePullResponseBodyModuleHotelPriceInfosRooms &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRooms& operator=(HotelPricePullResponseBodyModuleHotelPriceInfosRooms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->bed_ != nullptr && this->bedTypeString_ != nullptr && this->facility_ != nullptr && this->floor_ != nullptr && this->maxOccupancy_ != nullptr
        && this->networkService_ != nullptr && this->pics_ != nullptr && this->rates_ != nullptr && this->roomId_ != nullptr && this->roomName_ != nullptr
        && this->status_ != nullptr && this->windowType_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bed Field Functions 
    bool hasBed() const { return this->bed_ != nullptr;};
    void deleteBed() { this->bed_ = nullptr;};
    inline string bed() const { DARABONBA_PTR_GET_DEFAULT(bed_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setBed(string bed) { DARABONBA_PTR_SET_VALUE(bed_, bed) };


    // bedTypeString Field Functions 
    bool hasBedTypeString() const { return this->bedTypeString_ != nullptr;};
    void deleteBedTypeString() { this->bedTypeString_ = nullptr;};
    inline string bedTypeString() const { DARABONBA_PTR_GET_DEFAULT(bedTypeString_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setBedTypeString(string bedTypeString) { DARABONBA_PTR_SET_VALUE(bedTypeString_, bedTypeString) };


    // facility Field Functions 
    bool hasFacility() const { return this->facility_ != nullptr;};
    void deleteFacility() { this->facility_ = nullptr;};
    inline string facility() const { DARABONBA_PTR_GET_DEFAULT(facility_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setFacility(string facility) { DARABONBA_PTR_SET_VALUE(facility_, facility) };


    // floor Field Functions 
    bool hasFloor() const { return this->floor_ != nullptr;};
    void deleteFloor() { this->floor_ = nullptr;};
    inline string floor() const { DARABONBA_PTR_GET_DEFAULT(floor_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setFloor(string floor) { DARABONBA_PTR_SET_VALUE(floor_, floor) };


    // maxOccupancy Field Functions 
    bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
    void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
    inline int32_t maxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


    // networkService Field Functions 
    bool hasNetworkService() const { return this->networkService_ != nullptr;};
    void deleteNetworkService() { this->networkService_ = nullptr;};
    inline string networkService() const { DARABONBA_PTR_GET_DEFAULT(networkService_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setNetworkService(string networkService) { DARABONBA_PTR_SET_VALUE(networkService_, networkService) };


    // pics Field Functions 
    bool hasPics() const { return this->pics_ != nullptr;};
    void deletePics() { this->pics_ = nullptr;};
    inline const vector<string> & pics() const { DARABONBA_PTR_GET_CONST(pics_, vector<string>) };
    inline vector<string> pics() { DARABONBA_PTR_GET(pics_, vector<string>) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setPics(const vector<string> & pics) { DARABONBA_PTR_SET_VALUE(pics_, pics) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setPics(vector<string> && pics) { DARABONBA_PTR_SET_RVALUE(pics_, pics) };


    // rates Field Functions 
    bool hasRates() const { return this->rates_ != nullptr;};
    void deleteRates() { this->rates_ = nullptr;};
    inline const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates> & rates() const { DARABONBA_PTR_GET_CONST(rates_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates>) };
    inline vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates> rates() { DARABONBA_PTR_GET(rates_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates>) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setRates(const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates> & rates) { DARABONBA_PTR_SET_VALUE(rates_, rates) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setRates(vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates> && rates) { DARABONBA_PTR_SET_RVALUE(rates_, rates) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // windowType Field Functions 
    bool hasWindowType() const { return this->windowType_ != nullptr;};
    void deleteWindowType() { this->windowType_ = nullptr;};
    inline string windowType() const { DARABONBA_PTR_GET_DEFAULT(windowType_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRooms& setWindowType(string windowType) { DARABONBA_PTR_SET_VALUE(windowType_, windowType) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<string> bed_ = nullptr;
    std::shared_ptr<string> bedTypeString_ = nullptr;
    std::shared_ptr<string> facility_ = nullptr;
    std::shared_ptr<string> floor_ = nullptr;
    std::shared_ptr<int32_t> maxOccupancy_ = nullptr;
    std::shared_ptr<string> networkService_ = nullptr;
    std::shared_ptr<vector<string>> pics_ = nullptr;
    std::shared_ptr<vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates>> rates_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> windowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
