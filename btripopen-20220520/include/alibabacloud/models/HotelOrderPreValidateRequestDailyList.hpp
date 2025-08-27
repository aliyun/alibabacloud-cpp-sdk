// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUESTDAILYLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUESTDAILYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateRequestDailyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateRequestDailyList& obj) { 
      DARABONBA_PTR_TO_JSON(board, board_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_TO_JSON(room_count, roomCount_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateRequestDailyList& obj) { 
      DARABONBA_PTR_FROM_JSON(board, board_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_FROM_JSON(room_count, roomCount_);
    };
    HotelOrderPreValidateRequestDailyList() = default ;
    HotelOrderPreValidateRequestDailyList(const HotelOrderPreValidateRequestDailyList &) = default ;
    HotelOrderPreValidateRequestDailyList(HotelOrderPreValidateRequestDailyList &&) = default ;
    HotelOrderPreValidateRequestDailyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateRequestDailyList() = default ;
    HotelOrderPreValidateRequestDailyList& operator=(const HotelOrderPreValidateRequestDailyList &) = default ;
    HotelOrderPreValidateRequestDailyList& operator=(HotelOrderPreValidateRequestDailyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->board_ != nullptr
        && this->price_ != nullptr && this->rateStartTime_ != nullptr && this->roomCount_ != nullptr; };
    // board Field Functions 
    bool hasBoard() const { return this->board_ != nullptr;};
    void deleteBoard() { this->board_ = nullptr;};
    inline string board() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
    inline HotelOrderPreValidateRequestDailyList& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelOrderPreValidateRequestDailyList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // rateStartTime Field Functions 
    bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
    void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
    inline string rateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
    inline HotelOrderPreValidateRequestDailyList& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t roomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline HotelOrderPreValidateRequestDailyList& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


  protected:
    std::shared_ptr<string> board_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> rateStartTime_ = nullptr;
    std::shared_ptr<int32_t> roomCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
