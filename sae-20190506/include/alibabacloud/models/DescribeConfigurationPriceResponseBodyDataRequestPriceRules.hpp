// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAREQUESTPRICERULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAREQUESTPRICERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataRequestPriceRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataRequestPriceRules& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataRequestPriceRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
    };
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules() = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules(const DescribeConfigurationPriceResponseBodyDataRequestPriceRules &) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules(DescribeConfigurationPriceResponseBodyDataRequestPriceRules &&) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataRequestPriceRules() = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules& operator=(const DescribeConfigurationPriceResponseBodyDataRequestPriceRules &) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPriceRules& operator=(DescribeConfigurationPriceResponseBodyDataRequestPriceRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ruleDescId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeConfigurationPriceResponseBodyDataRequestPriceRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleDescId Field Functions 
    bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
    void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
    inline int64_t ruleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
    inline DescribeConfigurationPriceResponseBodyDataRequestPriceRules& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


  protected:
    // The name of the discount rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the discount policy.
    std::shared_ptr<int64_t> ruleDescId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
