// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYCOLUMNSCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYCOLUMNSCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBodyColumnsColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBodyColumnsColumn& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrementColumn, autoIncrementColumn_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBodyColumnsColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrementColumn, autoIncrementColumn_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAllDataSourceResponseBodyColumnsColumn() = default ;
    DescribeAllDataSourceResponseBodyColumnsColumn(const DescribeAllDataSourceResponseBodyColumnsColumn &) = default ;
    DescribeAllDataSourceResponseBodyColumnsColumn(DescribeAllDataSourceResponseBodyColumnsColumn &&) = default ;
    DescribeAllDataSourceResponseBodyColumnsColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBodyColumnsColumn() = default ;
    DescribeAllDataSourceResponseBodyColumnsColumn& operator=(const DescribeAllDataSourceResponseBodyColumnsColumn &) = default ;
    DescribeAllDataSourceResponseBodyColumnsColumn& operator=(DescribeAllDataSourceResponseBodyColumnsColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoIncrementColumn_ != nullptr
        && this->columnName_ != nullptr && this->DBClusterId_ != nullptr && this->primaryKey_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr
        && this->type_ != nullptr; };
    // autoIncrementColumn Field Functions 
    bool hasAutoIncrementColumn() const { return this->autoIncrementColumn_ != nullptr;};
    void deleteAutoIncrementColumn() { this->autoIncrementColumn_ = nullptr;};
    inline bool autoIncrementColumn() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementColumn_, false) };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setAutoIncrementColumn(bool autoIncrementColumn) { DARABONBA_PTR_SET_VALUE(autoIncrementColumn_, autoIncrementColumn) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAllDataSourceResponseBodyColumnsColumn& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the column is an auto-increment column. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoIncrementColumn_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Indicates whether the column is the primary key of the table. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> primaryKey_ = nullptr;
    // The logical name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The logical name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The data type of the column.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
