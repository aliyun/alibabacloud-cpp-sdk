// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPROMOTIONRULESPROMOTIONRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPROMOTIONRULESPROMOTIONRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceResponseBodyPromotionRulesPromotionRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPromotionRulesPromotionRule& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPromotionRulesPromotionRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribePriceResponseBodyPromotionRulesPromotionRule() = default ;
    DescribePriceResponseBodyPromotionRulesPromotionRule(const DescribePriceResponseBodyPromotionRulesPromotionRule &) = default ;
    DescribePriceResponseBodyPromotionRulesPromotionRule(DescribePriceResponseBodyPromotionRulesPromotionRule &&) = default ;
    DescribePriceResponseBodyPromotionRulesPromotionRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPromotionRulesPromotionRule() = default ;
    DescribePriceResponseBodyPromotionRulesPromotionRule& operator=(const DescribePriceResponseBodyPromotionRulesPromotionRule &) = default ;
    DescribePriceResponseBodyPromotionRulesPromotionRule& operator=(DescribePriceResponseBodyPromotionRulesPromotionRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ruleId_ != nullptr && this->title_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePriceResponseBodyPromotionRulesPromotionRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribePriceResponseBodyPromotionRulesPromotionRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribePriceResponseBodyPromotionRulesPromotionRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
