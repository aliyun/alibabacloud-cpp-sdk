// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bypass, bypass_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(RouteEnable, routeEnable_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateRoutineRouteRequest() = default ;
    CreateRoutineRouteRequest(const CreateRoutineRouteRequest &) = default ;
    CreateRoutineRouteRequest(CreateRoutineRouteRequest &&) = default ;
    CreateRoutineRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineRouteRequest() = default ;
    CreateRoutineRouteRequest& operator=(const CreateRoutineRouteRequest &) = default ;
    CreateRoutineRouteRequest& operator=(CreateRoutineRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bypass_ == nullptr
        && return this->fallback_ == nullptr && return this->routeEnable_ == nullptr && return this->routeName_ == nullptr && return this->routineName_ == nullptr && return this->rule_ == nullptr
        && return this->sequence_ == nullptr && return this->siteId_ == nullptr; };
    // bypass Field Functions 
    bool hasBypass() const { return this->bypass_ != nullptr;};
    void deleteBypass() { this->bypass_ = nullptr;};
    inline string bypass() const { DARABONBA_PTR_GET_DEFAULT(bypass_, "") };
    inline CreateRoutineRouteRequest& setBypass(string bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline string fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, "") };
    inline CreateRoutineRouteRequest& setFallback(string fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // routeEnable Field Functions 
    bool hasRouteEnable() const { return this->routeEnable_ != nullptr;};
    void deleteRouteEnable() { this->routeEnable_ = nullptr;};
    inline string routeEnable() const { DARABONBA_PTR_GET_DEFAULT(routeEnable_, "") };
    inline CreateRoutineRouteRequest& setRouteEnable(string routeEnable) { DARABONBA_PTR_SET_VALUE(routeEnable_, routeEnable) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline CreateRoutineRouteRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string routineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline CreateRoutineRouteRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateRoutineRouteRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateRoutineRouteRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRoutineRouteRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Bypass mode Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> bypass_ = nullptr;
    // The exception origin fetch switch. After you turn on this switch, if a function exception occurs, such as CPU usage exceeding the upper limit, requests are sent back to the origin. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> fallback_ = nullptr;
    // The routing switch. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> routeEnable_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeName_ = nullptr;
    // The edge function name.
    // 
    // This parameter is required.
    std::shared_ptr<string> routineName_ = nullptr;
    // The content of the rule.
    std::shared_ptr<string> rule_ = nullptr;
    // The order in which the rule is executed.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
