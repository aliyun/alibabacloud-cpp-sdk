// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CharacteristicsFields, characteristicsFields_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Timer, timer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CharacteristicsFields, characteristicsFields_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Timer, timer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListWafRulesResponseBodyRules() = default ;
    ListWafRulesResponseBodyRules(const ListWafRulesResponseBodyRules &) = default ;
    ListWafRulesResponseBodyRules(ListWafRulesResponseBodyRules &&) = default ;
    ListWafRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesResponseBodyRules() = default ;
    ListWafRulesResponseBodyRules& operator=(const ListWafRulesResponseBodyRules &) = default ;
    ListWafRulesResponseBodyRules& operator=(ListWafRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->characteristicsFields_ == nullptr && return this->config_ == nullptr && return this->fields_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->phase_ == nullptr && return this->position_ == nullptr && return this->rulesetId_ == nullptr && return this->skip_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->timer_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListWafRulesResponseBodyRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // characteristicsFields Field Functions 
    bool hasCharacteristicsFields() const { return this->characteristicsFields_ != nullptr;};
    void deleteCharacteristicsFields() { this->characteristicsFields_ = nullptr;};
    inline const vector<string> & characteristicsFields() const { DARABONBA_PTR_GET_CONST(characteristicsFields_, vector<string>) };
    inline vector<string> characteristicsFields() { DARABONBA_PTR_GET(characteristicsFields_, vector<string>) };
    inline ListWafRulesResponseBodyRules& setCharacteristicsFields(const vector<string> & characteristicsFields) { DARABONBA_PTR_SET_VALUE(characteristicsFields_, characteristicsFields) };
    inline ListWafRulesResponseBodyRules& setCharacteristicsFields(vector<string> && characteristicsFields) { DARABONBA_PTR_SET_RVALUE(characteristicsFields_, characteristicsFields) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::WafRuleConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::WafRuleConfig) };
    inline Models::WafRuleConfig config() { DARABONBA_PTR_GET(config_, Models::WafRuleConfig) };
    inline ListWafRulesResponseBodyRules& setConfig(const Models::WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListWafRulesResponseBodyRules& setConfig(Models::WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline ListWafRulesResponseBodyRules& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline ListWafRulesResponseBodyRules& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafRulesResponseBodyRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWafRulesResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafRulesResponseBodyRules& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline ListWafRulesResponseBodyRules& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline ListWafRulesResponseBodyRules& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline string skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
    inline ListWafRulesResponseBodyRules& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafRulesResponseBodyRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListWafRulesResponseBodyRules& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListWafRulesResponseBodyRules& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const Models::WafTimer & timer() const { DARABONBA_PTR_GET_CONST(timer_, Models::WafTimer) };
    inline Models::WafTimer timer() { DARABONBA_PTR_GET(timer_, Models::WafTimer) };
    inline ListWafRulesResponseBodyRules& setTimer(const Models::WafTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline ListWafRulesResponseBodyRules& setTimer(Models::WafTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWafRulesResponseBodyRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListWafRulesResponseBodyRules& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The action corresponding to the rule.
    std::shared_ptr<string> action_ = nullptr;
    // List of statistical objects for frequency control rules.
    std::shared_ptr<vector<string>> characteristicsFields_ = nullptr;
    // Rule configuration.
    std::shared_ptr<Models::WafRuleConfig> config_ = nullptr;
    // List of fields for rule matching
    std::shared_ptr<vector<string>> fields_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Rule name.
    std::shared_ptr<string> name_ = nullptr;
    // WAF phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Position order of the rule in the corresponding ruleset.
    std::shared_ptr<int64_t> position_ = nullptr;
    // Ruleset ID.
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    // Skip attribute for whitelist rules.
    std::shared_ptr<string> skip_ = nullptr;
    // Rule status.
    std::shared_ptr<string> status_ = nullptr;
    // List of WAF phases to be skipped by whitelist rules.
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // Configuration for the effective time of the rule.
    std::shared_ptr<Models::WafTimer> timer_ = nullptr;
    // Rule type.
    std::shared_ptr<string> type_ = nullptr;
    // Modification time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
