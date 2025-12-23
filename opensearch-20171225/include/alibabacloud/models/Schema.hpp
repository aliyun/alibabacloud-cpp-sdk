// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMA_HPP_
#define ALIBABACLOUD_MODELS_SCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SchemaIndexSortConfig.hpp>
#include <alibabacloud/models/SchemaIndexes.hpp>
#include <map>
#include <alibabacloud/models/SchemaTablesValue.hpp>
#include <alibabacloud/models/SchemaTtlField.hpp>
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
    virtual bool empty() const override { return this->indexSortConfig_ == nullptr
        && return this->indexes_ == nullptr && return this->name_ == nullptr && return this->routeField_ == nullptr && return this->routeFieldValues_ == nullptr && return this->secondRouteField_ == nullptr
        && return this->tables_ == nullptr && return this->ttlField_ == nullptr; };
    // indexSortConfig Field Functions 
    bool hasIndexSortConfig() const { return this->indexSortConfig_ != nullptr;};
    void deleteIndexSortConfig() { this->indexSortConfig_ = nullptr;};
    inline const vector<SchemaIndexSortConfig> & indexSortConfig() const { DARABONBA_PTR_GET_CONST(indexSortConfig_, vector<SchemaIndexSortConfig>) };
    inline vector<SchemaIndexSortConfig> indexSortConfig() { DARABONBA_PTR_GET(indexSortConfig_, vector<SchemaIndexSortConfig>) };
    inline Schema& setIndexSortConfig(const vector<SchemaIndexSortConfig> & indexSortConfig) { DARABONBA_PTR_SET_VALUE(indexSortConfig_, indexSortConfig) };
    inline Schema& setIndexSortConfig(vector<SchemaIndexSortConfig> && indexSortConfig) { DARABONBA_PTR_SET_RVALUE(indexSortConfig_, indexSortConfig) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const SchemaIndexes & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, SchemaIndexes) };
    inline SchemaIndexes indexes() { DARABONBA_PTR_GET(indexes_, SchemaIndexes) };
    inline Schema& setIndexes(const SchemaIndexes & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline Schema& setIndexes(SchemaIndexes && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Schema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeField Field Functions 
    bool hasRouteField() const { return this->routeField_ != nullptr;};
    void deleteRouteField() { this->routeField_ = nullptr;};
    inline string routeField() const { DARABONBA_PTR_GET_DEFAULT(routeField_, "") };
    inline Schema& setRouteField(string routeField) { DARABONBA_PTR_SET_VALUE(routeField_, routeField) };


    // routeFieldValues Field Functions 
    bool hasRouteFieldValues() const { return this->routeFieldValues_ != nullptr;};
    void deleteRouteFieldValues() { this->routeFieldValues_ = nullptr;};
    inline const vector<string> & routeFieldValues() const { DARABONBA_PTR_GET_CONST(routeFieldValues_, vector<string>) };
    inline vector<string> routeFieldValues() { DARABONBA_PTR_GET(routeFieldValues_, vector<string>) };
    inline Schema& setRouteFieldValues(const vector<string> & routeFieldValues) { DARABONBA_PTR_SET_VALUE(routeFieldValues_, routeFieldValues) };
    inline Schema& setRouteFieldValues(vector<string> && routeFieldValues) { DARABONBA_PTR_SET_RVALUE(routeFieldValues_, routeFieldValues) };


    // secondRouteField Field Functions 
    bool hasSecondRouteField() const { return this->secondRouteField_ != nullptr;};
    void deleteSecondRouteField() { this->secondRouteField_ = nullptr;};
    inline string secondRouteField() const { DARABONBA_PTR_GET_DEFAULT(secondRouteField_, "") };
    inline Schema& setSecondRouteField(string secondRouteField) { DARABONBA_PTR_SET_VALUE(secondRouteField_, secondRouteField) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const map<string, SchemaTablesValue> & tables() const { DARABONBA_PTR_GET_CONST(tables_, map<string, SchemaTablesValue>) };
    inline map<string, SchemaTablesValue> tables() { DARABONBA_PTR_GET(tables_, map<string, SchemaTablesValue>) };
    inline Schema& setTables(const map<string, SchemaTablesValue> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline Schema& setTables(map<string, SchemaTablesValue> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // ttlField Field Functions 
    bool hasTtlField() const { return this->ttlField_ != nullptr;};
    void deleteTtlField() { this->ttlField_ = nullptr;};
    inline const SchemaTtlField & ttlField() const { DARABONBA_PTR_GET_CONST(ttlField_, SchemaTtlField) };
    inline SchemaTtlField ttlField() { DARABONBA_PTR_GET(ttlField_, SchemaTtlField) };
    inline Schema& setTtlField(const SchemaTtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
    inline Schema& setTtlField(SchemaTtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


  protected:
    std::shared_ptr<vector<SchemaIndexSortConfig>> indexSortConfig_ = nullptr;
    std::shared_ptr<SchemaIndexes> indexes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> routeField_ = nullptr;
    std::shared_ptr<vector<string>> routeFieldValues_ = nullptr;
    std::shared_ptr<string> secondRouteField_ = nullptr;
    std::shared_ptr<map<string, SchemaTablesValue>> tables_ = nullptr;
    std::shared_ptr<SchemaTtlField> ttlField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
