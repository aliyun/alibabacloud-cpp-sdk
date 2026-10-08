// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationScalingRuleResponseBody() = default ;
    UpdateApplicationScalingRuleResponseBody(const UpdateApplicationScalingRuleResponseBody &) = default ;
    UpdateApplicationScalingRuleResponseBody(UpdateApplicationScalingRuleResponseBody &&) = default ;
    UpdateApplicationScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBody() = default ;
    UpdateApplicationScalingRuleResponseBody& operator=(const UpdateApplicationScalingRuleResponseBody &) = default ;
    UpdateApplicationScalingRuleResponseBody& operator=(UpdateApplicationScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppScalingRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppScalingRule& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Behaviour, behaviour_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
        DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AppScalingRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Behaviour, behaviour_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AppScalingRule() = default ;
      AppScalingRule(const AppScalingRule &) = default ;
      AppScalingRule(AppScalingRule &&) = default ;
      AppScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppScalingRule() = default ;
      AppScalingRule& operator=(const AppScalingRule &) = default ;
      AppScalingRule& operator=(AppScalingRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Trigger : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
          DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_TO_JSON(Triggers, triggers_);
        };
        friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
        };
        Trigger() = default ;
        Trigger(const Trigger &) = default ;
        Trigger(Trigger &&) = default ;
        Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trigger() = default ;
        Trigger& operator=(const Trigger &) = default ;
        Trigger& operator=(Trigger &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Triggers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
            DARABONBA_PTR_TO_JSON(MetaData, metaData_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
            DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Triggers() = default ;
          Triggers(const Triggers &) = default ;
          Triggers(Triggers &&) = default ;
          Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Triggers() = default ;
          Triggers& operator=(const Triggers &) = default ;
          Triggers& operator=(Triggers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->metaData_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // metaData Field Functions 
          bool hasMetaData() const { return this->metaData_ != nullptr;};
          void deleteMetaData() { this->metaData_ = nullptr;};
          inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
          inline Triggers& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Triggers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Triggers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The metadata of the trigger.
          shared_ptr<string> metaData_ {};
          // The name of the trigger.
          shared_ptr<string> name_ {};
          // The trigger type. Only cron and app_metric are supported.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && this->minReplicas_ == nullptr && this->triggers_ == nullptr; };
        // maxReplicas Field Functions 
        bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
        void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
        inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
        inline Trigger& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline Trigger& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


        // triggers Field Functions 
        bool hasTriggers() const { return this->triggers_ != nullptr;};
        void deleteTriggers() { this->triggers_ = nullptr;};
        inline const vector<Trigger::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Trigger::Triggers>) };
        inline vector<Trigger::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<Trigger::Triggers>) };
        inline Trigger& setTriggers(const vector<Trigger::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
        inline Trigger& setTriggers(vector<Trigger::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


      protected:
        // The maximum number of replicas. The value cannot exceed 1,000.
        shared_ptr<int32_t> maxReplicas_ {};
        // The minimum number of replicas. The value cannot be less than 0.
        shared_ptr<int32_t> minReplicas_ {};
        // The list of trigger configurations.
        shared_ptr<vector<Trigger::Triggers>> triggers_ {};
      };

      class Metric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metric& obj) { 
          DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(Metrics, metrics_);
          DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
        };
        friend void from_json(const Darabonba::Json& j, Metric& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
        };
        Metric() = default ;
        Metric(const Metric &) = default ;
        Metric(Metric &&) = default ;
        Metric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metric() = default ;
        Metric& operator=(const Metric &) = default ;
        Metric& operator=(Metric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Metrics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
            DARABONBA_PTR_TO_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
            DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          };
          friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
            DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          };
          Metrics() = default ;
          Metrics(const Metrics &) = default ;
          Metrics(Metrics &&) = default ;
          Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Metrics() = default ;
          Metrics& operator=(const Metrics &) = default ;
          Metrics& operator=(Metrics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->metricTargetAverageUtilization_ == nullptr
        && this->metricType_ == nullptr; };
          // metricTargetAverageUtilization Field Functions 
          bool hasMetricTargetAverageUtilization() const { return this->metricTargetAverageUtilization_ != nullptr;};
          void deleteMetricTargetAverageUtilization() { this->metricTargetAverageUtilization_ = nullptr;};
          inline int32_t getMetricTargetAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(metricTargetAverageUtilization_, 0) };
          inline Metrics& setMetricTargetAverageUtilization(int32_t metricTargetAverageUtilization) { DARABONBA_PTR_SET_VALUE(metricTargetAverageUtilization_, metricTargetAverageUtilization) };


          // metricType Field Functions 
          bool hasMetricType() const { return this->metricType_ != nullptr;};
          void deleteMetricType() { this->metricType_ = nullptr;};
          inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
          inline Metrics& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        protected:
          // This parameter is deprecated.
          shared_ptr<int32_t> metricTargetAverageUtilization_ {};
          // This parameter is deprecated.
          shared_ptr<string> metricType_ {};
        };

        virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && this->metrics_ == nullptr && this->minReplicas_ == nullptr; };
        // maxReplicas Field Functions 
        bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
        void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
        inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
        inline Metric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline const vector<Metric::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric::Metrics>) };
        inline vector<Metric::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Metric::Metrics>) };
        inline Metric& setMetrics(const vector<Metric::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
        inline Metric& setMetrics(vector<Metric::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline Metric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


      protected:
        // This parameter is deprecated.
        shared_ptr<int32_t> maxReplicas_ {};
        // This parameter is deprecated.
        shared_ptr<vector<Metric::Metrics>> metrics_ {};
        // This parameter is deprecated.
        shared_ptr<int32_t> minReplicas_ {};
      };

      class Behaviour : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Behaviour& obj) { 
          DARABONBA_PTR_TO_JSON(ScaleDown, scaleDown_);
          DARABONBA_PTR_TO_JSON(ScaleUp, scaleUp_);
        };
        friend void from_json(const Darabonba::Json& j, Behaviour& obj) { 
          DARABONBA_PTR_FROM_JSON(ScaleDown, scaleDown_);
          DARABONBA_PTR_FROM_JSON(ScaleUp, scaleUp_);
        };
        Behaviour() = default ;
        Behaviour(const Behaviour &) = default ;
        Behaviour(Behaviour &&) = default ;
        Behaviour(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Behaviour() = default ;
        Behaviour& operator=(const Behaviour &) = default ;
        Behaviour& operator=(Behaviour &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScaleUp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScaleUp& obj) { 
            DARABONBA_PTR_TO_JSON(Policies, policies_);
            DARABONBA_PTR_TO_JSON(SelectPolicy, selectPolicy_);
            DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, ScaleUp& obj) { 
            DARABONBA_PTR_FROM_JSON(Policies, policies_);
            DARABONBA_PTR_FROM_JSON(SelectPolicy, selectPolicy_);
            DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
          };
          ScaleUp() = default ;
          ScaleUp(const ScaleUp &) = default ;
          ScaleUp(ScaleUp &&) = default ;
          ScaleUp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScaleUp() = default ;
          ScaleUp& operator=(const ScaleUp &) = default ;
          ScaleUp& operator=(ScaleUp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Policies : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Policies& obj) { 
              DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Policies& obj) { 
              DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Policies() = default ;
            Policies(const Policies &) = default ;
            Policies(Policies &&) = default ;
            Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Policies() = default ;
            Policies& operator=(const Policies &) = default ;
            Policies& operator=(Policies &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->periodSeconds_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
            // periodSeconds Field Functions 
            bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
            void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
            inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
            inline Policies& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Policies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Policies& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The check period. Valid values: 0 to 1,800. Unit: seconds.
            shared_ptr<int32_t> periodSeconds_ {};
            // The policy type. Valid values: Pods and Percent.
            shared_ptr<string> type_ {};
            // The value of the policy for the scaling behavior. The value must be an integer greater than 0. If the policy type is Pods, the value indicates the number of pods. If the policy type is Percent, the value indicates a percentage, which can exceed 100%.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->policies_ == nullptr
        && this->selectPolicy_ == nullptr && this->stabilizationWindowSeconds_ == nullptr; };
          // policies Field Functions 
          bool hasPolicies() const { return this->policies_ != nullptr;};
          void deletePolicies() { this->policies_ = nullptr;};
          inline const vector<ScaleUp::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ScaleUp::Policies>) };
          inline vector<ScaleUp::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ScaleUp::Policies>) };
          inline ScaleUp& setPolicies(const vector<ScaleUp::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
          inline ScaleUp& setPolicies(vector<ScaleUp::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


          // selectPolicy Field Functions 
          bool hasSelectPolicy() const { return this->selectPolicy_ != nullptr;};
          void deleteSelectPolicy() { this->selectPolicy_ = nullptr;};
          inline string getSelectPolicy() const { DARABONBA_PTR_GET_DEFAULT(selectPolicy_, "") };
          inline ScaleUp& setSelectPolicy(string selectPolicy) { DARABONBA_PTR_SET_VALUE(selectPolicy_, selectPolicy) };


          // stabilizationWindowSeconds Field Functions 
          bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
          void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
          inline int32_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
          inline ScaleUp& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


        protected:
          // The policy configurations.
          shared_ptr<vector<ScaleUp::Policies>> policies_ {};
          // The policy for the scale-out step size. Valid values: Max, Min, and Disable.
          shared_ptr<string> selectPolicy_ {};
          // The cooldown time for scale-outs. Valid values: 0 to 3,600. Unit: seconds. Default value: 0.
          shared_ptr<int32_t> stabilizationWindowSeconds_ {};
        };

        class ScaleDown : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScaleDown& obj) { 
            DARABONBA_PTR_TO_JSON(Policies, policies_);
            DARABONBA_PTR_TO_JSON(SelectPolicy, selectPolicy_);
            DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, ScaleDown& obj) { 
            DARABONBA_PTR_FROM_JSON(Policies, policies_);
            DARABONBA_PTR_FROM_JSON(SelectPolicy, selectPolicy_);
            DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
          };
          ScaleDown() = default ;
          ScaleDown(const ScaleDown &) = default ;
          ScaleDown(ScaleDown &&) = default ;
          ScaleDown(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScaleDown() = default ;
          ScaleDown& operator=(const ScaleDown &) = default ;
          ScaleDown& operator=(ScaleDown &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Policies : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Policies& obj) { 
              DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Policies& obj) { 
              DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Policies() = default ;
            Policies(const Policies &) = default ;
            Policies(Policies &&) = default ;
            Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Policies() = default ;
            Policies& operator=(const Policies &) = default ;
            Policies& operator=(Policies &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->periodSeconds_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
            // periodSeconds Field Functions 
            bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
            void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
            inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
            inline Policies& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Policies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Policies& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The check period. Valid values: 0 to 1,800. Unit: seconds.
            shared_ptr<int32_t> periodSeconds_ {};
            // The policy type. Valid values: Pods and Percent.
            shared_ptr<string> type_ {};
            // The value of the policy for the scaling behavior. The value must be an integer greater than 0. If the policy type is Pods, the value indicates the number of pods. If the policy type is Percent, the value indicates a percentage, which can exceed 100%.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->policies_ == nullptr
        && this->selectPolicy_ == nullptr && this->stabilizationWindowSeconds_ == nullptr; };
          // policies Field Functions 
          bool hasPolicies() const { return this->policies_ != nullptr;};
          void deletePolicies() { this->policies_ = nullptr;};
          inline const vector<ScaleDown::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ScaleDown::Policies>) };
          inline vector<ScaleDown::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ScaleDown::Policies>) };
          inline ScaleDown& setPolicies(const vector<ScaleDown::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
          inline ScaleDown& setPolicies(vector<ScaleDown::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


          // selectPolicy Field Functions 
          bool hasSelectPolicy() const { return this->selectPolicy_ != nullptr;};
          void deleteSelectPolicy() { this->selectPolicy_ = nullptr;};
          inline string getSelectPolicy() const { DARABONBA_PTR_GET_DEFAULT(selectPolicy_, "") };
          inline ScaleDown& setSelectPolicy(string selectPolicy) { DARABONBA_PTR_SET_VALUE(selectPolicy_, selectPolicy) };


          // stabilizationWindowSeconds Field Functions 
          bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
          void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
          inline int32_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
          inline ScaleDown& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


        protected:
          // The policy configurations.
          shared_ptr<vector<ScaleDown::Policies>> policies_ {};
          // The policy for the scale-in step size. Valid values: Max, Min, and Disable.
          shared_ptr<string> selectPolicy_ {};
          // The cooldown time for scale-ins. Valid values: 0 to 3,600. Unit: seconds. Default value: 300.
          shared_ptr<int32_t> stabilizationWindowSeconds_ {};
        };

        virtual bool empty() const override { return this->scaleDown_ == nullptr
        && this->scaleUp_ == nullptr; };
        // scaleDown Field Functions 
        bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
        void deleteScaleDown() { this->scaleDown_ = nullptr;};
        inline const Behaviour::ScaleDown & getScaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Behaviour::ScaleDown) };
        inline Behaviour::ScaleDown getScaleDown() { DARABONBA_PTR_GET(scaleDown_, Behaviour::ScaleDown) };
        inline Behaviour& setScaleDown(const Behaviour::ScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
        inline Behaviour& setScaleDown(Behaviour::ScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


        // scaleUp Field Functions 
        bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
        void deleteScaleUp() { this->scaleUp_ = nullptr;};
        inline const Behaviour::ScaleUp & getScaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Behaviour::ScaleUp) };
        inline Behaviour::ScaleUp getScaleUp() { DARABONBA_PTR_GET(scaleUp_, Behaviour::ScaleUp) };
        inline Behaviour& setScaleUp(const Behaviour::ScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
        inline Behaviour& setScaleUp(Behaviour::ScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


      protected:
        // The scale-in behavior configuration.
        shared_ptr<Behaviour::ScaleDown> scaleDown_ {};
        // The scale-out behavior configuration.
        shared_ptr<Behaviour::ScaleUp> scaleUp_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->behaviour_ == nullptr && this->createTime_ == nullptr && this->lastDisableTime_ == nullptr && this->maxReplicas_ == nullptr && this->metric_ == nullptr
        && this->minReplicas_ == nullptr && this->scaleRuleEnabled_ == nullptr && this->scaleRuleName_ == nullptr && this->scaleRuleType_ == nullptr && this->trigger_ == nullptr
        && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppScalingRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // behaviour Field Functions 
      bool hasBehaviour() const { return this->behaviour_ != nullptr;};
      void deleteBehaviour() { this->behaviour_ = nullptr;};
      inline const AppScalingRule::Behaviour & getBehaviour() const { DARABONBA_PTR_GET_CONST(behaviour_, AppScalingRule::Behaviour) };
      inline AppScalingRule::Behaviour getBehaviour() { DARABONBA_PTR_GET(behaviour_, AppScalingRule::Behaviour) };
      inline AppScalingRule& setBehaviour(const AppScalingRule::Behaviour & behaviour) { DARABONBA_PTR_SET_VALUE(behaviour_, behaviour) };
      inline AppScalingRule& setBehaviour(AppScalingRule::Behaviour && behaviour) { DARABONBA_PTR_SET_RVALUE(behaviour_, behaviour) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AppScalingRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastDisableTime Field Functions 
      bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
      void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
      inline int64_t getLastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
      inline AppScalingRule& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


      // maxReplicas Field Functions 
      bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
      void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
      inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
      inline AppScalingRule& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline const AppScalingRule::Metric & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, AppScalingRule::Metric) };
      inline AppScalingRule::Metric getMetric() { DARABONBA_PTR_GET(metric_, AppScalingRule::Metric) };
      inline AppScalingRule& setMetric(const AppScalingRule::Metric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
      inline AppScalingRule& setMetric(AppScalingRule::Metric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


      // minReplicas Field Functions 
      bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
      void deleteMinReplicas() { this->minReplicas_ = nullptr;};
      inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
      inline AppScalingRule& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


      // scaleRuleEnabled Field Functions 
      bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
      void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
      inline bool getScaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
      inline AppScalingRule& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


      // scaleRuleName Field Functions 
      bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
      void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
      inline string getScaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
      inline AppScalingRule& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


      // scaleRuleType Field Functions 
      bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
      void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
      inline string getScaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
      inline AppScalingRule& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const AppScalingRule::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, AppScalingRule::Trigger) };
      inline AppScalingRule::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, AppScalingRule::Trigger) };
      inline AppScalingRule& setTrigger(const AppScalingRule::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline AppScalingRule& setTrigger(AppScalingRule::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AppScalingRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application to which the Auto Scaling policy belongs.
      shared_ptr<string> appId_ {};
      // The scaling behavior configuration.
      shared_ptr<AppScalingRule::Behaviour> behaviour_ {};
      // The UNIX timestamp when the Auto Scaling policy was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The UNIX timestamp when the Auto Scaling policy was last disabled. Unit: milliseconds.
      shared_ptr<int64_t> lastDisableTime_ {};
      // This parameter is deprecated.
      shared_ptr<int32_t> maxReplicas_ {};
      // This parameter is deprecated.
      shared_ptr<AppScalingRule::Metric> metric_ {};
      // This parameter is deprecated.
      shared_ptr<int32_t> minReplicas_ {};
      // The status of the Auto Scaling policy.
      // 
      // - **true**: enabled
      // 
      // - **false**: disabled
      shared_ptr<bool> scaleRuleEnabled_ {};
      // The name of the Auto Scaling policy.
      shared_ptr<string> scaleRuleName_ {};
      // The type of the Auto Scaling policy. Only the trigger type is supported.
      shared_ptr<string> scaleRuleType_ {};
      // The trigger configuration.
      shared_ptr<AppScalingRule::Trigger> trigger_ {};
      // The UNIX timestamp when the Auto Scaling policy was updated. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->appScalingRule_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // appScalingRule Field Functions 
    bool hasAppScalingRule() const { return this->appScalingRule_ != nullptr;};
    void deleteAppScalingRule() { this->appScalingRule_ = nullptr;};
    inline const UpdateApplicationScalingRuleResponseBody::AppScalingRule & getAppScalingRule() const { DARABONBA_PTR_GET_CONST(appScalingRule_, UpdateApplicationScalingRuleResponseBody::AppScalingRule) };
    inline UpdateApplicationScalingRuleResponseBody::AppScalingRule getAppScalingRule() { DARABONBA_PTR_GET(appScalingRule_, UpdateApplicationScalingRuleResponseBody::AppScalingRule) };
    inline UpdateApplicationScalingRuleResponseBody& setAppScalingRule(const UpdateApplicationScalingRuleResponseBody::AppScalingRule & appScalingRule) { DARABONBA_PTR_SET_VALUE(appScalingRule_, appScalingRule) };
    inline UpdateApplicationScalingRuleResponseBody& setAppScalingRule(UpdateApplicationScalingRuleResponseBody::AppScalingRule && appScalingRule) { DARABONBA_PTR_SET_RVALUE(appScalingRule_, appScalingRule) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateApplicationScalingRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApplicationScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Auto Scaling policy.
    shared_ptr<UpdateApplicationScalingRuleResponseBody::AppScalingRule> appScalingRule_ {};
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
