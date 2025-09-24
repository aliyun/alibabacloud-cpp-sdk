// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSubscriptionPriceResponseBodyDataModuleDetails.hpp>
#include <alibabacloud/models/GetSubscriptionPriceResponseBodyDataPromotionDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PromotionDetails, promotionDetails_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PromotionDetails, promotionDetails_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    GetSubscriptionPriceResponseBodyData() = default ;
    GetSubscriptionPriceResponseBodyData(const GetSubscriptionPriceResponseBodyData &) = default ;
    GetSubscriptionPriceResponseBodyData(GetSubscriptionPriceResponseBodyData &&) = default ;
    GetSubscriptionPriceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBodyData() = default ;
    GetSubscriptionPriceResponseBodyData& operator=(const GetSubscriptionPriceResponseBodyData &) = default ;
    GetSubscriptionPriceResponseBodyData& operator=(GetSubscriptionPriceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->moduleDetails_ != nullptr && this->originalPrice_ != nullptr && this->promotionDetails_ != nullptr && this->quantity_ != nullptr
        && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetSubscriptionPriceResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline GetSubscriptionPriceResponseBodyData& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const Models::GetSubscriptionPriceResponseBodyDataModuleDetails & moduleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, Models::GetSubscriptionPriceResponseBodyDataModuleDetails) };
    inline Models::GetSubscriptionPriceResponseBodyDataModuleDetails moduleDetails() { DARABONBA_PTR_GET(moduleDetails_, Models::GetSubscriptionPriceResponseBodyDataModuleDetails) };
    inline GetSubscriptionPriceResponseBodyData& setModuleDetails(const Models::GetSubscriptionPriceResponseBodyDataModuleDetails & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline GetSubscriptionPriceResponseBodyData& setModuleDetails(Models::GetSubscriptionPriceResponseBodyDataModuleDetails && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline GetSubscriptionPriceResponseBodyData& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotionDetails Field Functions 
    bool hasPromotionDetails() const { return this->promotionDetails_ != nullptr;};
    void deletePromotionDetails() { this->promotionDetails_ = nullptr;};
    inline const Models::GetSubscriptionPriceResponseBodyDataPromotionDetails & promotionDetails() const { DARABONBA_PTR_GET_CONST(promotionDetails_, Models::GetSubscriptionPriceResponseBodyDataPromotionDetails) };
    inline Models::GetSubscriptionPriceResponseBodyDataPromotionDetails promotionDetails() { DARABONBA_PTR_GET(promotionDetails_, Models::GetSubscriptionPriceResponseBodyDataPromotionDetails) };
    inline GetSubscriptionPriceResponseBodyData& setPromotionDetails(const Models::GetSubscriptionPriceResponseBodyDataPromotionDetails & promotionDetails) { DARABONBA_PTR_SET_VALUE(promotionDetails_, promotionDetails) };
    inline GetSubscriptionPriceResponseBodyData& setPromotionDetails(Models::GetSubscriptionPriceResponseBodyDataPromotionDetails && promotionDetails) { DARABONBA_PTR_SET_RVALUE(promotionDetails_, promotionDetails) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetSubscriptionPriceResponseBodyData& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline GetSubscriptionPriceResponseBodyData& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The type of currency. Valid values:
    // 
    // *   CNY: Chinese Yuan
    // *   USD: US dollar
    // *   JPY: Japanese Yen
    std::shared_ptr<string> currency_ = nullptr;
    // The discount that was applied.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The price details of the pricing module.
    std::shared_ptr<Models::GetSubscriptionPriceResponseBodyDataModuleDetails> moduleDetails_ = nullptr;
    // The original price of the service.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The details of the discount.
    std::shared_ptr<Models::GetSubscriptionPriceResponseBodyDataPromotionDetails> promotionDetails_ = nullptr;
    // The quantity.
    std::shared_ptr<int32_t> quantity_ = nullptr;
    // The discount price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
