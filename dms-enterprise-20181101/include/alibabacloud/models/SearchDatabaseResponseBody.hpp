// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODY_HPP_
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
  class SearchDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchDatabaseList, searchDatabaseList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchDatabaseList, searchDatabaseList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchDatabaseResponseBody() = default ;
    SearchDatabaseResponseBody(const SearchDatabaseResponseBody &) = default ;
    SearchDatabaseResponseBody(SearchDatabaseResponseBody &&) = default ;
    SearchDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatabaseResponseBody() = default ;
    SearchDatabaseResponseBody& operator=(const SearchDatabaseResponseBody &) = default ;
    SearchDatabaseResponseBody& operator=(SearchDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchDatabaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchDatabaseList& obj) { 
        DARABONBA_PTR_TO_JSON(SearchDatabase, searchDatabase_);
      };
      friend void from_json(const Darabonba::Json& j, SearchDatabaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(SearchDatabase, searchDatabase_);
      };
      SearchDatabaseList() = default ;
      SearchDatabaseList(const SearchDatabaseList &) = default ;
      SearchDatabaseList(SearchDatabaseList &&) = default ;
      SearchDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchDatabaseList() = default ;
      SearchDatabaseList& operator=(const SearchDatabaseList &) = default ;
      SearchDatabaseList& operator=(SearchDatabaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchDatabase : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchDatabase& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_TO_JSON(DatalinkName, datalinkName_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
          DARABONBA_PTR_TO_JSON(Encoding, encoding_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          DARABONBA_PTR_TO_JSON(Sid, sid_);
        };
        friend void from_json(const Darabonba::Json& j, SearchDatabase& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
          DARABONBA_PTR_FROM_JSON(DatalinkName, datalinkName_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
          DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          DARABONBA_PTR_FROM_JSON(Sid, sid_);
        };
        SearchDatabase() = default ;
        SearchDatabase(const SearchDatabase &) = default ;
        SearchDatabase(SearchDatabase &&) = default ;
        SearchDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchDatabase() = default ;
        SearchDatabase& operator=(const SearchDatabase &) = default ;
        SearchDatabase& operator=(SearchDatabase &&) = default ;
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

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->catalogName_ == nullptr && this->databaseId_ == nullptr && this->datalinkName_ == nullptr && this->dbType_ == nullptr && this->dbaId_ == nullptr
        && this->encoding_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->logic_ == nullptr && this->ownerIdList_ == nullptr
        && this->ownerNameList_ == nullptr && this->port_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr && this->sid_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline SearchDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // catalogName Field Functions 
        bool hasCatalogName() const { return this->catalogName_ != nullptr;};
        void deleteCatalogName() { this->catalogName_ = nullptr;};
        inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
        inline SearchDatabase& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


        // databaseId Field Functions 
        bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
        void deleteDatabaseId() { this->databaseId_ = nullptr;};
        inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
        inline SearchDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


        // datalinkName Field Functions 
        bool hasDatalinkName() const { return this->datalinkName_ != nullptr;};
        void deleteDatalinkName() { this->datalinkName_ = nullptr;};
        inline string getDatalinkName() const { DARABONBA_PTR_GET_DEFAULT(datalinkName_, "") };
        inline SearchDatabase& setDatalinkName(string datalinkName) { DARABONBA_PTR_SET_VALUE(datalinkName_, datalinkName) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline SearchDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // dbaId Field Functions 
        bool hasDbaId() const { return this->dbaId_ != nullptr;};
        void deleteDbaId() { this->dbaId_ = nullptr;};
        inline string getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
        inline SearchDatabase& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


        // encoding Field Functions 
        bool hasEncoding() const { return this->encoding_ != nullptr;};
        void deleteEncoding() { this->encoding_ = nullptr;};
        inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
        inline SearchDatabase& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline SearchDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline SearchDatabase& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline SearchDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const SearchDatabase::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, SearchDatabase::OwnerIdList) };
        inline SearchDatabase::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, SearchDatabase::OwnerIdList) };
        inline SearchDatabase& setOwnerIdList(const SearchDatabase::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline SearchDatabase& setOwnerIdList(SearchDatabase::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const SearchDatabase::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, SearchDatabase::OwnerNameList) };
        inline SearchDatabase::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, SearchDatabase::OwnerNameList) };
        inline SearchDatabase& setOwnerNameList(const SearchDatabase::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline SearchDatabase& setOwnerNameList(SearchDatabase::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline SearchDatabase& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SearchDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline SearchDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        // sid Field Functions 
        bool hasSid() const { return this->sid_ != nullptr;};
        void deleteSid() { this->sid_ = nullptr;};
        inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
        inline SearchDatabase& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


      protected:
        // The alias of the database.
        shared_ptr<string> alias_ {};
        // The name of the catalog to which the database belongs.
        // 
        // > If the type of the database engine is PostgreSQL, the name of the database is displayed.
        shared_ptr<string> catalogName_ {};
        // The ID of the database.
        shared_ptr<string> databaseId_ {};
        // The name of the data link for cross-database queries.
        shared_ptr<string> datalinkName_ {};
        // The type of the database engine.
        shared_ptr<string> dbType_ {};
        // The ID of the user who assumes the database administrator (DBA) role.
        shared_ptr<string> dbaId_ {};
        // The encoding method of the database.
        shared_ptr<string> encoding_ {};
        // The environment type of the database. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
        shared_ptr<string> envType_ {};
        // The endpoint of the instance in which the database resides.
        shared_ptr<string> host_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database.
        shared_ptr<bool> logic_ {};
        // The IDs of the owners of the databases.
        shared_ptr<SearchDatabase::OwnerIdList> ownerIdList_ {};
        // The nicknames of the database owners.
        shared_ptr<SearchDatabase::OwnerNameList> ownerNameList_ {};
        // The port of the instance in which the database resides.
        shared_ptr<int32_t> port_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
        // The system ID (SID) of the instance in which the database resides.
        shared_ptr<string> sid_ {};
      };

      virtual bool empty() const override { return this->searchDatabase_ == nullptr; };
      // searchDatabase Field Functions 
      bool hasSearchDatabase() const { return this->searchDatabase_ != nullptr;};
      void deleteSearchDatabase() { this->searchDatabase_ = nullptr;};
      inline const vector<SearchDatabaseList::SearchDatabase> & getSearchDatabase() const { DARABONBA_PTR_GET_CONST(searchDatabase_, vector<SearchDatabaseList::SearchDatabase>) };
      inline vector<SearchDatabaseList::SearchDatabase> getSearchDatabase() { DARABONBA_PTR_GET(searchDatabase_, vector<SearchDatabaseList::SearchDatabase>) };
      inline SearchDatabaseList& setSearchDatabase(const vector<SearchDatabaseList::SearchDatabase> & searchDatabase) { DARABONBA_PTR_SET_VALUE(searchDatabase_, searchDatabase) };
      inline SearchDatabaseList& setSearchDatabase(vector<SearchDatabaseList::SearchDatabase> && searchDatabase) { DARABONBA_PTR_SET_RVALUE(searchDatabase_, searchDatabase) };


    protected:
      shared_ptr<vector<SearchDatabaseList::SearchDatabase>> searchDatabase_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->searchDatabaseList_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchDatabaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchDatabaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchDatabaseList Field Functions 
    bool hasSearchDatabaseList() const { return this->searchDatabaseList_ != nullptr;};
    void deleteSearchDatabaseList() { this->searchDatabaseList_ = nullptr;};
    inline const SearchDatabaseResponseBody::SearchDatabaseList & getSearchDatabaseList() const { DARABONBA_PTR_GET_CONST(searchDatabaseList_, SearchDatabaseResponseBody::SearchDatabaseList) };
    inline SearchDatabaseResponseBody::SearchDatabaseList getSearchDatabaseList() { DARABONBA_PTR_GET(searchDatabaseList_, SearchDatabaseResponseBody::SearchDatabaseList) };
    inline SearchDatabaseResponseBody& setSearchDatabaseList(const SearchDatabaseResponseBody::SearchDatabaseList & searchDatabaseList) { DARABONBA_PTR_SET_VALUE(searchDatabaseList_, searchDatabaseList) };
    inline SearchDatabaseResponseBody& setSearchDatabaseList(SearchDatabaseResponseBody::SearchDatabaseList && searchDatabaseList) { DARABONBA_PTR_SET_RVALUE(searchDatabaseList_, searchDatabaseList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchDatabaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchDatabaseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the databases.
    shared_ptr<SearchDatabaseResponseBody::SearchDatabaseList> searchDatabaseList_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
