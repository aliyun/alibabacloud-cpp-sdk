// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPXFSTENANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPXFSTENANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePxfsTenantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePxfsTenantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePxfsTenantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePxfsTenantResponseBody() = default ;
    CreatePxfsTenantResponseBody(const CreatePxfsTenantResponseBody &) = default ;
    CreatePxfsTenantResponseBody(CreatePxfsTenantResponseBody &&) = default ;
    CreatePxfsTenantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePxfsTenantResponseBody() = default ;
    CreatePxfsTenantResponseBody& operator=(const CreatePxfsTenantResponseBody &) = default ;
    CreatePxfsTenantResponseBody& operator=(CreatePxfsTenantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaBytes, quotaBytes_);
        DARABONBA_PTR_TO_JSON(QuotaFiles, quotaFiles_);
        DARABONBA_PTR_TO_JSON(RateLimitRps, rateLimitRps_);
        DARABONBA_PTR_TO_JSON(RateLimitWbps, rateLimitWbps_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaBytes, quotaBytes_);
        DARABONBA_PTR_FROM_JSON(QuotaFiles, quotaFiles_);
        DARABONBA_PTR_FROM_JSON(RateLimitRps, rateLimitRps_);
        DARABONBA_PTR_FROM_JSON(RateLimitWbps, rateLimitWbps_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
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
      virtual bool empty() const override { return this->quotaBytes_ == nullptr
        && this->quotaFiles_ == nullptr && this->rateLimitRps_ == nullptr && this->rateLimitWbps_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr
        && this->tenantName_ == nullptr; };
      // quotaBytes Field Functions 
      bool hasQuotaBytes() const { return this->quotaBytes_ != nullptr;};
      void deleteQuotaBytes() { this->quotaBytes_ = nullptr;};
      inline int64_t getQuotaBytes() const { DARABONBA_PTR_GET_DEFAULT(quotaBytes_, 0L) };
      inline Data& setQuotaBytes(int64_t quotaBytes) { DARABONBA_PTR_SET_VALUE(quotaBytes_, quotaBytes) };


      // quotaFiles Field Functions 
      bool hasQuotaFiles() const { return this->quotaFiles_ != nullptr;};
      void deleteQuotaFiles() { this->quotaFiles_ = nullptr;};
      inline int64_t getQuotaFiles() const { DARABONBA_PTR_GET_DEFAULT(quotaFiles_, 0L) };
      inline Data& setQuotaFiles(int64_t quotaFiles) { DARABONBA_PTR_SET_VALUE(quotaFiles_, quotaFiles) };


      // rateLimitRps Field Functions 
      bool hasRateLimitRps() const { return this->rateLimitRps_ != nullptr;};
      void deleteRateLimitRps() { this->rateLimitRps_ = nullptr;};
      inline int64_t getRateLimitRps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRps_, 0L) };
      inline Data& setRateLimitRps(int64_t rateLimitRps) { DARABONBA_PTR_SET_VALUE(rateLimitRps_, rateLimitRps) };


      // rateLimitWbps Field Functions 
      bool hasRateLimitWbps() const { return this->rateLimitWbps_ != nullptr;};
      void deleteRateLimitWbps() { this->rateLimitWbps_ = nullptr;};
      inline int64_t getRateLimitWbps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitWbps_, 0L) };
      inline Data& setRateLimitWbps(int64_t rateLimitWbps) { DARABONBA_PTR_SET_VALUE(rateLimitWbps_, rateLimitWbps) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Data& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    protected:
      // The capacity quota.
      shared_ptr<int64_t> quotaBytes_ {};
      // The file count quota.
      shared_ptr<int64_t> quotaFiles_ {};
      // The request rate limit.
      shared_ptr<int64_t> rateLimitRps_ {};
      // The write bandwidth limit.
      shared_ptr<int64_t> rateLimitWbps_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The name of the tenant.
      shared_ptr<string> tenantName_ {};
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
    inline const CreatePxfsTenantResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, CreatePxfsTenantResponseBody::AccessDeniedDetail) };
    inline CreatePxfsTenantResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, CreatePxfsTenantResponseBody::AccessDeniedDetail) };
    inline CreatePxfsTenantResponseBody& setAccessDeniedDetail(const CreatePxfsTenantResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline CreatePxfsTenantResponseBody& setAccessDeniedDetail(CreatePxfsTenantResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePxfsTenantResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePxfsTenantResponseBody::Data) };
    inline CreatePxfsTenantResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePxfsTenantResponseBody::Data) };
    inline CreatePxfsTenantResponseBody& setData(const CreatePxfsTenantResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePxfsTenantResponseBody& setData(CreatePxfsTenantResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePxfsTenantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<CreatePxfsTenantResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The response data.
    shared_ptr<CreatePxfsTenantResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
