// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterImageSecuritySummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterImageSecuritySummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_TO_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterImageSecuritySummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(ImageRepoName, imageRepoName_);
      DARABONBA_PTR_FROM_JSON(ImageRepoNamespace, imageRepoNamespace_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeClusterImageSecuritySummaryRequest() = default ;
    DescribeClusterImageSecuritySummaryRequest(const DescribeClusterImageSecuritySummaryRequest &) = default ;
    DescribeClusterImageSecuritySummaryRequest(DescribeClusterImageSecuritySummaryRequest &&) = default ;
    DescribeClusterImageSecuritySummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterImageSecuritySummaryRequest() = default ;
    DescribeClusterImageSecuritySummaryRequest& operator=(const DescribeClusterImageSecuritySummaryRequest &) = default ;
    DescribeClusterImageSecuritySummaryRequest& operator=(DescribeClusterImageSecuritySummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->containerFieldName_ != nullptr && this->containerFieldValue_ != nullptr && this->imageDigest_ != nullptr && this->imageRepoName_ != nullptr && this->imageRepoNamespace_ != nullptr
        && this->imageTag_ != nullptr && this->resourceOwnerId_ != nullptr && this->sourceIp_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageRepoName Field Functions 
    bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
    void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
    inline string imageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


    // imageRepoNamespace Field Functions 
    bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
    void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
    inline string imageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeClusterImageSecuritySummaryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The key of the condition that is used to query containers. Valid values:
    // 
    // *   **instanceId**: the instance ID of the container
    // *   **clusterId**: the ID of the cluster
    // *   **regionId**: the region ID of the container
    // *   **clusterName**: the name of the cluster
    // *   **image**: the name of the image
    // *   **imageRepoName**: the name of the image repository
    // *   **imageRepoNamespace**: the namespace to which the image repository belongs
    // *   **imageRepoTag**: the tag that is added to the image repository
    // *   **imageDigest**: the digest of the image
    // *   **clusterType**: the type of the cluster
    // *   **hostIp**: the public IP address
    // *   **pod**: the pod
    // *   **podIp**: the IP address of the pod
    // *   **containerId**: the ID of the container
    // *   **vulStatus**: whether vulnerabilities are detected on the container
    // *   **alarmStatus**: whether alerts are generated for the container
    // *   **riskStatus**: whether risks are detected on the container
    // *   **riskLevel**: the risk level of the container
    // *   **containerScope**: the type of the container
    std::shared_ptr<string> containerFieldName_ = nullptr;
    // The value of the condition that is used to query containers.
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    // The digest of the image.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> imageRepoName_ = nullptr;
    // The namespace of the image repository.
    std::shared_ptr<string> imageRepoNamespace_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
