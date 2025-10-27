// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGERESPONSEBODYONCETASKSTASKIMAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGERESPONSEBODYONCETASKSTASKIMAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CostTimeInfo, costTimeInfo_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(NodeInstanceId, nodeInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CostTimeInfo, costTimeInfo_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceId, nodeInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo() = default ;
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo(const DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo &) = default ;
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo(DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo &&) = default ;
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo() = default ;
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& operator=(const DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo &) = default ;
    DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& operator=(DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->costTimeInfo_ == nullptr && return this->digest_ == nullptr && return this->image_ == nullptr
        && return this->nodeInstanceId_ == nullptr && return this->nodeIp_ == nullptr && return this->nodeName_ == nullptr && return this->pod_ == nullptr && return this->regionId_ == nullptr
        && return this->registryType_ == nullptr && return this->repoId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->repoRegionId_ == nullptr
        && return this->tag_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // costTimeInfo Field Functions 
    bool hasCostTimeInfo() const { return this->costTimeInfo_ != nullptr;};
    void deleteCostTimeInfo() { this->costTimeInfo_ = nullptr;};
    inline string costTimeInfo() const { DARABONBA_PTR_GET_DEFAULT(costTimeInfo_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setCostTimeInfo(string costTimeInfo) { DARABONBA_PTR_SET_VALUE(costTimeInfo_, costTimeInfo) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // nodeInstanceId Field Functions 
    bool hasNodeInstanceId() const { return this->nodeInstanceId_ != nullptr;};
    void deleteNodeInstanceId() { this->nodeInstanceId_ = nullptr;};
    inline string nodeInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setNodeInstanceId(string nodeInstanceId) { DARABONBA_PTR_SET_VALUE(nodeInstanceId_, nodeInstanceId) };


    // nodeIp Field Functions 
    bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
    void deleteNodeIp() { this->nodeIp_ = nullptr;};
    inline string nodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBodyOnceTasksTaskImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The time consumed. The value is in the JSON format. The end time of each item is displayed.
    // 
    // *   **vul**: system vulnerabilities
    // *   **scaVul**: application vulnerabilities
    // *   **scaVul**: baseline
    // *   **binary**: binary
    // *   **forbiddenPackageInfo**: information about the prohibited package
    // *   **identificationInfo**: identity authentication
    // *   **script**: malicious scripts
    // *   **sensitiveFile**: sensitive files
    // *   **sensitiveInfo**: AccessKey pair leaks
    // *   **webshell**: website scripts
    std::shared_ptr<string> costTimeInfo_ = nullptr;
    // The digest of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The image of the container.
    std::shared_ptr<string> image_ = nullptr;
    // The instance ID of the node.
    std::shared_ptr<string> nodeInstanceId_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> nodeIp_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The pod of the image.
    std::shared_ptr<string> pod_ = nullptr;
    // The region ID of the server image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the image repository. Valid values:
    // 
    // *   **acr**
    // *   **harbor**
    // *   **quay**
    // *   **CI/CD**
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The region ID of the image repository.
    std::shared_ptr<string> repoRegionId_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
