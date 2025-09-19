// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetContainerDefenseRuleDetailResponseBodyDataScope.hpp>
#include <alibabacloud/models/GetContainerDefenseRuleDetailResponseBodyDataWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetContainerDefenseRuleDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContainerDefenseRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetContainerDefenseRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    GetContainerDefenseRuleDetailResponseBodyData() = default ;
    GetContainerDefenseRuleDetailResponseBodyData(const GetContainerDefenseRuleDetailResponseBodyData &) = default ;
    GetContainerDefenseRuleDetailResponseBodyData(GetContainerDefenseRuleDetailResponseBodyData &&) = default ;
    GetContainerDefenseRuleDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContainerDefenseRuleDetailResponseBodyData() = default ;
    GetContainerDefenseRuleDetailResponseBodyData& operator=(const GetContainerDefenseRuleDetailResponseBodyData &) = default ;
    GetContainerDefenseRuleDetailResponseBodyData& operator=(GetContainerDefenseRuleDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->description_ != nullptr && this->eventName_ != nullptr && this->eventType_ != nullptr && this->id_ != nullptr && this->ruleAction_ != nullptr
        && this->ruleName_ != nullptr && this->ruleSwitch_ != nullptr && this->ruleType_ != nullptr && this->scope_ != nullptr && this->whitelist_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetContainerDefenseRuleDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline GetContainerDefenseRuleDetailResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline GetContainerDefenseRuleDetailResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetContainerDefenseRuleDetailResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetContainerDefenseRuleDetailResponseBodyData& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope>) };
    inline vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope> scope() { DARABONBA_PTR_GET(scope_, vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope>) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setScope(const vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setScope(vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist) };
    inline Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist whitelist() { DARABONBA_PTR_GET(whitelist_, Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setWhitelist(const Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline GetContainerDefenseRuleDetailResponseBodyData& setWhitelist(Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The user ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The alert name. Valid values:
    // 
    // *   **Non-image Program Startup**
    std::shared_ptr<string> eventName_ = nullptr;
    // The alert type. Valid values:
    // 
    // *   **Proactive Defense for Containers**
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The action specified in the rule. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **1**: system rule
    // *   **2**: custom rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // The effective scope of the rule.
    std::shared_ptr<vector<Models::GetContainerDefenseRuleDetailResponseBodyDataScope>> scope_ = nullptr;
    // The whitelist.
    std::shared_ptr<Models::GetContainerDefenseRuleDetailResponseBodyDataWhitelist> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
