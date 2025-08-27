// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESHOTELDETAILRATEPRICEDTO_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESHOTELDETAILRATEPRICEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& obj) { 
      DARABONBA_PTR_TO_JSON(before_discount_price, beforeDiscountPrice_);
      DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
      DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_TO_JSON(last_discounts_price, lastDiscountsPrice_);
      DARABONBA_PTR_TO_JSON(last_discounts_rounding_price, lastDiscountsRoundingPrice_);
      DARABONBA_PTR_TO_JSON(last_num, lastNum_);
      DARABONBA_PTR_TO_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(before_discount_price, beforeDiscountPrice_);
      DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
      DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_FROM_JSON(last_discounts_price, lastDiscountsPrice_);
      DARABONBA_PTR_FROM_JSON(last_discounts_rounding_price, lastDiscountsRoundingPrice_);
      DARABONBA_PTR_FROM_JSON(last_num, lastNum_);
      DARABONBA_PTR_FROM_JSON(rate_start_time, rateStartTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO(const HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO(HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& operator=(HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beforeDiscountPrice_ != nullptr
        && this->breakfast_ != nullptr && this->discountPrice_ != nullptr && this->lastDiscountsPrice_ != nullptr && this->lastDiscountsRoundingPrice_ != nullptr && this->lastNum_ != nullptr
        && this->rateStartTime_ != nullptr && this->status_ != nullptr; };
    // beforeDiscountPrice Field Functions 
    bool hasBeforeDiscountPrice() const { return this->beforeDiscountPrice_ != nullptr;};
    void deleteBeforeDiscountPrice() { this->beforeDiscountPrice_ = nullptr;};
    inline int64_t beforeDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeDiscountPrice_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setBeforeDiscountPrice(int64_t beforeDiscountPrice) { DARABONBA_PTR_SET_VALUE(beforeDiscountPrice_, beforeDiscountPrice) };


    // breakfast Field Functions 
    bool hasBreakfast() const { return this->breakfast_ != nullptr;};
    void deleteBreakfast() { this->breakfast_ = nullptr;};
    inline string breakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline int64_t discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setDiscountPrice(int64_t discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // lastDiscountsPrice Field Functions 
    bool hasLastDiscountsPrice() const { return this->lastDiscountsPrice_ != nullptr;};
    void deleteLastDiscountsPrice() { this->lastDiscountsPrice_ = nullptr;};
    inline int64_t lastDiscountsPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsPrice_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setLastDiscountsPrice(int64_t lastDiscountsPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsPrice_, lastDiscountsPrice) };


    // lastDiscountsRoundingPrice Field Functions 
    bool hasLastDiscountsRoundingPrice() const { return this->lastDiscountsRoundingPrice_ != nullptr;};
    void deleteLastDiscountsRoundingPrice() { this->lastDiscountsRoundingPrice_ = nullptr;};
    inline int64_t lastDiscountsRoundingPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsRoundingPrice_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setLastDiscountsRoundingPrice(int64_t lastDiscountsRoundingPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsRoundingPrice_, lastDiscountsRoundingPrice) };


    // lastNum Field Functions 
    bool hasLastNum() const { return this->lastNum_ != nullptr;};
    void deleteLastNum() { this->lastNum_ = nullptr;};
    inline int32_t lastNum() const { DARABONBA_PTR_GET_DEFAULT(lastNum_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setLastNum(int32_t lastNum) { DARABONBA_PTR_SET_VALUE(lastNum_, lastNum) };


    // rateStartTime Field Functions 
    bool hasRateStartTime() const { return this->rateStartTime_ != nullptr;};
    void deleteRateStartTime() { this->rateStartTime_ = nullptr;};
    inline string rateStartTime() const { DARABONBA_PTR_GET_DEFAULT(rateStartTime_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setRateStartTime(string rateStartTime) { DARABONBA_PTR_SET_VALUE(rateStartTime_, rateStartTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> beforeDiscountPrice_ = nullptr;
    std::shared_ptr<string> breakfast_ = nullptr;
    std::shared_ptr<int64_t> discountPrice_ = nullptr;
    std::shared_ptr<int64_t> lastDiscountsPrice_ = nullptr;
    std::shared_ptr<int64_t> lastDiscountsRoundingPrice_ = nullptr;
    std::shared_ptr<int32_t> lastNum_ = nullptr;
    std::shared_ptr<string> rateStartTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
