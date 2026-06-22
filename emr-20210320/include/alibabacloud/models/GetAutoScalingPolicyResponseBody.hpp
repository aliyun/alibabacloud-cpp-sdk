// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CollationTimeZone.hpp>
#include <alibabacloud/models/MetricsTrigger.hpp>
#include <alibabacloud/models/TimeTrigger.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
    };
    GetAutoScalingPolicyResponseBody() = default ;
    GetAutoScalingPolicyResponseBody(const GetAutoScalingPolicyResponseBody &) = default ;
    GetAutoScalingPolicyResponseBody(GetAutoScalingPolicyResponseBody &&) = default ;
    GetAutoScalingPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingPolicyResponseBody() = default ;
    GetAutoScalingPolicyResponseBody& operator=(const GetAutoScalingPolicyResponseBody &) = default ;
    GetAutoScalingPolicyResponseBody& operator=(GetAutoScalingPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
        DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
        DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
      };
      ScalingPolicy() = default ;
      ScalingPolicy(const ScalingPolicy &) = default ;
      ScalingPolicy(ScalingPolicy &&) = default ;
      ScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingPolicy() = default ;
      ScalingPolicy& operator=(const ScalingPolicy &) = default ;
      ScalingPolicy& operator=(ScalingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScalingRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScalingRules& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
          DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
          DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
          DARABONBA_PTR_TO_JSON(CollationTimeZone, collationTimeZone_);
          DARABONBA_PTR_TO_JSON(MetricsTrigger, metricsTrigger_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(TimeTrigger, timeTrigger_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, ScalingRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
          DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
          DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
          DARABONBA_PTR_FROM_JSON(CollationTimeZone, collationTimeZone_);
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
        && this->adjustmentType_ == nullptr && this->adjustmentValue_ == nullptr && this->collationTimeZone_ == nullptr && this->metricsTrigger_ == nullptr && this->ruleName_ == nullptr
        && this->timeTrigger_ == nullptr && this->triggerType_ == nullptr; };
        // activityType Field Functions 
        bool hasActivityType() const { return this->activityType_ != nullptr;};
        void deleteActivityType() { this->activityType_ = nullptr;};
        inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
        inline ScalingRules& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


        // adjustmentType Field Functions 
        bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
        void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
        inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
        inline ScalingRules& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


        // adjustmentValue Field Functions 
        bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
        void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
        inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
        inline ScalingRules& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


        // collationTimeZone Field Functions 
        bool hasCollationTimeZone() const { return this->collationTimeZone_ != nullptr;};
        void deleteCollationTimeZone() { this->collationTimeZone_ = nullptr;};
        inline const CollationTimeZone & getCollationTimeZone() const { DARABONBA_PTR_GET_CONST(collationTimeZone_, CollationTimeZone) };
        inline CollationTimeZone getCollationTimeZone() { DARABONBA_PTR_GET(collationTimeZone_, CollationTimeZone) };
        inline ScalingRules& setCollationTimeZone(const CollationTimeZone & collationTimeZone) { DARABONBA_PTR_SET_VALUE(collationTimeZone_, collationTimeZone) };
        inline ScalingRules& setCollationTimeZone(CollationTimeZone && collationTimeZone) { DARABONBA_PTR_SET_RVALUE(collationTimeZone_, collationTimeZone) };


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
        // The type of the scaling activity. Valid values:
        // 
        // - SCALE_OUT: scale-out.
        // 
        // - SCALE_IN: scale-in.
        shared_ptr<string> activityType_ {};
        // The adjustment type.
        shared_ptr<string> adjustmentType_ {};
        // The adjustment value. The value must be a positive integer. It specifies the number of instances to add or remove.
        shared_ptr<int32_t> adjustmentValue_ {};
        shared_ptr<CollationTimeZone> collationTimeZone_ {};
        // The description of the metric-based scaling rule.
        shared_ptr<MetricsTrigger> metricsTrigger_ {};
        // The name of the scaling rule.
        shared_ptr<string> ruleName_ {};
        // The description of the time-based scaling rule.
        shared_ptr<TimeTrigger> timeTrigger_ {};
        // The type of the scaling rule. Valid values:
        // 
        // - TIME_TRIGGER: a time-based scaling rule.
        // 
        // - METRICS_TRIGGER: a metric-based scaling rule.
        shared_ptr<string> triggerType_ {};
      };

      class Constraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Constraints& obj) { 
          DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
          DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, Constraints& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
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
        && this->minCapacity_ == nullptr; };
        // maxCapacity Field Functions 
        bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
        void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
        inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
        inline Constraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


        // minCapacity Field Functions 
        bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
        void deleteMinCapacity() { this->minCapacity_ = nullptr;};
        inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
        inline Constraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


      protected:
        // The maximum number of nodes in the node group.
        // Default value: 2000.
        shared_ptr<int32_t> maxCapacity_ {};
        // The minimum number of nodes in the node group.
        // Default value: 0.
        shared_ptr<int32_t> minCapacity_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->constraints_ == nullptr && this->nodeGroupId_ == nullptr && this->scalingPolicyId_ == nullptr && this->scalingRules_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ScalingPolicy& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline const ScalingPolicy::Constraints & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, ScalingPolicy::Constraints) };
      inline ScalingPolicy::Constraints getConstraints() { DARABONBA_PTR_GET(constraints_, ScalingPolicy::Constraints) };
      inline ScalingPolicy& setConstraints(const ScalingPolicy::Constraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
      inline ScalingPolicy& setConstraints(ScalingPolicy::Constraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline ScalingPolicy& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // scalingPolicyId Field Functions 
      bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
      void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
      inline string getScalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
      inline ScalingPolicy& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


      // scalingRules Field Functions 
      bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
      void deleteScalingRules() { this->scalingRules_ = nullptr;};
      inline const vector<ScalingPolicy::ScalingRules> & getScalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingPolicy::ScalingRules>) };
      inline vector<ScalingPolicy::ScalingRules> getScalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingPolicy::ScalingRules>) };
      inline ScalingPolicy& setScalingRules(const vector<ScalingPolicy::ScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
      inline ScalingPolicy& setScalingRules(vector<ScalingPolicy::ScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The constraints on the minimum and maximum number of nodes in the node group.
      shared_ptr<ScalingPolicy::Constraints> constraints_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The scaling policy ID.
      shared_ptr<string> scalingPolicyId_ {};
      // The list of scaling rules.
      shared_ptr<vector<ScalingPolicy::ScalingRules>> scalingRules_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scalingPolicy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoScalingPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline const GetAutoScalingPolicyResponseBody::ScalingPolicy & getScalingPolicy() const { DARABONBA_PTR_GET_CONST(scalingPolicy_, GetAutoScalingPolicyResponseBody::ScalingPolicy) };
    inline GetAutoScalingPolicyResponseBody::ScalingPolicy getScalingPolicy() { DARABONBA_PTR_GET(scalingPolicy_, GetAutoScalingPolicyResponseBody::ScalingPolicy) };
    inline GetAutoScalingPolicyResponseBody& setScalingPolicy(const GetAutoScalingPolicyResponseBody::ScalingPolicy & scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };
    inline GetAutoScalingPolicyResponseBody& setScalingPolicy(GetAutoScalingPolicyResponseBody::ScalingPolicy && scalingPolicy) { DARABONBA_PTR_SET_RVALUE(scalingPolicy_, scalingPolicy) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Auto Scaling policy.
    shared_ptr<GetAutoScalingPolicyResponseBody::ScalingPolicy> scalingPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
