// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListArtifactVersionsResponseBody() = default ;
    ListArtifactVersionsResponseBody(const ListArtifactVersionsResponseBody &) = default ;
    ListArtifactVersionsResponseBody(ListArtifactVersionsResponseBody &&) = default ;
    ListArtifactVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactVersionsResponseBody() = default ;
    ListArtifactVersionsResponseBody& operator=(const ListArtifactVersionsResponseBody &) = default ;
    ListArtifactVersionsResponseBody& operator=(ListArtifactVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
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
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactBuildProperty_ == nullptr
        && this->artifactBuildType_ == nullptr && this->artifactId_ == nullptr && this->artifactProperty_ == nullptr && this->artifactType_ == nullptr && this->artifactVersion_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageDelivery_ == nullptr && this->progress_ == nullptr && this->resultFile_ == nullptr
        && this->securityAuditResult_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr && this->supportRegionIds_ == nullptr && this->versionName_ == nullptr; };
      // artifactBuildProperty Field Functions 
      bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
      void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
      inline string getArtifactBuildProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildProperty_, "") };
      inline Artifacts& setArtifactBuildProperty(string artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };


      // artifactBuildType Field Functions 
      bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
      void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
      inline string getArtifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
      inline Artifacts& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


      // artifactId Field Functions 
      bool hasArtifactId() const { return this->artifactId_ != nullptr;};
      void deleteArtifactId() { this->artifactId_ = nullptr;};
      inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
      inline Artifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


      // artifactProperty Field Functions 
      bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
      void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
      inline string getArtifactProperty() const { DARABONBA_PTR_GET_DEFAULT(artifactProperty_, "") };
      inline Artifacts& setArtifactProperty(string artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };


      // artifactType Field Functions 
      bool hasArtifactType() const { return this->artifactType_ != nullptr;};
      void deleteArtifactType() { this->artifactType_ = nullptr;};
      inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
      inline Artifacts& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


      // artifactVersion Field Functions 
      bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
      void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
      inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
      inline Artifacts& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Artifacts& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Artifacts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageDelivery Field Functions 
      bool hasImageDelivery() const { return this->imageDelivery_ != nullptr;};
      void deleteImageDelivery() { this->imageDelivery_ = nullptr;};
      inline const map<string, string> & getImageDelivery() const { DARABONBA_PTR_GET_CONST(imageDelivery_, map<string, string>) };
      inline map<string, string> getImageDelivery() { DARABONBA_PTR_GET(imageDelivery_, map<string, string>) };
      inline Artifacts& setImageDelivery(const map<string, string> & imageDelivery) { DARABONBA_PTR_SET_VALUE(imageDelivery_, imageDelivery) };
      inline Artifacts& setImageDelivery(map<string, string> && imageDelivery) { DARABONBA_PTR_SET_RVALUE(imageDelivery_, imageDelivery) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Artifacts& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // resultFile Field Functions 
      bool hasResultFile() const { return this->resultFile_ != nullptr;};
      void deleteResultFile() { this->resultFile_ = nullptr;};
      inline string getResultFile() const { DARABONBA_PTR_GET_DEFAULT(resultFile_, "") };
      inline Artifacts& setResultFile(string resultFile) { DARABONBA_PTR_SET_VALUE(resultFile_, resultFile) };


      // securityAuditResult Field Functions 
      bool hasSecurityAuditResult() const { return this->securityAuditResult_ != nullptr;};
      void deleteSecurityAuditResult() { this->securityAuditResult_ = nullptr;};
      inline string getSecurityAuditResult() const { DARABONBA_PTR_GET_DEFAULT(securityAuditResult_, "") };
      inline Artifacts& setSecurityAuditResult(string securityAuditResult) { DARABONBA_PTR_SET_VALUE(securityAuditResult_, securityAuditResult) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Artifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
      inline Artifacts& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


      // supportRegionIds Field Functions 
      bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
      void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
      inline string getSupportRegionIds() const { DARABONBA_PTR_GET_DEFAULT(supportRegionIds_, "") };
      inline Artifacts& setSupportRegionIds(string supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Artifacts& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The build properties of the artifact, utilized for hosting and building the deployment package.
      shared_ptr<string> artifactBuildProperty_ {};
      // The type of the deployment package to be built.
      shared_ptr<string> artifactBuildType_ {};
      // The ID of the deployment package.
      shared_ptr<string> artifactId_ {};
      // The properties of the deployment package.
      shared_ptr<string> artifactProperty_ {};
      // The type of the deployment package.
      shared_ptr<string> artifactType_ {};
      // The version of the deployment package.
      shared_ptr<string> artifactVersion_ {};
      // The time when the certificate was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the deployment package was modified.
      shared_ptr<string> gmtModified_ {};
      // The distribution result of the image.
      shared_ptr<map<string, string>> imageDelivery_ {};
      // The distribution progress of the deployment package.
      shared_ptr<string> progress_ {};
      // The result file of the security scan.
      shared_ptr<string> resultFile_ {};
      // The result of the security scan. Valid values:
      // 
      // *   Normal: No risks exist on the deployment package.
      // *   AtRisk: Risks exist on the deployment package.
      // *   Processing: The deployment package is being scanned.
      shared_ptr<string> securityAuditResult_ {};
      // The status of the deployment package. Valid values:
      // 
      // *   Created: The deployment package is created.
      // *   Scanning: The deployment package is being scanned.
      // *   ScanFailed: The deployment package failed to be scanned.
      // *   Delivering: The deployment package is being distributed.
      // *   Available: The deployment package is available.
      // *   Deleted: The deployment package is deleted.
      shared_ptr<string> status_ {};
      // The description of the deployment package.
      shared_ptr<string> statusDetail_ {};
      // The ID of the region that supports the deployment package.
      shared_ptr<string> supportRegionIds_ {};
      // The version name of the deployment package.
      shared_ptr<string> versionName_ {};
    };

    virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const vector<ListArtifactVersionsResponseBody::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<ListArtifactVersionsResponseBody::Artifacts>) };
    inline vector<ListArtifactVersionsResponseBody::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<ListArtifactVersionsResponseBody::Artifacts>) };
    inline ListArtifactVersionsResponseBody& setArtifacts(const vector<ListArtifactVersionsResponseBody::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline ListArtifactVersionsResponseBody& setArtifacts(vector<ListArtifactVersionsResponseBody::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The version information about the deployment package.
    shared_ptr<vector<ListArtifactVersionsResponseBody::Artifacts>> artifacts_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
