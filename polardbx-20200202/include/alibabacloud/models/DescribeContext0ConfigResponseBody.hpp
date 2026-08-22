// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTEXT0CONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTEXT0CONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeContext0ConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContext0ConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContext0ConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContext0ConfigResponseBody() = default ;
    DescribeContext0ConfigResponseBody(const DescribeContext0ConfigResponseBody &) = default ;
    DescribeContext0ConfigResponseBody(DescribeContext0ConfigResponseBody &&) = default ;
    DescribeContext0ConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContext0ConfigResponseBody() = default ;
    DescribeContext0ConfigResponseBody& operator=(const DescribeContext0ConfigResponseBody &) = default ;
    DescribeContext0ConfigResponseBody& operator=(DescribeContext0ConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Context0AdminKey, context0AdminKey_);
        DARABONBA_PTR_TO_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_TO_JSON(Context0OwnerKey, context0OwnerKey_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(OpenSearchInstanceName, openSearchInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Context0AdminKey, context0AdminKey_);
        DARABONBA_PTR_FROM_JSON(Context0InstanceName, context0InstanceName_);
        DARABONBA_PTR_FROM_JSON(Context0OwnerKey, context0OwnerKey_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(OpenSearchInstanceName, openSearchInstanceName_);
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
        && this->context0InstanceName_ == nullptr && this->context0OwnerKey_ == nullptr && this->DBInstanceName_ == nullptr && this->openSearchInstanceName_ == nullptr; };
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


      // context0OwnerKey Field Functions 
      bool hasContext0OwnerKey() const { return this->context0OwnerKey_ != nullptr;};
      void deleteContext0OwnerKey() { this->context0OwnerKey_ = nullptr;};
      inline string getContext0OwnerKey() const { DARABONBA_PTR_GET_DEFAULT(context0OwnerKey_, "") };
      inline Data& setContext0OwnerKey(string context0OwnerKey) { DARABONBA_PTR_SET_VALUE(context0OwnerKey_, context0OwnerKey) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // openSearchInstanceName Field Functions 
      bool hasOpenSearchInstanceName() const { return this->openSearchInstanceName_ != nullptr;};
      void deleteOpenSearchInstanceName() { this->openSearchInstanceName_ = nullptr;};
      inline string getOpenSearchInstanceName() const { DARABONBA_PTR_GET_DEFAULT(openSearchInstanceName_, "") };
      inline Data& setOpenSearchInstanceName(string openSearchInstanceName) { DARABONBA_PTR_SET_VALUE(openSearchInstanceName_, openSearchInstanceName) };


    protected:
      shared_ptr<string> context0AdminKey_ {};
      shared_ptr<string> context0InstanceName_ {};
      shared_ptr<string> context0OwnerKey_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> openSearchInstanceName_ {};
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
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeContext0ConfigResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeContext0ConfigResponseBody::AccessDeniedDetail) };
    inline DescribeContext0ConfigResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeContext0ConfigResponseBody::AccessDeniedDetail) };
    inline DescribeContext0ConfigResponseBody& setAccessDeniedDetail(const DescribeContext0ConfigResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeContext0ConfigResponseBody& setAccessDeniedDetail(DescribeContext0ConfigResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContext0ConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeContext0ConfigResponseBody::Data) };
    inline DescribeContext0ConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeContext0ConfigResponseBody::Data) };
    inline DescribeContext0ConfigResponseBody& setData(const DescribeContext0ConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContext0ConfigResponseBody& setData(DescribeContext0ConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContext0ConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeContext0ConfigResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<DescribeContext0ConfigResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
