// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppsResponseBodyResultSchemasIndexSortConfig.hpp>
#include <alibabacloud/models/DescribeAppsResponseBodyResultSchemasIndexes.hpp>
#include <alibabacloud/models/DescribeAppsResponseBodyResultSchemasTtlField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppsResponseBodyResultSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyResultSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeField, routeField_);
      DARABONBA_PTR_TO_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_TO_JSON(secondRouteField, secondRouteField_);
      DARABONBA_ANY_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(ttlField, ttlField_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyResultSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeField, routeField_);
      DARABONBA_PTR_FROM_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_FROM_JSON(secondRouteField, secondRouteField_);
      DARABONBA_ANY_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(ttlField, ttlField_);
    };
    DescribeAppsResponseBodyResultSchemas() = default ;
    DescribeAppsResponseBodyResultSchemas(const DescribeAppsResponseBodyResultSchemas &) = default ;
    DescribeAppsResponseBodyResultSchemas(DescribeAppsResponseBodyResultSchemas &&) = default ;
    DescribeAppsResponseBodyResultSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyResultSchemas() = default ;
    DescribeAppsResponseBodyResultSchemas& operator=(const DescribeAppsResponseBodyResultSchemas &) = default ;
    DescribeAppsResponseBodyResultSchemas& operator=(DescribeAppsResponseBodyResultSchemas &&) = default ;
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
    inline const vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig> & indexSortConfig() const { DARABONBA_PTR_GET_CONST(indexSortConfig_, vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig>) };
    inline vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig> indexSortConfig() { DARABONBA_PTR_GET(indexSortConfig_, vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig>) };
    inline DescribeAppsResponseBodyResultSchemas& setIndexSortConfig(const vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig> & indexSortConfig) { DARABONBA_PTR_SET_VALUE(indexSortConfig_, indexSortConfig) };
    inline DescribeAppsResponseBodyResultSchemas& setIndexSortConfig(vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig> && indexSortConfig) { DARABONBA_PTR_SET_RVALUE(indexSortConfig_, indexSortConfig) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const Models::DescribeAppsResponseBodyResultSchemasIndexes & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, Models::DescribeAppsResponseBodyResultSchemasIndexes) };
    inline Models::DescribeAppsResponseBodyResultSchemasIndexes indexes() { DARABONBA_PTR_GET(indexes_, Models::DescribeAppsResponseBodyResultSchemasIndexes) };
    inline DescribeAppsResponseBodyResultSchemas& setIndexes(const Models::DescribeAppsResponseBodyResultSchemasIndexes & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline DescribeAppsResponseBodyResultSchemas& setIndexes(Models::DescribeAppsResponseBodyResultSchemasIndexes && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppsResponseBodyResultSchemas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeField Field Functions 
    bool hasRouteField() const { return this->routeField_ != nullptr;};
    void deleteRouteField() { this->routeField_ = nullptr;};
    inline string routeField() const { DARABONBA_PTR_GET_DEFAULT(routeField_, "") };
    inline DescribeAppsResponseBodyResultSchemas& setRouteField(string routeField) { DARABONBA_PTR_SET_VALUE(routeField_, routeField) };


    // routeFieldValues Field Functions 
    bool hasRouteFieldValues() const { return this->routeFieldValues_ != nullptr;};
    void deleteRouteFieldValues() { this->routeFieldValues_ = nullptr;};
    inline const vector<string> & routeFieldValues() const { DARABONBA_PTR_GET_CONST(routeFieldValues_, vector<string>) };
    inline vector<string> routeFieldValues() { DARABONBA_PTR_GET(routeFieldValues_, vector<string>) };
    inline DescribeAppsResponseBodyResultSchemas& setRouteFieldValues(const vector<string> & routeFieldValues) { DARABONBA_PTR_SET_VALUE(routeFieldValues_, routeFieldValues) };
    inline DescribeAppsResponseBodyResultSchemas& setRouteFieldValues(vector<string> && routeFieldValues) { DARABONBA_PTR_SET_RVALUE(routeFieldValues_, routeFieldValues) };


    // secondRouteField Field Functions 
    bool hasSecondRouteField() const { return this->secondRouteField_ != nullptr;};
    void deleteSecondRouteField() { this->secondRouteField_ = nullptr;};
    inline string secondRouteField() const { DARABONBA_PTR_GET_DEFAULT(secondRouteField_, "") };
    inline DescribeAppsResponseBodyResultSchemas& setSecondRouteField(string secondRouteField) { DARABONBA_PTR_SET_VALUE(secondRouteField_, secondRouteField) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline     const Darabonba::Json & tables() const { DARABONBA_GET(tables_) };
    Darabonba::Json & tables() { DARABONBA_GET(tables_) };
    inline DescribeAppsResponseBodyResultSchemas& setTables(const Darabonba::Json & tables) { DARABONBA_SET_VALUE(tables_, tables) };
    inline DescribeAppsResponseBodyResultSchemas& setTables(Darabonba::Json & tables) { DARABONBA_SET_RVALUE(tables_, tables) };


    // ttlField Field Functions 
    bool hasTtlField() const { return this->ttlField_ != nullptr;};
    void deleteTtlField() { this->ttlField_ = nullptr;};
    inline const Models::DescribeAppsResponseBodyResultSchemasTtlField & ttlField() const { DARABONBA_PTR_GET_CONST(ttlField_, Models::DescribeAppsResponseBodyResultSchemasTtlField) };
    inline Models::DescribeAppsResponseBodyResultSchemasTtlField ttlField() { DARABONBA_PTR_GET(ttlField_, Models::DescribeAppsResponseBodyResultSchemasTtlField) };
    inline DescribeAppsResponseBodyResultSchemas& setTtlField(const Models::DescribeAppsResponseBodyResultSchemasTtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
    inline DescribeAppsResponseBodyResultSchemas& setTtlField(Models::DescribeAppsResponseBodyResultSchemasTtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


  protected:
    // The sort configurations.
    std::shared_ptr<vector<Models::DescribeAppsResponseBodyResultSchemasIndexSortConfig>> indexSortConfig_ = nullptr;
    // The index schema.
    std::shared_ptr<Models::DescribeAppsResponseBodyResultSchemasIndexes> indexes_ = nullptr;
    // The name of the wide table.
    std::shared_ptr<string> name_ = nullptr;
    // The level-1 routing field.
    std::shared_ptr<string> routeField_ = nullptr;
    // The hot values of the level-1 routing field.
    std::shared_ptr<vector<string>> routeFieldValues_ = nullptr;
    // The level-2 routing field. This parameter is returned if the routeFieldValues parameter is returned. By default, the wide-table primary key field is used as the level-2 routing field.
    std::shared_ptr<string> secondRouteField_ = nullptr;
    // The table schema.
    Darabonba::Json tables_ = nullptr;
    // The document clearing configurations.
    std::shared_ptr<Models::DescribeAppsResponseBodyResultSchemasTtlField> ttlField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
