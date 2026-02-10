// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMEREQUEST_HPP_
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
  class DescribeImageListWithBaselineNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListWithBaselineNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListWithBaselineNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
    };
    DescribeImageListWithBaselineNameRequest() = default ;
    DescribeImageListWithBaselineNameRequest(const DescribeImageListWithBaselineNameRequest &) = default ;
    DescribeImageListWithBaselineNameRequest(DescribeImageListWithBaselineNameRequest &&) = default ;
    DescribeImageListWithBaselineNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListWithBaselineNameRequest() = default ;
    DescribeImageListWithBaselineNameRequest& operator=(const DescribeImageListWithBaselineNameRequest &) = default ;
    DescribeImageListWithBaselineNameRequest& operator=(DescribeImageListWithBaselineNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineNameKey_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->containerId_ == nullptr && this->criteria_ == nullptr && this->criteriaType_ == nullptr
        && this->currentPage_ == nullptr && this->image_ == nullptr && this->imageDigest_ == nullptr && this->lang_ == nullptr && this->namespace_ == nullptr
        && this->pageSize_ == nullptr && this->pod_ == nullptr && this->repoInstanceId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr
        && this->scanRange_ == nullptr; };
    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string getBaselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline DescribeImageListWithBaselineNameRequest& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeImageListWithBaselineNameRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeImageListWithBaselineNameRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeImageListWithBaselineNameRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageListWithBaselineNameRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string getCriteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline DescribeImageListWithBaselineNameRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageListWithBaselineNameRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeImageListWithBaselineNameRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeImageListWithBaselineNameRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageListWithBaselineNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeImageListWithBaselineNameRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageListWithBaselineNameRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeImageListWithBaselineNameRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string getRepoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeImageListWithBaselineNameRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageListWithBaselineNameRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageListWithBaselineNameRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageListWithBaselineNameRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageListWithBaselineNameRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


  protected:
    // The name of the image baseline.
    // 
    // This parameter is required.
    shared_ptr<string> baselineNameKey_ {};
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    shared_ptr<string> clusterId_ {};
    // The name of the cluster.
    shared_ptr<string> clusterName_ {};
    // The ID of the container.
    shared_ptr<string> containerId_ {};
    // The search condition for the image baseline.
    shared_ptr<string> criteria_ {};
    // The type of the search condition. Valid values:
    // 
    // *   **BaselineNameAlias**: baseline name
    // *   **BaselineClassAlias**: baseline category
    shared_ptr<string> criteriaType_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the image to which the container belongs.
    shared_ptr<string> image_ {};
    // The SHA-256 value of the image digest.
    shared_ptr<string> imageDigest_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The namespace.
    shared_ptr<string> namespace_ {};
    // The number of entries to return on each page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The pod.
    shared_ptr<string> pod_ {};
    // The instance ID of the image repository.
    shared_ptr<string> repoInstanceId_ {};
    // The name of the image repository.
    shared_ptr<string> repoName_ {};
    // The namespace to which the image repository belongs.
    shared_ptr<string> repoNamespace_ {};
    // The types of the assets that you want to scan.
    shared_ptr<vector<string>> scanRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
