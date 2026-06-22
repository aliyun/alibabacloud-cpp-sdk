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
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->imageDigest_ == nullptr && this->imageRepoName_ == nullptr && this->imageRepoNamespace_ == nullptr
        && this->imageTag_ == nullptr && this->resourceOwnerId_ == nullptr && this->sourceIp_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageRepoName Field Functions 
    bool hasImageRepoName() const { return this->imageRepoName_ != nullptr;};
    void deleteImageRepoName() { this->imageRepoName_ = nullptr;};
    inline string getImageRepoName() const { DARABONBA_PTR_GET_DEFAULT(imageRepoName_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageRepoName(string imageRepoName) { DARABONBA_PTR_SET_VALUE(imageRepoName_, imageRepoName) };


    // imageRepoNamespace Field Functions 
    bool hasImageRepoNamespace() const { return this->imageRepoNamespace_ != nullptr;};
    void deleteImageRepoNamespace() { this->imageRepoNamespace_ = nullptr;};
    inline string getImageRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(imageRepoNamespace_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageRepoNamespace(string imageRepoNamespace) { DARABONBA_PTR_SET_VALUE(imageRepoNamespace_, imageRepoNamespace) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeClusterImageSecuritySummaryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeClusterImageSecuritySummaryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The container search field. Valid values:
    // 
    // - **instanceId**: container instance ID
    // - **clusterId**: cluster ID
    // - **regionId**: container region
    // - **clusterName**: cluster name
    // - **image**: image name
    // - **imageRepoName**: image repository name
    // - **imageRepoNamespace**: image repository namespace
    // - **imageRepoTag**: image repository tag
    // - **imageDigest**: image digest
    // - **clusterType**: cluster type
    // - **hostIp**: public IP address
    // - **pod**: pod
    // - **podIp**: pod IP address
    // - **containerId**: container ID
    // - **vulStatus**: whether the container has vulnerabilities
    // - **alarmStatus**: whether the container has security alerts
    // - **riskStatus**: whether the container has risks
    // - **riskLevel**: container risk level
    // - **containerScope**: container type.
    shared_ptr<string> containerFieldName_ {};
    // The value of the container search field.
    shared_ptr<string> containerFieldValue_ {};
    // The image digest.
    shared_ptr<string> imageDigest_ {};
    // The image repository name.
    shared_ptr<string> imageRepoName_ {};
    // The image repository namespace.
    shared_ptr<string> imageRepoNamespace_ {};
    // The image tag.
    shared_ptr<string> imageTag_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
