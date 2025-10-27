// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESREQUEST_HPP_
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
  class DescribeGroupedMaliciousFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FuzzyMaliciousName, fuzzyMaliciousName_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FuzzyMaliciousName, fuzzyMaliciousName_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
    };
    DescribeGroupedMaliciousFilesRequest() = default ;
    DescribeGroupedMaliciousFilesRequest(const DescribeGroupedMaliciousFilesRequest &) = default ;
    DescribeGroupedMaliciousFilesRequest(DescribeGroupedMaliciousFilesRequest &&) = default ;
    DescribeGroupedMaliciousFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedMaliciousFilesRequest() = default ;
    DescribeGroupedMaliciousFilesRequest& operator=(const DescribeGroupedMaliciousFilesRequest &) = default ;
    DescribeGroupedMaliciousFilesRequest& operator=(DescribeGroupedMaliciousFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->currentPage_ == nullptr && return this->fuzzyMaliciousName_ == nullptr && return this->imageDigest_ == nullptr && return this->imageLayer_ == nullptr && return this->imageTag_ == nullptr
        && return this->lang_ == nullptr && return this->levels_ == nullptr && return this->maliciousMd5_ == nullptr && return this->pageSize_ == nullptr && return this->repoId_ == nullptr
        && return this->repoInstanceId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoRegionId_ == nullptr && return this->scanRange_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedMaliciousFilesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fuzzyMaliciousName Field Functions 
    bool hasFuzzyMaliciousName() const { return this->fuzzyMaliciousName_ != nullptr;};
    void deleteFuzzyMaliciousName() { this->fuzzyMaliciousName_ = nullptr;};
    inline string fuzzyMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(fuzzyMaliciousName_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setFuzzyMaliciousName(string fuzzyMaliciousName) { DARABONBA_PTR_SET_VALUE(fuzzyMaliciousName_, fuzzyMaliciousName) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageLayer Field Functions 
    bool hasImageLayer() const { return this->imageLayer_ != nullptr;};
    void deleteImageLayer() { this->imageLayer_ = nullptr;};
    inline string imageLayer() const { DARABONBA_PTR_GET_DEFAULT(imageLayer_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setImageLayer(string imageLayer) { DARABONBA_PTR_SET_VALUE(imageLayer_, imageLayer) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeGroupedMaliciousFilesRequest& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeGroupedMaliciousFilesRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeGroupedMaliciousFilesRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


  protected:
    // The cluster ID of the container on which the malicious image sample is detected.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the malicious image sample that you want to query.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> fuzzyMaliciousName_ = nullptr;
    // The image digest.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The image layer.
    std::shared_ptr<string> imageLayer_ = nullptr;
    // The image tag.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The severity of the malicious image sample that you want to query. You can enter multiple severities. Separate the severities with commas (,). Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> levels_ = nullptr;
    // The MD5 hash value of the malicious image sample.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the image repository.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/145293.html) operation to query the IDs of image repositories from the value of the **RepoId** response parameter.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the container image.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/145293.html) operation to query the IDs of container images from the value of the **InstanceId** response parameter.
    std::shared_ptr<string> repoInstanceId_ = nullptr;
    // The name of the image repository.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The region ID of the image repository. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-zhangjiakou**: China (Zhangjiakou)
    // *   **cn-hangzhou**: China (Hangzhou)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **cn-hongkong**: China (Hong Kong)
    // *   **ap-southeast-1**: Singapore
    // *   **ap-southeast-5**: Indonesia (Jakarta)
    // *   **us-east-1**: US (Virginia)
    // *   **us-west-1**: US (Silicon Valley)
    // *   **eu-central-1**: Germany (Frankfurt)
    // *   **eu-west-1**: UK (London)
    std::shared_ptr<string> repoRegionId_ = nullptr;
    // The types of the assets that you want to scan.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
