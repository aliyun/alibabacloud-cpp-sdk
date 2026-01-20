// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceDataSourcesResponseBody() = default ;
    DescribeDBInstanceDataSourcesResponseBody(const DescribeDBInstanceDataSourcesResponseBody &) = default ;
    DescribeDBInstanceDataSourcesResponseBody(DescribeDBInstanceDataSourcesResponseBody &&) = default ;
    DescribeDBInstanceDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDataSourcesResponseBody() = default ;
    DescribeDBInstanceDataSourcesResponseBody& operator=(const DescribeDBInstanceDataSourcesResponseBody &) = default ;
    DescribeDBInstanceDataSourcesResponseBody& operator=(DescribeDBInstanceDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(Schemas, schemas_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Columns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Columns& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Columns& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Columns() = default ;
        Columns(const Columns &) = default ;
        Columns(Columns &&) = default ;
        Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Columns() = default ;
        Columns& operator=(const Columns &) = default ;
        Columns& operator=(Columns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->comment_ == nullptr && this->DBName_ == nullptr && this->primaryKey_ == nullptr && this->tableName_ == nullptr && this->type_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Columns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Columns& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
        inline Columns& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Columns& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The column name.
        shared_ptr<string> columnName_ {};
        // The description of the database account.
        shared_ptr<string> comment_ {};
        // The database name.
        shared_ptr<string> DBName_ {};
        // Indicates whether the column is the primary key of the table. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> primaryKey_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
        // The type of the stored data.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->columns_ == nullptr
        && this->DBInstanceId_ == nullptr && this->schemas_ == nullptr && this->tables_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<Data::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Data::Columns>) };
      inline vector<Data::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Data::Columns>) };
      inline Data& setColumns(const vector<Data::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Data& setColumns(vector<Data::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // schemas Field Functions 
      bool hasSchemas() const { return this->schemas_ != nullptr;};
      void deleteSchemas() { this->schemas_ = nullptr;};
      inline string getSchemas() const { DARABONBA_PTR_GET_DEFAULT(schemas_, "") };
      inline Data& setSchemas(string schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
      inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
      inline Data& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      // The columns.
      shared_ptr<vector<Data::Columns>> columns_ {};
      // The cluster ID.
      shared_ptr<string> DBInstanceId_ {};
      // The account.
      shared_ptr<string> schemas_ {};
      // The tables.
      shared_ptr<vector<string>> tables_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceDataSourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceDataSourcesResponseBody::Data) };
    inline DescribeDBInstanceDataSourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceDataSourcesResponseBody::Data) };
    inline DescribeDBInstanceDataSourcesResponseBody& setData(const DescribeDBInstanceDataSourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceDataSourcesResponseBody& setData(DescribeDBInstanceDataSourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeDBInstanceDataSourcesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
