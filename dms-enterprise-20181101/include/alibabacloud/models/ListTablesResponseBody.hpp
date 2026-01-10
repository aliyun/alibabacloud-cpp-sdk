// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTablesResponseBody() = default ;
    ListTablesResponseBody(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody(ListTablesResponseBody &&) = default ;
    ListTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBody() = default ;
    ListTablesResponseBody& operator=(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody& operator=(ListTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableList& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, TableList& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      TableList() = default ;
      TableList(const TableList &) = default ;
      TableList(TableList &&) = default ;
      TableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableList() = default ;
      TableList& operator=(const TableList &) = default ;
      TableList& operator=(TableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Encoding, encoding_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(NumRows, numRows_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(StoreCapacity, storeCapacity_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
          DARABONBA_PTR_TO_JSON(TableType, tableType_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(NumRows, numRows_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(StoreCapacity, storeCapacity_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
          DARABONBA_PTR_FROM_JSON(TableType, tableType_);
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
        class OwnerNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerNameList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
          };
          OwnerNameList() = default ;
          OwnerNameList(const OwnerNameList &) = default ;
          OwnerNameList(OwnerNameList &&) = default ;
          OwnerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerNameList() = default ;
          OwnerNameList& operator=(const OwnerNameList &) = default ;
          OwnerNameList& operator=(OwnerNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerNames_ == nullptr; };
          // ownerNames Field Functions 
          bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
          void deleteOwnerNames() { this->ownerNames_ = nullptr;};
          inline const vector<string> & getOwnerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
          inline vector<string> getOwnerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
          inline OwnerNameList& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
          inline OwnerNameList& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


        protected:
          shared_ptr<vector<string>> ownerNames_ {};
        };

        class OwnerIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerIdList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
          };
          OwnerIdList() = default ;
          OwnerIdList(const OwnerIdList &) = default ;
          OwnerIdList(OwnerIdList &&) = default ;
          OwnerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerIdList() = default ;
          OwnerIdList& operator=(const OwnerIdList &) = default ;
          OwnerIdList& operator=(OwnerIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerIds_ == nullptr; };
          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<string> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<string>) };
          inline vector<string> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<string>) };
          inline OwnerIdList& setOwnerIds(const vector<string> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline OwnerIdList& setOwnerIds(vector<string> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


        protected:
          shared_ptr<vector<string>> ownerIds_ {};
        };

        virtual bool empty() const override { return this->databaseId_ == nullptr
        && this->description_ == nullptr && this->encoding_ == nullptr && this->engine_ == nullptr && this->numRows_ == nullptr && this->ownerIdList_ == nullptr
        && this->ownerNameList_ == nullptr && this->storeCapacity_ == nullptr && this->tableGuid_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr
        && this->tableSchemaName_ == nullptr && this->tableType_ == nullptr; };
        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline Table& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Table& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encoding Field Functions 
        bool hasEncoding() const { return this->encoding_ != nullptr;};
        void deleteEncoding() { this->encoding_ = nullptr;};
        inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
        inline Table& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Table& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // numRows Field Functions 
        bool hasNumRows() const { return this->numRows_ != nullptr;};
        void deleteNumRows() { this->numRows_ = nullptr;};
        inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
        inline Table& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const Table::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Table::OwnerIdList) };
        inline Table::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, Table::OwnerIdList) };
        inline Table& setOwnerIdList(const Table::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline Table& setOwnerIdList(Table::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const Table::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Table::OwnerNameList) };
        inline Table::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, Table::OwnerNameList) };
        inline Table& setOwnerNameList(const Table::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline Table& setOwnerNameList(Table::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // storeCapacity Field Functions 
        bool hasStoreCapacity() const { return this->storeCapacity_ != nullptr;};
        void deleteStoreCapacity() { this->storeCapacity_ = nullptr;};
        inline int64_t getStoreCapacity() const { DARABONBA_PTR_GET_DEFAULT(storeCapacity_, 0L) };
        inline Table& setStoreCapacity(int64_t storeCapacity) { DARABONBA_PTR_SET_VALUE(storeCapacity_, storeCapacity) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline Table& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline Table& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Table& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // tableSchemaName Field Functions 
        bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
        void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
        inline string getTableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
        inline Table& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


        // tableType Field Functions 
        bool hasTableType() const { return this->tableType_ != nullptr;};
        void deleteTableType() { this->tableType_ = nullptr;};
        inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
        inline Table& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


      protected:
        // The ID of the physical database.
        shared_ptr<string> databaseId_ {};
        // The description of the table.
        shared_ptr<string> description_ {};
        // The encoding format of the table.
        shared_ptr<string> encoding_ {};
        // The engine of the table.
        shared_ptr<string> engine_ {};
        // The number of rows in the table. This is a statistical value and does not indicate the actual number of rows.
        shared_ptr<int64_t> numRows_ {};
        // The ID list of the table owners.
        shared_ptr<Table::OwnerIdList> ownerIdList_ {};
        // The nickname list of the table owners.
        shared_ptr<Table::OwnerNameList> ownerNameList_ {};
        // The storage space that is occupied by the table. This is a statistical value and does not indicate the accurate storage space. Unit: MB.
        shared_ptr<int64_t> storeCapacity_ {};
        // The GUID of the table in DMS.
        shared_ptr<string> tableGuid_ {};
        // The ID of the table.
        shared_ptr<string> tableId_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
        // The database in which the table resides.
        shared_ptr<string> tableSchemaName_ {};
        // The type of the table. Default value: NORMAL.
        shared_ptr<string> tableType_ {};
      };

      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<TableList::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<TableList::Table>) };
      inline vector<TableList::Table> getTable() { DARABONBA_PTR_GET(table_, vector<TableList::Table>) };
      inline TableList& setTable(const vector<TableList::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline TableList& setTable(vector<TableList::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      shared_ptr<vector<TableList::Table>> table_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tableList_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTablesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTablesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const ListTablesResponseBody::TableList & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, ListTablesResponseBody::TableList) };
    inline ListTablesResponseBody::TableList getTableList() { DARABONBA_PTR_GET(tableList_, ListTablesResponseBody::TableList) };
    inline ListTablesResponseBody& setTableList(const ListTablesResponseBody::TableList & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline ListTablesResponseBody& setTableList(ListTablesResponseBody::TableList && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The details of the tables.
    shared_ptr<ListTablesResponseBody::TableList> tableList_ {};
    // The total number of tables that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
