// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODY_HPP_
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
  class SearchTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchTableList, searchTableList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchTableList, searchTableList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchTableResponseBody() = default ;
    SearchTableResponseBody(const SearchTableResponseBody &) = default ;
    SearchTableResponseBody(SearchTableResponseBody &&) = default ;
    SearchTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableResponseBody() = default ;
    SearchTableResponseBody& operator=(const SearchTableResponseBody &) = default ;
    SearchTableResponseBody& operator=(SearchTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchTableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchTableList& obj) { 
        DARABONBA_PTR_TO_JSON(SearchTable, searchTable_);
      };
      friend void from_json(const Darabonba::Json& j, SearchTableList& obj) { 
        DARABONBA_PTR_FROM_JSON(SearchTable, searchTable_);
      };
      SearchTableList() = default ;
      SearchTableList(const SearchTableList &) = default ;
      SearchTableList(SearchTableList &&) = default ;
      SearchTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchTableList() = default ;
      SearchTableList& operator=(const SearchTableList &) = default ;
      SearchTableList& operator=(SearchTableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchTable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchTable& obj) { 
          DARABONBA_PTR_TO_JSON(DBSearchName, DBSearchName_);
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_TO_JSON(DbName, dbName_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Encoding, encoding_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
        };
        friend void from_json(const Darabonba::Json& j, SearchTable& obj) { 
          DARABONBA_PTR_FROM_JSON(DBSearchName, DBSearchName_);
          DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_FROM_JSON(DbName, dbName_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
        };
        SearchTable() = default ;
        SearchTable(const SearchTable &) = default ;
        SearchTable(SearchTable &&) = default ;
        SearchTable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchTable() = default ;
        SearchTable& operator=(const SearchTable &) = default ;
        SearchTable& operator=(SearchTable &&) = default ;
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

        virtual bool empty() const override { return this->DBSearchName_ == nullptr
        && this->databaseId_ == nullptr && this->dbName_ == nullptr && this->dbType_ == nullptr && this->description_ == nullptr && this->encoding_ == nullptr
        && this->engine_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->ownerIdList_ == nullptr && this->ownerNameList_ == nullptr
        && this->tableGuid_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr && this->tableSchemaName_ == nullptr; };
        // DBSearchName Field Functions 
        bool hasDBSearchName() const { return this->DBSearchName_ != nullptr;};
        void deleteDBSearchName() { this->DBSearchName_ = nullptr;};
        inline string getDBSearchName() const { DARABONBA_PTR_GET_DEFAULT(DBSearchName_, "") };
        inline SearchTable& setDBSearchName(string DBSearchName) { DARABONBA_PTR_SET_VALUE(DBSearchName_, DBSearchName) };


        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline SearchTable& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


        // dbName Field Functions 
        bool hasDbName() const { return this->dbName_ != nullptr;};
        void deleteDbName() { this->dbName_ = nullptr;};
        inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
        inline SearchTable& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline SearchTable& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SearchTable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encoding Field Functions 
        bool hasEncoding() const { return this->encoding_ != nullptr;};
        void deleteEncoding() { this->encoding_ = nullptr;};
        inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
        inline SearchTable& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline SearchTable& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline SearchTable& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline SearchTable& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const SearchTable::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, SearchTable::OwnerIdList) };
        inline SearchTable::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, SearchTable::OwnerIdList) };
        inline SearchTable& setOwnerIdList(const SearchTable::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline SearchTable& setOwnerIdList(SearchTable::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const SearchTable::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, SearchTable::OwnerNameList) };
        inline SearchTable::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, SearchTable::OwnerNameList) };
        inline SearchTable& setOwnerNameList(const SearchTable::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline SearchTable& setOwnerNameList(SearchTable::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline SearchTable& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline SearchTable& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SearchTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // tableSchemaName Field Functions 
        bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
        void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
        inline string getTableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
        inline SearchTable& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


      protected:
        // The name that is used to search for the database to which the table belongs.
        shared_ptr<string> DBSearchName_ {};
        // The ID of the database to which the table belongs.
        shared_ptr<string> databaseId_ {};
        // The name of the database.
        shared_ptr<string> dbName_ {};
        // The type of the database. Valid values:
        // 
        // *   **MySQL**
        // *   **SQLServer**
        // *   **PostgreSQL**
        // *   **Oracle**
        // *   **DRDS**
        // *   **OceanBase**
        // *   **Mongo**
        // *   **Redis**
        shared_ptr<string> dbType_ {};
        // The description of the table.
        shared_ptr<string> description_ {};
        // The encoding format of the table.
        shared_ptr<string> encoding_ {};
        // The engine of the table.
        shared_ptr<string> engine_ {};
        // The type of the environment to which the database belongs.
        shared_ptr<string> envType_ {};
        // Indicates whether the table is a logical table. Valid values:
        // 
        // *   **true**: The table is a logical table.
        // *   **false**: The table is not a logical table.
        shared_ptr<bool> logic_ {};
        // The IDs of the table owners.
        shared_ptr<SearchTable::OwnerIdList> ownerIdList_ {};
        // The nicknames of the table owners.
        shared_ptr<SearchTable::OwnerNameList> ownerNameList_ {};
        // The GUID of the table.
        shared_ptr<string> tableGuid_ {};
        // The ID of the table.
        shared_ptr<string> tableId_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
        // The name of the database to which the table belongs.
        shared_ptr<string> tableSchemaName_ {};
      };

      virtual bool empty() const override { return this->searchTable_ == nullptr; };
      // searchTable Field Functions 
      bool hasSearchTable() const { return this->searchTable_ != nullptr;};
      void deleteSearchTable() { this->searchTable_ = nullptr;};
      inline const vector<SearchTableList::SearchTable> & getSearchTable() const { DARABONBA_PTR_GET_CONST(searchTable_, vector<SearchTableList::SearchTable>) };
      inline vector<SearchTableList::SearchTable> getSearchTable() { DARABONBA_PTR_GET(searchTable_, vector<SearchTableList::SearchTable>) };
      inline SearchTableList& setSearchTable(const vector<SearchTableList::SearchTable> & searchTable) { DARABONBA_PTR_SET_VALUE(searchTable_, searchTable) };
      inline SearchTableList& setSearchTable(vector<SearchTableList::SearchTable> && searchTable) { DARABONBA_PTR_SET_RVALUE(searchTable_, searchTable) };


    protected:
      shared_ptr<vector<SearchTableList::SearchTable>> searchTable_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->searchTableList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchTableResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchTableResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchTableList Field Functions 
    bool hasSearchTableList() const { return this->searchTableList_ != nullptr;};
    void deleteSearchTableList() { this->searchTableList_ = nullptr;};
    inline const SearchTableResponseBody::SearchTableList & getSearchTableList() const { DARABONBA_PTR_GET_CONST(searchTableList_, SearchTableResponseBody::SearchTableList) };
    inline SearchTableResponseBody::SearchTableList getSearchTableList() { DARABONBA_PTR_GET(searchTableList_, SearchTableResponseBody::SearchTableList) };
    inline SearchTableResponseBody& setSearchTableList(const SearchTableResponseBody::SearchTableList & searchTableList) { DARABONBA_PTR_SET_VALUE(searchTableList_, searchTableList) };
    inline SearchTableResponseBody& setSearchTableList(SearchTableResponseBody::SearchTableList && searchTableList) { DARABONBA_PTR_SET_RVALUE(searchTableList_, searchTableList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchTableResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the tables.
    shared_ptr<SearchTableResponseBody::SearchTableList> searchTableList_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
