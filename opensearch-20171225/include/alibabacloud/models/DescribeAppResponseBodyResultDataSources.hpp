// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTDATASOURCES_HPP_
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
  class DescribeAppResponseBodyResultDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppResponseBodyResultDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(keyField, keyField_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_ANY_TO_JSON(plugins, plugins_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppResponseBodyResultDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(keyField, keyField_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_ANY_FROM_JSON(plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeAppResponseBodyResultDataSources() = default ;
    DescribeAppResponseBodyResultDataSources(const DescribeAppResponseBodyResultDataSources &) = default ;
    DescribeAppResponseBodyResultDataSources(DescribeAppResponseBodyResultDataSources &&) = default ;
    DescribeAppResponseBodyResultDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppResponseBodyResultDataSources() = default ;
    DescribeAppResponseBodyResultDataSources& operator=(const DescribeAppResponseBodyResultDataSources &) = default ;
    DescribeAppResponseBodyResultDataSources& operator=(DescribeAppResponseBodyResultDataSources &&) = default ;
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
    inline const vector<Darabonba::Json> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> fields() { DARABONBA_PTR_GET(fields_, vector<Darabonba::Json>) };
    inline DescribeAppResponseBodyResultDataSources& setFields(const vector<Darabonba::Json> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeAppResponseBodyResultDataSources& setFields(vector<Darabonba::Json> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // keyField Field Functions 
    bool hasKeyField() const { return this->keyField_ != nullptr;};
    void deleteKeyField() { this->keyField_ = nullptr;};
    inline string keyField() const { DARABONBA_PTR_GET_DEFAULT(keyField_, "") };
    inline DescribeAppResponseBodyResultDataSources& setKeyField(string keyField) { DARABONBA_PTR_SET_VALUE(keyField_, keyField) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline DescribeAppResponseBodyResultDataSources& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DescribeAppResponseBodyResultDataSources& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline     const Darabonba::Json & plugins() const { DARABONBA_GET(plugins_) };
    Darabonba::Json & plugins() { DARABONBA_GET(plugins_) };
    inline DescribeAppResponseBodyResultDataSources& setPlugins(const Darabonba::Json & plugins) { DARABONBA_SET_VALUE(plugins_, plugins) };
    inline DescribeAppResponseBodyResultDataSources& setPlugins(Darabonba::Json & plugins) { DARABONBA_SET_RVALUE(plugins_, plugins) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAppResponseBodyResultDataSources& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAppResponseBodyResultDataSources& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAppResponseBodyResultDataSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The information about field mappings.
    std::shared_ptr<vector<Darabonba::Json>> fields_ = nullptr;
    // The primary key.
    std::shared_ptr<string> keyField_ = nullptr;
    // The information about the data source.
    Darabonba::Json parameters_ = nullptr;
    // The plug-ins that are used for data processing.
    // 
    // name:
    // 
    // *   JsonKeyValueExtractor
    // *   MultiValueSpliter
    // *   KeyValueExtractor
    // *   StringCatenateExtractor
    // *   HTMLTagRemover
    // 
    // parameters:
    // 
    // *   JsonKeyValueExtractor
    // *   MultiValueSpliter
    // *   KeyValueExtractor
    // *   StringCatenateExtractor
    // *   HTMLTagRemover
    Darabonba::Json plugins_ = nullptr;
    // The name of the wide table.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table in the application.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   rds
    // *   odps
    // *   opensearch
    // *   polardb
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
