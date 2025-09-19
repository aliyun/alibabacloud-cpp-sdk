// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTREQUEST_HPP_
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
  class DescribeCanFixVulListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanFixVulListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanFixVulListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeCanFixVulListRequest() = default ;
    DescribeCanFixVulListRequest(const DescribeCanFixVulListRequest &) = default ;
    DescribeCanFixVulListRequest(DescribeCanFixVulListRequest &&) = default ;
    DescribeCanFixVulListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanFixVulListRequest() = default ;
    DescribeCanFixVulListRequest& operator=(const DescribeCanFixVulListRequest &) = default ;
    DescribeCanFixVulListRequest& operator=(DescribeCanFixVulListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->containerId_ != nullptr && this->currentPage_ != nullptr && this->dealed_ != nullptr
        && this->digest_ != nullptr && this->image_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr
        && this->necessity_ != nullptr && this->pageSize_ != nullptr && this->pod_ != nullptr && this->regionId_ != nullptr && this->repoId_ != nullptr
        && this->repoInstanceId_ != nullptr && this->repoName_ != nullptr && this->repoNamespace_ != nullptr && this->repoRegionId_ != nullptr && this->scanRange_ != nullptr
        && this->statusList_ != nullptr && this->tag_ != nullptr && this->type_ != nullptr && this->uuids_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeCanFixVulListRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeCanFixVulListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeCanFixVulListRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeCanFixVulListRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCanFixVulListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeCanFixVulListRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeCanFixVulListRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeCanFixVulListRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCanFixVulListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCanFixVulListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeCanFixVulListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeCanFixVulListRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCanFixVulListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeCanFixVulListRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCanFixVulListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeCanFixVulListRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeCanFixVulListRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeCanFixVulListRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeCanFixVulListRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeCanFixVulListRequest& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeCanFixVulListRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeCanFixVulListRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline DescribeCanFixVulListRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeCanFixVulListRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCanFixVulListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeCanFixVulListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The alias of the vulnerability that is specified in Common Vulnerabilities and Exposures (CVE).
    std::shared_ptr<string> aliasName_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The container ID.
    std::shared_ptr<string> containerId_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // **y**: The vulnerability is handled. **n**: The vulnerability is not handled.
    std::shared_ptr<string> dealed_ = nullptr;
    // The unique identifier of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The ID of the container image.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation of Container Registry and obtain the ID of the container image from **InstanceId** in the response.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the cluster.
    // 
    // >  You can call the [GetOpaClusterNamespaceList](~~GetOpaClusterNamespaceList~~) operation to query the namespaces of clusters.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority to fix the vulnerability. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    std::shared_ptr<string> necessity_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the container group.
    std::shared_ptr<string> pod_ = nullptr;
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
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the image repository.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/145293.html) operation of Container Registry and obtain the ID of the image repository from **RepoId** in the response.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the container image.
    // 
    // >  You can call the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation of Container Registry and obtain the ID of the container image from **InstanceId** in the response.
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
    // The type of the asset that you want to scan. Valid values:
    // 
    // *   **image**
    // *   **container**
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
    // The status of the vulnerability. Valid values:
    // 
    // *   **1**: The vulnerability is unfixed.
    // *   **4**: The vulnerability is being fixed.
    // *   **7**:The vulnerability is fixed.
    std::shared_ptr<string> statusList_ = nullptr;
    // The tag to add to the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: system vulnerability
    // *   **sca**: application vulnerability
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the image. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
