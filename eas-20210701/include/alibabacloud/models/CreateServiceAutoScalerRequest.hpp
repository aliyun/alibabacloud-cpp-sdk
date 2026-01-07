// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(behavior, behavior_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(scaleStrategies, scaleStrategies_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(scaleStrategies, scaleStrategies_);
    };
    CreateServiceAutoScalerRequest() = default ;
    CreateServiceAutoScalerRequest(const CreateServiceAutoScalerRequest &) = default ;
    CreateServiceAutoScalerRequest(CreateServiceAutoScalerRequest &&) = default ;
    CreateServiceAutoScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequest() = default ;
    CreateServiceAutoScalerRequest& operator=(const CreateServiceAutoScalerRequest &) = default ;
    CreateServiceAutoScalerRequest& operator=(CreateServiceAutoScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScaleStrategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleStrategies& obj) { 
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(service, service_);
        DARABONBA_PTR_TO_JSON(threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleStrategies& obj) { 
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(service, service_);
        DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      };
      ScaleStrategies() = default ;
      ScaleStrategies(const ScaleStrategies &) = default ;
      ScaleStrategies(ScaleStrategies &&) = default ;
      ScaleStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleStrategies() = default ;
      ScaleStrategies& operator=(const ScaleStrategies &) = default ;
      ScaleStrategies& operator=(ScaleStrategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metricName_ == nullptr
        && this->service_ == nullptr && this->threshold_ == nullptr; };
      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline ScaleStrategies& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ScaleStrategies& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline ScaleStrategies& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // The name of the metric for triggering auto scaling. Valid values:
      // 
      // *   qps: the queries per second (qps) for an individual instance.
      // *   cpu: the cpu utilization.
      // * gpu[util]: gpu utilization.
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
      shared_ptr<string> service_ {};
      // The threshold of the metric that triggers auto scaling.
      // 
      // *   If you set metricName to qps, scale-out is triggered when the average qps for a single instance is greater than this threshold.
      // *   If you set metricName to cpu, scale-out is triggered when the average cpu utilization for a single instance is greater than this threshold.
      // *   If you set metricName to gpu, scale-out is triggered when the average gpu utilization for a single instance is greater than this threshold.
      // 
      // This parameter is required.
      shared_ptr<float> threshold_ {};
    };

    class Behavior : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Behavior& obj) { 
        DARABONBA_PTR_TO_JSON(onZero, onZero_);
        DARABONBA_PTR_TO_JSON(scaleDown, scaleDown_);
        DARABONBA_PTR_TO_JSON(scaleUp, scaleUp_);
      };
      friend void from_json(const Darabonba::Json& j, Behavior& obj) { 
        DARABONBA_PTR_FROM_JSON(onZero, onZero_);
        DARABONBA_PTR_FROM_JSON(scaleDown, scaleDown_);
        DARABONBA_PTR_FROM_JSON(scaleUp, scaleUp_);
      };
      Behavior() = default ;
      Behavior(const Behavior &) = default ;
      Behavior(Behavior &&) = default ;
      Behavior(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Behavior() = default ;
      Behavior& operator=(const Behavior &) = default ;
      Behavior& operator=(Behavior &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScaleUp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaleUp& obj) { 
          DARABONBA_PTR_TO_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, ScaleUp& obj) { 
          DARABONBA_PTR_FROM_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
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
        virtual bool empty() const override { return this->stabilizationWindowSeconds_ == nullptr; };
        // stabilizationWindowSeconds Field Functions 
        bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
        void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
        inline int32_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
        inline ScaleUp& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


      protected:
        // The time window that is required before the scale-out operation is performed. The scale-out operation can be performed only if the specified metric exceeds the specified threshold in the specified time window. Default value: 0.
        shared_ptr<int32_t> stabilizationWindowSeconds_ {};
      };

      class ScaleDown : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaleDown& obj) { 
          DARABONBA_PTR_TO_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, ScaleDown& obj) { 
          DARABONBA_PTR_FROM_JSON(stabilizationWindowSeconds, stabilizationWindowSeconds_);
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
        virtual bool empty() const override { return this->stabilizationWindowSeconds_ == nullptr; };
        // stabilizationWindowSeconds Field Functions 
        bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
        void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
        inline int32_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
        inline ScaleDown& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


      protected:
        // The time window that is required before the scale-in operation is performed. The scale-in operation can be performed only if the specified metric drops below the specified threshold in the specified time window. Default value: 300.
        shared_ptr<int32_t> stabilizationWindowSeconds_ {};
      };

      class OnZero : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnZero& obj) { 
          DARABONBA_PTR_TO_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
          DARABONBA_PTR_TO_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
        };
        friend void from_json(const Darabonba::Json& j, OnZero& obj) { 
          DARABONBA_PTR_FROM_JSON(scaleDownGracePeriodSeconds, scaleDownGracePeriodSeconds_);
          DARABONBA_PTR_FROM_JSON(scaleUpActivationReplicas, scaleUpActivationReplicas_);
        };
        OnZero() = default ;
        OnZero(const OnZero &) = default ;
        OnZero(OnZero &&) = default ;
        OnZero(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnZero() = default ;
        OnZero& operator=(const OnZero &) = default ;
        OnZero& operator=(OnZero &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scaleDownGracePeriodSeconds_ == nullptr
        && this->scaleUpActivationReplicas_ == nullptr; };
        // scaleDownGracePeriodSeconds Field Functions 
        bool hasScaleDownGracePeriodSeconds() const { return this->scaleDownGracePeriodSeconds_ != nullptr;};
        void deleteScaleDownGracePeriodSeconds() { this->scaleDownGracePeriodSeconds_ = nullptr;};
        inline int32_t getScaleDownGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(scaleDownGracePeriodSeconds_, 0) };
        inline OnZero& setScaleDownGracePeriodSeconds(int32_t scaleDownGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(scaleDownGracePeriodSeconds_, scaleDownGracePeriodSeconds) };


        // scaleUpActivationReplicas Field Functions 
        bool hasScaleUpActivationReplicas() const { return this->scaleUpActivationReplicas_ != nullptr;};
        void deleteScaleUpActivationReplicas() { this->scaleUpActivationReplicas_ = nullptr;};
        inline int32_t getScaleUpActivationReplicas() const { DARABONBA_PTR_GET_DEFAULT(scaleUpActivationReplicas_, 0) };
        inline OnZero& setScaleUpActivationReplicas(int32_t scaleUpActivationReplicas) { DARABONBA_PTR_SET_VALUE(scaleUpActivationReplicas_, scaleUpActivationReplicas) };


      protected:
        // The time window that is required before the number of instances is reduced to 0. The number of instances can be reduced to 0 only if no request is available or no traffic exists in the specified time window. Default value: 600.
        shared_ptr<int32_t> scaleDownGracePeriodSeconds_ {};
        // The number of instances that you want to create at a time if the number of instances is 0. Default value: 1.
        shared_ptr<int32_t> scaleUpActivationReplicas_ {};
      };

      virtual bool empty() const override { return this->onZero_ == nullptr
        && this->scaleDown_ == nullptr && this->scaleUp_ == nullptr; };
      // onZero Field Functions 
      bool hasOnZero() const { return this->onZero_ != nullptr;};
      void deleteOnZero() { this->onZero_ = nullptr;};
      inline const Behavior::OnZero & getOnZero() const { DARABONBA_PTR_GET_CONST(onZero_, Behavior::OnZero) };
      inline Behavior::OnZero getOnZero() { DARABONBA_PTR_GET(onZero_, Behavior::OnZero) };
      inline Behavior& setOnZero(const Behavior::OnZero & onZero) { DARABONBA_PTR_SET_VALUE(onZero_, onZero) };
      inline Behavior& setOnZero(Behavior::OnZero && onZero) { DARABONBA_PTR_SET_RVALUE(onZero_, onZero) };


      // scaleDown Field Functions 
      bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
      void deleteScaleDown() { this->scaleDown_ = nullptr;};
      inline const Behavior::ScaleDown & getScaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Behavior::ScaleDown) };
      inline Behavior::ScaleDown getScaleDown() { DARABONBA_PTR_GET(scaleDown_, Behavior::ScaleDown) };
      inline Behavior& setScaleDown(const Behavior::ScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
      inline Behavior& setScaleDown(Behavior::ScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


      // scaleUp Field Functions 
      bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
      void deleteScaleUp() { this->scaleUp_ = nullptr;};
      inline const Behavior::ScaleUp & getScaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Behavior::ScaleUp) };
      inline Behavior::ScaleUp getScaleUp() { DARABONBA_PTR_GET(scaleUp_, Behavior::ScaleUp) };
      inline Behavior& setScaleUp(const Behavior::ScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
      inline Behavior& setScaleUp(Behavior::ScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


    protected:
      // The operation that reduces the number of instances to 0.
      shared_ptr<Behavior::OnZero> onZero_ {};
      // The scale-in operation.
      shared_ptr<Behavior::ScaleDown> scaleDown_ {};
      // The scale-out operation.
      shared_ptr<Behavior::ScaleUp> scaleUp_ {};
    };

    virtual bool empty() const override { return this->behavior_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->scaleStrategies_ == nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline const CreateServiceAutoScalerRequest::Behavior & getBehavior() const { DARABONBA_PTR_GET_CONST(behavior_, CreateServiceAutoScalerRequest::Behavior) };
    inline CreateServiceAutoScalerRequest::Behavior getBehavior() { DARABONBA_PTR_GET(behavior_, CreateServiceAutoScalerRequest::Behavior) };
    inline CreateServiceAutoScalerRequest& setBehavior(const CreateServiceAutoScalerRequest::Behavior & behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };
    inline CreateServiceAutoScalerRequest& setBehavior(CreateServiceAutoScalerRequest::Behavior && behavior) { DARABONBA_PTR_SET_RVALUE(behavior_, behavior) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline CreateServiceAutoScalerRequest& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline CreateServiceAutoScalerRequest& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // scaleStrategies Field Functions 
    bool hasScaleStrategies() const { return this->scaleStrategies_ != nullptr;};
    void deleteScaleStrategies() { this->scaleStrategies_ = nullptr;};
    inline const vector<CreateServiceAutoScalerRequest::ScaleStrategies> & getScaleStrategies() const { DARABONBA_PTR_GET_CONST(scaleStrategies_, vector<CreateServiceAutoScalerRequest::ScaleStrategies>) };
    inline vector<CreateServiceAutoScalerRequest::ScaleStrategies> getScaleStrategies() { DARABONBA_PTR_GET(scaleStrategies_, vector<CreateServiceAutoScalerRequest::ScaleStrategies>) };
    inline CreateServiceAutoScalerRequest& setScaleStrategies(const vector<CreateServiceAutoScalerRequest::ScaleStrategies> & scaleStrategies) { DARABONBA_PTR_SET_VALUE(scaleStrategies_, scaleStrategies) };
    inline CreateServiceAutoScalerRequest& setScaleStrategies(vector<CreateServiceAutoScalerRequest::ScaleStrategies> && scaleStrategies) { DARABONBA_PTR_SET_RVALUE(scaleStrategies_, scaleStrategies) };


  protected:
    // The Autoscaler operation.
    shared_ptr<CreateServiceAutoScalerRequest::Behavior> behavior_ {};
    // The maximum number of instances in the service. The value of max must be greater than the value of min.
    // 
    // This parameter is required.
    shared_ptr<int32_t> max_ {};
    // The minimum number of instances in the service.
    // 
    // This parameter is required.
    shared_ptr<int32_t> min_ {};
    // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateServiceAutoScalerRequest::ScaleStrategies>> scaleStrategies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
