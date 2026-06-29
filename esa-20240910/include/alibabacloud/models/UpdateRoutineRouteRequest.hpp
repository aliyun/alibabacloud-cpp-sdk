// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTINEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTINEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRoutineRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoutineRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bypass, bypass_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoutineRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateRoutineRouteRequest() = default ;
    UpdateRoutineRouteRequest(const UpdateRoutineRouteRequest &) = default ;
    UpdateRoutineRouteRequest(UpdateRoutineRouteRequest &&) = default ;
    UpdateRoutineRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoutineRouteRequest() = default ;
    UpdateRoutineRouteRequest& operator=(const UpdateRoutineRouteRequest &) = default ;
    UpdateRoutineRouteRequest& operator=(UpdateRoutineRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bypass_ == nullptr
        && this->configId_ == nullptr && this->fallback_ == nullptr && this->routeEnable_ == nullptr && this->routeName_ == nullptr && this->routineName_ == nullptr
        && this->rule_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr && this->timeout_ == nullptr; };
    // bypass Field Functions 
    bool hasBypass() const { return this->bypass_ != nullptr;};
    void deleteBypass() { this->bypass_ = nullptr;};
    inline string getBypass() const { DARABONBA_PTR_GET_DEFAULT(bypass_, "") };
    inline UpdateRoutineRouteRequest& setBypass(string bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateRoutineRouteRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline string getFallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, "") };
    inline UpdateRoutineRouteRequest& setFallback(string fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // routeEnable Field Functions 
    bool hasRouteEnable() const { return this->routeEnable_ != nullptr;};
    void deleteRouteEnable() { this->routeEnable_ = nullptr;};
    inline string getRouteEnable() const { DARABONBA_PTR_GET_DEFAULT(routeEnable_, "") };
    inline UpdateRoutineRouteRequest& setRouteEnable(string routeEnable) { DARABONBA_PTR_SET_VALUE(routeEnable_, routeEnable) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline UpdateRoutineRouteRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline UpdateRoutineRouteRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateRoutineRouteRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateRoutineRouteRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateRoutineRouteRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline UpdateRoutineRouteRequest& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The bypass mode. Valid values:
    // - on: enabled
    // - off: disabled.
    shared_ptr<string> bypass_ {};
    // The configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The fallback-to-origin switch. When enabled, if the function encounters an exception such as CPU usage exceeding the limit, the request falls back to the origin server. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> fallback_ {};
    // The route switch. Valid values:
    // - on: enabled
    // - off: disabled.
    shared_ptr<string> routeEnable_ {};
    // The route name.
    shared_ptr<string> routeName_ {};
    // The name of the Edge Routine.
    shared_ptr<string> routineName_ {};
    // The rule content.
    shared_ptr<string> rule_ {};
    // The execution order of the rule.
    shared_ptr<int32_t> sequence_ {};
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The Edge Routine timeout period. Valid values: 5 to 60.
    shared_ptr<string> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
