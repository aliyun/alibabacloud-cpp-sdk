// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELROOMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELROOMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelRoomsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelAdminRoom, hotelAdminRoomShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelAdminRoom, hotelAdminRoomShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    ListHotelRoomsShrinkRequest() = default ;
    ListHotelRoomsShrinkRequest(const ListHotelRoomsShrinkRequest &) = default ;
    ListHotelRoomsShrinkRequest(ListHotelRoomsShrinkRequest &&) = default ;
    ListHotelRoomsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelRoomsShrinkRequest() = default ;
    ListHotelRoomsShrinkRequest& operator=(const ListHotelRoomsShrinkRequest &) = default ;
    ListHotelRoomsShrinkRequest& operator=(ListHotelRoomsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelAdminRoomShrink_ == nullptr
        && this->hotelId_ == nullptr; };
    // hotelAdminRoomShrink Field Functions 
    bool hasHotelAdminRoomShrink() const { return this->hotelAdminRoomShrink_ != nullptr;};
    void deleteHotelAdminRoomShrink() { this->hotelAdminRoomShrink_ = nullptr;};
    inline string getHotelAdminRoomShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelAdminRoomShrink_, "") };
    inline ListHotelRoomsShrinkRequest& setHotelAdminRoomShrink(string hotelAdminRoomShrink) { DARABONBA_PTR_SET_VALUE(hotelAdminRoomShrink_, hotelAdminRoomShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelRoomsShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    shared_ptr<string> hotelAdminRoomShrink_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
