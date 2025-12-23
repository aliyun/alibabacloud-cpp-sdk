// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppRequestSchemasIndexSortConfig.hpp>
#include <alibabacloud/models/CreateAppRequestSchemasIndexes.hpp>
#include <alibabacloud/models/CreateAppRequestSchemasTtlField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequestSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeField, routeField_);
      DARABONBA_PTR_TO_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_TO_JSON(secondRouteField, secondRouteField_);
      DARABONBA_ANY_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(ttlField, ttlField_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(indexSortConfig, indexSortConfig_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeField, routeField_);
      DARABONBA_PTR_FROM_JSON(routeFieldValues, routeFieldValues_);
      DARABONBA_PTR_FROM_JSON(secondRouteField, secondRouteField_);
      DARABONBA_ANY_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(ttlField, ttlField_);
    };
    CreateAppRequestSchemas() = default ;
    CreateAppRequestSchemas(const CreateAppRequestSchemas &) = default ;
    CreateAppRequestSchemas(CreateAppRequestSchemas &&) = default ;
    CreateAppRequestSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestSchemas() = default ;
    CreateAppRequestSchemas& operator=(const CreateAppRequestSchemas &) = default ;
    CreateAppRequestSchemas& operator=(CreateAppRequestSchemas &&) = default ;
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
    inline const vector<Models::CreateAppRequestSchemasIndexSortConfig> & indexSortConfig() const { DARABONBA_PTR_GET_CONST(indexSortConfig_, vector<Models::CreateAppRequestSchemasIndexSortConfig>) };
    inline vector<Models::CreateAppRequestSchemasIndexSortConfig> indexSortConfig() { DARABONBA_PTR_GET(indexSortConfig_, vector<Models::CreateAppRequestSchemasIndexSortConfig>) };
    inline CreateAppRequestSchemas& setIndexSortConfig(const vector<Models::CreateAppRequestSchemasIndexSortConfig> & indexSortConfig) { DARABONBA_PTR_SET_VALUE(indexSortConfig_, indexSortConfig) };
    inline CreateAppRequestSchemas& setIndexSortConfig(vector<Models::CreateAppRequestSchemasIndexSortConfig> && indexSortConfig) { DARABONBA_PTR_SET_RVALUE(indexSortConfig_, indexSortConfig) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const Models::CreateAppRequestSchemasIndexes & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, Models::CreateAppRequestSchemasIndexes) };
    inline Models::CreateAppRequestSchemasIndexes indexes() { DARABONBA_PTR_GET(indexes_, Models::CreateAppRequestSchemasIndexes) };
    inline CreateAppRequestSchemas& setIndexes(const Models::CreateAppRequestSchemasIndexes & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline CreateAppRequestSchemas& setIndexes(Models::CreateAppRequestSchemasIndexes && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppRequestSchemas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeField Field Functions 
    bool hasRouteField() const { return this->routeField_ != nullptr;};
    void deleteRouteField() { this->routeField_ = nullptr;};
    inline string routeField() const { DARABONBA_PTR_GET_DEFAULT(routeField_, "") };
    inline CreateAppRequestSchemas& setRouteField(string routeField) { DARABONBA_PTR_SET_VALUE(routeField_, routeField) };


    // routeFieldValues Field Functions 
    bool hasRouteFieldValues() const { return this->routeFieldValues_ != nullptr;};
    void deleteRouteFieldValues() { this->routeFieldValues_ = nullptr;};
    inline const vector<string> & routeFieldValues() const { DARABONBA_PTR_GET_CONST(routeFieldValues_, vector<string>) };
    inline vector<string> routeFieldValues() { DARABONBA_PTR_GET(routeFieldValues_, vector<string>) };
    inline CreateAppRequestSchemas& setRouteFieldValues(const vector<string> & routeFieldValues) { DARABONBA_PTR_SET_VALUE(routeFieldValues_, routeFieldValues) };
    inline CreateAppRequestSchemas& setRouteFieldValues(vector<string> && routeFieldValues) { DARABONBA_PTR_SET_RVALUE(routeFieldValues_, routeFieldValues) };


    // secondRouteField Field Functions 
    bool hasSecondRouteField() const { return this->secondRouteField_ != nullptr;};
    void deleteSecondRouteField() { this->secondRouteField_ = nullptr;};
    inline string secondRouteField() const { DARABONBA_PTR_GET_DEFAULT(secondRouteField_, "") };
    inline CreateAppRequestSchemas& setSecondRouteField(string secondRouteField) { DARABONBA_PTR_SET_VALUE(secondRouteField_, secondRouteField) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline     const Darabonba::Json & tables() const { DARABONBA_GET(tables_) };
    Darabonba::Json & tables() { DARABONBA_GET(tables_) };
    inline CreateAppRequestSchemas& setTables(const Darabonba::Json & tables) { DARABONBA_SET_VALUE(tables_, tables) };
    inline CreateAppRequestSchemas& setTables(Darabonba::Json & tables) { DARABONBA_SET_RVALUE(tables_, tables) };


    // ttlField Field Functions 
    bool hasTtlField() const { return this->ttlField_ != nullptr;};
    void deleteTtlField() { this->ttlField_ = nullptr;};
    inline const Models::CreateAppRequestSchemasTtlField & ttlField() const { DARABONBA_PTR_GET_CONST(ttlField_, Models::CreateAppRequestSchemasTtlField) };
    inline Models::CreateAppRequestSchemasTtlField ttlField() { DARABONBA_PTR_GET(ttlField_, Models::CreateAppRequestSchemasTtlField) };
    inline CreateAppRequestSchemas& setTtlField(const Models::CreateAppRequestSchemasTtlField & ttlField) { DARABONBA_PTR_SET_VALUE(ttlField_, ttlField) };
    inline CreateAppRequestSchemas& setTtlField(Models::CreateAppRequestSchemasTtlField && ttlField) { DARABONBA_PTR_SET_RVALUE(ttlField_, ttlField) };


  protected:
    // The sort configurations.
    std::shared_ptr<vector<Models::CreateAppRequestSchemasIndexSortConfig>> indexSortConfig_ = nullptr;
    // The index schema.
    std::shared_ptr<Models::CreateAppRequestSchemasIndexes> indexes_ = nullptr;
    // The name of the wide table.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the level-1 routing field.
    std::shared_ptr<string> routeField_ = nullptr;
    // The hot values of the level-1 routing field. After you configure this parameter, level-2 routing is enabled.
    std::shared_ptr<vector<string>> routeFieldValues_ = nullptr;
    // The name of the level-2 routing field. This parameter takes effect only when the routeFieldValues parameter is configured. By default, the wide-table primary key field is used as the level-2 routing field.
    std::shared_ptr<string> secondRouteField_ = nullptr;
    // The table schema.
    Darabonba::Json tables_ = nullptr;
    // The document clearing configurations.
    std::shared_ptr<Models::CreateAppRequestSchemasTtlField> ttlField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
