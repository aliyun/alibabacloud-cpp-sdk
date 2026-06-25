// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
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
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->envTypes_ == nullptr && this->resourceGroupId_ == nullptr && this->workspaceName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkspaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateWorkspaceRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & getEnvTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> getEnvTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline CreateWorkspaceRequest& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline CreateWorkspaceRequest& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateWorkspaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The description of the workspace. The description cannot exceed 80 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // We recommend that you name the workspace based on its business attribute to facilitate identification of its purpose. If you do not configure this parameter, the workspace name is used by default.
    shared_ptr<string> displayName_ {};
    // The environments included in the workspace:
    // - The simple mode contains only the production environment (prod).
    // - The standard mode contains both the development environment (dev) and the production environment (prod).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> envTypes_ {};
    // The resource group ID. For information about how to obtain the resource group ID, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The name of the workspace. The format is as follows:
    // - The length is 3 to 23 characters and can contain letters, underscores (_), or digits.
    // - It must start with a letter (uppercase or lowercase).
    // - It must be unique within the current region.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
