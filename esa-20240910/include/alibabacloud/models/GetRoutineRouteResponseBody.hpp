// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bypass, bypass_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetRoutineRouteResponseBody() = default ;
    GetRoutineRouteResponseBody(const GetRoutineRouteResponseBody &) = default ;
    GetRoutineRouteResponseBody(GetRoutineRouteResponseBody &&) = default ;
    GetRoutineRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineRouteResponseBody() = default ;
    GetRoutineRouteResponseBody& operator=(const GetRoutineRouteResponseBody &) = default ;
    GetRoutineRouteResponseBody& operator=(GetRoutineRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bypass_ == nullptr
        && return this->configId_ == nullptr && return this->configType_ == nullptr && return this->fallback_ == nullptr && return this->mode_ == nullptr && return this->requestId_ == nullptr
        && return this->routeEnable_ == nullptr && return this->routeName_ == nullptr && return this->routineName_ == nullptr && return this->rule_ == nullptr && return this->sequence_ == nullptr
        && return this->siteVersion_ == nullptr; };
    // bypass Field Functions 
    bool hasBypass() const { return this->bypass_ != nullptr;};
    void deleteBypass() { this->bypass_ = nullptr;};
    inline string bypass() const { DARABONBA_PTR_GET_DEFAULT(bypass_, "") };
    inline GetRoutineRouteResponseBody& setBypass(string bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetRoutineRouteResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetRoutineRouteResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline string fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, "") };
    inline GetRoutineRouteResponseBody& setFallback(string fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetRoutineRouteResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEnable Field Functions 
    bool hasRouteEnable() const { return this->routeEnable_ != nullptr;};
    void deleteRouteEnable() { this->routeEnable_ = nullptr;};
    inline string routeEnable() const { DARABONBA_PTR_GET_DEFAULT(routeEnable_, "") };
    inline GetRoutineRouteResponseBody& setRouteEnable(string routeEnable) { DARABONBA_PTR_SET_VALUE(routeEnable_, routeEnable) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline GetRoutineRouteResponseBody& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string routineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline GetRoutineRouteResponseBody& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetRoutineRouteResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetRoutineRouteResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetRoutineRouteResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Bypass mode. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> bypass_ = nullptr;
    // The configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The configuration type to query. Valid values:
    // 
    // *   global: global configurations.
    // *   rule: queries rule configurations.
    std::shared_ptr<string> configType_ = nullptr;
    // The exception origin fetch switch. After you turn on this switch, if a function exception occurs, such as CPU usage exceeding the upper limit, requests are sent back to the origin. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> fallback_ = nullptr;
    // The configuration mode. Valid values: Valid values:
    // 
    // *   simple
    // *   custom
    std::shared_ptr<string> mode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The routing switch. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> routeEnable_ = nullptr;
    // The route name.
    std::shared_ptr<string> routeName_ = nullptr;
    // The function name.
    std::shared_ptr<string> routineName_ = nullptr;
    // The rule content.
    std::shared_ptr<string> rule_ = nullptr;
    // The order in which the rule is executed.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the website.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
