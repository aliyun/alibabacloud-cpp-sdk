// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserActiveTenantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserActiveTenantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tenant, tenant_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserActiveTenantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tenant, tenant_);
    };
    GetUserActiveTenantResponseBody() = default ;
    GetUserActiveTenantResponseBody(const GetUserActiveTenantResponseBody &) = default ;
    GetUserActiveTenantResponseBody(GetUserActiveTenantResponseBody &&) = default ;
    GetUserActiveTenantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserActiveTenantResponseBody() = default ;
    GetUserActiveTenantResponseBody& operator=(const GetUserActiveTenantResponseBody &) = default ;
    GetUserActiveTenantResponseBody& operator=(GetUserActiveTenantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tenant : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tenant& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(Tid, tid_);
      };
      friend void from_json(const Darabonba::Json& j, Tenant& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(Tid, tid_);
      };
      Tenant() = default ;
      Tenant(const Tenant &) = default ;
      Tenant(Tenant &&) = default ;
      Tenant(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tenant() = default ;
      Tenant& operator=(const Tenant &) = default ;
      Tenant& operator=(Tenant &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->tenantName_ == nullptr && this->tid_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tenant& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Tenant& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // tid Field Functions 
      bool hasTid() const { return this->tid_ != nullptr;};
      void deleteTid() { this->tid_ = nullptr;};
      inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
      inline Tenant& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    protected:
      // The status of the tenant. Valid values:
      // 
      // *   **ACTIVE**: The tenant is used to access DMS.
      // *   **IN_ACTIVE**: The tenant is not used.
      shared_ptr<string> status_ {};
      // The name of the tenant.
      shared_ptr<string> tenantName_ {};
      // The ID of the tenant.
      shared_ptr<int64_t> tid_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tenant_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserActiveTenantResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUserActiveTenantResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserActiveTenantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserActiveTenantResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline const GetUserActiveTenantResponseBody::Tenant & getTenant() const { DARABONBA_PTR_GET_CONST(tenant_, GetUserActiveTenantResponseBody::Tenant) };
    inline GetUserActiveTenantResponseBody::Tenant getTenant() { DARABONBA_PTR_GET(tenant_, GetUserActiveTenantResponseBody::Tenant) };
    inline GetUserActiveTenantResponseBody& setTenant(const GetUserActiveTenantResponseBody::Tenant & tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };
    inline GetUserActiveTenantResponseBody& setTenant(GetUserActiveTenantResponseBody::Tenant && tenant) { DARABONBA_PTR_SET_RVALUE(tenant_, tenant) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The details of the tenant.
    shared_ptr<GetUserActiveTenantResponseBody::Tenant> tenant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
