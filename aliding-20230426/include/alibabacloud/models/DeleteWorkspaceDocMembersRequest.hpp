// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEDOCMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEDOCMEMBERSREQUEST_HPP_
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
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
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
        && this->memberType_ == nullptr; };
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


    protected:
      // This parameter is required.
      shared_ptr<string> memberId_ {};
      // This parameter is required.
      shared_ptr<string> memberType_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr
        && this->nodeId_ == nullptr && this->tenantContext_ == nullptr && this->workspaceId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DeleteWorkspaceDocMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<DeleteWorkspaceDocMembersRequest::Members>) };
    inline vector<DeleteWorkspaceDocMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<DeleteWorkspaceDocMembersRequest::Members>) };
    inline DeleteWorkspaceDocMembersRequest& setMembers(const vector<DeleteWorkspaceDocMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DeleteWorkspaceDocMembersRequest& setMembers(vector<DeleteWorkspaceDocMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DeleteWorkspaceDocMembersRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteWorkspaceDocMembersRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteWorkspaceDocMembersRequest::TenantContext) };
    inline DeleteWorkspaceDocMembersRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteWorkspaceDocMembersRequest::TenantContext) };
    inline DeleteWorkspaceDocMembersRequest& setTenantContext(const DeleteWorkspaceDocMembersRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteWorkspaceDocMembersRequest& setTenantContext(DeleteWorkspaceDocMembersRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteWorkspaceDocMembersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<DeleteWorkspaceDocMembersRequest::Members>> members_ {};
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<DeleteWorkspaceDocMembersRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
