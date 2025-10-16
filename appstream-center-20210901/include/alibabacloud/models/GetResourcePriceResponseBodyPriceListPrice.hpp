// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICELISTPRICE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICELISTPRICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceListPricePromotions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourcePriceResponseBodyPriceListPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceResponseBodyPriceListPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceResponseBodyPriceListPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    GetResourcePriceResponseBodyPriceListPrice() = default ;
    GetResourcePriceResponseBodyPriceListPrice(const GetResourcePriceResponseBodyPriceListPrice &) = default ;
    GetResourcePriceResponseBodyPriceListPrice(GetResourcePriceResponseBodyPriceListPrice &&) = default ;
    GetResourcePriceResponseBodyPriceListPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceResponseBodyPriceListPrice() = default ;
    GetResourcePriceResponseBodyPriceListPrice& operator=(const GetResourcePriceResponseBodyPriceListPrice &) = default ;
    GetResourcePriceResponseBodyPriceListPrice& operator=(GetResourcePriceResponseBodyPriceListPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->discountPrice_ == nullptr && return this->originalPrice_ == nullptr && return this->promotions_ == nullptr && return this->tradePrice_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetResourcePriceResponseBodyPriceListPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline string discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
    inline GetResourcePriceResponseBodyPriceListPrice& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline string originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, "") };
    inline GetResourcePriceResponseBodyPriceListPrice& setOriginalPrice(string originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions>) };
    inline vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions> promotions() { DARABONBA_PTR_GET(promotions_, vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions>) };
    inline GetResourcePriceResponseBodyPriceListPrice& setPromotions(const vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline GetResourcePriceResponseBodyPriceListPrice& setPromotions(vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline string tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, "") };
    inline GetResourcePriceResponseBodyPriceListPrice& setTradePrice(string tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency type.
    std::shared_ptr<string> currency_ = nullptr;
    // The discount. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
    std::shared_ptr<string> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<string> originalPrice_ = nullptr;
    // The coupon metadata.
    std::shared_ptr<vector<Models::GetResourcePriceResponseBodyPriceListPricePromotions>> promotions_ = nullptr;
    // The actual price. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
    std::shared_ptr<string> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
