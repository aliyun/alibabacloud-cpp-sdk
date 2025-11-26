// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRPLANCONFIGURATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DRPLANCONFIGURATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/Script.hpp>
#include <alibabacloud/models/DRPlanConfigurationDetailManagedScalingPolicy.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/NodeGroupConfig.hpp>
#include <alibabacloud/models/ScalingPolicy.hpp>
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
  class DRPlanConfigurationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DRPlanConfigurationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LogCollectStrategy, logCollectStrategy_);
      DARABONBA_PTR_TO_JSON(ManagedScalingPolicy, managedScalingPolicy_);
      DARABONBA_PTR_TO_JSON(MetaStoreType, metaStoreType_);
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicies, scalingPolicies_);
      DARABONBA_PTR_TO_JSON(ScalingTimeZone, scalingTimeZone_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DRPlanConfigurationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LogCollectStrategy, logCollectStrategy_);
      DARABONBA_PTR_FROM_JSON(ManagedScalingPolicy, managedScalingPolicy_);
      DARABONBA_PTR_FROM_JSON(MetaStoreType, metaStoreType_);
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicies, scalingPolicies_);
      DARABONBA_PTR_FROM_JSON(ScalingTimeZone, scalingTimeZone_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DRPlanConfigurationDetail() = default ;
    DRPlanConfigurationDetail(const DRPlanConfigurationDetail &) = default ;
    DRPlanConfigurationDetail(DRPlanConfigurationDetail &&) = default ;
    DRPlanConfigurationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DRPlanConfigurationDetail() = default ;
    DRPlanConfigurationDetail& operator=(const DRPlanConfigurationDetail &) = default ;
    DRPlanConfigurationDetail& operator=(DRPlanConfigurationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && return this->applications_ == nullptr && return this->bootstrapScripts_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->deployMode_ == nullptr && return this->description_ == nullptr && return this->logCollectStrategy_ == nullptr && return this->managedScalingPolicy_ == nullptr && return this->metaStoreType_ == nullptr
        && return this->nodeAttributes_ == nullptr && return this->nodeGroups_ == nullptr && return this->paymentType_ == nullptr && return this->regionId_ == nullptr && return this->releaseVersion_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->scalingPolicies_ == nullptr && return this->scalingTimeZone_ == nullptr && return this->securityMode_ == nullptr && return this->subscriptionConfig_ == nullptr
        && return this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ApplicationConfig> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
    inline vector<ApplicationConfig> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
    inline DRPlanConfigurationDetail& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline DRPlanConfigurationDetail& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Application> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
    inline vector<Application> applications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
    inline DRPlanConfigurationDetail& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline DRPlanConfigurationDetail& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // bootstrapScripts Field Functions 
    bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
    void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
    inline const vector<Script> & bootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Script>) };
    inline vector<Script> bootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Script>) };
    inline DRPlanConfigurationDetail& setBootstrapScripts(const vector<Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
    inline DRPlanConfigurationDetail& setBootstrapScripts(vector<Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DRPlanConfigurationDetail& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DRPlanConfigurationDetail& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DRPlanConfigurationDetail& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline DRPlanConfigurationDetail& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DRPlanConfigurationDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // logCollectStrategy Field Functions 
    bool hasLogCollectStrategy() const { return this->logCollectStrategy_ != nullptr;};
    void deleteLogCollectStrategy() { this->logCollectStrategy_ = nullptr;};
    inline string logCollectStrategy() const { DARABONBA_PTR_GET_DEFAULT(logCollectStrategy_, "") };
    inline DRPlanConfigurationDetail& setLogCollectStrategy(string logCollectStrategy) { DARABONBA_PTR_SET_VALUE(logCollectStrategy_, logCollectStrategy) };


    // managedScalingPolicy Field Functions 
    bool hasManagedScalingPolicy() const { return this->managedScalingPolicy_ != nullptr;};
    void deleteManagedScalingPolicy() { this->managedScalingPolicy_ = nullptr;};
    inline const DRPlanConfigurationDetailManagedScalingPolicy & managedScalingPolicy() const { DARABONBA_PTR_GET_CONST(managedScalingPolicy_, DRPlanConfigurationDetailManagedScalingPolicy) };
    inline DRPlanConfigurationDetailManagedScalingPolicy managedScalingPolicy() { DARABONBA_PTR_GET(managedScalingPolicy_, DRPlanConfigurationDetailManagedScalingPolicy) };
    inline DRPlanConfigurationDetail& setManagedScalingPolicy(const DRPlanConfigurationDetailManagedScalingPolicy & managedScalingPolicy) { DARABONBA_PTR_SET_VALUE(managedScalingPolicy_, managedScalingPolicy) };
    inline DRPlanConfigurationDetail& setManagedScalingPolicy(DRPlanConfigurationDetailManagedScalingPolicy && managedScalingPolicy) { DARABONBA_PTR_SET_RVALUE(managedScalingPolicy_, managedScalingPolicy) };


    // metaStoreType Field Functions 
    bool hasMetaStoreType() const { return this->metaStoreType_ != nullptr;};
    void deleteMetaStoreType() { this->metaStoreType_ = nullptr;};
    inline string metaStoreType() const { DARABONBA_PTR_GET_DEFAULT(metaStoreType_, "") };
    inline DRPlanConfigurationDetail& setMetaStoreType(string metaStoreType) { DARABONBA_PTR_SET_VALUE(metaStoreType_, metaStoreType) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const NodeAttributes & nodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
    inline NodeAttributes nodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
    inline DRPlanConfigurationDetail& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline DRPlanConfigurationDetail& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<NodeGroupConfig> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroupConfig>) };
    inline vector<NodeGroupConfig> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroupConfig>) };
    inline DRPlanConfigurationDetail& setNodeGroups(const vector<NodeGroupConfig> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline DRPlanConfigurationDetail& setNodeGroups(vector<NodeGroupConfig> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DRPlanConfigurationDetail& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DRPlanConfigurationDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline DRPlanConfigurationDetail& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DRPlanConfigurationDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scalingPolicies Field Functions 
    bool hasScalingPolicies() const { return this->scalingPolicies_ != nullptr;};
    void deleteScalingPolicies() { this->scalingPolicies_ = nullptr;};
    inline const vector<ScalingPolicy> & scalingPolicies() const { DARABONBA_PTR_GET_CONST(scalingPolicies_, vector<ScalingPolicy>) };
    inline vector<ScalingPolicy> scalingPolicies() { DARABONBA_PTR_GET(scalingPolicies_, vector<ScalingPolicy>) };
    inline DRPlanConfigurationDetail& setScalingPolicies(const vector<ScalingPolicy> & scalingPolicies) { DARABONBA_PTR_SET_VALUE(scalingPolicies_, scalingPolicies) };
    inline DRPlanConfigurationDetail& setScalingPolicies(vector<ScalingPolicy> && scalingPolicies) { DARABONBA_PTR_SET_RVALUE(scalingPolicies_, scalingPolicies) };


    // scalingTimeZone Field Functions 
    bool hasScalingTimeZone() const { return this->scalingTimeZone_ != nullptr;};
    void deleteScalingTimeZone() { this->scalingTimeZone_ = nullptr;};
    inline string scalingTimeZone() const { DARABONBA_PTR_GET_DEFAULT(scalingTimeZone_, "") };
    inline DRPlanConfigurationDetail& setScalingTimeZone(string scalingTimeZone) { DARABONBA_PTR_SET_VALUE(scalingTimeZone_, scalingTimeZone) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string securityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline DRPlanConfigurationDetail& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & subscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig subscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline DRPlanConfigurationDetail& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline DRPlanConfigurationDetail& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline DRPlanConfigurationDetail& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DRPlanConfigurationDetail& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<ApplicationConfig>> applicationConfigs_ = nullptr;
    std::shared_ptr<vector<Application>> applications_ = nullptr;
    std::shared_ptr<vector<Script>> bootstrapScripts_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deployMode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logCollectStrategy_ = nullptr;
    std::shared_ptr<DRPlanConfigurationDetailManagedScalingPolicy> managedScalingPolicy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metaStoreType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NodeAttributes> nodeAttributes_ = nullptr;
    std::shared_ptr<vector<NodeGroupConfig>> nodeGroups_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paymentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<ScalingPolicy>> scalingPolicies_ = nullptr;
    std::shared_ptr<string> scalingTimeZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityMode_ = nullptr;
    std::shared_ptr<SubscriptionConfig> subscriptionConfig_ = nullptr;
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
