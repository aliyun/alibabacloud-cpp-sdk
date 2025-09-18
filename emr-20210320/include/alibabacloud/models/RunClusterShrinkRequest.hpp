// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigsShrink_);
      DARABONBA_PTR_TO_JSON(Applications, applicationsShrink_);
      DARABONBA_PTR_TO_JSON(BootstrapScripts, bootstrapScriptsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributesShrink_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Promotions, promotionsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfigShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(Applications, applicationsShrink_);
      DARABONBA_PTR_FROM_JSON(BootstrapScripts, bootstrapScriptsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotionsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    RunClusterShrinkRequest() = default ;
    RunClusterShrinkRequest(const RunClusterShrinkRequest &) = default ;
    RunClusterShrinkRequest(RunClusterShrinkRequest &&) = default ;
    RunClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunClusterShrinkRequest() = default ;
    RunClusterShrinkRequest& operator=(const RunClusterShrinkRequest &) = default ;
    RunClusterShrinkRequest& operator=(RunClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigsShrink_ != nullptr
        && this->applicationsShrink_ != nullptr && this->bootstrapScriptsShrink_ != nullptr && this->clientToken_ != nullptr && this->clusterName_ != nullptr && this->clusterType_ != nullptr
        && this->deletionProtection_ != nullptr && this->deployMode_ != nullptr && this->description_ != nullptr && this->nodeAttributesShrink_ != nullptr && this->nodeGroupsShrink_ != nullptr
        && this->paymentType_ != nullptr && this->promotionsShrink_ != nullptr && this->regionId_ != nullptr && this->releaseVersion_ != nullptr && this->resourceGroupId_ != nullptr
        && this->securityMode_ != nullptr && this->subscriptionConfigShrink_ != nullptr && this->tagsShrink_ != nullptr; };
    // applicationConfigsShrink Field Functions 
    bool hasApplicationConfigsShrink() const { return this->applicationConfigsShrink_ != nullptr;};
    void deleteApplicationConfigsShrink() { this->applicationConfigsShrink_ = nullptr;};
    inline string applicationConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationConfigsShrink_, "") };
    inline RunClusterShrinkRequest& setApplicationConfigsShrink(string applicationConfigsShrink) { DARABONBA_PTR_SET_VALUE(applicationConfigsShrink_, applicationConfigsShrink) };


    // applicationsShrink Field Functions 
    bool hasApplicationsShrink() const { return this->applicationsShrink_ != nullptr;};
    void deleteApplicationsShrink() { this->applicationsShrink_ = nullptr;};
    inline string applicationsShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationsShrink_, "") };
    inline RunClusterShrinkRequest& setApplicationsShrink(string applicationsShrink) { DARABONBA_PTR_SET_VALUE(applicationsShrink_, applicationsShrink) };


    // bootstrapScriptsShrink Field Functions 
    bool hasBootstrapScriptsShrink() const { return this->bootstrapScriptsShrink_ != nullptr;};
    void deleteBootstrapScriptsShrink() { this->bootstrapScriptsShrink_ = nullptr;};
    inline string bootstrapScriptsShrink() const { DARABONBA_PTR_GET_DEFAULT(bootstrapScriptsShrink_, "") };
    inline RunClusterShrinkRequest& setBootstrapScriptsShrink(string bootstrapScriptsShrink) { DARABONBA_PTR_SET_VALUE(bootstrapScriptsShrink_, bootstrapScriptsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunClusterShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline RunClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline RunClusterShrinkRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunClusterShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline RunClusterShrinkRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunClusterShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeAttributesShrink Field Functions 
    bool hasNodeAttributesShrink() const { return this->nodeAttributesShrink_ != nullptr;};
    void deleteNodeAttributesShrink() { this->nodeAttributesShrink_ = nullptr;};
    inline string nodeAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeAttributesShrink_, "") };
    inline RunClusterShrinkRequest& setNodeAttributesShrink(string nodeAttributesShrink) { DARABONBA_PTR_SET_VALUE(nodeAttributesShrink_, nodeAttributesShrink) };


    // nodeGroupsShrink Field Functions 
    bool hasNodeGroupsShrink() const { return this->nodeGroupsShrink_ != nullptr;};
    void deleteNodeGroupsShrink() { this->nodeGroupsShrink_ = nullptr;};
    inline string nodeGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupsShrink_, "") };
    inline RunClusterShrinkRequest& setNodeGroupsShrink(string nodeGroupsShrink) { DARABONBA_PTR_SET_VALUE(nodeGroupsShrink_, nodeGroupsShrink) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline RunClusterShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // promotionsShrink Field Functions 
    bool hasPromotionsShrink() const { return this->promotionsShrink_ != nullptr;};
    void deletePromotionsShrink() { this->promotionsShrink_ = nullptr;};
    inline string promotionsShrink() const { DARABONBA_PTR_GET_DEFAULT(promotionsShrink_, "") };
    inline RunClusterShrinkRequest& setPromotionsShrink(string promotionsShrink) { DARABONBA_PTR_SET_VALUE(promotionsShrink_, promotionsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunClusterShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline RunClusterShrinkRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunClusterShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string securityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline RunClusterShrinkRequest& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfigShrink Field Functions 
    bool hasSubscriptionConfigShrink() const { return this->subscriptionConfigShrink_ != nullptr;};
    void deleteSubscriptionConfigShrink() { this->subscriptionConfigShrink_ = nullptr;};
    inline string subscriptionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(subscriptionConfigShrink_, "") };
    inline RunClusterShrinkRequest& setSubscriptionConfigShrink(string subscriptionConfigShrink) { DARABONBA_PTR_SET_VALUE(subscriptionConfigShrink_, subscriptionConfigShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline RunClusterShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The application configurations. Number of elements in the array: 1 to 1000.
    std::shared_ptr<string> applicationConfigsShrink_ = nullptr;
    // The list of services. Number of elements in the array: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationsShrink_ = nullptr;
    // The array of bootstrap scripts. Number of elements in the array: 1 to 10.
    std::shared_ptr<string> bootstrapScriptsShrink_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. The same ClientToken value for multiple calls to the RunCluster operation results in identical responses. Only one cluster can be created by using the same ClientToken value.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The cluster name. The name must be 1 to 128 characters in length. The name must start with a letter but cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   DATALAKE
    // *   OLAP
    // *   DATAFLOW
    // *   DATASERVING
    // *   CUSTOM
    // *   HADOOP: We recommend that you set this parameter to DATALAKE rather than HADOOP.
    // 
    // If the first time you create an EMR cluster is after 17:00 (UTC+8) on December 19, 2022, you cannot create a Hadoop, Data Science, Presto, or ZooKeeper cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // Specifies whether to enable release protection for the cluster. Valid values:
    // 
    // *   true: enables release protection for the cluster.
    // *   false: disables release protection for the cluster.
    // 
    // Default value: false.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The deployment mode of master nodes in the cluster. Valid values:
    // 
    // *   NORMAL: regular mode. This is the default value. A cluster that contains only one master node is created.
    // *   HA: high availability mode. A cluster that contains at least three master nodes is created.
    std::shared_ptr<string> deployMode_ = nullptr;
    // The cluster description.
    std::shared_ptr<string> description_ = nullptr;
    // The node attributes. The basic attributes of all ECS nodes in the cluster.
    std::shared_ptr<string> nodeAttributesShrink_ = nullptr;
    // The array of configurations of the node groups. Number of elements in the array: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupsShrink_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    // 
    // Default value: PayAsYouGo.
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> promotionsShrink_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The EMR version. You can query available EMR versions in the EMR console.
    // 
    // This parameter is required.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security mode of the cluster. Valid values:
    // 
    // *   NORMAL: regular mode. Kerberos authentication is disabled. This is the default value.
    // *   KERBEROS: Kerberos mode. Kerberos authentication is enabled.
    std::shared_ptr<string> securityMode_ = nullptr;
    // The subscription configurations. This parameter is required when the PaymentType parameter is set to Subscription.
    std::shared_ptr<string> subscriptionConfigShrink_ = nullptr;
    // The tag. Number of elements in the array: 0 to 20.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
