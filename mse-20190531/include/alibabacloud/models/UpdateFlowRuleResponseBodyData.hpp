// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateFlowRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LimitApp, limitApp_);
      DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateFlowRuleResponseBodyData() = default ;
    UpdateFlowRuleResponseBodyData(const UpdateFlowRuleResponseBodyData &) = default ;
    UpdateFlowRuleResponseBodyData(UpdateFlowRuleResponseBodyData &&) = default ;
    UpdateFlowRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowRuleResponseBodyData() = default ;
    UpdateFlowRuleResponseBodyData& operator=(const UpdateFlowRuleResponseBodyData &) = default ;
    UpdateFlowRuleResponseBodyData& operator=(UpdateFlowRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->controlBehavior_ == nullptr && return this->enable_ == nullptr && return this->id_ == nullptr && return this->limitApp_ == nullptr
        && return this->maxQueueingTimeMs_ == nullptr && return this->namespace_ == nullptr && return this->resource_ == nullptr && return this->threshold_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateFlowRuleResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateFlowRuleResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // controlBehavior Field Functions 
    bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
    void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
    inline int32_t controlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
    inline UpdateFlowRuleResponseBodyData& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateFlowRuleResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateFlowRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // limitApp Field Functions 
    bool hasLimitApp() const { return this->limitApp_ != nullptr;};
    void deleteLimitApp() { this->limitApp_ = nullptr;};
    inline string limitApp() const { DARABONBA_PTR_GET_DEFAULT(limitApp_, "") };
    inline UpdateFlowRuleResponseBodyData& setLimitApp(string limitApp) { DARABONBA_PTR_SET_VALUE(limitApp_, limitApp) };


    // maxQueueingTimeMs Field Functions 
    bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
    void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
    inline int32_t maxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
    inline UpdateFlowRuleResponseBodyData& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateFlowRuleResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline UpdateFlowRuleResponseBodyData& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateFlowRuleResponseBodyData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The application ID.
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
    // Indicates whether the rule was enabled.
    // 
    // Valid value:
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
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> limitApp_ = nullptr;
    // The timeout period for queuing when the value of ControlBehavior is set to 2. Unit: milliseconds.
    std::shared_ptr<int32_t> maxQueueingTimeMs_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the API resource.
    std::shared_ptr<string> resource_ = nullptr;
    // The throttling threshold.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
