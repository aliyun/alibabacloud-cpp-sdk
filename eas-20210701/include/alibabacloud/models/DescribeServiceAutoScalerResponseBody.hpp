// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceAutoScalerResponseBodyCurrentMetrics.hpp>
#include <alibabacloud/models/DescribeServiceAutoScalerResponseBodyScaleStrategies.hpp>
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
    virtual bool empty() const override { this->behavior_ != nullptr
        && this->currentMetrics_ != nullptr && this->maxReplica_ != nullptr && this->minReplica_ != nullptr && this->requestId_ != nullptr && this->scaleStrategies_ != nullptr
        && this->serviceName_ != nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline     const Darabonba::Json & behavior() const { DARABONBA_GET(behavior_) };
    Darabonba::Json & behavior() { DARABONBA_GET(behavior_) };
    inline DescribeServiceAutoScalerResponseBody& setBehavior(const Darabonba::Json & behavior) { DARABONBA_SET_VALUE(behavior_, behavior) };
    inline DescribeServiceAutoScalerResponseBody& setBehavior(Darabonba::Json & behavior) { DARABONBA_SET_RVALUE(behavior_, behavior) };


    // currentMetrics Field Functions 
    bool hasCurrentMetrics() const { return this->currentMetrics_ != nullptr;};
    void deleteCurrentMetrics() { this->currentMetrics_ = nullptr;};
    inline const vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics> & currentMetrics() const { DARABONBA_PTR_GET_CONST(currentMetrics_, vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics>) };
    inline vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics> currentMetrics() { DARABONBA_PTR_GET(currentMetrics_, vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics>) };
    inline DescribeServiceAutoScalerResponseBody& setCurrentMetrics(const vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics> & currentMetrics) { DARABONBA_PTR_SET_VALUE(currentMetrics_, currentMetrics) };
    inline DescribeServiceAutoScalerResponseBody& setCurrentMetrics(vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics> && currentMetrics) { DARABONBA_PTR_SET_RVALUE(currentMetrics_, currentMetrics) };


    // maxReplica Field Functions 
    bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
    void deleteMaxReplica() { this->maxReplica_ = nullptr;};
    inline int32_t maxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
    inline DescribeServiceAutoScalerResponseBody& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


    // minReplica Field Functions 
    bool hasMinReplica() const { return this->minReplica_ != nullptr;};
    void deleteMinReplica() { this->minReplica_ = nullptr;};
    inline int32_t minReplica() const { DARABONBA_PTR_GET_DEFAULT(minReplica_, 0) };
    inline DescribeServiceAutoScalerResponseBody& setMinReplica(int32_t minReplica) { DARABONBA_PTR_SET_VALUE(minReplica_, minReplica) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceAutoScalerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleStrategies Field Functions 
    bool hasScaleStrategies() const { return this->scaleStrategies_ != nullptr;};
    void deleteScaleStrategies() { this->scaleStrategies_ = nullptr;};
    inline const vector<DescribeServiceAutoScalerResponseBodyScaleStrategies> & scaleStrategies() const { DARABONBA_PTR_GET_CONST(scaleStrategies_, vector<DescribeServiceAutoScalerResponseBodyScaleStrategies>) };
    inline vector<DescribeServiceAutoScalerResponseBodyScaleStrategies> scaleStrategies() { DARABONBA_PTR_GET(scaleStrategies_, vector<DescribeServiceAutoScalerResponseBodyScaleStrategies>) };
    inline DescribeServiceAutoScalerResponseBody& setScaleStrategies(const vector<DescribeServiceAutoScalerResponseBodyScaleStrategies> & scaleStrategies) { DARABONBA_PTR_SET_VALUE(scaleStrategies_, scaleStrategies) };
    inline DescribeServiceAutoScalerResponseBody& setScaleStrategies(vector<DescribeServiceAutoScalerResponseBodyScaleStrategies> && scaleStrategies) { DARABONBA_PTR_SET_RVALUE(scaleStrategies_, scaleStrategies) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceAutoScalerResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The additional information about the Autoscaler policy, such as the interval of triggering Autoscaler.
    Darabonba::Json behavior_ = nullptr;
    // The metrics.
    std::shared_ptr<vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics>> currentMetrics_ = nullptr;
    // The maximum number of instances in the service.
    std::shared_ptr<int32_t> maxReplica_ = nullptr;
    // The minimum number of instances in the service.
    std::shared_ptr<int32_t> minReplica_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The auto scaling policies.
    std::shared_ptr<vector<DescribeServiceAutoScalerResponseBodyScaleStrategies>> scaleStrategies_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
