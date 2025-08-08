// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODYTENANT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACTIVETENANTRESPONSEBODYTENANT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserActiveTenantResponseBodyTenant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserActiveTenantResponseBodyTenant& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserActiveTenantResponseBodyTenant& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetUserActiveTenantResponseBodyTenant() = default ;
    GetUserActiveTenantResponseBodyTenant(const GetUserActiveTenantResponseBodyTenant &) = default ;
    GetUserActiveTenantResponseBodyTenant(GetUserActiveTenantResponseBodyTenant &&) = default ;
    GetUserActiveTenantResponseBodyTenant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserActiveTenantResponseBodyTenant() = default ;
    GetUserActiveTenantResponseBodyTenant& operator=(const GetUserActiveTenantResponseBodyTenant &) = default ;
    GetUserActiveTenantResponseBodyTenant& operator=(GetUserActiveTenantResponseBodyTenant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->tenantName_ != nullptr && this->tid_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserActiveTenantResponseBodyTenant& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline GetUserActiveTenantResponseBodyTenant& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetUserActiveTenantResponseBodyTenant& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The status of the tenant. Valid values:
    // 
    // *   **ACTIVE**: The tenant is used to access DMS.
    // *   **IN_ACTIVE**: The tenant is not used.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the tenant.
    std::shared_ptr<string> tenantName_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
