// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoPrice.hpp>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeInstanceModificationPriceResponseBodyPriceInfo() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfo(const DescribeInstanceModificationPriceResponseBodyPriceInfo &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfo(DescribeInstanceModificationPriceResponseBodyPriceInfo &&) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceResponseBodyPriceInfo() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfo& operator=(const DescribeInstanceModificationPriceResponseBodyPriceInfo &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfo& operator=(DescribeInstanceModificationPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr
        && return this->rules_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice) };
    inline Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfo& setPrice(const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfo& setPrice(Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules) };
    inline Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfo& setRules(const Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfo& setRules(Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price.
    std::shared_ptr<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoPrice> price_ = nullptr;
    // The information about the promotion rules.
    std::shared_ptr<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
