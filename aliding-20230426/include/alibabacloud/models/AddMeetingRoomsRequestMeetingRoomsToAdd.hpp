// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEETINGROOMSREQUESTMEETINGROOMSTOADD_HPP_
#define ALIBABACLOUD_MODELS_ADDMEETINGROOMSREQUESTMEETINGROOMSTOADD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMeetingRoomsRequestMeetingRoomsToAdd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMeetingRoomsRequestMeetingRoomsToAdd& obj) { 
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMeetingRoomsRequestMeetingRoomsToAdd& obj) { 
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
    };
    AddMeetingRoomsRequestMeetingRoomsToAdd() = default ;
    AddMeetingRoomsRequestMeetingRoomsToAdd(const AddMeetingRoomsRequestMeetingRoomsToAdd &) = default ;
    AddMeetingRoomsRequestMeetingRoomsToAdd(AddMeetingRoomsRequestMeetingRoomsToAdd &&) = default ;
    AddMeetingRoomsRequestMeetingRoomsToAdd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMeetingRoomsRequestMeetingRoomsToAdd() = default ;
    AddMeetingRoomsRequestMeetingRoomsToAdd& operator=(const AddMeetingRoomsRequestMeetingRoomsToAdd &) = default ;
    AddMeetingRoomsRequestMeetingRoomsToAdd& operator=(AddMeetingRoomsRequestMeetingRoomsToAdd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roomId_ != nullptr; };
    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline AddMeetingRoomsRequestMeetingRoomsToAdd& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


  protected:
    std::shared_ptr<string> roomId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
