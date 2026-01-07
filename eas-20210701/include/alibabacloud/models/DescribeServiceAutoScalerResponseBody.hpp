// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODY_HPP_
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
  class DescribeServiceAutoScalerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceAutoScalerResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Behavior, behavior_);
      DARABONBA_PTR_TO_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_TO_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_TO_JSON(MinReplica, minReplica_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaleStrategies, scaleStrategies_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceAutoScalerResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_FROM_JSON(MaxReplica, maxReplica_);
      DARABONBA_PTR_FROM_JSON(MinReplica, minReplica_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaleStrategies, scaleStrategies_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeServiceAutoScalerResponseBody() = default ;
    DescribeServiceAutoScalerResponseBody(const DescribeServiceAutoScalerResponseBody &) = default ;
    DescribeServiceAutoScalerResponseBody(DescribeServiceAutoScalerResponseBody &&) = default ;
    DescribeServiceAutoScalerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceAutoScalerResponseBody() = default ;
    DescribeServiceAutoScalerResponseBody& operator=(const DescribeServiceAutoScalerResponseBody &) = default ;
    DescribeServiceAutoScalerResponseBody& operator=(DescribeServiceAutoScalerResponseBody &&) = default ;
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
      // The metric name. Valid values:
      // 
      // *   QPS: the queries per second (QPS) for an individual instance.
      // *   CPU: the CPU utilization.
      shared_ptr<string> metricName_ {};
      // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
      shared_ptr<string> service_ {};
      // The threshold of the metric that triggers auto scaling.
      // 
      // *   If you set metricName to QPS, scale-out is triggered when the average QPS for a single instance is greater than this threshold.
      // *   If you set metricName to CPU, scale-out is triggered when the average CPU utilization for a single instance is greater than this threshold.
      shared_ptr<float> threshold_ {};
    };

    class CurrentMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(service, service_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(service, service_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      CurrentMetrics() = default ;
      CurrentMetrics(const CurrentMetrics &) = default ;
      CurrentMetrics(CurrentMetrics &&) = default ;
      CurrentMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentMetrics() = default ;
      CurrentMetrics& operator=(const CurrentMetrics &) = default ;
      CurrentMetrics& operator=(CurrentMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metricName_ == nullptr
        && this->service_ == nullptr && this->value_ == nullptr; };
      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline CurrentMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline CurrentMetrics& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline CurrentMetrics& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The metric name. Valid values:
      // 
      // *   QPS
      // *   CPU
      shared_ptr<string> metricName_ {};
      // The service for which the metric is specified.
      shared_ptr<string> service_ {};
      // The metric value.
      shared_ptr<float> value_ {};
    };

    virtual bool empty() const override { return this->behavior_ == nullptr
        && this->currentMetrics_ == nullptr && this->maxReplica_ == nullptr && this->minReplica_ == nullptr && this->requestId_ == nullptr && this->scaleStrategies_ == nullptr
        && this->serviceName_ == nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline     const Darabonba::Json & getBehavior() const { DARABONBA_GET(behavior_) };
    Darabonba::Json & getBehavior() { DARABONBA_GET(behavior_) };
    inline DescribeServiceAutoScalerResponseBody& setBehavior(const Darabonba::Json & behavior) { DARABONBA_SET_VALUE(behavior_, behavior) };
    inline DescribeServiceAutoScalerResponseBody& setBehavior(Darabonba::Json && behavior) { DARABONBA_SET_RVALUE(behavior_, behavior) };


    // currentMetrics Field Functions 
    bool hasCurrentMetrics() const { return this->currentMetrics_ != nullptr;};
    void deleteCurrentMetrics() { this->currentMetrics_ = nullptr;};
    inline const vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics> & getCurrentMetrics() const { DARABONBA_PTR_GET_CONST(currentMetrics_, vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics>) };
    inline vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics> getCurrentMetrics() { DARABONBA_PTR_GET(currentMetrics_, vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics>) };
    inline DescribeServiceAutoScalerResponseBody& setCurrentMetrics(const vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics> & currentMetrics) { DARABONBA_PTR_SET_VALUE(currentMetrics_, currentMetrics) };
    inline DescribeServiceAutoScalerResponseBody& setCurrentMetrics(vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics> && currentMetrics) { DARABONBA_PTR_SET_RVALUE(currentMetrics_, currentMetrics) };


    // maxReplica Field Functions 
    bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
    void deleteMaxReplica() { this->maxReplica_ = nullptr;};
    inline int32_t getMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
    inline DescribeServiceAutoScalerResponseBody& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


    // minReplica Field Functions 
    bool hasMinReplica() const { return this->minReplica_ != nullptr;};
    void deleteMinReplica() { this->minReplica_ = nullptr;};
    inline int32_t getMinReplica() const { DARABONBA_PTR_GET_DEFAULT(minReplica_, 0) };
    inline DescribeServiceAutoScalerResponseBody& setMinReplica(int32_t minReplica) { DARABONBA_PTR_SET_VALUE(minReplica_, minReplica) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceAutoScalerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleStrategies Field Functions 
    bool hasScaleStrategies() const { return this->scaleStrategies_ != nullptr;};
    void deleteScaleStrategies() { this->scaleStrategies_ = nullptr;};
    inline const vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies> & getScaleStrategies() const { DARABONBA_PTR_GET_CONST(scaleStrategies_, vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies>) };
    inline vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies> getScaleStrategies() { DARABONBA_PTR_GET(scaleStrategies_, vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies>) };
    inline DescribeServiceAutoScalerResponseBody& setScaleStrategies(const vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies> & scaleStrategies) { DARABONBA_PTR_SET_VALUE(scaleStrategies_, scaleStrategies) };
    inline DescribeServiceAutoScalerResponseBody& setScaleStrategies(vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies> && scaleStrategies) { DARABONBA_PTR_SET_RVALUE(scaleStrategies_, scaleStrategies) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceAutoScalerResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The additional information about the Autoscaler policy, such as the interval of triggering Autoscaler.
    Darabonba::Json behavior_ {};
    // The metrics.
    shared_ptr<vector<DescribeServiceAutoScalerResponseBody::CurrentMetrics>> currentMetrics_ {};
    // The maximum number of instances in the service.
    shared_ptr<int32_t> maxReplica_ {};
    // The minimum number of instances in the service.
    shared_ptr<int32_t> minReplica_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The auto scaling policies.
    shared_ptr<vector<DescribeServiceAutoScalerResponseBody::ScaleStrategies>> scaleStrategies_ {};
    // The service name.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
