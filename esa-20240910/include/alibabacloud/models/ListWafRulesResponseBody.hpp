// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODY_HPP_
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
  class ListWafRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWafRulesResponseBody() = default ;
    ListWafRulesResponseBody(const ListWafRulesResponseBody &) = default ;
    ListWafRulesResponseBody(ListWafRulesResponseBody &&) = default ;
    ListWafRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesResponseBody() = default ;
    ListWafRulesResponseBody& operator=(const ListWafRulesResponseBody &) = default ;
    ListWafRulesResponseBody& operator=(ListWafRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
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
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->characteristicsFields_ == nullptr && this->config_ == nullptr && this->fields_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->phase_ == nullptr && this->position_ == nullptr && this->rulesetId_ == nullptr && this->skip_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->timer_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Rules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // characteristicsFields Field Functions 
      bool hasCharacteristicsFields() const { return this->characteristicsFields_ != nullptr;};
      void deleteCharacteristicsFields() { this->characteristicsFields_ = nullptr;};
      inline const vector<string> & getCharacteristicsFields() const { DARABONBA_PTR_GET_CONST(characteristicsFields_, vector<string>) };
      inline vector<string> getCharacteristicsFields() { DARABONBA_PTR_GET(characteristicsFields_, vector<string>) };
      inline Rules& setCharacteristicsFields(const vector<string> & characteristicsFields) { DARABONBA_PTR_SET_VALUE(characteristicsFields_, characteristicsFields) };
      inline Rules& setCharacteristicsFields(vector<string> && characteristicsFields) { DARABONBA_PTR_SET_RVALUE(characteristicsFields_, characteristicsFields) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const WafRuleConfig & getConfig() const { DARABONBA_PTR_GET_CONST(config_, WafRuleConfig) };
      inline WafRuleConfig getConfig() { DARABONBA_PTR_GET(config_, WafRuleConfig) };
      inline Rules& setConfig(const WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Rules& setConfig(WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
      inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
      inline Rules& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Rules& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Rules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Rules& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline int64_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
      inline Rules& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // rulesetId Field Functions 
      bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
      void deleteRulesetId() { this->rulesetId_ = nullptr;};
      inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
      inline Rules& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline string getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
      inline Rules& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Rules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Rules& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Rules& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timer Field Functions 
      bool hasTimer() const { return this->timer_ != nullptr;};
      void deleteTimer() { this->timer_ = nullptr;};
      inline const WafTimer & getTimer() const { DARABONBA_PTR_GET_CONST(timer_, WafTimer) };
      inline WafTimer getTimer() { DARABONBA_PTR_GET(timer_, WafTimer) };
      inline Rules& setTimer(const WafTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
      inline Rules& setTimer(WafTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Rules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Rules& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The action corresponding to the rule.
      shared_ptr<string> action_ {};
      // List of statistical objects for frequency control rules.
      shared_ptr<vector<string>> characteristicsFields_ {};
      // Rule configuration.
      shared_ptr<WafRuleConfig> config_ {};
      // List of fields for rule matching
      shared_ptr<vector<string>> fields_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // Rule name.
      shared_ptr<string> name_ {};
      // WAF phase.
      shared_ptr<string> phase_ {};
      // Position order of the rule in the corresponding ruleset.
      shared_ptr<int64_t> position_ {};
      // Ruleset ID.
      shared_ptr<int64_t> rulesetId_ {};
      // Skip attribute for whitelist rules.
      shared_ptr<string> skip_ {};
      // Rule status.
      shared_ptr<string> status_ {};
      // List of WAF phases to be skipped by whitelist rules.
      shared_ptr<vector<string>> tags_ {};
      // Configuration for the effective time of the rule.
      shared_ptr<WafTimer> timer_ {};
      // Rule type.
      shared_ptr<string> type_ {};
      // Modification time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->instanceUsage_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->siteUsage_ == nullptr
        && this->totalCount_ == nullptr; };
    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t getInstanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafRulesResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListWafRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListWafRulesResponseBody::Rules>) };
    inline vector<ListWafRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ListWafRulesResponseBody::Rules>) };
    inline ListWafRulesResponseBody& setRules(const vector<ListWafRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListWafRulesResponseBody& setRules(vector<ListWafRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int64_t getSiteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
    inline ListWafRulesResponseBody& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWafRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of rules used in this WAF phase for the corresponding instance of the site.
    shared_ptr<int64_t> instanceUsage_ {};
    // Page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned list of rules.
    shared_ptr<vector<ListWafRulesResponseBody::Rules>> rules_ {};
    // Site usage.
    shared_ptr<int64_t> siteUsage_ {};
    // Total number of rules after filtering.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
