// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& obj) { 
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& obj) { 
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& operator=(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventPattern_ != nullptr; };
    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline const vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern> & eventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern>) };
    inline vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern> eventPattern() { DARABONBA_PTR_GET(eventPattern_, vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern>) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& setEventPattern(const vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern> & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern& setEventPattern(vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern> && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern>> eventPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
