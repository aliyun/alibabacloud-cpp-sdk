// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBFLOWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBFLOWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateWebFlowRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebFlowRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Burst, burst_);
      DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ParamItem, paramItem_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebFlowRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Burst, burst_);
      DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ParamItem, paramItem_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateWebFlowRuleRequest() = default ;
    CreateWebFlowRuleRequest(const CreateWebFlowRuleRequest &) = default ;
    CreateWebFlowRuleRequest(CreateWebFlowRuleRequest &&) = default ;
    CreateWebFlowRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebFlowRuleRequest() = default ;
    CreateWebFlowRuleRequest& operator=(const CreateWebFlowRuleRequest &) = default ;
    CreateWebFlowRuleRequest& operator=(CreateWebFlowRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->burst_ == nullptr && this->controlBehavior_ == nullptr && this->enable_ == nullptr
        && this->maxQueueingTimeMs_ == nullptr && this->metricType_ == nullptr && this->namespace_ == nullptr && this->paramItem_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceMode_ == nullptr && this->resourceType_ == nullptr && this->statIntervalMs_ == nullptr && this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateWebFlowRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateWebFlowRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateWebFlowRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // burst Field Functions 
    bool hasBurst() const { return this->burst_ != nullptr;};
    void deleteBurst() { this->burst_ = nullptr;};
    inline int32_t getBurst() const { DARABONBA_PTR_GET_DEFAULT(burst_, 0) };
    inline CreateWebFlowRuleRequest& setBurst(int32_t burst) { DARABONBA_PTR_SET_VALUE(burst_, burst) };


    // controlBehavior Field Functions 
    bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
    void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
    inline int32_t getControlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
    inline CreateWebFlowRuleRequest& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateWebFlowRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maxQueueingTimeMs Field Functions 
    bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
    void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
    inline int32_t getMaxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
    inline CreateWebFlowRuleRequest& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline int32_t getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
    inline CreateWebFlowRuleRequest& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateWebFlowRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paramItem Field Functions 
    bool hasParamItem() const { return this->paramItem_ != nullptr;};
    void deleteParamItem() { this->paramItem_ = nullptr;};
    inline string getParamItem() const { DARABONBA_PTR_GET_DEFAULT(paramItem_, "") };
    inline CreateWebFlowRuleRequest& setParamItem(string paramItem) { DARABONBA_PTR_SET_VALUE(paramItem_, paramItem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWebFlowRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateWebFlowRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceMode Field Functions 
    bool hasResourceMode() const { return this->resourceMode_ != nullptr;};
    void deleteResourceMode() { this->resourceMode_ = nullptr;};
    inline int32_t getResourceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceMode_, 0) };
    inline CreateWebFlowRuleRequest& setResourceMode(int32_t resourceMode) { DARABONBA_PTR_SET_VALUE(resourceMode_, resourceMode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline CreateWebFlowRuleRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline CreateWebFlowRuleRequest& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateWebFlowRuleRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The language in which you want the results to be displayed. Valid values: zh (default): Chinese. en: English
    shared_ptr<string> acceptLanguage_ {};
    // The application ID
    shared_ptr<string> appId_ {};
    // The application name
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The number of additional requests allowed for burst requests. The effect is equivalent to the maximum number of tokens of the token bucket algorithm.
    shared_ptr<int32_t> burst_ {};
    // The flow control method. Valid values:
    // 
    // - 0: fast failure
    // 
    // - 2: wait in queue
    shared_ptr<int32_t> controlBehavior_ {};
    // The rule status. Valid values:
    // 
    // - true: enabled
    // 
    // - false: disabled
    shared_ptr<bool> enable_ {};
    // The timeout period. Unit: milliseconds. This parameter is required if the ControlBehavior parameter is set to 2.
    shared_ptr<int32_t> maxQueueingTimeMs_ {};
    // The threshold type. Valid values:
    // 
    // - 1 (number of requests)
    shared_ptr<int32_t> metricType_ {};
    // The namespace
    shared_ptr<string> namespace_ {};
    // The parameter description, which is a JSON string containing the following key-value pairs:
    // 
    // - parseStrategy: the parameter property (0: client IP address, 1: remote host, 2: header, 3: URL parameter)
    // 
    // - fieldName: the header name or URL parameter name. You must specify this key only if parseStrategy is set to 2 or 3
    // 
    // - matchStrategy: the method to match the property value. You must specify this key only if parseStrategy is set to 2 or 3 and the property value is matched. Valid values: 0 (exact match), 2 (regular expression match), and 3 (substring match)
    // 
    // - pattern: the match string. You must specify this key only if parseStrategy is set to 2 or 3 and the property value is matched
    shared_ptr<string> paramItem_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The interface name: The application resources to which the rule applies. The interface name must be the same as the name on the interface details page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // Resource mode
    // 
    // - 0: resource name mode
    // 
    // This parameter is required.
    shared_ptr<int32_t> resourceMode_ {};
    // The resource type. Valid values:
    // 
    // - 0: custom interface
    // 
    // - 1: WEB
    // 
    // - 2: RPC
    shared_ptr<int32_t> resourceType_ {};
    // The length of the time window. Unit: milliseconds. The default value is 1000, which indicates 1 second.
    shared_ptr<int32_t> statIntervalMs_ {};
    // Threshold
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
