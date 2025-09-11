// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODYDATACOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODYDATACOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceDataSourcesResponseBodyDataColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataSourcesResponseBodyDataColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataSourcesResponseBodyDataColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDBInstanceDataSourcesResponseBodyDataColumns() = default ;
    DescribeDBInstanceDataSourcesResponseBodyDataColumns(const DescribeDBInstanceDataSourcesResponseBodyDataColumns &) = default ;
    DescribeDBInstanceDataSourcesResponseBodyDataColumns(DescribeDBInstanceDataSourcesResponseBodyDataColumns &&) = default ;
    DescribeDBInstanceDataSourcesResponseBodyDataColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataSourcesResponseBodyDataColumns() = default ;
    DescribeDBInstanceDataSourcesResponseBodyDataColumns& operator=(const DescribeDBInstanceDataSourcesResponseBodyDataColumns &) = default ;
    DescribeDBInstanceDataSourcesResponseBodyDataColumns& operator=(DescribeDBInstanceDataSourcesResponseBodyDataColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->comment_ != nullptr && this->DBName_ != nullptr && this->primaryKey_ != nullptr && this->tableName_ != nullptr && this->type_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDBInstanceDataSourcesResponseBodyDataColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The column name.
    std::shared_ptr<string> columnName_ = nullptr;
    // The description of the database account.
    std::shared_ptr<string> comment_ = nullptr;
    // The database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // Indicates whether the column is the primary key of the table. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of the stored data.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
