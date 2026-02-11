// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTCUSTOMIZERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTCUSTOMIZERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostCustomizeRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostCustomizeRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertTypeMds, alertTypeMds_);
      DARABONBA_PTR_TO_JSON(AttCk, attCk_);
      DARABONBA_PTR_TO_JSON(EventTransferExt, eventTransferExt_);
      DARABONBA_PTR_TO_JSON(EventTransferSwitch, eventTransferSwitch_);
      DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(LogSourceMds, logSourceMds_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(LogTypeMds, logTypeMds_);
      DARABONBA_PTR_TO_JSON(QueryCycle, queryCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(RuleCondition, ruleCondition_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleGroup, ruleGroup_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleThreshold, ruleThreshold_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PostCustomizeRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertTypeMds, alertTypeMds_);
      DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
      DARABONBA_PTR_FROM_JSON(EventTransferExt, eventTransferExt_);
      DARABONBA_PTR_FROM_JSON(EventTransferSwitch, eventTransferSwitch_);
      DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(LogSourceMds, logSourceMds_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(LogTypeMds, logTypeMds_);
      DARABONBA_PTR_FROM_JSON(QueryCycle, queryCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(RuleCondition, ruleCondition_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleGroup, ruleGroup_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleThreshold, ruleThreshold_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    PostCustomizeRuleRequest() = default ;
    PostCustomizeRuleRequest(const PostCustomizeRuleRequest &) = default ;
    PostCustomizeRuleRequest(PostCustomizeRuleRequest &&) = default ;
    PostCustomizeRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostCustomizeRuleRequest() = default ;
    PostCustomizeRuleRequest& operator=(const PostCustomizeRuleRequest &) = default ;
    PostCustomizeRuleRequest& operator=(PostCustomizeRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertType_ == nullptr
        && this->alertTypeMds_ == nullptr && this->attCk_ == nullptr && this->eventTransferExt_ == nullptr && this->eventTransferSwitch_ == nullptr && this->eventTransferType_ == nullptr
        && this->id_ == nullptr && this->logSource_ == nullptr && this->logSourceMds_ == nullptr && this->logType_ == nullptr && this->logTypeMds_ == nullptr
        && this->queryCycle_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->ruleCondition_ == nullptr
        && this->ruleDesc_ == nullptr && this->ruleGroup_ == nullptr && this->ruleName_ == nullptr && this->ruleThreshold_ == nullptr && this->threatLevel_ == nullptr; };
    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline PostCustomizeRuleRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeMds Field Functions 
    bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
    void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
    inline string getAlertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
    inline PostCustomizeRuleRequest& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


    // attCk Field Functions 
    bool hasAttCk() const { return this->attCk_ != nullptr;};
    void deleteAttCk() { this->attCk_ = nullptr;};
    inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
    inline PostCustomizeRuleRequest& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


    // eventTransferExt Field Functions 
    bool hasEventTransferExt() const { return this->eventTransferExt_ != nullptr;};
    void deleteEventTransferExt() { this->eventTransferExt_ = nullptr;};
    inline string getEventTransferExt() const { DARABONBA_PTR_GET_DEFAULT(eventTransferExt_, "") };
    inline PostCustomizeRuleRequest& setEventTransferExt(string eventTransferExt) { DARABONBA_PTR_SET_VALUE(eventTransferExt_, eventTransferExt) };


    // eventTransferSwitch Field Functions 
    bool hasEventTransferSwitch() const { return this->eventTransferSwitch_ != nullptr;};
    void deleteEventTransferSwitch() { this->eventTransferSwitch_ = nullptr;};
    inline int32_t getEventTransferSwitch() const { DARABONBA_PTR_GET_DEFAULT(eventTransferSwitch_, 0) };
    inline PostCustomizeRuleRequest& setEventTransferSwitch(int32_t eventTransferSwitch) { DARABONBA_PTR_SET_VALUE(eventTransferSwitch_, eventTransferSwitch) };


    // eventTransferType Field Functions 
    bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
    void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
    inline string getEventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
    inline PostCustomizeRuleRequest& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PostCustomizeRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline PostCustomizeRuleRequest& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logSourceMds Field Functions 
    bool hasLogSourceMds() const { return this->logSourceMds_ != nullptr;};
    void deleteLogSourceMds() { this->logSourceMds_ = nullptr;};
    inline string getLogSourceMds() const { DARABONBA_PTR_GET_DEFAULT(logSourceMds_, "") };
    inline PostCustomizeRuleRequest& setLogSourceMds(string logSourceMds) { DARABONBA_PTR_SET_VALUE(logSourceMds_, logSourceMds) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline PostCustomizeRuleRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // logTypeMds Field Functions 
    bool hasLogTypeMds() const { return this->logTypeMds_ != nullptr;};
    void deleteLogTypeMds() { this->logTypeMds_ = nullptr;};
    inline string getLogTypeMds() const { DARABONBA_PTR_GET_DEFAULT(logTypeMds_, "") };
    inline PostCustomizeRuleRequest& setLogTypeMds(string logTypeMds) { DARABONBA_PTR_SET_VALUE(logTypeMds_, logTypeMds) };


    // queryCycle Field Functions 
    bool hasQueryCycle() const { return this->queryCycle_ != nullptr;};
    void deleteQueryCycle() { this->queryCycle_ = nullptr;};
    inline string getQueryCycle() const { DARABONBA_PTR_GET_DEFAULT(queryCycle_, "") };
    inline PostCustomizeRuleRequest& setQueryCycle(string queryCycle) { DARABONBA_PTR_SET_VALUE(queryCycle_, queryCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostCustomizeRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostCustomizeRuleRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostCustomizeRuleRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleCondition Field Functions 
    bool hasRuleCondition() const { return this->ruleCondition_ != nullptr;};
    void deleteRuleCondition() { this->ruleCondition_ = nullptr;};
    inline string getRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(ruleCondition_, "") };
    inline PostCustomizeRuleRequest& setRuleCondition(string ruleCondition) { DARABONBA_PTR_SET_VALUE(ruleCondition_, ruleCondition) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline PostCustomizeRuleRequest& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleGroup Field Functions 
    bool hasRuleGroup() const { return this->ruleGroup_ != nullptr;};
    void deleteRuleGroup() { this->ruleGroup_ = nullptr;};
    inline string getRuleGroup() const { DARABONBA_PTR_GET_DEFAULT(ruleGroup_, "") };
    inline PostCustomizeRuleRequest& setRuleGroup(string ruleGroup) { DARABONBA_PTR_SET_VALUE(ruleGroup_, ruleGroup) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PostCustomizeRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleThreshold Field Functions 
    bool hasRuleThreshold() const { return this->ruleThreshold_ != nullptr;};
    void deleteRuleThreshold() { this->ruleThreshold_ = nullptr;};
    inline string getRuleThreshold() const { DARABONBA_PTR_GET_DEFAULT(ruleThreshold_, "") };
    inline PostCustomizeRuleRequest& setRuleThreshold(string ruleThreshold) { DARABONBA_PTR_SET_VALUE(ruleThreshold_, ruleThreshold) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline PostCustomizeRuleRequest& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // The risk type.
    shared_ptr<string> alertType_ {};
    // The internal code of the risk type.
    shared_ptr<string> alertTypeMds_ {};
    // att&ck.
    shared_ptr<string> attCk_ {};
    // The extended information about event generation. If eventTransferType is set to allToSingle, the value of this parameter indicates the length and unit of the alert aggregation window.
    shared_ptr<string> eventTransferExt_ {};
    // Specifies whether to convert an alert to an event. Valid values:
    // 
    // *   0: no
    // *   1: yes
    shared_ptr<int32_t> eventTransferSwitch_ {};
    // The event generation method. Valid values:
    // 
    // *   default: The default method is used.
    // *   singleToSingle: The system generates an event for each alert.
    // *   allToSingle: The system generates an event for alerts within a period of time.
    shared_ptr<string> eventTransferType_ {};
    // The ID of the rule.
    shared_ptr<int64_t> id_ {};
    // The log source of the rule.
    shared_ptr<string> logSource_ {};
    // The internal code of the log source.
    shared_ptr<string> logSourceMds_ {};
    // The log type of the rule.
    shared_ptr<string> logType_ {};
    // The internal code of the log type.
    shared_ptr<string> logTypeMds_ {};
    // The window length of the rule.
    shared_ptr<string> queryCycle_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the account that you switch from the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    shared_ptr<int32_t> roleType_ {};
    // The query condition of the rule. The value is in the JSON format.
    shared_ptr<string> ruleCondition_ {};
    // The description of the rule.
    shared_ptr<string> ruleDesc_ {};
    // The log aggregation field of the rule. The value is a JSON string.
    shared_ptr<string> ruleGroup_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The threshold configuration of the rule. The value is in the JSON format.
    shared_ptr<string> ruleThreshold_ {};
    // The risk level. Valid values:
    // 
    // *   serious: high
    // *   suspicious: medium
    // *   remind: low
    shared_ptr<string> threatLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
