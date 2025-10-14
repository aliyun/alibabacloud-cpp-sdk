// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYORGIDANDSTAFFIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYORGIDANDSTAFFIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserIdByOrgIdAndStaffIdRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserIdByOrgIdAndStaffIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByOrgIdAndStaffIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByOrgIdAndStaffIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetUserIdByOrgIdAndStaffIdRequest() = default ;
    GetUserIdByOrgIdAndStaffIdRequest(const GetUserIdByOrgIdAndStaffIdRequest &) = default ;
    GetUserIdByOrgIdAndStaffIdRequest(GetUserIdByOrgIdAndStaffIdRequest &&) = default ;
    GetUserIdByOrgIdAndStaffIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByOrgIdAndStaffIdRequest() = default ;
    GetUserIdByOrgIdAndStaffIdRequest& operator=(const GetUserIdByOrgIdAndStaffIdRequest &) = default ;
    GetUserIdByOrgIdAndStaffIdRequest& operator=(GetUserIdByOrgIdAndStaffIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GetUserIdByOrgIdAndStaffIdRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetUserIdByOrgIdAndStaffIdRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetUserIdByOrgIdAndStaffIdRequestTenantContext) };
    inline GetUserIdByOrgIdAndStaffIdRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetUserIdByOrgIdAndStaffIdRequestTenantContext) };
    inline GetUserIdByOrgIdAndStaffIdRequest& setTenantContext(const GetUserIdByOrgIdAndStaffIdRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetUserIdByOrgIdAndStaffIdRequest& setTenantContext(GetUserIdByOrgIdAndStaffIdRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<int64_t> orgId_ = nullptr;
    std::shared_ptr<GetUserIdByOrgIdAndStaffIdRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
