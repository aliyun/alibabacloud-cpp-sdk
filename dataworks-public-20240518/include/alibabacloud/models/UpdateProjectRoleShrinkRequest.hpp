// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateProjectRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissionsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissionsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateProjectRoleShrinkRequest() = default ;
    UpdateProjectRoleShrinkRequest(const UpdateProjectRoleShrinkRequest &) = default ;
    UpdateProjectRoleShrinkRequest(UpdateProjectRoleShrinkRequest &&) = default ;
    UpdateProjectRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectRoleShrinkRequest() = default ;
    UpdateProjectRoleShrinkRequest& operator=(const UpdateProjectRoleShrinkRequest &) = default ;
    UpdateProjectRoleShrinkRequest& operator=(UpdateProjectRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->modulePermissionsShrink_ == nullptr && this->projectId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProjectRoleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateProjectRoleShrinkRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // modulePermissionsShrink Field Functions 
    bool hasModulePermissionsShrink() const { return this->modulePermissionsShrink_ != nullptr;};
    void deleteModulePermissionsShrink() { this->modulePermissionsShrink_ = nullptr;};
    inline string getModulePermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(modulePermissionsShrink_, "") };
    inline UpdateProjectRoleShrinkRequest& setModulePermissionsShrink(string modulePermissionsShrink) { DARABONBA_PTR_SET_VALUE(modulePermissionsShrink_, modulePermissionsShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateProjectRoleShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


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
    shared_ptr<string> modulePermissionsShrink_ {};
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
