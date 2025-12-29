// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDHOTELROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDHOTELROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class BatchAddHotelRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddHotelRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNoList, roomNoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddHotelRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNoList, roomNoList_);
    };
    BatchAddHotelRoomRequest() = default ;
    BatchAddHotelRoomRequest(const BatchAddHotelRoomRequest &) = default ;
    BatchAddHotelRoomRequest(BatchAddHotelRoomRequest &&) = default ;
    BatchAddHotelRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddHotelRoomRequest() = default ;
    BatchAddHotelRoomRequest& operator=(const BatchAddHotelRoomRequest &) = default ;
    BatchAddHotelRoomRequest& operator=(BatchAddHotelRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNoList_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline BatchAddHotelRoomRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNoList Field Functions 
    bool hasRoomNoList() const { return this->roomNoList_ != nullptr;};
    void deleteRoomNoList() { this->roomNoList_ = nullptr;};
    inline const vector<string> & getRoomNoList() const { DARABONBA_PTR_GET_CONST(roomNoList_, vector<string>) };
    inline vector<string> getRoomNoList() { DARABONBA_PTR_GET(roomNoList_, vector<string>) };
    inline BatchAddHotelRoomRequest& setRoomNoList(const vector<string> & roomNoList) { DARABONBA_PTR_SET_VALUE(roomNoList_, roomNoList) };
    inline BatchAddHotelRoomRequest& setRoomNoList(vector<string> && roomNoList) { DARABONBA_PTR_SET_RVALUE(roomNoList_, roomNoList) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> roomNoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
