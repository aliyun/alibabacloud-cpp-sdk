// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkspaceDocMembersRequestMembers.hpp>
#include <alibabacloud/models/UpdateWorkspaceDocMembersRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateWorkspaceDocMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateWorkspaceDocMembersRequest() = default ;
    UpdateWorkspaceDocMembersRequest(const UpdateWorkspaceDocMembersRequest &) = default ;
    UpdateWorkspaceDocMembersRequest(UpdateWorkspaceDocMembersRequest &&) = default ;
    UpdateWorkspaceDocMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceDocMembersRequest() = default ;
    UpdateWorkspaceDocMembersRequest& operator=(const UpdateWorkspaceDocMembersRequest &) = default ;
    UpdateWorkspaceDocMembersRequest& operator=(UpdateWorkspaceDocMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->nodeId_ != nullptr && this->tenantContext_ != nullptr && this->workspaceId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<UpdateWorkspaceDocMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<UpdateWorkspaceDocMembersRequestMembers>) };
    inline vector<UpdateWorkspaceDocMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<UpdateWorkspaceDocMembersRequestMembers>) };
    inline UpdateWorkspaceDocMembersRequest& setMembers(const vector<UpdateWorkspaceDocMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline UpdateWorkspaceDocMembersRequest& setMembers(vector<UpdateWorkspaceDocMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateWorkspaceDocMembersRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateWorkspaceDocMembersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateWorkspaceDocMembersRequestTenantContext) };
    inline UpdateWorkspaceDocMembersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateWorkspaceDocMembersRequestTenantContext) };
    inline UpdateWorkspaceDocMembersRequest& setTenantContext(const UpdateWorkspaceDocMembersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateWorkspaceDocMembersRequest& setTenantContext(UpdateWorkspaceDocMembersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceDocMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<UpdateWorkspaceDocMembersRequestMembers>> members_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<UpdateWorkspaceDocMembersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
