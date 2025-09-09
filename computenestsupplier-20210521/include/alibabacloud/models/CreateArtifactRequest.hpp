// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateArtifactRequestArtifactBuildProperty.hpp>
#include <alibabacloud/models/CreateArtifactRequestArtifactProperty.hpp>
#include <vector>
#include <alibabacloud/models/CreateArtifactRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    CreateArtifactRequest() = default ;
    CreateArtifactRequest(const CreateArtifactRequest &) = default ;
    CreateArtifactRequest(CreateArtifactRequest &&) = default ;
    CreateArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactRequest() = default ;
    CreateArtifactRequest& operator=(const CreateArtifactRequest &) = default ;
    CreateArtifactRequest& operator=(CreateArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildProperty_ != nullptr
        && this->artifactBuildType_ != nullptr && this->artifactId_ != nullptr && this->artifactProperty_ != nullptr && this->artifactType_ != nullptr && this->clientToken_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->resourceGroupId_ != nullptr && this->supportRegionIds_ != nullptr && this->tag_ != nullptr
        && this->versionName_ != nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline const CreateArtifactRequestArtifactBuildProperty & artifactBuildProperty() const { DARABONBA_PTR_GET_CONST(artifactBuildProperty_, CreateArtifactRequestArtifactBuildProperty) };
    inline CreateArtifactRequestArtifactBuildProperty artifactBuildProperty() { DARABONBA_PTR_GET(artifactBuildProperty_, CreateArtifactRequestArtifactBuildProperty) };
    inline CreateArtifactRequest& setArtifactBuildProperty(const CreateArtifactRequestArtifactBuildProperty & artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };
    inline CreateArtifactRequest& setArtifactBuildProperty(CreateArtifactRequestArtifactBuildProperty && artifactBuildProperty) { DARABONBA_PTR_SET_RVALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string artifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline CreateArtifactRequest& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline CreateArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline const CreateArtifactRequestArtifactProperty & artifactProperty() const { DARABONBA_PTR_GET_CONST(artifactProperty_, CreateArtifactRequestArtifactProperty) };
    inline CreateArtifactRequestArtifactProperty artifactProperty() { DARABONBA_PTR_GET(artifactProperty_, CreateArtifactRequestArtifactProperty) };
    inline CreateArtifactRequest& setArtifactProperty(const CreateArtifactRequestArtifactProperty & artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };
    inline CreateArtifactRequest& setArtifactProperty(CreateArtifactRequestArtifactProperty && artifactProperty) { DARABONBA_PTR_SET_RVALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline CreateArtifactRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateArtifactRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateArtifactRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateArtifactRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline const vector<string> & supportRegionIds() const { DARABONBA_PTR_GET_CONST(supportRegionIds_, vector<string>) };
    inline vector<string> supportRegionIds() { DARABONBA_PTR_GET(supportRegionIds_, vector<string>) };
    inline CreateArtifactRequest& setSupportRegionIds(const vector<string> & supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };
    inline CreateArtifactRequest& setSupportRegionIds(vector<string> && supportRegionIds) { DARABONBA_PTR_SET_RVALUE(supportRegionIds_, supportRegionIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateArtifactRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateArtifactRequestTag>) };
    inline vector<CreateArtifactRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateArtifactRequestTag>) };
    inline CreateArtifactRequest& setTag(const vector<CreateArtifactRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateArtifactRequest& setTag(vector<CreateArtifactRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline CreateArtifactRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    std::shared_ptr<CreateArtifactRequestArtifactBuildProperty> artifactBuildProperty_ = nullptr;
    // The type of the artifact build task. Valid values:
    // 
    // - EcsImage: Build ECS (Elastic Container Service) image.
    // 
    // - Dockerfile: Build container image based on Dockerfile.
    // 
    // - Buildpacks: Build container image based on Buildpacks.
    // 
    // - ContainerImage: Rebuild container image by renaming an existing container image.
    std::shared_ptr<string> artifactBuildType_ = nullptr;
    // The ID of the deployment package.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The properties of the deployment object.
    std::shared_ptr<CreateArtifactRequestArtifactProperty> artifactProperty_ = nullptr;
    // The type of the deployment package. Valid values:
    // 
    // *   EcsImage: Elastic Compute Service (ECS) image.
    // *   AcrImage: container image.
    // *   File: Object Storage Service (OSS) object.
    // *   Script: script.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the deployment package.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The supported regions.
    std::shared_ptr<vector<string>> supportRegionIds_ = nullptr;
    // The custom tags.
    std::shared_ptr<vector<CreateArtifactRequestTag>> tag_ = nullptr;
    // The version name of the deployment package.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
