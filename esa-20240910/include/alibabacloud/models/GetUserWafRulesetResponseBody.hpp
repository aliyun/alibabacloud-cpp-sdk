// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserWafRulesetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ruleset, ruleset_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ruleset, ruleset_);
    };
    GetUserWafRulesetResponseBody() = default ;
    GetUserWafRulesetResponseBody(const GetUserWafRulesetResponseBody &) = default ;
    GetUserWafRulesetResponseBody(GetUserWafRulesetResponseBody &&) = default ;
    GetUserWafRulesetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserWafRulesetResponseBody() = default ;
    GetUserWafRulesetResponseBody& operator=(const GetUserWafRulesetResponseBody &) = default ;
    GetUserWafRulesetResponseBody& operator=(GetUserWafRulesetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ruleset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ruleset& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(Position, position_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Shared, shared_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Ruleset& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(Position, position_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Shared, shared_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Ruleset() = default ;
      Ruleset(const Ruleset &) = default ;
      Ruleset(Ruleset &&) = default ;
      Ruleset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ruleset() = default ;
      Ruleset& operator=(const Ruleset &) = default ;
      Ruleset& operator=(Ruleset &&) = default ;
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
        && this->tags_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
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
        shared_ptr<string> action_ {};
        shared_ptr<vector<string>> characteristicsFields_ {};
        shared_ptr<WafRuleConfig> config_ {};
        shared_ptr<vector<string>> fields_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> phase_ {};
        shared_ptr<int64_t> position_ {};
        shared_ptr<int64_t> rulesetId_ {};
        shared_ptr<string> skip_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->expression_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->phase_ == nullptr && this->position_ == nullptr
        && this->rules_ == nullptr && this->shared_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Ruleset& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline Ruleset& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Ruleset& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Ruleset& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Ruleset& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline int64_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
      inline Ruleset& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Ruleset::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Ruleset::Rules>) };
      inline vector<Ruleset::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Ruleset::Rules>) };
      inline Ruleset& setRules(const vector<Ruleset::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Ruleset& setRules(vector<Ruleset::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // shared Field Functions 
      bool hasShared() const { return this->shared_ != nullptr;};
      void deleteShared() { this->shared_ = nullptr;};
      inline const WafBatchRuleShared & getShared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
      inline WafBatchRuleShared getShared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
      inline Ruleset& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
      inline Ruleset& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Ruleset& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> expression_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> phase_ {};
      shared_ptr<int64_t> position_ {};
      shared_ptr<vector<Ruleset::Rules>> rules_ {};
      shared_ptr<WafBatchRuleShared> shared_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleset_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserWafRulesetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleset Field Functions 
    bool hasRuleset() const { return this->ruleset_ != nullptr;};
    void deleteRuleset() { this->ruleset_ = nullptr;};
    inline const GetUserWafRulesetResponseBody::Ruleset & getRuleset() const { DARABONBA_PTR_GET_CONST(ruleset_, GetUserWafRulesetResponseBody::Ruleset) };
    inline GetUserWafRulesetResponseBody::Ruleset getRuleset() { DARABONBA_PTR_GET(ruleset_, GetUserWafRulesetResponseBody::Ruleset) };
    inline GetUserWafRulesetResponseBody& setRuleset(const GetUserWafRulesetResponseBody::Ruleset & ruleset) { DARABONBA_PTR_SET_VALUE(ruleset_, ruleset) };
    inline GetUserWafRulesetResponseBody& setRuleset(GetUserWafRulesetResponseBody::Ruleset && ruleset) { DARABONBA_PTR_SET_RVALUE(ruleset_, ruleset) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetUserWafRulesetResponseBody::Ruleset> ruleset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
