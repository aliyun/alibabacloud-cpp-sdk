// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASEWORKSPACERESPONSEBODY_HPP_
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
  class UpdateContextDatabaseWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextDatabaseWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConsolePermissionMode, consolePermissionMode_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Viewer, viewer_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextDatabaseWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConsolePermissionMode, consolePermissionMode_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Viewer, viewer_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    UpdateContextDatabaseWorkspaceResponseBody() = default ;
    UpdateContextDatabaseWorkspaceResponseBody(const UpdateContextDatabaseWorkspaceResponseBody &) = default ;
    UpdateContextDatabaseWorkspaceResponseBody(UpdateContextDatabaseWorkspaceResponseBody &&) = default ;
    UpdateContextDatabaseWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextDatabaseWorkspaceResponseBody() = default ;
    UpdateContextDatabaseWorkspaceResponseBody& operator=(const UpdateContextDatabaseWorkspaceResponseBody &) = default ;
    UpdateContextDatabaseWorkspaceResponseBody& operator=(UpdateContextDatabaseWorkspaceResponseBody &&) = default ;
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
      // The ID of the bound workspace member in the identity information of the current request. Optional. This field is empty if no bound member information is provided.
      shared_ptr<string> boundMemberId_ {};
      // The role of the bound member in the workspace, such as `Owner`. Optional. This field is empty if no bound member role information is provided.
      shared_ptr<string> boundMemberRole_ {};
      // The status of the bound member, such as `active`. Optional. This field is empty if no bound member status information is provided.
      shared_ptr<string> boundMemberStatus_ {};
      // The account type of the caller for the current request, such as `customer`. This field describes the caller account and does not indicate the role of a workspace member.
      shared_ptr<string> callerType_ {};
      // The identity resolution mode of the current request. Valid values:
      // - `account_compatibility`: account compatibility identity mode.
      // - `bound_member`: bound member identity mode.
      // 
      // The identity resolution mode and the workspace permission mode are different concepts. You cannot infer whether advanced permissions are enabled for the workspace based on this field.
      shared_ptr<string> identityMode_ {};
      // The ID of the selected workspace member in the account compatibility identity mode. Optional. This field is empty if no member is selected for the current request. This field and the bound member ID represent the member selection result and the binding relationship, respectively.
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

    virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->clusterId_ == nullptr && this->consolePermissionMode_ == nullptr && this->createdAt_ == nullptr && this->permissionMode_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->viewer_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const UpdateContextDatabaseWorkspaceResponseBody::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, UpdateContextDatabaseWorkspaceResponseBody::Capabilities) };
    inline UpdateContextDatabaseWorkspaceResponseBody::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, UpdateContextDatabaseWorkspaceResponseBody::Capabilities) };
    inline UpdateContextDatabaseWorkspaceResponseBody& setCapabilities(const UpdateContextDatabaseWorkspaceResponseBody::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline UpdateContextDatabaseWorkspaceResponseBody& setCapabilities(UpdateContextDatabaseWorkspaceResponseBody::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // consolePermissionMode Field Functions 
    bool hasConsolePermissionMode() const { return this->consolePermissionMode_ != nullptr;};
    void deleteConsolePermissionMode() { this->consolePermissionMode_ = nullptr;};
    inline string getConsolePermissionMode() const { DARABONBA_PTR_GET_DEFAULT(consolePermissionMode_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setConsolePermissionMode(string consolePermissionMode) { DARABONBA_PTR_SET_VALUE(consolePermissionMode_, consolePermissionMode) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // permissionMode Field Functions 
    bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
    void deletePermissionMode() { this->permissionMode_ = nullptr;};
    inline string getPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // viewer Field Functions 
    bool hasViewer() const { return this->viewer_ != nullptr;};
    void deleteViewer() { this->viewer_ = nullptr;};
    inline const UpdateContextDatabaseWorkspaceResponseBody::Viewer & getViewer() const { DARABONBA_PTR_GET_CONST(viewer_, UpdateContextDatabaseWorkspaceResponseBody::Viewer) };
    inline UpdateContextDatabaseWorkspaceResponseBody::Viewer getViewer() { DARABONBA_PTR_GET(viewer_, UpdateContextDatabaseWorkspaceResponseBody::Viewer) };
    inline UpdateContextDatabaseWorkspaceResponseBody& setViewer(const UpdateContextDatabaseWorkspaceResponseBody::Viewer & viewer) { DARABONBA_PTR_SET_VALUE(viewer_, viewer) };
    inline UpdateContextDatabaseWorkspaceResponseBody& setViewer(UpdateContextDatabaseWorkspaceResponseBody::Viewer && viewer) { DARABONBA_PTR_SET_RVALUE(viewer_, viewer) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline UpdateContextDatabaseWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The account-level capability information of the current request. It only indicates the operations that the account compatibility adapter can perform and does not represent resource-level authorization. This field is optional and is not returned if no account-level executable operations are provided.
    shared_ptr<UpdateContextDatabaseWorkspaceResponseBody::Capabilities> capabilities_ {};
    // The ID of the cluster to which the workspace belongs. For shared clusters, `default` is returned. For dedicated clusters, the corresponding cluster ID is returned.
    shared_ptr<string> clusterId_ {};
    // The permission mode used by the server to parse the identity of the current request. Valid values:
    // - `personal_compatibility`: compatibility mode.
    // - `advanced`: advanced permission mode.
    // 
    // This field describes the identity context of the current request. For the actual permission mode of the workspace, refer to PermissionMode.
    shared_ptr<string> consolePermissionMode_ {};
    // The creation time in ISO 8601 format.
    shared_ptr<string> createdAt_ {};
    // The permission mode of the workspace. Valid values:
    // - `personal_compatibility`: compatibility mode.
    // - `advanced`: advanced permission mode.
    shared_ptr<string> permissionMode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The workspace status.
    shared_ptr<string> status_ {};
    // The workspace type.
    shared_ptr<string> type_ {};
    // The viewer identity information of the current request, including the identity resolution mode, caller account type, and member information. Member-related fields are optional.
    shared_ptr<UpdateContextDatabaseWorkspaceResponseBody::Viewer> viewer_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The updated name of the workspace.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
