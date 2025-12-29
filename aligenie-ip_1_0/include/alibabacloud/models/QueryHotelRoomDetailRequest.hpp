// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTELROOMDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTELROOMDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QueryHotelRoomDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotelRoomDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotelRoomDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    QueryHotelRoomDetailRequest() = default ;
    QueryHotelRoomDetailRequest(const QueryHotelRoomDetailRequest &) = default ;
    QueryHotelRoomDetailRequest(QueryHotelRoomDetailRequest &&) = default ;
    QueryHotelRoomDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotelRoomDetailRequest() = default ;
    QueryHotelRoomDetailRequest& operator=(const QueryHotelRoomDetailRequest &) = default ;
    QueryHotelRoomDetailRequest& operator=(QueryHotelRoomDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->mac_ == nullptr && this->roomNo_ == nullptr && this->sn_ == nullptr && this->uuid_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline QueryHotelRoomDetailRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline QueryHotelRoomDetailRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline QueryHotelRoomDetailRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline QueryHotelRoomDetailRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline QueryHotelRoomDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> mac_ {};
    shared_ptr<string> roomNo_ {};
    // 设备sn信息
    // 注：若在mac uuid sn全都输入的情况下 按照输入正确的内容查询 若全输入都是正确的 则 按照 uuid > mac > sn 优先级查询
    // 传入mac uuid sn其中一个 则酒店id和房间号可不传
    shared_ptr<string> sn_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
