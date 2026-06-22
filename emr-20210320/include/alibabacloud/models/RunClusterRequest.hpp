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
        && this->applications_ == nullptr && this->bootstrapScripts_ == nullptr && this->clientToken_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr
        && this->deletionProtection_ == nullptr && this->deployMode_ == nullptr && this->description_ == nullptr && this->nodeAttributes_ == nullptr && this->nodeGroups_ == nullptr
        && this->paymentType_ == nullptr && this->promotions_ == nullptr && this->regionId_ == nullptr && this->releaseVersion_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityMode_ == nullptr && this->subscriptionConfig_ == nullptr && this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ApplicationConfig> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
    inline vector<ApplicationConfig> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
    inline RunClusterRequest& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline RunClusterRequest& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Application> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
    inline vector<Application> getApplications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
    inline RunClusterRequest& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline RunClusterRequest& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // bootstrapScripts Field Functions 
    bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
    void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
    inline const vector<Script> & getBootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Script>) };
    inline vector<Script> getBootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Script>) };
    inline RunClusterRequest& setBootstrapScripts(const vector<Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
    inline RunClusterRequest& setBootstrapScripts(vector<Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline RunClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline RunClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline RunClusterRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const NodeAttributes & getNodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
    inline NodeAttributes getNodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
    inline RunClusterRequest& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline RunClusterRequest& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<NodeGroupConfig> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroupConfig>) };
    inline vector<NodeGroupConfig> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroupConfig>) };
    inline RunClusterRequest& setNodeGroups(const vector<NodeGroupConfig> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline RunClusterRequest& setNodeGroups(vector<NodeGroupConfig> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline RunClusterRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<Promotion> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Promotion>) };
    inline vector<Promotion> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<Promotion>) };
    inline RunClusterRequest& setPromotions(const vector<Promotion> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline RunClusterRequest& setPromotions(vector<Promotion> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline RunClusterRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string getSecurityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline RunClusterRequest& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline RunClusterRequest& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline RunClusterRequest& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline RunClusterRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunClusterRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The application configurations. The number of array elements N can range from 1 to 1000.
    shared_ptr<vector<ApplicationConfig>> applicationConfigs_ {};
    // The list of applications. The number of array elements N can range from 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<vector<Application>> applications_ {};
    // The array of bootstrap scripts. The number of array elements N can range from 1 to 10.
    shared_ptr<vector<Script>> bootstrapScripts_ {};
    // A client token to ensure the idempotence of the request. Multiple calls with the same client token return the same result and create only one cluster.
    shared_ptr<string> clientToken_ {};
    // The cluster name. The name must be 1 to 128 characters in length. It must start with a letter or a Chinese character. It cannot start with http\\:// or https\\://. It can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), or hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
    // The cluster type. Valid values:
    // 
    // - DATALAKE: new data lake.
    // 
    // - OLAP: data analytics.
    // 
    // - DATAFLOW: real-time data stream.
    // 
    // - DATASERVING: DataService Studio.
    // 
    // - CUSTOM: custom cluster.
    // 
    // - HADOOP: legacy data lake. This value is not recommended. Use the new data lake cluster type instead.
    // 
    // If you create an EMR cluster for the first time after 17:00 (UTC+8) on December 19, 2022, you cannot select HADOOP, DATA_SCIENCE, PRESTO, or ZOOKEEPER as the cluster type.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // Specifies whether to enable deletion protection for the cluster. Valid values:
    // 
    // - true: Enables deletion protection.
    // 
    // - false: Disables deletion protection.
    // 
    // Default value: false.
    shared_ptr<bool> deletionProtection_ {};
    // The deployment mode of applications in the cluster. Valid values:
    // 
    // - NORMAL (default): non-high availability deployment. The cluster has one master node.
    // 
    // - HA: high availability (HA) deployment. This deployment mode requires at least three master nodes.
    shared_ptr<string> deployMode_ {};
    // The description of the cluster.
    shared_ptr<string> description_ {};
    // The node attributes. These are the basic attributes of all ECS nodes in the cluster.
    shared_ptr<NodeAttributes> nodeAttributes_ {};
    // The array of node group configurations. The number of array elements N can range from 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<vector<NodeGroupConfig>> nodeGroups_ {};
    // The billing method. Valid values:
    // 
    // - PayAsYouGo: pay-as-you-go.
    // 
    // - Subscription: subscription.
    // 
    // Default value: PayAsYouGo.
    shared_ptr<string> paymentType_ {};
    shared_ptr<vector<Promotion>> promotions_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The EMR release version. You can find the EMR release version on the EMR cluster purchase page.
    // 
    // This parameter is required.
    shared_ptr<string> releaseVersion_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The Kerberos security mode of the cluster. Valid values:
    // 
    // - NORMAL (default): normal mode. Kerberos is disabled.
    // 
    // - KERBEROS: Kerberos mode. Kerberos is enabled.
    shared_ptr<string> securityMode_ {};
    // The subscription configurations. This parameter is required if you set PaymentType to Subscription.
    shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
    // The tags. The number of array elements N can range from 0 to 20.
    shared_ptr<vector<Tag>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
