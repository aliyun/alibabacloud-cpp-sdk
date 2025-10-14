// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNEVENTTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERNEVENTTYPELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& operator=(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventTypeList_ == nullptr; };
    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const vector<string> & eventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<string>) };
    inline vector<string> eventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<string>) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& setEventTypeList(const vector<string> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList& setEventTypeList(vector<string> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


  protected:
    std::shared_ptr<vector<string>> eventTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
