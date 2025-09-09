// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateArtifactResponseBody() = default ;
    UpdateArtifactResponseBody(const UpdateArtifactResponseBody &) = default ;
    UpdateArtifactResponseBody(UpdateArtifactResponseBody &&) = default ;
    UpdateArtifactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactResponseBody() = default ;
    UpdateArtifactResponseBody& operator=(const UpdateArtifactResponseBody &) = default ;
    UpdateArtifactResponseBody& operator=(UpdateArtifactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildProperty_ != nullptr
        && this->artifactBuildType_ != nullptr && this->artifactId_ != nullptr && this->artifactProperty_ != nullptr && this->artifactType_ != nullptr && this->artifactVersion_ != nullptr
        && this->description_ != nullptr && this->gmtModified_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr
        && this->supportRegionIds_ != nullptr && this->versionName_ != nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline string artifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
    inline UpdateArtifactResponseBody& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string artifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline UpdateArtifactResponseBody& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline UpdateArtifactResponseBody& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline string artifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
    inline UpdateArtifactResponseBody& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UpdateArtifactResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline UpdateArtifactResponseBody& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateArtifactResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateArtifactResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateArtifactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateArtifactResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline UpdateArtifactResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline string supportRegionIds() const { DARABONBA_PTR_GET_DEFAULT(supportRegionIds_, "") };
    inline UpdateArtifactResponseBody& setSupportRegionIds(string supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateArtifactResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The build properties of the artifact, utilized for hosting and building the deployment package.
    std::shared_ptr<string> artifactBuildProperty_ = nullptr;
    // The type of the deployment package to be built.
    std::shared_ptr<string> artifactBuildType_ = nullptr;
    // The ID of the deployment package.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The properties of the deployment package.
    std::shared_ptr<string> artifactProperty_ = nullptr;
    // The type of the deployment package.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The version of the deployment package.
    std::shared_ptr<string> artifactVersion_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the deployment package was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the deployment package. Valid values:
    // 
    // *   Created: The deployment package is created.
    // *   Scanning: The deployment package is being scanned.
    // *   ScanFailed: The deployment package failed to be scanned.
    // *   Delivering: The deployment package is being distributed.
    // *   Available: The deployment package is available.
    // *   Deleted: The deployment package is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The status of the deployment package.
    std::shared_ptr<string> statusDetail_ = nullptr;
    // The ID of the region that supports the deployment package.
    std::shared_ptr<string> supportRegionIds_ = nullptr;
    // The name of the deployment package.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
