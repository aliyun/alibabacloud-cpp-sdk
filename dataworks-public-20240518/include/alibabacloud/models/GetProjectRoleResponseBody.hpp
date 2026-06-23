// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody(GetProjectRoleResponseBody &&) = default ;
    GetProjectRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody& operator=(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody& operator=(GetProjectRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectRole : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectRole& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectRole& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ProjectRole() = default ;
      ProjectRole(const ProjectRole &) = default ;
      ProjectRole(ProjectRole &&) = default ;
      ProjectRole(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectRole() = default ;
      ProjectRole& operator=(const ProjectRole &) = default ;
      ProjectRole& operator=(ProjectRole &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModulePermissions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModulePermissions& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
        };
        friend void from_json(const Darabonba::Json& j, ModulePermissions& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
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
        virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->moduleName_ == nullptr && this->permissionType_ == nullptr; };
        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
        inline ModulePermissions& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


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


      protected:
        // The module ID.
        shared_ptr<int64_t> moduleId_ {};
        // The module name.
        shared_ptr<string> moduleName_ {};
        // The permission type.
        shared_ptr<string> permissionType_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->modulePermissions_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ProjectRole& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // modulePermissions Field Functions 
      bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
      void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
      inline const vector<ProjectRole::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<ProjectRole::ModulePermissions>) };
      inline vector<ProjectRole::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<ProjectRole::ModulePermissions>) };
      inline ProjectRole& setModulePermissions(const vector<ProjectRole::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
      inline ProjectRole& setModulePermissions(vector<ProjectRole::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProjectRole& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ProjectRole& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProjectRole& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The code of the workspace role.
      shared_ptr<string> code_ {};
      // The permissions for the modules in the workspace.
      shared_ptr<vector<ProjectRole::ModulePermissions>> modulePermissions_ {};
      // The name of the workspace role.
      shared_ptr<string> name_ {};
      // The ID of the DataWorks workspace.
      // 
      // Note: A fixed value of -1 is returned for a system role.
      shared_ptr<int64_t> projectId_ {};
      // The type of the workspace role. Valid values:
      // 
      // - UserCustom: a custom role
      // 
      // - System: a system role
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->projectRole_ == nullptr
        && this->requestId_ == nullptr; };
    // projectRole Field Functions 
    bool hasProjectRole() const { return this->projectRole_ != nullptr;};
    void deleteProjectRole() { this->projectRole_ = nullptr;};
    inline const GetProjectRoleResponseBody::ProjectRole & getProjectRole() const { DARABONBA_PTR_GET_CONST(projectRole_, GetProjectRoleResponseBody::ProjectRole) };
    inline GetProjectRoleResponseBody::ProjectRole getProjectRole() { DARABONBA_PTR_GET(projectRole_, GetProjectRoleResponseBody::ProjectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(const GetProjectRoleResponseBody::ProjectRole & projectRole) { DARABONBA_PTR_SET_VALUE(projectRole_, projectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(GetProjectRoleResponseBody::ProjectRole && projectRole) { DARABONBA_PTR_SET_RVALUE(projectRole_, projectRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the workspace role.
    shared_ptr<GetProjectRoleResponseBody::ProjectRole> projectRole_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
