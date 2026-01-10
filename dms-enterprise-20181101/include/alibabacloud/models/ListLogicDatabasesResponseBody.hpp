// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODY_HPP_
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
  class ListLogicDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicDatabaseList, logicDatabaseList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicDatabaseList, logicDatabaseList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLogicDatabasesResponseBody() = default ;
    ListLogicDatabasesResponseBody(const ListLogicDatabasesResponseBody &) = default ;
    ListLogicDatabasesResponseBody(ListLogicDatabasesResponseBody &&) = default ;
    ListLogicDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicDatabasesResponseBody() = default ;
    ListLogicDatabasesResponseBody& operator=(const ListLogicDatabasesResponseBody &) = default ;
    ListLogicDatabasesResponseBody& operator=(ListLogicDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogicDatabaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogicDatabaseList& obj) { 
        DARABONBA_PTR_TO_JSON(LogicDatabase, logicDatabase_);
      };
      friend void from_json(const Darabonba::Json& j, LogicDatabaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicDatabase, logicDatabase_);
      };
      LogicDatabaseList() = default ;
      LogicDatabaseList(const LogicDatabaseList &) = default ;
      LogicDatabaseList(LogicDatabaseList &&) = default ;
      LogicDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogicDatabaseList() = default ;
      LogicDatabaseList& operator=(const LogicDatabaseList &) = default ;
      LogicDatabaseList& operator=(LogicDatabaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogicDatabase : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogicDatabase& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        };
        friend void from_json(const Darabonba::Json& j, LogicDatabase& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        };
        LogicDatabase() = default ;
        LogicDatabase(const LogicDatabase &) = default ;
        LogicDatabase(LogicDatabase &&) = default ;
        LogicDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogicDatabase() = default ;
        LogicDatabase& operator=(const LogicDatabase &) = default ;
        LogicDatabase& operator=(LogicDatabase &&) = default ;
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

        class DatabaseIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DatabaseIds& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
          };
          friend void from_json(const Darabonba::Json& j, DatabaseIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
          };
          DatabaseIds() = default ;
          DatabaseIds(const DatabaseIds &) = default ;
          DatabaseIds(DatabaseIds &&) = default ;
          DatabaseIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DatabaseIds() = default ;
          DatabaseIds& operator=(const DatabaseIds &) = default ;
          DatabaseIds& operator=(DatabaseIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseIds_ == nullptr; };
          // databaseIds Field Functions 
          bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
          void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
          inline const vector<int64_t> & getDatabaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<int64_t>) };
          inline vector<int64_t> getDatabaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<int64_t>) };
          inline DatabaseIds& setDatabaseIds(const vector<int64_t> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
          inline DatabaseIds& setDatabaseIds(vector<int64_t> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


        protected:
          shared_ptr<vector<int64_t>> databaseIds_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->databaseId_ == nullptr && this->databaseIds_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr
        && this->ownerIdList_ == nullptr && this->ownerNameList_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline LogicDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline LogicDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


        // databaseIds Field Functions 
        bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
        void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
        inline const LogicDatabase::DatabaseIds & getDatabaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, LogicDatabase::DatabaseIds) };
        inline LogicDatabase::DatabaseIds getDatabaseIds() { DARABONBA_PTR_GET(databaseIds_, LogicDatabase::DatabaseIds) };
        inline LogicDatabase& setDatabaseIds(const LogicDatabase::DatabaseIds & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
        inline LogicDatabase& setDatabaseIds(LogicDatabase::DatabaseIds && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline LogicDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline LogicDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline LogicDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const LogicDatabase::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, LogicDatabase::OwnerIdList) };
        inline LogicDatabase::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, LogicDatabase::OwnerIdList) };
        inline LogicDatabase& setOwnerIdList(const LogicDatabase::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline LogicDatabase& setOwnerIdList(LogicDatabase::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const LogicDatabase::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, LogicDatabase::OwnerNameList) };
        inline LogicDatabase::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, LogicDatabase::OwnerNameList) };
        inline LogicDatabase& setOwnerNameList(const LogicDatabase::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline LogicDatabase& setOwnerNameList(LogicDatabase::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline LogicDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline LogicDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      protected:
        // The alias of the logical database.
        shared_ptr<string> alias_ {};
        // The ID of the logical database.
        shared_ptr<string> databaseId_ {};
        // Logical database sub-ID list.
        shared_ptr<LogicDatabase::DatabaseIds> databaseIds_ {};
        // The type of the logical database. For more information about the valid values of this parameter, see [DbType parameter](https://www.alibabacloud.com/help/en/data-management-service/latest/dbtype-parameter).
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the logical database belongs. Valid values:
        // 
        // - **product**: production environment
        // - **dev**: development environment
        // - **pre**: staging environment
        // - **test**: test environment
        // - **sit**: system integration testing (SIT) environment
        // - **uat**: user acceptance testing (UAT) environment
        // - **pet**: stress testing environment
        // - **stag**: STAG environment
        shared_ptr<string> envType_ {};
        // Indicates whether the database is a logical database. The return value is true.
        shared_ptr<bool> logic_ {};
        // The IDs of the owners of the logical database.
        shared_ptr<LogicDatabase::OwnerIdList> ownerIdList_ {};
        // The names of the owners of the logical database.
        shared_ptr<LogicDatabase::OwnerNameList> ownerNameList_ {};
        // The name of the logical database.
        shared_ptr<string> schemaName_ {};
        // The name that is used to search for the logical database.
        // 
        // > We recommend that you do not use this parameter for business development. The format of the parameter value may be modified in later versions.
        shared_ptr<string> searchName_ {};
      };

      virtual bool empty() const override { return this->logicDatabase_ == nullptr; };
      // logicDatabase Field Functions 
      bool hasLogicDatabase() const { return this->logicDatabase_ != nullptr;};
      void deleteLogicDatabase() { this->logicDatabase_ = nullptr;};
      inline const vector<LogicDatabaseList::LogicDatabase> & getLogicDatabase() const { DARABONBA_PTR_GET_CONST(logicDatabase_, vector<LogicDatabaseList::LogicDatabase>) };
      inline vector<LogicDatabaseList::LogicDatabase> getLogicDatabase() { DARABONBA_PTR_GET(logicDatabase_, vector<LogicDatabaseList::LogicDatabase>) };
      inline LogicDatabaseList& setLogicDatabase(const vector<LogicDatabaseList::LogicDatabase> & logicDatabase) { DARABONBA_PTR_SET_VALUE(logicDatabase_, logicDatabase) };
      inline LogicDatabaseList& setLogicDatabase(vector<LogicDatabaseList::LogicDatabase> && logicDatabase) { DARABONBA_PTR_SET_RVALUE(logicDatabase_, logicDatabase) };


    protected:
      shared_ptr<vector<LogicDatabaseList::LogicDatabase>> logicDatabase_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->logicDatabaseList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogicDatabasesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLogicDatabasesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicDatabaseList Field Functions 
    bool hasLogicDatabaseList() const { return this->logicDatabaseList_ != nullptr;};
    void deleteLogicDatabaseList() { this->logicDatabaseList_ = nullptr;};
    inline const ListLogicDatabasesResponseBody::LogicDatabaseList & getLogicDatabaseList() const { DARABONBA_PTR_GET_CONST(logicDatabaseList_, ListLogicDatabasesResponseBody::LogicDatabaseList) };
    inline ListLogicDatabasesResponseBody::LogicDatabaseList getLogicDatabaseList() { DARABONBA_PTR_GET(logicDatabaseList_, ListLogicDatabasesResponseBody::LogicDatabaseList) };
    inline ListLogicDatabasesResponseBody& setLogicDatabaseList(const ListLogicDatabasesResponseBody::LogicDatabaseList & logicDatabaseList) { DARABONBA_PTR_SET_VALUE(logicDatabaseList_, logicDatabaseList) };
    inline ListLogicDatabasesResponseBody& setLogicDatabaseList(ListLogicDatabasesResponseBody::LogicDatabaseList && logicDatabaseList) { DARABONBA_PTR_SET_RVALUE(logicDatabaseList_, logicDatabaseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogicDatabasesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLogicDatabasesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code that is returned.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned.
    shared_ptr<string> errorMessage_ {};
    // The details of logical databases.
    shared_ptr<ListLogicDatabasesResponseBody::LogicDatabaseList> logicDatabaseList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of logical databases.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
