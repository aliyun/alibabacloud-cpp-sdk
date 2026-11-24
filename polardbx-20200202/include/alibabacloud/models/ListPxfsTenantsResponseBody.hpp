// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPXFSTENANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPXFSTENANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ListPxfsTenantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPxfsTenantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPxfsTenantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPxfsTenantsResponseBody() = default ;
    ListPxfsTenantsResponseBody(const ListPxfsTenantsResponseBody &) = default ;
    ListPxfsTenantsResponseBody(ListPxfsTenantsResponseBody &&) = default ;
    ListPxfsTenantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPxfsTenantsResponseBody() = default ;
    ListPxfsTenantsResponseBody& operator=(const ListPxfsTenantsResponseBody &) = default ;
    ListPxfsTenantsResponseBody& operator=(ListPxfsTenantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Tenants, tenants_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Tenants, tenants_);
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
      class Tenants : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tenants& obj) { 
          DARABONBA_PTR_TO_JSON(DedupBytes, dedupBytes_);
          DARABONBA_PTR_TO_JSON(LogicalBytes, logicalBytes_);
          DARABONBA_PTR_TO_JSON(LogicalFiles, logicalFiles_);
          DARABONBA_PTR_TO_JSON(PhysicalBytes, physicalBytes_);
          DARABONBA_PTR_TO_JSON(QuotaBytes, quotaBytes_);
          DARABONBA_PTR_TO_JSON(QuotaFiles, quotaFiles_);
          DARABONBA_PTR_TO_JSON(RateLimitRps, rateLimitRps_);
          DARABONBA_PTR_TO_JSON(RateLimitWbps, rateLimitWbps_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        };
        friend void from_json(const Darabonba::Json& j, Tenants& obj) { 
          DARABONBA_PTR_FROM_JSON(DedupBytes, dedupBytes_);
          DARABONBA_PTR_FROM_JSON(LogicalBytes, logicalBytes_);
          DARABONBA_PTR_FROM_JSON(LogicalFiles, logicalFiles_);
          DARABONBA_PTR_FROM_JSON(PhysicalBytes, physicalBytes_);
          DARABONBA_PTR_FROM_JSON(QuotaBytes, quotaBytes_);
          DARABONBA_PTR_FROM_JSON(QuotaFiles, quotaFiles_);
          DARABONBA_PTR_FROM_JSON(RateLimitRps, rateLimitRps_);
          DARABONBA_PTR_FROM_JSON(RateLimitWbps, rateLimitWbps_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        };
        Tenants() = default ;
        Tenants(const Tenants &) = default ;
        Tenants(Tenants &&) = default ;
        Tenants(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tenants() = default ;
        Tenants& operator=(const Tenants &) = default ;
        Tenants& operator=(Tenants &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dedupBytes_ == nullptr
        && this->logicalBytes_ == nullptr && this->logicalFiles_ == nullptr && this->physicalBytes_ == nullptr && this->quotaBytes_ == nullptr && this->quotaFiles_ == nullptr
        && this->rateLimitRps_ == nullptr && this->rateLimitWbps_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr; };
        // dedupBytes Field Functions 
        bool hasDedupBytes() const { return this->dedupBytes_ != nullptr;};
        void deleteDedupBytes() { this->dedupBytes_ = nullptr;};
        inline int64_t getDedupBytes() const { DARABONBA_PTR_GET_DEFAULT(dedupBytes_, 0L) };
        inline Tenants& setDedupBytes(int64_t dedupBytes) { DARABONBA_PTR_SET_VALUE(dedupBytes_, dedupBytes) };


        // logicalBytes Field Functions 
        bool hasLogicalBytes() const { return this->logicalBytes_ != nullptr;};
        void deleteLogicalBytes() { this->logicalBytes_ = nullptr;};
        inline int64_t getLogicalBytes() const { DARABONBA_PTR_GET_DEFAULT(logicalBytes_, 0L) };
        inline Tenants& setLogicalBytes(int64_t logicalBytes) { DARABONBA_PTR_SET_VALUE(logicalBytes_, logicalBytes) };


        // logicalFiles Field Functions 
        bool hasLogicalFiles() const { return this->logicalFiles_ != nullptr;};
        void deleteLogicalFiles() { this->logicalFiles_ = nullptr;};
        inline int64_t getLogicalFiles() const { DARABONBA_PTR_GET_DEFAULT(logicalFiles_, 0L) };
        inline Tenants& setLogicalFiles(int64_t logicalFiles) { DARABONBA_PTR_SET_VALUE(logicalFiles_, logicalFiles) };


        // physicalBytes Field Functions 
        bool hasPhysicalBytes() const { return this->physicalBytes_ != nullptr;};
        void deletePhysicalBytes() { this->physicalBytes_ = nullptr;};
        inline int64_t getPhysicalBytes() const { DARABONBA_PTR_GET_DEFAULT(physicalBytes_, 0L) };
        inline Tenants& setPhysicalBytes(int64_t physicalBytes) { DARABONBA_PTR_SET_VALUE(physicalBytes_, physicalBytes) };


        // quotaBytes Field Functions 
        bool hasQuotaBytes() const { return this->quotaBytes_ != nullptr;};
        void deleteQuotaBytes() { this->quotaBytes_ = nullptr;};
        inline int64_t getQuotaBytes() const { DARABONBA_PTR_GET_DEFAULT(quotaBytes_, 0L) };
        inline Tenants& setQuotaBytes(int64_t quotaBytes) { DARABONBA_PTR_SET_VALUE(quotaBytes_, quotaBytes) };


        // quotaFiles Field Functions 
        bool hasQuotaFiles() const { return this->quotaFiles_ != nullptr;};
        void deleteQuotaFiles() { this->quotaFiles_ = nullptr;};
        inline int64_t getQuotaFiles() const { DARABONBA_PTR_GET_DEFAULT(quotaFiles_, 0L) };
        inline Tenants& setQuotaFiles(int64_t quotaFiles) { DARABONBA_PTR_SET_VALUE(quotaFiles_, quotaFiles) };


        // rateLimitRps Field Functions 
        bool hasRateLimitRps() const { return this->rateLimitRps_ != nullptr;};
        void deleteRateLimitRps() { this->rateLimitRps_ = nullptr;};
        inline int64_t getRateLimitRps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRps_, 0L) };
        inline Tenants& setRateLimitRps(int64_t rateLimitRps) { DARABONBA_PTR_SET_VALUE(rateLimitRps_, rateLimitRps) };


        // rateLimitWbps Field Functions 
        bool hasRateLimitWbps() const { return this->rateLimitWbps_ != nullptr;};
        void deleteRateLimitWbps() { this->rateLimitWbps_ = nullptr;};
        inline int64_t getRateLimitWbps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitWbps_, 0L) };
        inline Tenants& setRateLimitWbps(int64_t rateLimitWbps) { DARABONBA_PTR_SET_VALUE(rateLimitWbps_, rateLimitWbps) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Tenants& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Tenants& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // tenantName Field Functions 
        bool hasTenantName() const { return this->tenantName_ != nullptr;};
        void deleteTenantName() { this->tenantName_ = nullptr;};
        inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
        inline Tenants& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      protected:
        // The number of bytes saved by data deduplication for the tenant.
        shared_ptr<int64_t> dedupBytes_ {};
        // The current logical usage of the tenant, in bytes.
        shared_ptr<int64_t> logicalBytes_ {};
        // The current number of logical files for the tenant.
        shared_ptr<int64_t> logicalFiles_ {};
        // The actual physical storage space occupied by the tenant, in bytes.
        shared_ptr<int64_t> physicalBytes_ {};
        // The storage capacity quota.
        shared_ptr<int64_t> quotaBytes_ {};
        // The file count quota.
        shared_ptr<int64_t> quotaFiles_ {};
        // The maximum request rate.
        shared_ptr<int64_t> rateLimitRps_ {};
        // The maximum write bandwidth.
        shared_ptr<int64_t> rateLimitWbps_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The tenant name.
        shared_ptr<string> tenantName_ {};
      };

      virtual bool empty() const override { return this->tenants_ == nullptr; };
      // tenants Field Functions 
      bool hasTenants() const { return this->tenants_ != nullptr;};
      void deleteTenants() { this->tenants_ = nullptr;};
      inline const vector<Data::Tenants> & getTenants() const { DARABONBA_PTR_GET_CONST(tenants_, vector<Data::Tenants>) };
      inline vector<Data::Tenants> getTenants() { DARABONBA_PTR_GET(tenants_, vector<Data::Tenants>) };
      inline Data& setTenants(const vector<Data::Tenants> & tenants) { DARABONBA_PTR_SET_VALUE(tenants_, tenants) };
      inline Data& setTenants(vector<Data::Tenants> && tenants) { DARABONBA_PTR_SET_RVALUE(tenants_, tenants) };


    protected:
      // The list of PXFS tenants.
      shared_ptr<vector<Data::Tenants>> tenants_ {};
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
      // The type of the permission denial.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ListPxfsTenantsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ListPxfsTenantsResponseBody::AccessDeniedDetail) };
    inline ListPxfsTenantsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ListPxfsTenantsResponseBody::AccessDeniedDetail) };
    inline ListPxfsTenantsResponseBody& setAccessDeniedDetail(const ListPxfsTenantsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ListPxfsTenantsResponseBody& setAccessDeniedDetail(ListPxfsTenantsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPxfsTenantsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPxfsTenantsResponseBody::Data) };
    inline ListPxfsTenantsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPxfsTenantsResponseBody::Data) };
    inline ListPxfsTenantsResponseBody& setData(const ListPxfsTenantsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPxfsTenantsResponseBody& setData(ListPxfsTenantsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPxfsTenantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<ListPxfsTenantsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The data structure.
    shared_ptr<ListPxfsTenantsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
