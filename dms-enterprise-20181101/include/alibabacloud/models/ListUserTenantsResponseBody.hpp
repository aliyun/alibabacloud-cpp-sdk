// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERTENANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERTENANTSRESPONSEBODY_HPP_
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
    class TenantList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantList& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(Tid, tid_);
      };
      friend void from_json(const Darabonba::Json& j, TenantList& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(Tid, tid_);
      };
      TenantList() = default ;
      TenantList(const TenantList &) = default ;
      TenantList(TenantList &&) = default ;
      TenantList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantList() = default ;
      TenantList& operator=(const TenantList &) = default ;
      TenantList& operator=(TenantList &&) = default ;
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
      inline TenantList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline TenantList& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // tid Field Functions 
      bool hasTid() const { return this->tid_ != nullptr;};
      void deleteTid() { this->tid_ = nullptr;};
      inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
      inline TenantList& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


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
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tenantList_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUserTenantsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUserTenantsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserTenantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserTenantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenantList Field Functions 
    bool hasTenantList() const { return this->tenantList_ != nullptr;};
    void deleteTenantList() { this->tenantList_ = nullptr;};
    inline const vector<ListUserTenantsResponseBody::TenantList> & getTenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<ListUserTenantsResponseBody::TenantList>) };
    inline vector<ListUserTenantsResponseBody::TenantList> getTenantList() { DARABONBA_PTR_GET(tenantList_, vector<ListUserTenantsResponseBody::TenantList>) };
    inline ListUserTenantsResponseBody& setTenantList(const vector<ListUserTenantsResponseBody::TenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
    inline ListUserTenantsResponseBody& setTenantList(vector<ListUserTenantsResponseBody::TenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


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
    // The details of the tenants that were returned.
    shared_ptr<vector<ListUserTenantsResponseBody::TenantList>> tenantList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
