// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEVICESTATUSWITHAKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEVICESTATUSWITHAKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class SyncDeviceStatusWithAkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDeviceStatusWithAkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCnName, categoryCnName_);
      DARABONBA_PTR_TO_JSON(CategoryEnName, categoryEnName_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(LocationCnName, locationCnName_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
      DARABONBA_PTR_TO_JSON(fanSpeed, fanSpeed_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(roomTemperature, roomTemperature_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDeviceStatusWithAkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCnName, categoryCnName_);
      DARABONBA_PTR_FROM_JSON(CategoryEnName, categoryEnName_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(LocationCnName, locationCnName_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
      DARABONBA_PTR_FROM_JSON(fanSpeed, fanSpeed_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(roomTemperature, roomTemperature_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    SyncDeviceStatusWithAkRequest() = default ;
    SyncDeviceStatusWithAkRequest(const SyncDeviceStatusWithAkRequest &) = default ;
    SyncDeviceStatusWithAkRequest(SyncDeviceStatusWithAkRequest &&) = default ;
    SyncDeviceStatusWithAkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDeviceStatusWithAkRequest() = default ;
    SyncDeviceStatusWithAkRequest& operator=(const SyncDeviceStatusWithAkRequest &) = default ;
    SyncDeviceStatusWithAkRequest& operator=(SyncDeviceStatusWithAkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryCnName_ == nullptr
        && this->categoryEnName_ == nullptr && this->deviceName_ == nullptr && this->hotelId_ == nullptr && this->location_ == nullptr && this->locationCnName_ == nullptr
        && this->number_ == nullptr && this->roomNo_ == nullptr && this->switch_ == nullptr && this->fanSpeed_ == nullptr && this->mode_ == nullptr
        && this->roomTemperature_ == nullptr && this->temperature_ == nullptr && this->value_ == nullptr; };
    // categoryCnName Field Functions 
    bool hasCategoryCnName() const { return this->categoryCnName_ != nullptr;};
    void deleteCategoryCnName() { this->categoryCnName_ = nullptr;};
    inline string getCategoryCnName() const { DARABONBA_PTR_GET_DEFAULT(categoryCnName_, "") };
    inline SyncDeviceStatusWithAkRequest& setCategoryCnName(string categoryCnName) { DARABONBA_PTR_SET_VALUE(categoryCnName_, categoryCnName) };


    // categoryEnName Field Functions 
    bool hasCategoryEnName() const { return this->categoryEnName_ != nullptr;};
    void deleteCategoryEnName() { this->categoryEnName_ = nullptr;};
    inline string getCategoryEnName() const { DARABONBA_PTR_GET_DEFAULT(categoryEnName_, "") };
    inline SyncDeviceStatusWithAkRequest& setCategoryEnName(string categoryEnName) { DARABONBA_PTR_SET_VALUE(categoryEnName_, categoryEnName) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline SyncDeviceStatusWithAkRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline SyncDeviceStatusWithAkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline SyncDeviceStatusWithAkRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // locationCnName Field Functions 
    bool hasLocationCnName() const { return this->locationCnName_ != nullptr;};
    void deleteLocationCnName() { this->locationCnName_ = nullptr;};
    inline string getLocationCnName() const { DARABONBA_PTR_GET_DEFAULT(locationCnName_, "") };
    inline SyncDeviceStatusWithAkRequest& setLocationCnName(string locationCnName) { DARABONBA_PTR_SET_VALUE(locationCnName_, locationCnName) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline SyncDeviceStatusWithAkRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline SyncDeviceStatusWithAkRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline int32_t getSwitch() const { DARABONBA_PTR_GET_DEFAULT(switch_, 0) };
    inline SyncDeviceStatusWithAkRequest& setSwitch(int32_t _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


    // fanSpeed Field Functions 
    bool hasFanSpeed() const { return this->fanSpeed_ != nullptr;};
    void deleteFanSpeed() { this->fanSpeed_ = nullptr;};
    inline string getFanSpeed() const { DARABONBA_PTR_GET_DEFAULT(fanSpeed_, "") };
    inline SyncDeviceStatusWithAkRequest& setFanSpeed(string fanSpeed) { DARABONBA_PTR_SET_VALUE(fanSpeed_, fanSpeed) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SyncDeviceStatusWithAkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // roomTemperature Field Functions 
    bool hasRoomTemperature() const { return this->roomTemperature_ != nullptr;};
    void deleteRoomTemperature() { this->roomTemperature_ = nullptr;};
    inline string getRoomTemperature() const { DARABONBA_PTR_GET_DEFAULT(roomTemperature_, "") };
    inline SyncDeviceStatusWithAkRequest& setRoomTemperature(string roomTemperature) { DARABONBA_PTR_SET_VALUE(roomTemperature_, roomTemperature) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline string getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
    inline SyncDeviceStatusWithAkRequest& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline SyncDeviceStatusWithAkRequest& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> categoryCnName_ {};
    // This parameter is required.
    shared_ptr<string> categoryEnName_ {};
    shared_ptr<string> deviceName_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> location_ {};
    shared_ptr<string> locationCnName_ {};
    // This parameter is required.
    shared_ptr<string> number_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> switch_ {};
    shared_ptr<string> fanSpeed_ {};
    shared_ptr<string> mode_ {};
    shared_ptr<string> roomTemperature_ {};
    shared_ptr<string> temperature_ {};
    shared_ptr<int32_t> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
