// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEDOCMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEDOCMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteWorkspaceDocMembersRequestMembers.hpp>
#include <alibabacloud/models/DeleteWorkspaceDocMembersRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteWorkspaceDocMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteWorkspaceDocMembersRequest() = default ;
    DeleteWorkspaceDocMembersRequest(const DeleteWorkspaceDocMembersRequest &) = default ;
    DeleteWorkspaceDocMembersRequest(DeleteWorkspaceDocMembersRequest &&) = default ;
    DeleteWorkspaceDocMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceDocMembersRequest() = default ;
    DeleteWorkspaceDocMembersRequest& operator=(const DeleteWorkspaceDocMembersRequest &) = default ;
    DeleteWorkspaceDocMembersRequest& operator=(DeleteWorkspaceDocMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->members_ == nullptr
        && return this->nodeId_ == nullptr && return this->tenantContext_ == nullptr && return this->workspaceId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DeleteWorkspaceDocMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<DeleteWorkspaceDocMembersRequestMembers>) };
    inline vector<DeleteWorkspaceDocMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<DeleteWorkspaceDocMembersRequestMembers>) };
    inline DeleteWorkspaceDocMembersRequest& setMembers(const vector<DeleteWorkspaceDocMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DeleteWorkspaceDocMembersRequest& setMembers(vector<DeleteWorkspaceDocMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DeleteWorkspaceDocMembersRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteWorkspaceDocMembersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteWorkspaceDocMembersRequestTenantContext) };
    inline DeleteWorkspaceDocMembersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteWorkspaceDocMembersRequestTenantContext) };
    inline DeleteWorkspaceDocMembersRequest& setTenantContext(const DeleteWorkspaceDocMembersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteWorkspaceDocMembersRequest& setTenantContext(DeleteWorkspaceDocMembersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteWorkspaceDocMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DeleteWorkspaceDocMembersRequestMembers>> members_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<DeleteWorkspaceDocMembersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
