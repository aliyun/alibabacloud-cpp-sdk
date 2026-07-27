// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAKEBASETENANTTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLAKEBASETENANTTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GetLakebaseTenantTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLakebaseTenantTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Subdir, subdir_);
      DARABONBA_PTR_TO_JSON(Tenant, tenant_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetLakebaseTenantTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Subdir, subdir_);
      DARABONBA_PTR_FROM_JSON(Tenant, tenant_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetLakebaseTenantTokenResponseBody() = default ;
    GetLakebaseTenantTokenResponseBody(const GetLakebaseTenantTokenResponseBody &) = default ;
    GetLakebaseTenantTokenResponseBody(GetLakebaseTenantTokenResponseBody &&) = default ;
    GetLakebaseTenantTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLakebaseTenantTokenResponseBody() = default ;
    GetLakebaseTenantTokenResponseBody& operator=(const GetLakebaseTenantTokenResponseBody &) = default ;
    GetLakebaseTenantTokenResponseBody& operator=(GetLakebaseTenantTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->subdir_ == nullptr && this->tenant_ == nullptr && this->token_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetLakebaseTenantTokenResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLakebaseTenantTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLakebaseTenantTokenResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subdir Field Functions 
    bool hasSubdir() const { return this->subdir_ != nullptr;};
    void deleteSubdir() { this->subdir_ = nullptr;};
    inline string getSubdir() const { DARABONBA_PTR_GET_DEFAULT(subdir_, "") };
    inline GetLakebaseTenantTokenResponseBody& setSubdir(string subdir) { DARABONBA_PTR_SET_VALUE(subdir_, subdir) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline string getTenant() const { DARABONBA_PTR_GET_DEFAULT(tenant_, "") };
    inline GetLakebaseTenantTokenResponseBody& setTenant(string tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetLakebaseTenantTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The associated PolarDB instance ID.
    shared_ptr<string> DBClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The status.
    shared_ptr<string> status_ {};
    // The mount subdirectory.
    shared_ptr<string> subdir_ {};
    // The tenant identifier.
    shared_ptr<string> tenant_ {};
    // The tenant token.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
