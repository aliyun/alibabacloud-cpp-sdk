// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYORGIDANDSTAFFIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYORGIDANDSTAFFIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserIdByOrgIdAndStaffIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByOrgIdAndStaffIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByOrgIdAndStaffIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetUserIdByOrgIdAndStaffIdShrinkRequest() = default ;
    GetUserIdByOrgIdAndStaffIdShrinkRequest(const GetUserIdByOrgIdAndStaffIdShrinkRequest &) = default ;
    GetUserIdByOrgIdAndStaffIdShrinkRequest(GetUserIdByOrgIdAndStaffIdShrinkRequest &&) = default ;
    GetUserIdByOrgIdAndStaffIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByOrgIdAndStaffIdShrinkRequest() = default ;
    GetUserIdByOrgIdAndStaffIdShrinkRequest& operator=(const GetUserIdByOrgIdAndStaffIdShrinkRequest &) = default ;
    GetUserIdByOrgIdAndStaffIdShrinkRequest& operator=(GetUserIdByOrgIdAndStaffIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgId_ != nullptr
        && this->tenantContextShrink_ != nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GetUserIdByOrgIdAndStaffIdShrinkRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetUserIdByOrgIdAndStaffIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<int64_t> orgId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
