// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkspacesRequestOption.hpp>
#include <alibabacloud/models/GetWorkspacesRequestTenantContext.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    GetWorkspacesRequest() = default ;
    GetWorkspacesRequest(const GetWorkspacesRequest &) = default ;
    GetWorkspacesRequest(GetWorkspacesRequest &&) = default ;
    GetWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacesRequest() = default ;
    GetWorkspacesRequest& operator=(const GetWorkspacesRequest &) = default ;
    GetWorkspacesRequest& operator=(GetWorkspacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->option_ == nullptr
        && return this->tenantContext_ == nullptr && return this->workspaceIds_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetWorkspacesRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetWorkspacesRequestOption) };
    inline GetWorkspacesRequestOption option() { DARABONBA_PTR_GET(option_, GetWorkspacesRequestOption) };
    inline GetWorkspacesRequest& setOption(const GetWorkspacesRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetWorkspacesRequest& setOption(GetWorkspacesRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetWorkspacesRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetWorkspacesRequestTenantContext) };
    inline GetWorkspacesRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetWorkspacesRequestTenantContext) };
    inline GetWorkspacesRequest& setTenantContext(const GetWorkspacesRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetWorkspacesRequest& setTenantContext(GetWorkspacesRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline const vector<string> & workspaceIds() const { DARABONBA_PTR_GET_CONST(workspaceIds_, vector<string>) };
    inline vector<string> workspaceIds() { DARABONBA_PTR_GET(workspaceIds_, vector<string>) };
    inline GetWorkspacesRequest& setWorkspaceIds(const vector<string> & workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };
    inline GetWorkspacesRequest& setWorkspaceIds(vector<string> && workspaceIds) { DARABONBA_PTR_SET_RVALUE(workspaceIds_, workspaceIds) };


  protected:
    std::shared_ptr<GetWorkspacesRequestOption> option_ = nullptr;
    std::shared_ptr<GetWorkspacesRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> workspaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
