// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPricePromotions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(SpPrice, spPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(SpPrice, spPrice_);
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
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->orderLines_ != nullptr && this->originalPrice_ != nullptr && this->promotions_ != nullptr && this->spPrice_ != nullptr
        && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // orderLines Field Functions 
    bool hasOrderLines() const { return this->orderLines_ != nullptr;};
    void deleteOrderLines() { this->orderLines_ = nullptr;};
    inline const map<string, string> & orderLines() const { DARABONBA_PTR_GET_CONST(orderLines_, map<string, string>) };
    inline map<string, string> orderLines() { DARABONBA_PTR_GET(orderLines_, map<string, string>) };
    inline DescribePriceResponseBodyPriceInfoPrice& setOrderLines(const map<string, string> & orderLines) { DARABONBA_PTR_SET_VALUE(orderLines_, orderLines) };
    inline DescribePriceResponseBodyPriceInfoPrice& setOrderLines(map<string, string> && orderLines) { DARABONBA_PTR_SET_RVALUE(orderLines_, orderLines) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions> promotions() { DARABONBA_PTR_GET(promotions_, vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions>) };
    inline DescribePriceResponseBodyPriceInfoPrice& setPromotions(const vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline DescribePriceResponseBodyPriceInfoPrice& setPromotions(vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // spPrice Field Functions 
    bool hasSpPrice() const { return this->spPrice_ != nullptr;};
    void deleteSpPrice() { this->spPrice_ = nullptr;};
    inline int64_t spPrice() const { DARABONBA_PTR_GET_DEFAULT(spPrice_, 0L) };
    inline DescribePriceResponseBodyPriceInfoPrice& setSpPrice(int64_t spPrice) { DARABONBA_PTR_SET_VALUE(spPrice_, spPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The unit of currency (USD).
    std::shared_ptr<string> currency_ = nullptr;
    // The discounted amount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The orders.
    std::shared_ptr<map<string, string>> orderLines_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The promotions.
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoPricePromotions>> promotions_ = nullptr;
    // The price under an effective savings plan.
    std::shared_ptr<int64_t> spPrice_ = nullptr;
    // The actual price. The original price minus the discounted amount equals the actual price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
