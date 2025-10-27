// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESREQUEST_HPP_
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
  class DescribeAffectedMaliciousFileImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedMaliciousFileImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedMaliciousFileImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageLayer, imageLayer_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAffectedMaliciousFileImagesRequest() = default ;
    DescribeAffectedMaliciousFileImagesRequest(const DescribeAffectedMaliciousFileImagesRequest &) = default ;
    DescribeAffectedMaliciousFileImagesRequest(DescribeAffectedMaliciousFileImagesRequest &&) = default ;
    DescribeAffectedMaliciousFileImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedMaliciousFileImagesRequest() = default ;
    DescribeAffectedMaliciousFileImagesRequest& operator=(const DescribeAffectedMaliciousFileImagesRequest &) = default ;
    DescribeAffectedMaliciousFileImagesRequest& operator=(DescribeAffectedMaliciousFileImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->containerId_ == nullptr && return this->currentPage_ == nullptr && return this->image_ == nullptr && return this->imageDigest_ == nullptr
        && return this->imageLayer_ == nullptr && return this->imageTag_ == nullptr && return this->lang_ == nullptr && return this->levels_ == nullptr && return this->maliciousMd5_ == nullptr
        && return this->namespace_ == nullptr && return this->pageSize_ == nullptr && return this->pod_ == nullptr && return this->repoId_ == nullptr && return this->repoInstanceId_ == nullptr
        && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoRegionId_ == nullptr && return this->scanRange_ == nullptr && return this->status_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAffectedMaliciousFileImagesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageLayer Field Functions 
    bool hasImageLayer() const { return this->imageLayer_ != nullptr;};
    void deleteImageLayer() { this->imageLayer_ = nullptr;};
    inline string imageLayer() const { DARABONBA_PTR_GET_DEFAULT(imageLayer_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setImageLayer(string imageLayer) { DARABONBA_PTR_SET_VALUE(imageLayer_, imageLayer) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeAffectedMaliciousFileImagesRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeAffectedMaliciousFileImagesRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAffectedMaliciousFileImagesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the container image.
    std::shared_ptr<string> image_ = nullptr;
    // The image digest.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The image layer.
    std::shared_ptr<string> imageLayer_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The severity level of the malicious image sample. Separate multiple severity levels with commas (,). Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> levels_ = nullptr;
    // The MD5 hash value of the malicious image sample.
    // 
    // >  You can call the [DescribeGroupedMaliciousFiles](~~DescribeGroupedMaliciousFiles~~) operation to query the MD5 hash values of malicious image samples.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The ID of the image repository.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation to query the IDs of image repositories from the value of the **RepoId** response parameter.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the container image.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation to query the IDs of container images from the value of the **InstanceId** response parameter.
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
    // The status of the malicious image sample. Valid values:
    // 
    // *   **0**: The malicious image sample is not handled.
    // *   **1**: The malicious image sample is handled.
    // *   **2**: The malicious image sample is being verified.
    // *   **3**: The malicious image sample is added to the whitelist.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
