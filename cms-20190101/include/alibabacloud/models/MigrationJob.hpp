// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Plan, plan_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Plan, plan_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    MigrationJob() = default ;
    MigrationJob(const MigrationJob &) = default ;
    MigrationJob(MigrationJob &&) = default ;
    MigrationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJob() = default ;
    MigrationJob& operator=(const MigrationJob &) = default ;
    MigrationJob& operator=(MigrationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
      };
      Source() = default ;
      Source(const Source &) = default ;
      Source(Source &&) = default ;
      Source(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Source() = default ;
      Source& operator=(const Source &) = default ;
      Source& operator=(Source &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(Group, group_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(ResourcePath, resourcePath_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(Group, group_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(ResourcePath, resourcePath_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->group_ == nullptr
        && this->level_ == nullptr && this->method_ == nullptr && this->region_ == nullptr && this->resourcePath_ == nullptr && this->url_ == nullptr; };
          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
          inline Content& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Content& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline Content& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Content& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // resourcePath Field Functions 
          bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
          void deleteResourcePath() { this->resourcePath_ = nullptr;};
          inline string getResourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
          inline Content& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Content& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> group_ {};
          shared_ptr<string> level_ {};
          shared_ptr<string> method_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> resourcePath_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Targets::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Targets::Content) };
        inline Targets::Content getContent() { DARABONBA_PTR_GET(content_, Targets::Content) };
        inline Targets& setContent(const Targets::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Targets& setContent(Targets::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Targets::Content> content_ {};
        shared_ptr<string> type_ {};
      };

      class Rule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rule& obj) { 
          DARABONBA_PTR_TO_JSON(KeywordFilter, keywordFilter_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PrimaryFilters, primaryFilters_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(KeywordFilter, keywordFilter_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PrimaryFilters, primaryFilters_);
        };
        Rule() = default ;
        Rule(const Rule &) = default ;
        Rule(Rule &&) = default ;
        Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rule() = default ;
        Rule& operator=(const Rule &) = default ;
        Rule& operator=(Rule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PrimaryFilters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrimaryFilters& obj) { 
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(OpType, opType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PrimaryFilters& obj) { 
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(OpType, opType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PrimaryFilters() = default ;
          PrimaryFilters(const PrimaryFilters &) = default ;
          PrimaryFilters(PrimaryFilters &&) = default ;
          PrimaryFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrimaryFilters() = default ;
          PrimaryFilters& operator=(const PrimaryFilters &) = default ;
          PrimaryFilters& operator=(PrimaryFilters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->field_ == nullptr
        && this->opType_ == nullptr && this->value_ == nullptr; };
          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline PrimaryFilters& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // opType Field Functions 
          bool hasOpType() const { return this->opType_ != nullptr;};
          void deleteOpType() { this->opType_ = nullptr;};
          inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
          inline PrimaryFilters& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PrimaryFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> field_ {};
          shared_ptr<string> opType_ {};
          shared_ptr<string> value_ {};
        };

        class KeywordFilter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeywordFilter& obj) { 
            DARABONBA_PTR_TO_JSON(Keywords, keywords_);
            DARABONBA_PTR_TO_JSON(Relation, relation_);
          };
          friend void from_json(const Darabonba::Json& j, KeywordFilter& obj) { 
            DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
            DARABONBA_PTR_FROM_JSON(Relation, relation_);
          };
          KeywordFilter() = default ;
          KeywordFilter(const KeywordFilter &) = default ;
          KeywordFilter(KeywordFilter &&) = default ;
          KeywordFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeywordFilter() = default ;
          KeywordFilter& operator=(const KeywordFilter &) = default ;
          KeywordFilter& operator=(KeywordFilter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keywords_ == nullptr
        && this->relation_ == nullptr; };
          // keywords Field Functions 
          bool hasKeywords() const { return this->keywords_ != nullptr;};
          void deleteKeywords() { this->keywords_ = nullptr;};
          inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
          inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
          inline KeywordFilter& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
          inline KeywordFilter& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


          // relation Field Functions 
          bool hasRelation() const { return this->relation_ != nullptr;};
          void deleteRelation() { this->relation_ = nullptr;};
          inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
          inline KeywordFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        protected:
          shared_ptr<vector<string>> keywords_ {};
          shared_ptr<string> relation_ {};
        };

        virtual bool empty() const override { return this->keywordFilter_ == nullptr
        && this->name_ == nullptr && this->primaryFilters_ == nullptr; };
        // keywordFilter Field Functions 
        bool hasKeywordFilter() const { return this->keywordFilter_ != nullptr;};
        void deleteKeywordFilter() { this->keywordFilter_ = nullptr;};
        inline const Rule::KeywordFilter & getKeywordFilter() const { DARABONBA_PTR_GET_CONST(keywordFilter_, Rule::KeywordFilter) };
        inline Rule::KeywordFilter getKeywordFilter() { DARABONBA_PTR_GET(keywordFilter_, Rule::KeywordFilter) };
        inline Rule& setKeywordFilter(const Rule::KeywordFilter & keywordFilter) { DARABONBA_PTR_SET_VALUE(keywordFilter_, keywordFilter) };
        inline Rule& setKeywordFilter(Rule::KeywordFilter && keywordFilter) { DARABONBA_PTR_SET_RVALUE(keywordFilter_, keywordFilter) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // primaryFilters Field Functions 
        bool hasPrimaryFilters() const { return this->primaryFilters_ != nullptr;};
        void deletePrimaryFilters() { this->primaryFilters_ = nullptr;};
        inline const vector<Rule::PrimaryFilters> & getPrimaryFilters() const { DARABONBA_PTR_GET_CONST(primaryFilters_, vector<Rule::PrimaryFilters>) };
        inline vector<Rule::PrimaryFilters> getPrimaryFilters() { DARABONBA_PTR_GET(primaryFilters_, vector<Rule::PrimaryFilters>) };
        inline Rule& setPrimaryFilters(const vector<Rule::PrimaryFilters> & primaryFilters) { DARABONBA_PTR_SET_VALUE(primaryFilters_, primaryFilters) };
        inline Rule& setPrimaryFilters(vector<Rule::PrimaryFilters> && primaryFilters) { DARABONBA_PTR_SET_RVALUE(primaryFilters_, primaryFilters) };


      protected:
        shared_ptr<Rule::KeywordFilter> keywordFilter_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<Rule::PrimaryFilters>> primaryFilters_ {};
      };

      virtual bool empty() const override { return this->rule_ == nullptr
        && this->targets_ == nullptr; };
      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline const Source::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, Source::Rule) };
      inline Source::Rule getRule() { DARABONBA_PTR_GET(rule_, Source::Rule) };
      inline Source& setRule(const Source::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
      inline Source& setRule(Source::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Source::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Source::Targets>) };
      inline vector<Source::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Source::Targets>) };
      inline Source& setTargets(const vector<Source::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Source& setTargets(vector<Source::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      shared_ptr<Source::Rule> rule_ {};
      shared_ptr<vector<Source::Targets>> targets_ {};
    };

    class Plan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plan& obj) { 
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(Escalations, escalations_);
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
        DARABONBA_PTR_TO_JSON(Strategies, strategies_);
        DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, Plan& obj) { 
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
        DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
        DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
      };
      Plan() = default ;
      Plan(const Plan &) = default ;
      Plan(Plan &&) = default ;
      Plan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plan() = default ;
      Plan& operator=(const Plan &) = default ;
      Plan& operator=(Plan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(HttpRequestTarget, httpRequestTarget_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(HttpRequestTarget, httpRequestTarget_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpRequestTarget : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpRequestTarget& obj) { 
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, HttpRequestTarget& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          HttpRequestTarget() = default ;
          HttpRequestTarget(const HttpRequestTarget &) = default ;
          HttpRequestTarget(HttpRequestTarget &&) = default ;
          HttpRequestTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpRequestTarget() = default ;
          HttpRequestTarget& operator=(const HttpRequestTarget &) = default ;
          HttpRequestTarget& operator=(HttpRequestTarget &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentType_ == nullptr
        && this->method_ == nullptr && this->url_ == nullptr; };
          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline HttpRequestTarget& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline HttpRequestTarget& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline HttpRequestTarget& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> contentType_ {};
          shared_ptr<string> method_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->arn_ == nullptr
        && this->httpRequestTarget_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline Targets& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // httpRequestTarget Field Functions 
        bool hasHttpRequestTarget() const { return this->httpRequestTarget_ != nullptr;};
        void deleteHttpRequestTarget() { this->httpRequestTarget_ = nullptr;};
        inline const Targets::HttpRequestTarget & getHttpRequestTarget() const { DARABONBA_PTR_GET_CONST(httpRequestTarget_, Targets::HttpRequestTarget) };
        inline Targets::HttpRequestTarget getHttpRequestTarget() { DARABONBA_PTR_GET(httpRequestTarget_, Targets::HttpRequestTarget) };
        inline Targets& setHttpRequestTarget(const Targets::HttpRequestTarget & httpRequestTarget) { DARABONBA_PTR_SET_VALUE(httpRequestTarget_, httpRequestTarget) };
        inline Targets& setHttpRequestTarget(Targets::HttpRequestTarget && httpRequestTarget) { DARABONBA_PTR_SET_RVALUE(httpRequestTarget_, httpRequestTarget) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Targets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Targets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<string> arn_ {};
        shared_ptr<Targets::HttpRequestTarget> httpRequestTarget_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> uuid_ {};
      };

      class Subscriptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subscriptions& obj) { 
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(StrategyUuid, strategyUuid_);
        };
        friend void from_json(const Darabonba::Json& j, Subscriptions& obj) { 
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(StrategyUuid, strategyUuid_);
        };
        Subscriptions() = default ;
        Subscriptions(const Subscriptions &) = default ;
        Subscriptions(Subscriptions &&) = default ;
        Subscriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subscriptions() = default ;
        Subscriptions& operator=(const Subscriptions &) = default ;
        Subscriptions& operator=(Subscriptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(Op, op_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(Op, op_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->field_ == nullptr
        && this->op_ == nullptr && this->value_ == nullptr; };
          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // op Field Functions 
          bool hasOp() const { return this->op_ != nullptr;};
          void deleteOp() { this->op_ = nullptr;};
          inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
          inline Conditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> field_ {};
          shared_ptr<string> op_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->name_ == nullptr && this->strategyUuid_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Subscriptions::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Subscriptions::Conditions>) };
        inline vector<Subscriptions::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Subscriptions::Conditions>) };
        inline Subscriptions& setConditions(const vector<Subscriptions::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Subscriptions& setConditions(vector<Subscriptions::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Subscriptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // strategyUuid Field Functions 
        bool hasStrategyUuid() const { return this->strategyUuid_ != nullptr;};
        void deleteStrategyUuid() { this->strategyUuid_ = nullptr;};
        inline string getStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(strategyUuid_, "") };
        inline Subscriptions& setStrategyUuid(string strategyUuid) { DARABONBA_PTR_SET_VALUE(strategyUuid_, strategyUuid) };


      protected:
        shared_ptr<vector<Subscriptions::Conditions>> conditions_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> strategyUuid_ {};
      };

      class Strategies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategies& obj) { 
          DARABONBA_PTR_TO_JSON(EscalationSetting, escalationSetting_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PushingSetting, pushingSetting_);
        };
        friend void from_json(const Darabonba::Json& j, Strategies& obj) { 
          DARABONBA_PTR_FROM_JSON(EscalationSetting, escalationSetting_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PushingSetting, pushingSetting_);
        };
        Strategies() = default ;
        Strategies(const Strategies &) = default ;
        Strategies(Strategies &&) = default ;
        Strategies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategies() = default ;
        Strategies& operator=(const Strategies &) = default ;
        Strategies& operator=(Strategies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PushingSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
            DARABONBA_PTR_TO_JSON(TargetUuids, targetUuids_);
          };
          friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(TargetUuids, targetUuids_);
          };
          PushingSetting() = default ;
          PushingSetting(const PushingSetting &) = default ;
          PushingSetting(PushingSetting &&) = default ;
          PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PushingSetting() = default ;
          PushingSetting& operator=(const PushingSetting &) = default ;
          PushingSetting& operator=(PushingSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->targetUuids_ == nullptr; };
          // targetUuids Field Functions 
          bool hasTargetUuids() const { return this->targetUuids_ != nullptr;};
          void deleteTargetUuids() { this->targetUuids_ = nullptr;};
          inline const vector<string> & getTargetUuids() const { DARABONBA_PTR_GET_CONST(targetUuids_, vector<string>) };
          inline vector<string> getTargetUuids() { DARABONBA_PTR_GET(targetUuids_, vector<string>) };
          inline PushingSetting& setTargetUuids(const vector<string> & targetUuids) { DARABONBA_PTR_SET_VALUE(targetUuids_, targetUuids) };
          inline PushingSetting& setTargetUuids(vector<string> && targetUuids) { DARABONBA_PTR_SET_RVALUE(targetUuids_, targetUuids) };


        protected:
          shared_ptr<vector<string>> targetUuids_ {};
        };

        class EscalationSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EscalationSetting& obj) { 
            DARABONBA_PTR_TO_JSON(escalationUuid, escalationUuid_);
          };
          friend void from_json(const Darabonba::Json& j, EscalationSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(escalationUuid, escalationUuid_);
          };
          EscalationSetting() = default ;
          EscalationSetting(const EscalationSetting &) = default ;
          EscalationSetting(EscalationSetting &&) = default ;
          EscalationSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EscalationSetting() = default ;
          EscalationSetting& operator=(const EscalationSetting &) = default ;
          EscalationSetting& operator=(EscalationSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->escalationUuid_ == nullptr; };
          // escalationUuid Field Functions 
          bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
          void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
          inline string getEscalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
          inline EscalationSetting& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


        protected:
          shared_ptr<string> escalationUuid_ {};
        };

        virtual bool empty() const override { return this->escalationSetting_ == nullptr
        && this->name_ == nullptr && this->pushingSetting_ == nullptr; };
        // escalationSetting Field Functions 
        bool hasEscalationSetting() const { return this->escalationSetting_ != nullptr;};
        void deleteEscalationSetting() { this->escalationSetting_ = nullptr;};
        inline const Strategies::EscalationSetting & getEscalationSetting() const { DARABONBA_PTR_GET_CONST(escalationSetting_, Strategies::EscalationSetting) };
        inline Strategies::EscalationSetting getEscalationSetting() { DARABONBA_PTR_GET(escalationSetting_, Strategies::EscalationSetting) };
        inline Strategies& setEscalationSetting(const Strategies::EscalationSetting & escalationSetting) { DARABONBA_PTR_SET_VALUE(escalationSetting_, escalationSetting) };
        inline Strategies& setEscalationSetting(Strategies::EscalationSetting && escalationSetting) { DARABONBA_PTR_SET_RVALUE(escalationSetting_, escalationSetting) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Strategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pushingSetting Field Functions 
        bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
        void deletePushingSetting() { this->pushingSetting_ = nullptr;};
        inline const Strategies::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, Strategies::PushingSetting) };
        inline Strategies::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, Strategies::PushingSetting) };
        inline Strategies& setPushingSetting(const Strategies::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
        inline Strategies& setPushingSetting(Strategies::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


      protected:
        shared_ptr<Strategies::EscalationSetting> escalationSetting_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Strategies::PushingSetting> pushingSetting_ {};
      };

      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contacts_ == nullptr
        && this->name_ == nullptr; };
        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const vector<string> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
        inline vector<string> getContacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
        inline Groups& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline Groups& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Groups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<vector<string>> contacts_ {};
        shared_ptr<string> name_ {};
      };

      class Escalations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
          DARABONBA_PTR_TO_JSON(Escalations, escalations_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
          DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        Escalations() = default ;
        Escalations(const Escalations &) = default ;
        Escalations(Escalations &&) = default ;
        Escalations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Escalations() = default ;
        Escalations& operator=(const Escalations &) = default ;
        Escalations& operator=(Escalations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EscalationsItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EscalationsItem& obj) { 
            DARABONBA_PTR_TO_JSON(Groups, groups_);
            DARABONBA_PTR_TO_JSON(LevelGroups, levelGroups_);
          };
          friend void from_json(const Darabonba::Json& j, EscalationsItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Groups, groups_);
            DARABONBA_PTR_FROM_JSON(LevelGroups, levelGroups_);
          };
          EscalationsItem() = default ;
          EscalationsItem(const EscalationsItem &) = default ;
          EscalationsItem(EscalationsItem &&) = default ;
          EscalationsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EscalationsItem() = default ;
          EscalationsItem& operator=(const EscalationsItem &) = default ;
          EscalationsItem& operator=(EscalationsItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LevelGroups : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LevelGroups& obj) { 
              DARABONBA_PTR_TO_JSON(Critical, critical_);
              DARABONBA_PTR_TO_JSON(Info, info_);
              DARABONBA_PTR_TO_JSON(Resolved, resolved_);
              DARABONBA_PTR_TO_JSON(Warning, warning_);
            };
            friend void from_json(const Darabonba::Json& j, LevelGroups& obj) { 
              DARABONBA_PTR_FROM_JSON(Critical, critical_);
              DARABONBA_PTR_FROM_JSON(Info, info_);
              DARABONBA_PTR_FROM_JSON(Resolved, resolved_);
              DARABONBA_PTR_FROM_JSON(Warning, warning_);
            };
            LevelGroups() = default ;
            LevelGroups(const LevelGroups &) = default ;
            LevelGroups(LevelGroups &&) = default ;
            LevelGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LevelGroups() = default ;
            LevelGroups& operator=(const LevelGroups &) = default ;
            LevelGroups& operator=(LevelGroups &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->critical_ == nullptr
        && this->info_ == nullptr && this->resolved_ == nullptr && this->warning_ == nullptr; };
            // critical Field Functions 
            bool hasCritical() const { return this->critical_ != nullptr;};
            void deleteCritical() { this->critical_ = nullptr;};
            inline const vector<string> & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
            inline vector<string> getCritical() { DARABONBA_PTR_GET(critical_, vector<string>) };
            inline LevelGroups& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
            inline LevelGroups& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline const vector<string> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<string>) };
            inline vector<string> getInfo() { DARABONBA_PTR_GET(info_, vector<string>) };
            inline LevelGroups& setInfo(const vector<string> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
            inline LevelGroups& setInfo(vector<string> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


            // resolved Field Functions 
            bool hasResolved() const { return this->resolved_ != nullptr;};
            void deleteResolved() { this->resolved_ = nullptr;};
            inline const vector<string> & getResolved() const { DARABONBA_PTR_GET_CONST(resolved_, vector<string>) };
            inline vector<string> getResolved() { DARABONBA_PTR_GET(resolved_, vector<string>) };
            inline LevelGroups& setResolved(const vector<string> & resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };
            inline LevelGroups& setResolved(vector<string> && resolved) { DARABONBA_PTR_SET_RVALUE(resolved_, resolved) };


            // warning Field Functions 
            bool hasWarning() const { return this->warning_ != nullptr;};
            void deleteWarning() { this->warning_ = nullptr;};
            inline const vector<string> & getWarning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
            inline vector<string> getWarning() { DARABONBA_PTR_GET(warning_, vector<string>) };
            inline LevelGroups& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
            inline LevelGroups& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


          protected:
            shared_ptr<vector<string>> critical_ {};
            shared_ptr<vector<string>> info_ {};
            shared_ptr<vector<string>> resolved_ {};
            shared_ptr<vector<string>> warning_ {};
          };

          virtual bool empty() const override { return this->groups_ == nullptr
        && this->levelGroups_ == nullptr; };
          // groups Field Functions 
          bool hasGroups() const { return this->groups_ != nullptr;};
          void deleteGroups() { this->groups_ = nullptr;};
          inline const vector<string> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
          inline vector<string> getGroups() { DARABONBA_PTR_GET(groups_, vector<string>) };
          inline EscalationsItem& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
          inline EscalationsItem& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


          // levelGroups Field Functions 
          bool hasLevelGroups() const { return this->levelGroups_ != nullptr;};
          void deleteLevelGroups() { this->levelGroups_ = nullptr;};
          inline const EscalationsItem::LevelGroups & getLevelGroups() const { DARABONBA_PTR_GET_CONST(levelGroups_, EscalationsItem::LevelGroups) };
          inline EscalationsItem::LevelGroups getLevelGroups() { DARABONBA_PTR_GET(levelGroups_, EscalationsItem::LevelGroups) };
          inline EscalationsItem& setLevelGroups(const EscalationsItem::LevelGroups & levelGroups) { DARABONBA_PTR_SET_VALUE(levelGroups_, levelGroups) };
          inline EscalationsItem& setLevelGroups(EscalationsItem::LevelGroups && levelGroups) { DARABONBA_PTR_SET_RVALUE(levelGroups_, levelGroups) };


        protected:
          shared_ptr<vector<string>> groups_ {};
          shared_ptr<EscalationsItem::LevelGroups> levelGroups_ {};
        };

        virtual bool empty() const override { return this->escalations_ == nullptr
        && this->name_ == nullptr && this->uuid_ == nullptr; };
        // escalations Field Functions 
        bool hasEscalations() const { return this->escalations_ != nullptr;};
        void deleteEscalations() { this->escalations_ = nullptr;};
        inline const vector<Escalations::EscalationsItem> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Escalations::EscalationsItem>) };
        inline vector<Escalations::EscalationsItem> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<Escalations::EscalationsItem>) };
        inline Escalations& setEscalations(const vector<Escalations::EscalationsItem> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
        inline Escalations& setEscalations(vector<Escalations::EscalationsItem> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Escalations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Escalations& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<vector<Escalations::EscalationsItem>> escalations_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> uuid_ {};
      };

      class Contacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Contacts() = default ;
        Contacts(const Contacts &) = default ;
        Contacts(Contacts &&) = default ;
        Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contacts() = default ;
        Contacts& operator=(const Contacts &) = default ;
        Contacts& operator=(Contacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Channels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Channels& obj) { 
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Channels& obj) { 
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Channels() = default ;
          Channels(const Channels &) = default ;
          Channels(Channels &&) = default ;
          Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Channels() = default ;
          Channels& operator=(const Channels &) = default ;
          Channels& operator=(Channels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->level_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
          inline Channels& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Channels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Channels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<int64_t> level_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->channels_ == nullptr
        && this->name_ == nullptr; };
        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline const vector<Contacts::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Contacts::Channels>) };
        inline vector<Contacts::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<Contacts::Channels>) };
        inline Contacts& setChannels(const vector<Contacts::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline Contacts& setChannels(vector<Contacts::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Contacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<vector<Contacts::Channels>> channels_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->contacts_ == nullptr
        && this->escalations_ == nullptr && this->groups_ == nullptr && this->ruleNames_ == nullptr && this->strategies_ == nullptr && this->subscriptions_ == nullptr
        && this->targets_ == nullptr; };
      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<Plan::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Plan::Contacts>) };
      inline vector<Plan::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<Plan::Contacts>) };
      inline Plan& setContacts(const vector<Plan::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline Plan& setContacts(vector<Plan::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // escalations Field Functions 
      bool hasEscalations() const { return this->escalations_ != nullptr;};
      void deleteEscalations() { this->escalations_ = nullptr;};
      inline const vector<Plan::Escalations> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Plan::Escalations>) };
      inline vector<Plan::Escalations> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<Plan::Escalations>) };
      inline Plan& setEscalations(const vector<Plan::Escalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
      inline Plan& setEscalations(vector<Plan::Escalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<Plan::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Plan::Groups>) };
      inline vector<Plan::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<Plan::Groups>) };
      inline Plan& setGroups(const vector<Plan::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Plan& setGroups(vector<Plan::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // ruleNames Field Functions 
      bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
      void deleteRuleNames() { this->ruleNames_ = nullptr;};
      inline const vector<string> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
      inline vector<string> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
      inline Plan& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
      inline Plan& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


      // strategies Field Functions 
      bool hasStrategies() const { return this->strategies_ != nullptr;};
      void deleteStrategies() { this->strategies_ = nullptr;};
      inline const vector<Plan::Strategies> & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<Plan::Strategies>) };
      inline vector<Plan::Strategies> getStrategies() { DARABONBA_PTR_GET(strategies_, vector<Plan::Strategies>) };
      inline Plan& setStrategies(const vector<Plan::Strategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
      inline Plan& setStrategies(vector<Plan::Strategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


      // subscriptions Field Functions 
      bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
      void deleteSubscriptions() { this->subscriptions_ = nullptr;};
      inline const vector<Plan::Subscriptions> & getSubscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<Plan::Subscriptions>) };
      inline vector<Plan::Subscriptions> getSubscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<Plan::Subscriptions>) };
      inline Plan& setSubscriptions(const vector<Plan::Subscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
      inline Plan& setSubscriptions(vector<Plan::Subscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Plan::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Plan::Targets>) };
      inline vector<Plan::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Plan::Targets>) };
      inline Plan& setTargets(const vector<Plan::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Plan& setTargets(vector<Plan::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      shared_ptr<vector<Plan::Contacts>> contacts_ {};
      shared_ptr<vector<Plan::Escalations>> escalations_ {};
      shared_ptr<vector<Plan::Groups>> groups_ {};
      shared_ptr<vector<string>> ruleNames_ {};
      shared_ptr<vector<Plan::Strategies>> strategies_ {};
      shared_ptr<vector<Plan::Subscriptions>> subscriptions_ {};
      shared_ptr<vector<Plan::Targets>> targets_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->detail_ == nullptr && this->jobStatus_ == nullptr && this->plan_ == nullptr && this->ruleNames_ == nullptr && this->source_ == nullptr
        && this->updateTime_ == nullptr && this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MigrationJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline MigrationJob& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline MigrationJob& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline const MigrationJob::Plan & getPlan() const { DARABONBA_PTR_GET_CONST(plan_, MigrationJob::Plan) };
    inline MigrationJob::Plan getPlan() { DARABONBA_PTR_GET(plan_, MigrationJob::Plan) };
    inline MigrationJob& setPlan(const MigrationJob::Plan & plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };
    inline MigrationJob& setPlan(MigrationJob::Plan && plan) { DARABONBA_PTR_SET_RVALUE(plan_, plan) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline MigrationJob& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline MigrationJob& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<MigrationJob::Source> & getSource() const { DARABONBA_PTR_GET_CONST(source_, vector<MigrationJob::Source>) };
    inline vector<MigrationJob::Source> getSource() { DARABONBA_PTR_GET(source_, vector<MigrationJob::Source>) };
    inline MigrationJob& setSource(const vector<MigrationJob::Source> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline MigrationJob& setSource(vector<MigrationJob::Source> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline MigrationJob& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline MigrationJob& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> detail_ {};
    shared_ptr<string> jobStatus_ {};
    shared_ptr<MigrationJob::Plan> plan_ {};
    shared_ptr<vector<string>> ruleNames_ {};
    shared_ptr<vector<MigrationJob::Source>> source_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
