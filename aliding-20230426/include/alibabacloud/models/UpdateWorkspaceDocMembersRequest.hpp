// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEDOCMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberId_ == nullptr
        && this->memberType_ == nullptr && this->roleType_ == nullptr; };
      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Members& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline Members& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Members& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      shared_ptr<string> memberId_ {};
      shared_ptr<string> memberType_ {};
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr
        && this->nodeId_ == nullptr && this->tenantContext_ == nullptr && this->workspaceId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<UpdateWorkspaceDocMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<UpdateWorkspaceDocMembersRequest::Members>) };
    inline vector<UpdateWorkspaceDocMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<UpdateWorkspaceDocMembersRequest::Members>) };
    inline UpdateWorkspaceDocMembersRequest& setMembers(const vector<UpdateWorkspaceDocMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline UpdateWorkspaceDocMembersRequest& setMembers(vector<UpdateWorkspaceDocMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateWorkspaceDocMembersRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateWorkspaceDocMembersRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateWorkspaceDocMembersRequest::TenantContext) };
    inline UpdateWorkspaceDocMembersRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateWorkspaceDocMembersRequest::TenantContext) };
    inline UpdateWorkspaceDocMembersRequest& setTenantContext(const UpdateWorkspaceDocMembersRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateWorkspaceDocMembersRequest& setTenantContext(UpdateWorkspaceDocMembersRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceDocMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<UpdateWorkspaceDocMembersRequest::Members>> members_ {};
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<UpdateWorkspaceDocMembersRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
