// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DescribeModificationPriceResponseBodyPriceInfoPricePromotions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeModificationPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModificationPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModificationPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeModificationPriceResponseBodyPriceInfoPrice() = default ;
    DescribeModificationPriceResponseBodyPriceInfoPrice(const DescribeModificationPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeModificationPriceResponseBodyPriceInfoPrice(DescribeModificationPriceResponseBodyPriceInfoPrice &&) = default ;
    DescribeModificationPriceResponseBodyPriceInfoPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModificationPriceResponseBodyPriceInfoPrice() = default ;
    DescribeModificationPriceResponseBodyPriceInfoPrice& operator=(const DescribeModificationPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeModificationPriceResponseBodyPriceInfoPrice& operator=(DescribeModificationPriceResponseBodyPriceInfoPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->orderLines_ != nullptr && this->originalPrice_ != nullptr && this->promotions_ != nullptr && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // orderLines Field Functions 
    bool hasOrderLines() const { return this->orderLines_ != nullptr;};
    void deleteOrderLines() { this->orderLines_ = nullptr;};
    inline const map<string, string> & orderLines() const { DARABONBA_PTR_GET_CONST(orderLines_, map<string, string>) };
    inline map<string, string> orderLines() { DARABONBA_PTR_GET(orderLines_, map<string, string>) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setOrderLines(const map<string, string> & orderLines) { DARABONBA_PTR_SET_VALUE(orderLines_, orderLines) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setOrderLines(map<string, string> && orderLines) { DARABONBA_PTR_SET_RVALUE(orderLines_, orderLines) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions>) };
    inline vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions> promotions() { DARABONBA_PTR_GET(promotions_, vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions>) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setPromotions(const vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setPromotions(vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeModificationPriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The unit of currency (USD).
    std::shared_ptr<string> currency_ = nullptr;
    // The discounted amount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The orders.
    std::shared_ptr<map<string, string>> orderLines_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The promotion activities.
    std::shared_ptr<vector<Models::DescribeModificationPriceResponseBodyPriceInfoPricePromotions>> promotions_ = nullptr;
    // The actual price. The actual price is the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
