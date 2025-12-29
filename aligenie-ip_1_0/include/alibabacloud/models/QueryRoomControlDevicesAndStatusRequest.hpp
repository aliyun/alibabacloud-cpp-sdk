// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESANDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESANDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QueryRoomControlDevicesAndStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRoomControlDevicesAndStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRoomControlDevicesAndStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    QueryRoomControlDevicesAndStatusRequest() = default ;
    QueryRoomControlDevicesAndStatusRequest(const QueryRoomControlDevicesAndStatusRequest &) = default ;
    QueryRoomControlDevicesAndStatusRequest(QueryRoomControlDevicesAndStatusRequest &&) = default ;
    QueryRoomControlDevicesAndStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRoomControlDevicesAndStatusRequest() = default ;
    QueryRoomControlDevicesAndStatusRequest& operator=(const QueryRoomControlDevicesAndStatusRequest &) = default ;
    QueryRoomControlDevicesAndStatusRequest& operator=(QueryRoomControlDevicesAndStatusRequest &&) = default ;
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
    inline QueryRoomControlDevicesAndStatusRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline QueryRoomControlDevicesAndStatusRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
