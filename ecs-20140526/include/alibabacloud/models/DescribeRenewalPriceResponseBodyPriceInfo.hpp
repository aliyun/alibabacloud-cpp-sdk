// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoPrice.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
    virtual bool empty() const override { return this->price_ == nullptr
        && return this->rules_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribeRenewalPriceResponseBodyPriceInfoPrice) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribeRenewalPriceResponseBodyPriceInfoPrice) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setPrice(const Models::DescribeRenewalPriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setPrice(Models::DescribeRenewalPriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::DescribeRenewalPriceResponseBodyPriceInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::DescribeRenewalPriceResponseBodyPriceInfoRules) };
    inline Models::DescribeRenewalPriceResponseBodyPriceInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::DescribeRenewalPriceResponseBodyPriceInfoRules) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setRules(const Models::DescribeRenewalPriceResponseBodyPriceInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRenewalPriceResponseBodyPriceInfo& setRules(Models::DescribeRenewalPriceResponseBodyPriceInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoPrice> price_ = nullptr;
    // The information about the promotion rules.
    std::shared_ptr<Models::DescribeRenewalPriceResponseBodyPriceInfoRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
