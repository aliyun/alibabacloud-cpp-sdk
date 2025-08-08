// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILSPRICEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFOPRICEPRICEDETAILSPRICEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail &&) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail() = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& operator=(const DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail &) = default ;
    DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& operator=(DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountPrice_ != nullptr
        && this->originalPrice_ != nullptr && this->resourceType_ != nullptr && this->tradePrice_ != nullptr; };
    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<float> discountPrice_ = nullptr;
    std::shared_ptr<float> originalPrice_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
