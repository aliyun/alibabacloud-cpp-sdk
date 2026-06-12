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
    virtual bool empty() const override { return this->artifactBuildProperty_ == nullptr
        && this->artifactBuildType_ == nullptr && this->artifactId_ == nullptr && this->artifactProperty_ == nullptr && this->artifactType_ == nullptr && this->artifactVersion_ == nullptr
        && this->description_ == nullptr && this->gmtModified_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr
        && this->supportRegionIds_ == nullptr && this->versionName_ == nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline string getArtifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
    inline UpdateArtifactResponseBody& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string getArtifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline UpdateArtifactResponseBody& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline UpdateArtifactResponseBody& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline string getArtifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
    inline UpdateArtifactResponseBody& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UpdateArtifactResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline UpdateArtifactResponseBody& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateArtifactResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateArtifactResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateArtifactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateArtifactResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline UpdateArtifactResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline string getSupportRegionIds() const { DARABONBA_PTR_GET_DEFAULT(supportRegionIds_, "") };
    inline UpdateArtifactResponseBody& setSupportRegionIds(string supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateArtifactResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The properties for building the artifact. This is used for managed artifact builds.
    shared_ptr<string> artifactBuildProperty_ {};
    // The build type of the artifact.
    shared_ptr<string> artifactBuildType_ {};
    // The artifact ID.
    shared_ptr<string> artifactId_ {};
    // The content of the artifact.
    shared_ptr<string> artifactProperty_ {};
    // The artifact type.
    shared_ptr<string> artifactType_ {};
    // The artifact version.
    shared_ptr<string> artifactVersion_ {};
    // The description of the artifact.
    shared_ptr<string> description_ {};
    // The time when the artifact was modified.
    shared_ptr<string> gmtModified_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the artifact.
    // 
    // Valid values:
    // 
    // - Created: The artifact is created.
    // 
    // - Scanning: The artifact is being scanned.
    // 
    // - ScanFailed: The artifact failed to be scanned.
    // 
    // - Delivering: The artifact is being distributed.
    // 
    // - Available: The artifact is available.
    // 
    // - Deleted: The artifact is deleted.
    shared_ptr<string> status_ {};
    // The details of the artifact status.
    shared_ptr<string> statusDetail_ {};
    // The IDs of the regions to which the artifact can be distributed.
    shared_ptr<string> supportRegionIds_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
