// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRulesEventRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRule() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRule(const DescribeEventRuleListResponseBodyEventRulesEventRule &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRule(DescribeEventRuleListResponseBodyEventRulesEventRule &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRule() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRule& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRule &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRule& operator=(DescribeEventRuleListResponseBodyEventRulesEventRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventPattern_ != nullptr && this->eventType_ != nullptr && this->groupId_ != nullptr && this->name_ != nullptr && this->silenceTime_ != nullptr
        && this->state_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern & eventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern eventPattern() { DARABONBA_PTR_GET(eventPattern_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setEventPattern(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setEventPattern(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRule& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The description of the event-triggered alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // The mode of the event-triggered alert rule.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPattern> eventPattern_ = nullptr;
    // The type of the event-triggered alert rule. Valid values:
    // 
    // *   SYSTEM: system event-triggered alert rule
    // *   CUSTOM: custom event-triggered alert rule
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the event-triggered alert rule.
    std::shared_ptr<string> name_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met.
    std::shared_ptr<int64_t> silenceTime_ = nullptr;
    // The status of the event-triggered alert rule. Valid values:
    // 
    // *   ENABLED
    // *   DISABLED
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
