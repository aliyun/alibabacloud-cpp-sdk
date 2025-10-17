// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(SubRules, subRules_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(SubRules, subRules_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &&) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& operator=(const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& operator=(DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discountPrice_ == nullptr
        && return this->originalPrice_ == nullptr && return this->resource_ == nullptr && return this->subRules_ == nullptr && return this->tradePrice_ == nullptr; };
    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float discountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // subRules Field Functions 
    bool hasSubRules() const { return this->subRules_ != nullptr;};
    void deleteSubRules() { this->subRules_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules & subRules() const { DARABONBA_PTR_GET_CONST(subRules_, Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules) };
    inline Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules subRules() { DARABONBA_PTR_GET(subRules_, Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setSubRules(const Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules & subRules) { DARABONBA_PTR_SET_VALUE(subRules_, subRules) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setSubRules(Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules && subRules) { DARABONBA_PTR_SET_RVALUE(subRules_, subRules) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The discount.
    std::shared_ptr<float> discountPrice_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The resource name. Valid values:
    // 
    // *   InstanceType
    // *   bandwidth
    // *   image
    // *   SystemDisk
    // *   DataDisk
    std::shared_ptr<string> resource_ = nullptr;
    // Details about the pricing rules.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules> subRules_ = nullptr;
    // The transaction price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
