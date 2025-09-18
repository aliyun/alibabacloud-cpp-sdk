// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PromotionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class PriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PromotionResults, promotionResults_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SpotInstanceTypeOriginalPrice, spotInstanceTypeOriginalPrice_);
      DARABONBA_PTR_TO_JSON(SpotInstanceTypePrice, spotInstanceTypePrice_);
      DARABONBA_PTR_TO_JSON(SpotOriginalPrice, spotOriginalPrice_);
      DARABONBA_PTR_TO_JSON(SpotPrice, spotPrice_);
      DARABONBA_PTR_TO_JSON(TaxPrice, taxPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PromotionResults, promotionResults_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceTypeOriginalPrice, spotInstanceTypeOriginalPrice_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceTypePrice, spotInstanceTypePrice_);
      DARABONBA_PTR_FROM_JSON(SpotOriginalPrice, spotOriginalPrice_);
      DARABONBA_PTR_FROM_JSON(SpotPrice, spotPrice_);
      DARABONBA_PTR_FROM_JSON(TaxPrice, taxPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    PriceInfo() = default ;
    PriceInfo(const PriceInfo &) = default ;
    PriceInfo(PriceInfo &&) = default ;
    PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceInfo() = default ;
    PriceInfo& operator=(const PriceInfo &) = default ;
    PriceInfo& operator=(PriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->originalPrice_ != nullptr && this->payType_ != nullptr && this->promotionResults_ != nullptr && this->resourceType_ != nullptr
        && this->spotInstanceTypeOriginalPrice_ != nullptr && this->spotInstanceTypePrice_ != nullptr && this->spotOriginalPrice_ != nullptr && this->spotPrice_ != nullptr && this->taxPrice_ != nullptr
        && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline string discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
    inline PriceInfo& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline string originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, "") };
    inline PriceInfo& setOriginalPrice(string originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline PriceInfo& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // promotionResults Field Functions 
    bool hasPromotionResults() const { return this->promotionResults_ != nullptr;};
    void deletePromotionResults() { this->promotionResults_ = nullptr;};
    inline const vector<PromotionInfo> & promotionResults() const { DARABONBA_PTR_GET_CONST(promotionResults_, vector<PromotionInfo>) };
    inline vector<PromotionInfo> promotionResults() { DARABONBA_PTR_GET(promotionResults_, vector<PromotionInfo>) };
    inline PriceInfo& setPromotionResults(const vector<PromotionInfo> & promotionResults) { DARABONBA_PTR_SET_VALUE(promotionResults_, promotionResults) };
    inline PriceInfo& setPromotionResults(vector<PromotionInfo> && promotionResults) { DARABONBA_PTR_SET_RVALUE(promotionResults_, promotionResults) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PriceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spotInstanceTypeOriginalPrice Field Functions 
    bool hasSpotInstanceTypeOriginalPrice() const { return this->spotInstanceTypeOriginalPrice_ != nullptr;};
    void deleteSpotInstanceTypeOriginalPrice() { this->spotInstanceTypeOriginalPrice_ = nullptr;};
    inline string spotInstanceTypeOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceTypeOriginalPrice_, "") };
    inline PriceInfo& setSpotInstanceTypeOriginalPrice(string spotInstanceTypeOriginalPrice) { DARABONBA_PTR_SET_VALUE(spotInstanceTypeOriginalPrice_, spotInstanceTypeOriginalPrice) };


    // spotInstanceTypePrice Field Functions 
    bool hasSpotInstanceTypePrice() const { return this->spotInstanceTypePrice_ != nullptr;};
    void deleteSpotInstanceTypePrice() { this->spotInstanceTypePrice_ = nullptr;};
    inline string spotInstanceTypePrice() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceTypePrice_, "") };
    inline PriceInfo& setSpotInstanceTypePrice(string spotInstanceTypePrice) { DARABONBA_PTR_SET_VALUE(spotInstanceTypePrice_, spotInstanceTypePrice) };


    // spotOriginalPrice Field Functions 
    bool hasSpotOriginalPrice() const { return this->spotOriginalPrice_ != nullptr;};
    void deleteSpotOriginalPrice() { this->spotOriginalPrice_ = nullptr;};
    inline string spotOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(spotOriginalPrice_, "") };
    inline PriceInfo& setSpotOriginalPrice(string spotOriginalPrice) { DARABONBA_PTR_SET_VALUE(spotOriginalPrice_, spotOriginalPrice) };


    // spotPrice Field Functions 
    bool hasSpotPrice() const { return this->spotPrice_ != nullptr;};
    void deleteSpotPrice() { this->spotPrice_ = nullptr;};
    inline string spotPrice() const { DARABONBA_PTR_GET_DEFAULT(spotPrice_, "") };
    inline PriceInfo& setSpotPrice(string spotPrice) { DARABONBA_PTR_SET_VALUE(spotPrice_, spotPrice) };


    // taxPrice Field Functions 
    bool hasTaxPrice() const { return this->taxPrice_ != nullptr;};
    void deleteTaxPrice() { this->taxPrice_ = nullptr;};
    inline string taxPrice() const { DARABONBA_PTR_GET_DEFAULT(taxPrice_, "") };
    inline PriceInfo& setTaxPrice(string taxPrice) { DARABONBA_PTR_SET_VALUE(taxPrice_, taxPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline string tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, "") };
    inline PriceInfo& setTradePrice(string tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> discountPrice_ = nullptr;
    std::shared_ptr<string> originalPrice_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<vector<PromotionInfo>> promotionResults_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> spotInstanceTypeOriginalPrice_ = nullptr;
    std::shared_ptr<string> spotInstanceTypePrice_ = nullptr;
    std::shared_ptr<string> spotOriginalPrice_ = nullptr;
    std::shared_ptr<string> spotPrice_ = nullptr;
    std::shared_ptr<string> taxPrice_ = nullptr;
    std::shared_ptr<string> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
