// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODYRESULTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODYRESULTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ValidateDataSourcesResponseBodyResultDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDataSourcesResponseBodyResultDataSource& obj) { 
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDataSourcesResponseBodyResultDataSource& obj) { 
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ValidateDataSourcesResponseBodyResultDataSource() = default ;
    ValidateDataSourcesResponseBodyResultDataSource(const ValidateDataSourcesResponseBodyResultDataSource &) = default ;
    ValidateDataSourcesResponseBodyResultDataSource(ValidateDataSourcesResponseBodyResultDataSource &&) = default ;
    ValidateDataSourcesResponseBodyResultDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDataSourcesResponseBodyResultDataSource() = default ;
    ValidateDataSourcesResponseBodyResultDataSource& operator=(const ValidateDataSourcesResponseBodyResultDataSource &) = default ;
    ValidateDataSourcesResponseBodyResultDataSource& operator=(ValidateDataSourcesResponseBodyResultDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameters_ == nullptr
        && return this->tableName_ == nullptr && return this->type_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline ValidateDataSourcesResponseBodyResultDataSource& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ValidateDataSourcesResponseBodyResultDataSource& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ValidateDataSourcesResponseBodyResultDataSource& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ValidateDataSourcesResponseBodyResultDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The parameters of the data source.
    Darabonba::Json parameters_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
