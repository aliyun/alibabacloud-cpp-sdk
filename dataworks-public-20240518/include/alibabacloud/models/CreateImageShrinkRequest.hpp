// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfigShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_TO_JSON(Supported, supportedShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableSyncMaxCompute, enableSyncMaxCompute_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_FROM_JSON(Supported, supportedShrink_);
    };
    CreateImageShrinkRequest() = default ;
    CreateImageShrinkRequest(const CreateImageShrinkRequest &) = default ;
    CreateImageShrinkRequest(CreateImageShrinkRequest &&) = default ;
    CreateImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageShrinkRequest() = default ;
    CreateImageShrinkRequest& operator=(const CreateImageShrinkRequest &) = default ;
    CreateImageShrinkRequest& operator=(CreateImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->acrAssociatedVpcId_ == nullptr && this->acrInstanceId_ == nullptr && this->buildConfigShrink_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->enableSyncMaxCompute_ == nullptr && this->imageUri_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->providerImageId_ == nullptr
        && this->providerType_ == nullptr && this->repositoryName_ == nullptr && this->supportedShrink_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateImageShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // acrAssociatedVpcId Field Functions 
    bool hasAcrAssociatedVpcId() const { return this->acrAssociatedVpcId_ != nullptr;};
    void deleteAcrAssociatedVpcId() { this->acrAssociatedVpcId_ = nullptr;};
    inline string getAcrAssociatedVpcId() const { DARABONBA_PTR_GET_DEFAULT(acrAssociatedVpcId_, "") };
    inline CreateImageShrinkRequest& setAcrAssociatedVpcId(string acrAssociatedVpcId) { DARABONBA_PTR_SET_VALUE(acrAssociatedVpcId_, acrAssociatedVpcId) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateImageShrinkRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // buildConfigShrink Field Functions 
    bool hasBuildConfigShrink() const { return this->buildConfigShrink_ != nullptr;};
    void deleteBuildConfigShrink() { this->buildConfigShrink_ = nullptr;};
    inline string getBuildConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(buildConfigShrink_, "") };
    inline CreateImageShrinkRequest& setBuildConfigShrink(string buildConfigShrink) { DARABONBA_PTR_SET_VALUE(buildConfigShrink_, buildConfigShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSyncMaxCompute Field Functions 
    bool hasEnableSyncMaxCompute() const { return this->enableSyncMaxCompute_ != nullptr;};
    void deleteEnableSyncMaxCompute() { this->enableSyncMaxCompute_ = nullptr;};
    inline bool getEnableSyncMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(enableSyncMaxCompute_, false) };
    inline CreateImageShrinkRequest& setEnableSyncMaxCompute(bool enableSyncMaxCompute) { DARABONBA_PTR_SET_VALUE(enableSyncMaxCompute_, enableSyncMaxCompute) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string getImageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline CreateImageShrinkRequest& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateImageShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // providerImageId Field Functions 
    bool hasProviderImageId() const { return this->providerImageId_ != nullptr;};
    void deleteProviderImageId() { this->providerImageId_ = nullptr;};
    inline string getProviderImageId() const { DARABONBA_PTR_GET_DEFAULT(providerImageId_, "") };
    inline CreateImageShrinkRequest& setProviderImageId(string providerImageId) { DARABONBA_PTR_SET_VALUE(providerImageId_, providerImageId) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline CreateImageShrinkRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline CreateImageShrinkRequest& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


    // supportedShrink Field Functions 
    bool hasSupportedShrink() const { return this->supportedShrink_ != nullptr;};
    void deleteSupportedShrink() { this->supportedShrink_ = nullptr;};
    inline string getSupportedShrink() const { DARABONBA_PTR_GET_DEFAULT(supportedShrink_, "") };
    inline CreateImageShrinkRequest& setSupportedShrink(string supportedShrink) { DARABONBA_PTR_SET_VALUE(supportedShrink_, supportedShrink) };


  protected:
    // The image visibility. Valid values:
    // - Public: visible to all users.
    // - Private: visible only to the creator.
    shared_ptr<string> accessibility_ {};
    // The VPC ID associated with the ACR instance. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrAssociatedVpcId_ {};
    // The ACR instance ID. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrInstanceId_ {};
    // The image build configuration.
    shared_ptr<string> buildConfigShrink_ {};
    // The client idempotency token.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The image description, up to 128 characters.
    shared_ptr<string> description_ {};
    // Specifies whether to synchronize the image to MaxCompute. Specify this parameter when referencing an ACR image. Default value: false.
    shared_ptr<bool> enableSyncMaxCompute_ {};
    // The image URI. This parameter is required when referencing an ACR image.
    shared_ptr<string> imageUri_ {};
    // The image name, which can contain lowercase letters, digits, and underscores (_), up to 128 characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The image namespace. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The image ID from the image provider. This parameter is required when referencing a DataWorks official image.
    shared_ptr<string> providerImageId_ {};
    // The image reference data type. Valid values:
    // 
    // - ACR: ACR image repository.
    // - DataWorks: DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> providerType_ {};
    // The image repository name. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    // 
    // This parameter is required.
    shared_ptr<string> repositoryName_ {};
    // The image sub-purpose.
    // 
    // This parameter is required.
    shared_ptr<string> supportedShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
