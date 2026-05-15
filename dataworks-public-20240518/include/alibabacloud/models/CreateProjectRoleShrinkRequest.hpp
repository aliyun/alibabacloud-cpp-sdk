// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProjectRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissionsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissionsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateProjectRoleShrinkRequest() = default ;
    CreateProjectRoleShrinkRequest(const CreateProjectRoleShrinkRequest &) = default ;
    CreateProjectRoleShrinkRequest(CreateProjectRoleShrinkRequest &&) = default ;
    CreateProjectRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRoleShrinkRequest() = default ;
    CreateProjectRoleShrinkRequest& operator=(const CreateProjectRoleShrinkRequest &) = default ;
    CreateProjectRoleShrinkRequest& operator=(CreateProjectRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->modulePermissionsShrink_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProjectRoleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // modulePermissionsShrink Field Functions 
    bool hasModulePermissionsShrink() const { return this->modulePermissionsShrink_ != nullptr;};
    void deleteModulePermissionsShrink() { this->modulePermissionsShrink_ = nullptr;};
    inline string getModulePermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(modulePermissionsShrink_, "") };
    inline CreateProjectRoleShrinkRequest& setModulePermissionsShrink(string modulePermissionsShrink) { DARABONBA_PTR_SET_VALUE(modulePermissionsShrink_, modulePermissionsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectRoleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateProjectRoleShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> modulePermissionsShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
