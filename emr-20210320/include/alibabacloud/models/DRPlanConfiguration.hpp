// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRPLANCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DRPLANCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ManagedScalingConstraints.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/Script.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/NodeGroupConfig.hpp>
#include <alibabacloud/models/SubscriptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DRPlanConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DRPlanConfiguration& obj) { 
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
      DARABONBA_PTR_TO_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DRPlanConfiguration& obj) { 
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
      DARABONBA_PTR_FROM_JSON(NodeAttributes, nodeAttributes_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DRPlanConfiguration() = default ;
    DRPlanConfiguration(const DRPlanConfiguration &) = default ;
    DRPlanConfiguration(DRPlanConfiguration &&) = default ;
    DRPlanConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DRPlanConfiguration() = default ;
    DRPlanConfiguration& operator=(const DRPlanConfiguration &) = default ;
    DRPlanConfiguration& operator=(DRPlanConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. This parameter is required. The key can be up to 128 characters in length and cannot be an empty string. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value. This parameter is optional. The value can be up to 128 characters in length and can be an empty string. It cannot start with `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class ManagedScalingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedScalingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedScalingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      };
      ManagedScalingPolicy() = default ;
      ManagedScalingPolicy(const ManagedScalingPolicy &) = default ;
      ManagedScalingPolicy(ManagedScalingPolicy &&) = default ;
      ManagedScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedScalingPolicy() = default ;
      ManagedScalingPolicy& operator=(const ManagedScalingPolicy &) = default ;
      ManagedScalingPolicy& operator=(ManagedScalingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->constraints_ == nullptr; };
      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline const ManagedScalingConstraints & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, ManagedScalingConstraints) };
      inline ManagedScalingConstraints getConstraints() { DARABONBA_PTR_GET(constraints_, ManagedScalingConstraints) };
      inline ManagedScalingPolicy& setConstraints(const ManagedScalingConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
      inline ManagedScalingPolicy& setConstraints(ManagedScalingConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    protected:
      shared_ptr<ManagedScalingConstraints> constraints_ {};
    };

    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->applications_ == nullptr && this->bootstrapScripts_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->deletionProtection_ == nullptr
        && this->deployMode_ == nullptr && this->description_ == nullptr && this->logCollectStrategy_ == nullptr && this->managedScalingPolicy_ == nullptr && this->nodeAttributes_ == nullptr
        && this->nodeGroups_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->releaseVersion_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityMode_ == nullptr && this->subscriptionConfig_ == nullptr && this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<ApplicationConfig> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
    inline vector<ApplicationConfig> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
    inline DRPlanConfiguration& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline DRPlanConfiguration& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Application> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
    inline vector<Application> getApplications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
    inline DRPlanConfiguration& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline DRPlanConfiguration& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // bootstrapScripts Field Functions 
    bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
    void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
    inline const vector<Script> & getBootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Script>) };
    inline vector<Script> getBootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Script>) };
    inline DRPlanConfiguration& setBootstrapScripts(const vector<Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
    inline DRPlanConfiguration& setBootstrapScripts(vector<Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DRPlanConfiguration& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DRPlanConfiguration& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DRPlanConfiguration& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline DRPlanConfiguration& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DRPlanConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // logCollectStrategy Field Functions 
    bool hasLogCollectStrategy() const { return this->logCollectStrategy_ != nullptr;};
    void deleteLogCollectStrategy() { this->logCollectStrategy_ = nullptr;};
    inline string getLogCollectStrategy() const { DARABONBA_PTR_GET_DEFAULT(logCollectStrategy_, "") };
    inline DRPlanConfiguration& setLogCollectStrategy(string logCollectStrategy) { DARABONBA_PTR_SET_VALUE(logCollectStrategy_, logCollectStrategy) };


    // managedScalingPolicy Field Functions 
    bool hasManagedScalingPolicy() const { return this->managedScalingPolicy_ != nullptr;};
    void deleteManagedScalingPolicy() { this->managedScalingPolicy_ = nullptr;};
    inline const DRPlanConfiguration::ManagedScalingPolicy & getManagedScalingPolicy() const { DARABONBA_PTR_GET_CONST(managedScalingPolicy_, DRPlanConfiguration::ManagedScalingPolicy) };
    inline DRPlanConfiguration::ManagedScalingPolicy getManagedScalingPolicy() { DARABONBA_PTR_GET(managedScalingPolicy_, DRPlanConfiguration::ManagedScalingPolicy) };
    inline DRPlanConfiguration& setManagedScalingPolicy(const DRPlanConfiguration::ManagedScalingPolicy & managedScalingPolicy) { DARABONBA_PTR_SET_VALUE(managedScalingPolicy_, managedScalingPolicy) };
    inline DRPlanConfiguration& setManagedScalingPolicy(DRPlanConfiguration::ManagedScalingPolicy && managedScalingPolicy) { DARABONBA_PTR_SET_RVALUE(managedScalingPolicy_, managedScalingPolicy) };


    // nodeAttributes Field Functions 
    bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
    void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
    inline const NodeAttributes & getNodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
    inline NodeAttributes getNodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
    inline DRPlanConfiguration& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
    inline DRPlanConfiguration& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<NodeGroupConfig> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroupConfig>) };
    inline vector<NodeGroupConfig> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroupConfig>) };
    inline DRPlanConfiguration& setNodeGroups(const vector<NodeGroupConfig> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline DRPlanConfiguration& setNodeGroups(vector<NodeGroupConfig> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DRPlanConfiguration& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DRPlanConfiguration& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline DRPlanConfiguration& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DRPlanConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline string getSecurityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
    inline DRPlanConfiguration& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline DRPlanConfiguration& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline DRPlanConfiguration& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DRPlanConfiguration::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DRPlanConfiguration::Tags>) };
    inline vector<DRPlanConfiguration::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DRPlanConfiguration::Tags>) };
    inline DRPlanConfiguration& setTags(const vector<DRPlanConfiguration::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DRPlanConfiguration& setTags(vector<DRPlanConfiguration::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<vector<ApplicationConfig>> applicationConfigs_ {};
    // This parameter is required.
    shared_ptr<vector<Application>> applications_ {};
    shared_ptr<vector<Script>> bootstrapScripts_ {};
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    shared_ptr<bool> deletionProtection_ {};
    shared_ptr<string> deployMode_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> logCollectStrategy_ {};
    shared_ptr<DRPlanConfiguration::ManagedScalingPolicy> managedScalingPolicy_ {};
    // This parameter is required.
    shared_ptr<NodeAttributes> nodeAttributes_ {};
    // This parameter is required.
    shared_ptr<vector<NodeGroupConfig>> nodeGroups_ {};
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> releaseVersion_ {};
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> securityMode_ {};
    shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
    shared_ptr<vector<DRPlanConfiguration::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
