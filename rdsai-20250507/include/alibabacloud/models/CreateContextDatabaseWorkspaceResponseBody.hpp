// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConsolePermissionMode, consolePermissionMode_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Viewer, viewer_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConsolePermissionMode, consolePermissionMode_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Viewer, viewer_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    CreateContextDatabaseWorkspaceResponseBody() = default ;
    CreateContextDatabaseWorkspaceResponseBody(const CreateContextDatabaseWorkspaceResponseBody &) = default ;
    CreateContextDatabaseWorkspaceResponseBody(CreateContextDatabaseWorkspaceResponseBody &&) = default ;
    CreateContextDatabaseWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseWorkspaceResponseBody() = default ;
    CreateContextDatabaseWorkspaceResponseBody& operator=(const CreateContextDatabaseWorkspaceResponseBody &) = default ;
    CreateContextDatabaseWorkspaceResponseBody& operator=(CreateContextDatabaseWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Viewer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Viewer& obj) { 
        DARABONBA_PTR_TO_JSON(BoundMemberId, boundMemberId_);
        DARABONBA_PTR_TO_JSON(BoundMemberRole, boundMemberRole_);
        DARABONBA_PTR_TO_JSON(BoundMemberStatus, boundMemberStatus_);
        DARABONBA_PTR_TO_JSON(CallerType, callerType_);
        DARABONBA_PTR_TO_JSON(IdentityMode, identityMode_);
        DARABONBA_PTR_TO_JSON(SelectedMemberId, selectedMemberId_);
      };
      friend void from_json(const Darabonba::Json& j, Viewer& obj) { 
        DARABONBA_PTR_FROM_JSON(BoundMemberId, boundMemberId_);
        DARABONBA_PTR_FROM_JSON(BoundMemberRole, boundMemberRole_);
        DARABONBA_PTR_FROM_JSON(BoundMemberStatus, boundMemberStatus_);
        DARABONBA_PTR_FROM_JSON(CallerType, callerType_);
        DARABONBA_PTR_FROM_JSON(IdentityMode, identityMode_);
        DARABONBA_PTR_FROM_JSON(SelectedMemberId, selectedMemberId_);
      };
      Viewer() = default ;
      Viewer(const Viewer &) = default ;
      Viewer(Viewer &&) = default ;
      Viewer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Viewer() = default ;
      Viewer& operator=(const Viewer &) = default ;
      Viewer& operator=(Viewer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->boundMemberId_ == nullptr
        && this->boundMemberRole_ == nullptr && this->boundMemberStatus_ == nullptr && this->callerType_ == nullptr && this->identityMode_ == nullptr && this->selectedMemberId_ == nullptr; };
      // boundMemberId Field Functions 
      bool hasBoundMemberId() const { return this->boundMemberId_ != nullptr;};
      void deleteBoundMemberId() { this->boundMemberId_ = nullptr;};
      inline string getBoundMemberId() const { DARABONBA_PTR_GET_DEFAULT(boundMemberId_, "") };
      inline Viewer& setBoundMemberId(string boundMemberId) { DARABONBA_PTR_SET_VALUE(boundMemberId_, boundMemberId) };


      // boundMemberRole Field Functions 
      bool hasBoundMemberRole() const { return this->boundMemberRole_ != nullptr;};
      void deleteBoundMemberRole() { this->boundMemberRole_ = nullptr;};
      inline string getBoundMemberRole() const { DARABONBA_PTR_GET_DEFAULT(boundMemberRole_, "") };
      inline Viewer& setBoundMemberRole(string boundMemberRole) { DARABONBA_PTR_SET_VALUE(boundMemberRole_, boundMemberRole) };


      // boundMemberStatus Field Functions 
      bool hasBoundMemberStatus() const { return this->boundMemberStatus_ != nullptr;};
      void deleteBoundMemberStatus() { this->boundMemberStatus_ = nullptr;};
      inline string getBoundMemberStatus() const { DARABONBA_PTR_GET_DEFAULT(boundMemberStatus_, "") };
      inline Viewer& setBoundMemberStatus(string boundMemberStatus) { DARABONBA_PTR_SET_VALUE(boundMemberStatus_, boundMemberStatus) };


      // callerType Field Functions 
      bool hasCallerType() const { return this->callerType_ != nullptr;};
      void deleteCallerType() { this->callerType_ = nullptr;};
      inline string getCallerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
      inline Viewer& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


      // identityMode Field Functions 
      bool hasIdentityMode() const { return this->identityMode_ != nullptr;};
      void deleteIdentityMode() { this->identityMode_ = nullptr;};
      inline string getIdentityMode() const { DARABONBA_PTR_GET_DEFAULT(identityMode_, "") };
      inline Viewer& setIdentityMode(string identityMode) { DARABONBA_PTR_SET_VALUE(identityMode_, identityMode) };


      // selectedMemberId Field Functions 
      bool hasSelectedMemberId() const { return this->selectedMemberId_ != nullptr;};
      void deleteSelectedMemberId() { this->selectedMemberId_ = nullptr;};
      inline string getSelectedMemberId() const { DARABONBA_PTR_GET_DEFAULT(selectedMemberId_, "") };
      inline Viewer& setSelectedMemberId(string selectedMemberId) { DARABONBA_PTR_SET_VALUE(selectedMemberId_, selectedMemberId) };


    protected:
      // The ID of the workspace member bound in the identity information of the current call. This field is optional and is empty if no bound member information is provided.
      shared_ptr<string> boundMemberId_ {};
      // The role of the bound member in the workspace, such as `Owner`. This field is optional and is empty if no bound member role information is provided.
      shared_ptr<string> boundMemberRole_ {};
      // The status of the bound member, such as `active`. This field is optional and is empty if no bound member status information is provided.
      shared_ptr<string> boundMemberStatus_ {};
      // The account type of the caller for the current call, such as `customer`. This field describes the caller account and does not represent the role of the workspace member.
      shared_ptr<string> callerType_ {};
      // The identity parsing mode for the current call. Valid values:
      // - `account_compatibility`: The account compatibility identity mode.
      // - `bound_member`: The bound member identity mode.
      // 
      // The identity parsing mode and the permission mode of the workspace are different concepts. You cannot infer whether advanced permissions are enabled for the workspace based on this field.
      shared_ptr<string> identityMode_ {};
      // The ID of the workspace member selected in the account compatibility identity mode. This field is optional and is empty if no member is selected for the current call. This field and the bound member ID represent the member selection result and the binding relationship, respectively.
      shared_ptr<string> selectedMemberId_ {};
    };

    class Capabilities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
        DARABONBA_PTR_TO_JSON(ExecutableActions, executableActions_);
      };
      friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecutableActions, executableActions_);
      };
      Capabilities() = default ;
      Capabilities(const Capabilities &) = default ;
      Capabilities(Capabilities &&) = default ;
      Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Capabilities() = default ;
      Capabilities& operator=(const Capabilities &) = default ;
      Capabilities& operator=(Capabilities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->executableActions_ == nullptr; };
      // executableActions Field Functions 
      bool hasExecutableActions() const { return this->executableActions_ != nullptr;};
      void deleteExecutableActions() { this->executableActions_ = nullptr;};
      inline const vector<string> & getExecutableActions() const { DARABONBA_PTR_GET_CONST(executableActions_, vector<string>) };
      inline vector<string> getExecutableActions() { DARABONBA_PTR_GET(executableActions_, vector<string>) };
      inline Capabilities& setExecutableActions(const vector<string> & executableActions) { DARABONBA_PTR_SET_VALUE(executableActions_, executableActions) };
      inline Capabilities& setExecutableActions(vector<string> && executableActions) { DARABONBA_PTR_SET_RVALUE(executableActions_, executableActions) };


    protected:
      // The list of operation names that the account compatibility adapter can perform. The list content does not represent read/write, member group, or access control authorization for specific resources.
      shared_ptr<vector<string>> executableActions_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiKeyName_ == nullptr && this->capabilities_ == nullptr && this->clusterId_ == nullptr && this->consolePermissionMode_ == nullptr && this->createdAt_ == nullptr
        && this->memberId_ == nullptr && this->memberName_ == nullptr && this->permissionMode_ == nullptr && this->requestId_ == nullptr && this->role_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->viewer_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const CreateContextDatabaseWorkspaceResponseBody::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, CreateContextDatabaseWorkspaceResponseBody::Capabilities) };
    inline CreateContextDatabaseWorkspaceResponseBody::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, CreateContextDatabaseWorkspaceResponseBody::Capabilities) };
    inline CreateContextDatabaseWorkspaceResponseBody& setCapabilities(const CreateContextDatabaseWorkspaceResponseBody::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline CreateContextDatabaseWorkspaceResponseBody& setCapabilities(CreateContextDatabaseWorkspaceResponseBody::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // consolePermissionMode Field Functions 
    bool hasConsolePermissionMode() const { return this->consolePermissionMode_ != nullptr;};
    void deleteConsolePermissionMode() { this->consolePermissionMode_ = nullptr;};
    inline string getConsolePermissionMode() const { DARABONBA_PTR_GET_DEFAULT(consolePermissionMode_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setConsolePermissionMode(string consolePermissionMode) { DARABONBA_PTR_SET_VALUE(consolePermissionMode_, consolePermissionMode) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // permissionMode Field Functions 
    bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
    void deletePermissionMode() { this->permissionMode_ = nullptr;};
    inline string getPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // viewer Field Functions 
    bool hasViewer() const { return this->viewer_ != nullptr;};
    void deleteViewer() { this->viewer_ = nullptr;};
    inline const CreateContextDatabaseWorkspaceResponseBody::Viewer & getViewer() const { DARABONBA_PTR_GET_CONST(viewer_, CreateContextDatabaseWorkspaceResponseBody::Viewer) };
    inline CreateContextDatabaseWorkspaceResponseBody::Viewer getViewer() { DARABONBA_PTR_GET(viewer_, CreateContextDatabaseWorkspaceResponseBody::Viewer) };
    inline CreateContextDatabaseWorkspaceResponseBody& setViewer(const CreateContextDatabaseWorkspaceResponseBody::Viewer & viewer) { DARABONBA_PTR_SET_VALUE(viewer_, viewer) };
    inline CreateContextDatabaseWorkspaceResponseBody& setViewer(CreateContextDatabaseWorkspaceResponseBody::Viewer && viewer) { DARABONBA_PTR_SET_RVALUE(viewer_, viewer) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateContextDatabaseWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The plaintext of the first API key. It is returned only once during creation. Save the key properly. If GenerateInitialKey is set to `false`, this field is empty.
    shared_ptr<string> apiKey_ {};
    // The name of the first API key. The name is `default` when the key is generated. If GenerateInitialKey is set to `false`, this field is empty.
    shared_ptr<string> apiKeyName_ {};
    // The account-level capability information for the current call. It only indicates the operations that the account compatibility adapter can perform and does not represent resource-level authorization. This field is optional and is not returned if no account-level executable operations are provided.
    shared_ptr<CreateContextDatabaseWorkspaceResponseBody::Capabilities> capabilities_ {};
    // The ID of the cluster to which the workspace belongs. `default` is returned for a shared cluster, and the corresponding cluster ID is returned for a dedicated cluster.
    shared_ptr<string> clusterId_ {};
    // The permission mode used by the server to parse the identity of the current call. Valid values:
    // - `personal_compatibility`: The compatibility mode.
    // - `advanced`: The advanced permission mode.
    // 
    // This field describes the identity context of the current call. The actual permission mode of the workspace is subject to PermissionMode. Creating a workspace uses the account-level identity context, so this field may be empty.
    shared_ptr<string> consolePermissionMode_ {};
    // The creation time in ISO 8601 format.
    shared_ptr<string> createdAt_ {};
    // The ID of the first member.
    shared_ptr<string> memberId_ {};
    // The name of the first member.
    shared_ptr<string> memberName_ {};
    // The permission mode that actually takes effect after the workspace is created. A lowercase string is returned.
    // - `personal_compatibility`: The compatibility mode, which corresponds to the request value `compatibility`.
    // - `advanced`: The advanced permission mode.
    // 
    // This field is optional. If it is not returned in the response, call GetContextDatabaseWorkspace to query the workspace details and confirm the actual mode. Do not recreate the workspace simply because this field is missing.
    shared_ptr<string> permissionMode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The role of the first member, which is fixed to owner.
    shared_ptr<string> role_ {};
    // The status of the workspace (Active: running normally; Locked: stopped due to overdue payments or locked due to expiration).
    shared_ptr<string> status_ {};
    // The type of the workspace (personal: individual, enterprise: enterprise).
    shared_ptr<string> type_ {};
    // The viewer identity information for the current call, including the identity parsing mode, caller account type, and member information. Member-related fields are optional.
    shared_ptr<CreateContextDatabaseWorkspaceResponseBody::Viewer> viewer_ {};
    // The ID of the new workspace.
    shared_ptr<string> workspaceId_ {};
    // The name of the workspace.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
