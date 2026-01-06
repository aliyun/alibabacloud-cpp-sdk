// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateWorkspaceDocMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceDocMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, membersShrink_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceDocMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, membersShrink_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateWorkspaceDocMembersShrinkRequest() = default ;
    UpdateWorkspaceDocMembersShrinkRequest(const UpdateWorkspaceDocMembersShrinkRequest &) = default ;
    UpdateWorkspaceDocMembersShrinkRequest(UpdateWorkspaceDocMembersShrinkRequest &&) = default ;
    UpdateWorkspaceDocMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceDocMembersShrinkRequest() = default ;
    UpdateWorkspaceDocMembersShrinkRequest& operator=(const UpdateWorkspaceDocMembersShrinkRequest &) = default ;
    UpdateWorkspaceDocMembersShrinkRequest& operator=(UpdateWorkspaceDocMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->membersShrink_ == nullptr
        && this->nodeId_ == nullptr && this->tenantContextShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // membersShrink Field Functions 
    bool hasMembersShrink() const { return this->membersShrink_ != nullptr;};
    void deleteMembersShrink() { this->membersShrink_ = nullptr;};
    inline string getMembersShrink() const { DARABONBA_PTR_GET_DEFAULT(membersShrink_, "") };
    inline UpdateWorkspaceDocMembersShrinkRequest& setMembersShrink(string membersShrink) { DARABONBA_PTR_SET_VALUE(membersShrink_, membersShrink) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateWorkspaceDocMembersShrinkRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateWorkspaceDocMembersShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceDocMembersShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> membersShrink_ {};
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
