// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELALARMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELALARMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelAlarmShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Rooms, roomsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Rooms, roomsShrink_);
    };
    ListHotelAlarmShrinkRequest() = default ;
    ListHotelAlarmShrinkRequest(const ListHotelAlarmShrinkRequest &) = default ;
    ListHotelAlarmShrinkRequest(ListHotelAlarmShrinkRequest &&) = default ;
    ListHotelAlarmShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelAlarmShrinkRequest() = default ;
    ListHotelAlarmShrinkRequest& operator=(const ListHotelAlarmShrinkRequest &) = default ;
    ListHotelAlarmShrinkRequest& operator=(ListHotelAlarmShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomsShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelAlarmShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomsShrink Field Functions 
    bool hasRoomsShrink() const { return this->roomsShrink_ != nullptr;};
    void deleteRoomsShrink() { this->roomsShrink_ = nullptr;};
    inline string getRoomsShrink() const { DARABONBA_PTR_GET_DEFAULT(roomsShrink_, "") };
    inline ListHotelAlarmShrinkRequest& setRoomsShrink(string roomsShrink) { DARABONBA_PTR_SET_VALUE(roomsShrink_, roomsShrink) };


  protected:
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> roomsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
