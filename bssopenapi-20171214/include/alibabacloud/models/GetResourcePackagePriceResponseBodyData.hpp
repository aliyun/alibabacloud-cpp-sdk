// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourcePackagePriceResponseBodyDataPromotions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetResourcePackagePriceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePackagePriceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePackagePriceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    GetResourcePackagePriceResponseBodyData() = default ;
    GetResourcePackagePriceResponseBodyData(const GetResourcePackagePriceResponseBodyData &) = default ;
    GetResourcePackagePriceResponseBodyData(GetResourcePackagePriceResponseBodyData &&) = default ;
    GetResourcePackagePriceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePackagePriceResponseBodyData() = default ;
    GetResourcePackagePriceResponseBodyData& operator=(const GetResourcePackagePriceResponseBodyData &) = default ;
    GetResourcePackagePriceResponseBodyData& operator=(GetResourcePackagePriceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->originalPrice_ != nullptr && this->promotions_ != nullptr && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetResourcePackagePriceResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline GetResourcePackagePriceResponseBodyData& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline GetResourcePackagePriceResponseBodyData& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const Models::GetResourcePackagePriceResponseBodyDataPromotions & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, Models::GetResourcePackagePriceResponseBodyDataPromotions) };
    inline Models::GetResourcePackagePriceResponseBodyDataPromotions promotions() { DARABONBA_PTR_GET(promotions_, Models::GetResourcePackagePriceResponseBodyDataPromotions) };
    inline GetResourcePackagePriceResponseBodyData& setPromotions(const Models::GetResourcePackagePriceResponseBodyDataPromotions & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline GetResourcePackagePriceResponseBodyData& setPromotions(Models::GetResourcePackagePriceResponseBodyDataPromotions && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline GetResourcePackagePriceResponseBodyData& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The type of the currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The discounted amount. Unit: CNY.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price. Unit: CNY.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The details of the discount.
    std::shared_ptr<Models::GetResourcePackagePriceResponseBodyDataPromotions> promotions_ = nullptr;
    // The price at which the transaction is made. Unit: CNY.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
