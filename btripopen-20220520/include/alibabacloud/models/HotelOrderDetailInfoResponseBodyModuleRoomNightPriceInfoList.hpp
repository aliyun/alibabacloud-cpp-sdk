// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEROOMNIGHTPRICEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEROOMNIGHTPRICEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(board, board_);
      DARABONBA_PTR_TO_JSON(board_num, boardNum_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_TO_JSON(room_id, roomId_);
      DARABONBA_PTR_TO_JSON(room_name, roomName_);
      DARABONBA_PTR_TO_JSON(room_price, roomPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(board, board_);
      DARABONBA_PTR_FROM_JSON(board_num, boardNum_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_FROM_JSON(room_id, roomId_);
      DARABONBA_PTR_FROM_JSON(room_name, roomName_);
      DARABONBA_PTR_FROM_JSON(room_price, roomPrice_);
    };
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList() = default ;
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList(const HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList &) = default ;
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList(HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList() = default ;
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& operator=(const HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList &) = default ;
    HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& operator=(HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->board_ != nullptr
        && this->boardNum_ != nullptr && this->checkIn_ != nullptr && this->ratePlanId_ != nullptr && this->ratePlanName_ != nullptr && this->roomId_ != nullptr
        && this->roomName_ != nullptr && this->roomPrice_ != nullptr; };
    // board Field Functions 
    bool hasBoard() const { return this->board_ != nullptr;};
    void deleteBoard() { this->board_ = nullptr;};
    inline string board() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


    // boardNum Field Functions 
    bool hasBoardNum() const { return this->boardNum_ != nullptr;};
    void deleteBoardNum() { this->boardNum_ = nullptr;};
    inline int32_t boardNum() const { DARABONBA_PTR_GET_DEFAULT(boardNum_, 0) };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setBoardNum(int32_t boardNum) { DARABONBA_PTR_SET_VALUE(boardNum_, boardNum) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline string ratePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setRatePlanId(string ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // ratePlanName Field Functions 
    bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
    void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
    inline string ratePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPrice Field Functions 
    bool hasRoomPrice() const { return this->roomPrice_ != nullptr;};
    void deleteRoomPrice() { this->roomPrice_ = nullptr;};
    inline int64_t roomPrice() const { DARABONBA_PTR_GET_DEFAULT(roomPrice_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList& setRoomPrice(int64_t roomPrice) { DARABONBA_PTR_SET_VALUE(roomPrice_, roomPrice) };


  protected:
    std::shared_ptr<string> board_ = nullptr;
    std::shared_ptr<int32_t> boardNum_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> ratePlanId_ = nullptr;
    std::shared_ptr<string> ratePlanName_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<int64_t> roomPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
