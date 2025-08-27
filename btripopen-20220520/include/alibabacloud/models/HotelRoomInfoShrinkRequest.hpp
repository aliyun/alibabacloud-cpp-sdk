// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelRoomInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(room_ids, roomIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(room_ids, roomIdsShrink_);
    };
    HotelRoomInfoShrinkRequest() = default ;
    HotelRoomInfoShrinkRequest(const HotelRoomInfoShrinkRequest &) = default ;
    HotelRoomInfoShrinkRequest(HotelRoomInfoShrinkRequest &&) = default ;
    HotelRoomInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoShrinkRequest() = default ;
    HotelRoomInfoShrinkRequest& operator=(const HotelRoomInfoShrinkRequest &) = default ;
    HotelRoomInfoShrinkRequest& operator=(HotelRoomInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roomIdsShrink_ != nullptr; };
    // roomIdsShrink Field Functions 
    bool hasRoomIdsShrink() const { return this->roomIdsShrink_ != nullptr;};
    void deleteRoomIdsShrink() { this->roomIdsShrink_ = nullptr;};
    inline string roomIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(roomIdsShrink_, "") };
    inline HotelRoomInfoShrinkRequest& setRoomIdsShrink(string roomIdsShrink) { DARABONBA_PTR_SET_VALUE(roomIdsShrink_, roomIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roomIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
