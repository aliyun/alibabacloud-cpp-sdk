// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBFLOWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBFLOWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateWebFlowRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebFlowRuleRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebFlowRuleRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ResourceMode, resourceMode_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateWebFlowRuleRequest() = default ;
    UpdateWebFlowRuleRequest(const UpdateWebFlowRuleRequest &) = default ;
    UpdateWebFlowRuleRequest(UpdateWebFlowRuleRequest &&) = default ;
    UpdateWebFlowRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebFlowRuleRequest() = default ;
    UpdateWebFlowRuleRequest& operator=(const UpdateWebFlowRuleRequest &) = default ;
    UpdateWebFlowRuleRequest& operator=(UpdateWebFlowRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->burst_ == nullptr && this->controlBehavior_ == nullptr && this->enable_ == nullptr
        && this->maxQueueingTimeMs_ == nullptr && this->metricType_ == nullptr && this->namespace_ == nullptr && this->paramItem_ == nullptr && this->regionId_ == nullptr
        && this->resourceMode_ == nullptr && this->ruleId_ == nullptr && this->statIntervalMs_ == nullptr && this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateWebFlowRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateWebFlowRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateWebFlowRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // burst Field Functions 
    bool hasBurst() const { return this->burst_ != nullptr;};
    void deleteBurst() { this->burst_ = nullptr;};
    inline int32_t getBurst() const { DARABONBA_PTR_GET_DEFAULT(burst_, 0) };
    inline UpdateWebFlowRuleRequest& setBurst(int32_t burst) { DARABONBA_PTR_SET_VALUE(burst_, burst) };


    // controlBehavior Field Functions 
    bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
    void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
    inline int32_t getControlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
    inline UpdateWebFlowRuleRequest& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateWebFlowRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maxQueueingTimeMs Field Functions 
    bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
    void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
    inline int32_t getMaxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
    inline UpdateWebFlowRuleRequest& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline int32_t getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
    inline UpdateWebFlowRuleRequest& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateWebFlowRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paramItem Field Functions 
    bool hasParamItem() const { return this->paramItem_ != nullptr;};
    void deleteParamItem() { this->paramItem_ = nullptr;};
    inline string getParamItem() const { DARABONBA_PTR_GET_DEFAULT(paramItem_, "") };
    inline UpdateWebFlowRuleRequest& setParamItem(string paramItem) { DARABONBA_PTR_SET_VALUE(paramItem_, paramItem) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateWebFlowRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceMode Field Functions 
    bool hasResourceMode() const { return this->resourceMode_ != nullptr;};
    void deleteResourceMode() { this->resourceMode_ = nullptr;};
    inline int32_t getResourceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceMode_, 0) };
    inline UpdateWebFlowRuleRequest& setResourceMode(int32_t resourceMode) { DARABONBA_PTR_SET_VALUE(resourceMode_, resourceMode) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline UpdateWebFlowRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline UpdateWebFlowRuleRequest& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateWebFlowRuleRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> burst_ {};
    shared_ptr<int32_t> controlBehavior_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> maxQueueingTimeMs_ {};
    shared_ptr<int32_t> metricType_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> paramItem_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> resourceMode_ {};
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    shared_ptr<int32_t> statIntervalMs_ {};
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
