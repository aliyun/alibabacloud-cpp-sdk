// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODYRULESETRULES_HPP_
#define ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODYRULESETRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserWafRulesetResponseBodyRulesetRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserWafRulesetResponseBodyRulesetRules& obj) { 
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
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserWafRulesetResponseBodyRulesetRules& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetUserWafRulesetResponseBodyRulesetRules() = default ;
    GetUserWafRulesetResponseBodyRulesetRules(const GetUserWafRulesetResponseBodyRulesetRules &) = default ;
    GetUserWafRulesetResponseBodyRulesetRules(GetUserWafRulesetResponseBodyRulesetRules &&) = default ;
    GetUserWafRulesetResponseBodyRulesetRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserWafRulesetResponseBodyRulesetRules() = default ;
    GetUserWafRulesetResponseBodyRulesetRules& operator=(const GetUserWafRulesetResponseBodyRulesetRules &) = default ;
    GetUserWafRulesetResponseBodyRulesetRules& operator=(GetUserWafRulesetResponseBodyRulesetRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->characteristicsFields_ == nullptr && return this->config_ == nullptr && return this->fields_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->phase_ == nullptr && return this->position_ == nullptr && return this->rulesetId_ == nullptr && return this->skip_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // characteristicsFields Field Functions 
    bool hasCharacteristicsFields() const { return this->characteristicsFields_ != nullptr;};
    void deleteCharacteristicsFields() { this->characteristicsFields_ = nullptr;};
    inline const vector<string> & characteristicsFields() const { DARABONBA_PTR_GET_CONST(characteristicsFields_, vector<string>) };
    inline vector<string> characteristicsFields() { DARABONBA_PTR_GET(characteristicsFields_, vector<string>) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setCharacteristicsFields(const vector<string> & characteristicsFields) { DARABONBA_PTR_SET_VALUE(characteristicsFields_, characteristicsFields) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setCharacteristicsFields(vector<string> && characteristicsFields) { DARABONBA_PTR_SET_RVALUE(characteristicsFields_, characteristicsFields) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::WafRuleConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::WafRuleConfig) };
    inline Models::WafRuleConfig config() { DARABONBA_PTR_GET(config_, Models::WafRuleConfig) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setConfig(const Models::WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setConfig(Models::WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline string skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetUserWafRulesetResponseBodyRulesetRules& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetUserWafRulesetResponseBodyRulesetRules& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<vector<string>> characteristicsFields_ = nullptr;
    std::shared_ptr<Models::WafRuleConfig> config_ = nullptr;
    std::shared_ptr<vector<string>> fields_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    std::shared_ptr<string> skip_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
