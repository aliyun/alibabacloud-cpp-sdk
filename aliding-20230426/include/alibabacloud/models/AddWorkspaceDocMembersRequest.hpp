// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEDOCMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEDOCMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddWorkspaceDocMembersRequestMembers.hpp>
#include <alibabacloud/models/AddWorkspaceDocMembersRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceDocMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceDocMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddWorkspaceDocMembersRequest() = default ;
    AddWorkspaceDocMembersRequest(const AddWorkspaceDocMembersRequest &) = default ;
    AddWorkspaceDocMembersRequest(AddWorkspaceDocMembersRequest &&) = default ;
    AddWorkspaceDocMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceDocMembersRequest() = default ;
    AddWorkspaceDocMembersRequest& operator=(const AddWorkspaceDocMembersRequest &) = default ;
    AddWorkspaceDocMembersRequest& operator=(AddWorkspaceDocMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->nodeId_ != nullptr && this->tenantContext_ != nullptr && this->workspaceId_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddWorkspaceDocMembersRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<AddWorkspaceDocMembersRequestMembers>) };
    inline vector<AddWorkspaceDocMembersRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<AddWorkspaceDocMembersRequestMembers>) };
    inline AddWorkspaceDocMembersRequest& setMembers(const vector<AddWorkspaceDocMembersRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddWorkspaceDocMembersRequest& setMembers(vector<AddWorkspaceDocMembersRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline AddWorkspaceDocMembersRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddWorkspaceDocMembersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddWorkspaceDocMembersRequestTenantContext) };
    inline AddWorkspaceDocMembersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddWorkspaceDocMembersRequestTenantContext) };
    inline AddWorkspaceDocMembersRequest& setTenantContext(const AddWorkspaceDocMembersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddWorkspaceDocMembersRequest& setTenantContext(AddWorkspaceDocMembersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddWorkspaceDocMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<AddWorkspaceDocMembersRequestMembers>> members_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<AddWorkspaceDocMembersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
