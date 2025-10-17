// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORELATEDPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORELATEDPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoRelatedPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoRelatedPrice& obj) { 
      DARABONBA_PTR_TO_JSON(MarketplaceImagePrice, marketplaceImagePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoRelatedPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(MarketplaceImagePrice, marketplaceImagePrice_);
    };
    DescribePriceResponseBodyPriceInfoRelatedPrice() = default ;
    DescribePriceResponseBodyPriceInfoRelatedPrice(const DescribePriceResponseBodyPriceInfoRelatedPrice &) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPrice(DescribePriceResponseBodyPriceInfoRelatedPrice &&) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoRelatedPrice() = default ;
    DescribePriceResponseBodyPriceInfoRelatedPrice& operator=(const DescribePriceResponseBodyPriceInfoRelatedPrice &) = default ;
    DescribePriceResponseBodyPriceInfoRelatedPrice& operator=(DescribePriceResponseBodyPriceInfoRelatedPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marketplaceImagePrice_ == nullptr; };
    // marketplaceImagePrice Field Functions 
    bool hasMarketplaceImagePrice() const { return this->marketplaceImagePrice_ != nullptr;};
    void deleteMarketplaceImagePrice() { this->marketplaceImagePrice_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice & marketplaceImagePrice() const { DARABONBA_PTR_GET_CONST(marketplaceImagePrice_, Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice) };
    inline Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice marketplaceImagePrice() { DARABONBA_PTR_GET(marketplaceImagePrice_, Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice) };
    inline DescribePriceResponseBodyPriceInfoRelatedPrice& setMarketplaceImagePrice(const Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice & marketplaceImagePrice) { DARABONBA_PTR_SET_VALUE(marketplaceImagePrice_, marketplaceImagePrice) };
    inline DescribePriceResponseBodyPriceInfoRelatedPrice& setMarketplaceImagePrice(Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice && marketplaceImagePrice) { DARABONBA_PTR_SET_RVALUE(marketplaceImagePrice_, marketplaceImagePrice) };


  protected:
    // The Alibaba Cloud Marketplace image price.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoRelatedPriceMarketplaceImagePrice> marketplaceImagePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
