// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMA_HPP_
#define ALIBABACLOUD_MODELS_SCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/SchemaIndexesSearchFieldsValue.hpp>
#include <alibabacloud/models/SchemaTablesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Schema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Schema& obj) { 
      DARABONBA_PTR_TO_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeField, routeField_);
      DARABONBA_PTR_TO_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_TO_JSON(secondRouteField, secondRouteField_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(ttlField, ttlField_);
    };
    friend void from_json(const Darabonba::Json& j, Schema& obj) { 
      DARABONBA_PTR_FROM_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeField, routeField_);
      DARABONBA_PTR_FROM_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_FROM_JSON(secondRouteField, secondRouteField_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
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
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> ttl_ {};
    };

    class Indexes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Indexes& obj) { 
        DARABONBA_PTR_TO_JSON(filterFields, filterFields_);
        DARABONBA_PTR_TO_JSON(searchFields, searchFields_);
      };
      friend void from_json(const Darabonba::Json& j, Indexes& obj) { 
        DARABONBA_PTR_FROM_JSON(filterFields, filterFields_);
        DARABONBA_PTR_FROM_JSON(searchFields, searchFields_);
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
      inline const map<string, SchemaIndexesSearchFieldsValue> & getSearchFields() const { DARABONBA_PTR_GET_CONST(searchFields_, map<string, SchemaIndexesSearchFieldsValue>) };
      inline map<string, SchemaIndexesSearchFieldsValue> getSearchFields() { DARABONBA_PTR_GET(searchFields_, map<string, SchemaIndexesSearchFieldsValue>) };
      inline Indexes& setSearchFields(const map<string, SchemaIndexesSearchFieldsValue> & searchFields) { DARABONBA_PTR_SET_VALUE(searchFields_, searchFields) };
      inline Indexes& setSearchFields(map<string, SchemaIndexesSearchFieldsValue> && searchFields) { DARABONBA_PTR_SET_RVALUE(searchFields_, searchFields) };


    protected:
      shared_ptr<vector<string>> filterFields_ {};
      shared_ptr<map<string, SchemaIndexesSearchFieldsValue>> searchFields_ {};
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
      shared_ptr<string> direction_ {};
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
    inline const map<string, SchemaTablesValue> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, map<string, SchemaTablesValue>) };
    inline map<string, SchemaTablesValue> getTables() { DARABONBA_PTR_GET(tables_, map<string, SchemaTablesValue>) };
    inline Schema& setTables(const map<string, SchemaTablesValue> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline Schema& setTables(map<string, SchemaTablesValue> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // ttlField Field Functions 
    bool hasTtlField() const { return this->ttlField_ != nullptr;};
    void deleteTtlField() { this->ttlField_ = nullptr;};
    inline const Schema::TtlField & getTtlField() const { DARABONBA_PTR_GET_CONST(ttlField_, Schema::TtlField) };
    inline Schema::TtlField getTtlField() { DARABONBA_PTR_GET(ttlField_, Schema::TtlField) };
    inline Schema& setTtlField(const Schema::TtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
    inline Schema& setTtlField(Schema::TtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


  protected:
    shared_ptr<vector<Schema::IndexSortConfig>> indexSortConfig_ {};
    shared_ptr<Schema::Indexes> indexes_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> routeField_ {};
    shared_ptr<vector<string>> routeFieldValues_ {};
    shared_ptr<string> secondRouteField_ {};
    shared_ptr<map<string, SchemaTablesValue>> tables_ {};
    shared_ptr<Schema::TtlField> ttlField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
