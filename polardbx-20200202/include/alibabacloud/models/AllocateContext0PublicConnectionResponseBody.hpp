// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECONTEXT0PUBLICCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECONTEXT0PUBLICCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class AllocateContext0PublicConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateContext0PublicConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateContext0PublicConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateContext0PublicConnectionResponseBody() = default ;
    AllocateContext0PublicConnectionResponseBody(const AllocateContext0PublicConnectionResponseBody &) = default ;
    AllocateContext0PublicConnectionResponseBody(AllocateContext0PublicConnectionResponseBody &&) = default ;
    AllocateContext0PublicConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateContext0PublicConnectionResponseBody() = default ;
    AllocateContext0PublicConnectionResponseBody& operator=(const AllocateContext0PublicConnectionResponseBody &) = default ;
    AllocateContext0PublicConnectionResponseBody& operator=(AllocateContext0PublicConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Vip, vip_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Vip, vip_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->context0InstanceName_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceName_ == nullptr && this->DBInstanceNetType_ == nullptr && this->nodeType_ == nullptr
        && this->port_ == nullptr && this->taskId_ == nullptr && this->vip_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Data& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // context0InstanceName Field Functions 
      bool hasContext0InstanceName() const { return this->context0InstanceName_ != nullptr;};
      void deleteContext0InstanceName() { this->context0InstanceName_ = nullptr;};
      inline string getContext0InstanceName() const { DARABONBA_PTR_GET_DEFAULT(context0InstanceName_, "") };
      inline Data& setContext0InstanceName(string context0InstanceName) { DARABONBA_PTR_SET_VALUE(context0InstanceName_, context0InstanceName) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline int32_t getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, 0) };
      inline Data& setDBInstanceId(int32_t DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // DBInstanceNetType Field Functions 
      bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
      void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
      inline int32_t getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, 0) };
      inline Data& setDBInstanceNetType(int32_t DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Data& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Data& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Data& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // vip Field Functions 
      bool hasVip() const { return this->vip_ != nullptr;};
      void deleteVip() { this->vip_ = nullptr;};
      inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
      inline Data& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


    protected:
      // The endpoint.
      shared_ptr<string> connectionString_ {};
      // The context service instance name.
      shared_ptr<string> context0InstanceName_ {};
      // The instance ID.
      shared_ptr<int32_t> DBInstanceId_ {};
      // The instance ID.
      shared_ptr<string> DBInstanceName_ {};
      // The network type of the endpoint.
      shared_ptr<int32_t> DBInstanceNetType_ {};
      // The target node type: service or dashboard.
      shared_ptr<string> nodeType_ {};
      // The port of the endpoint.
      shared_ptr<string> port_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
      // The IP address of the Anti-DDoS Proxy instance protected by the policy.
      shared_ptr<string> vip_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The description is the same as above.
      shared_ptr<string> authAction_ {};
      // The identity used for authentication in the request.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The description is the same as above.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail) };
    inline AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail) };
    inline AllocateContext0PublicConnectionResponseBody& setAccessDeniedDetail(const AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline AllocateContext0PublicConnectionResponseBody& setAccessDeniedDetail(AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AllocateContext0PublicConnectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AllocateContext0PublicConnectionResponseBody::Data) };
    inline AllocateContext0PublicConnectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AllocateContext0PublicConnectionResponseBody::Data) };
    inline AllocateContext0PublicConnectionResponseBody& setData(const AllocateContext0PublicConnectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AllocateContext0PublicConnectionResponseBody& setData(AllocateContext0PublicConnectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateContext0PublicConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<AllocateContext0PublicConnectionResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The task details.
    shared_ptr<AllocateContext0PublicConnectionResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
