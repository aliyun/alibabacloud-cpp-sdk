// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoActivityInfo.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoCoupons.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRuleIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityInfo, activityInfo_);
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_ANY_TO_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_TO_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityInfo, activityInfo_);
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_ANY_FROM_JSON(OrderLines, orderLines_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_FROM_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo(DescribePriceResponseBodyPriceInfo &&) = default ;
    DescribePriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo& operator=(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo& operator=(DescribePriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityInfo_ == nullptr
        && return this->coupons_ == nullptr && return this->currency_ == nullptr && return this->discountPrice_ == nullptr && return this->orderLines_ == nullptr && return this->originalPrice_ == nullptr
        && return this->ruleIds_ == nullptr && return this->tradeMaxRCUAmount_ == nullptr && return this->tradeMinRCUAmount_ == nullptr && return this->tradePrice_ == nullptr; };
    // activityInfo Field Functions 
    bool hasActivityInfo() const { return this->activityInfo_ != nullptr;};
    void deleteActivityInfo() { this->activityInfo_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoActivityInfo & activityInfo() const { DARABONBA_PTR_GET_CONST(activityInfo_, Models::DescribePriceResponseBodyPriceInfoActivityInfo) };
    inline Models::DescribePriceResponseBodyPriceInfoActivityInfo activityInfo() { DARABONBA_PTR_GET(activityInfo_, Models::DescribePriceResponseBodyPriceInfoActivityInfo) };
    inline DescribePriceResponseBodyPriceInfo& setActivityInfo(const Models::DescribePriceResponseBodyPriceInfoActivityInfo & activityInfo) { DARABONBA_PTR_SET_VALUE(activityInfo_, activityInfo) };
    inline DescribePriceResponseBodyPriceInfo& setActivityInfo(Models::DescribePriceResponseBodyPriceInfoActivityInfo && activityInfo) { DARABONBA_PTR_SET_RVALUE(activityInfo_, activityInfo) };


    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoCoupons & coupons() const { DARABONBA_PTR_GET_CONST(coupons_, Models::DescribePriceResponseBodyPriceInfoCoupons) };
    inline Models::DescribePriceResponseBodyPriceInfoCoupons coupons() { DARABONBA_PTR_GET(coupons_, Models::DescribePriceResponseBodyPriceInfoCoupons) };
    inline DescribePriceResponseBodyPriceInfo& setCoupons(const Models::DescribePriceResponseBodyPriceInfoCoupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline DescribePriceResponseBodyPriceInfo& setCoupons(Models::DescribePriceResponseBodyPriceInfoCoupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBodyPriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // orderLines Field Functions 
    bool hasOrderLines() const { return this->orderLines_ != nullptr;};
    void deleteOrderLines() { this->orderLines_ = nullptr;};
    inline     const Darabonba::Json & orderLines() const { DARABONBA_GET(orderLines_) };
    Darabonba::Json & orderLines() { DARABONBA_GET(orderLines_) };
    inline DescribePriceResponseBodyPriceInfo& setOrderLines(const Darabonba::Json & orderLines) { DARABONBA_SET_VALUE(orderLines_, orderLines) };
    inline DescribePriceResponseBodyPriceInfo& setOrderLines(Darabonba::Json & orderLines) { DARABONBA_SET_RVALUE(orderLines_, orderLines) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoRuleIds & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, Models::DescribePriceResponseBodyPriceInfoRuleIds) };
    inline Models::DescribePriceResponseBodyPriceInfoRuleIds ruleIds() { DARABONBA_PTR_GET(ruleIds_, Models::DescribePriceResponseBodyPriceInfoRuleIds) };
    inline DescribePriceResponseBodyPriceInfo& setRuleIds(const Models::DescribePriceResponseBodyPriceInfoRuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DescribePriceResponseBodyPriceInfo& setRuleIds(Models::DescribePriceResponseBodyPriceInfoRuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // tradeMaxRCUAmount Field Functions 
    bool hasTradeMaxRCUAmount() const { return this->tradeMaxRCUAmount_ != nullptr;};
    void deleteTradeMaxRCUAmount() { this->tradeMaxRCUAmount_ = nullptr;};
    inline float tradeMaxRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMaxRCUAmount_, 0.0) };
    inline DescribePriceResponseBodyPriceInfo& setTradeMaxRCUAmount(float tradeMaxRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMaxRCUAmount_, tradeMaxRCUAmount) };


    // tradeMinRCUAmount Field Functions 
    bool hasTradeMinRCUAmount() const { return this->tradeMinRCUAmount_ != nullptr;};
    void deleteTradeMinRCUAmount() { this->tradeMinRCUAmount_ = nullptr;};
    inline float tradeMinRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMinRCUAmount_, 0.0) };
    inline DescribePriceResponseBodyPriceInfo& setTradeMinRCUAmount(float tradeMinRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMinRCUAmount_, tradeMinRCUAmount) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The information about the promotion.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoActivityInfo> activityInfo_ = nullptr;
    // The information about the coupon.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoCoupons> coupons_ = nullptr;
    // The currency unit.
    std::shared_ptr<string> currency_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The order information.
    Darabonba::Json orderLines_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // An array that consists of the ID of the promotion rule.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoRuleIds> ruleIds_ = nullptr;
    // The estimated hourly cost that is calculated based on the maximum number of RCUs you specify.
    std::shared_ptr<float> tradeMaxRCUAmount_ = nullptr;
    // The estimated hourly cost that is calculated based on the minimum number of RCUs you specify.
    std::shared_ptr<float> tradeMinRCUAmount_ = nullptr;
    // The transaction price, which is equal to the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
