// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateProjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_TO_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_FROM_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest(CreateProjectShrinkRequest &&) = default ;
    CreateProjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectShrinkRequest() = default ;
    CreateProjectShrinkRequest& operator=(const CreateProjectShrinkRequest &) = default ;
    CreateProjectShrinkRequest& operator=(CreateProjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->disableDevelopment_ != nullptr && this->isAllowDownload_ != nullptr && this->projectDescription_ != nullptr && this->projectIdentifier_ != nullptr && this->projectMode_ != nullptr
        && this->projectName_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->tagsShrink_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProjectShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disableDevelopment Field Functions 
    bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
    void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
    inline bool disableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
    inline CreateProjectShrinkRequest& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


    // isAllowDownload Field Functions 
    bool hasIsAllowDownload() const { return this->isAllowDownload_ != nullptr;};
    void deleteIsAllowDownload() { this->isAllowDownload_ = nullptr;};
    inline int32_t isAllowDownload() const { DARABONBA_PTR_GET_DEFAULT(isAllowDownload_, 0) };
    inline CreateProjectShrinkRequest& setIsAllowDownload(int32_t isAllowDownload) { DARABONBA_PTR_SET_VALUE(isAllowDownload_, isAllowDownload) };


    // projectDescription Field Functions 
    bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
    void deleteProjectDescription() { this->projectDescription_ = nullptr;};
    inline string projectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
    inline CreateProjectShrinkRequest& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateProjectShrinkRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // projectMode Field Functions 
    bool hasProjectMode() const { return this->projectMode_ != nullptr;};
    void deleteProjectMode() { this->projectMode_ = nullptr;};
    inline int32_t projectMode() const { DARABONBA_PTR_GET_DEFAULT(projectMode_, 0) };
    inline CreateProjectShrinkRequest& setProjectMode(int32_t projectMode) { DARABONBA_PTR_SET_VALUE(projectMode_, projectMode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateProjectShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateProjectShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateProjectShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request. This parameter can be left empty.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to disable the Develop role. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> disableDevelopment_ = nullptr;
    // Specifies whether to allow you to download the query result from DataStudio. Valid values:
    // 
    // *   **1** (default): allows you to download the query result from DataStudio.
    // *   **0**: does not allow you to download the query result from DataStudio.
    std::shared_ptr<int32_t> isAllowDownload_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> projectDescription_ = nullptr;
    // The name of the workspace. The name can contain only letters, digits, and underscores (_) and must start with a letter or digit.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The mode of the workspace. For more information about the differences between the modes of workspaces, see [Differences between workspaces in basic mode and workspaces in standard mode](https://help.aliyun.com/document_detail/85772.html).
    // 
    // Valid values:
    // 
    // *   **2** (default): basic mode
    // *   **3**: standard mode
    std::shared_ptr<int32_t> projectMode_ = nullptr;
    // The display name of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The tags added to the workspace.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
