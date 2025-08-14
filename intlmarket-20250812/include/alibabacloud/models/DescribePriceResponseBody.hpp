// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyCoupons.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPromotionRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntlMarket20250812
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Cuxiao, cuxiao_);
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExpressionCode, expressionCode_);
      DARABONBA_PTR_TO_JSON(ExpressionMessage, expressionMessage_);
      DARABONBA_PTR_TO_JSON(InfoTitle, infoTitle_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(PromotionRules, promotionRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Cuxiao, cuxiao_);
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExpressionCode, expressionCode_);
      DARABONBA_PTR_FROM_JSON(ExpressionMessage, expressionMessage_);
      DARABONBA_PTR_FROM_JSON(InfoTitle, infoTitle_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(PromotionRules, promotionRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->coupons_ != nullptr && this->currency_ != nullptr && this->cuxiao_ != nullptr && this->cycle_ != nullptr && this->discountPrice_ != nullptr
        && this->duration_ != nullptr && this->expressionCode_ != nullptr && this->expressionMessage_ != nullptr && this->infoTitle_ != nullptr && this->message_ != nullptr
        && this->originalPrice_ != nullptr && this->productCode_ != nullptr && this->promotionRules_ != nullptr && this->requestId_ != nullptr && this->tradePrice_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const vector<DescribePriceResponseBodyCoupons> & coupons() const { DARABONBA_PTR_GET_CONST(coupons_, vector<DescribePriceResponseBodyCoupons>) };
    inline vector<DescribePriceResponseBodyCoupons> coupons() { DARABONBA_PTR_GET(coupons_, vector<DescribePriceResponseBodyCoupons>) };
    inline DescribePriceResponseBody& setCoupons(const vector<DescribePriceResponseBodyCoupons> & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline DescribePriceResponseBody& setCoupons(vector<DescribePriceResponseBodyCoupons> && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // cuxiao Field Functions 
    bool hasCuxiao() const { return this->cuxiao_ != nullptr;};
    void deleteCuxiao() { this->cuxiao_ = nullptr;};
    inline bool cuxiao() const { DARABONBA_PTR_GET_DEFAULT(cuxiao_, false) };
    inline DescribePriceResponseBody& setCuxiao(bool cuxiao) { DARABONBA_PTR_SET_VALUE(cuxiao_, cuxiao) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline DescribePriceResponseBody& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBody& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribePriceResponseBody& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expressionCode Field Functions 
    bool hasExpressionCode() const { return this->expressionCode_ != nullptr;};
    void deleteExpressionCode() { this->expressionCode_ = nullptr;};
    inline string expressionCode() const { DARABONBA_PTR_GET_DEFAULT(expressionCode_, "") };
    inline DescribePriceResponseBody& setExpressionCode(string expressionCode) { DARABONBA_PTR_SET_VALUE(expressionCode_, expressionCode) };


    // expressionMessage Field Functions 
    bool hasExpressionMessage() const { return this->expressionMessage_ != nullptr;};
    void deleteExpressionMessage() { this->expressionMessage_ = nullptr;};
    inline string expressionMessage() const { DARABONBA_PTR_GET_DEFAULT(expressionMessage_, "") };
    inline DescribePriceResponseBody& setExpressionMessage(string expressionMessage) { DARABONBA_PTR_SET_VALUE(expressionMessage_, expressionMessage) };


    // infoTitle Field Functions 
    bool hasInfoTitle() const { return this->infoTitle_ != nullptr;};
    void deleteInfoTitle() { this->infoTitle_ = nullptr;};
    inline string infoTitle() const { DARABONBA_PTR_GET_DEFAULT(infoTitle_, "") };
    inline DescribePriceResponseBody& setInfoTitle(string infoTitle) { DARABONBA_PTR_SET_VALUE(infoTitle_, infoTitle) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBody& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePriceResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // promotionRules Field Functions 
    bool hasPromotionRules() const { return this->promotionRules_ != nullptr;};
    void deletePromotionRules() { this->promotionRules_ = nullptr;};
    inline const vector<DescribePriceResponseBodyPromotionRules> & promotionRules() const { DARABONBA_PTR_GET_CONST(promotionRules_, vector<DescribePriceResponseBodyPromotionRules>) };
    inline vector<DescribePriceResponseBodyPromotionRules> promotionRules() { DARABONBA_PTR_GET(promotionRules_, vector<DescribePriceResponseBodyPromotionRules>) };
    inline DescribePriceResponseBody& setPromotionRules(const vector<DescribePriceResponseBodyPromotionRules> & promotionRules) { DARABONBA_PTR_SET_VALUE(promotionRules_, promotionRules) };
    inline DescribePriceResponseBody& setPromotionRules(vector<DescribePriceResponseBodyPromotionRules> && promotionRules) { DARABONBA_PTR_SET_RVALUE(promotionRules_, promotionRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBody& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<DescribePriceResponseBodyCoupons>> coupons_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<bool> cuxiao_ = nullptr;
    std::shared_ptr<string> cycle_ = nullptr;
    std::shared_ptr<float> discountPrice_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> expressionCode_ = nullptr;
    std::shared_ptr<string> expressionMessage_ = nullptr;
    std::shared_ptr<string> infoTitle_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<float> originalPrice_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<vector<DescribePriceResponseBodyPromotionRules>> promotionRules_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntlMarket20250812
#endif
