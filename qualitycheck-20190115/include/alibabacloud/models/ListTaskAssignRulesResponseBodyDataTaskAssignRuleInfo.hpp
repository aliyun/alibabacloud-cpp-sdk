// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode.hpp>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(AgentsStr, agentsStr_);
      DARABONBA_PTR_TO_JSON(AssignmentType, assignmentType_);
      DARABONBA_PTR_TO_JSON(CallTimeEnd, callTimeEnd_);
      DARABONBA_PTR_TO_JSON(CallTimeStart, callTimeStart_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DurationMax, durationMax_);
      DARABONBA_PTR_TO_JSON(DurationMin, durationMin_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Reviewers, reviewers_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SamplingMode, samplingMode_);
      DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_TO_JSON(SkillGroupsStr, skillGroupsStr_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(AgentsStr, agentsStr_);
      DARABONBA_PTR_FROM_JSON(AssignmentType, assignmentType_);
      DARABONBA_PTR_FROM_JSON(CallTimeEnd, callTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CallTimeStart, callTimeStart_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DurationMax, durationMax_);
      DARABONBA_PTR_FROM_JSON(DurationMin, durationMin_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Reviewers, reviewers_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SamplingMode, samplingMode_);
      DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_FROM_JSON(SkillGroupsStr, skillGroupsStr_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agents_ == nullptr
        && return this->agentsStr_ == nullptr && return this->assignmentType_ == nullptr && return this->callTimeEnd_ == nullptr && return this->callTimeStart_ == nullptr && return this->callType_ == nullptr
        && return this->createTime_ == nullptr && return this->durationMax_ == nullptr && return this->durationMin_ == nullptr && return this->enabled_ == nullptr && return this->priority_ == nullptr
        && return this->reviewers_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->rules_ == nullptr && return this->samplingMode_ == nullptr
        && return this->skillGroups_ == nullptr && return this->skillGroupsStr_ == nullptr && return this->updateTime_ == nullptr; };
    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents & agents() const { DARABONBA_PTR_GET_CONST(agents_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents agents() { DARABONBA_PTR_GET(agents_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setAgents(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setAgents(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


    // agentsStr Field Functions 
    bool hasAgentsStr() const { return this->agentsStr_ != nullptr;};
    void deleteAgentsStr() { this->agentsStr_ = nullptr;};
    inline string agentsStr() const { DARABONBA_PTR_GET_DEFAULT(agentsStr_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setAgentsStr(string agentsStr) { DARABONBA_PTR_SET_VALUE(agentsStr_, agentsStr) };


    // assignmentType Field Functions 
    bool hasAssignmentType() const { return this->assignmentType_ != nullptr;};
    void deleteAssignmentType() { this->assignmentType_ = nullptr;};
    inline int32_t assignmentType() const { DARABONBA_PTR_GET_DEFAULT(assignmentType_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setAssignmentType(int32_t assignmentType) { DARABONBA_PTR_SET_VALUE(assignmentType_, assignmentType) };


    // callTimeEnd Field Functions 
    bool hasCallTimeEnd() const { return this->callTimeEnd_ != nullptr;};
    void deleteCallTimeEnd() { this->callTimeEnd_ = nullptr;};
    inline int64_t callTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(callTimeEnd_, 0L) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setCallTimeEnd(int64_t callTimeEnd) { DARABONBA_PTR_SET_VALUE(callTimeEnd_, callTimeEnd) };


    // callTimeStart Field Functions 
    bool hasCallTimeStart() const { return this->callTimeStart_ != nullptr;};
    void deleteCallTimeStart() { this->callTimeStart_ = nullptr;};
    inline int64_t callTimeStart() const { DARABONBA_PTR_GET_DEFAULT(callTimeStart_, 0L) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setCallTimeStart(int64_t callTimeStart) { DARABONBA_PTR_SET_VALUE(callTimeStart_, callTimeStart) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int32_t callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // durationMax Field Functions 
    bool hasDurationMax() const { return this->durationMax_ != nullptr;};
    void deleteDurationMax() { this->durationMax_ = nullptr;};
    inline int32_t durationMax() const { DARABONBA_PTR_GET_DEFAULT(durationMax_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setDurationMax(int32_t durationMax) { DARABONBA_PTR_SET_VALUE(durationMax_, durationMax) };


    // durationMin Field Functions 
    bool hasDurationMin() const { return this->durationMin_ != nullptr;};
    void deleteDurationMin() { this->durationMin_ = nullptr;};
    inline int32_t durationMin() const { DARABONBA_PTR_GET_DEFAULT(durationMin_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setDurationMin(int32_t durationMin) { DARABONBA_PTR_SET_VALUE(durationMin_, durationMin) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int32_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reviewers Field Functions 
    bool hasReviewers() const { return this->reviewers_ != nullptr;};
    void deleteReviewers() { this->reviewers_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers & reviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers reviewers() { DARABONBA_PTR_GET(reviewers_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setReviewers(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setReviewers(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setRules(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setRules(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // samplingMode Field Functions 
    bool hasSamplingMode() const { return this->samplingMode_ != nullptr;};
    void deleteSamplingMode() { this->samplingMode_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode & samplingMode() const { DARABONBA_PTR_GET_CONST(samplingMode_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode samplingMode() { DARABONBA_PTR_GET(samplingMode_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setSamplingMode(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode & samplingMode) { DARABONBA_PTR_SET_VALUE(samplingMode_, samplingMode) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setSamplingMode(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode && samplingMode) { DARABONBA_PTR_SET_RVALUE(samplingMode_, samplingMode) };


    // skillGroups Field Functions 
    bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
    void deleteSkillGroups() { this->skillGroups_ = nullptr;};
    inline const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups & skillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups) };
    inline Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups skillGroups() { DARABONBA_PTR_GET(skillGroups_, Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setSkillGroups(const Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setSkillGroups(Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


    // skillGroupsStr Field Functions 
    bool hasSkillGroupsStr() const { return this->skillGroupsStr_ != nullptr;};
    void deleteSkillGroupsStr() { this->skillGroupsStr_ = nullptr;};
    inline string skillGroupsStr() const { DARABONBA_PTR_GET_DEFAULT(skillGroupsStr_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setSkillGroupsStr(string skillGroupsStr) { DARABONBA_PTR_SET_VALUE(skillGroupsStr_, skillGroupsStr) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents> agents_ = nullptr;
    std::shared_ptr<string> agentsStr_ = nullptr;
    std::shared_ptr<int32_t> assignmentType_ = nullptr;
    std::shared_ptr<int64_t> callTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> callTimeStart_ = nullptr;
    std::shared_ptr<int32_t> callType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> durationMax_ = nullptr;
    std::shared_ptr<int32_t> durationMin_ = nullptr;
    std::shared_ptr<int32_t> enabled_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers> reviewers_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules> rules_ = nullptr;
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSamplingMode> samplingMode_ = nullptr;
    std::shared_ptr<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups> skillGroups_ = nullptr;
    std::shared_ptr<string> skillGroupsStr_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
