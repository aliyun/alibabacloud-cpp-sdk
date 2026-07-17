// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateAppResponseBody() = default ;
    CreateAppResponseBody(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody(CreateAppResponseBody &&) = default ;
    CreateAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBody() = default ;
    CreateAppResponseBody& operator=(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody& operator=(CreateAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(cluster, cluster_);
        DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(configItems, configItems_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(fetchFields, fetchFields_);
        DARABONBA_PTR_TO_JSON(firstRanks, firstRanks_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(interpretations, interpretations_);
        DARABONBA_PTR_TO_JSON(isCurrent, isCurrent_);
        DARABONBA_PTR_TO_JSON(progressPercent, progressPercent_);
        DARABONBA_PTR_TO_JSON(prompts, prompts_);
        DARABONBA_PTR_TO_JSON(queryProcessors, queryProcessors_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
        DARABONBA_PTR_TO_JSON(schema, schema_);
        DARABONBA_PTR_TO_JSON(schemas, schemas_);
        DARABONBA_PTR_TO_JSON(secondRanks, secondRanks_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(summaries, summaries_);
        DARABONBA_PTR_TO_JSON(switchTime, switchTime_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(configItems, configItems_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(fetchFields, fetchFields_);
        DARABONBA_PTR_FROM_JSON(firstRanks, firstRanks_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(interpretations, interpretations_);
        DARABONBA_PTR_FROM_JSON(isCurrent, isCurrent_);
        DARABONBA_PTR_FROM_JSON(progressPercent, progressPercent_);
        DARABONBA_PTR_FROM_JSON(prompts, prompts_);
        DARABONBA_PTR_FROM_JSON(queryProcessors, queryProcessors_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
        DARABONBA_PTR_FROM_JSON(schema, schema_);
        DARABONBA_PTR_FROM_JSON(schemas, schemas_);
        DARABONBA_PTR_FROM_JSON(secondRanks, secondRanks_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(summaries, summaries_);
        DARABONBA_PTR_FROM_JSON(switchTime, switchTime_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Summaries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summaries& obj) { 
          DARABONBA_PTR_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Summaries& obj) { 
          DARABONBA_PTR_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Summaries() = default ;
        Summaries(const Summaries &) = default ;
        Summaries(Summaries &&) = default ;
        Summaries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summaries() = default ;
        Summaries& operator=(const Summaries &) = default ;
        Summaries& operator=(Summaries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Meta : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Meta& obj) { 
            DARABONBA_PTR_TO_JSON(element, element_);
            DARABONBA_PTR_TO_JSON(ellipsis, ellipsis_);
            DARABONBA_PTR_TO_JSON(field, field_);
            DARABONBA_PTR_TO_JSON(len, len_);
            DARABONBA_PTR_TO_JSON(snippet, snippet_);
          };
          friend void from_json(const Darabonba::Json& j, Meta& obj) { 
            DARABONBA_PTR_FROM_JSON(element, element_);
            DARABONBA_PTR_FROM_JSON(ellipsis, ellipsis_);
            DARABONBA_PTR_FROM_JSON(field, field_);
            DARABONBA_PTR_FROM_JSON(len, len_);
            DARABONBA_PTR_FROM_JSON(snippet, snippet_);
          };
          Meta() = default ;
          Meta(const Meta &) = default ;
          Meta(Meta &&) = default ;
          Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Meta() = default ;
          Meta& operator=(const Meta &) = default ;
          Meta& operator=(Meta &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->element_ == nullptr
        && this->ellipsis_ == nullptr && this->field_ == nullptr && this->len_ == nullptr && this->snippet_ == nullptr; };
          // element Field Functions 
          bool hasElement() const { return this->element_ != nullptr;};
          void deleteElement() { this->element_ = nullptr;};
          inline string getElement() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
          inline Meta& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


          // ellipsis Field Functions 
          bool hasEllipsis() const { return this->ellipsis_ != nullptr;};
          void deleteEllipsis() { this->ellipsis_ = nullptr;};
          inline string getEllipsis() const { DARABONBA_PTR_GET_DEFAULT(ellipsis_, "") };
          inline Meta& setEllipsis(string ellipsis) { DARABONBA_PTR_SET_VALUE(ellipsis_, ellipsis) };


          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline Meta& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // len Field Functions 
          bool hasLen() const { return this->len_ != nullptr;};
          void deleteLen() { this->len_ = nullptr;};
          inline int32_t getLen() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
          inline Meta& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


          // snippet Field Functions 
          bool hasSnippet() const { return this->snippet_ != nullptr;};
          void deleteSnippet() { this->snippet_ = nullptr;};
          inline string getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
          inline Meta& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


        protected:
          // The HTML tag for highlight.
          shared_ptr<string> element_ {};
          // The string used to connect snippets.
          shared_ptr<string> ellipsis_ {};
          // The field.
          shared_ptr<string> field_ {};
          // The length of the snippet. The value must be in the range of [1, 300].
          shared_ptr<int32_t> len_ {};
          // The number of snippets. The value must be in the range of [1, 5].
          shared_ptr<string> snippet_ {};
        };

        virtual bool empty() const override { return this->meta_ == nullptr
        && this->name_ == nullptr; };
        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline const vector<Summaries::Meta> & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Summaries::Meta>) };
        inline vector<Summaries::Meta> getMeta() { DARABONBA_PTR_GET(meta_, vector<Summaries::Meta>) };
        inline Summaries& setMeta(const vector<Summaries::Meta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
        inline Summaries& setMeta(vector<Summaries::Meta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Summaries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The summary configurations.
        shared_ptr<vector<Summaries::Meta>> meta_ {};
        // The group name.
        shared_ptr<string> name_ {};
      };

      class SecondRanks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecondRanks& obj) { 
          DARABONBA_PTR_TO_JSON(active, active_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_ANY_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, SecondRanks& obj) { 
          DARABONBA_PTR_FROM_JSON(active, active_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_ANY_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        SecondRanks() = default ;
        SecondRanks(const SecondRanks &) = default ;
        SecondRanks(SecondRanks &&) = default ;
        SecondRanks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecondRanks() = default ;
        SecondRanks& operator=(const SecondRanks &) = default ;
        SecondRanks& operator=(SecondRanks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline SecondRanks& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SecondRanks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline         const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
        Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
        inline SecondRanks& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
        inline SecondRanks& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SecondRanks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Specifies whether the expression is the default one.
        shared_ptr<bool> active_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The fine sort expression. You can write an expression that contains fields, feature functions, and mathematical functions to implement complex sort logic.
        Darabonba::Json meta_ {};
        // The name of the fine sort expression.
        shared_ptr<string> name_ {};
      };

      class Schemas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
          DARABONBA_PTR_TO_JSON(indexSortConfig, indexSortConfig_);
          DARABONBA_PTR_TO_JSON(indexes, indexes_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(routeField, routeField_);
          DARABONBA_PTR_TO_JSON(routeFieldValues, routeFieldValues_);
          DARABONBA_PTR_TO_JSON(secondRouteField, secondRouteField_);
          DARABONBA_ANY_TO_JSON(tables, tables_);
          DARABONBA_PTR_TO_JSON(ttlField, ttlField_);
        };
        friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
          DARABONBA_PTR_FROM_JSON(indexSortConfig, indexSortConfig_);
          DARABONBA_PTR_FROM_JSON(indexes, indexes_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(routeField, routeField_);
          DARABONBA_PTR_FROM_JSON(routeFieldValues, routeFieldValues_);
          DARABONBA_PTR_FROM_JSON(secondRouteField, secondRouteField_);
          DARABONBA_ANY_FROM_JSON(tables, tables_);
          DARABONBA_PTR_FROM_JSON(ttlField, ttlField_);
        };
        Schemas() = default ;
        Schemas(const Schemas &) = default ;
        Schemas(Schemas &&) = default ;
        Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schemas() = default ;
        Schemas& operator=(const Schemas &) = default ;
        Schemas& operator=(Schemas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TtlField : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TtlField& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(ttl, ttl_);
          };
          friend void from_json(const Darabonba::Json& j, TtlField& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(ttl, ttl_);
          };
          TtlField() = default ;
          TtlField(const TtlField &) = default ;
          TtlField(TtlField &&) = default ;
          TtlField(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TtlField() = default ;
          TtlField& operator=(const TtlField &) = default ;
          TtlField& operator=(TtlField &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->ttl_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TtlField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ttl Field Functions 
          bool hasTtl() const { return this->ttl_ != nullptr;};
          void deleteTtl() { this->ttl_ = nullptr;};
          inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
          inline TtlField& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        protected:
          // The document time field.
          shared_ptr<string> name_ {};
          // The time to live (TTL), in milliseconds.
          shared_ptr<int64_t> ttl_ {};
        };

        class Indexes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Indexes& obj) { 
            DARABONBA_PTR_TO_JSON(filterFields, filterFields_);
            DARABONBA_ANY_TO_JSON(searchFields, searchFields_);
          };
          friend void from_json(const Darabonba::Json& j, Indexes& obj) { 
            DARABONBA_PTR_FROM_JSON(filterFields, filterFields_);
            DARABONBA_ANY_FROM_JSON(searchFields, searchFields_);
          };
          Indexes() = default ;
          Indexes(const Indexes &) = default ;
          Indexes(Indexes &&) = default ;
          Indexes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Indexes() = default ;
          Indexes& operator=(const Indexes &) = default ;
          Indexes& operator=(Indexes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->filterFields_ == nullptr
        && this->searchFields_ == nullptr; };
          // filterFields Field Functions 
          bool hasFilterFields() const { return this->filterFields_ != nullptr;};
          void deleteFilterFields() { this->filterFields_ = nullptr;};
          inline const vector<string> & getFilterFields() const { DARABONBA_PTR_GET_CONST(filterFields_, vector<string>) };
          inline vector<string> getFilterFields() { DARABONBA_PTR_GET(filterFields_, vector<string>) };
          inline Indexes& setFilterFields(const vector<string> & filterFields) { DARABONBA_PTR_SET_VALUE(filterFields_, filterFields) };
          inline Indexes& setFilterFields(vector<string> && filterFields) { DARABONBA_PTR_SET_RVALUE(filterFields_, filterFields) };


          // searchFields Field Functions 
          bool hasSearchFields() const { return this->searchFields_ != nullptr;};
          void deleteSearchFields() { this->searchFields_ = nullptr;};
          inline           const Darabonba::Json & getSearchFields() const { DARABONBA_GET(searchFields_) };
          Darabonba::Json & getSearchFields() { DARABONBA_GET(searchFields_) };
          inline Indexes& setSearchFields(const Darabonba::Json & searchFields) { DARABONBA_SET_VALUE(searchFields_, searchFields) };
          inline Indexes& setSearchFields(Darabonba::Json && searchFields) { DARABONBA_SET_RVALUE(searchFields_, searchFields) };


        protected:
          // The attribute fields.
          shared_ptr<vector<string>> filterFields_ {};
          // The index fields.
          Darabonba::Json searchFields_ {};
        };

        class IndexSortConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IndexSortConfig& obj) { 
            DARABONBA_PTR_TO_JSON(direction, direction_);
            DARABONBA_PTR_TO_JSON(field, field_);
          };
          friend void from_json(const Darabonba::Json& j, IndexSortConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(direction, direction_);
            DARABONBA_PTR_FROM_JSON(field, field_);
          };
          IndexSortConfig() = default ;
          IndexSortConfig(const IndexSortConfig &) = default ;
          IndexSortConfig(IndexSortConfig &&) = default ;
          IndexSortConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IndexSortConfig() = default ;
          IndexSortConfig& operator=(const IndexSortConfig &) = default ;
          IndexSortConfig& operator=(IndexSortConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->direction_ == nullptr
        && this->field_ == nullptr; };
          // direction Field Functions 
          bool hasDirection() const { return this->direction_ != nullptr;};
          void deleteDirection() { this->direction_ = nullptr;};
          inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
          inline IndexSortConfig& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline IndexSortConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        protected:
          // The sort order.
          // 
          // - ASC
          // 
          // - DESC
          shared_ptr<string> direction_ {};
          // The sort field.
          shared_ptr<string> field_ {};
        };

        virtual bool empty() const override { return this->indexSortConfig_ == nullptr
        && this->indexes_ == nullptr && this->name_ == nullptr && this->routeField_ == nullptr && this->routeFieldValues_ == nullptr && this->secondRouteField_ == nullptr
        && this->tables_ == nullptr && this->ttlField_ == nullptr; };
        // indexSortConfig Field Functions 
        bool hasIndexSortConfig() const { return this->indexSortConfig_ != nullptr;};
        void deleteIndexSortConfig() { this->indexSortConfig_ = nullptr;};
        inline const vector<Schemas::IndexSortConfig> & getIndexSortConfig() const { DARABONBA_PTR_GET_CONST(indexSortConfig_, vector<Schemas::IndexSortConfig>) };
        inline vector<Schemas::IndexSortConfig> getIndexSortConfig() { DARABONBA_PTR_GET(indexSortConfig_, vector<Schemas::IndexSortConfig>) };
        inline Schemas& setIndexSortConfig(const vector<Schemas::IndexSortConfig> & indexSortConfig) { DARABONBA_PTR_SET_VALUE(indexSortConfig_, indexSortConfig) };
        inline Schemas& setIndexSortConfig(vector<Schemas::IndexSortConfig> && indexSortConfig) { DARABONBA_PTR_SET_RVALUE(indexSortConfig_, indexSortConfig) };


        // indexes Field Functions 
        bool hasIndexes() const { return this->indexes_ != nullptr;};
        void deleteIndexes() { this->indexes_ = nullptr;};
        inline const Schemas::Indexes & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, Schemas::Indexes) };
        inline Schemas::Indexes getIndexes() { DARABONBA_PTR_GET(indexes_, Schemas::Indexes) };
        inline Schemas& setIndexes(const Schemas::Indexes & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
        inline Schemas& setIndexes(Schemas::Indexes && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Schemas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // routeField Field Functions 
        bool hasRouteField() const { return this->routeField_ != nullptr;};
        void deleteRouteField() { this->routeField_ = nullptr;};
        inline string getRouteField() const { DARABONBA_PTR_GET_DEFAULT(routeField_, "") };
        inline Schemas& setRouteField(string routeField) { DARABONBA_PTR_SET_VALUE(routeField_, routeField) };


        // routeFieldValues Field Functions 
        bool hasRouteFieldValues() const { return this->routeFieldValues_ != nullptr;};
        void deleteRouteFieldValues() { this->routeFieldValues_ = nullptr;};
        inline const vector<string> & getRouteFieldValues() const { DARABONBA_PTR_GET_CONST(routeFieldValues_, vector<string>) };
        inline vector<string> getRouteFieldValues() { DARABONBA_PTR_GET(routeFieldValues_, vector<string>) };
        inline Schemas& setRouteFieldValues(const vector<string> & routeFieldValues) { DARABONBA_PTR_SET_VALUE(routeFieldValues_, routeFieldValues) };
        inline Schemas& setRouteFieldValues(vector<string> && routeFieldValues) { DARABONBA_PTR_SET_RVALUE(routeFieldValues_, routeFieldValues) };


        // secondRouteField Field Functions 
        bool hasSecondRouteField() const { return this->secondRouteField_ != nullptr;};
        void deleteSecondRouteField() { this->secondRouteField_ = nullptr;};
        inline string getSecondRouteField() const { DARABONBA_PTR_GET_DEFAULT(secondRouteField_, "") };
        inline Schemas& setSecondRouteField(string secondRouteField) { DARABONBA_PTR_SET_VALUE(secondRouteField_, secondRouteField) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline         const Darabonba::Json & getTables() const { DARABONBA_GET(tables_) };
        Darabonba::Json & getTables() { DARABONBA_GET(tables_) };
        inline Schemas& setTables(const Darabonba::Json & tables) { DARABONBA_SET_VALUE(tables_, tables) };
        inline Schemas& setTables(Darabonba::Json && tables) { DARABONBA_SET_RVALUE(tables_, tables) };


        // ttlField Field Functions 
        bool hasTtlField() const { return this->ttlField_ != nullptr;};
        void deleteTtlField() { this->ttlField_ = nullptr;};
        inline const Schemas::TtlField & getTtlField() const { DARABONBA_PTR_GET_CONST(ttlField_, Schemas::TtlField) };
        inline Schemas::TtlField getTtlField() { DARABONBA_PTR_GET(ttlField_, Schemas::TtlField) };
        inline Schemas& setTtlField(const Schemas::TtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
        inline Schemas& setTtlField(Schemas::TtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


      protected:
        // The inverted index configuration.
        shared_ptr<vector<Schemas::IndexSortConfig>> indexSortConfig_ {};
        // The index schema.
        shared_ptr<Schemas::Indexes> indexes_ {};
        // The name of the wide table.
        shared_ptr<string> name_ {};
        // The name of the level-1 routing field.
        shared_ptr<string> routeField_ {};
        // The list of hotspot values for the level-1 routing field. After you configure this parameter, level-2 routing is enabled.
        shared_ptr<vector<string>> routeFieldValues_ {};
        // The name of the level-2 routing field. This parameter takes effect only when routeFieldValues is configured. By default, the primary key of the wide table is used.
        shared_ptr<string> secondRouteField_ {};
        // The table schema.
        Darabonba::Json tables_ {};
        // The document expiration configuration.
        shared_ptr<Schemas::TtlField> ttlField_ {};
      };

      class Schema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schema& obj) { 
          DARABONBA_PTR_TO_JSON(indexSortConfig, indexSortConfig_);
          DARABONBA_PTR_TO_JSON(indexes, indexes_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(routeField, routeField_);
          DARABONBA_PTR_TO_JSON(routeFieldValues, routeFieldValues_);
          DARABONBA_PTR_TO_JSON(secondRouteField, secondRouteField_);
          DARABONBA_ANY_TO_JSON(tables, tables_);
          DARABONBA_PTR_TO_JSON(ttlField, ttlField_);
        };
        friend void from_json(const Darabonba::Json& j, Schema& obj) { 
          DARABONBA_PTR_FROM_JSON(indexSortConfig, indexSortConfig_);
          DARABONBA_PTR_FROM_JSON(indexes, indexes_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(routeField, routeField_);
          DARABONBA_PTR_FROM_JSON(routeFieldValues, routeFieldValues_);
          DARABONBA_PTR_FROM_JSON(secondRouteField, secondRouteField_);
          DARABONBA_ANY_FROM_JSON(tables, tables_);
          DARABONBA_PTR_FROM_JSON(ttlField, ttlField_);
        };
        Schema() = default ;
        Schema(const Schema &) = default ;
        Schema(Schema &&) = default ;
        Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Schema() = default ;
        Schema& operator=(const Schema &) = default ;
        Schema& operator=(Schema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TtlField : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TtlField& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(ttl, ttl_);
          };
          friend void from_json(const Darabonba::Json& j, TtlField& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(ttl, ttl_);
          };
          TtlField() = default ;
          TtlField(const TtlField &) = default ;
          TtlField(TtlField &&) = default ;
          TtlField(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TtlField() = default ;
          TtlField& operator=(const TtlField &) = default ;
          TtlField& operator=(TtlField &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->ttl_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TtlField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ttl Field Functions 
          bool hasTtl() const { return this->ttl_ != nullptr;};
          void deleteTtl() { this->ttl_ = nullptr;};
          inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
          inline TtlField& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        protected:
          // The document time field.
          shared_ptr<string> name_ {};
          // The time to live (TTL), in milliseconds.
          shared_ptr<int64_t> ttl_ {};
        };

        class Indexes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Indexes& obj) { 
            DARABONBA_PTR_TO_JSON(filterFields, filterFields_);
            DARABONBA_ANY_TO_JSON(searchFields, searchFields_);
          };
          friend void from_json(const Darabonba::Json& j, Indexes& obj) { 
            DARABONBA_PTR_FROM_JSON(filterFields, filterFields_);
            DARABONBA_ANY_FROM_JSON(searchFields, searchFields_);
          };
          Indexes() = default ;
          Indexes(const Indexes &) = default ;
          Indexes(Indexes &&) = default ;
          Indexes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Indexes() = default ;
          Indexes& operator=(const Indexes &) = default ;
          Indexes& operator=(Indexes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->filterFields_ == nullptr
        && this->searchFields_ == nullptr; };
          // filterFields Field Functions 
          bool hasFilterFields() const { return this->filterFields_ != nullptr;};
          void deleteFilterFields() { this->filterFields_ = nullptr;};
          inline const vector<string> & getFilterFields() const { DARABONBA_PTR_GET_CONST(filterFields_, vector<string>) };
          inline vector<string> getFilterFields() { DARABONBA_PTR_GET(filterFields_, vector<string>) };
          inline Indexes& setFilterFields(const vector<string> & filterFields) { DARABONBA_PTR_SET_VALUE(filterFields_, filterFields) };
          inline Indexes& setFilterFields(vector<string> && filterFields) { DARABONBA_PTR_SET_RVALUE(filterFields_, filterFields) };


          // searchFields Field Functions 
          bool hasSearchFields() const { return this->searchFields_ != nullptr;};
          void deleteSearchFields() { this->searchFields_ = nullptr;};
          inline           const Darabonba::Json & getSearchFields() const { DARABONBA_GET(searchFields_) };
          Darabonba::Json & getSearchFields() { DARABONBA_GET(searchFields_) };
          inline Indexes& setSearchFields(const Darabonba::Json & searchFields) { DARABONBA_SET_VALUE(searchFields_, searchFields) };
          inline Indexes& setSearchFields(Darabonba::Json && searchFields) { DARABONBA_SET_RVALUE(searchFields_, searchFields) };


        protected:
          // The attribute fields.
          shared_ptr<vector<string>> filterFields_ {};
          // The index fields.
          Darabonba::Json searchFields_ {};
        };

        class IndexSortConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IndexSortConfig& obj) { 
            DARABONBA_PTR_TO_JSON(direction, direction_);
            DARABONBA_PTR_TO_JSON(field, field_);
          };
          friend void from_json(const Darabonba::Json& j, IndexSortConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(direction, direction_);
            DARABONBA_PTR_FROM_JSON(field, field_);
          };
          IndexSortConfig() = default ;
          IndexSortConfig(const IndexSortConfig &) = default ;
          IndexSortConfig(IndexSortConfig &&) = default ;
          IndexSortConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IndexSortConfig() = default ;
          IndexSortConfig& operator=(const IndexSortConfig &) = default ;
          IndexSortConfig& operator=(IndexSortConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->direction_ == nullptr
        && this->field_ == nullptr; };
          // direction Field Functions 
          bool hasDirection() const { return this->direction_ != nullptr;};
          void deleteDirection() { this->direction_ = nullptr;};
          inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
          inline IndexSortConfig& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline IndexSortConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        protected:
          // The sort order.
          // 
          // - ASC
          // 
          // - DESC
          shared_ptr<string> direction_ {};
          // The sort field.
          shared_ptr<string> field_ {};
        };

        virtual bool empty() const override { return this->indexSortConfig_ == nullptr
        && this->indexes_ == nullptr && this->name_ == nullptr && this->routeField_ == nullptr && this->routeFieldValues_ == nullptr && this->secondRouteField_ == nullptr
        && this->tables_ == nullptr && this->ttlField_ == nullptr; };
        // indexSortConfig Field Functions 
        bool hasIndexSortConfig() const { return this->indexSortConfig_ != nullptr;};
        void deleteIndexSortConfig() { this->indexSortConfig_ = nullptr;};
        inline const vector<Schema::IndexSortConfig> & getIndexSortConfig() const { DARABONBA_PTR_GET_CONST(indexSortConfig_, vector<Schema::IndexSortConfig>) };
        inline vector<Schema::IndexSortConfig> getIndexSortConfig() { DARABONBA_PTR_GET(indexSortConfig_, vector<Schema::IndexSortConfig>) };
        inline Schema& setIndexSortConfig(const vector<Schema::IndexSortConfig> & indexSortConfig) { DARABONBA_PTR_SET_VALUE(indexSortConfig_, indexSortConfig) };
        inline Schema& setIndexSortConfig(vector<Schema::IndexSortConfig> && indexSortConfig) { DARABONBA_PTR_SET_RVALUE(indexSortConfig_, indexSortConfig) };


        // indexes Field Functions 
        bool hasIndexes() const { return this->indexes_ != nullptr;};
        void deleteIndexes() { this->indexes_ = nullptr;};
        inline const Schema::Indexes & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, Schema::Indexes) };
        inline Schema::Indexes getIndexes() { DARABONBA_PTR_GET(indexes_, Schema::Indexes) };
        inline Schema& setIndexes(const Schema::Indexes & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
        inline Schema& setIndexes(Schema::Indexes && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Schema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // routeField Field Functions 
        bool hasRouteField() const { return this->routeField_ != nullptr;};
        void deleteRouteField() { this->routeField_ = nullptr;};
        inline string getRouteField() const { DARABONBA_PTR_GET_DEFAULT(routeField_, "") };
        inline Schema& setRouteField(string routeField) { DARABONBA_PTR_SET_VALUE(routeField_, routeField) };


        // routeFieldValues Field Functions 
        bool hasRouteFieldValues() const { return this->routeFieldValues_ != nullptr;};
        void deleteRouteFieldValues() { this->routeFieldValues_ = nullptr;};
        inline const vector<string> & getRouteFieldValues() const { DARABONBA_PTR_GET_CONST(routeFieldValues_, vector<string>) };
        inline vector<string> getRouteFieldValues() { DARABONBA_PTR_GET(routeFieldValues_, vector<string>) };
        inline Schema& setRouteFieldValues(const vector<string> & routeFieldValues) { DARABONBA_PTR_SET_VALUE(routeFieldValues_, routeFieldValues) };
        inline Schema& setRouteFieldValues(vector<string> && routeFieldValues) { DARABONBA_PTR_SET_RVALUE(routeFieldValues_, routeFieldValues) };


        // secondRouteField Field Functions 
        bool hasSecondRouteField() const { return this->secondRouteField_ != nullptr;};
        void deleteSecondRouteField() { this->secondRouteField_ = nullptr;};
        inline string getSecondRouteField() const { DARABONBA_PTR_GET_DEFAULT(secondRouteField_, "") };
        inline Schema& setSecondRouteField(string secondRouteField) { DARABONBA_PTR_SET_VALUE(secondRouteField_, secondRouteField) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline         const Darabonba::Json & getTables() const { DARABONBA_GET(tables_) };
        Darabonba::Json & getTables() { DARABONBA_GET(tables_) };
        inline Schema& setTables(const Darabonba::Json & tables) { DARABONBA_SET_VALUE(tables_, tables) };
        inline Schema& setTables(Darabonba::Json && tables) { DARABONBA_SET_RVALUE(tables_, tables) };


        // ttlField Field Functions 
        bool hasTtlField() const { return this->ttlField_ != nullptr;};
        void deleteTtlField() { this->ttlField_ = nullptr;};
        inline const Schema::TtlField & getTtlField() const { DARABONBA_PTR_GET_CONST(ttlField_, Schema::TtlField) };
        inline Schema::TtlField getTtlField() { DARABONBA_PTR_GET(ttlField_, Schema::TtlField) };
        inline Schema& setTtlField(const Schema::TtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
        inline Schema& setTtlField(Schema::TtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


      protected:
        // The inverted index configurations.
        shared_ptr<vector<Schema::IndexSortConfig>> indexSortConfig_ {};
        // The index schema.
        shared_ptr<Schema::Indexes> indexes_ {};
        // The name of the wide table.
        shared_ptr<string> name_ {};
        // The name of the level-1 routing field.
        shared_ptr<string> routeField_ {};
        // The name of the level-2 routing field. This parameter takes effect only when routeFieldValues is configured. By default, the primary key of the wide table is used.
        shared_ptr<vector<string>> routeFieldValues_ {};
        // The name of the level-2 routing field. This parameter takes effect only when routeFieldValues is configured. By default, the primary key of the wide table is used.
        shared_ptr<string> secondRouteField_ {};
        // The table schema.
        Darabonba::Json tables_ {};
        // The document expiration configuration.
        shared_ptr<Schema::TtlField> ttlField_ {};
      };

      class Quota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quota& obj) { 
          DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(docSize, docSize_);
          DARABONBA_PTR_TO_JSON(qps, qps_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(usedComputeResource, usedComputeResource_);
          DARABONBA_PTR_TO_JSON(usedDocSize, usedDocSize_);
          DARABONBA_PTR_TO_JSON(usedQps, usedQps_);
        };
        friend void from_json(const Darabonba::Json& j, Quota& obj) { 
          DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(docSize, docSize_);
          DARABONBA_PTR_FROM_JSON(qps, qps_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(usedComputeResource, usedComputeResource_);
          DARABONBA_PTR_FROM_JSON(usedDocSize, usedDocSize_);
          DARABONBA_PTR_FROM_JSON(usedQps, usedQps_);
        };
        Quota() = default ;
        Quota(const Quota &) = default ;
        Quota(Quota &&) = default ;
        Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quota() = default ;
        Quota& operator=(const Quota &) = default ;
        Quota& operator=(Quota &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->docSize_ == nullptr && this->qps_ == nullptr && this->spec_ == nullptr && this->usedComputeResource_ == nullptr && this->usedDocSize_ == nullptr
        && this->usedQps_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline int32_t getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
        inline Quota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


        // docSize Field Functions 
        bool hasDocSize() const { return this->docSize_ != nullptr;};
        void deleteDocSize() { this->docSize_ = nullptr;};
        inline int32_t getDocSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
        inline Quota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
        inline Quota& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Quota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // usedComputeResource Field Functions 
        bool hasUsedComputeResource() const { return this->usedComputeResource_ != nullptr;};
        void deleteUsedComputeResource() { this->usedComputeResource_ = nullptr;};
        inline int32_t getUsedComputeResource() const { DARABONBA_PTR_GET_DEFAULT(usedComputeResource_, 0) };
        inline Quota& setUsedComputeResource(int32_t usedComputeResource) { DARABONBA_PTR_SET_VALUE(usedComputeResource_, usedComputeResource) };


        // usedDocSize Field Functions 
        bool hasUsedDocSize() const { return this->usedDocSize_ != nullptr;};
        void deleteUsedDocSize() { this->usedDocSize_ = nullptr;};
        inline double getUsedDocSize() const { DARABONBA_PTR_GET_DEFAULT(usedDocSize_, 0.0) };
        inline Quota& setUsedDocSize(double usedDocSize) { DARABONBA_PTR_SET_VALUE(usedDocSize_, usedDocSize) };


        // usedQps Field Functions 
        bool hasUsedQps() const { return this->usedQps_ != nullptr;};
        void deleteUsedQps() { this->usedQps_ = nullptr;};
        inline int32_t getUsedQps() const { DARABONBA_PTR_GET_DEFAULT(usedQps_, 0) };
        inline Quota& setUsedQps(int32_t usedQps) { DARABONBA_PTR_SET_VALUE(usedQps_, usedQps) };


      protected:
        // The compute resources.
        shared_ptr<int32_t> computeResource_ {};
        // The storage capacity.
        shared_ptr<int32_t> docSize_ {};
        // The queries per second (QPS).
        shared_ptr<int32_t> qps_ {};
        // The instance specifications. Valid values:
        // 
        // - opensearch.share.junior: Starter Edition
        // 
        // - opensearch.share.common: Shared General-purpose
        // 
        // - opensearch.share.compute: Shared Compute-optimized
        // 
        // - opensearch.share.storage: Shared Storage-optimized
        // 
        // - opensearch.private.common: Exclusive General-purpose
        // 
        // - opensearch.private.compute: Exclusive Compute-optimized
        // 
        // - opensearch.private.storage: Exclusive Storage-optimized
        shared_ptr<string> spec_ {};
        shared_ptr<int32_t> usedComputeResource_ {};
        shared_ptr<double> usedDocSize_ {};
        shared_ptr<int32_t> usedQps_ {};
      };

      class QueryProcessors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryProcessors& obj) { 
          DARABONBA_PTR_TO_JSON(active, active_);
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(domain, domain_);
          DARABONBA_PTR_TO_JSON(indexes, indexes_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(processors, processors_);
        };
        friend void from_json(const Darabonba::Json& j, QueryProcessors& obj) { 
          DARABONBA_PTR_FROM_JSON(active, active_);
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(domain, domain_);
          DARABONBA_PTR_FROM_JSON(indexes, indexes_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(processors, processors_);
        };
        QueryProcessors() = default ;
        QueryProcessors(const QueryProcessors &) = default ;
        QueryProcessors(QueryProcessors &&) = default ;
        QueryProcessors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryProcessors() = default ;
        QueryProcessors& operator=(const QueryProcessors &) = default ;
        QueryProcessors& operator=(QueryProcessors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->category_ == nullptr && this->domain_ == nullptr && this->indexes_ == nullptr && this->name_ == nullptr && this->processors_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline QueryProcessors& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline QueryProcessors& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline QueryProcessors& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // indexes Field Functions 
        bool hasIndexes() const { return this->indexes_ != nullptr;};
        void deleteIndexes() { this->indexes_ = nullptr;};
        inline const vector<string> & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
        inline vector<string> getIndexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
        inline QueryProcessors& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
        inline QueryProcessors& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QueryProcessors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // processors Field Functions 
        bool hasProcessors() const { return this->processors_ != nullptr;};
        void deleteProcessors() { this->processors_ = nullptr;};
        inline const vector<Darabonba::Json> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Darabonba::Json>) };
        inline QueryProcessors& setProcessors(const vector<Darabonba::Json> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
        inline QueryProcessors& setProcessors(vector<Darabonba::Json> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


      protected:
        // Specifies whether the rule is the default one.
        shared_ptr<bool> active_ {};
        // The industry category.
        shared_ptr<string> category_ {};
        // The industry. Valid values:
        // 
        // - GENERAL: general
        // 
        // - ECOMMERCE: e-commerce
        // 
        // - IT_CONTENT: IT content
        shared_ptr<string> domain_ {};
        // The indexes of the application.
        shared_ptr<vector<string>> indexes_ {};
        // The rule name.
        shared_ptr<string> name_ {};
        // The features that are included.
        shared_ptr<vector<Darabonba::Json>> processors_ {};
      };

      class FirstRanks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FirstRanks& obj) { 
          DARABONBA_PTR_TO_JSON(active, active_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_ANY_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, FirstRanks& obj) { 
          DARABONBA_PTR_FROM_JSON(active, active_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_ANY_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        FirstRanks() = default ;
        FirstRanks(const FirstRanks &) = default ;
        FirstRanks(FirstRanks &&) = default ;
        FirstRanks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FirstRanks() = default ;
        FirstRanks& operator=(const FirstRanks &) = default ;
        FirstRanks& operator=(FirstRanks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->description_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline FirstRanks& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FirstRanks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline         const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
        Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
        inline FirstRanks& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
        inline FirstRanks& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FirstRanks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline FirstRanks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Specifies whether the expression is the default one.
        shared_ptr<bool> active_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The details of the expression. The value can be an array or a string.
        Darabonba::Json meta_ {};
        // The name of the rough sort expression.
        shared_ptr<string> name_ {};
        // The type of the expression. Valid values: \\`STRUCT\\`: a structured expression. \\`STRING\\`: a custom formula. Default value: \\`STRING\\`.
        // 
        // STRUCT: The content of the expression is a structure. STRING (default): custom formula.
        shared_ptr<string> type_ {};
      };

      class Domain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domain& obj) { 
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(functions, functions_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(functions, functions_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Domain() = default ;
        Domain(const Domain &) = default ;
        Domain(Domain &&) = default ;
        Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Domain() = default ;
        Domain& operator=(const Domain &) = default ;
        Domain& operator=(Domain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Functions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Functions& obj) { 
            DARABONBA_PTR_TO_JSON(algo, algo_);
            DARABONBA_PTR_TO_JSON(qp, qp_);
            DARABONBA_PTR_TO_JSON(service, service_);
          };
          friend void from_json(const Darabonba::Json& j, Functions& obj) { 
            DARABONBA_PTR_FROM_JSON(algo, algo_);
            DARABONBA_PTR_FROM_JSON(qp, qp_);
            DARABONBA_PTR_FROM_JSON(service, service_);
          };
          Functions() = default ;
          Functions(const Functions &) = default ;
          Functions(Functions &&) = default ;
          Functions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Functions() = default ;
          Functions& operator=(const Functions &) = default ;
          Functions& operator=(Functions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->algo_ == nullptr
        && this->qp_ == nullptr && this->service_ == nullptr; };
          // algo Field Functions 
          bool hasAlgo() const { return this->algo_ != nullptr;};
          void deleteAlgo() { this->algo_ = nullptr;};
          inline const vector<string> & getAlgo() const { DARABONBA_PTR_GET_CONST(algo_, vector<string>) };
          inline vector<string> getAlgo() { DARABONBA_PTR_GET(algo_, vector<string>) };
          inline Functions& setAlgo(const vector<string> & algo) { DARABONBA_PTR_SET_VALUE(algo_, algo) };
          inline Functions& setAlgo(vector<string> && algo) { DARABONBA_PTR_SET_RVALUE(algo_, algo) };


          // qp Field Functions 
          bool hasQp() const { return this->qp_ != nullptr;};
          void deleteQp() { this->qp_ = nullptr;};
          inline const vector<string> & getQp() const { DARABONBA_PTR_GET_CONST(qp_, vector<string>) };
          inline vector<string> getQp() { DARABONBA_PTR_GET(qp_, vector<string>) };
          inline Functions& setQp(const vector<string> & qp) { DARABONBA_PTR_SET_VALUE(qp_, qp) };
          inline Functions& setQp(vector<string> && qp) { DARABONBA_PTR_SET_RVALUE(qp_, qp) };


          // service Field Functions 
          bool hasService() const { return this->service_ != nullptr;};
          void deleteService() { this->service_ = nullptr;};
          inline const vector<string> & getService() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
          inline vector<string> getService() { DARABONBA_PTR_GET(service_, vector<string>) };
          inline Functions& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
          inline Functions& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


        protected:
          // The sort policy features.
          shared_ptr<vector<string>> algo_ {};
          // The query analysis features.
          shared_ptr<vector<string>> qp_ {};
          // The ancillary service features.
          shared_ptr<vector<string>> service_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->functions_ == nullptr && this->name_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Domain& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // functions Field Functions 
        bool hasFunctions() const { return this->functions_ != nullptr;};
        void deleteFunctions() { this->functions_ = nullptr;};
        inline const Domain::Functions & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, Domain::Functions) };
        inline Domain::Functions getFunctions() { DARABONBA_PTR_GET(functions_, Domain::Functions) };
        inline Domain& setFunctions(const Domain::Functions & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
        inline Domain& setFunctions(Domain::Functions && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Domain& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The industry category.
        shared_ptr<string> category_ {};
        // The selected features.
        shared_ptr<Domain::Functions> functions_ {};
        // The industry. Valid values:
        // 
        // - GENERAL
        // 
        // - ECOMMERCE
        // 
        // - IT_CONTENT
        shared_ptr<string> name_ {};
      };

      class DataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
          DARABONBA_PTR_TO_JSON(fields, fields_);
          DARABONBA_PTR_TO_JSON(keyField, keyField_);
          DARABONBA_ANY_TO_JSON(parameters, parameters_);
          DARABONBA_ANY_TO_JSON(plugins, plugins_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(tableName, tableName_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
          DARABONBA_PTR_FROM_JSON(fields, fields_);
          DARABONBA_PTR_FROM_JSON(keyField, keyField_);
          DARABONBA_ANY_FROM_JSON(parameters, parameters_);
          DARABONBA_ANY_FROM_JSON(plugins, plugins_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(tableName, tableName_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        DataSources() = default ;
        DataSources(const DataSources &) = default ;
        DataSources(DataSources &&) = default ;
        DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSources() = default ;
        DataSources& operator=(const DataSources &) = default ;
        DataSources& operator=(DataSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fields_ == nullptr
        && this->keyField_ == nullptr && this->parameters_ == nullptr && this->plugins_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr
        && this->type_ == nullptr; };
        // fields Field Functions 
        bool hasFields() const { return this->fields_ != nullptr;};
        void deleteFields() { this->fields_ = nullptr;};
        inline const vector<Darabonba::Json> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getFields() { DARABONBA_PTR_GET(fields_, vector<Darabonba::Json>) };
        inline DataSources& setFields(const vector<Darabonba::Json> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
        inline DataSources& setFields(vector<Darabonba::Json> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


        // keyField Field Functions 
        bool hasKeyField() const { return this->keyField_ != nullptr;};
        void deleteKeyField() { this->keyField_ = nullptr;};
        inline string getKeyField() const { DARABONBA_PTR_GET_DEFAULT(keyField_, "") };
        inline DataSources& setKeyField(string keyField) { DARABONBA_PTR_SET_VALUE(keyField_, keyField) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline         const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
        Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
        inline DataSources& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
        inline DataSources& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


        // plugins Field Functions 
        bool hasPlugins() const { return this->plugins_ != nullptr;};
        void deletePlugins() { this->plugins_ = nullptr;};
        inline         const Darabonba::Json & getPlugins() const { DARABONBA_GET(plugins_) };
        Darabonba::Json & getPlugins() { DARABONBA_GET(plugins_) };
        inline DataSources& setPlugins(const Darabonba::Json & plugins) { DARABONBA_SET_VALUE(plugins_, plugins) };
        inline DataSources& setPlugins(Darabonba::Json && plugins) { DARABONBA_SET_RVALUE(plugins_, plugins) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline DataSources& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline DataSources& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The information about field mappings.
        shared_ptr<vector<Darabonba::Json>> fields_ {};
        // The primary key.
        shared_ptr<string> keyField_ {};
        // The information about the data source.
        Darabonba::Json parameters_ {};
        // The data processing plugins for fields.
        // 
        // Plugin name (name):
        // 
        // - JsonKeyValueExtractor
        // 
        // - MultiValueSpliter
        // 
        // - KeyValueExtractor
        // 
        // - StringCatenateExtractor
        // 
        // - HTMLTagRemover
        // 
        // Plugin parameters (parameters):
        // 
        // - JsonKeyValueExtractor
        // 
        // - MultiValueSpliter
        // 
        // - KeyValueExtractor
        // 
        // - StringCatenateExtractor
        // 
        // - HTMLTagRemover
        Darabonba::Json plugins_ {};
        // The name of the wide table.
        shared_ptr<string> schemaName_ {};
        // The name of the application table.
        shared_ptr<string> tableName_ {};
        // The type of the data source.
        // 
        // - rds
        // 
        // - odps
        // 
        // - opensearch
        // 
        // - polardb
        shared_ptr<string> type_ {};
      };

      class Cluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
          DARABONBA_PTR_TO_JSON(chunkModels, chunkModels_);
          DARABONBA_ANY_TO_JSON(graphRag, graphRag_);
          DARABONBA_PTR_TO_JSON(imageContentRecognizerModels, imageContentRecognizerModels_);
          DARABONBA_PTR_TO_JSON(maxQueryClauseLength, maxQueryClauseLength_);
          DARABONBA_PTR_TO_JSON(maxTimeoutMS, maxTimeoutMS_);
          DARABONBA_PTR_TO_JSON(textEmbeddingModel, textEmbeddingModel_);
          DARABONBA_PTR_TO_JSON(textSparseEmbeddingModel, textSparseEmbeddingModel_);
          DARABONBA_PTR_TO_JSON(vectorIndexConfigs, vectorIndexConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
          DARABONBA_PTR_FROM_JSON(chunkModels, chunkModels_);
          DARABONBA_ANY_FROM_JSON(graphRag, graphRag_);
          DARABONBA_PTR_FROM_JSON(imageContentRecognizerModels, imageContentRecognizerModels_);
          DARABONBA_PTR_FROM_JSON(maxQueryClauseLength, maxQueryClauseLength_);
          DARABONBA_PTR_FROM_JSON(maxTimeoutMS, maxTimeoutMS_);
          DARABONBA_PTR_FROM_JSON(textEmbeddingModel, textEmbeddingModel_);
          DARABONBA_PTR_FROM_JSON(textSparseEmbeddingModel, textSparseEmbeddingModel_);
          DARABONBA_PTR_FROM_JSON(vectorIndexConfigs, vectorIndexConfigs_);
        };
        Cluster() = default ;
        Cluster(const Cluster &) = default ;
        Cluster(Cluster &&) = default ;
        Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cluster() = default ;
        Cluster& operator=(const Cluster &) = default ;
        Cluster& operator=(Cluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chunkModels_ == nullptr
        && this->graphRag_ == nullptr && this->imageContentRecognizerModels_ == nullptr && this->maxQueryClauseLength_ == nullptr && this->maxTimeoutMS_ == nullptr && this->textEmbeddingModel_ == nullptr
        && this->textSparseEmbeddingModel_ == nullptr && this->vectorIndexConfigs_ == nullptr; };
        // chunkModels Field Functions 
        bool hasChunkModels() const { return this->chunkModels_ != nullptr;};
        void deleteChunkModels() { this->chunkModels_ = nullptr;};
        inline const vector<Darabonba::Json> & getChunkModels() const { DARABONBA_PTR_GET_CONST(chunkModels_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getChunkModels() { DARABONBA_PTR_GET(chunkModels_, vector<Darabonba::Json>) };
        inline Cluster& setChunkModels(const vector<Darabonba::Json> & chunkModels) { DARABONBA_PTR_SET_VALUE(chunkModels_, chunkModels) };
        inline Cluster& setChunkModels(vector<Darabonba::Json> && chunkModels) { DARABONBA_PTR_SET_RVALUE(chunkModels_, chunkModels) };


        // graphRag Field Functions 
        bool hasGraphRag() const { return this->graphRag_ != nullptr;};
        void deleteGraphRag() { this->graphRag_ = nullptr;};
        inline         const Darabonba::Json & getGraphRag() const { DARABONBA_GET(graphRag_) };
        Darabonba::Json & getGraphRag() { DARABONBA_GET(graphRag_) };
        inline Cluster& setGraphRag(const Darabonba::Json & graphRag) { DARABONBA_SET_VALUE(graphRag_, graphRag) };
        inline Cluster& setGraphRag(Darabonba::Json && graphRag) { DARABONBA_SET_RVALUE(graphRag_, graphRag) };


        // imageContentRecognizerModels Field Functions 
        bool hasImageContentRecognizerModels() const { return this->imageContentRecognizerModels_ != nullptr;};
        void deleteImageContentRecognizerModels() { this->imageContentRecognizerModels_ = nullptr;};
        inline const vector<Darabonba::Json> & getImageContentRecognizerModels() const { DARABONBA_PTR_GET_CONST(imageContentRecognizerModels_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getImageContentRecognizerModels() { DARABONBA_PTR_GET(imageContentRecognizerModels_, vector<Darabonba::Json>) };
        inline Cluster& setImageContentRecognizerModels(const vector<Darabonba::Json> & imageContentRecognizerModels) { DARABONBA_PTR_SET_VALUE(imageContentRecognizerModels_, imageContentRecognizerModels) };
        inline Cluster& setImageContentRecognizerModels(vector<Darabonba::Json> && imageContentRecognizerModels) { DARABONBA_PTR_SET_RVALUE(imageContentRecognizerModels_, imageContentRecognizerModels) };


        // maxQueryClauseLength Field Functions 
        bool hasMaxQueryClauseLength() const { return this->maxQueryClauseLength_ != nullptr;};
        void deleteMaxQueryClauseLength() { this->maxQueryClauseLength_ = nullptr;};
        inline int32_t getMaxQueryClauseLength() const { DARABONBA_PTR_GET_DEFAULT(maxQueryClauseLength_, 0) };
        inline Cluster& setMaxQueryClauseLength(int32_t maxQueryClauseLength) { DARABONBA_PTR_SET_VALUE(maxQueryClauseLength_, maxQueryClauseLength) };


        // maxTimeoutMS Field Functions 
        bool hasMaxTimeoutMS() const { return this->maxTimeoutMS_ != nullptr;};
        void deleteMaxTimeoutMS() { this->maxTimeoutMS_ = nullptr;};
        inline int32_t getMaxTimeoutMS() const { DARABONBA_PTR_GET_DEFAULT(maxTimeoutMS_, 0) };
        inline Cluster& setMaxTimeoutMS(int32_t maxTimeoutMS) { DARABONBA_PTR_SET_VALUE(maxTimeoutMS_, maxTimeoutMS) };


        // textEmbeddingModel Field Functions 
        bool hasTextEmbeddingModel() const { return this->textEmbeddingModel_ != nullptr;};
        void deleteTextEmbeddingModel() { this->textEmbeddingModel_ = nullptr;};
        inline string getTextEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(textEmbeddingModel_, "") };
        inline Cluster& setTextEmbeddingModel(string textEmbeddingModel) { DARABONBA_PTR_SET_VALUE(textEmbeddingModel_, textEmbeddingModel) };


        // textSparseEmbeddingModel Field Functions 
        bool hasTextSparseEmbeddingModel() const { return this->textSparseEmbeddingModel_ != nullptr;};
        void deleteTextSparseEmbeddingModel() { this->textSparseEmbeddingModel_ = nullptr;};
        inline string getTextSparseEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(textSparseEmbeddingModel_, "") };
        inline Cluster& setTextSparseEmbeddingModel(string textSparseEmbeddingModel) { DARABONBA_PTR_SET_VALUE(textSparseEmbeddingModel_, textSparseEmbeddingModel) };


        // vectorIndexConfigs Field Functions 
        bool hasVectorIndexConfigs() const { return this->vectorIndexConfigs_ != nullptr;};
        void deleteVectorIndexConfigs() { this->vectorIndexConfigs_ = nullptr;};
        inline const vector<Darabonba::Json> & getVectorIndexConfigs() const { DARABONBA_PTR_GET_CONST(vectorIndexConfigs_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getVectorIndexConfigs() { DARABONBA_PTR_GET(vectorIndexConfigs_, vector<Darabonba::Json>) };
        inline Cluster& setVectorIndexConfigs(const vector<Darabonba::Json> & vectorIndexConfigs) { DARABONBA_PTR_SET_VALUE(vectorIndexConfigs_, vectorIndexConfigs) };
        inline Cluster& setVectorIndexConfigs(vector<Darabonba::Json> && vectorIndexConfigs) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfigs_, vectorIndexConfigs) };


      protected:
        shared_ptr<vector<Darabonba::Json>> chunkModels_ {};
        Darabonba::Json graphRag_ {};
        shared_ptr<vector<Darabonba::Json>> imageContentRecognizerModels_ {};
        // The maximum length of the query clause.
        shared_ptr<int32_t> maxQueryClauseLength_ {};
        // The timeout period for the cluster, in milliseconds.
        shared_ptr<int32_t> maxTimeoutMS_ {};
        shared_ptr<string> textEmbeddingModel_ {};
        shared_ptr<string> textSparseEmbeddingModel_ {};
        shared_ptr<vector<Darabonba::Json>> vectorIndexConfigs_ {};
      };

      virtual bool empty() const override { return this->cluster_ == nullptr
        && this->clusterName_ == nullptr && this->configItems_ == nullptr && this->created_ == nullptr && this->dataSources_ == nullptr && this->description_ == nullptr
        && this->domain_ == nullptr && this->fetchFields_ == nullptr && this->firstRanks_ == nullptr && this->id_ == nullptr && this->interpretations_ == nullptr
        && this->isCurrent_ == nullptr && this->progressPercent_ == nullptr && this->prompts_ == nullptr && this->queryProcessors_ == nullptr && this->quota_ == nullptr
        && this->schema_ == nullptr && this->schemas_ == nullptr && this->secondRanks_ == nullptr && this->status_ == nullptr && this->summaries_ == nullptr
        && this->switchTime_ == nullptr && this->type_ == nullptr && this->updated_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline const Result::Cluster & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, Result::Cluster) };
      inline Result::Cluster getCluster() { DARABONBA_PTR_GET(cluster_, Result::Cluster) };
      inline Result& setCluster(const Result::Cluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
      inline Result& setCluster(Result::Cluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Result& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // configItems Field Functions 
      bool hasConfigItems() const { return this->configItems_ != nullptr;};
      void deleteConfigItems() { this->configItems_ = nullptr;};
      inline const vector<Darabonba::Json> & getConfigItems() const { DARABONBA_PTR_GET_CONST(configItems_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getConfigItems() { DARABONBA_PTR_GET(configItems_, vector<Darabonba::Json>) };
      inline Result& setConfigItems(const vector<Darabonba::Json> & configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };
      inline Result& setConfigItems(vector<Darabonba::Json> && configItems) { DARABONBA_PTR_SET_RVALUE(configItems_, configItems) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<Result::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Result::DataSources>) };
      inline vector<Result::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<Result::DataSources>) };
      inline Result& setDataSources(const vector<Result::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline Result& setDataSources(vector<Result::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline const Result::Domain & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, Result::Domain) };
      inline Result::Domain getDomain() { DARABONBA_PTR_GET(domain_, Result::Domain) };
      inline Result& setDomain(const Result::Domain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
      inline Result& setDomain(Result::Domain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


      // fetchFields Field Functions 
      bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
      void deleteFetchFields() { this->fetchFields_ = nullptr;};
      inline const vector<string> & getFetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
      inline vector<string> getFetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
      inline Result& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
      inline Result& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


      // firstRanks Field Functions 
      bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
      void deleteFirstRanks() { this->firstRanks_ = nullptr;};
      inline const vector<Result::FirstRanks> & getFirstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<Result::FirstRanks>) };
      inline vector<Result::FirstRanks> getFirstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<Result::FirstRanks>) };
      inline Result& setFirstRanks(const vector<Result::FirstRanks> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
      inline Result& setFirstRanks(vector<Result::FirstRanks> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interpretations Field Functions 
      bool hasInterpretations() const { return this->interpretations_ != nullptr;};
      void deleteInterpretations() { this->interpretations_ = nullptr;};
      inline const vector<Darabonba::Json> & getInterpretations() const { DARABONBA_PTR_GET_CONST(interpretations_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getInterpretations() { DARABONBA_PTR_GET(interpretations_, vector<Darabonba::Json>) };
      inline Result& setInterpretations(const vector<Darabonba::Json> & interpretations) { DARABONBA_PTR_SET_VALUE(interpretations_, interpretations) };
      inline Result& setInterpretations(vector<Darabonba::Json> && interpretations) { DARABONBA_PTR_SET_RVALUE(interpretations_, interpretations) };


      // isCurrent Field Functions 
      bool hasIsCurrent() const { return this->isCurrent_ != nullptr;};
      void deleteIsCurrent() { this->isCurrent_ = nullptr;};
      inline bool getIsCurrent() const { DARABONBA_PTR_GET_DEFAULT(isCurrent_, false) };
      inline Result& setIsCurrent(bool isCurrent) { DARABONBA_PTR_SET_VALUE(isCurrent_, isCurrent) };


      // progressPercent Field Functions 
      bool hasProgressPercent() const { return this->progressPercent_ != nullptr;};
      void deleteProgressPercent() { this->progressPercent_ = nullptr;};
      inline int32_t getProgressPercent() const { DARABONBA_PTR_GET_DEFAULT(progressPercent_, 0) };
      inline Result& setProgressPercent(int32_t progressPercent) { DARABONBA_PTR_SET_VALUE(progressPercent_, progressPercent) };


      // prompts Field Functions 
      bool hasPrompts() const { return this->prompts_ != nullptr;};
      void deletePrompts() { this->prompts_ = nullptr;};
      inline const vector<Darabonba::Json> & getPrompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getPrompts() { DARABONBA_PTR_GET(prompts_, vector<Darabonba::Json>) };
      inline Result& setPrompts(const vector<Darabonba::Json> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
      inline Result& setPrompts(vector<Darabonba::Json> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


      // queryProcessors Field Functions 
      bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
      void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
      inline const vector<Result::QueryProcessors> & getQueryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<Result::QueryProcessors>) };
      inline vector<Result::QueryProcessors> getQueryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<Result::QueryProcessors>) };
      inline Result& setQueryProcessors(const vector<Result::QueryProcessors> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
      inline Result& setQueryProcessors(vector<Result::QueryProcessors> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Result::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Result::Quota) };
      inline Result::Quota getQuota() { DARABONBA_PTR_GET(quota_, Result::Quota) };
      inline Result& setQuota(const Result::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Result& setQuota(Result::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline const Result::Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Result::Schema) };
      inline Result::Schema getSchema() { DARABONBA_PTR_GET(schema_, Result::Schema) };
      inline Result& setSchema(const Result::Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
      inline Result& setSchema(Result::Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


      // schemas Field Functions 
      bool hasSchemas() const { return this->schemas_ != nullptr;};
      void deleteSchemas() { this->schemas_ = nullptr;};
      inline const vector<Result::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Result::Schemas>) };
      inline vector<Result::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<Result::Schemas>) };
      inline Result& setSchemas(const vector<Result::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
      inline Result& setSchemas(vector<Result::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


      // secondRanks Field Functions 
      bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
      void deleteSecondRanks() { this->secondRanks_ = nullptr;};
      inline const vector<Result::SecondRanks> & getSecondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<Result::SecondRanks>) };
      inline vector<Result::SecondRanks> getSecondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<Result::SecondRanks>) };
      inline Result& setSecondRanks(const vector<Result::SecondRanks> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
      inline Result& setSecondRanks(vector<Result::SecondRanks> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summaries Field Functions 
      bool hasSummaries() const { return this->summaries_ != nullptr;};
      void deleteSummaries() { this->summaries_ = nullptr;};
      inline const vector<Result::Summaries> & getSummaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Result::Summaries>) };
      inline vector<Result::Summaries> getSummaries() { DARABONBA_PTR_GET(summaries_, vector<Result::Summaries>) };
      inline Result& setSummaries(const vector<Result::Summaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
      inline Result& setSummaries(vector<Result::Summaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline int64_t getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, 0L) };
      inline Result& setSwitchTime(int64_t switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The feature configurations.
      shared_ptr<Result::Cluster> cluster_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      shared_ptr<vector<Darabonba::Json>> configItems_ {};
      shared_ptr<int64_t> created_ {};
      // The data source configurations.
      shared_ptr<vector<Result::DataSources>> dataSources_ {};
      // The application description.
      shared_ptr<string> description_ {};
      // The industry model.
      shared_ptr<Result::Domain> domain_ {};
      // The default display fields.
      shared_ptr<vector<string>> fetchFields_ {};
      // The rough sort configurations.
      shared_ptr<vector<Result::FirstRanks>> firstRanks_ {};
      // The application ID.
      shared_ptr<string> id_ {};
      // The descriptions of the large language model (LLM) table fields.
      shared_ptr<vector<Darabonba::Json>> interpretations_ {};
      // Indicates whether the version is the online version.
      shared_ptr<bool> isCurrent_ {};
      // The data import progress, in percentage.
      shared_ptr<int32_t> progressPercent_ {};
      // The prompt configurations.
      shared_ptr<vector<Darabonba::Json>> prompts_ {};
      // The intention recognition configurations.
      shared_ptr<vector<Result::QueryProcessors>> queryProcessors_ {};
      // The quota of the version.
      shared_ptr<Result::Quota> quota_ {};
      // The schema of the single-table application.
      shared_ptr<Result::Schema> schema_ {};
      // The schema of the multi-table application.
      shared_ptr<vector<Result::Schemas>> schemas_ {};
      // The fine sort configurations.
      shared_ptr<vector<Result::SecondRanks>> secondRanks_ {};
      // The application status.
      // 
      // - OK
      // 
      // - STOPPED: The application is paused.
      // 
      // - FROZEN: The application is frozen.
      // 
      // - INITIALIZING: The version is being initialized.
      // 
      // - UNAVAILABLE: The version is invalid.
      // 
      // - DATA_WAITING: The system is waiting for data initialization.
      // 
      // - DATA_PREPARING: Data is being initialized.
      shared_ptr<string> status_ {};
      // The search result summary settings.
      shared_ptr<vector<Result::Summaries>> summaries_ {};
      shared_ptr<int64_t> switchTime_ {};
      // The application type.
      // 
      // - standard: Standard Edition
      // 
      // - enhanced: Premium Edition
      shared_ptr<string> type_ {};
      shared_ptr<int64_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateAppResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateAppResponseBody::Result) };
    inline CreateAppResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateAppResponseBody::Result) };
    inline CreateAppResponseBody& setResult(const CreateAppResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateAppResponseBody& setResult(CreateAppResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response data.
    shared_ptr<CreateAppResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
