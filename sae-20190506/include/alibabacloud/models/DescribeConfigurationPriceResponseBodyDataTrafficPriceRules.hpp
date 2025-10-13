// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATATRAFFICPRICERULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATATRAFFICPRICERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataTrafficPriceRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
    };
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules() = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules(const DescribeConfigurationPriceResponseBodyDataTrafficPriceRules &) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules(DescribeConfigurationPriceResponseBodyDataTrafficPriceRules &&) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataTrafficPriceRules() = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& operator=(const DescribeConfigurationPriceResponseBodyDataTrafficPriceRules &) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& operator=(DescribeConfigurationPriceResponseBodyDataTrafficPriceRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->ruleDescId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleDescId Field Functions 
    bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
    void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
    inline float ruleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPriceRules& setRuleDescId(float ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


  protected:
    // The name of the discount rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the discount rule.
    std::shared_ptr<float> ruleDescId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
