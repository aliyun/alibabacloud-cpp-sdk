// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAKEBASETENANTTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLAKEBASETENANTTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GetLakebaseTenantTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLakebaseTenantTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(Subdir, subdir_);
      DARABONBA_PTR_TO_JSON(Tenant, tenant_);
    };
    friend void from_json(const Darabonba::Json& j, GetLakebaseTenantTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Subdir, subdir_);
      DARABONBA_PTR_FROM_JSON(Tenant, tenant_);
    };
    GetLakebaseTenantTokenRequest() = default ;
    GetLakebaseTenantTokenRequest(const GetLakebaseTenantTokenRequest &) = default ;
    GetLakebaseTenantTokenRequest(GetLakebaseTenantTokenRequest &&) = default ;
    GetLakebaseTenantTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLakebaseTenantTokenRequest() = default ;
    GetLakebaseTenantTokenRequest& operator=(const GetLakebaseTenantTokenRequest &) = default ;
    GetLakebaseTenantTokenRequest& operator=(GetLakebaseTenantTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->subdir_ == nullptr && this->tenant_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetLakebaseTenantTokenRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline GetLakebaseTenantTokenRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // subdir Field Functions 
    bool hasSubdir() const { return this->subdir_ != nullptr;};
    void deleteSubdir() { this->subdir_ = nullptr;};
    inline string getSubdir() const { DARABONBA_PTR_GET_DEFAULT(subdir_, "") };
    inline GetLakebaseTenantTokenRequest& setSubdir(string subdir) { DARABONBA_PTR_SET_VALUE(subdir_, subdir) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline string getTenant() const { DARABONBA_PTR_GET_DEFAULT(tenant_, "") };
    inline GetLakebaseTenantTokenRequest& setTenant(string tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };


  protected:
    // The associated PolarDB instance ID.
    shared_ptr<string> DBClusterId_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // The mount subdirectory. Specify an absolute path.
    // 
    // This parameter is required.
    shared_ptr<string> subdir_ {};
    // The tenant identifier.
    shared_ptr<string> tenant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
