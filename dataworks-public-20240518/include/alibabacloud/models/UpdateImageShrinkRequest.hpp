// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfigShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_TO_JSON(Supported, supportedShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AcrAssociatedVpcId, acrAssociatedVpcId_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ProviderImageId, providerImageId_);
      DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
      DARABONBA_PTR_FROM_JSON(Supported, supportedShrink_);
    };
    UpdateImageShrinkRequest() = default ;
    UpdateImageShrinkRequest(const UpdateImageShrinkRequest &) = default ;
    UpdateImageShrinkRequest(UpdateImageShrinkRequest &&) = default ;
    UpdateImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageShrinkRequest() = default ;
    UpdateImageShrinkRequest& operator=(const UpdateImageShrinkRequest &) = default ;
    UpdateImageShrinkRequest& operator=(UpdateImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->acrAssociatedVpcId_ == nullptr && this->acrInstanceId_ == nullptr && this->buildConfigShrink_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->imageUri_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->providerImageId_ == nullptr && this->repositoryName_ == nullptr
        && this->supportedShrink_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateImageShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // acrAssociatedVpcId Field Functions 
    bool hasAcrAssociatedVpcId() const { return this->acrAssociatedVpcId_ != nullptr;};
    void deleteAcrAssociatedVpcId() { this->acrAssociatedVpcId_ = nullptr;};
    inline string getAcrAssociatedVpcId() const { DARABONBA_PTR_GET_DEFAULT(acrAssociatedVpcId_, "") };
    inline UpdateImageShrinkRequest& setAcrAssociatedVpcId(string acrAssociatedVpcId) { DARABONBA_PTR_SET_VALUE(acrAssociatedVpcId_, acrAssociatedVpcId) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline UpdateImageShrinkRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // buildConfigShrink Field Functions 
    bool hasBuildConfigShrink() const { return this->buildConfigShrink_ != nullptr;};
    void deleteBuildConfigShrink() { this->buildConfigShrink_ = nullptr;};
    inline string getBuildConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(buildConfigShrink_, "") };
    inline UpdateImageShrinkRequest& setBuildConfigShrink(string buildConfigShrink) { DARABONBA_PTR_SET_VALUE(buildConfigShrink_, buildConfigShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateImageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateImageShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string getImageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline UpdateImageShrinkRequest& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateImageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateImageShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // providerImageId Field Functions 
    bool hasProviderImageId() const { return this->providerImageId_ != nullptr;};
    void deleteProviderImageId() { this->providerImageId_ = nullptr;};
    inline string getProviderImageId() const { DARABONBA_PTR_GET_DEFAULT(providerImageId_, "") };
    inline UpdateImageShrinkRequest& setProviderImageId(string providerImageId) { DARABONBA_PTR_SET_VALUE(providerImageId_, providerImageId) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string getRepositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline UpdateImageShrinkRequest& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


    // supportedShrink Field Functions 
    bool hasSupportedShrink() const { return this->supportedShrink_ != nullptr;};
    void deleteSupportedShrink() { this->supportedShrink_ = nullptr;};
    inline string getSupportedShrink() const { DARABONBA_PTR_GET_DEFAULT(supportedShrink_, "") };
    inline UpdateImageShrinkRequest& setSupportedShrink(string supportedShrink) { DARABONBA_PTR_SET_VALUE(supportedShrink_, supportedShrink) };


  protected:
    // The image visibility. Valid values:
    // - Public: visible to all users.
    // - Private: visible only to the creator.
    shared_ptr<string> accessibility_ {};
    // The VPC ID associated with the ACR instance. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrAssociatedVpcId_ {};
    // The Container Registry (ACR) instance ID. This parameter is required when referencing an ACR image.
    shared_ptr<string> acrInstanceId_ {};
    // The image build configuration.
    shared_ptr<string> buildConfigShrink_ {};
    // The image description.
    shared_ptr<string> description_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The image URI. This parameter is required when referencing an ACR image.
    shared_ptr<string> imageUri_ {};
    // The image name.
    shared_ptr<string> name_ {};
    // The image namespace. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    shared_ptr<string> namespace_ {};
    // The provider image ID. This parameter is required when referencing a DataWorks official image.
    shared_ptr<string> providerImageId_ {};
    // The image repository name. Set this parameter to DataWorks Default when referencing a DataWorks official image.
    shared_ptr<string> repositoryName_ {};
    // The image sub-purpose.
    shared_ptr<string> supportedShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
