// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEROLEREQUEST_HPP_
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
  class UpdateWorkspaceRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    UpdateWorkspaceRoleRequest() = default ;
    UpdateWorkspaceRoleRequest(const UpdateWorkspaceRoleRequest &) = default ;
    UpdateWorkspaceRoleRequest(UpdateWorkspaceRoleRequest &&) = default ;
    UpdateWorkspaceRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRoleRequest() = default ;
    UpdateWorkspaceRoleRequest& operator=(const UpdateWorkspaceRoleRequest &) = default ;
    UpdateWorkspaceRoleRequest& operator=(UpdateWorkspaceRoleRequest &&) = default ;
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

    virtual bool empty() const override { return this->modulePermissions_ == nullptr
        && this->roleName_ == nullptr; };
    // modulePermissions Field Functions 
    bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
    void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
    inline const vector<UpdateWorkspaceRoleRequest::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<UpdateWorkspaceRoleRequest::ModulePermissions>) };
    inline vector<UpdateWorkspaceRoleRequest::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<UpdateWorkspaceRoleRequest::ModulePermissions>) };
    inline UpdateWorkspaceRoleRequest& setModulePermissions(const vector<UpdateWorkspaceRoleRequest::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
    inline UpdateWorkspaceRoleRequest& setModulePermissions(vector<UpdateWorkspaceRoleRequest::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateWorkspaceRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The permission settings for the role.
    shared_ptr<vector<UpdateWorkspaceRoleRequest::ModulePermissions>> modulePermissions_ {};
    // The name of the custom role. The name must be unique within the workspace. It can be up to 64 characters long and can contain letters, digits, underscores (_), and hyphens (-).
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
