// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYMEETINGROOMS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYMEETINGROOMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyMeetingRooms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyMeetingRooms& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyMeetingRooms& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
    };
    GetEventResponseBodyMeetingRooms() = default ;
    GetEventResponseBodyMeetingRooms(const GetEventResponseBodyMeetingRooms &) = default ;
    GetEventResponseBodyMeetingRooms(GetEventResponseBodyMeetingRooms &&) = default ;
    GetEventResponseBodyMeetingRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyMeetingRooms() = default ;
    GetEventResponseBodyMeetingRooms& operator=(const GetEventResponseBodyMeetingRooms &) = default ;
    GetEventResponseBodyMeetingRooms& operator=(GetEventResponseBodyMeetingRooms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->responseStatus_ != nullptr && this->roomId_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetEventResponseBodyMeetingRooms& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline string responseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
    inline GetEventResponseBodyMeetingRooms& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline GetEventResponseBodyMeetingRooms& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> responseStatus_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
