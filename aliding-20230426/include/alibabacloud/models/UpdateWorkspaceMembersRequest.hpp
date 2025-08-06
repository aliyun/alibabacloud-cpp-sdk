// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkspaceMembersRequestMembers.hpp>
#include <alibabacloud/models/UpdateWorkspaceMembersRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateWorkspaceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateWorkspaceMembersRequest() = default ;
    UpdateWorkspaceMembersRequest(const UpdateWorkspaceMembersRequest &) = default ;
    UpdateWorkspaceMembersRequest(UpdateWorkspaceMembersRequest &&) = default ;
    UpdateWorkspaceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceMembersRequest() = default ;
    UpdateWorkspaceMembersRequest& operator=(const UpdateWorkspaceMembersRequest &) = default ;
    UpdateWorkspaceMembersRequest& operator=(UpdateWorkspaceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->tenantContext_ != nullptr && this->workspaceId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<UpdateWorkspaceMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<UpdateWorkspaceMembersRequestMembers>) };
    inline vector<UpdateWorkspaceMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<UpdateWorkspaceMembersRequestMembers>) };
    inline UpdateWorkspaceMembersRequest& setMembers(const vector<UpdateWorkspaceMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline UpdateWorkspaceMembersRequest& setMembers(vector<UpdateWorkspaceMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateWorkspaceMembersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateWorkspaceMembersRequestTenantContext) };
    inline UpdateWorkspaceMembersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateWorkspaceMembersRequestTenantContext) };
    inline UpdateWorkspaceMembersRequest& setTenantContext(const UpdateWorkspaceMembersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateWorkspaceMembersRequest& setTenantContext(UpdateWorkspaceMembersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateWorkspaceMembersRequestMembers>> members_ = nullptr;
    std::shared_ptr<UpdateWorkspaceMembersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
