// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICERESPONSEBODYPRICE_HPP_
#define ALIBABACLOUD_MODELS_GETPRICERESPONSEBODYPRICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPriceResponseBodyPriceModuleDetails.hpp>
#include <alibabacloud/models/GetPriceResponseBodyPricePromotionDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceResponseBodyPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceResponseBodyPrice& obj) { 
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(discountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(moduleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(promotionDetails, promotionDetails_);
      DARABONBA_PTR_TO_JSON(tradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceResponseBodyPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(discountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(moduleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(promotionDetails, promotionDetails_);
      DARABONBA_PTR_FROM_JSON(tradePrice, tradePrice_);
    };
    GetPriceResponseBodyPrice() = default ;
    GetPriceResponseBodyPrice(const GetPriceResponseBodyPrice &) = default ;
    GetPriceResponseBodyPrice(GetPriceResponseBodyPrice &&) = default ;
    GetPriceResponseBodyPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceResponseBodyPrice() = default ;
    GetPriceResponseBodyPrice& operator=(const GetPriceResponseBodyPrice &) = default ;
    GetPriceResponseBodyPrice& operator=(GetPriceResponseBodyPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->discountPrice_ != nullptr && this->moduleDetails_ != nullptr && this->originalPrice_ != nullptr && this->promotionDetails_ != nullptr && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetPriceResponseBodyPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline GetPriceResponseBodyPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const vector<Models::GetPriceResponseBodyPriceModuleDetails> & moduleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<Models::GetPriceResponseBodyPriceModuleDetails>) };
    inline vector<Models::GetPriceResponseBodyPriceModuleDetails> moduleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<Models::GetPriceResponseBodyPriceModuleDetails>) };
    inline GetPriceResponseBodyPrice& setModuleDetails(const vector<Models::GetPriceResponseBodyPriceModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline GetPriceResponseBodyPrice& setModuleDetails(vector<Models::GetPriceResponseBodyPriceModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline GetPriceResponseBodyPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotionDetails Field Functions 
    bool hasPromotionDetails() const { return this->promotionDetails_ != nullptr;};
    void deletePromotionDetails() { this->promotionDetails_ = nullptr;};
    inline const vector<Models::GetPriceResponseBodyPricePromotionDetails> & promotionDetails() const { DARABONBA_PTR_GET_CONST(promotionDetails_, vector<Models::GetPriceResponseBodyPricePromotionDetails>) };
    inline vector<Models::GetPriceResponseBodyPricePromotionDetails> promotionDetails() { DARABONBA_PTR_GET(promotionDetails_, vector<Models::GetPriceResponseBodyPricePromotionDetails>) };
    inline GetPriceResponseBodyPrice& setPromotionDetails(const vector<Models::GetPriceResponseBodyPricePromotionDetails> & promotionDetails) { DARABONBA_PTR_SET_VALUE(promotionDetails_, promotionDetails) };
    inline GetPriceResponseBodyPrice& setPromotionDetails(vector<Models::GetPriceResponseBodyPricePromotionDetails> && promotionDetails) { DARABONBA_PTR_SET_RVALUE(promotionDetails_, promotionDetails) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline GetPriceResponseBodyPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency type. Valid values: CNY: Chinese Yuan. USD: US dollar. JPY: Japanese Yen.
    std::shared_ptr<string> currency_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The order details of the pricing module.
    std::shared_ptr<vector<Models::GetPriceResponseBodyPriceModuleDetails>> moduleDetails_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The details of the promotion.
    std::shared_ptr<vector<Models::GetPriceResponseBodyPricePromotionDetails>> promotionDetails_ = nullptr;
    // The discount price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
