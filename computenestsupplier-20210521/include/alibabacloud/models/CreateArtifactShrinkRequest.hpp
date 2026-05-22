// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateArtifactShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildPropertyShrink_);
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactPropertyShrink_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildPropertyShrink_);
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactPropertyShrink_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    CreateArtifactShrinkRequest() = default ;
    CreateArtifactShrinkRequest(const CreateArtifactShrinkRequest &) = default ;
    CreateArtifactShrinkRequest(CreateArtifactShrinkRequest &&) = default ;
    CreateArtifactShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactShrinkRequest() = default ;
    CreateArtifactShrinkRequest& operator=(const CreateArtifactShrinkRequest &) = default ;
    CreateArtifactShrinkRequest& operator=(CreateArtifactShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->artifactBuildPropertyShrink_ == nullptr
        && this->artifactBuildType_ == nullptr && this->artifactId_ == nullptr && this->artifactPropertyShrink_ == nullptr && this->artifactType_ == nullptr && this->clientToken_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->supportRegionIds_ == nullptr && this->tag_ == nullptr
        && this->versionName_ == nullptr; };
    // artifactBuildPropertyShrink Field Functions 
    bool hasArtifactBuildPropertyShrink() const { return this->artifactBuildPropertyShrink_ != nullptr;};
    void deleteArtifactBuildPropertyShrink() { this->artifactBuildPropertyShrink_ = nullptr;};
    inline string getArtifactBuildPropertyShrink() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildPropertyShrink_, "") };
    inline CreateArtifactShrinkRequest& setArtifactBuildPropertyShrink(string artifactBuildPropertyShrink) { DARABONBA_PTR_SET_VALUE(artifactBuildPropertyShrink_, artifactBuildPropertyShrink) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string getArtifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline CreateArtifactShrinkRequest& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline CreateArtifactShrinkRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactPropertyShrink Field Functions 
    bool hasArtifactPropertyShrink() const { return this->artifactPropertyShrink_ != nullptr;};
    void deleteArtifactPropertyShrink() { this->artifactPropertyShrink_ = nullptr;};
    inline string getArtifactPropertyShrink() const { DARABONBA_PTR_GET_DEFAULT(artifactPropertyShrink_, "") };
    inline CreateArtifactShrinkRequest& setArtifactPropertyShrink(string artifactPropertyShrink) { DARABONBA_PTR_SET_VALUE(artifactPropertyShrink_, artifactPropertyShrink) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline CreateArtifactShrinkRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateArtifactShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateArtifactShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateArtifactShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateArtifactShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline const vector<string> & getSupportRegionIds() const { DARABONBA_PTR_GET_CONST(supportRegionIds_, vector<string>) };
    inline vector<string> getSupportRegionIds() { DARABONBA_PTR_GET(supportRegionIds_, vector<string>) };
    inline CreateArtifactShrinkRequest& setSupportRegionIds(const vector<string> & supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };
    inline CreateArtifactShrinkRequest& setSupportRegionIds(vector<string> && supportRegionIds) { DARABONBA_PTR_SET_RVALUE(supportRegionIds_, supportRegionIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateArtifactShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateArtifactShrinkRequest::Tag>) };
    inline vector<CreateArtifactShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateArtifactShrinkRequest::Tag>) };
    inline CreateArtifactShrinkRequest& setTag(const vector<CreateArtifactShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateArtifactShrinkRequest& setTag(vector<CreateArtifactShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline CreateArtifactShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    shared_ptr<string> artifactBuildPropertyShrink_ {};
    // The type of the artifact build task. Valid values:
    // 
    // - EcsImage: Build ECS (Elastic Container Service) image.
    // 
    // - Dockerfile: Build container image based on Dockerfile.
    // 
    // - Buildpacks: Build container image based on Buildpacks.
    // 
    // - ContainerImage: Rebuild container image by renaming an existing container image.
    shared_ptr<string> artifactBuildType_ {};
    // The ID of the deployment package.
    shared_ptr<string> artifactId_ {};
    // The properties of the deployment object.
    shared_ptr<string> artifactPropertyShrink_ {};
    // The type of the deployment package. Valid values:
    // 
    // *   EcsImage: Elastic Compute Service (ECS) image.
    // *   AcrImage: container image.
    // *   File: Object Storage Service (OSS) object.
    // *   Script: script.
    // 
    // This parameter is required.
    shared_ptr<string> artifactType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The description of the deployment package.
    shared_ptr<string> description_ {};
    // The name of the deployment package.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The supported regions.
    shared_ptr<vector<string>> supportRegionIds_ {};
    // The custom tags.
    shared_ptr<vector<CreateArtifactShrinkRequest::Tag>> tag_ {};
    // The version name of the deployment package.
    // 
    // This parameter is required.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
