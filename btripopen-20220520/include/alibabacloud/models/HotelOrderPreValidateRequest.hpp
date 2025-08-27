// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderPreValidateRequestDailyList.hpp>
#include <alibabacloud/models/HotelOrderPreValidateRequestOccupantInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(daily_list, dailyList_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(number_of_adults_per_room, numberOfAdultsPerRoom_);
      DARABONBA_PTR_TO_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(room_id, roomId_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(search_room_price, searchRoomPrice_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(shid, shid_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(daily_list, dailyList_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(number_of_adults_per_room, numberOfAdultsPerRoom_);
      DARABONBA_PTR_FROM_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(room_id, roomId_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(search_room_price, searchRoomPrice_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(shid, shid_);
    };
    HotelOrderPreValidateRequest() = default ;
    HotelOrderPreValidateRequest(const HotelOrderPreValidateRequest &) = default ;
    HotelOrderPreValidateRequest(HotelOrderPreValidateRequest &&) = default ;
    HotelOrderPreValidateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateRequest() = default ;
    HotelOrderPreValidateRequest& operator=(const HotelOrderPreValidateRequest &) = default ;
    HotelOrderPreValidateRequest& operator=(HotelOrderPreValidateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->dailyList_ != nullptr && this->itemId_ != nullptr && this->numberOfAdultsPerRoom_ != nullptr
        && this->occupantInfoList_ != nullptr && this->ratePlanId_ != nullptr && this->roomId_ != nullptr && this->roomNum_ != nullptr && this->searchRoomPrice_ != nullptr
        && this->sellerId_ != nullptr && this->shid_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderPreValidateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderPreValidateRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderPreValidateRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // dailyList Field Functions 
    bool hasDailyList() const { return this->dailyList_ != nullptr;};
    void deleteDailyList() { this->dailyList_ = nullptr;};
    inline const vector<HotelOrderPreValidateRequestDailyList> & dailyList() const { DARABONBA_PTR_GET_CONST(dailyList_, vector<HotelOrderPreValidateRequestDailyList>) };
    inline vector<HotelOrderPreValidateRequestDailyList> dailyList() { DARABONBA_PTR_GET(dailyList_, vector<HotelOrderPreValidateRequestDailyList>) };
    inline HotelOrderPreValidateRequest& setDailyList(const vector<HotelOrderPreValidateRequestDailyList> & dailyList) { DARABONBA_PTR_SET_VALUE(dailyList_, dailyList) };
    inline HotelOrderPreValidateRequest& setDailyList(vector<HotelOrderPreValidateRequestDailyList> && dailyList) { DARABONBA_PTR_SET_RVALUE(dailyList_, dailyList) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline HotelOrderPreValidateRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // numberOfAdultsPerRoom Field Functions 
    bool hasNumberOfAdultsPerRoom() const { return this->numberOfAdultsPerRoom_ != nullptr;};
    void deleteNumberOfAdultsPerRoom() { this->numberOfAdultsPerRoom_ = nullptr;};
    inline int32_t numberOfAdultsPerRoom() const { DARABONBA_PTR_GET_DEFAULT(numberOfAdultsPerRoom_, 0) };
    inline HotelOrderPreValidateRequest& setNumberOfAdultsPerRoom(int32_t numberOfAdultsPerRoom) { DARABONBA_PTR_SET_VALUE(numberOfAdultsPerRoom_, numberOfAdultsPerRoom) };


    // occupantInfoList Field Functions 
    bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
    void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
    inline const vector<HotelOrderPreValidateRequestOccupantInfoList> & occupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<HotelOrderPreValidateRequestOccupantInfoList>) };
    inline vector<HotelOrderPreValidateRequestOccupantInfoList> occupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<HotelOrderPreValidateRequestOccupantInfoList>) };
    inline HotelOrderPreValidateRequest& setOccupantInfoList(const vector<HotelOrderPreValidateRequestOccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
    inline HotelOrderPreValidateRequest& setOccupantInfoList(vector<HotelOrderPreValidateRequestOccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline int64_t ratePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
    inline HotelOrderPreValidateRequest& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline int64_t roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, 0L) };
    inline HotelOrderPreValidateRequest& setRoomId(int64_t roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t roomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderPreValidateRequest& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // searchRoomPrice Field Functions 
    bool hasSearchRoomPrice() const { return this->searchRoomPrice_ != nullptr;};
    void deleteSearchRoomPrice() { this->searchRoomPrice_ = nullptr;};
    inline int64_t searchRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(searchRoomPrice_, 0L) };
    inline HotelOrderPreValidateRequest& setSearchRoomPrice(int64_t searchRoomPrice) { DARABONBA_PTR_SET_VALUE(searchRoomPrice_, searchRoomPrice) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline HotelOrderPreValidateRequest& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // shid Field Functions 
    bool hasShid() const { return this->shid_ != nullptr;};
    void deleteShid() { this->shid_ = nullptr;};
    inline int64_t shid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
    inline HotelOrderPreValidateRequest& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkIn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkOut_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<HotelOrderPreValidateRequestDailyList>> dailyList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    std::shared_ptr<int32_t> numberOfAdultsPerRoom_ = nullptr;
    std::shared_ptr<vector<HotelOrderPreValidateRequestOccupantInfoList>> occupantInfoList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ratePlanId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> roomId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> roomNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> searchRoomPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sellerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> shid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
