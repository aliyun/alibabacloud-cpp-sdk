// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELROOMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELROOMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelRoomsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelRoomsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelAdminRoom, hotelAdminRoom_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelRoomsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelAdminRoom, hotelAdminRoom_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    ListHotelRoomsRequest() = default ;
    ListHotelRoomsRequest(const ListHotelRoomsRequest &) = default ;
    ListHotelRoomsRequest(ListHotelRoomsRequest &&) = default ;
    ListHotelRoomsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelRoomsRequest() = default ;
    ListHotelRoomsRequest& operator=(const ListHotelRoomsRequest &) = default ;
    ListHotelRoomsRequest& operator=(ListHotelRoomsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HotelAdminRoom : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotelAdminRoom& obj) { 
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      };
      friend void from_json(const Darabonba::Json& j, HotelAdminRoom& obj) { 
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      };
      HotelAdminRoom() = default ;
      HotelAdminRoom(const HotelAdminRoom &) = default ;
      HotelAdminRoom(HotelAdminRoom &&) = default ;
      HotelAdminRoom(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotelAdminRoom() = default ;
      HotelAdminRoom& operator=(const HotelAdminRoom &) = default ;
      HotelAdminRoom& operator=(HotelAdminRoom &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->roomNo_ == nullptr; };
      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline HotelAdminRoom& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    protected:
      shared_ptr<string> roomNo_ {};
    };

    virtual bool empty() const override { return this->hotelAdminRoom_ == nullptr
        && this->hotelId_ == nullptr; };
    // hotelAdminRoom Field Functions 
    bool hasHotelAdminRoom() const { return this->hotelAdminRoom_ != nullptr;};
    void deleteHotelAdminRoom() { this->hotelAdminRoom_ = nullptr;};
    inline const ListHotelRoomsRequest::HotelAdminRoom & getHotelAdminRoom() const { DARABONBA_PTR_GET_CONST(hotelAdminRoom_, ListHotelRoomsRequest::HotelAdminRoom) };
    inline ListHotelRoomsRequest::HotelAdminRoom getHotelAdminRoom() { DARABONBA_PTR_GET(hotelAdminRoom_, ListHotelRoomsRequest::HotelAdminRoom) };
    inline ListHotelRoomsRequest& setHotelAdminRoom(const ListHotelRoomsRequest::HotelAdminRoom & hotelAdminRoom) { DARABONBA_PTR_SET_VALUE(hotelAdminRoom_, hotelAdminRoom) };
    inline ListHotelRoomsRequest& setHotelAdminRoom(ListHotelRoomsRequest::HotelAdminRoom && hotelAdminRoom) { DARABONBA_PTR_SET_RVALUE(hotelAdminRoom_, hotelAdminRoom) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelRoomsRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    shared_ptr<ListHotelRoomsRequest::HotelAdminRoom> hotelAdminRoom_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
