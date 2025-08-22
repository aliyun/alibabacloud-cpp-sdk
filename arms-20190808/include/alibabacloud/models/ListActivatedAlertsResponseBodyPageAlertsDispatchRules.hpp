// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGEALERTSDISPATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGEALERTSDISPATCHRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListActivatedAlertsResponseBodyPageAlertsDispatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActivatedAlertsResponseBodyPageAlertsDispatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListActivatedAlertsResponseBodyPageAlertsDispatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules() = default ;
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules(const ListActivatedAlertsResponseBodyPageAlertsDispatchRules &) = default ;
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules(ListActivatedAlertsResponseBodyPageAlertsDispatchRules &&) = default ;
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActivatedAlertsResponseBodyPageAlertsDispatchRules() = default ;
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules& operator=(const ListActivatedAlertsResponseBodyPageAlertsDispatchRules &) = default ;
    ListActivatedAlertsResponseBodyPageAlertsDispatchRules& operator=(ListActivatedAlertsResponseBodyPageAlertsDispatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleId_ != nullptr
        && this->ruleName_ != nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline ListActivatedAlertsResponseBodyPageAlertsDispatchRules& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListActivatedAlertsResponseBodyPageAlertsDispatchRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The ID of the notification policy.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
