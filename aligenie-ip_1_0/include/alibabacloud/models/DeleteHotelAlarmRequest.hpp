// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOTELALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOTELALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class DeleteHotelAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHotelAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHotelAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    DeleteHotelAlarmRequest() = default ;
    DeleteHotelAlarmRequest(const DeleteHotelAlarmRequest &) = default ;
    DeleteHotelAlarmRequest(DeleteHotelAlarmRequest &&) = default ;
    DeleteHotelAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHotelAlarmRequest() = default ;
    DeleteHotelAlarmRequest& operator=(const DeleteHotelAlarmRequest &) = default ;
    DeleteHotelAlarmRequest& operator=(DeleteHotelAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alarms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      };
      friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
      };
      Alarms() = default ;
      Alarms(const Alarms &) = default ;
      Alarms(Alarms &&) = default ;
      Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alarms() = default ;
      Alarms& operator=(const Alarms &) = default ;
      Alarms& operator=(Alarms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->deviceOpenId_ == nullptr && this->roomNo_ == nullptr && this->userOpenId_ == nullptr; };
      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline int64_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
      inline Alarms& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // deviceOpenId Field Functions 
      bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
      void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
      inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
      inline Alarms& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Alarms& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Alarms& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> alarmId_ {};
      // This parameter is required.
      shared_ptr<string> deviceOpenId_ {};
      shared_ptr<string> roomNo_ {};
      // This parameter is required.
      shared_ptr<string> userOpenId_ {};
    };

    virtual bool empty() const override { return this->alarms_ == nullptr
        && this->hotelId_ == nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<DeleteHotelAlarmRequest::Alarms> & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<DeleteHotelAlarmRequest::Alarms>) };
    inline vector<DeleteHotelAlarmRequest::Alarms> getAlarms() { DARABONBA_PTR_GET(alarms_, vector<DeleteHotelAlarmRequest::Alarms>) };
    inline DeleteHotelAlarmRequest& setAlarms(const vector<DeleteHotelAlarmRequest::Alarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline DeleteHotelAlarmRequest& setAlarms(vector<DeleteHotelAlarmRequest::Alarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline DeleteHotelAlarmRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<DeleteHotelAlarmRequest::Alarms>> alarms_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
