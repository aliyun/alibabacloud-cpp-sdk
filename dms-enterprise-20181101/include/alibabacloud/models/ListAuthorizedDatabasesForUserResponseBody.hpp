// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODY_HPP_
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
  class ListAuthorizedDatabasesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDatabasesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDatabasesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorizedDatabasesForUserResponseBody() = default ;
    ListAuthorizedDatabasesForUserResponseBody(const ListAuthorizedDatabasesForUserResponseBody &) = default ;
    ListAuthorizedDatabasesForUserResponseBody(ListAuthorizedDatabasesForUserResponseBody &&) = default ;
    ListAuthorizedDatabasesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDatabasesForUserResponseBody() = default ;
    ListAuthorizedDatabasesForUserResponseBody& operator=(const ListAuthorizedDatabasesForUserResponseBody &) = default ;
    ListAuthorizedDatabasesForUserResponseBody& operator=(ListAuthorizedDatabasesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(PermissionDetail, permissionDetail_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(PermissionDetail, permissionDetail_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PermissionDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PermissionDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DsType, dsType_);
          DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PermType, permType_);
        };
        friend void from_json(const Darabonba::Json& j, PermissionDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DsType, dsType_);
          DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PermType, permType_);
        };
        PermissionDetail() = default ;
        PermissionDetail(const PermissionDetail &) = default ;
        PermissionDetail(PermissionDetail &&) = default ;
        PermissionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PermissionDetail() = default ;
        PermissionDetail& operator=(const PermissionDetail &) = default ;
        PermissionDetail& operator=(PermissionDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dsType_ == nullptr
        && this->expireDate_ == nullptr && this->message_ == nullptr && this->permType_ == nullptr; };
        // dsType Field Functions 
        bool hasDsType() const { return this->dsType_ != nullptr;};
        void deleteDsType() { this->dsType_ = nullptr;};
        inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
        inline PermissionDetail& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


        // expireDate Field Functions 
        bool hasExpireDate() const { return this->expireDate_ != nullptr;};
        void deleteExpireDate() { this->expireDate_ = nullptr;};
        inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
        inline PermissionDetail& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PermissionDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // permType Field Functions 
        bool hasPermType() const { return this->permType_ != nullptr;};
        void deletePermType() { this->permType_ = nullptr;};
        inline string getPermType() const { DARABONBA_PTR_GET_DEFAULT(permType_, "") };
        inline PermissionDetail& setPermType(string permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


      protected:
        // The type of object on which the operation is performed.
        shared_ptr<string> dsType_ {};
        // The time when the permissions expire.
        shared_ptr<string> expireDate_ {};
        // If the permission source is a permission policy, the value of this parameter includes the policy name and the operations that are allowed for the user.
        shared_ptr<string> message_ {};
        // The type of the permission. Valid values:
        // 
        // *   **QUERY**: the query permission
        // *   **EXPORT**: the data export permission
        // *   **CORRECT**: the data change permission
        shared_ptr<string> permType_ {};
      };

      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->instanceId_ == nullptr && this->logic_ == nullptr && this->permissionDetail_ == nullptr
        && this->schemaName_ == nullptr && this->searchName_ == nullptr && this->userId_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
      inline Databases& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Databases& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Databases& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Databases& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline Databases& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // permissionDetail Field Functions 
      bool hasPermissionDetail() const { return this->permissionDetail_ != nullptr;};
      void deletePermissionDetail() { this->permissionDetail_ = nullptr;};
      inline const Databases::PermissionDetail & getPermissionDetail() const { DARABONBA_PTR_GET_CONST(permissionDetail_, Databases::PermissionDetail) };
      inline Databases::PermissionDetail getPermissionDetail() { DARABONBA_PTR_GET(permissionDetail_, Databases::PermissionDetail) };
      inline Databases& setPermissionDetail(const Databases::PermissionDetail & permissionDetail) { DARABONBA_PTR_SET_VALUE(permissionDetail_, permissionDetail) };
      inline Databases& setPermissionDetail(Databases::PermissionDetail && permissionDetail) { DARABONBA_PTR_SET_RVALUE(permissionDetail_, permissionDetail) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Databases& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline Databases& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Databases& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The database ID.
      shared_ptr<string> dbId_ {};
      // The engine of the database.
      shared_ptr<string> dbType_ {};
      // The type of the environment in which the database instance is deployed.
      shared_ptr<string> envType_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the database is a logical database. Valid values:
      // 
      // *   **true.**: The database is a logical database
      // *   **false**: The database is a physical database.
      shared_ptr<bool> logic_ {};
      // The details of permissions. The format of the permission details varies with the permission source. For example, if the permission source is a normal permission, the following parameters are returned.
      shared_ptr<Databases::PermissionDetail> permissionDetail_ {};
      // The database name.
      shared_ptr<string> schemaName_ {};
      // The name that is used to search for the database.
      shared_ptr<string> searchName_ {};
      // The user IDs.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ListAuthorizedDatabasesForUserResponseBody::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ListAuthorizedDatabasesForUserResponseBody::Databases>) };
    inline vector<ListAuthorizedDatabasesForUserResponseBody::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<ListAuthorizedDatabasesForUserResponseBody::Databases>) };
    inline ListAuthorizedDatabasesForUserResponseBody& setDatabases(const vector<ListAuthorizedDatabasesForUserResponseBody::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListAuthorizedDatabasesForUserResponseBody& setDatabases(vector<ListAuthorizedDatabasesForUserResponseBody::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedDatabasesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the databases on which the user has permissions.
    shared_ptr<vector<ListAuthorizedDatabasesForUserResponseBody::Databases>> databases_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
