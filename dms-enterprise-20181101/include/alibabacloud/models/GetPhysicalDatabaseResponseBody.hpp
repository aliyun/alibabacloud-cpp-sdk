// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODY_HPP_
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
  class GetPhysicalDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPhysicalDatabaseResponseBody() = default ;
    GetPhysicalDatabaseResponseBody(const GetPhysicalDatabaseResponseBody &) = default ;
    GetPhysicalDatabaseResponseBody(GetPhysicalDatabaseResponseBody &&) = default ;
    GetPhysicalDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalDatabaseResponseBody() = default ;
    GetPhysicalDatabaseResponseBody& operator=(const GetPhysicalDatabaseResponseBody &) = default ;
    GetPhysicalDatabaseResponseBody& operator=(GetPhysicalDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Database : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Database& obj) { 
        DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
        DARABONBA_PTR_TO_JSON(DbaName, dbaName_);
        DARABONBA_PTR_TO_JSON(Encoding, encoding_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
        DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        DARABONBA_PTR_TO_JSON(Sid, sid_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Database& obj) { 
        DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
        DARABONBA_PTR_FROM_JSON(DbaName, dbaName_);
        DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
        DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        DARABONBA_PTR_FROM_JSON(Sid, sid_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Database() = default ;
      Database(const Database &) = default ;
      Database(Database &&) = default ;
      Database(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Database() = default ;
      Database& operator=(const Database &) = default ;
      Database& operator=(Database &&) = default ;
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

      virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->databaseId_ == nullptr && this->dbType_ == nullptr && this->dbaId_ == nullptr && this->dbaName_ == nullptr && this->encoding_ == nullptr
        && this->envType_ == nullptr && this->host_ == nullptr && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr && this->ownerIdList_ == nullptr
        && this->ownerNameList_ == nullptr && this->port_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr && this->sid_ == nullptr
        && this->state_ == nullptr; };
      // catalogName Field Functions 
      bool hasCatalogName() const { return this->catalogName_ != nullptr;};
      void deleteCatalogName() { this->catalogName_ = nullptr;};
      inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
      inline Database& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Database& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Database& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // dbaId Field Functions 
      bool hasDbaId() const { return this->dbaId_ != nullptr;};
      void deleteDbaId() { this->dbaId_ = nullptr;};
      inline string getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
      inline Database& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


      // dbaName Field Functions 
      bool hasDbaName() const { return this->dbaName_ != nullptr;};
      void deleteDbaName() { this->dbaName_ = nullptr;};
      inline string getDbaName() const { DARABONBA_PTR_GET_DEFAULT(dbaName_, "") };
      inline Database& setDbaName(string dbaName) { DARABONBA_PTR_SET_VALUE(dbaName_, dbaName) };


      // encoding Field Functions 
      bool hasEncoding() const { return this->encoding_ != nullptr;};
      void deleteEncoding() { this->encoding_ = nullptr;};
      inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
      inline Database& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Database& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Database& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceAlias Field Functions 
      bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
      void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
      inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
      inline Database& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Database& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ownerIdList Field Functions 
      bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
      void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
      inline const Database::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Database::OwnerIdList) };
      inline Database::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, Database::OwnerIdList) };
      inline Database& setOwnerIdList(const Database::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
      inline Database& setOwnerIdList(Database::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


      // ownerNameList Field Functions 
      bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
      void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
      inline const Database::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Database::OwnerNameList) };
      inline Database::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, Database::OwnerNameList) };
      inline Database& setOwnerNameList(const Database::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
      inline Database& setOwnerNameList(Database::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Database& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Database& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline Database& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      // sid Field Functions 
      bool hasSid() const { return this->sid_ != nullptr;};
      void deleteSid() { this->sid_ = nullptr;};
      inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
      inline Database& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Database& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The name of the catalog to which the database belongs.
      // 
      // > : If the database is a PostgreSQL database, the name of the database is displayed.
      shared_ptr<string> catalogName_ {};
      // The ID of the physical database.
      shared_ptr<string> databaseId_ {};
      // The type of the database engine.
      shared_ptr<string> dbType_ {};
      // The user ID of the DBA in the destination database.
      shared_ptr<string> dbaId_ {};
      // The nickname of the database administrator (DBA) in the destination database.
      shared_ptr<string> dbaName_ {};
      // The encoding format of the database.
      shared_ptr<string> encoding_ {};
      // The type of the environment to which the database belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
      shared_ptr<string> envType_ {};
      // The endpoint that is used to connect to the database.
      shared_ptr<string> host_ {};
      // The alias of the database instance.
      shared_ptr<string> instanceAlias_ {};
      // The instance ID of the destination database.
      shared_ptr<string> instanceId_ {};
      // The user IDs of the database owners.
      shared_ptr<Database::OwnerIdList> ownerIdList_ {};
      // The nicknames of the database owners.
      shared_ptr<Database::OwnerNameList> ownerNameList_ {};
      // The port that is used to connect to the database.
      shared_ptr<int32_t> port_ {};
      // The name of the database.
      // 
      // > : If the database is a PostgreSQL database, the name of the mode is displayed.
      shared_ptr<string> schemaName_ {};
      // The name that is used for searching the database.
      shared_ptr<string> searchName_ {};
      // The system ID (SID) of the database.
      // 
      // > : The value of the parameter is returned only for Oracle databases.
      shared_ptr<string> sid_ {};
      // The state of the database. Valid values:
      // 
      // *   **NORMAL**: The database is normal.
      // *   **DISABLE**: The database is disabled.
      // *   **OFFLINE**: The database is unpublished.
      // *   **NOT_EXIST**: The database does not exist.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->database_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const GetPhysicalDatabaseResponseBody::Database & getDatabase() const { DARABONBA_PTR_GET_CONST(database_, GetPhysicalDatabaseResponseBody::Database) };
    inline GetPhysicalDatabaseResponseBody::Database getDatabase() { DARABONBA_PTR_GET(database_, GetPhysicalDatabaseResponseBody::Database) };
    inline GetPhysicalDatabaseResponseBody& setDatabase(const GetPhysicalDatabaseResponseBody::Database & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline GetPhysicalDatabaseResponseBody& setDatabase(GetPhysicalDatabaseResponseBody::Database && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPhysicalDatabaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPhysicalDatabaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhysicalDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPhysicalDatabaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the physical database.
    shared_ptr<GetPhysicalDatabaseResponseBody::Database> database_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
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
