// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODY_HPP_
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
  class ListUserPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserPermissions, userPermissions_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserPermissions, userPermissions_);
    };
    ListUserPermissionsResponseBody() = default ;
    ListUserPermissionsResponseBody(const ListUserPermissionsResponseBody &) = default ;
    ListUserPermissionsResponseBody(ListUserPermissionsResponseBody &&) = default ;
    ListUserPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPermissionsResponseBody() = default ;
    ListUserPermissionsResponseBody& operator=(const ListUserPermissionsResponseBody &) = default ;
    ListUserPermissionsResponseBody& operator=(ListUserPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPermissions& obj) { 
        DARABONBA_PTR_TO_JSON(UserPermission, userPermission_);
      };
      friend void from_json(const Darabonba::Json& j, UserPermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(UserPermission, userPermission_);
      };
      UserPermissions() = default ;
      UserPermissions(const UserPermissions &) = default ;
      UserPermissions(UserPermissions &&) = default ;
      UserPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPermissions() = default ;
      UserPermissions& operator=(const UserPermissions &) = default ;
      UserPermissions& operator=(UserPermissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserPermission : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPermission& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(DsType, dsType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(PermDetails, permDetails_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
        };
        friend void from_json(const Darabonba::Json& j, UserPermission& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(DsType, dsType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(PermDetails, permDetails_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
        };
        UserPermission() = default ;
        UserPermission(const UserPermission &) = default ;
        UserPermission(UserPermission &&) = default ;
        UserPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPermission() = default ;
        UserPermission& operator=(const UserPermission &) = default ;
        UserPermission& operator=(UserPermission &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PermDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PermDetails& obj) { 
            DARABONBA_PTR_TO_JSON(PermDetail, permDetail_);
          };
          friend void from_json(const Darabonba::Json& j, PermDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(PermDetail, permDetail_);
          };
          PermDetails() = default ;
          PermDetails(const PermDetails &) = default ;
          PermDetails(PermDetails &&) = default ;
          PermDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PermDetails() = default ;
          PermDetails& operator=(const PermDetails &) = default ;
          PermDetails& operator=(PermDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PermDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PermDetail& obj) { 
              DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
              DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
              DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
              DARABONBA_PTR_TO_JSON(OriginFrom, originFrom_);
              DARABONBA_PTR_TO_JSON(PermType, permType_);
              DARABONBA_PTR_TO_JSON(UserAccessId, userAccessId_);
            };
            friend void from_json(const Darabonba::Json& j, PermDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
              DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
              DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
              DARABONBA_PTR_FROM_JSON(OriginFrom, originFrom_);
              DARABONBA_PTR_FROM_JSON(PermType, permType_);
              DARABONBA_PTR_FROM_JSON(UserAccessId, userAccessId_);
            };
            PermDetail() = default ;
            PermDetail(const PermDetail &) = default ;
            PermDetail(PermDetail &&) = default ;
            PermDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PermDetail() = default ;
            PermDetail& operator=(const PermDetail &) = default ;
            PermDetail& operator=(PermDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->createDate_ == nullptr
        && this->expireDate_ == nullptr && this->extraData_ == nullptr && this->originFrom_ == nullptr && this->permType_ == nullptr && this->userAccessId_ == nullptr; };
            // createDate Field Functions 
            bool hasCreateDate() const { return this->createDate_ != nullptr;};
            void deleteCreateDate() { this->createDate_ = nullptr;};
            inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
            inline PermDetail& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


            // expireDate Field Functions 
            bool hasExpireDate() const { return this->expireDate_ != nullptr;};
            void deleteExpireDate() { this->expireDate_ = nullptr;};
            inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
            inline PermDetail& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


            // extraData Field Functions 
            bool hasExtraData() const { return this->extraData_ != nullptr;};
            void deleteExtraData() { this->extraData_ = nullptr;};
            inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
            inline PermDetail& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


            // originFrom Field Functions 
            bool hasOriginFrom() const { return this->originFrom_ != nullptr;};
            void deleteOriginFrom() { this->originFrom_ = nullptr;};
            inline string getOriginFrom() const { DARABONBA_PTR_GET_DEFAULT(originFrom_, "") };
            inline PermDetail& setOriginFrom(string originFrom) { DARABONBA_PTR_SET_VALUE(originFrom_, originFrom) };


            // permType Field Functions 
            bool hasPermType() const { return this->permType_ != nullptr;};
            void deletePermType() { this->permType_ = nullptr;};
            inline string getPermType() const { DARABONBA_PTR_GET_DEFAULT(permType_, "") };
            inline PermDetail& setPermType(string permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


            // userAccessId Field Functions 
            bool hasUserAccessId() const { return this->userAccessId_ != nullptr;};
            void deleteUserAccessId() { this->userAccessId_ = nullptr;};
            inline string getUserAccessId() const { DARABONBA_PTR_GET_DEFAULT(userAccessId_, "") };
            inline PermDetail& setUserAccessId(string userAccessId) { DARABONBA_PTR_SET_VALUE(userAccessId_, userAccessId) };


          protected:
            // The time when the permissions were granted.
            shared_ptr<string> createDate_ {};
            // The time when the permissions expire.
            shared_ptr<string> expireDate_ {};
            // This parameter is reserved.
            shared_ptr<string> extraData_ {};
            // The user who grants the permissions.
            shared_ptr<string> originFrom_ {};
            // The type of the permissions. Valid values:
            // 
            // *   QUERY: the query permissions
            // *   EXPORT: the export permissions
            // *   CORRECT: the change permissions
            shared_ptr<string> permType_ {};
            // The ID of the authorization record.
            shared_ptr<string> userAccessId_ {};
          };

          virtual bool empty() const override { return this->permDetail_ == nullptr; };
          // permDetail Field Functions 
          bool hasPermDetail() const { return this->permDetail_ != nullptr;};
          void deletePermDetail() { this->permDetail_ = nullptr;};
          inline const vector<PermDetails::PermDetail> & getPermDetail() const { DARABONBA_PTR_GET_CONST(permDetail_, vector<PermDetails::PermDetail>) };
          inline vector<PermDetails::PermDetail> getPermDetail() { DARABONBA_PTR_GET(permDetail_, vector<PermDetails::PermDetail>) };
          inline PermDetails& setPermDetail(const vector<PermDetails::PermDetail> & permDetail) { DARABONBA_PTR_SET_VALUE(permDetail_, permDetail) };
          inline PermDetails& setPermDetail(vector<PermDetails::PermDetail> && permDetail) { DARABONBA_PTR_SET_RVALUE(permDetail_, permDetail) };


        protected:
          shared_ptr<vector<PermDetails::PermDetail>> permDetail_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->columnName_ == nullptr && this->dbId_ == nullptr && this->dbType_ == nullptr && this->dsType_ == nullptr && this->envType_ == nullptr
        && this->host_ == nullptr && this->instanceId_ == nullptr && this->logic_ == nullptr && this->permDetails_ == nullptr && this->port_ == nullptr
        && this->schemaName_ == nullptr && this->searchName_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr && this->userId_ == nullptr
        && this->userNickName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline UserPermission& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline UserPermission& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
        inline UserPermission& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline UserPermission& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // dsType Field Functions 
        bool hasDsType() const { return this->dsType_ != nullptr;};
        void deleteDsType() { this->dsType_ = nullptr;};
        inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
        inline UserPermission& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline UserPermission& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline UserPermission& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline UserPermission& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline UserPermission& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // permDetails Field Functions 
        bool hasPermDetails() const { return this->permDetails_ != nullptr;};
        void deletePermDetails() { this->permDetails_ = nullptr;};
        inline const UserPermission::PermDetails & getPermDetails() const { DARABONBA_PTR_GET_CONST(permDetails_, UserPermission::PermDetails) };
        inline UserPermission::PermDetails getPermDetails() { DARABONBA_PTR_GET(permDetails_, UserPermission::PermDetails) };
        inline UserPermission& setPermDetails(const UserPermission::PermDetails & permDetails) { DARABONBA_PTR_SET_VALUE(permDetails_, permDetails) };
        inline UserPermission& setPermDetails(UserPermission::PermDetails && permDetails) { DARABONBA_PTR_SET_RVALUE(permDetails_, permDetails) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline UserPermission& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline UserPermission& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline UserPermission& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline UserPermission& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline UserPermission& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserPermission& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userNickName Field Functions 
        bool hasUserNickName() const { return this->userNickName_ != nullptr;};
        void deleteUserNickName() { this->userNickName_ = nullptr;};
        inline string getUserNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
        inline UserPermission& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


      protected:
        // The alias of the instance.
        shared_ptr<string> alias_ {};
        // The name of the field.
        shared_ptr<string> columnName_ {};
        // The ID of the database.
        shared_ptr<string> dbId_ {};
        // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://www.alibabacloud.com/help/en/data-management-service/latest/dbtype-parameter).
        shared_ptr<string> dbType_ {};
        // The permissions on a specific type of objects that are granted to the user. Valid values: 
        // 
        // - DATABASE: permissions on physical databases
        // - LOGIC_DATABASE: permissions on logical databases
        // - TABLE: permissions on physical tables
        // - LOGIC_TABLE: permissions on logical tables
        shared_ptr<string> dsType_ {};
        // The type of the environment to which the database belongs. Valid values:
        // 
        // - product: production environment
        // - dev: development environment
        // - pre: staging environment
        // - test: test environment
        // - sit: SIT environment
        // - uat: UAT environment
        // - pet: stress testing environment
        // - stag: STAG environment
        shared_ptr<string> envType_ {};
        // The endpoint that is used to connect the database.
        shared_ptr<string> host_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   true: The database is a logical database.
        // *   false: The database is a physical database.
        shared_ptr<bool> logic_ {};
        // The details of permissions.
        shared_ptr<UserPermission::PermDetails> permDetails_ {};
        // The port that is used to connect to the instance.
        shared_ptr<int64_t> port_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
        // The ID of the table.
        shared_ptr<string> tableId_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
        // The nickname of the user.
        shared_ptr<string> userNickName_ {};
      };

      virtual bool empty() const override { return this->userPermission_ == nullptr; };
      // userPermission Field Functions 
      bool hasUserPermission() const { return this->userPermission_ != nullptr;};
      void deleteUserPermission() { this->userPermission_ = nullptr;};
      inline const vector<UserPermissions::UserPermission> & getUserPermission() const { DARABONBA_PTR_GET_CONST(userPermission_, vector<UserPermissions::UserPermission>) };
      inline vector<UserPermissions::UserPermission> getUserPermission() { DARABONBA_PTR_GET(userPermission_, vector<UserPermissions::UserPermission>) };
      inline UserPermissions& setUserPermission(const vector<UserPermissions::UserPermission> & userPermission) { DARABONBA_PTR_SET_VALUE(userPermission_, userPermission) };
      inline UserPermissions& setUserPermission(vector<UserPermissions::UserPermission> && userPermission) { DARABONBA_PTR_SET_RVALUE(userPermission_, userPermission) };


    protected:
      shared_ptr<vector<UserPermissions::UserPermission>> userPermission_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->userPermissions_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUserPermissionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUserPermissionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserPermissionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userPermissions Field Functions 
    bool hasUserPermissions() const { return this->userPermissions_ != nullptr;};
    void deleteUserPermissions() { this->userPermissions_ = nullptr;};
    inline const ListUserPermissionsResponseBody::UserPermissions & getUserPermissions() const { DARABONBA_PTR_GET_CONST(userPermissions_, ListUserPermissionsResponseBody::UserPermissions) };
    inline ListUserPermissionsResponseBody::UserPermissions getUserPermissions() { DARABONBA_PTR_GET(userPermissions_, ListUserPermissionsResponseBody::UserPermissions) };
    inline ListUserPermissionsResponseBody& setUserPermissions(const ListUserPermissionsResponseBody::UserPermissions & userPermissions) { DARABONBA_PTR_SET_VALUE(userPermissions_, userPermissions) };
    inline ListUserPermissionsResponseBody& setUserPermissions(ListUserPermissionsResponseBody::UserPermissions && userPermissions) { DARABONBA_PTR_SET_RVALUE(userPermissions_, userPermissions) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of entries that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
    // The details of the permissions that the user has.
    shared_ptr<ListUserPermissionsResponseBody::UserPermissions> userPermissions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
