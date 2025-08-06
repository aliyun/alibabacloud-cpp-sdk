// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice(const DescribeInstanceModificationPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice(DescribeInstanceModificationPriceResponseBodyPriceInfoPrice &&) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceResponseBodyPriceInfoPrice() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& operator=(const DescribeInstanceModificationPriceResponseBodyPriceInfoPrice &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& operator=(DescribeInstanceModificationPriceResponseBodyPriceInfoPrice &&) = default ;
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
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // detailInfos Field Functions 
    bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
    void deleteDetailInfos() { this->detailInfos_ = nullptr;};
    inline const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos & detailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos) };
    inline Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos detailInfos() { DARABONBA_PTR_GET(detailInfos_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setDetailInfos(const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setDetailInfos(Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPrice& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency unit. Valid values:
    // 
    // *   Alibaba Cloud China site (aliyun.com): CNY
    // *   Alibaba Cloud International site (alibabacloud.com): USD
    std::shared_ptr<string> currency_ = nullptr;
    // The information about the price.
    // 
    // >  This parameter is returned only when ResourceType is set to instance.
    std::shared_ptr<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfos> detailInfos_ = nullptr;
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
