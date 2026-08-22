// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXT0RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXT0RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateContext0ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContext0ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContext0ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateContext0ResponseBody() = default ;
    CreateContext0ResponseBody(const CreateContext0ResponseBody &) = default ;
    CreateContext0ResponseBody(CreateContext0ResponseBody &&) = default ;
    CreateContext0ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContext0ResponseBody() = default ;
    CreateContext0ResponseBody& operator=(const CreateContext0ResponseBody &) = default ;
    CreateContext0ResponseBody& operator=(CreateContext0ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Context0AdminKey, context0AdminKey_);
        DARABONBA_PTR_TO_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DashboardReplicaSetName, dashboardReplicaSetName_);
        DARABONBA_PTR_TO_JSON(OpenSearchInstanceName, openSearchInstanceName_);
        DARABONBA_PTR_TO_JSON(ServiceReplicaSetName, serviceReplicaSetName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Context0AdminKey, context0AdminKey_);
        DARABONBA_PTR_FROM_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DashboardReplicaSetName, dashboardReplicaSetName_);
        DARABONBA_PTR_FROM_JSON(OpenSearchInstanceName, openSearchInstanceName_);
        DARABONBA_PTR_FROM_JSON(ServiceReplicaSetName, serviceReplicaSetName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->context0AdminKey_ == nullptr
        && this->context0InstanceName_ == nullptr && this->DBInstanceName_ == nullptr && this->dashboardReplicaSetName_ == nullptr && this->openSearchInstanceName_ == nullptr && this->serviceReplicaSetName_ == nullptr
        && this->taskId_ == nullptr; };
      // context0AdminKey Field Functions 
      bool hasContext0AdminKey() const { return this->context0AdminKey_ != nullptr;};
      void deleteContext0AdminKey() { this->context0AdminKey_ = nullptr;};
      inline string getContext0AdminKey() const { DARABONBA_PTR_GET_DEFAULT(context0AdminKey_, "") };
      inline Data& setContext0AdminKey(string context0AdminKey) { DARABONBA_PTR_SET_VALUE(context0AdminKey_, context0AdminKey) };


      // context0InstanceName Field Functions 
      bool hasContext0InstanceName() const { return this->context0InstanceName_ != nullptr;};
      void deleteContext0InstanceName() { this->context0InstanceName_ = nullptr;};
      inline string getContext0InstanceName() const { DARABONBA_PTR_GET_DEFAULT(context0InstanceName_, "") };
      inline Data& setContext0InstanceName(string context0InstanceName) { DARABONBA_PTR_SET_VALUE(context0InstanceName_, context0InstanceName) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // dashboardReplicaSetName Field Functions 
      bool hasDashboardReplicaSetName() const { return this->dashboardReplicaSetName_ != nullptr;};
      void deleteDashboardReplicaSetName() { this->dashboardReplicaSetName_ = nullptr;};
      inline string getDashboardReplicaSetName() const { DARABONBA_PTR_GET_DEFAULT(dashboardReplicaSetName_, "") };
      inline Data& setDashboardReplicaSetName(string dashboardReplicaSetName) { DARABONBA_PTR_SET_VALUE(dashboardReplicaSetName_, dashboardReplicaSetName) };


      // openSearchInstanceName Field Functions 
      bool hasOpenSearchInstanceName() const { return this->openSearchInstanceName_ != nullptr;};
      void deleteOpenSearchInstanceName() { this->openSearchInstanceName_ = nullptr;};
      inline string getOpenSearchInstanceName() const { DARABONBA_PTR_GET_DEFAULT(openSearchInstanceName_, "") };
      inline Data& setOpenSearchInstanceName(string openSearchInstanceName) { DARABONBA_PTR_SET_VALUE(openSearchInstanceName_, openSearchInstanceName) };


      // serviceReplicaSetName Field Functions 
      bool hasServiceReplicaSetName() const { return this->serviceReplicaSetName_ != nullptr;};
      void deleteServiceReplicaSetName() { this->serviceReplicaSetName_ = nullptr;};
      inline string getServiceReplicaSetName() const { DARABONBA_PTR_GET_DEFAULT(serviceReplicaSetName_, "") };
      inline Data& setServiceReplicaSetName(string serviceReplicaSetName) { DARABONBA_PTR_SET_VALUE(serviceReplicaSetName_, serviceReplicaSetName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Data& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The administrator key of the context service.
      shared_ptr<string> context0AdminKey_ {};
      // The name of the context service instance.
      shared_ptr<string> context0InstanceName_ {};
      // The instance name.
      shared_ptr<string> DBInstanceName_ {};
      // The name of the context service dashboard instance.
      shared_ptr<string> dashboardReplicaSetName_ {};
      // The name of the PolarDB-X Search instance.
      shared_ptr<string> openSearchInstanceName_ {};
      // The name of the context service instance.
      shared_ptr<string> serviceReplicaSetName_ {};
      // The backend task ID.
      shared_ptr<int32_t> taskId_ {};
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
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
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
    inline const CreateContext0ResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, CreateContext0ResponseBody::AccessDeniedDetail) };
    inline CreateContext0ResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, CreateContext0ResponseBody::AccessDeniedDetail) };
    inline CreateContext0ResponseBody& setAccessDeniedDetail(const CreateContext0ResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline CreateContext0ResponseBody& setAccessDeniedDetail(CreateContext0ResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateContext0ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateContext0ResponseBody::Data) };
    inline CreateContext0ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateContext0ResponseBody::Data) };
    inline CreateContext0ResponseBody& setData(const CreateContext0ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateContext0ResponseBody& setData(CreateContext0ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateContext0ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<CreateContext0ResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The instance data.
    shared_ptr<CreateContext0ResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
