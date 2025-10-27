// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageGroupedVulListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageGroupedVulListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageGroupedVulListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeImageGroupedVulListRequest() = default ;
    DescribeImageGroupedVulListRequest(const DescribeImageGroupedVulListRequest &) = default ;
    DescribeImageGroupedVulListRequest(DescribeImageGroupedVulListRequest &&) = default ;
    DescribeImageGroupedVulListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageGroupedVulListRequest() = default ;
    DescribeImageGroupedVulListRequest& operator=(const DescribeImageGroupedVulListRequest &) = default ;
    DescribeImageGroupedVulListRequest& operator=(DescribeImageGroupedVulListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->clusterId_ == nullptr && return this->currentPage_ == nullptr && return this->cveId_ == nullptr && return this->groupId_ == nullptr && return this->imageDigest_ == nullptr
        && return this->imageLayer_ == nullptr && return this->imageTag_ == nullptr && return this->isLatest_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr
        && return this->necessity_ == nullptr && return this->pageSize_ == nullptr && return this->patchId_ == nullptr && return this->repoId_ == nullptr && return this->repoInstanceId_ == nullptr
        && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoRegionId_ == nullptr && return this->ruleTag_ == nullptr && return this->scanRange_ == nullptr
        && return this->type_ == nullptr && return this->uuids_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeImageGroupedVulListRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeImageGroupedVulListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageGroupedVulListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeImageGroupedVulListRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeImageGroupedVulListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeImageGroupedVulListRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageLayer Field Functions 
    bool hasImageLayer() const { return this->imageLayer_ != nullptr;};
    void deleteImageLayer() { this->imageLayer_ = nullptr;};
    inline string imageLayer() const { DARABONBA_PTR_GET_DEFAULT(imageLayer_, "") };
    inline DescribeImageGroupedVulListRequest& setImageLayer(string imageLayer) { DARABONBA_PTR_SET_VALUE(imageLayer_, imageLayer) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeImageGroupedVulListRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // isLatest Field Functions 
    bool hasIsLatest() const { return this->isLatest_ != nullptr;};
    void deleteIsLatest() { this->isLatest_ = nullptr;};
    inline int32_t isLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, 0) };
    inline DescribeImageGroupedVulListRequest& setIsLatest(int32_t isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageGroupedVulListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageGroupedVulListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeImageGroupedVulListRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageGroupedVulListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline int64_t patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, 0L) };
    inline DescribeImageGroupedVulListRequest& setPatchId(int64_t patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeImageGroupedVulListRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeImageGroupedVulListRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageGroupedVulListRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageGroupedVulListRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeImageGroupedVulListRequest& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline DescribeImageGroupedVulListRequest& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageGroupedVulListRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageGroupedVulListRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageGroupedVulListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeImageGroupedVulListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID of the vulnerability.
    std::shared_ptr<string> cveId_ = nullptr;
    // The ID of the asset group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The SHA-256 value of the image digest.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The layer of the image.
    std::shared_ptr<string> imageLayer_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    // Specifies whether to query the vulnerabilities in the latest images. If you do not specify this parameter, the vulnerabilities in all images are queried. Valid values:
    // 
    // *   **0**: does not query the vulnerabilities in the latest images.
    // *   **1**: queries the vulnerabilities in the latest images.
    std::shared_ptr<int32_t> isLatest_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The priority to fix the vulnerability. Valid values:
    // 
    // *   **asap**: high. You must fix the vulnerability at the earliest opportunity.
    // *   **later**: medium. You can fix the vulnerability based on your business requirements.
    // *   **nntf**: low. You can ignore the vulnerability.
    std::shared_ptr<string> necessity_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the patch that is used to fix the vulnerability.
    std::shared_ptr<int64_t> patchId_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The instance ID of the image repository.
    std::shared_ptr<string> repoInstanceId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The region ID of the image repository.
    std::shared_ptr<string> repoRegionId_ = nullptr;
    // The tag of this vulnerability. Valid values:
    // 
    // *   **AI**: AI-related components.
    std::shared_ptr<string> ruleTag_ = nullptr;
    // An array consisting of the types of the assets that you want to scan.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
    // The type of the vulnerability that you want to query. Valid values:
    // 
    // *   **cve**: image system vulnerability
    // *   **sca**: image application vulnerability
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the asset. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
