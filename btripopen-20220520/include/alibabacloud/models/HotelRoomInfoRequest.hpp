// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelRoomInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(room_ids, roomIds_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(room_ids, roomIds_);
    };
    HotelRoomInfoRequest() = default ;
    HotelRoomInfoRequest(const HotelRoomInfoRequest &) = default ;
    HotelRoomInfoRequest(HotelRoomInfoRequest &&) = default ;
    HotelRoomInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoRequest() = default ;
    HotelRoomInfoRequest& operator=(const HotelRoomInfoRequest &) = default ;
    HotelRoomInfoRequest& operator=(HotelRoomInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roomIds_ != nullptr; };
    // roomIds Field Functions 
    bool hasRoomIds() const { return this->roomIds_ != nullptr;};
    void deleteRoomIds() { this->roomIds_ = nullptr;};
    inline const vector<int64_t> & roomIds() const { DARABONBA_PTR_GET_CONST(roomIds_, vector<int64_t>) };
    inline vector<int64_t> roomIds() { DARABONBA_PTR_GET(roomIds_, vector<int64_t>) };
    inline HotelRoomInfoRequest& setRoomIds(const vector<int64_t> & roomIds) { DARABONBA_PTR_SET_VALUE(roomIds_, roomIds) };
    inline HotelRoomInfoRequest& setRoomIds(vector<int64_t> && roomIds) { DARABONBA_PTR_SET_RVALUE(roomIds_, roomIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> roomIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
