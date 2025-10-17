// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(SubRules, subRules_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(SubRules, subRules_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &&) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& operator=(const DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& operator=(DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo &&) = default ;
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
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // subRules Field Functions 
    bool hasSubRules() const { return this->subRules_ != nullptr;};
    void deleteSubRules() { this->subRules_ = nullptr;};
    inline const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules & subRules() const { DARABONBA_PTR_GET_CONST(subRules_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules) };
    inline Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules subRules() { DARABONBA_PTR_GET(subRules_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setSubRules(const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules & subRules) { DARABONBA_PTR_SET_VALUE(subRules_, subRules) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setSubRules(Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules && subRules) { DARABONBA_PTR_SET_RVALUE(subRules_, subRules) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


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
    // The pricing rules.
    std::shared_ptr<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules> subRules_ = nullptr;
    // The transaction price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
