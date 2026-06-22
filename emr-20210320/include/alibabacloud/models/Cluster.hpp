// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTER_HPP_
#define ALIBABACLOUD_MODELS_CLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/ClusterStateChangeReason.hpp>
#include <alibabacloud/models/SubscriptionConfig.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Cluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    Cluster() = default ;
    Cluster(const Cluster &) = default ;
    Cluster(Cluster &&) = default ;
    Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Cluster() = default ;
    Cluster& operator=(const Cluster &) = default ;
    Cluster& operator=(Cluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterState_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr && this->deletionProtection_ == nullptr
        && this->deployMode_ == nullptr && this->description_ == nullptr && this->emrDefaultRole_ == nullptr && this->endTime_ == nullptr && this->expireTime_ == nullptr
        && this->nodeAttributes_ == nullptr && this->paymentType_ == nullptr && this->readyTime_ == nullptr && this->regionId_ == nullptr && this->releaseVersion_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityMode_ == nullptr && this->stateChangeReason_ == nullptr && this->subscriptionConfig_ == nullptr && this->tags_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline Cluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline Cluster& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline Cluster& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Cluster& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline Cluster& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline Cluster& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Cluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // emrDefaultRole Field Functions 
    bool hasEmrDefaultRole() const { return this->emrDefaultRole_ != nullptr;};
    void deleteEmrDefaultRole() { this->emrDefaultRole_ = nullptr;};
    inline string getEmrDefaultRole() const { DARABONBA_PTR_GET_DEFAULT(emrDefaultRole_, "") };
    inline Cluster& setEmrDefaultRole(string emrDefaultRole) { DARABONBA_PTR_SET_VALUE(emrDefaultRole_, emrDefaultRole) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Cluster& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline Cluster& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const NodeAttributes & getNodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
    inline NodeAttributes getNodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
    inline Cluster& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline Cluster& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline Cluster& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline int64_t getReadyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, 0L) };
    inline Cluster& setReadyTime(int64_t readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline Cluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline Cluster& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Cluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string getSecurityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline Cluster& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const ClusterStateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, ClusterStateChangeReason) };
    inline ClusterStateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, ClusterStateChangeReason) };
    inline Cluster& setStateChangeReason(const ClusterStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline Cluster& setStateChangeReason(ClusterStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline Cluster& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline Cluster& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline Cluster& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Cluster& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The cluster state. Valid values:
    // 
    // - `STARTING`: The cluster is starting.
    // 
    // - `START_FAILED`: The cluster failed to start.
    // 
    // - `BOOTSTRAPPING`: The cluster is running bootstrap actions.
    // 
    // - `RUNNING`: The cluster is running.
    // 
    // - `TERMINATING`: The cluster is terminating.
    // 
    // - `TERMINATED`: The cluster is terminated.
    // 
    // - `TERMINATED_WITH_ERRORS`: The cluster terminated due to errors.
    // 
    // - `TERMINATE_FAILED`: The cluster failed to terminate.
    shared_ptr<string> clusterState_ {};
    // The cluster type. Valid values:
    // 
    // - `DATALAKE`: New data lake.
    // 
    // - `OLAP`: Data analysis.
    // 
    // - `DATAFLOW`: Real-time data flow.
    // 
    // - `DATASERVING`: Data serving.
    // 
    // - `CUSTOM`: Custom cluster.
    // 
    // - `HADOOP`: Legacy data lake.
    shared_ptr<string> clusterType_ {};
    // The time when the cluster was created. The time is a Unix timestamp in milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // Indicates whether deletion protection is enabled for the cluster.
    shared_ptr<bool> deletionProtection_ {};
    // The application deployment mode. Valid values:
    // 
    // - `NORMAL`: Standard deployment.
    // 
    // - `HA`: High-availability deployment.
    shared_ptr<string> deployMode_ {};
    // The cluster description.
    shared_ptr<string> description_ {};
    // The default role for E-MapReduce.
    shared_ptr<string> emrDefaultRole_ {};
    // The time when the cluster was deleted. The time is a Unix timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The time when the cluster is scheduled to expire. The time is a Unix timestamp in milliseconds.
    shared_ptr<int64_t> expireTime_ {};
    // The node attributes.
    shared_ptr<NodeAttributes> nodeAttributes_ {};
    // The billing method. Valid values:
    // 
    // - `PayAsYouGo`: Pay-as-you-go.
    // 
    // - `Subscription`: Subscription.
    shared_ptr<string> paymentType_ {};
    // The time when the cluster became ready. The time is a Unix timestamp in milliseconds.
    shared_ptr<int64_t> readyTime_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The release version of E-MapReduce.
    shared_ptr<string> releaseVersion_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The security mode of the cluster. Valid values:
    // 
    // - `NORMAL`: Kerberos is disabled.
    // 
    // - `KERBEROS`: Kerberos is enabled.
    shared_ptr<string> securityMode_ {};
    // The reason for the cluster state change.
    shared_ptr<ClusterStateChangeReason> stateChangeReason_ {};
    // The subscription configuration.
    shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
    // The cluster tags.
    shared_ptr<vector<Tag>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
