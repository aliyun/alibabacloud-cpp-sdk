// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEHOTELROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEHOTELROOMREQUEST_HPP_
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
  class BatchDeleteHotelRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteHotelRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNoList, roomNoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteHotelRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNoList, roomNoList_);
    };
    BatchDeleteHotelRoomRequest() = default ;
    BatchDeleteHotelRoomRequest(const BatchDeleteHotelRoomRequest &) = default ;
    BatchDeleteHotelRoomRequest(BatchDeleteHotelRoomRequest &&) = default ;
    BatchDeleteHotelRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteHotelRoomRequest() = default ;
    BatchDeleteHotelRoomRequest& operator=(const BatchDeleteHotelRoomRequest &) = default ;
    BatchDeleteHotelRoomRequest& operator=(BatchDeleteHotelRoomRequest &&) = default ;
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
    inline BatchDeleteHotelRoomRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNoList Field Functions 
    bool hasRoomNoList() const { return this->roomNoList_ != nullptr;};
    void deleteRoomNoList() { this->roomNoList_ = nullptr;};
    inline const vector<string> & getRoomNoList() const { DARABONBA_PTR_GET_CONST(roomNoList_, vector<string>) };
    inline vector<string> getRoomNoList() { DARABONBA_PTR_GET(roomNoList_, vector<string>) };
    inline BatchDeleteHotelRoomRequest& setRoomNoList(const vector<string> & roomNoList) { DARABONBA_PTR_SET_VALUE(roomNoList_, roomNoList) };
    inline BatchDeleteHotelRoomRequest& setRoomNoList(vector<string> && roomNoList) { DARABONBA_PTR_SET_RVALUE(roomNoList_, roomNoList) };


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
