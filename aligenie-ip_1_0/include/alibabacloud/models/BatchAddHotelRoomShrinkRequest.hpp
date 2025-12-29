// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDHOTELROOMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDHOTELROOMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class BatchAddHotelRoomShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddHotelRoomShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNoList, roomNoListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddHotelRoomShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNoList, roomNoListShrink_);
    };
    BatchAddHotelRoomShrinkRequest() = default ;
    BatchAddHotelRoomShrinkRequest(const BatchAddHotelRoomShrinkRequest &) = default ;
    BatchAddHotelRoomShrinkRequest(BatchAddHotelRoomShrinkRequest &&) = default ;
    BatchAddHotelRoomShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddHotelRoomShrinkRequest() = default ;
    BatchAddHotelRoomShrinkRequest& operator=(const BatchAddHotelRoomShrinkRequest &) = default ;
    BatchAddHotelRoomShrinkRequest& operator=(BatchAddHotelRoomShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNoListShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline BatchAddHotelRoomShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNoListShrink Field Functions 
    bool hasRoomNoListShrink() const { return this->roomNoListShrink_ != nullptr;};
    void deleteRoomNoListShrink() { this->roomNoListShrink_ = nullptr;};
    inline string getRoomNoListShrink() const { DARABONBA_PTR_GET_DEFAULT(roomNoListShrink_, "") };
    inline BatchAddHotelRoomShrinkRequest& setRoomNoListShrink(string roomNoListShrink) { DARABONBA_PTR_SET_VALUE(roomNoListShrink_, roomNoListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> roomNoListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
