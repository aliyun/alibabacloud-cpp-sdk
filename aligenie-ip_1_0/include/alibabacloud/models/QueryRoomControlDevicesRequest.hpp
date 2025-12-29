// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QueryRoomControlDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRoomControlDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRoomControlDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    QueryRoomControlDevicesRequest() = default ;
    QueryRoomControlDevicesRequest(const QueryRoomControlDevicesRequest &) = default ;
    QueryRoomControlDevicesRequest(QueryRoomControlDevicesRequest &&) = default ;
    QueryRoomControlDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRoomControlDevicesRequest() = default ;
    QueryRoomControlDevicesRequest& operator=(const QueryRoomControlDevicesRequest &) = default ;
    QueryRoomControlDevicesRequest& operator=(QueryRoomControlDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNo_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline QueryRoomControlDevicesRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline QueryRoomControlDevicesRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
