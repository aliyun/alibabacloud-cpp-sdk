// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPrice.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRelatedPrice.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(RelatedPrice, relatedPrice_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(RelatedPrice, relatedPrice_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
    virtual bool empty() const override { this->price_ != nullptr
        && this->relatedPrice_ != nullptr && this->rules_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline Models::DescribePriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(const Models::DescribePriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(Models::DescribePriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // relatedPrice Field Functions 
    bool hasRelatedPrice() const { return this->relatedPrice_ != nullptr;};
    void deleteRelatedPrice() { this->relatedPrice_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoRelatedPrice & relatedPrice() const { DARABONBA_PTR_GET_CONST(relatedPrice_, Models::DescribePriceResponseBodyPriceInfoRelatedPrice) };
    inline Models::DescribePriceResponseBodyPriceInfoRelatedPrice relatedPrice() { DARABONBA_PTR_GET(relatedPrice_, Models::DescribePriceResponseBodyPriceInfoRelatedPrice) };
    inline DescribePriceResponseBodyPriceInfo& setRelatedPrice(const Models::DescribePriceResponseBodyPriceInfoRelatedPrice & relatedPrice) { DARABONBA_PTR_SET_VALUE(relatedPrice_, relatedPrice) };
    inline DescribePriceResponseBodyPriceInfo& setRelatedPrice(Models::DescribePriceResponseBodyPriceInfoRelatedPrice && relatedPrice) { DARABONBA_PTR_SET_RVALUE(relatedPrice_, relatedPrice) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::DescribePriceResponseBodyPriceInfoRules) };
    inline Models::DescribePriceResponseBodyPriceInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::DescribePriceResponseBodyPriceInfoRules) };
    inline DescribePriceResponseBodyPriceInfo& setRules(const Models::DescribePriceResponseBodyPriceInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribePriceResponseBodyPriceInfo& setRules(Models::DescribePriceResponseBodyPriceInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoPrice> price_ = nullptr;
    // The related price.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoRelatedPrice> relatedPrice_ = nullptr;
    // The information about the promotion rules.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
