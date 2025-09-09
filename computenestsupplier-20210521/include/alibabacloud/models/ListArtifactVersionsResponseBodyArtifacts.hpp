// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSRESPONSEBODYARTIFACTS_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSRESPONSEBODYARTIFACTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactVersionsResponseBodyArtifacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactVersionsResponseBodyArtifacts& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageDelivery, imageDelivery_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ResultFile, resultFile_);
      DARABONBA_PTR_TO_JSON(SecurityAuditResult, securityAuditResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactVersionsResponseBodyArtifacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageDelivery, imageDelivery_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ResultFile, resultFile_);
      DARABONBA_PTR_FROM_JSON(SecurityAuditResult, securityAuditResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListArtifactVersionsResponseBodyArtifacts() = default ;
    ListArtifactVersionsResponseBodyArtifacts(const ListArtifactVersionsResponseBodyArtifacts &) = default ;
    ListArtifactVersionsResponseBodyArtifacts(ListArtifactVersionsResponseBodyArtifacts &&) = default ;
    ListArtifactVersionsResponseBodyArtifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactVersionsResponseBodyArtifacts() = default ;
    ListArtifactVersionsResponseBodyArtifacts& operator=(const ListArtifactVersionsResponseBodyArtifacts &) = default ;
    ListArtifactVersionsResponseBodyArtifacts& operator=(ListArtifactVersionsResponseBodyArtifacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactBuildProperty_ != nullptr
        && this->artifactBuildType_ != nullptr && this->artifactId_ != nullptr && this->artifactProperty_ != nullptr && this->artifactType_ != nullptr && this->artifactVersion_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->imageDelivery_ != nullptr && this->progress_ != nullptr && this->resultFile_ != nullptr
        && this->securityAuditResult_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr && this->supportRegionIds_ != nullptr && this->versionName_ != nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline string artifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string artifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string artifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline string artifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // artifactVersion Field Functions 
    bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
    void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
    inline string artifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageDelivery Field Functions 
    bool hasImageDelivery() const { return this->imageDelivery_ != nullptr;};
    void deleteImageDelivery() { this->imageDelivery_ = nullptr;};
    inline const map<string, string> & imageDelivery() const { DARABONBA_PTR_GET_CONST(imageDelivery_, map<string, string>) };
    inline map<string, string> imageDelivery() { DARABONBA_PTR_GET(imageDelivery_, map<string, string>) };
    inline ListArtifactVersionsResponseBodyArtifacts& setImageDelivery(const map<string, string> & imageDelivery) { DARABONBA_PTR_SET_VALUE(imageDelivery_, imageDelivery) };
    inline ListArtifactVersionsResponseBodyArtifacts& setImageDelivery(map<string, string> && imageDelivery) { DARABONBA_PTR_SET_RVALUE(imageDelivery_, imageDelivery) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // resultFile Field Functions 
    bool hasResultFile() const { return this->resultFile_ != nullptr;};
    void deleteResultFile() { this->resultFile_ = nullptr;};
    inline string resultFile() const { DARABONBA_PTR_GET_DEFAULT(resultFile_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setResultFile(string resultFile) { DARABONBA_PTR_SET_VALUE(resultFile_, resultFile) };


    // securityAuditResult Field Functions 
    bool hasSecurityAuditResult() const { return this->securityAuditResult_ != nullptr;};
    void deleteSecurityAuditResult() { this->securityAuditResult_ = nullptr;};
    inline string securityAuditResult() const { DARABONBA_PTR_GET_DEFAULT(securityAuditResult_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setSecurityAuditResult(string securityAuditResult) { DARABONBA_PTR_SET_VALUE(securityAuditResult_, securityAuditResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline string supportRegionIds() const { DARABONBA_PTR_GET_DEFAULT(supportRegionIds_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setSupportRegionIds(string supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListArtifactVersionsResponseBodyArtifacts& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


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
    // The time when the certificate was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the deployment package was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The distribution result of the image.
    std::shared_ptr<map<string, string>> imageDelivery_ = nullptr;
    // The distribution progress of the deployment package.
    std::shared_ptr<string> progress_ = nullptr;
    // The result file of the security scan.
    std::shared_ptr<string> resultFile_ = nullptr;
    // The result of the security scan. Valid values:
    // 
    // *   Normal: No risks exist on the deployment package.
    // *   AtRisk: Risks exist on the deployment package.
    // *   Processing: The deployment package is being scanned.
    std::shared_ptr<string> securityAuditResult_ = nullptr;
    // The status of the deployment package. Valid values:
    // 
    // *   Created: The deployment package is created.
    // *   Scanning: The deployment package is being scanned.
    // *   ScanFailed: The deployment package failed to be scanned.
    // *   Delivering: The deployment package is being distributed.
    // *   Available: The deployment package is available.
    // *   Deleted: The deployment package is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The description of the deployment package.
    std::shared_ptr<string> statusDetail_ = nullptr;
    // The ID of the region that supports the deployment package.
    std::shared_ptr<string> supportRegionIds_ = nullptr;
    // The version name of the deployment package.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
