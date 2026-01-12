// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeAllDataSourcesResponseBody() = default ;
    DescribeAllDataSourcesResponseBody(const DescribeAllDataSourcesResponseBody &) = default ;
    DescribeAllDataSourcesResponseBody(DescribeAllDataSourcesResponseBody &&) = default ;
    DescribeAllDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBody() = default ;
    DescribeAllDataSourcesResponseBody& operator=(const DescribeAllDataSourcesResponseBody &) = default ;
    DescribeAllDataSourcesResponseBody& operator=(DescribeAllDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        Table() = default ;
        Table(const Table &) = default ;
        Table(Table &&) = default ;
        Table(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Table() = default ;
        Table& operator=(const Table &) = default ;
        Table& operator=(Table &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->schemaName_ == nullptr && this->tableName_ == nullptr; };
        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Table& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Table& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Table& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The database name.
        shared_ptr<string> schemaName_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<Tables::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Tables::Table>) };
      inline vector<Tables::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Tables::Table>) };
      inline Tables& setTable(const vector<Tables::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Tables& setTable(vector<Tables::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      shared_ptr<vector<Tables::Table>> table_ {};
    };

    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(Schema, schema_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
      };
      Schemas() = default ;
      Schemas(const Schemas &) = default ;
      Schemas(Schemas &&) = default ;
      Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schemas() = default ;
      Schemas& operator=(const Schemas &) = default ;
      Schemas& operator=(Schemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Schema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Schema& obj) { 
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        };
        friend void from_json(const Darabonba::Json& j, Schema& obj) { 
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
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
        virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->schemaName_ == nullptr; };
        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Schema& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Schema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      protected:
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The database name.
        shared_ptr<string> schemaName_ {};
      };

      virtual bool empty() const override { return this->schema_ == nullptr; };
      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline const vector<Schemas::Schema> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, vector<Schemas::Schema>) };
      inline vector<Schemas::Schema> getSchema() { DARABONBA_PTR_GET(schema_, vector<Schemas::Schema>) };
      inline Schemas& setSchema(const vector<Schemas::Schema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
      inline Schemas& setSchema(vector<Schemas::Schema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    protected:
      shared_ptr<vector<Schemas::Schema>> schema_ {};
    };

    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
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
      class Column : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Column& obj) { 
          DARABONBA_PTR_TO_JSON(AutoIncrementColumn, autoIncrementColumn_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Column& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoIncrementColumn, autoIncrementColumn_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Column() = default ;
        Column(const Column &) = default ;
        Column(Column &&) = default ;
        Column(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Column() = default ;
        Column& operator=(const Column &) = default ;
        Column& operator=(Column &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoIncrementColumn_ == nullptr
        && this->columnName_ == nullptr && this->DBClusterId_ == nullptr && this->primaryKey_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr
        && this->type_ == nullptr; };
        // autoIncrementColumn Field Functions 
        bool hasAutoIncrementColumn() const { return this->autoIncrementColumn_ != nullptr;};
        void deleteAutoIncrementColumn() { this->autoIncrementColumn_ = nullptr;};
        inline bool getAutoIncrementColumn() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementColumn_, false) };
        inline Column& setAutoIncrementColumn(bool autoIncrementColumn) { DARABONBA_PTR_SET_VALUE(autoIncrementColumn_, autoIncrementColumn) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline Column& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Column& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline bool getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
        inline Column& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Column& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Column& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Column& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Indicates whether the column is an auto-increment column. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> autoIncrementColumn_ {};
        // The column name.
        shared_ptr<string> columnName_ {};
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // Indicates whether the column is the primary key of the table. Valid values:
        // 
        // *   **true**: The column is the primary key of the table.
        // *   **false**: The column is not the primary key of the table.
        shared_ptr<bool> primaryKey_ {};
        // The database name.
        shared_ptr<string> schemaName_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
        // The column type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->column_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline const vector<Columns::Column> & getColumn() const { DARABONBA_PTR_GET_CONST(column_, vector<Columns::Column>) };
      inline vector<Columns::Column> getColumn() { DARABONBA_PTR_GET(column_, vector<Columns::Column>) };
      inline Columns& setColumn(const vector<Columns::Column> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
      inline Columns& setColumn(vector<Columns::Column> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    protected:
      shared_ptr<vector<Columns::Column>> column_ {};
    };

    virtual bool empty() const override { return this->columns_ == nullptr
        && this->requestId_ == nullptr && this->schemas_ == nullptr && this->tables_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBody::Columns & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, DescribeAllDataSourcesResponseBody::Columns) };
    inline DescribeAllDataSourcesResponseBody::Columns getColumns() { DARABONBA_PTR_GET(columns_, DescribeAllDataSourcesResponseBody::Columns) };
    inline DescribeAllDataSourcesResponseBody& setColumns(const DescribeAllDataSourcesResponseBody::Columns & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeAllDataSourcesResponseBody& setColumns(DescribeAllDataSourcesResponseBody::Columns && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBody::Schemas & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, DescribeAllDataSourcesResponseBody::Schemas) };
    inline DescribeAllDataSourcesResponseBody::Schemas getSchemas() { DARABONBA_PTR_GET(schemas_, DescribeAllDataSourcesResponseBody::Schemas) };
    inline DescribeAllDataSourcesResponseBody& setSchemas(const DescribeAllDataSourcesResponseBody::Schemas & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline DescribeAllDataSourcesResponseBody& setSchemas(DescribeAllDataSourcesResponseBody::Schemas && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBody::Tables & getTables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeAllDataSourcesResponseBody::Tables) };
    inline DescribeAllDataSourcesResponseBody::Tables getTables() { DARABONBA_PTR_GET(tables_, DescribeAllDataSourcesResponseBody::Tables) };
    inline DescribeAllDataSourcesResponseBody& setTables(const DescribeAllDataSourcesResponseBody::Tables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeAllDataSourcesResponseBody& setTables(DescribeAllDataSourcesResponseBody::Tables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // Details of the columns.
    shared_ptr<DescribeAllDataSourcesResponseBody::Columns> columns_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the databases.
    shared_ptr<DescribeAllDataSourcesResponseBody::Schemas> schemas_ {};
    // The information about the tables.
    shared_ptr<DescribeAllDataSourcesResponseBody::Tables> tables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
