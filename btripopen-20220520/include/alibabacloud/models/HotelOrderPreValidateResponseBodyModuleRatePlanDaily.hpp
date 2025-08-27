// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANDAILY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULERATEPLANDAILY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModuleRatePlanDaily : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModuleRatePlanDaily& obj) { 
      DARABONBA_PTR_TO_JSON(board, board_);
      DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_TO_JSON(max_booking_num, maxBookingNum_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_TO_JSON(room_count, roomCount_);
      DARABONBA_PTR_TO_JSON(rounding_discount_price, roundingDiscountPrice_);
      DARABONBA_PTR_TO_JSON(rounding_price, roundingPrice_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModuleRatePlanDaily& obj) { 
      DARABONBA_PTR_FROM_JSON(board, board_);
      DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_FROM_JSON(max_booking_num, maxBookingNum_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_FROM_JSON(room_count, roomCount_);
      DARABONBA_PTR_FROM_JSON(rounding_discount_price, roundingDiscountPrice_);
      DARABONBA_PTR_FROM_JSON(rounding_price, roundingPrice_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
    };
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily(const HotelOrderPreValidateResponseBodyModuleRatePlanDaily &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily(HotelOrderPreValidateResponseBodyModuleRatePlanDaily &&) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModuleRatePlanDaily() = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily& operator=(const HotelOrderPreValidateResponseBodyModuleRatePlanDaily &) = default ;
    HotelOrderPreValidateResponseBodyModuleRatePlanDaily& operator=(HotelOrderPreValidateResponseBodyModuleRatePlanDaily &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->board_ != nullptr
        && this->discountPrice_ != nullptr && this->maxBookingNum_ != nullptr && this->price_ != nullptr && this->rateStartTime_ != nullptr && this->roomCount_ != nullptr
        && this->roundingDiscountPrice_ != nullptr && this->roundingPrice_ != nullptr && this->serviceFee_ != nullptr; };
    // board Field Functions 
    bool hasBoard() const { return this->board_ != nullptr;};
    void deleteBoard() { this->board_ = nullptr;};
    inline string board() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline string discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // maxBookingNum Field Functions 
    bool hasMaxBookingNum() const { return this->maxBookingNum_ != nullptr;};
    void deleteMaxBookingNum() { this->maxBookingNum_ = nullptr;};
    inline int32_t maxBookingNum() const { DARABONBA_PTR_GET_DEFAULT(maxBookingNum_, 0) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setMaxBookingNum(int32_t maxBookingNum) { DARABONBA_PTR_SET_VALUE(maxBookingNum_, maxBookingNum) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // rateStartTime Field Functions 
    bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
    void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
    inline string rateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t roomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // roundingDiscountPrice Field Functions 
    bool hasRoundingDiscountPrice() const { return this->roundingDiscountPrice_ != nullptr;};
    void deleteRoundingDiscountPrice() { this->roundingDiscountPrice_ = nullptr;};
    inline string roundingDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(roundingDiscountPrice_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setRoundingDiscountPrice(string roundingDiscountPrice) { DARABONBA_PTR_SET_VALUE(roundingDiscountPrice_, roundingDiscountPrice) };


    // roundingPrice Field Functions 
    bool hasRoundingPrice() const { return this->roundingPrice_ != nullptr;};
    void deleteRoundingPrice() { this->roundingPrice_ = nullptr;};
    inline string roundingPrice() const { DARABONBA_PTR_GET_DEFAULT(roundingPrice_, "") };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setRoundingPrice(string roundingPrice) { DARABONBA_PTR_SET_VALUE(roundingPrice_, roundingPrice) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline HotelOrderPreValidateResponseBodyModuleRatePlanDaily& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


  protected:
    std::shared_ptr<string> board_ = nullptr;
    std::shared_ptr<string> discountPrice_ = nullptr;
    std::shared_ptr<int32_t> maxBookingNum_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> rateStartTime_ = nullptr;
    std::shared_ptr<int32_t> roomCount_ = nullptr;
    std::shared_ptr<string> roundingDiscountPrice_ = nullptr;
    std::shared_ptr<string> roundingPrice_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
