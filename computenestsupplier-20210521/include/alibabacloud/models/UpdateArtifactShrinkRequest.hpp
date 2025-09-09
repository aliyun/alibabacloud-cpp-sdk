// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTSHRINKREQUEST_HPP_
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
  class UpdateArtifactShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildPropertyShrink_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactPropertyShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildPropertyShrink_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactPropertyShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateArtifactShrinkRequest() = default ;
    UpdateArtifactShrinkRequest(const UpdateArtifactShrinkRequest &) = default ;
    UpdateArtifactShrinkRequest(UpdateArtifactShrinkRequest &&) = default ;
    UpdateArtifactShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactShrinkRequest() = default ;
    UpdateArtifactShrinkRequest& operator=(const UpdateArtifactShrinkRequest &) = default ;
    UpdateArtifactShrinkRequest& operator=(UpdateArtifactShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildPropertyShrink_ != nullptr
        && this->artifactId_ != nullptr && this->artifactPropertyShrink_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->permissionType_ != nullptr
        && this->supportRegionIds_ != nullptr && this->versionName_ != nullptr; };
    // artifactBuildPropertyShrink Field Functions 
    bool hasArtifactBuildPropertyShrink() const { return this->artifactBuildPropertyShrink_ != nullptr;};
    void deleteArtifactBuildPropertyShrink() { this->artifactBuildPropertyShrink_ = nullptr;};
    inline string artifactBuildPropertyShrink() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildPropertyShrink_, "") };
    inline UpdateArtifactShrinkRequest& setArtifactBuildPropertyShrink(string artifactBuildPropertyShrink) { DARABONBA_PTR_SET_VALUE(artifactBuildPropertyShrink_, artifactBuildPropertyShrink) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline UpdateArtifactShrinkRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactPropertyShrink Field Functions 
    bool hasArtifactPropertyShrink() const { return this->artifactPropertyShrink_ != nullptr;};
    void deleteArtifactPropertyShrink() { this->artifactPropertyShrink_ = nullptr;};
    inline string artifactPropertyShrink() const { DARABONBA_PTR_GET_DEFAULT(artifactPropertyShrink_, "") };
    inline UpdateArtifactShrinkRequest& setArtifactPropertyShrink(string artifactPropertyShrink) { DARABONBA_PTR_SET_VALUE(artifactPropertyShrink_, artifactPropertyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateArtifactShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateArtifactShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string permissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline UpdateArtifactShrinkRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline const vector<string> & supportRegionIds() const { DARABONBA_PTR_GET_CONST(supportRegionIds_, vector<string>) };
    inline vector<string> supportRegionIds() { DARABONBA_PTR_GET(supportRegionIds_, vector<string>) };
    inline UpdateArtifactShrinkRequest& setSupportRegionIds(const vector<string> & supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };
    inline UpdateArtifactShrinkRequest& setSupportRegionIds(vector<string> && supportRegionIds) { DARABONBA_PTR_SET_RVALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateArtifactShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    std::shared_ptr<string> artifactBuildPropertyShrink_ = nullptr;
    // The ID of the deployment package.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The properties of the deployment package.
    std::shared_ptr<string> artifactPropertyShrink_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> description_ = nullptr;
    // Permission fields are applicable to container image artifact and Helm Chart artifact. They can only change from Automatic to Public. Options:
    // 
    // Public
    // 
    // Automatic
    std::shared_ptr<string> permissionType_ = nullptr;
    // The IDs of the regions that support the deployment package.
    std::shared_ptr<vector<string>> supportRegionIds_ = nullptr;
    // The version name of the deployment package.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
