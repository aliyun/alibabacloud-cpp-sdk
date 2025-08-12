// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPattern.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleAttributeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeEventRuleAttributeResponseBodyResult() = default ;
    DescribeEventRuleAttributeResponseBodyResult(const DescribeEventRuleAttributeResponseBodyResult &) = default ;
    DescribeEventRuleAttributeResponseBodyResult(DescribeEventRuleAttributeResponseBodyResult &&) = default ;
    DescribeEventRuleAttributeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResult() = default ;
    DescribeEventRuleAttributeResponseBodyResult& operator=(const DescribeEventRuleAttributeResponseBodyResult &) = default ;
    DescribeEventRuleAttributeResponseBodyResult& operator=(DescribeEventRuleAttributeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventPattern_ != nullptr && this->eventType_ != nullptr && this->groupId_ != nullptr && this->name_ != nullptr && this->state_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventRuleAttributeResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPattern & eventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, Models::DescribeEventRuleAttributeResponseBodyResultEventPattern) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPattern eventPattern() { DARABONBA_PTR_GET(eventPattern_, Models::DescribeEventRuleAttributeResponseBodyResultEventPattern) };
    inline DescribeEventRuleAttributeResponseBodyResult& setEventPattern(const Models::DescribeEventRuleAttributeResponseBodyResultEventPattern & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
    inline DescribeEventRuleAttributeResponseBodyResult& setEventPattern(Models::DescribeEventRuleAttributeResponseBodyResultEventPattern && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventRuleAttributeResponseBodyResult& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeEventRuleAttributeResponseBodyResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventRuleAttributeResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEventRuleAttributeResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The description of the event-triggered alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // The event pattern. This parameter describes the trigger conditions of an event.
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPattern> eventPattern_ = nullptr;
    // The event type. Valid values:
    // 
    // *   SYSTEM: system event
    // *   CUSTOM: custom event
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the event-triggered alert rule.
    std::shared_ptr<string> name_ = nullptr;
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
