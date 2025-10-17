// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPriceDetailInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceHourPrice, reservedInstanceHourPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceHourPrice, reservedInstanceHourPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBodyPriceInfoPrice() = default ;
    DescribePriceResponseBodyPriceInfoPrice(const DescribePriceResponseBodyPriceInfoPrice &) = default ;
    DescribePriceResponseBodyPriceInfoPrice(DescribePriceResponseBodyPriceInfoPrice &&) = default ;
    DescribePriceResponseBodyPriceInfoPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoPrice() = default ;
    DescribePriceResponseBodyPriceInfoPrice& operator=(const DescribePriceResponseBodyPriceInfoPrice &) = default ;
    DescribePriceResponseBodyPriceInfoPrice& operator=(DescribePriceResponseBodyPriceInfoPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->detailInfos_ == nullptr && return this->discountPrice_ == nullptr && return this->originalPrice_ == nullptr && return this->reservedInstanceHourPrice_ == nullptr && return this->tradePrice_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // detailInfos Field Functions 
    bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
    void deleteDetailInfos() { this->detailInfos_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos & detailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos) };
    inline Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos detailInfos() { DARABONBA_PTR_GET(detailInfos_, Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos) };
    inline DescribePriceResponseBodyPriceInfoPrice& setDetailInfos(const Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
    inline DescribePriceResponseBodyPriceInfoPrice& setDetailInfos(Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // reservedInstanceHourPrice Field Functions 
    bool hasReservedInstanceHourPrice() const { return this->reservedInstanceHourPrice_ != nullptr;};
    void deleteReservedInstanceHourPrice() { this->reservedInstanceHourPrice_ = nullptr;};
    inline float reservedInstanceHourPrice() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceHourPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setReservedInstanceHourPrice(float reservedInstanceHourPrice) { DARABONBA_PTR_SET_VALUE(reservedInstanceHourPrice_, reservedInstanceHourPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency unit.
    // 
    // Alibaba Cloud China site (aliyun.com): CNY.
    // 
    // Alibaba Cloud International site (alibabacloud.com): USD.
    std::shared_ptr<string> currency_ = nullptr;
    // The information about the price.
    // 
    // >  This parameter is returned only when ResourceType is set to instance.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfos> detailInfos_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The hourly price of the reserved instance for which the No Upfront or Partial Upfront payment option is used.
    std::shared_ptr<float> reservedInstanceHourPrice_ = nullptr;
    // The transaction price of the order. The transaction price is equal to the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
