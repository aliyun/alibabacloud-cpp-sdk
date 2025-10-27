// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsSecurityEventSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsSecurityEventSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsSecurityEventSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeAssetsSecurityEventSummaryRequest() = default ;
    DescribeAssetsSecurityEventSummaryRequest(const DescribeAssetsSecurityEventSummaryRequest &) = default ;
    DescribeAssetsSecurityEventSummaryRequest(DescribeAssetsSecurityEventSummaryRequest &&) = default ;
    DescribeAssetsSecurityEventSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsSecurityEventSummaryRequest() = default ;
    DescribeAssetsSecurityEventSummaryRequest& operator=(const DescribeAssetsSecurityEventSummaryRequest &) = default ;
    DescribeAssetsSecurityEventSummaryRequest& operator=(DescribeAssetsSecurityEventSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->containerFieldName_ == nullptr && return this->containerFieldValue_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAssetsSecurityEventSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeAssetsSecurityEventSummaryRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeAssetsSecurityEventSummaryRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAssetsSecurityEventSummaryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeAssetsSecurityEventSummaryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the cluster to which the container belongs.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The key of the condition that is used to query on containers. Valid values:
    // 
    // *   **instanceId**: the ID of the container instance
    // *   **clusterId**: the ID of the cluster
    // *   **regionId**: the region ID of the container
    // *   **clusterName**: the name of the cluster
    // *   **image**: the name of the image
    // *   **imageRepoName**: the name of the image repository
    // *   **imageRepoNamespace**: the namespace to which the image repository belongs
    // *   **imageRepoTag**: the tag that is added to the image repository
    // *   **imageDigest**: the digest of the image
    // *   **ClusterType**: the type of the cluster
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
    // The value of the condition that is used to query on containers.
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
