// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTROLEREQUEST_HPP_
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
  class CreateProjectRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateProjectRoleRequest() = default ;
    CreateProjectRoleRequest(const CreateProjectRoleRequest &) = default ;
    CreateProjectRoleRequest(CreateProjectRoleRequest &&) = default ;
    CreateProjectRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRoleRequest() = default ;
    CreateProjectRoleRequest& operator=(const CreateProjectRoleRequest &) = default ;
    CreateProjectRoleRequest& operator=(CreateProjectRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModulePermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModulePermissions& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
        DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      };
      friend void from_json(const Darabonba::Json& j, ModulePermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
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
        && this->permissionType_ == nullptr; };
      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
      inline ModulePermissions& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // permissionType Field Functions 
      bool hasPermissionType() const { return this->permissionType_ != nullptr;};
      void deletePermissionType() { this->permissionType_ = nullptr;};
      inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
      inline ModulePermissions& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    protected:
      shared_ptr<int64_t> moduleId_ {};
      shared_ptr<string> permissionType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->modulePermissions_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProjectRoleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // modulePermissions Field Functions 
    bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
    void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
    inline const vector<CreateProjectRoleRequest::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<CreateProjectRoleRequest::ModulePermissions>) };
    inline vector<CreateProjectRoleRequest::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<CreateProjectRoleRequest::ModulePermissions>) };
    inline CreateProjectRoleRequest& setModulePermissions(const vector<CreateProjectRoleRequest::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
    inline CreateProjectRoleRequest& setModulePermissions(vector<CreateProjectRoleRequest::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectRoleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateProjectRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<CreateProjectRoleRequest::ModulePermissions>> modulePermissions_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
