// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTROLROOMDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTROLROOMDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ControlRoomDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ControlRoomDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cmd, cmd_);
      DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_TO_JSON(DeviceNumber, deviceNumber_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, ControlRoomDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
      DARABONBA_PTR_FROM_JSON(DeviceNumber, deviceNumber_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    ControlRoomDeviceRequest() = default ;
    ControlRoomDeviceRequest(const ControlRoomDeviceRequest &) = default ;
    ControlRoomDeviceRequest(ControlRoomDeviceRequest &&) = default ;
    ControlRoomDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ControlRoomDeviceRequest() = default ;
    ControlRoomDeviceRequest& operator=(const ControlRoomDeviceRequest &) = default ;
    ControlRoomDeviceRequest& operator=(ControlRoomDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmd_ == nullptr
        && this->deviceIndex_ == nullptr && this->deviceNumber_ == nullptr && this->hotelId_ == nullptr && this->properties_ == nullptr && this->roomNo_ == nullptr; };
    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline ControlRoomDeviceRequest& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // deviceIndex Field Functions 
    bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
    void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
    inline int32_t getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
    inline ControlRoomDeviceRequest& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


    // deviceNumber Field Functions 
    bool hasDeviceNumber() const { return this->deviceNumber_ != nullptr;};
    void deleteDeviceNumber() { this->deviceNumber_ = nullptr;};
    inline string getDeviceNumber() const { DARABONBA_PTR_GET_DEFAULT(deviceNumber_, "") };
    inline ControlRoomDeviceRequest& setDeviceNumber(string deviceNumber) { DARABONBA_PTR_SET_VALUE(deviceNumber_, deviceNumber) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ControlRoomDeviceRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
    inline map<string, string> getProperties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
    inline ControlRoomDeviceRequest& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ControlRoomDeviceRequest& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ControlRoomDeviceRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> cmd_ {};
    shared_ptr<int32_t> deviceIndex_ {};
    // This parameter is required.
    shared_ptr<string> deviceNumber_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<map<string, string>> properties_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
