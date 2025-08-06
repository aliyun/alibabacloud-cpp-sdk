// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteWorkspaceMembersRequestMembers.hpp>
#include <alibabacloud/models/DeleteWorkspaceMembersRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteWorkspaceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteWorkspaceMembersRequest() = default ;
    DeleteWorkspaceMembersRequest(const DeleteWorkspaceMembersRequest &) = default ;
    DeleteWorkspaceMembersRequest(DeleteWorkspaceMembersRequest &&) = default ;
    DeleteWorkspaceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceMembersRequest() = default ;
    DeleteWorkspaceMembersRequest& operator=(const DeleteWorkspaceMembersRequest &) = default ;
    DeleteWorkspaceMembersRequest& operator=(DeleteWorkspaceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->tenantContext_ != nullptr && this->workspaceId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DeleteWorkspaceMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<DeleteWorkspaceMembersRequestMembers>) };
    inline vector<DeleteWorkspaceMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<DeleteWorkspaceMembersRequestMembers>) };
    inline DeleteWorkspaceMembersRequest& setMembers(const vector<DeleteWorkspaceMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DeleteWorkspaceMembersRequest& setMembers(vector<DeleteWorkspaceMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteWorkspaceMembersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteWorkspaceMembersRequestTenantContext) };
    inline DeleteWorkspaceMembersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteWorkspaceMembersRequestTenantContext) };
    inline DeleteWorkspaceMembersRequest& setTenantContext(const DeleteWorkspaceMembersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteWorkspaceMembersRequest& setTenantContext(DeleteWorkspaceMembersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteWorkspaceMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DeleteWorkspaceMembersRequestMembers>> members_ = nullptr;
    std::shared_ptr<DeleteWorkspaceMembersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
