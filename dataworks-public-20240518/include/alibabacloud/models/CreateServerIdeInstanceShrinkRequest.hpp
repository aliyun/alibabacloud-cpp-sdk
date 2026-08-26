// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERIDEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERIDEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateServerIdeInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerIdeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Datasets, datasetsShrink_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommandShrink_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpcShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerIdeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasetsShrink_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommandShrink_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpcShrink_);
    };
    CreateServerIdeInstanceShrinkRequest() = default ;
    CreateServerIdeInstanceShrinkRequest(const CreateServerIdeInstanceShrinkRequest &) = default ;
    CreateServerIdeInstanceShrinkRequest(CreateServerIdeInstanceShrinkRequest &&) = default ;
    CreateServerIdeInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerIdeInstanceShrinkRequest() = default ;
    CreateServerIdeInstanceShrinkRequest& operator=(const CreateServerIdeInstanceShrinkRequest &) = default ;
    CreateServerIdeInstanceShrinkRequest& operator=(CreateServerIdeInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && this->cu_ == nullptr && this->datasetsShrink_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->instanceName_ == nullptr
        && this->owner_ == nullptr && this->projectId_ == nullptr && this->resourceGroupId_ == nullptr && this->userCommandShrink_ == nullptr && this->userVpcShrink_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline CreateServerIdeInstanceShrinkRequest& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // datasetsShrink Field Functions 
    bool hasDatasetsShrink() const { return this->datasetsShrink_ != nullptr;};
    void deleteDatasetsShrink() { this->datasetsShrink_ = nullptr;};
    inline string getDatasetsShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetsShrink_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setDatasetsShrink(string datasetsShrink) { DARABONBA_PTR_SET_VALUE(datasetsShrink_, datasetsShrink) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateServerIdeInstanceShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // userCommandShrink Field Functions 
    bool hasUserCommandShrink() const { return this->userCommandShrink_ != nullptr;};
    void deleteUserCommandShrink() { this->userCommandShrink_ = nullptr;};
    inline string getUserCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(userCommandShrink_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setUserCommandShrink(string userCommandShrink) { DARABONBA_PTR_SET_VALUE(userCommandShrink_, userCommandShrink) };


    // userVpcShrink Field Functions 
    bool hasUserVpcShrink() const { return this->userVpcShrink_ != nullptr;};
    void deleteUserVpcShrink() { this->userVpcShrink_ = nullptr;};
    inline string getUserVpcShrink() const { DARABONBA_PTR_GET_DEFAULT(userVpcShrink_, "") };
    inline CreateServerIdeInstanceShrinkRequest& setUserVpcShrink(string userVpcShrink) { DARABONBA_PTR_SET_VALUE(userVpcShrink_, userVpcShrink) };


  protected:
    // The credential injection configuration for the instance. After this feature is enabled, you can use the default RAM role chain or specify a custom RAM role.
    shared_ptr<string> credentialConfigShrink_ {};
    // The number of CUs used by the instance.
    shared_ptr<int32_t> cu_ {};
    // The list of datasets mounted to the instance.
    shared_ptr<string> datasetsShrink_ {};
    // The image ID. You can call ListServerIdeImages to obtain the image ID.
    shared_ptr<string> imageId_ {};
    // The image URL. This parameter is required when you use a non-official DataWorks image.
    shared_ptr<string> imageUrl_ {};
    // The name of the personal development environment instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The Alibaba Cloud account ID of the user who owns the instance. If this parameter is not specified, the current caller is used by default.
    shared_ptr<string> owner_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The DataWorks resource group identifier. You can specify the numeric ID of the resource group or the full identifier in the Serverless_res_group_{tenantId}_{resgId} format.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
    // The user command configuration to be executed when the instance starts.
    shared_ptr<string> userCommandShrink_ {};
    // The Virtual Private Cloud (VPC) configuration used by the instance.
    shared_ptr<string> userVpcShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
