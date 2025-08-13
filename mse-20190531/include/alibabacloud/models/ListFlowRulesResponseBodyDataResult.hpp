// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWRULESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWRULESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListFlowRulesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_TO_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_ANY_TO_JSON(TrafficTags, trafficTags_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_FROM_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_ANY_FROM_JSON(TrafficTags, trafficTags_);
    };
    ListFlowRulesResponseBodyDataResult() = default ;
    ListFlowRulesResponseBodyDataResult(const ListFlowRulesResponseBodyDataResult &) = default ;
    ListFlowRulesResponseBodyDataResult(ListFlowRulesResponseBodyDataResult &&) = default ;
    ListFlowRulesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowRulesResponseBodyDataResult() = default ;
    ListFlowRulesResponseBodyDataResult& operator=(const ListFlowRulesResponseBodyDataResult &) = default ;
    ListFlowRulesResponseBodyDataResult& operator=(ListFlowRulesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->controlBehavior_ != nullptr && this->enable_ != nullptr && this->fallbackObject_ != nullptr && this->limitApp_ != nullptr
        && this->maxQueueingTimeMs_ != nullptr && this->metricType_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr
        && this->resourceType_ != nullptr && this->ruleId_ != nullptr && this->threshold_ != nullptr && this->trafficTags_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListFlowRulesResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListFlowRulesResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // controlBehavior Field Functions 
    bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
    void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
    inline int32_t controlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
    inline ListFlowRulesResponseBodyDataResult& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListFlowRulesResponseBodyDataResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // fallbackObject Field Functions 
    bool hasFallbackObject() const { return this->fallbackObject_ != nullptr;};
    void deleteFallbackObject() { this->fallbackObject_ = nullptr;};
    inline string fallbackObject() const { DARABONBA_PTR_GET_DEFAULT(fallbackObject_, "") };
    inline ListFlowRulesResponseBodyDataResult& setFallbackObject(string fallbackObject) { DARABONBA_PTR_SET_VALUE(fallbackObject_, fallbackObject) };


    // limitApp Field Functions 
    bool hasLimitApp() const { return this->limitApp_ != nullptr;};
    void deleteLimitApp() { this->limitApp_ = nullptr;};
    inline string limitApp() const { DARABONBA_PTR_GET_DEFAULT(limitApp_, "") };
    inline ListFlowRulesResponseBodyDataResult& setLimitApp(string limitApp) { DARABONBA_PTR_SET_VALUE(limitApp_, limitApp) };


    // maxQueueingTimeMs Field Functions 
    bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
    void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
    inline int32_t maxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
    inline ListFlowRulesResponseBodyDataResult& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline int32_t metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
    inline ListFlowRulesResponseBodyDataResult& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListFlowRulesResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListFlowRulesResponseBodyDataResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListFlowRulesResponseBodyDataResult& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline ListFlowRulesResponseBodyDataResult& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListFlowRulesResponseBodyDataResult& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListFlowRulesResponseBodyDataResult& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // trafficTags Field Functions 
    bool hasTrafficTags() const { return this->trafficTags_ != nullptr;};
    void deleteTrafficTags() { this->trafficTags_ = nullptr;};
    inline     const Darabonba::Json & trafficTags() const { DARABONBA_GET(trafficTags_) };
    Darabonba::Json & trafficTags() { DARABONBA_GET(trafficTags_) };
    inline ListFlowRulesResponseBodyDataResult& setTrafficTags(const Darabonba::Json & trafficTags) { DARABONBA_SET_VALUE(trafficTags_, trafficTags) };
    inline ListFlowRulesResponseBodyDataResult& setTrafficTags(Darabonba::Json & trafficTags) { DARABONBA_SET_RVALUE(trafficTags_, trafficTags) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The throttling effect.
    // 
    // Valid values:
    // 
    // *   0
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     fast failure
    // 
    //     <!-- -->
    // 
    // *   2
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     in queue
    // 
    //     <!-- -->
    std::shared_ptr<int32_t> controlBehavior_ = nullptr;
    // Indicates whether the throttling rule was enabled.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enable_ = nullptr;
    // The throttling behavior.
    std::shared_ptr<string> fallbackObject_ = nullptr;
    // Requests source application.
    std::shared_ptr<string> limitApp_ = nullptr;
    // The timeout period for queuing when the value of ControlBehavior is set to 2. Unit: milliseconds.
    std::shared_ptr<int32_t> maxQueueingTimeMs_ = nullptr;
    // The statistical dimension. The value 1 indicates that the number of accepted requests is used for statistics.
    std::shared_ptr<int32_t> metricType_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the interface resource.
    std::shared_ptr<string> resource_ = nullptr;
    // Interface resource type.
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The throttling threshold.
    std::shared_ptr<float> threshold_ = nullptr;
    // A reserved parameter.
    Darabonba::Json trafficTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
