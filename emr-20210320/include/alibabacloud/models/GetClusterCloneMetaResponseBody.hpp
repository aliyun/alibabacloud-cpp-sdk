// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetricsTrigger.hpp>
#include <alibabacloud/models/TimeTrigger.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfig.hpp>
#include <alibabacloud/models/Application.hpp>
#include <alibabacloud/models/Script.hpp>
#include <alibabacloud/models/CollationTimeZone.hpp>
#include <alibabacloud/models/NodeAttributes.hpp>
#include <alibabacloud/models/NodeGroup.hpp>
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
  class GetClusterCloneMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCloneMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCloneMeta, clusterCloneMeta_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCloneMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCloneMeta, clusterCloneMeta_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterCloneMetaResponseBody() = default ;
    GetClusterCloneMetaResponseBody(const GetClusterCloneMetaResponseBody &) = default ;
    GetClusterCloneMetaResponseBody(GetClusterCloneMetaResponseBody &&) = default ;
    GetClusterCloneMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCloneMetaResponseBody() = default ;
    GetClusterCloneMetaResponseBody& operator=(const GetClusterCloneMetaResponseBody &) = default ;
    GetClusterCloneMetaResponseBody& operator=(GetClusterCloneMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterCloneMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterCloneMeta& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ClusterCloneMeta& obj) { 
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
      ClusterCloneMeta() = default ;
      ClusterCloneMeta(const ClusterCloneMeta &) = default ;
      ClusterCloneMeta(ClusterCloneMeta &&) = default ;
      ClusterCloneMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterCloneMeta() = default ;
      ClusterCloneMeta& operator=(const ClusterCloneMeta &) = default ;
      ClusterCloneMeta& operator=(ClusterCloneMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScalingPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScalingPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Constraints, constraints_);
          DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
          DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
          DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
          DARABONBA_PTR_TO_JSON(ScalingPolicyType, scalingPolicyType_);
          DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
        };
        friend void from_json(const Darabonba::Json& j, ScalingPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
          DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
          DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
          DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
          DARABONBA_PTR_FROM_JSON(ScalingPolicyType, scalingPolicyType_);
          DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
        };
        ScalingPolicies() = default ;
        ScalingPolicies(const ScalingPolicies &) = default ;
        ScalingPolicies(ScalingPolicies &&) = default ;
        ScalingPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScalingPolicies() = default ;
        ScalingPolicies& operator=(const ScalingPolicies &) = default ;
        ScalingPolicies& operator=(ScalingPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScalingRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScalingRules& obj) { 
            DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
            DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
            DARABONBA_PTR_TO_JSON(MetricsTrigger, metricsTrigger_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(TimeTrigger, timeTrigger_);
            DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          };
          friend void from_json(const Darabonba::Json& j, ScalingRules& obj) { 
            DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
            DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
            DARABONBA_PTR_FROM_JSON(MetricsTrigger, metricsTrigger_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(TimeTrigger, timeTrigger_);
            DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          };
          ScalingRules() = default ;
          ScalingRules(const ScalingRules &) = default ;
          ScalingRules(ScalingRules &&) = default ;
          ScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScalingRules() = default ;
          ScalingRules& operator=(const ScalingRules &) = default ;
          ScalingRules& operator=(ScalingRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activityType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->metricsTrigger_ == nullptr && this->ruleName_ == nullptr && this->timeTrigger_ == nullptr && this->triggerType_ == nullptr; };
          // activityType Field Functions 
          bool hasActivityType() const { return this->activityType_ != nullptr;};
          void deleteActivityType() { this->activityType_ = nullptr;};
          inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
          inline ScalingRules& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


          // adjustmentValue Field Functions 
          bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
          void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
          inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
          inline ScalingRules& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


          // metricsTrigger Field Functions 
          bool hasMetricsTrigger() const { return this->metricsTrigger_ != nullptr;};
          void deleteMetricsTrigger() { this->metricsTrigger_ = nullptr;};
          inline const MetricsTrigger & getMetricsTrigger() const { DARABONBA_PTR_GET_CONST(metricsTrigger_, MetricsTrigger) };
          inline MetricsTrigger getMetricsTrigger() { DARABONBA_PTR_GET(metricsTrigger_, MetricsTrigger) };
          inline ScalingRules& setMetricsTrigger(const MetricsTrigger & metricsTrigger) { DARABONBA_PTR_SET_VALUE(metricsTrigger_, metricsTrigger) };
          inline ScalingRules& setMetricsTrigger(MetricsTrigger && metricsTrigger) { DARABONBA_PTR_SET_RVALUE(metricsTrigger_, metricsTrigger) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline ScalingRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // timeTrigger Field Functions 
          bool hasTimeTrigger() const { return this->timeTrigger_ != nullptr;};
          void deleteTimeTrigger() { this->timeTrigger_ = nullptr;};
          inline const TimeTrigger & getTimeTrigger() const { DARABONBA_PTR_GET_CONST(timeTrigger_, TimeTrigger) };
          inline TimeTrigger getTimeTrigger() { DARABONBA_PTR_GET(timeTrigger_, TimeTrigger) };
          inline ScalingRules& setTimeTrigger(const TimeTrigger & timeTrigger) { DARABONBA_PTR_SET_VALUE(timeTrigger_, timeTrigger) };
          inline ScalingRules& setTimeTrigger(TimeTrigger && timeTrigger) { DARABONBA_PTR_SET_RVALUE(timeTrigger_, timeTrigger) };


          // triggerType Field Functions 
          bool hasTriggerType() const { return this->triggerType_ != nullptr;};
          void deleteTriggerType() { this->triggerType_ = nullptr;};
          inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
          inline ScalingRules& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        protected:
          // The type of the scaling activity. This parameter is required. Valid values:
          // 
          // - SCALE_OUT: scale-out.
          // 
          // - SCALE_IN: scale-in.
          shared_ptr<string> activityType_ {};
          // The adjustment value. This parameter is required. It must be a positive integer. It specifies the number of instances to add or remove.
          shared_ptr<int32_t> adjustmentValue_ {};
          // The description of the metric-based scaling rule.
          shared_ptr<MetricsTrigger> metricsTrigger_ {};
          // The name of the scaling rule.
          shared_ptr<string> ruleName_ {};
          // The description of the time-based scaling rule.
          shared_ptr<TimeTrigger> timeTrigger_ {};
          // The type of the scaling rule. This parameter is required. Valid values:
          // 
          // - TIME_TRIGGER: time-based scaling.
          // 
          // - METRICS_TRIGGER: metric-based scaling.
          shared_ptr<string> triggerType_ {};
        };

        class Constraints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Constraints& obj) { 
            DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
            DARABONBA_PTR_TO_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
            DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
          };
          friend void from_json(const Darabonba::Json& j, Constraints& obj) { 
            DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
            DARABONBA_PTR_FROM_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
            DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
          };
          Constraints() = default ;
          Constraints(const Constraints &) = default ;
          Constraints(Constraints &&) = default ;
          Constraints(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Constraints() = default ;
          Constraints& operator=(const Constraints &) = default ;
          Constraints& operator=(Constraints &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxCapacity_ == nullptr
        && this->maxOnDemandCapacity_ == nullptr && this->minCapacity_ == nullptr; };
          // maxCapacity Field Functions 
          bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
          void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
          inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
          inline Constraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


          // maxOnDemandCapacity Field Functions 
          bool hasMaxOnDemandCapacity() const { return this->maxOnDemandCapacity_ != nullptr;};
          void deleteMaxOnDemandCapacity() { this->maxOnDemandCapacity_ = nullptr;};
          inline int32_t getMaxOnDemandCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxOnDemandCapacity_, 0) };
          inline Constraints& setMaxOnDemandCapacity(int32_t maxOnDemandCapacity) { DARABONBA_PTR_SET_VALUE(maxOnDemandCapacity_, maxOnDemandCapacity) };


          // minCapacity Field Functions 
          bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
          void deleteMinCapacity() { this->minCapacity_ = nullptr;};
          inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
          inline Constraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


        protected:
          // The maximum number of nodes in the node group. Default value: 2000.
          shared_ptr<int32_t> maxCapacity_ {};
          // The maximum number of pay-as-you-go instances.
          shared_ptr<int32_t> maxOnDemandCapacity_ {};
          // The minimum number of nodes in the node group. Default value: 0.
          shared_ptr<int32_t> minCapacity_ {};
        };

        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->constraints_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->scalingPolicyId_ == nullptr && this->scalingPolicyType_ == nullptr
        && this->scalingRules_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline ScalingPolicies& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // constraints Field Functions 
        bool hasConstraints() const { return this->constraints_ != nullptr;};
        void deleteConstraints() { this->constraints_ = nullptr;};
        inline const ScalingPolicies::Constraints & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, ScalingPolicies::Constraints) };
        inline ScalingPolicies::Constraints getConstraints() { DARABONBA_PTR_GET(constraints_, ScalingPolicies::Constraints) };
        inline ScalingPolicies& setConstraints(const ScalingPolicies::Constraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
        inline ScalingPolicies& setConstraints(ScalingPolicies::Constraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


        // nodeGroupId Field Functions 
        bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
        void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
        inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
        inline ScalingPolicies& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


        // nodeGroupName Field Functions 
        bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
        void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
        inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
        inline ScalingPolicies& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


        // scalingPolicyId Field Functions 
        bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
        void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
        inline string getScalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
        inline ScalingPolicies& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


        // scalingPolicyType Field Functions 
        bool hasScalingPolicyType() const { return this->scalingPolicyType_ != nullptr;};
        void deleteScalingPolicyType() { this->scalingPolicyType_ = nullptr;};
        inline string getScalingPolicyType() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyType_, "") };
        inline ScalingPolicies& setScalingPolicyType(string scalingPolicyType) { DARABONBA_PTR_SET_VALUE(scalingPolicyType_, scalingPolicyType) };


        // scalingRules Field Functions 
        bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
        void deleteScalingRules() { this->scalingRules_ = nullptr;};
        inline const vector<ScalingPolicies::ScalingRules> & getScalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingPolicies::ScalingRules>) };
        inline vector<ScalingPolicies::ScalingRules> getScalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingPolicies::ScalingRules>) };
        inline ScalingPolicies& setScalingRules(const vector<ScalingPolicies::ScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
        inline ScalingPolicies& setScalingRules(vector<ScalingPolicies::ScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


      protected:
        // The cluster ID.
        shared_ptr<string> clusterId_ {};
        // The constraints on the maximum and minimum number of nodes in the node group.
        shared_ptr<ScalingPolicies::Constraints> constraints_ {};
        // The node group ID.
        shared_ptr<string> nodeGroupId_ {};
        // The node group name.
        shared_ptr<string> nodeGroupName_ {};
        // The scaling policy ID.
        shared_ptr<string> scalingPolicyId_ {};
        // The type of the elastic policy.
        shared_ptr<string> scalingPolicyType_ {};
        // The list of scaling rules.
        shared_ptr<vector<ScalingPolicies::ScalingRules>> scalingRules_ {};
      };

      virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->applications_ == nullptr && this->bootstrapScripts_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterState_ == nullptr
        && this->clusterType_ == nullptr && this->collationTimeZone_ == nullptr && this->deletionProtection_ == nullptr && this->deployMode_ == nullptr && this->emrDefaultRole_ == nullptr
        && this->existCloneConfig_ == nullptr && this->nodeAttributes_ == nullptr && this->nodeGroups_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr
        && this->releaseVersion_ == nullptr && this->resourceGroupId_ == nullptr && this->scalingPolicies_ == nullptr && this->securityMode_ == nullptr && this->subscriptionConfig_ == nullptr
        && this->tags_ == nullptr; };
      // applicationConfigs Field Functions 
      bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
      void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
      inline const vector<ApplicationConfig> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<ApplicationConfig>) };
      inline vector<ApplicationConfig> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<ApplicationConfig>) };
      inline ClusterCloneMeta& setApplicationConfigs(const vector<ApplicationConfig> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
      inline ClusterCloneMeta& setApplicationConfigs(vector<ApplicationConfig> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Application> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
      inline vector<Application> getApplications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
      inline ClusterCloneMeta& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline ClusterCloneMeta& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // bootstrapScripts Field Functions 
      bool hasBootstrapScripts() const { return this->bootstrapScripts_ != nullptr;};
      void deleteBootstrapScripts() { this->bootstrapScripts_ = nullptr;};
      inline const vector<Script> & getBootstrapScripts() const { DARABONBA_PTR_GET_CONST(bootstrapScripts_, vector<Script>) };
      inline vector<Script> getBootstrapScripts() { DARABONBA_PTR_GET(bootstrapScripts_, vector<Script>) };
      inline ClusterCloneMeta& setBootstrapScripts(const vector<Script> & bootstrapScripts) { DARABONBA_PTR_SET_VALUE(bootstrapScripts_, bootstrapScripts) };
      inline ClusterCloneMeta& setBootstrapScripts(vector<Script> && bootstrapScripts) { DARABONBA_PTR_SET_RVALUE(bootstrapScripts_, bootstrapScripts) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ClusterCloneMeta& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterCloneMeta& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterState Field Functions 
      bool hasClusterState() const { return this->clusterState_ != nullptr;};
      void deleteClusterState() { this->clusterState_ = nullptr;};
      inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
      inline ClusterCloneMeta& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterCloneMeta& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // collationTimeZone Field Functions 
      bool hasCollationTimeZone() const { return this->collationTimeZone_ != nullptr;};
      void deleteCollationTimeZone() { this->collationTimeZone_ = nullptr;};
      inline const CollationTimeZone & getCollationTimeZone() const { DARABONBA_PTR_GET_CONST(collationTimeZone_, CollationTimeZone) };
      inline CollationTimeZone getCollationTimeZone() { DARABONBA_PTR_GET(collationTimeZone_, CollationTimeZone) };
      inline ClusterCloneMeta& setCollationTimeZone(const CollationTimeZone & collationTimeZone) { DARABONBA_PTR_SET_VALUE(collationTimeZone_, collationTimeZone) };
      inline ClusterCloneMeta& setCollationTimeZone(CollationTimeZone && collationTimeZone) { DARABONBA_PTR_SET_RVALUE(collationTimeZone_, collationTimeZone) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline ClusterCloneMeta& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // deployMode Field Functions 
      bool hasDeployMode() const { return this->deployMode_ != nullptr;};
      void deleteDeployMode() { this->deployMode_ = nullptr;};
      inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
      inline ClusterCloneMeta& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


      // emrDefaultRole Field Functions 
      bool hasEmrDefaultRole() const { return this->emrDefaultRole_ != nullptr;};
      void deleteEmrDefaultRole() { this->emrDefaultRole_ = nullptr;};
      inline string getEmrDefaultRole() const { DARABONBA_PTR_GET_DEFAULT(emrDefaultRole_, "") };
      inline ClusterCloneMeta& setEmrDefaultRole(string emrDefaultRole) { DARABONBA_PTR_SET_VALUE(emrDefaultRole_, emrDefaultRole) };


      // existCloneConfig Field Functions 
      bool hasExistCloneConfig() const { return this->existCloneConfig_ != nullptr;};
      void deleteExistCloneConfig() { this->existCloneConfig_ = nullptr;};
      inline bool getExistCloneConfig() const { DARABONBA_PTR_GET_DEFAULT(existCloneConfig_, false) };
      inline ClusterCloneMeta& setExistCloneConfig(bool existCloneConfig) { DARABONBA_PTR_SET_VALUE(existCloneConfig_, existCloneConfig) };


      // nodeAttributes Field Functions 
      bool hasNodeAttributes() const { return this->nodeAttributes_ != nullptr;};
      void deleteNodeAttributes() { this->nodeAttributes_ = nullptr;};
      inline const NodeAttributes & getNodeAttributes() const { DARABONBA_PTR_GET_CONST(nodeAttributes_, NodeAttributes) };
      inline NodeAttributes getNodeAttributes() { DARABONBA_PTR_GET(nodeAttributes_, NodeAttributes) };
      inline ClusterCloneMeta& setNodeAttributes(const NodeAttributes & nodeAttributes) { DARABONBA_PTR_SET_VALUE(nodeAttributes_, nodeAttributes) };
      inline ClusterCloneMeta& setNodeAttributes(NodeAttributes && nodeAttributes) { DARABONBA_PTR_SET_RVALUE(nodeAttributes_, nodeAttributes) };


      // nodeGroups Field Functions 
      bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
      void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
      inline const vector<NodeGroup> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<NodeGroup>) };
      inline vector<NodeGroup> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<NodeGroup>) };
      inline ClusterCloneMeta& setNodeGroups(const vector<NodeGroup> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
      inline ClusterCloneMeta& setNodeGroups(vector<NodeGroup> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline ClusterCloneMeta& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ClusterCloneMeta& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline ClusterCloneMeta& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ClusterCloneMeta& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scalingPolicies Field Functions 
      bool hasScalingPolicies() const { return this->scalingPolicies_ != nullptr;};
      void deleteScalingPolicies() { this->scalingPolicies_ = nullptr;};
      inline const vector<ClusterCloneMeta::ScalingPolicies> & getScalingPolicies() const { DARABONBA_PTR_GET_CONST(scalingPolicies_, vector<ClusterCloneMeta::ScalingPolicies>) };
      inline vector<ClusterCloneMeta::ScalingPolicies> getScalingPolicies() { DARABONBA_PTR_GET(scalingPolicies_, vector<ClusterCloneMeta::ScalingPolicies>) };
      inline ClusterCloneMeta& setScalingPolicies(const vector<ClusterCloneMeta::ScalingPolicies> & scalingPolicies) { DARABONBA_PTR_SET_VALUE(scalingPolicies_, scalingPolicies) };
      inline ClusterCloneMeta& setScalingPolicies(vector<ClusterCloneMeta::ScalingPolicies> && scalingPolicies) { DARABONBA_PTR_SET_RVALUE(scalingPolicies_, scalingPolicies) };


      // securityMode Field Functions 
      bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
      void deleteSecurityMode() { this->securityMode_ = nullptr;};
      inline string getSecurityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, "") };
      inline ClusterCloneMeta& setSecurityMode(string securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


      // subscriptionConfig Field Functions 
      bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
      void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
      inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
      inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
      inline ClusterCloneMeta& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
      inline ClusterCloneMeta& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline ClusterCloneMeta& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ClusterCloneMeta& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The modified application configuration items.
      shared_ptr<vector<ApplicationConfig>> applicationConfigs_ {};
      // The cluster applications.
      shared_ptr<vector<Application>> applications_ {};
      // An array of bootstrap scripts. The number of array elements N can be from 1 to 10.
      shared_ptr<vector<Script>> bootstrapScripts_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      // The state of the cluster. Valid values:
      // 
      // - STARTING: The cluster is starting.
      // 
      // - START_FAILED: The cluster failed to start.
      // 
      // - BOOTSTRAPPING: The cluster is performing bootstrap actions.
      // 
      // - RUNNING: The cluster is running.
      // 
      // - TERMINATING: The cluster is being terminated.
      // 
      // - TERMINATED: The cluster is terminated.
      // 
      // - TERMINATED_WITH_ERRORS: The cluster is terminated due to an exception.
      // 
      // - TERMINATE_FAILED: The cluster failed to be terminated.
      shared_ptr<string> clusterState_ {};
      // The type of the cluster. Valid values:
      // 
      // - DATALAKE: data lake.
      // 
      // - OLAP: data analytics.
      // 
      // - DATAFLOW: real-time data stream.
      // 
      // - DATASERVING: data service.
      // 
      // - CUSTOM: custom cluster.
      // 
      // - HADOOP: Hadoop.
      shared_ptr<string> clusterType_ {};
      shared_ptr<CollationTimeZone> collationTimeZone_ {};
      // Indicates whether deletion protection is enabled for the cluster. Valid values:
      // 
      // - true: Deletion protection is enabled.
      // 
      // - false: Deletion protection is disabled.
      // 
      // Default value: false.
      shared_ptr<bool> deletionProtection_ {};
      // The deployment mode of applications in the cluster. Valid values:
      // 
      // - NORMAL: standard deployment.
      // 
      // - HA: high-availability deployment.
      shared_ptr<string> deployMode_ {};
      // The EMR server role.
      shared_ptr<string> emrDefaultRole_ {};
      // Indicates whether the application configurations can be passed in when you clone a HADOOP cluster. Valid values:
      // 
      // - False: Not supported.
      // 
      // - True: Supported.
      shared_ptr<bool> existCloneConfig_ {};
      // The node attributes.
      shared_ptr<NodeAttributes> nodeAttributes_ {};
      // An array of node group configurations. The number of array elements N can be from 1 to 100.
      shared_ptr<vector<NodeGroup>> nodeGroups_ {};
      // The billing method. Valid values:
      // 
      // - PayAsYouGo: pay-as-you-go.
      // 
      // - Subscription: subscription.
      shared_ptr<string> paymentType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The EMR release.
      shared_ptr<string> releaseVersion_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The Auto Scaling policies for each node group in the cluster.
      shared_ptr<vector<ClusterCloneMeta::ScalingPolicies>> scalingPolicies_ {};
      // The Kerberos security mode of the cluster. Valid values:
      // 
      // - NORMAL: The Kerberos mode is disabled.
      // 
      // - KERBEROS: The Kerberos mode is enabled.
      shared_ptr<string> securityMode_ {};
      // The subscription configuration.
      shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
      // The list of cluster tags.
      shared_ptr<vector<Tag>> tags_ {};
    };

    virtual bool empty() const override { return this->clusterCloneMeta_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterCloneMeta Field Functions 
    bool hasClusterCloneMeta() const { return this->clusterCloneMeta_ != nullptr;};
    void deleteClusterCloneMeta() { this->clusterCloneMeta_ = nullptr;};
    inline const GetClusterCloneMetaResponseBody::ClusterCloneMeta & getClusterCloneMeta() const { DARABONBA_PTR_GET_CONST(clusterCloneMeta_, GetClusterCloneMetaResponseBody::ClusterCloneMeta) };
    inline GetClusterCloneMetaResponseBody::ClusterCloneMeta getClusterCloneMeta() { DARABONBA_PTR_GET(clusterCloneMeta_, GetClusterCloneMetaResponseBody::ClusterCloneMeta) };
    inline GetClusterCloneMetaResponseBody& setClusterCloneMeta(const GetClusterCloneMetaResponseBody::ClusterCloneMeta & clusterCloneMeta) { DARABONBA_PTR_SET_VALUE(clusterCloneMeta_, clusterCloneMeta) };
    inline GetClusterCloneMetaResponseBody& setClusterCloneMeta(GetClusterCloneMetaResponseBody::ClusterCloneMeta && clusterCloneMeta) { DARABONBA_PTR_SET_RVALUE(clusterCloneMeta_, clusterCloneMeta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterCloneMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The clone metadata of the cluster.
    shared_ptr<GetClusterCloneMetaResponseBody::ClusterCloneMeta> clusterCloneMeta_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
