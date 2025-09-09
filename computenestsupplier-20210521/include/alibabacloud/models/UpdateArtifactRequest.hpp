// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateArtifactRequestArtifactBuildProperty.hpp>
#include <alibabacloud/models/UpdateArtifactRequestArtifactProperty.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateArtifactRequest() = default ;
    UpdateArtifactRequest(const UpdateArtifactRequest &) = default ;
    UpdateArtifactRequest(UpdateArtifactRequest &&) = default ;
    UpdateArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactRequest() = default ;
    UpdateArtifactRequest& operator=(const UpdateArtifactRequest &) = default ;
    UpdateArtifactRequest& operator=(UpdateArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildProperty_ != nullptr
        && this->artifactId_ != nullptr && this->artifactProperty_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->permissionType_ != nullptr
        && this->supportRegionIds_ != nullptr && this->versionName_ != nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline const UpdateArtifactRequestArtifactBuildProperty & artifactBuildProperty() const { DARABONBA_PTR_GET_CONST(artifactBuildProperty_, UpdateArtifactRequestArtifactBuildProperty) };
    inline UpdateArtifactRequestArtifactBuildProperty artifactBuildProperty() { DARABONBA_PTR_GET(artifactBuildProperty_, UpdateArtifactRequestArtifactBuildProperty) };
    inline UpdateArtifactRequest& setArtifactBuildProperty(const UpdateArtifactRequestArtifactBuildProperty & artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };
    inline UpdateArtifactRequest& setArtifactBuildProperty(UpdateArtifactRequestArtifactBuildProperty && artifactBuildProperty) { DARABONBA_PTR_SET_RVALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline UpdateArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline const UpdateArtifactRequestArtifactProperty & artifactProperty() const { DARABONBA_PTR_GET_CONST(artifactProperty_, UpdateArtifactRequestArtifactProperty) };
    inline UpdateArtifactRequestArtifactProperty artifactProperty() { DARABONBA_PTR_GET(artifactProperty_, UpdateArtifactRequestArtifactProperty) };
    inline UpdateArtifactRequest& setArtifactProperty(const UpdateArtifactRequestArtifactProperty & artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };
    inline UpdateArtifactRequest& setArtifactProperty(UpdateArtifactRequestArtifactProperty && artifactProperty) { DARABONBA_PTR_SET_RVALUE(artifactProperty_, artifactProperty) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateArtifactRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string permissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline UpdateArtifactRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline const vector<string> & supportRegionIds() const { DARABONBA_PTR_GET_CONST(supportRegionIds_, vector<string>) };
    inline vector<string> supportRegionIds() { DARABONBA_PTR_GET(supportRegionIds_, vector<string>) };
    inline UpdateArtifactRequest& setSupportRegionIds(const vector<string> & supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };
    inline UpdateArtifactRequest& setSupportRegionIds(vector<string> && supportRegionIds) { DARABONBA_PTR_SET_RVALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateArtifactRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    std::shared_ptr<UpdateArtifactRequestArtifactBuildProperty> artifactBuildProperty_ = nullptr;
    // The ID of the deployment package.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The properties of the deployment package.
    std::shared_ptr<UpdateArtifactRequestArtifactProperty> artifactProperty_ = nullptr;
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
