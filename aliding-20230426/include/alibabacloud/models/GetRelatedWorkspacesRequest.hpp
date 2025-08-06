// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRelatedWorkspacesRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetRelatedWorkspacesRequest() = default ;
    GetRelatedWorkspacesRequest(const GetRelatedWorkspacesRequest &) = default ;
    GetRelatedWorkspacesRequest(GetRelatedWorkspacesRequest &&) = default ;
    GetRelatedWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesRequest() = default ;
    GetRelatedWorkspacesRequest& operator=(const GetRelatedWorkspacesRequest &) = default ;
    GetRelatedWorkspacesRequest& operator=(GetRelatedWorkspacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->includeRecent_ != nullptr
        && this->tenantContext_ != nullptr; };
    // includeRecent Field Functions 
    bool hasIncludeRecent() const { return this->includeRecent_ != nullptr;};
    void deleteIncludeRecent() { this->includeRecent_ = nullptr;};
    inline bool includeRecent() const { DARABONBA_PTR_GET_DEFAULT(includeRecent_, false) };
    inline GetRelatedWorkspacesRequest& setIncludeRecent(bool includeRecent) { DARABONBA_PTR_SET_VALUE(includeRecent_, includeRecent) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetRelatedWorkspacesRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetRelatedWorkspacesRequestTenantContext) };
    inline GetRelatedWorkspacesRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetRelatedWorkspacesRequestTenantContext) };
    inline GetRelatedWorkspacesRequest& setTenantContext(const GetRelatedWorkspacesRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetRelatedWorkspacesRequest& setTenantContext(GetRelatedWorkspacesRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<bool> includeRecent_ = nullptr;
    std::shared_ptr<GetRelatedWorkspacesRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
