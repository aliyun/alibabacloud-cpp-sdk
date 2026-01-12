// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODY_HPP_
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
  class DescribeColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColumnsResponseBody() = default ;
    DescribeColumnsResponseBody(const DescribeColumnsResponseBody &) = default ;
    DescribeColumnsResponseBody(DescribeColumnsResponseBody &&) = default ;
    DescribeColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsResponseBody() = default ;
    DescribeColumnsResponseBody& operator=(const DescribeColumnsResponseBody &) = default ;
    DescribeColumnsResponseBody& operator=(DescribeColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
        // *   **true**
        // *   **false**
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
      inline const vector<Items::Column> & getColumn() const { DARABONBA_PTR_GET_CONST(column_, vector<Items::Column>) };
      inline vector<Items::Column> getColumn() { DARABONBA_PTR_GET(column_, vector<Items::Column>) };
      inline Items& setColumn(const vector<Items::Column> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
      inline Items& setColumn(vector<Items::Column> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    protected:
      shared_ptr<vector<Items::Column>> column_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeColumnsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeColumnsResponseBody::Items) };
    inline DescribeColumnsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeColumnsResponseBody::Items) };
    inline DescribeColumnsResponseBody& setItems(const DescribeColumnsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeColumnsResponseBody& setItems(DescribeColumnsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the columns.
    shared_ptr<DescribeColumnsResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
