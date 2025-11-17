// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails.hpp>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoPricePromotions.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PriceDetails, priceDetails_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(RefundInstanceIdPriceMap, refundInstanceIdPriceMap_);
      DARABONBA_PTR_TO_JSON(RefundPrice, refundPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PriceDetails, priceDetails_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(RefundInstanceIdPriceMap, refundInstanceIdPriceMap_);
      DARABONBA_PTR_FROM_JSON(RefundPrice, refundPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeMultiPriceResponseBodyPriceInfoPrice() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPrice(const DescribeMultiPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPrice(DescribeMultiPriceResponseBodyPriceInfoPrice &&) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBodyPriceInfoPrice() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPrice& operator=(const DescribeMultiPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPrice& operator=(DescribeMultiPriceResponseBodyPriceInfoPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->discountPrice_ == nullptr && return this->originalPrice_ == nullptr && return this->priceDetails_ == nullptr && return this->promotions_ == nullptr && return this->refundInstanceIdPriceMap_ == nullptr
        && return this->refundPrice_ == nullptr && return this->tradePrice_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // priceDetails Field Functions 
    bool hasPriceDetails() const { return this->priceDetails_ != nullptr;};
    void deletePriceDetails() { this->priceDetails_ = nullptr;};
    inline const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails> & priceDetails() const { DARABONBA_PTR_GET_CONST(priceDetails_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails>) };
    inline vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails> priceDetails() { DARABONBA_PTR_GET(priceDetails_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails>) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setPriceDetails(const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails> & priceDetails) { DARABONBA_PTR_SET_VALUE(priceDetails_, priceDetails) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setPriceDetails(vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails> && priceDetails) { DARABONBA_PTR_SET_RVALUE(priceDetails_, priceDetails) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions>) };
    inline vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions> promotions() { DARABONBA_PTR_GET(promotions_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions>) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setPromotions(const vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setPromotions(vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // refundInstanceIdPriceMap Field Functions 
    bool hasRefundInstanceIdPriceMap() const { return this->refundInstanceIdPriceMap_ != nullptr;};
    void deleteRefundInstanceIdPriceMap() { this->refundInstanceIdPriceMap_ = nullptr;};
    inline const map<string, float> & refundInstanceIdPriceMap() const { DARABONBA_PTR_GET_CONST(refundInstanceIdPriceMap_, map<string, float>) };
    inline map<string, float> refundInstanceIdPriceMap() { DARABONBA_PTR_GET(refundInstanceIdPriceMap_, map<string, float>) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setRefundInstanceIdPriceMap(const map<string, float> & refundInstanceIdPriceMap) { DARABONBA_PTR_SET_VALUE(refundInstanceIdPriceMap_, refundInstanceIdPriceMap) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setRefundInstanceIdPriceMap(map<string, float> && refundInstanceIdPriceMap) { DARABONBA_PTR_SET_RVALUE(refundInstanceIdPriceMap_, refundInstanceIdPriceMap) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline float refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setRefundPrice(float refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<float> discountPrice_ = nullptr;
    std::shared_ptr<float> originalPrice_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails>> priceDetails_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMultiPriceResponseBodyPriceInfoPricePromotions>> promotions_ = nullptr;
    std::shared_ptr<map<string, float>> refundInstanceIdPriceMap_ = nullptr;
    std::shared_ptr<float> refundPrice_ = nullptr;
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
