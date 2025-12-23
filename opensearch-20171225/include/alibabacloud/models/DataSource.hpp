// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_DATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataSourcePluginsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(keyField, keyField_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(plugins, plugins_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(keyField, keyField_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DataSource() = default ;
    DataSource(const DataSource &) = default ;
    DataSource(DataSource &&) = default ;
    DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSource() = default ;
    DataSource& operator=(const DataSource &) = default ;
    DataSource& operator=(DataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr
        && return this->keyField_ == nullptr && return this->parameters_ == nullptr && return this->plugins_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr
        && return this->type_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<map<string, string>> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<map<string, string>>) };
    inline vector<map<string, string>> fields() { DARABONBA_PTR_GET(fields_, vector<map<string, string>>) };
    inline DataSource& setFields(const vector<map<string, string>> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DataSource& setFields(vector<map<string, string>> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // keyField Field Functions 
    bool hasKeyField() const { return this->keyField_ != nullptr;};
    void deleteKeyField() { this->keyField_ = nullptr;};
    inline string keyField() const { DARABONBA_PTR_GET_DEFAULT(keyField_, "") };
    inline DataSource& setKeyField(string keyField) { DARABONBA_PTR_SET_VALUE(keyField_, keyField) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline DataSource& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DataSource& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const map<string, DataSourcePluginsValue> & plugins() const { DARABONBA_PTR_GET_CONST(plugins_, map<string, DataSourcePluginsValue>) };
    inline map<string, DataSourcePluginsValue> plugins() { DARABONBA_PTR_GET(plugins_, map<string, DataSourcePluginsValue>) };
    inline DataSource& setPlugins(const map<string, DataSourcePluginsValue> & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline DataSource& setPlugins(map<string, DataSourcePluginsValue> && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DataSource& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DataSource& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<map<string, string>>> fields_ = nullptr;
    std::shared_ptr<string> keyField_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
    std::shared_ptr<map<string, DataSourcePluginsValue>> plugins_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
