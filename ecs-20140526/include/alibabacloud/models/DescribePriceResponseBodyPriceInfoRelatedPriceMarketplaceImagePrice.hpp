// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORELATEDPRICEMARKETPLACEIMAGEPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORELATEDPRICEMARKETPLACEIMAGEPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice() = default ;
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice(const DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice &) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice(DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice &&) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice() = default ;
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& operator=(const DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice &) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& operator=(DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->discountPrice_ == nullptr && return this->originalPrice_ == nullptr && return this->tradePrice_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency unit.
    // 
    // China site (aliyun.com): CNY
    // 
    // International site (alibabacloud.com): USD
    std::shared_ptr<string> currency_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The transaction price, which is equal to the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
