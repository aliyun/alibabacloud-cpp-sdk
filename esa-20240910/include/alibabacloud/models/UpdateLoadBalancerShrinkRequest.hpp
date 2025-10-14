// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateLoadBalancerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRoutingShrink_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPoolsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Monitor, monitorShrink_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteeringShrink_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRoutingShrink_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPoolsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitorShrink_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteeringShrink_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateLoadBalancerShrinkRequest() = default ;
    UpdateLoadBalancerShrinkRequest(const UpdateLoadBalancerShrinkRequest &) = default ;
    UpdateLoadBalancerShrinkRequest(UpdateLoadBalancerShrinkRequest &&) = default ;
    UpdateLoadBalancerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerShrinkRequest() = default ;
    UpdateLoadBalancerShrinkRequest& operator=(const UpdateLoadBalancerShrinkRequest &) = default ;
    UpdateLoadBalancerShrinkRequest& operator=(UpdateLoadBalancerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptiveRoutingShrink_ == nullptr
        && return this->defaultPoolsShrink_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->fallbackPool_ == nullptr && return this->id_ == nullptr
        && return this->monitorShrink_ == nullptr && return this->randomSteeringShrink_ == nullptr && return this->regionPools_ == nullptr && return this->rulesShrink_ == nullptr && return this->sessionAffinity_ == nullptr
        && return this->siteId_ == nullptr && return this->steeringPolicy_ == nullptr && return this->subRegionPools_ == nullptr && return this->ttl_ == nullptr; };
    // adaptiveRoutingShrink Field Functions 
    bool hasAdaptiveRoutingShrink() const { return this->adaptiveRoutingShrink_ != nullptr;};
    void deleteAdaptiveRoutingShrink() { this->adaptiveRoutingShrink_ = nullptr;};
    inline string adaptiveRoutingShrink() const { DARABONBA_PTR_GET_DEFAULT(adaptiveRoutingShrink_, "") };
    inline UpdateLoadBalancerShrinkRequest& setAdaptiveRoutingShrink(string adaptiveRoutingShrink) { DARABONBA_PTR_SET_VALUE(adaptiveRoutingShrink_, adaptiveRoutingShrink) };


    // defaultPoolsShrink Field Functions 
    bool hasDefaultPoolsShrink() const { return this->defaultPoolsShrink_ != nullptr;};
    void deleteDefaultPoolsShrink() { this->defaultPoolsShrink_ = nullptr;};
    inline string defaultPoolsShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultPoolsShrink_, "") };
    inline UpdateLoadBalancerShrinkRequest& setDefaultPoolsShrink(string defaultPoolsShrink) { DARABONBA_PTR_SET_VALUE(defaultPoolsShrink_, defaultPoolsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLoadBalancerShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateLoadBalancerShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t fallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline UpdateLoadBalancerShrinkRequest& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateLoadBalancerShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitorShrink Field Functions 
    bool hasMonitorShrink() const { return this->monitorShrink_ != nullptr;};
    void deleteMonitorShrink() { this->monitorShrink_ = nullptr;};
    inline string monitorShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorShrink_, "") };
    inline UpdateLoadBalancerShrinkRequest& setMonitorShrink(string monitorShrink) { DARABONBA_PTR_SET_VALUE(monitorShrink_, monitorShrink) };


    // randomSteeringShrink Field Functions 
    bool hasRandomSteeringShrink() const { return this->randomSteeringShrink_ != nullptr;};
    void deleteRandomSteeringShrink() { this->randomSteeringShrink_ = nullptr;};
    inline string randomSteeringShrink() const { DARABONBA_PTR_GET_DEFAULT(randomSteeringShrink_, "") };
    inline UpdateLoadBalancerShrinkRequest& setRandomSteeringShrink(string randomSteeringShrink) { DARABONBA_PTR_SET_VALUE(randomSteeringShrink_, randomSteeringShrink) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & regionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & regionPools() { DARABONBA_GET(regionPools_) };
    inline UpdateLoadBalancerShrinkRequest& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline UpdateLoadBalancerShrinkRequest& setRegionPools(Darabonba::Json & regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string rulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline UpdateLoadBalancerShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline UpdateLoadBalancerShrinkRequest& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateLoadBalancerShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string steeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline UpdateLoadBalancerShrinkRequest& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & subRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & subRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline UpdateLoadBalancerShrinkRequest& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline UpdateLoadBalancerShrinkRequest& setSubRegionPools(Darabonba::Json & subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateLoadBalancerShrinkRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Configuration for fallback across pools.
    std::shared_ptr<string> adaptiveRoutingShrink_ = nullptr;
    // List of default pool IDs.
    std::shared_ptr<string> defaultPoolsShrink_ = nullptr;
    // Detailed description of the load balancer, for easier management and identification.
    std::shared_ptr<string> description_ = nullptr;
    // Whether the load balancer is enabled.
    // 
    // - true: Enabled.
    // - false: Not enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Fallback pool ID, where traffic will be directed when all other pools are unavailable.
    std::shared_ptr<int64_t> fallbackPool_ = nullptr;
    // Load balancer ID, which can be obtained by calling the [ListLoadBalancers](https://help.aliyun.com/document_detail/2868897.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Monitor configuration for health checks.
    std::shared_ptr<string> monitorShrink_ = nullptr;
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    std::shared_ptr<string> randomSteeringShrink_ = nullptr;
    // Address pool corresponding to the primary region.
    Darabonba::Json regionPools_ = nullptr;
    // Rule configuration list, used to define behavior overrides under specific conditions.
    std::shared_ptr<string> rulesShrink_ = nullptr;
    // Session persistence, with possible values:
    // - off: Not enabled.
    // - ip: Session persistence by IP.
    // - cookie: Session persistence by cookie.
    std::shared_ptr<string> sessionAffinity_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Load balancing policy.
    std::shared_ptr<string> steeringPolicy_ = nullptr;
    // Address pool corresponding to the secondary region. When multiple secondary regions share the same address pool, the regions can be concatenated with commas as the key.
    Darabonba::Json subRegionPools_ = nullptr;
    // TTL value, the time-to-live for DNS records, with a default of 30 and a range of 10-600.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
