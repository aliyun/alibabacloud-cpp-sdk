// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRules& obj) { 
      DARABONBA_PTR_TO_JSON(EventRule, eventRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRules& obj) { 
      DARABONBA_PTR_FROM_JSON(EventRule, eventRule_);
    };
    DescribeEventRuleListResponseBodyEventRules() = default ;
    DescribeEventRuleListResponseBodyEventRules(const DescribeEventRuleListResponseBodyEventRules &) = default ;
    DescribeEventRuleListResponseBodyEventRules(DescribeEventRuleListResponseBodyEventRules &&) = default ;
    DescribeEventRuleListResponseBodyEventRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRules() = default ;
    DescribeEventRuleListResponseBodyEventRules& operator=(const DescribeEventRuleListResponseBodyEventRules &) = default ;
    DescribeEventRuleListResponseBodyEventRules& operator=(DescribeEventRuleListResponseBodyEventRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventRule_ == nullptr; };
    // eventRule Field Functions 
    bool hasEventRule() const { return this->eventRule_ != nullptr;};
    void deleteEventRule() { this->eventRule_ = nullptr;};
    inline const vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule> & eventRule() const { DARABONBA_PTR_GET_CONST(eventRule_, vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule>) };
    inline vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule> eventRule() { DARABONBA_PTR_GET(eventRule_, vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule>) };
    inline DescribeEventRuleListResponseBodyEventRules& setEventRule(const vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule> & eventRule) { DARABONBA_PTR_SET_VALUE(eventRule_, eventRule) };
    inline DescribeEventRuleListResponseBodyEventRules& setEventRule(vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule> && eventRule) { DARABONBA_PTR_SET_RVALUE(eventRule_, eventRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRule>> eventRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
