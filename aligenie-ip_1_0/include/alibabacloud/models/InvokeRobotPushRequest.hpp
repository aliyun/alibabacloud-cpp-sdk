// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEROBOTPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEROBOTPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class InvokeRobotPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeRobotPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeRobotPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    InvokeRobotPushRequest() = default ;
    InvokeRobotPushRequest(const InvokeRobotPushRequest &) = default ;
    InvokeRobotPushRequest(InvokeRobotPushRequest &&) = default ;
    InvokeRobotPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeRobotPushRequest() = default ;
    InvokeRobotPushRequest& operator=(const InvokeRobotPushRequest &) = default ;
    InvokeRobotPushRequest& operator=(InvokeRobotPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->pushType_ == nullptr && this->roomName_ == nullptr && this->roomNo_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline InvokeRobotPushRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline InvokeRobotPushRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline InvokeRobotPushRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline InvokeRobotPushRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> pushType_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
