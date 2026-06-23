// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTROLEREQUEST_HPP_
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
  class UpdateProjectRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateProjectRoleRequest() = default ;
    UpdateProjectRoleRequest(const UpdateProjectRoleRequest &) = default ;
    UpdateProjectRoleRequest(UpdateProjectRoleRequest &&) = default ;
    UpdateProjectRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectRoleRequest() = default ;
    UpdateProjectRoleRequest& operator=(const UpdateProjectRoleRequest &) = default ;
    UpdateProjectRoleRequest& operator=(UpdateProjectRoleRequest &&) = default ;
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
      // The DataWorks module ID. Valid values:
      // 
      // - 2: HoloStudio
      // 
      // - 3: StreamStudio
      // 
      // - 4: Deployment Center
      // 
      // - 6: Data Security Guard
      // 
      // - 7: Data Map
      // 
      // - 8: Data Service
      // 
      // - 9: Data Integration
      // 
      // - 10: Data Modeling (DataBlau DDM)
      // 
      // - 11: Data Studio
      // 
      // - 12: Data Quality
      // 
      // - 13: Data Governance
      // 
      // - 14: Operation Center
      // 
      // - 15: Resource Optimization
      // 
      // - 16: Migration Assistant
      // 
      // - 17: Data Analysis
      // 
      // - 18: Approval Center
      // 
      // - 19: Security Center
      // 
      // - 20: Intelligent Data Modeling
      shared_ptr<int64_t> moduleId_ {};
      // The permission type. Valid values:
      // 
      // - Write: Read-only
      // 
      // - Read: Edit
      // 
      // - NotSet: Not controlled
      shared_ptr<string> permissionType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->modulePermissions_ == nullptr && this->projectId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProjectRoleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateProjectRoleRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // modulePermissions Field Functions 
    bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
    void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
    inline const vector<UpdateProjectRoleRequest::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<UpdateProjectRoleRequest::ModulePermissions>) };
    inline vector<UpdateProjectRoleRequest::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<UpdateProjectRoleRequest::ModulePermissions>) };
    inline UpdateProjectRoleRequest& setModulePermissions(const vector<UpdateProjectRoleRequest::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
    inline UpdateProjectRoleRequest& setModulePermissions(vector<UpdateProjectRoleRequest::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateProjectRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // A reserved parameter.
    shared_ptr<string> clientToken_ {};
    // The unique identifier of the custom role.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The list of DataWorks module permissions.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateProjectRoleRequest::ModulePermissions>> modulePermissions_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the workspace management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace on which the API operation is performed.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
