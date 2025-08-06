// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoPrice() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPrice(const DescribeRenewalPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPrice(DescribeRenewalPriceResponseBodyPriceInfoPrice &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoPrice() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPrice& operator=(const DescribeRenewalPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPrice& operator=(DescribeRenewalPriceResponseBodyPriceInfoPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->detailInfos_ != nullptr && this->discountPrice_ != nullptr && this->originalPrice_ != nullptr && this->tradePrice_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // detailInfos Field Functions 
    bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
    void deleteDetailInfos() { this->detailInfos_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos & detailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos detailInfos() { DARABONBA_PTR_GET(detailInfos_, Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setDetailInfos(const Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setDetailInfos(Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency unit.
    // 
    // Alibaba Cloud China site (aliyun.com): CNY.
    // 
    // Alibaba Cloud International site (alibabacloud.com): USD.
    std::shared_ptr<string> currency_ = nullptr;
    // Details about the resource prices.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfos> detailInfos_ = nullptr;
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The transaction price, which is equal to the original price minus the discount.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
