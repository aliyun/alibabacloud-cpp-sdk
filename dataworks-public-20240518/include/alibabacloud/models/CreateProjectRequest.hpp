// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProjectRequestAliyunResourceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunResourceGroupId_ != nullptr
        && this->aliyunResourceTags_ != nullptr && this->description_ != nullptr && this->devEnvironmentEnabled_ != nullptr && this->devRoleDisabled_ != nullptr && this->displayName_ != nullptr
        && this->name_ != nullptr && this->paiTaskEnabled_ != nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline CreateProjectRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<CreateProjectRequestAliyunResourceTags> & aliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<CreateProjectRequestAliyunResourceTags>) };
    inline vector<CreateProjectRequestAliyunResourceTags> aliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<CreateProjectRequestAliyunResourceTags>) };
    inline CreateProjectRequest& setAliyunResourceTags(const vector<CreateProjectRequestAliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline CreateProjectRequest& setAliyunResourceTags(vector<CreateProjectRequestAliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool devEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline CreateProjectRequest& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool devRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline CreateProjectRequest& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateProjectRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool paiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline CreateProjectRequest& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


  protected:
    // The ID of the Alibaba Cloud resource group to which the workspace belongs. You can log on to the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups) and go to the Resource Group page to query the ID.
    // 
    // You must configure this parameter to specify an Alibaba Cloud resource group for the workspace that you want to create.
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateProjectRequestAliyunResourceTags>> aliyunResourceTags_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the development environment. Valid values:
    // 
    // *   true : enables the development environment. In this case, the development environment is isolated from the production environment in the workspace.
    // *   false: disables the development environment. In this case, only the production environment is used in the workspace.
    std::shared_ptr<bool> devEnvironmentEnabled_ = nullptr;
    // Specifies whether to disable the Develop role. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> devRoleDisabled_ = nullptr;
    // The display name of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // The name of the workspace.
    // 
    // Limits:
    // 
    // *   The workspace name must be unqiue in a region.
    // *   The workspace name can contain letters, digits, and underscores (_), and must start with a letter.
    // *   The workspace name must be 3 to 28 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to enable scheduling of Platform for AI (PAI) tasks. Valid values:
    // 
    // *   true: enables scheduling of PAI tasks. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
    // *   false: disables scheduling of PAI tasks.
    std::shared_ptr<bool> paiTaskEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
