// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUEST_HPP_
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
      DARABONBA_PTR_TO_JSON(rate_key, rateKey_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(room_id, roomId_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(rp_type, rpType_);
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
      DARABONBA_PTR_FROM_JSON(rate_key, rateKey_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(room_id, roomId_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(rp_type, rpType_);
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
    class OccupantInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OccupantInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(card_no, cardNo_);
        DARABONBA_PTR_TO_JSON(card_type, cardType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(staff_no, staffNo_);
        DARABONBA_PTR_TO_JSON(user_type, userType_);
      };
      friend void from_json(const Darabonba::Json& j, OccupantInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
        DARABONBA_PTR_FROM_JSON(card_type, cardType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(staff_no, staffNo_);
        DARABONBA_PTR_FROM_JSON(user_type, userType_);
      };
      OccupantInfoList() = default ;
      OccupantInfoList(const OccupantInfoList &) = default ;
      OccupantInfoList(OccupantInfoList &&) = default ;
      OccupantInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OccupantInfoList() = default ;
      OccupantInfoList& operator=(const OccupantInfoList &) = default ;
      OccupantInfoList& operator=(OccupantInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cardNo_ == nullptr
        && this->cardType_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->staffNo_ == nullptr && this->userType_ == nullptr; };
      // cardNo Field Functions 
      bool hasCardNo() const { return this->cardNo_ != nullptr;};
      void deleteCardNo() { this->cardNo_ = nullptr;};
      inline string getCardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
      inline OccupantInfoList& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


      // cardType Field Functions 
      bool hasCardType() const { return this->cardType_ != nullptr;};
      void deleteCardType() { this->cardType_ = nullptr;};
      inline int32_t getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
      inline OccupantInfoList& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OccupantInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline OccupantInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // staffNo Field Functions 
      bool hasStaffNo() const { return this->staffNo_ != nullptr;};
      void deleteStaffNo() { this->staffNo_ = nullptr;};
      inline string getStaffNo() const { DARABONBA_PTR_GET_DEFAULT(staffNo_, "") };
      inline OccupantInfoList& setStaffNo(string staffNo) { DARABONBA_PTR_SET_VALUE(staffNo_, staffNo) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline OccupantInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      shared_ptr<string> cardNo_ {};
      shared_ptr<int32_t> cardType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> staffNo_ {};
      shared_ptr<int32_t> userType_ {};
    };

    class DailyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DailyList& obj) { 
        DARABONBA_PTR_TO_JSON(board, board_);
        DARABONBA_PTR_TO_JSON(price, price_);
        DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
        DARABONBA_PTR_TO_JSON(room_count, roomCount_);
      };
      friend void from_json(const Darabonba::Json& j, DailyList& obj) { 
        DARABONBA_PTR_FROM_JSON(board, board_);
        DARABONBA_PTR_FROM_JSON(price, price_);
        DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
        DARABONBA_PTR_FROM_JSON(room_count, roomCount_);
      };
      DailyList() = default ;
      DailyList(const DailyList &) = default ;
      DailyList(DailyList &&) = default ;
      DailyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DailyList() = default ;
      DailyList& operator=(const DailyList &) = default ;
      DailyList& operator=(DailyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->board_ == nullptr
        && this->price_ == nullptr && this->rateStartTime_ == nullptr && this->roomCount_ == nullptr; };
      // board Field Functions 
      bool hasBoard() const { return this->board_ != nullptr;};
      void deleteBoard() { this->board_ = nullptr;};
      inline string getBoard() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
      inline DailyList& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline DailyList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // rateStartTime Field Functions 
      bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
      void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
      inline string getRateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
      inline DailyList& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


      // roomCount Field Functions 
      bool hasRoomCount() const { return this->roomCount_ != nullptr;};
      void deleteRoomCount() { this->roomCount_ = nullptr;};
      inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
      inline DailyList& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    protected:
      shared_ptr<string> board_ {};
      shared_ptr<int64_t> price_ {};
      shared_ptr<string> rateStartTime_ {};
      shared_ptr<int32_t> roomCount_ {};
    };

    virtual bool empty() const override { return this->btripUserId_ == nullptr
        && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->dailyList_ == nullptr && this->itemId_ == nullptr && this->numberOfAdultsPerRoom_ == nullptr
        && this->occupantInfoList_ == nullptr && this->rateKey_ == nullptr && this->ratePlanId_ == nullptr && this->roomId_ == nullptr && this->roomNum_ == nullptr
        && this->rpType_ == nullptr && this->searchRoomPrice_ == nullptr && this->sellerId_ == nullptr && this->shid_ == nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderPreValidateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderPreValidateRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderPreValidateRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // dailyList Field Functions 
    bool hasDailyList() const { return this->dailyList_ != nullptr;};
    void deleteDailyList() { this->dailyList_ = nullptr;};
    inline const vector<HotelOrderPreValidateRequest::DailyList> & getDailyList() const { DARABONBA_PTR_GET_CONST(dailyList_, vector<HotelOrderPreValidateRequest::DailyList>) };
    inline vector<HotelOrderPreValidateRequest::DailyList> getDailyList() { DARABONBA_PTR_GET(dailyList_, vector<HotelOrderPreValidateRequest::DailyList>) };
    inline HotelOrderPreValidateRequest& setDailyList(const vector<HotelOrderPreValidateRequest::DailyList> & dailyList) { DARABONBA_PTR_SET_VALUE(dailyList_, dailyList) };
    inline HotelOrderPreValidateRequest& setDailyList(vector<HotelOrderPreValidateRequest::DailyList> && dailyList) { DARABONBA_PTR_SET_RVALUE(dailyList_, dailyList) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline HotelOrderPreValidateRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // numberOfAdultsPerRoom Field Functions 
    bool hasNumberOfAdultsPerRoom() const { return this->numberOfAdultsPerRoom_ != nullptr;};
    void deleteNumberOfAdultsPerRoom() { this->numberOfAdultsPerRoom_ = nullptr;};
    inline int32_t getNumberOfAdultsPerRoom() const { DARABONBA_PTR_GET_DEFAULT(numberOfAdultsPerRoom_, 0) };
    inline HotelOrderPreValidateRequest& setNumberOfAdultsPerRoom(int32_t numberOfAdultsPerRoom) { DARABONBA_PTR_SET_VALUE(numberOfAdultsPerRoom_, numberOfAdultsPerRoom) };


    // occupantInfoList Field Functions 
    bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
    void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
    inline const vector<HotelOrderPreValidateRequest::OccupantInfoList> & getOccupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<HotelOrderPreValidateRequest::OccupantInfoList>) };
    inline vector<HotelOrderPreValidateRequest::OccupantInfoList> getOccupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<HotelOrderPreValidateRequest::OccupantInfoList>) };
    inline HotelOrderPreValidateRequest& setOccupantInfoList(const vector<HotelOrderPreValidateRequest::OccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
    inline HotelOrderPreValidateRequest& setOccupantInfoList(vector<HotelOrderPreValidateRequest::OccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


    // rateKey Field Functions 
    bool hasRateKey() const { return this->rateKey_ != nullptr;};
    void deleteRateKey() { this->rateKey_ = nullptr;};
    inline string getRateKey() const { DARABONBA_PTR_GET_DEFAULT(rateKey_, "") };
    inline HotelOrderPreValidateRequest& setRateKey(string rateKey) { DARABONBA_PTR_SET_VALUE(rateKey_, rateKey) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline int64_t getRatePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
    inline HotelOrderPreValidateRequest& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline int64_t getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, 0L) };
    inline HotelOrderPreValidateRequest& setRoomId(int64_t roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderPreValidateRequest& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // rpType Field Functions 
    bool hasRpType() const { return this->rpType_ != nullptr;};
    void deleteRpType() { this->rpType_ = nullptr;};
    inline int32_t getRpType() const { DARABONBA_PTR_GET_DEFAULT(rpType_, 0) };
    inline HotelOrderPreValidateRequest& setRpType(int32_t rpType) { DARABONBA_PTR_SET_VALUE(rpType_, rpType) };


    // searchRoomPrice Field Functions 
    bool hasSearchRoomPrice() const { return this->searchRoomPrice_ != nullptr;};
    void deleteSearchRoomPrice() { this->searchRoomPrice_ = nullptr;};
    inline int64_t getSearchRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(searchRoomPrice_, 0L) };
    inline HotelOrderPreValidateRequest& setSearchRoomPrice(int64_t searchRoomPrice) { DARABONBA_PTR_SET_VALUE(searchRoomPrice_, searchRoomPrice) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline HotelOrderPreValidateRequest& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // shid Field Functions 
    bool hasShid() const { return this->shid_ != nullptr;};
    void deleteShid() { this->shid_ = nullptr;};
    inline int64_t getShid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
    inline HotelOrderPreValidateRequest& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


  protected:
    // This parameter is required.
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> checkIn_ {};
    // This parameter is required.
    shared_ptr<string> checkOut_ {};
    // This parameter is required.
    shared_ptr<vector<HotelOrderPreValidateRequest::DailyList>> dailyList_ {};
    // This parameter is required.
    shared_ptr<int64_t> itemId_ {};
    shared_ptr<int32_t> numberOfAdultsPerRoom_ {};
    shared_ptr<vector<HotelOrderPreValidateRequest::OccupantInfoList>> occupantInfoList_ {};
    shared_ptr<string> rateKey_ {};
    // This parameter is required.
    shared_ptr<int64_t> ratePlanId_ {};
    // This parameter is required.
    shared_ptr<int64_t> roomId_ {};
    // This parameter is required.
    shared_ptr<int32_t> roomNum_ {};
    shared_ptr<int32_t> rpType_ {};
    // This parameter is required.
    shared_ptr<int64_t> searchRoomPrice_ {};
    // This parameter is required.
    shared_ptr<int64_t> sellerId_ {};
    // This parameter is required.
    shared_ptr<int64_t> shid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
