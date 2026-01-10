// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODY_HPP_
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
  class ListAuthorizedInstancesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedInstancesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedInstancesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorizedInstancesForUserResponseBody() = default ;
    ListAuthorizedInstancesForUserResponseBody(const ListAuthorizedInstancesForUserResponseBody &) = default ;
    ListAuthorizedInstancesForUserResponseBody(ListAuthorizedInstancesForUserResponseBody &&) = default ;
    ListAuthorizedInstancesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedInstancesForUserResponseBody() = default ;
    ListAuthorizedInstancesForUserResponseBody& operator=(const ListAuthorizedInstancesForUserResponseBody &) = default ;
    ListAuthorizedInstancesForUserResponseBody& operator=(ListAuthorizedInstancesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PermissionDetail, permissionDetail_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PermissionDetail, permissionDetail_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
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
        // The time when the permission expires.
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

      virtual bool empty() const override { return this->dbType_ == nullptr
        && this->envType_ == nullptr && this->host_ == nullptr && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr && this->permissionDetail_ == nullptr
        && this->port_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Instances& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Instances& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Instances& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceAlias Field Functions 
      bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
      void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
      inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
      inline Instances& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // permissionDetail Field Functions 
      bool hasPermissionDetail() const { return this->permissionDetail_ != nullptr;};
      void deletePermissionDetail() { this->permissionDetail_ = nullptr;};
      inline const Instances::PermissionDetail & getPermissionDetail() const { DARABONBA_PTR_GET_CONST(permissionDetail_, Instances::PermissionDetail) };
      inline Instances::PermissionDetail getPermissionDetail() { DARABONBA_PTR_GET(permissionDetail_, Instances::PermissionDetail) };
      inline Instances& setPermissionDetail(const Instances::PermissionDetail & permissionDetail) { DARABONBA_PTR_SET_VALUE(permissionDetail_, permissionDetail) };
      inline Instances& setPermissionDetail(Instances::PermissionDetail && permissionDetail) { DARABONBA_PTR_SET_RVALUE(permissionDetail_, permissionDetail) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Instances& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Instances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Instances& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The database engine that the instance runs.
      shared_ptr<string> dbType_ {};
      // The type of the environment to which the database instance belongs.
      shared_ptr<string> envType_ {};
      // The endpoint that is used to connect to the instance.
      shared_ptr<string> host_ {};
      // The alias of the instance.
      shared_ptr<string> instanceAlias_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The details of permissions. The format of the permission details varies with the permission source. For example, if the permission source is a normal permission, the following parameters are returned.
      shared_ptr<Instances::PermissionDetail> permissionDetail_ {};
      // The port number that is used to connect to the instance.
      shared_ptr<string> port_ {};
      // The user IDs.
      shared_ptr<string> userId_ {};
      // The user name.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListAuthorizedInstancesForUserResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListAuthorizedInstancesForUserResponseBody::Instances>) };
    inline vector<ListAuthorizedInstancesForUserResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListAuthorizedInstancesForUserResponseBody::Instances>) };
    inline ListAuthorizedInstancesForUserResponseBody& setInstances(const vector<ListAuthorizedInstancesForUserResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListAuthorizedInstancesForUserResponseBody& setInstances(vector<ListAuthorizedInstancesForUserResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedInstancesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of instances on which the user has permissions.
    shared_ptr<vector<ListAuthorizedInstancesForUserResponseBody::Instances>> instances_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
