// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODYARTIFACTS_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODYARTIFACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListArtifactsResponseBodyArtifactsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactsResponseBodyArtifacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactsResponseBodyArtifacts& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactsResponseBodyArtifacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListArtifactsResponseBodyArtifacts() = default ;
    ListArtifactsResponseBodyArtifacts(const ListArtifactsResponseBodyArtifacts &) = default ;
    ListArtifactsResponseBodyArtifacts(ListArtifactsResponseBodyArtifacts &&) = default ;
    ListArtifactsResponseBodyArtifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactsResponseBodyArtifacts() = default ;
    ListArtifactsResponseBodyArtifacts& operator=(const ListArtifactsResponseBodyArtifacts &) = default ;
    ListArtifactsResponseBodyArtifacts& operator=(ListArtifactsResponseBodyArtifacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildProperty_ != nullptr
        && this->artifactId_ != nullptr && this->artifactType_ != nullptr && this->description_ != nullptr && this->gmtModified_ != nullptr && this->maxVersion_ != nullptr
        && this->name_ != nullptr && this->permissionType_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline string artifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
    inline ListArtifactsResponseBodyArtifacts& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListArtifactsResponseBodyArtifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ListArtifactsResponseBodyArtifacts& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListArtifactsResponseBodyArtifacts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListArtifactsResponseBodyArtifacts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline ListArtifactsResponseBodyArtifacts& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListArtifactsResponseBodyArtifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string permissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline ListArtifactsResponseBodyArtifacts& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListArtifactsResponseBodyArtifacts& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListArtifactsResponseBodyArtifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListArtifactsResponseBodyArtifactsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListArtifactsResponseBodyArtifactsTags>) };
    inline vector<Models::ListArtifactsResponseBodyArtifactsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListArtifactsResponseBodyArtifactsTags>) };
    inline ListArtifactsResponseBodyArtifacts& setTags(const vector<Models::ListArtifactsResponseBodyArtifactsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListArtifactsResponseBodyArtifacts& setTags(vector<Models::ListArtifactsResponseBodyArtifactsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    std::shared_ptr<string> artifactBuildProperty_ = nullptr;
    // The ID of the deployment package.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The type of the deployment package.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the deployment package was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The latest version of the deployment package.
    std::shared_ptr<string> maxVersion_ = nullptr;
    // The name of the deployment package.
    std::shared_ptr<string> name_ = nullptr;
    // Permission fields are applicable to container image artifact and Helm Chart artifact They can only change from Automatic to Public. Options:
    // - Public
    // - Automatic
    std::shared_ptr<string> permissionType_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the deployment package. Valid values:
    // 
    // *   Created: The deployment package is created.
    // *   Scanning: The deployment package is being scanned.
    // *   ScanFailed: The deployment package failed to be scanned.
    // *   Delivering: The deployment package is being distributed.
    // *   Available: The deployment package is available.
    // *   Deleted: The deployment package is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListArtifactsResponseBodyArtifactsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
