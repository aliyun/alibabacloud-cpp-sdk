// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserActiveTenantResponseBodyTenant.hpp>
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
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tenant_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserActiveTenantResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUserActiveTenantResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserActiveTenantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserActiveTenantResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline const GetUserActiveTenantResponseBodyTenant & tenant() const { DARABONBA_PTR_GET_CONST(tenant_, GetUserActiveTenantResponseBodyTenant) };
    inline GetUserActiveTenantResponseBodyTenant tenant() { DARABONBA_PTR_GET(tenant_, GetUserActiveTenantResponseBodyTenant) };
    inline GetUserActiveTenantResponseBody& setTenant(const GetUserActiveTenantResponseBodyTenant & tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };
    inline GetUserActiveTenantResponseBody& setTenant(GetUserActiveTenantResponseBodyTenant && tenant) { DARABONBA_PTR_SET_RVALUE(tenant_, tenant) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The details of the tenant.
    std::shared_ptr<GetUserActiveTenantResponseBodyTenant> tenant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
