// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEARTIFACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEARTIFACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ReleaseArtifactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseArtifactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseArtifactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ReleaseArtifactResponseBody() = default ;
    ReleaseArtifactResponseBody(const ReleaseArtifactResponseBody &) = default ;
    ReleaseArtifactResponseBody(ReleaseArtifactResponseBody &&) = default ;
    ReleaseArtifactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseArtifactResponseBody() = default ;
    ReleaseArtifactResponseBody& operator=(const ReleaseArtifactResponseBody &) = default ;
    ReleaseArtifactResponseBody& operator=(ReleaseArtifactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactId_ != nullptr
        && this->artifactProperty_ != nullptr && this->artifactType_ != nullptr && this->artifactVersion_ != nullptr && this->description_ != nullptr && this->gmtModified_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->versionName_ != nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ReleaseArtifactResponseBody& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline string artifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
    inline ReleaseArtifactResponseBody& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ReleaseArtifactResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline ReleaseArtifactResponseBody& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReleaseArtifactResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ReleaseArtifactResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleaseArtifactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ReleaseArtifactResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ReleaseArtifactResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The ID of the artifact.
    std::shared_ptr<string> artifactId_ = nullptr;
    // The content of the artifact.
    std::shared_ptr<string> artifactProperty_ = nullptr;
    // The type of the artifact.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The version of the artifact.
    std::shared_ptr<string> artifactVersion_ = nullptr;
    // The description of the artifact.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the artifact was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The state of the artifact. Valid values:
    // 
    // *   Created: The artifact is created.
    // *   Scanning: The artifact is being scanned.
    // *   ScanFailed: The artifact failed to be scanned.
    // *   Delivering: The artifact is being distributed.
    // *   Available: The artifact is available.
    // *   Deleted: The artifact is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The version name of the artifact.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
