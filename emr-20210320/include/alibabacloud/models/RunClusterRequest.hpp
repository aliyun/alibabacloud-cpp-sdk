// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/Script.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/NodeGroupConfig.hpp>
#include <alibabacloud/models/Promotion.hpp>
#include <alibabacloud/models/SubscriptionConfig.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, RunClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    RunClusterRequest() = default ;
    RunClusterRequest(const RunClusterRequest &) = default ;
    RunClusterRequest(RunClusterRequest &&) = default ;
    RunClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunClusterRequest() = default ;
    RunClusterRequest& operator=(const RunClusterRequest &) = default ;
    RunClusterRequest& operator=(RunClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && return this->applications_ == nullptr && return this->bootstrapScripts_ == nullptr && return this->clientToken_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->deployMode_ == nullptr && return this->description_ == nullptr && return this->nodeAttributes_ == nullptr && return this->nodeGroups_ == nullptr
        && return this->paymentType_ == nullptr && return this->promotions_ == nullptr && return this->regionId_ == nullptr && return this->releaseVersion_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->securityMode_ == nullptr && return this->subscriptionConfig_ == nullptr && return this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ApplicationConfig> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
    inline vector<ApplicationConfig> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
    inline RunClusterRequest& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline RunClusterRequest& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Application> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
    inline vector<Application> applications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
    inline RunClusterRequest& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline RunClusterRequest& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // bootstrapScripts Field Functions 
    bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
    void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
    inline const vector<Script> & bootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Script>) };
    inline vector<Script> bootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Script>) };
    inline RunClusterRequest& setBootstrapScripts(const vector<Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
    inline RunClusterRequest& setBootstrapScripts(vector<Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline RunClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline RunClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline RunClusterRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const NodeAttributes & nodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
    inline NodeAttributes nodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
    inline RunClusterRequest& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline RunClusterRequest& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<NodeGroupConfig> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroupConfig>) };
    inline vector<NodeGroupConfig> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroupConfig>) };
    inline RunClusterRequest& setNodeGroups(const vector<NodeGroupConfig> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline RunClusterRequest& setNodeGroups(vector<NodeGroupConfig> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline RunClusterRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Promotion> & promotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Promotion>) };
    inline vector<Promotion> promotions() { DARABONBA_PTR_GET(promotions_, vector<Promotion>) };
    inline RunClusterRequest& setPromotions(const vector<Promotion> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline RunClusterRequest& setPromotions(vector<Promotion> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline RunClusterRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string securityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline RunClusterRequest& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & subscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig subscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline RunClusterRequest& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline RunClusterRequest& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline RunClusterRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunClusterRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The application configurations. Number of elements in the array: 1 to 1000.
    std::shared_ptr<vector<ApplicationConfig>> applicationConfigs_ = nullptr;
    // The list of services. Number of elements in the array: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Application>> applications_ = nullptr;
    // The array of bootstrap scripts. Number of elements in the array: 1 to 10.
    std::shared_ptr<vector<Script>> bootstrapScripts_ = nullptr;
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
    std::shared_ptr<NodeAttributes> nodeAttributes_ = nullptr;
    // The array of configurations of the node groups. Number of elements in the array: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<vector<NodeGroupConfig>> nodeGroups_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    // 
    // Default value: PayAsYouGo.
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<vector<Promotion>> promotions_ = nullptr;
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
    std::shared_ptr<SubscriptionConfig> subscriptionConfig_ = nullptr;
    // The tag. Number of elements in the array: 0 to 20.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
