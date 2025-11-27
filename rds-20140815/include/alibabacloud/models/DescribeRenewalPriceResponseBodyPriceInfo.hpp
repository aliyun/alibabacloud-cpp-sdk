// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoActivityInfo.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoCoupons.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoRuleIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityInfo, activityInfo_);
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityInfo, activityInfo_);
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeRenewalPriceResponseBodyPriceInfo() = default ;
    DescribeRenewalPriceResponseBodyPriceInfo(const DescribeRenewalPriceResponseBodyPriceInfo &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfo(DescribeRenewalPriceResponseBodyPriceInfo &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfo() = default ;
    DescribeRenewalPriceResponseBodyPriceInfo& operator=(const DescribeRenewalPriceResponseBodyPriceInfo &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfo& operator=(DescribeRenewalPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityInfo_ == nullptr
        && return this->coupons_ == nullptr && return this->currency_ == nullptr && return this->discountPrice_ == nullptr && return this->originalPrice_ == nullptr && return this->ruleIds_ == nullptr
        && return this->tradePrice_ == nullptr; };
    // activityInfo Field Functions 
    bool hasActivityInfo() const { return this->activityInfo_ != nullptr;};
    void deleteActivityInfo() { this->activityInfo_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo & activityInfo() const { DARABONBA_PTR_GET_CONST(activityInfo_, Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo activityInfo() { DARABONBA_PTR_GET(activityInfo_, Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setActivityInfo(const Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo & activityInfo) { DARABONBA_PTR_SET_VALUE(activityInfo_, activityInfo) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setActivityInfo(Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo && activityInfo) { DARABONBA_PTR_SET_RVALUE(activityInfo_, activityInfo) };


    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons & coupons() const { DARABONBA_PTR_GET_CONST(coupons_, Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons coupons() { DARABONBA_PTR_GET(coupons_, Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setCoupons(const Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setCoupons(Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds ruleIds() { DARABONBA_PTR_GET(ruleIds_, Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setRuleIds(const Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setRuleIds(Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The information about the promotion.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoActivityInfo> activityInfo_ = nullptr;
    // An array that consists of information about the coupon.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoCoupons> coupons_ = nullptr;
    // The currency unit.
    std::shared_ptr<string> currency_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // An array that consists of the ID of the promotion rule.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoRuleIds> ruleIds_ = nullptr;
    // The transaction price, which is equal to the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
