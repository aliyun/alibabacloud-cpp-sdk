// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSMEETINGROOMS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSMEETINGROOMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsMeetingRooms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsMeetingRooms& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsMeetingRooms& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
    };
    ListEventsResponseBodyEventsMeetingRooms() = default ;
    ListEventsResponseBodyEventsMeetingRooms(const ListEventsResponseBodyEventsMeetingRooms &) = default ;
    ListEventsResponseBodyEventsMeetingRooms(ListEventsResponseBodyEventsMeetingRooms &&) = default ;
    ListEventsResponseBodyEventsMeetingRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsMeetingRooms() = default ;
    ListEventsResponseBodyEventsMeetingRooms& operator=(const ListEventsResponseBodyEventsMeetingRooms &) = default ;
    ListEventsResponseBodyEventsMeetingRooms& operator=(ListEventsResponseBodyEventsMeetingRooms &&) = default ;
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
    inline ListEventsResponseBodyEventsMeetingRooms& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline string responseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
    inline ListEventsResponseBodyEventsMeetingRooms& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline ListEventsResponseBodyEventsMeetingRooms& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> responseStatus_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
