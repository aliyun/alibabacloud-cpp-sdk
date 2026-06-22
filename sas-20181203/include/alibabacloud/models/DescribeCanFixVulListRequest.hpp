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
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->containerId_ == nullptr && this->currentPage_ == nullptr && this->dealed_ == nullptr
        && this->digest_ == nullptr && this->image_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->necessity_ == nullptr && this->pageSize_ == nullptr && this->pod_ == nullptr && this->regionId_ == nullptr && this->repoId_ == nullptr
        && this->repoInstanceId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoRegionId_ == nullptr && this->scanRange_ == nullptr
        && this->statusList_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr && this->uuids_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeCanFixVulListRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeCanFixVulListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeCanFixVulListRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeCanFixVulListRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCanFixVulListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeCanFixVulListRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeCanFixVulListRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeCanFixVulListRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCanFixVulListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCanFixVulListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeCanFixVulListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeCanFixVulListRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCanFixVulListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeCanFixVulListRequest& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCanFixVulListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeCanFixVulListRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string getRepoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline DescribeCanFixVulListRequest& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeCanFixVulListRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeCanFixVulListRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string getRepoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeCanFixVulListRequest& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & getScanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> getScanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeCanFixVulListRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeCanFixVulListRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string getStatusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline DescribeCanFixVulListRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeCanFixVulListRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCanFixVulListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeCanFixVulListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The alias in the vulnerability advisory.
    shared_ptr<string> aliasName_ {};
    // The ID of the container cluster.
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to obtain this parameter.
    shared_ptr<string> clusterId_ {};
    // The name of the container cluster.
    shared_ptr<string> clusterName_ {};
    // The container ID.
    shared_ptr<string> containerId_ {};
    // The page number of the current page in a paging query. The value starts from 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // **y**: Handled.
    // **n**: Not handled.
    shared_ptr<string> dealed_ {};
    // The unique identifier of the container image.
    shared_ptr<string> digest_ {};
    // The name of the container image.
    shared_ptr<string> image_ {};
    // The container image instance ID.
    // > Invoke the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation of Container Registry and obtain the container image instance ID from the **InstanceId** response parameter.
    shared_ptr<string> instanceId_ {};
    // The name of the vulnerability.
    shared_ptr<string> name_ {};
    // The cluster namespace.
    // > You can call the [GetOpaClusterNamespaceList](~~GetOpaClusterNamespaceList~~) operation to query this value.
    shared_ptr<string> namespace_ {};
    // The priority levels of vulnerabilities to query. Separate multiple levels with commas (,). Valid values:
    // 
    // - **asap**: high
    // - **later**: medium
    // - **nntf**: low.
    shared_ptr<string> necessity_ {};
    // The maximum number of entries per page in a paging query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the pod.
    shared_ptr<string> pod_ {};
    // The region ID of the image repository. Valid values:
    // - **cn-beijing**: China (Beijing)
    // - **cn-zhangjiakou**: China (Zhangjiakou)
    // - **cn-hangzhou**: China (Hangzhou)
    // - **cn-shanghai**: China (Shanghai)
    // - **cn-shenzhen**: China (Shenzhen)
    // - **cn-hongkong**: Hong Kong (China)
    // - **ap-southeast-1**: Singapore
    // - **ap-southeast-5**: Indonesia (Jakarta)
    // - **us-east-1**: US (Virginia)
    // - **us-west-1**: US (Silicon Valley)
    // - **eu-central-1**: Germany (Frankfurt)
    // - **eu-west-1**: UK (London).
    shared_ptr<string> regionId_ {};
    // The ID of the image repository.
    // > Call the [ListRepository](https://help.aliyun.com/document_detail/145293.html) operation of Container Registry and obtain the value of the **RepoId** response parameter.
    shared_ptr<string> repoId_ {};
    // The container image instance ID.
    // > Invoke the [ListRepository](https://help.aliyun.com/document_detail/451339.html) operation of Container Registry and obtain the container image instance ID from the **InstanceId** response parameter.
    shared_ptr<string> repoInstanceId_ {};
    // The name of the image repository.
    // > Fuzzy match is supported.
    shared_ptr<string> repoName_ {};
    // The namespace of the image repository.
    // > Fuzzy match is supported.
    shared_ptr<string> repoNamespace_ {};
    // The region ID of the image repository. Valid values:
    // - **cn-beijing**: China (Beijing)
    // - **cn-zhangjiakou**: China (Zhangjiakou)
    // - **cn-hangzhou**: China (Hangzhou)
    // - **cn-shanghai**: China (Shanghai)
    // - **cn-shenzhen**: China (Shenzhen)
    // - **cn-hongkong**: Hong Kong (China)
    // - **ap-southeast-1**: Singapore
    // - **ap-southeast-5**: Indonesia (Jakarta)
    // - **us-east-1**: US (Virginia)
    // - **us-west-1**: US (Silicon Valley)
    // - **eu-central-1**: Germany (Frankfurt)
    // - **eu-west-1**: UK (London).
    shared_ptr<string> repoRegionId_ {};
    // The scan scope. Valid values:
    // 
    // - **image**: Image.
    // - **container**: Container.
    shared_ptr<vector<string>> scanRange_ {};
    // The fix status of the vulnerability. Valid values:
    // - **1**: Unfixed.
    // - **4**: Being fixed.
    // - **7**: Fixed.
    shared_ptr<string> statusList_ {};
    // The tag of the container image.
    shared_ptr<string> tag_ {};
    // The vulnerability type. Valid values:
    // - **cve**: system vulnerability
    // - **sca**: application vulnerability.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The UUIDs of images. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
