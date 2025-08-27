// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSEXPANDINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSEXPANDINFO_HPP_
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
  class HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& obj) { 
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
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo(const HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo(HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo &&) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& operator=(const HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& operator=(HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkIn_ != nullptr
        && this->checkOut_ != nullptr && this->decorateTime_ != nullptr && this->floors_ != nullptr && this->hotelFacilities_ != nullptr && this->hotelType_ != nullptr
        && this->openingTime_ != nullptr && this->roomFacilities_ != nullptr && this->rooms_ != nullptr && this->service_ != nullptr && this->themeTag_ != nullptr; };
    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // decorateTime Field Functions 
    bool hasDecorateTime() const { return this->decorateTime_ != nullptr;};
    void deleteDecorateTime() { this->decorateTime_ = nullptr;};
    inline string decorateTime() const { DARABONBA_PTR_GET_DEFAULT(decorateTime_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setDecorateTime(string decorateTime) { DARABONBA_PTR_SET_VALUE(decorateTime_, decorateTime) };


    // floors Field Functions 
    bool hasFloors() const { return this->floors_ != nullptr;};
    void deleteFloors() { this->floors_ = nullptr;};
    inline string floors() const { DARABONBA_PTR_GET_DEFAULT(floors_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setFloors(string floors) { DARABONBA_PTR_SET_VALUE(floors_, floors) };


    // hotelFacilities Field Functions 
    bool hasHotelFacilities() const { return this->hotelFacilities_ != nullptr;};
    void deleteHotelFacilities() { this->hotelFacilities_ = nullptr;};
    inline const vector<string> & hotelFacilities() const { DARABONBA_PTR_GET_CONST(hotelFacilities_, vector<string>) };
    inline vector<string> hotelFacilities() { DARABONBA_PTR_GET(hotelFacilities_, vector<string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setHotelFacilities(const vector<string> & hotelFacilities) { DARABONBA_PTR_SET_VALUE(hotelFacilities_, hotelFacilities) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setHotelFacilities(vector<string> && hotelFacilities) { DARABONBA_PTR_SET_RVALUE(hotelFacilities_, hotelFacilities) };


    // hotelType Field Functions 
    bool hasHotelType() const { return this->hotelType_ != nullptr;};
    void deleteHotelType() { this->hotelType_ = nullptr;};
    inline int32_t hotelType() const { DARABONBA_PTR_GET_DEFAULT(hotelType_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setHotelType(int32_t hotelType) { DARABONBA_PTR_SET_VALUE(hotelType_, hotelType) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string openingTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // roomFacilities Field Functions 
    bool hasRoomFacilities() const { return this->roomFacilities_ != nullptr;};
    void deleteRoomFacilities() { this->roomFacilities_ = nullptr;};
    inline const vector<string> & roomFacilities() const { DARABONBA_PTR_GET_CONST(roomFacilities_, vector<string>) };
    inline vector<string> roomFacilities() { DARABONBA_PTR_GET(roomFacilities_, vector<string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setRoomFacilities(const vector<string> & roomFacilities) { DARABONBA_PTR_SET_VALUE(roomFacilities_, roomFacilities) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setRoomFacilities(vector<string> && roomFacilities) { DARABONBA_PTR_SET_RVALUE(roomFacilities_, roomFacilities) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline int32_t rooms() const { DARABONBA_PTR_GET_DEFAULT(rooms_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setRooms(int32_t rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const vector<string> & service() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
    inline vector<string> service() { DARABONBA_PTR_GET(service_, vector<string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


    // themeTag Field Functions 
    bool hasThemeTag() const { return this->themeTag_ != nullptr;};
    void deleteThemeTag() { this->themeTag_ = nullptr;};
    inline string themeTag() const { DARABONBA_PTR_GET_DEFAULT(themeTag_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo& setThemeTag(string themeTag) { DARABONBA_PTR_SET_VALUE(themeTag_, themeTag) };


  protected:
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> decorateTime_ = nullptr;
    std::shared_ptr<string> floors_ = nullptr;
    std::shared_ptr<vector<string>> hotelFacilities_ = nullptr;
    std::shared_ptr<int32_t> hotelType_ = nullptr;
    std::shared_ptr<string> openingTime_ = nullptr;
    std::shared_ptr<vector<string>> roomFacilities_ = nullptr;
    std::shared_ptr<int32_t> rooms_ = nullptr;
    std::shared_ptr<vector<string>> service_ = nullptr;
    std::shared_ptr<string> themeTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
