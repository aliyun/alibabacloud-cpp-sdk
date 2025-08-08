// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERTENANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERTENANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserTenantsResponseBodyTenantList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserTenantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserTenantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TenantList, tenantList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserTenantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TenantList, tenantList_);
    };
    ListUserTenantsResponseBody() = default ;
    ListUserTenantsResponseBody(const ListUserTenantsResponseBody &) = default ;
    ListUserTenantsResponseBody(ListUserTenantsResponseBody &&) = default ;
    ListUserTenantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserTenantsResponseBody() = default ;
    ListUserTenantsResponseBody& operator=(const ListUserTenantsResponseBody &) = default ;
    ListUserTenantsResponseBody& operator=(ListUserTenantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tenantList_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUserTenantsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUserTenantsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserTenantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserTenantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenantList Field Functions 
    bool hasTenantList() const { return this->tenantList_ != nullptr;};
    void deleteTenantList() { this->tenantList_ = nullptr;};
    inline const vector<ListUserTenantsResponseBodyTenantList> & tenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<ListUserTenantsResponseBodyTenantList>) };
    inline vector<ListUserTenantsResponseBodyTenantList> tenantList() { DARABONBA_PTR_GET(tenantList_, vector<ListUserTenantsResponseBodyTenantList>) };
    inline ListUserTenantsResponseBody& setTenantList(const vector<ListUserTenantsResponseBodyTenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
    inline ListUserTenantsResponseBody& setTenantList(vector<ListUserTenantsResponseBodyTenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


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
    // The details of the tenants that were returned.
    std::shared_ptr<vector<ListUserTenantsResponseBodyTenantList>> tenantList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
