// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMSRATESRATEDAILYS_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMSRATESRATEDAILYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& obj) { 
      DARABONBA_PTR_TO_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_TO_JSON(last_discounts_price, lastDiscountsPrice_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& obj) { 
      DARABONBA_PTR_FROM_JSON(discount_price, discountPrice_);
      DARABONBA_PTR_FROM_JSON(last_discounts_price, lastDiscountsPrice_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
    };
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys(const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys(HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys &&) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& operator=(const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& operator=(HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountPrice_ != nullptr
        && this->lastDiscountsPrice_ != nullptr && this->price_ != nullptr && this->startDate_ != nullptr; };
    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline int64_t discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0L) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& setDiscountPrice(int64_t discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // lastDiscountsPrice Field Functions 
    bool hasLastDiscountsPrice() const { return this->lastDiscountsPrice_ != nullptr;};
    void deleteLastDiscountsPrice() { this->lastDiscountsPrice_ = nullptr;};
    inline int64_t lastDiscountsPrice() const { DARABONBA_PTR_GET_DEFAULT(lastDiscountsPrice_, 0L) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& setLastDiscountsPrice(int64_t lastDiscountsPrice) { DARABONBA_PTR_SET_VALUE(lastDiscountsPrice_, lastDiscountsPrice) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<int64_t> discountPrice_ = nullptr;
    std::shared_ptr<int64_t> lastDiscountsPrice_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
