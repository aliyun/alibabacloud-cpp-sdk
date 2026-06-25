// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetWorkspaceRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWorkspaceRoleResponseBody() = default ;
    GetWorkspaceRoleResponseBody(const GetWorkspaceRoleResponseBody &) = default ;
    GetWorkspaceRoleResponseBody(GetWorkspaceRoleResponseBody &&) = default ;
    GetWorkspaceRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceRoleResponseBody() = default ;
    GetWorkspaceRoleResponseBody& operator=(const GetWorkspaceRoleResponseBody &) = default ;
    GetWorkspaceRoleResponseBody& operator=(GetWorkspaceRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModulePermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModulePermissions& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
        DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      };
      friend void from_json(const Darabonba::Json& j, ModulePermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
        DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      };
      ModulePermissions() = default ;
      ModulePermissions(const ModulePermissions &) = default ;
      ModulePermissions(ModulePermissions &&) = default ;
      ModulePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModulePermissions() = default ;
      ModulePermissions& operator=(const ModulePermissions &) = default ;
      ModulePermissions& operator=(ModulePermissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Permissions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
          DARABONBA_PTR_TO_JSON(PermissionCodes, permissionCodes_);
          DARABONBA_PTR_TO_JSON(PermissionRules, permissionRules_);
        };
        friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
          DARABONBA_PTR_FROM_JSON(PermissionCodes, permissionCodes_);
          DARABONBA_PTR_FROM_JSON(PermissionRules, permissionRules_);
        };
        Permissions() = default ;
        Permissions(const Permissions &) = default ;
        Permissions(Permissions &&) = default ;
        Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Permissions() = default ;
        Permissions& operator=(const Permissions &) = default ;
        Permissions& operator=(Permissions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PermissionRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PermissionRules& obj) { 
            DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
            DARABONBA_PTR_TO_JSON(EntityAccessType, entityAccessType_);
          };
          friend void from_json(const Darabonba::Json& j, PermissionRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
            DARABONBA_PTR_FROM_JSON(EntityAccessType, entityAccessType_);
          };
          PermissionRules() = default ;
          PermissionRules(const PermissionRules &) = default ;
          PermissionRules(PermissionRules &&) = default ;
          PermissionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PermissionRules() = default ;
          PermissionRules& operator=(const PermissionRules &) = default ;
          PermissionRules& operator=(PermissionRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->entityAccessType_ == nullptr; };
          // accessibility Field Functions 
          bool hasAccessibility() const { return this->accessibility_ != nullptr;};
          void deleteAccessibility() { this->accessibility_ = nullptr;};
          inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
          inline PermissionRules& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


          // entityAccessType Field Functions 
          bool hasEntityAccessType() const { return this->entityAccessType_ != nullptr;};
          void deleteEntityAccessType() { this->entityAccessType_ = nullptr;};
          inline string getEntityAccessType() const { DARABONBA_PTR_GET_DEFAULT(entityAccessType_, "") };
          inline PermissionRules& setEntityAccessType(string entityAccessType) { DARABONBA_PTR_SET_VALUE(entityAccessType_, entityAccessType) };


        protected:
          // The access type. Valid values are:
          // 
          // - PUBLIC: All members in the current workspace can perform this action.
          // 
          // - PRIVATE: Only the creator can perform this action.
          // 
          // - ANY: Both the creator and non-creators can perform this action.
          shared_ptr<string> accessibility_ {};
          // The entity access type. This parameter is ignored if `Accessibility` is set to `PUBLIC`. If `Accessibility` is set to `PRIVATE`, the value of this parameter determines the permissions. Valid values are:
          // 
          // - CREATOR: Only the creator can perform this action.
          // 
          // - ANY: Both the creator and non-creators can perform this action.
          shared_ptr<string> entityAccessType_ {};
        };

        virtual bool empty() const override { return this->permissionCodes_ == nullptr
        && this->permissionRules_ == nullptr; };
        // permissionCodes Field Functions 
        bool hasPermissionCodes() const { return this->permissionCodes_ != nullptr;};
        void deletePermissionCodes() { this->permissionCodes_ = nullptr;};
        inline const vector<string> & getPermissionCodes() const { DARABONBA_PTR_GET_CONST(permissionCodes_, vector<string>) };
        inline vector<string> getPermissionCodes() { DARABONBA_PTR_GET(permissionCodes_, vector<string>) };
        inline Permissions& setPermissionCodes(const vector<string> & permissionCodes) { DARABONBA_PTR_SET_VALUE(permissionCodes_, permissionCodes) };
        inline Permissions& setPermissionCodes(vector<string> && permissionCodes) { DARABONBA_PTR_SET_RVALUE(permissionCodes_, permissionCodes) };


        // permissionRules Field Functions 
        bool hasPermissionRules() const { return this->permissionRules_ != nullptr;};
        void deletePermissionRules() { this->permissionRules_ = nullptr;};
        inline const vector<Permissions::PermissionRules> & getPermissionRules() const { DARABONBA_PTR_GET_CONST(permissionRules_, vector<Permissions::PermissionRules>) };
        inline vector<Permissions::PermissionRules> getPermissionRules() { DARABONBA_PTR_GET(permissionRules_, vector<Permissions::PermissionRules>) };
        inline Permissions& setPermissionRules(const vector<Permissions::PermissionRules> & permissionRules) { DARABONBA_PTR_SET_VALUE(permissionRules_, permissionRules) };
        inline Permissions& setPermissionRules(vector<Permissions::PermissionRules> && permissionRules) { DARABONBA_PTR_SET_RVALUE(permissionRules_, permissionRules) };


      protected:
        // A list of permissions.
        shared_ptr<vector<string>> permissionCodes_ {};
        // A list of permission rules.
        shared_ptr<vector<Permissions::PermissionRules>> permissionRules_ {};
      };

      virtual bool empty() const override { return this->moduleName_ == nullptr
        && this->permissionType_ == nullptr && this->permissions_ == nullptr; };
      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ModulePermissions& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // permissionType Field Functions 
      bool hasPermissionType() const { return this->permissionType_ != nullptr;};
      void deletePermissionType() { this->permissionType_ = nullptr;};
      inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
      inline ModulePermissions& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<ModulePermissions::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<ModulePermissions::Permissions>) };
      inline vector<ModulePermissions::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<ModulePermissions::Permissions>) };
      inline ModulePermissions& setPermissions(const vector<ModulePermissions::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline ModulePermissions& setPermissions(vector<ModulePermissions::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    protected:
      // The module name. Valid values are:
      // 
      // - PaiDesigner: PAI-Designer
      // 
      // - Paiflow: workflow
      // 
      // - DSW: PAI-DSW
      // 
      // - DLC: PAI-DLC
      // 
      // - Dataset: dataset
      // 
      // - Model: model
      // 
      // - Image: image
      // 
      // - CodeSource: code source
      // 
      // - PaiWorkspace@@Workspace: Basic workspace information
      // 
      // - PaiWorkspace@@MemberRole: workspace member management
      // 
      // - PaiWorkspace@@Resource: workspace computing resource management
      // 
      // - PaiWorkspace@@Config: workspace configuration center
      // 
      // - ArtLab: ArtLab
      shared_ptr<string> moduleName_ {};
      // The permission type. Valid values are:
      // 
      // - ReadOnly: read-only access.
      // 
      // - ReadWrite: Allows users to edit and run.
      // 
      // - FullAccess: full control.
      // 
      // - NoPrivilege: no permissions.
      // 
      // - CustomPermissions: custom permissions.
      shared_ptr<string> permissionType_ {};
      // The permissions. This parameter is required and applies only when `PermissionType` is set to `CustomPermissions`.
      shared_ptr<vector<ModulePermissions::Permissions>> permissions_ {};
    };

    virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->modulePermissions_ == nullptr && this->requestId_ == nullptr && this->roleId_ == nullptr
        && this->roleName_ == nullptr && this->status_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetWorkspaceRoleResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetWorkspaceRoleResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetWorkspaceRoleResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // modulePermissions Field Functions 
    bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
    void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
    inline const vector<GetWorkspaceRoleResponseBody::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<GetWorkspaceRoleResponseBody::ModulePermissions>) };
    inline vector<GetWorkspaceRoleResponseBody::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<GetWorkspaceRoleResponseBody::ModulePermissions>) };
    inline GetWorkspaceRoleResponseBody& setModulePermissions(const vector<GetWorkspaceRoleResponseBody::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
    inline GetWorkspaceRoleResponseBody& setModulePermissions(vector<GetWorkspaceRoleResponseBody::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline GetWorkspaceRoleResponseBody& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetWorkspaceRoleResponseBody& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkspaceRoleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The Alibaba Cloud account UID of the creator.
    shared_ptr<string> creator_ {};
    // The time when the role was created. It is specified in UTC and formatted in ISO 8601.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the role was last modified. It is specified in UTC and formatted in ISO 8601.
    shared_ptr<string> gmtModifiedTime_ {};
    // The permission configuration of the role.
    shared_ptr<vector<GetWorkspaceRoleResponseBody::ModulePermissions>> modulePermissions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The role ID.
    shared_ptr<string> roleId_ {};
    // The role name.
    shared_ptr<string> roleName_ {};
    // The task status. Valid values:
    // 
    // - `Creating`: The role is being created.
    // 
    // - `Updating`: The role is being updated.
    // 
    // - `Deleting`: The role is being deleted.
    // 
    // - `Succeeded`: The task succeeded.
    // 
    // - `Failed`: The task failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
