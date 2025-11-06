// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFLOWRULESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFLOWRULESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListWebFlowRulesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFlowRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Burst, burst_);
      DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ParamItem, paramItem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFlowRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Burst, burst_);
      DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ParamItem, paramItem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ListWebFlowRulesResponseBodyDataResult() = default ;
    ListWebFlowRulesResponseBodyDataResult(const ListWebFlowRulesResponseBodyDataResult &) = default ;
    ListWebFlowRulesResponseBodyDataResult(ListWebFlowRulesResponseBodyDataResult &&) = default ;
    ListWebFlowRulesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFlowRulesResponseBodyDataResult() = default ;
    ListWebFlowRulesResponseBodyDataResult& operator=(const ListWebFlowRulesResponseBodyDataResult &) = default ;
    ListWebFlowRulesResponseBodyDataResult& operator=(ListWebFlowRulesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->burst_ == nullptr && return this->controlBehavior_ == nullptr && return this->enable_ == nullptr && return this->fallbackObject_ == nullptr
        && return this->maxQueueingTimeMs_ == nullptr && return this->metricType_ == nullptr && return this->namespace_ == nullptr && return this->paramItem_ == nullptr && return this->regionId_ == nullptr
        && return this->resource_ == nullptr && return this->resourceMode_ == nullptr && return this->resourceType_ == nullptr && return this->ruleId_ == nullptr && return this->statIntervalMs_ == nullptr
        && return this->threshold_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // burst Field Functions 
    bool hasBurst() const { return this->burst_ != nullptr;};
    void deleteBurst() { this->burst_ = nullptr;};
    inline int32_t burst() const { DARABONBA_PTR_GET_DEFAULT(burst_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setBurst(int32_t burst) { DARABONBA_PTR_SET_VALUE(burst_, burst) };


    // controlBehavior Field Functions 
    bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
    void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
    inline int32_t controlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListWebFlowRulesResponseBodyDataResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // fallbackObject Field Functions 
    bool hasFallbackObject() const { return this->fallbackObject_ != nullptr;};
    void deleteFallbackObject() { this->fallbackObject_ = nullptr;};
    inline string fallbackObject() const { DARABONBA_PTR_GET_DEFAULT(fallbackObject_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setFallbackObject(string fallbackObject) { DARABONBA_PTR_SET_VALUE(fallbackObject_, fallbackObject) };


    // maxQueueingTimeMs Field Functions 
    bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
    void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
    inline int32_t maxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline int32_t metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paramItem Field Functions 
    bool hasParamItem() const { return this->paramItem_ != nullptr;};
    void deleteParamItem() { this->paramItem_ = nullptr;};
    inline string paramItem() const { DARABONBA_PTR_GET_DEFAULT(paramItem_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setParamItem(string paramItem) { DARABONBA_PTR_SET_VALUE(paramItem_, paramItem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceMode Field Functions 
    bool hasResourceMode() const { return this->resourceMode_ != nullptr;};
    void deleteResourceMode() { this->resourceMode_ = nullptr;};
    inline int32_t resourceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceMode_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setResourceMode(int32_t resourceMode) { DARABONBA_PTR_SET_VALUE(resourceMode_, resourceMode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListWebFlowRulesResponseBodyDataResult& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t statIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline ListWebFlowRulesResponseBodyDataResult& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListWebFlowRulesResponseBodyDataResult& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> burst_ = nullptr;
    std::shared_ptr<int32_t> controlBehavior_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> fallbackObject_ = nullptr;
    std::shared_ptr<int32_t> maxQueueingTimeMs_ = nullptr;
    std::shared_ptr<int32_t> metricType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> paramItem_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<int32_t> resourceMode_ = nullptr;
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<int32_t> statIntervalMs_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
