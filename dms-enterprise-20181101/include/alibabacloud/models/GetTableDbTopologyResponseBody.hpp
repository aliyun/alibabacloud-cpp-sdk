// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODY_HPP_
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
  class GetTableDBTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableDBTopologyResponseBody() = default ;
    GetTableDBTopologyResponseBody(const GetTableDBTopologyResponseBody &) = default ;
    GetTableDBTopologyResponseBody(GetTableDBTopologyResponseBody &&) = default ;
    GetTableDBTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBody() = default ;
    GetTableDBTopologyResponseBody& operator=(const GetTableDBTopologyResponseBody &) = default ;
    GetTableDBTopologyResponseBody& operator=(GetTableDBTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBTopology : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBTopology& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceList, dataSourceList_);
        DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, DBTopology& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceList, dataSourceList_);
        DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      DBTopology() = default ;
      DBTopology(const DBTopology &) = default ;
      DBTopology(DBTopology &&) = default ;
      DBTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBTopology() = default ;
      DBTopology& operator=(const DBTopology &) = default ;
      DBTopology& operator=(DBTopology &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceList& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Sid, sid_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Sid, sid_);
        };
        DataSourceList() = default ;
        DataSourceList(const DataSourceList &) = default ;
        DataSourceList(DataSourceList &&) = default ;
        DataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceList() = default ;
        DataSourceList& operator=(const DataSourceList &) = default ;
        DataSourceList& operator=(DataSourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DatabaseList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DatabaseList& obj) { 
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(DbName, dbName_);
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(TableList, tableList_);
          };
          friend void from_json(const Darabonba::Json& j, DatabaseList& obj) { 
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(DbName, dbName_);
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(TableList, tableList_);
          };
          DatabaseList() = default ;
          DatabaseList(const DatabaseList &) = default ;
          DatabaseList(DatabaseList &&) = default ;
          DatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DatabaseList() = default ;
          DatabaseList& operator=(const DatabaseList &) = default ;
          DatabaseList& operator=(DatabaseList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableList& obj) { 
              DARABONBA_PTR_TO_JSON(TableId, tableId_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
              DARABONBA_PTR_TO_JSON(TableType, tableType_);
            };
            friend void from_json(const Darabonba::Json& j, TableList& obj) { 
              DARABONBA_PTR_FROM_JSON(TableId, tableId_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
              DARABONBA_PTR_FROM_JSON(TableType, tableType_);
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
            virtual bool empty() const override { return this->tableId_ == nullptr
        && this->tableName_ == nullptr && this->tableType_ == nullptr; };
            // tableId Field Functions 
            bool hasTableId() const { return this->tableId_ != nullptr;};
            void deleteTableId() { this->tableId_ = nullptr;};
            inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
            inline TableList& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline TableList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


            // tableType Field Functions 
            bool hasTableType() const { return this->tableType_ != nullptr;};
            void deleteTableType() { this->tableType_ = nullptr;};
            inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
            inline TableList& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


          protected:
            // The ID of the table.
            shared_ptr<string> tableId_ {};
            // The name of the physical table.
            shared_ptr<string> tableName_ {};
            // The type of the table. This is a reserved parameter.
            shared_ptr<string> tableType_ {};
          };

          virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbName_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->tableList_ == nullptr; };
          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
          inline DatabaseList& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // dbName Field Functions 
          bool hasDbName() const { return this->dbName_ != nullptr;};
          void deleteDbName() { this->dbName_ = nullptr;};
          inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
          inline DatabaseList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline DatabaseList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline DatabaseList& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // tableList Field Functions 
          bool hasTableList() const { return this->tableList_ != nullptr;};
          void deleteTableList() { this->tableList_ = nullptr;};
          inline const vector<DatabaseList::TableList> & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<DatabaseList::TableList>) };
          inline vector<DatabaseList::TableList> getTableList() { DARABONBA_PTR_GET(tableList_, vector<DatabaseList::TableList>) };
          inline DatabaseList& setTableList(const vector<DatabaseList::TableList> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
          inline DatabaseList& setTableList(vector<DatabaseList::TableList> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


        protected:
          // The ID of the database.
          shared_ptr<string> dbId_ {};
          // The name of the database.
          shared_ptr<string> dbName_ {};
          // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
          shared_ptr<string> dbType_ {};
          // The type of the environment to which the database belongs. Valid values:
          // 
          // *   **product**: production environment
          // *   **dev**: development environment
          // *   **pre**: pre-release environment
          // *   **test**: test environment
          // *   **sit**: system integration testing (SIT) environment
          // *   **uat**: user acceptance testing (UAT) environment
          // *   **pet**: stress testing environment
          // *   **stag**: staging environment
          // 
          // > For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
          shared_ptr<string> envType_ {};
          // The physical tables.
          shared_ptr<vector<DatabaseList::TableList>> tableList_ {};
        };

        virtual bool empty() const override { return this->databaseList_ == nullptr
        && this->dbType_ == nullptr && this->host_ == nullptr && this->port_ == nullptr && this->sid_ == nullptr; };
        // databaseList Field Functions 
        bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
        void deleteDatabaseList() { this->databaseList_ = nullptr;};
        inline const vector<DataSourceList::DatabaseList> & getDatabaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, vector<DataSourceList::DatabaseList>) };
        inline vector<DataSourceList::DatabaseList> getDatabaseList() { DARABONBA_PTR_GET(databaseList_, vector<DataSourceList::DatabaseList>) };
        inline DataSourceList& setDatabaseList(const vector<DataSourceList::DatabaseList> & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
        inline DataSourceList& setDatabaseList(vector<DataSourceList::DatabaseList> && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline DataSourceList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline DataSourceList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DataSourceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // sid Field Functions 
        bool hasSid() const { return this->sid_ != nullptr;};
        void deleteSid() { this->sid_ = nullptr;};
        inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
        inline DataSourceList& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


      protected:
        // The physical databases.
        shared_ptr<vector<DataSourceList::DatabaseList>> databaseList_ {};
        // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
        shared_ptr<string> dbType_ {};
        // The endpoint of the data source.
        shared_ptr<string> host_ {};
        // The port that is used to connect to the data source.
        shared_ptr<int32_t> port_ {};
        // The system ID (SID) of the data source.
        shared_ptr<string> sid_ {};
      };

      virtual bool empty() const override { return this->dataSourceList_ == nullptr
        && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
      // dataSourceList Field Functions 
      bool hasDataSourceList() const { return this->dataSourceList_ != nullptr;};
      void deleteDataSourceList() { this->dataSourceList_ = nullptr;};
      inline const vector<DBTopology::DataSourceList> & getDataSourceList() const { DARABONBA_PTR_GET_CONST(dataSourceList_, vector<DBTopology::DataSourceList>) };
      inline vector<DBTopology::DataSourceList> getDataSourceList() { DARABONBA_PTR_GET(dataSourceList_, vector<DBTopology::DataSourceList>) };
      inline DBTopology& setDataSourceList(const vector<DBTopology::DataSourceList> & dataSourceList) { DARABONBA_PTR_SET_VALUE(dataSourceList_, dataSourceList) };
      inline DBTopology& setDataSourceList(vector<DBTopology::DataSourceList> && dataSourceList) { DARABONBA_PTR_SET_RVALUE(dataSourceList_, dataSourceList) };


      // tableGuid Field Functions 
      bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
      void deleteTableGuid() { this->tableGuid_ = nullptr;};
      inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
      inline DBTopology& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline DBTopology& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The data sources.
      shared_ptr<vector<DBTopology::DataSourceList>> dataSourceList_ {};
      // The GUID of the table in DMS.
      shared_ptr<string> tableGuid_ {};
      // The name of the table.
      // 
      // > 
      // 
      // *   If a logical table is queried, the name of the logical table is returned.
      // 
      // *   If a physical table is queried, the name of the physical table is returned.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->DBTopology_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // DBTopology Field Functions 
    bool hasDBTopology() const { return this->DBTopology_ != nullptr;};
    void deleteDBTopology() { this->DBTopology_ = nullptr;};
    inline const GetTableDBTopologyResponseBody::DBTopology & getDBTopology() const { DARABONBA_PTR_GET_CONST(DBTopology_, GetTableDBTopologyResponseBody::DBTopology) };
    inline GetTableDBTopologyResponseBody::DBTopology getDBTopology() { DARABONBA_PTR_GET(DBTopology_, GetTableDBTopologyResponseBody::DBTopology) };
    inline GetTableDBTopologyResponseBody& setDBTopology(const GetTableDBTopologyResponseBody::DBTopology & dBTopology) { DARABONBA_PTR_SET_VALUE(DBTopology_, dBTopology) };
    inline GetTableDBTopologyResponseBody& setDBTopology(GetTableDBTopologyResponseBody::DBTopology && dBTopology) { DARABONBA_PTR_SET_RVALUE(DBTopology_, dBTopology) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableDBTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableDBTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableDBTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableDBTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The topology of the data table.
    shared_ptr<GetTableDBTopologyResponseBody::DBTopology> DBTopology_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
