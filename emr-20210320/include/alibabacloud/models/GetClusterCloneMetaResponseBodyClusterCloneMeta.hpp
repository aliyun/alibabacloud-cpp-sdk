// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODYCLUSTERCLONEMETA_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODYCLUSTERCLONEMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/Script.hpp>
#include <alibabacloud/models/CollationTimeZone.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/NodeGroup.hpp>
#include <alibabacloud/models/GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies.hpp>
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
  class GetClusterCloneMetaResponseBodyClusterCloneMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCloneMetaResponseBodyClusterCloneMeta& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CollationTimeZone, collationTimeZone_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_TO_JSON(ExistCloneConfig, existCloneConfig_);
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicies, scalingPolicies_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCloneMetaResponseBodyClusterCloneMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(BootstrapScripts, bootstrapScripts_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CollationTimeZone, collationTimeZone_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(EmrDefaultRole, emrDefaultRole_);
      DARABONBA_PTR_FROM_JSON(ExistCloneConfig, existCloneConfig_);
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicies, scalingPolicies_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetClusterCloneMetaResponseBodyClusterCloneMeta() = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMeta(const GetClusterCloneMetaResponseBodyClusterCloneMeta &) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMeta(GetClusterCloneMetaResponseBodyClusterCloneMeta &&) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCloneMetaResponseBodyClusterCloneMeta() = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMeta& operator=(const GetClusterCloneMetaResponseBodyClusterCloneMeta &) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMeta& operator=(GetClusterCloneMetaResponseBodyClusterCloneMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && return this->applications_ == nullptr && return this->bootstrapScripts_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->clusterState_ == nullptr
        && return this->clusterType_ == nullptr && return this->collationTimeZone_ == nullptr && return this->deletionProtection_ == nullptr && return this->deployMode_ == nullptr && return this->emrDefaultRole_ == nullptr
        && return this->existCloneConfig_ == nullptr && return this->nodeAttributes_ == nullptr && return this->nodeGroups_ == nullptr && return this->paymentType_ == nullptr && return this->regionId_ == nullptr
        && return this->releaseVersion_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scalingPolicies_ == nullptr && return this->securityMode_ == nullptr && return this->subscriptionConfig_ == nullptr
        && return this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<Models::ApplicationConfig> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<Models::ApplicationConfig>) };
    inline vector<Models::ApplicationConfig> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<Models::ApplicationConfig>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setApplicationConfigs(const vector<Models::ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setApplicationConfigs(vector<Models::ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::Application> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::Application>) };
    inline vector<Models::Application> applications() { DARABONBA_PTR_GET(applications_, vector<Models::Application>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setApplications(const vector<Models::Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setApplications(vector<Models::Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // bootstrapScripts Field Functions 
    bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
    void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
    inline const vector<Models::Script> & bootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Models::Script>) };
    inline vector<Models::Script> bootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Models::Script>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setBootstrapScripts(const vector<Models::Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setBootstrapScripts(vector<Models::Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string clusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // collationTimeZone Field Functions 
    bool hasCollationTimeZone() const { return this->collationTimeZone_ != nullptr;};
    void deleteCollationTimeZone() { this->collationTimeZone_ = nullptr;};
    inline const Models::CollationTimeZone & collationTimeZone() const { DARABONBA_PTR_GET_CONST(collationTimeZone_, Models::CollationTimeZone) };
    inline Models::CollationTimeZone collationTimeZone() { DARABONBA_PTR_GET(collationTimeZone_, Models::CollationTimeZone) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setCollationTimeZone(const Models::CollationTimeZone & collationTimeZone) { DARABONBA_PTR_SET_VALUE(collationTimeZone_, collationTimeZone) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setCollationTimeZone(Models::CollationTimeZone && collationTimeZone) { DARABONBA_PTR_SET_RVALUE(collationTimeZone_, collationTimeZone) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // emrDefaultRole Field Functions 
    bool hasEmrDefaultRole() const { return this->emrDefaultRole_ != nullptr;};
    void deleteEmrDefaultRole() { this->emrDefaultRole_ = nullptr;};
    inline string emrDefaultRole() const { DARABONBA_PTR_GET_DEFAULT(emrDefaultRole_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setEmrDefaultRole(string emrDefaultRole) { DARABONBA_PTR_SET_VALUE(emrDefaultRole_, emrDefaultRole) };


    // existCloneConfig Field Functions 
    bool hasExistCloneConfig() const { return this->existCloneConfig_ != nullptr;};
    void deleteExistCloneConfig() { this->existCloneConfig_ = nullptr;};
    inline bool existCloneConfig() const { DARABONBA_PTR_GET_DEFAULT(existCloneConfig_, false) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setExistCloneConfig(bool existCloneConfig) { DARABONBA_PTR_SET_VALUE(existCloneConfig_, existCloneConfig) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const Models::NodeAttributes & nodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, Models::NodeAttributes) };
    inline Models::NodeAttributes nodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, Models::NodeAttributes) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setNodeAttributes(const Models::NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setNodeAttributes(Models::NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<Models::NodeGroup> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<Models::NodeGroup>) };
    inline vector<Models::NodeGroup> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<Models::NodeGroup>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setNodeGroups(const vector<Models::NodeGroup> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setNodeGroups(vector<Models::NodeGroup> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scalingPolicies Field Functions 
    bool hasScalingPolicies() const { return this->scalingPolicies_ != nullptr;};
    void deleteScalingPolicies() { this->scalingPolicies_ = nullptr;};
    inline const vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies> & scalingPolicies() const { DARABONBA_PTR_GET_CONST(scalingPolicies_, vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies>) };
    inline vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies> scalingPolicies() { DARABONBA_PTR_GET(scalingPolicies_, vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setScalingPolicies(const vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies> & scalingPolicies) { DARABONBA_PTR_SET_VALUE(scalingPolicies_, scalingPolicies) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setScalingPolicies(vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies> && scalingPolicies) { DARABONBA_PTR_SET_RVALUE(scalingPolicies_, scalingPolicies) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string securityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const Models::SubscriptionConfig & subscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, Models::SubscriptionConfig) };
    inline Models::SubscriptionConfig subscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, Models::SubscriptionConfig) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setSubscriptionConfig(const Models::SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setSubscriptionConfig(Models::SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMeta& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The modified configuration items.
    std::shared_ptr<vector<Models::ApplicationConfig>> applicationConfigs_ = nullptr;
    // The cluster applications.
    std::shared_ptr<vector<Models::Application>> applications_ = nullptr;
    // An array of bootstrap scripts. The number of elements in the array: 1 to 10.
    std::shared_ptr<vector<Models::Script>> bootstrapScripts_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   STARTING
    // *   START_FAILED
    // *   BOOTSTRAPPING
    // *   RUNNING
    // *   TERMINATING
    // *   TERMINATED
    // *   TERMINATED_WITH_ERRORS
    // *   TERMINATE_FAILED
    std::shared_ptr<string> clusterState_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   DATALAKE
    // *   OLAP
    // *   DATAFLOW
    // *   DATASERVING
    // *   CUSTOM
    // *   HADOOP
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<Models::CollationTimeZone> collationTimeZone_ = nullptr;
    // Indicates whether release protection is enabled for the cluster. Valid values:
    // 
    // *   true: Release protection is enabled for the cluster.
    // *   false: Release protection is disabled for the cluster.
    // 
    // Default value: false.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The deployment mode of master nodes in the cluster. Valid values:
    // 
    // *   NORMAL: regular mode.
    // *   HA: high availability mode.
    std::shared_ptr<string> deployMode_ = nullptr;
    // The EMR service role.
    std::shared_ptr<string> emrDefaultRole_ = nullptr;
    // Indicates whether the service configurations of a Hadoop cluster that you made during cluster creation can be cloned. Valid values:
    // 
    // *   False
    // *   True
    std::shared_ptr<bool> existCloneConfig_ = nullptr;
    // The node attributes.
    std::shared_ptr<Models::NodeAttributes> nodeAttributes_ = nullptr;
    // The node groups. The number of elements in the array: 1 to 100.
    std::shared_ptr<vector<Models::NodeGroup>> nodeGroups_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The EMR version.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The auto scaling policies of each node group in the cluster.
    std::shared_ptr<vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies>> scalingPolicies_ = nullptr;
    // The security mode of the cluster. Valid values:
    // 
    // *   NORMAL: regular mode. Kerberos is not enabled.
    // *   KERBEROS: Kerberos mode. Kerberos is enabled.
    std::shared_ptr<string> securityMode_ = nullptr;
    // The subscription configurations.
    std::shared_ptr<Models::SubscriptionConfig> subscriptionConfig_ = nullptr;
    // The list of cluster tags.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
