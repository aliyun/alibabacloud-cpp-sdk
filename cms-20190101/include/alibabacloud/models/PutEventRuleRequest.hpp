// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEventRuleRequestEventPattern.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventPattern, eventPattern_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    PutEventRuleRequest() = default ;
    PutEventRuleRequest(const PutEventRuleRequest &) = default ;
    PutEventRuleRequest(PutEventRuleRequest &&) = default ;
    PutEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleRequest() = default ;
    PutEventRuleRequest& operator=(const PutEventRuleRequest &) = default ;
    PutEventRuleRequest& operator=(PutEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventPattern_ != nullptr && this->eventType_ != nullptr && this->groupId_ != nullptr && this->regionId_ != nullptr && this->ruleName_ != nullptr
        && this->silenceTime_ != nullptr && this->state_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PutEventRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventPattern Field Functions 
    bool hasEventPattern() const { return this->eventPattern_ != nullptr;};
    void deleteEventPattern() { this->eventPattern_ = nullptr;};
    inline const vector<PutEventRuleRequestEventPattern> & eventPattern() const { DARABONBA_PTR_GET_CONST(eventPattern_, vector<PutEventRuleRequestEventPattern>) };
    inline vector<PutEventRuleRequestEventPattern> eventPattern() { DARABONBA_PTR_GET(eventPattern_, vector<PutEventRuleRequestEventPattern>) };
    inline PutEventRuleRequest& setEventPattern(const vector<PutEventRuleRequestEventPattern> & eventPattern) { DARABONBA_PTR_SET_VALUE(eventPattern_, eventPattern) };
    inline PutEventRuleRequest& setEventPattern(vector<PutEventRuleRequestEventPattern> && eventPattern) { DARABONBA_PTR_SET_RVALUE(eventPattern_, eventPattern) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline PutEventRuleRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutEventRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutEventRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline PutEventRuleRequest& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline PutEventRuleRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The description of the event-triggered alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<PutEventRuleRequestEventPattern>> eventPattern_ = nullptr;
    // The type of the event-triggered alert rule. Valid values:
    // 
    // *   SYSTEM: system event-triggered alert rule
    // *   CUSTOM: custom event-triggered alert rule
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the application group to which the event-triggered alert rule belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the event-triggered alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met. Unit: seconds.
    std::shared_ptr<int64_t> silenceTime_ = nullptr;
    // The status of the event-triggered alert rule. Valid values:
    // 
    // *   ENABLED: enabled
    // *   DISABLED: disabled
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
