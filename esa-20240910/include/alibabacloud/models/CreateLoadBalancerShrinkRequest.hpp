// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateLoadBalancerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRoutingShrink_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPoolsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Monitor, monitorShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteeringShrink_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRoutingShrink_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPoolsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitorShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteeringShrink_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    CreateLoadBalancerShrinkRequest() = default ;
    CreateLoadBalancerShrinkRequest(const CreateLoadBalancerShrinkRequest &) = default ;
    CreateLoadBalancerShrinkRequest(CreateLoadBalancerShrinkRequest &&) = default ;
    CreateLoadBalancerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerShrinkRequest() = default ;
    CreateLoadBalancerShrinkRequest& operator=(const CreateLoadBalancerShrinkRequest &) = default ;
    CreateLoadBalancerShrinkRequest& operator=(CreateLoadBalancerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptiveRoutingShrink_ == nullptr
        && this->defaultPoolsShrink_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->fallbackPool_ == nullptr && this->monitorShrink_ == nullptr
        && this->name_ == nullptr && this->randomSteeringShrink_ == nullptr && this->regionPools_ == nullptr && this->rulesShrink_ == nullptr && this->sessionAffinity_ == nullptr
        && this->siteId_ == nullptr && this->steeringPolicy_ == nullptr && this->subRegionPools_ == nullptr && this->ttl_ == nullptr; };
    // adaptiveRoutingShrink Field Functions 
    bool hasAdaptiveRoutingShrink() const { return this->adaptiveRoutingShrink_ != nullptr;};
    void deleteAdaptiveRoutingShrink() { this->adaptiveRoutingShrink_ = nullptr;};
    inline string getAdaptiveRoutingShrink() const { DARABONBA_PTR_GET_DEFAULT(adaptiveRoutingShrink_, "") };
    inline CreateLoadBalancerShrinkRequest& setAdaptiveRoutingShrink(string adaptiveRoutingShrink) { DARABONBA_PTR_SET_VALUE(adaptiveRoutingShrink_, adaptiveRoutingShrink) };


    // defaultPoolsShrink Field Functions 
    bool hasDefaultPoolsShrink() const { return this->defaultPoolsShrink_ != nullptr;};
    void deleteDefaultPoolsShrink() { this->defaultPoolsShrink_ = nullptr;};
    inline string getDefaultPoolsShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultPoolsShrink_, "") };
    inline CreateLoadBalancerShrinkRequest& setDefaultPoolsShrink(string defaultPoolsShrink) { DARABONBA_PTR_SET_VALUE(defaultPoolsShrink_, defaultPoolsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLoadBalancerShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateLoadBalancerShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t getFallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline CreateLoadBalancerShrinkRequest& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // monitorShrink Field Functions 
    bool hasMonitorShrink() const { return this->monitorShrink_ != nullptr;};
    void deleteMonitorShrink() { this->monitorShrink_ = nullptr;};
    inline string getMonitorShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorShrink_, "") };
    inline CreateLoadBalancerShrinkRequest& setMonitorShrink(string monitorShrink) { DARABONBA_PTR_SET_VALUE(monitorShrink_, monitorShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLoadBalancerShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // randomSteeringShrink Field Functions 
    bool hasRandomSteeringShrink() const { return this->randomSteeringShrink_ != nullptr;};
    void deleteRandomSteeringShrink() { this->randomSteeringShrink_ = nullptr;};
    inline string getRandomSteeringShrink() const { DARABONBA_PTR_GET_DEFAULT(randomSteeringShrink_, "") };
    inline CreateLoadBalancerShrinkRequest& setRandomSteeringShrink(string randomSteeringShrink) { DARABONBA_PTR_SET_VALUE(randomSteeringShrink_, randomSteeringShrink) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & getRegionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & getRegionPools() { DARABONBA_GET(regionPools_) };
    inline CreateLoadBalancerShrinkRequest& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline CreateLoadBalancerShrinkRequest& setRegionPools(Darabonba::Json && regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateLoadBalancerShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline CreateLoadBalancerShrinkRequest& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateLoadBalancerShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string getSteeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline CreateLoadBalancerShrinkRequest& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & getSubRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & getSubRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline CreateLoadBalancerShrinkRequest& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline CreateLoadBalancerShrinkRequest& setSubRegionPools(Darabonba::Json && subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateLoadBalancerShrinkRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The configuration for failover across address pools.
    shared_ptr<string> adaptiveRoutingShrink_ {};
    // A list of default address pool IDs.
    // 
    // This parameter is required.
    shared_ptr<string> defaultPoolsShrink_ {};
    // A description of the Server Load Balancer.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the Server Load Balancer.
    // 
    // - `true`: Enabled.
    // 
    // - `false`: Disabled.
    shared_ptr<bool> enabled_ {};
    // The ID of the fallback pool. The system directs traffic to this pool when all other pools are unavailable.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fallbackPool_ {};
    // The monitor configuration for health checks.
    // 
    // This parameter is required.
    shared_ptr<string> monitorShrink_ {};
    // The name of the Server Load Balancer. It must be a valid domain name and a subdomain of the site.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The configuration for weighted round-robin steering. This setting controls how the system distributes traffic across different address pools based on their weights.
    shared_ptr<string> randomSteeringShrink_ {};
    // The mapping of primary regions to address pools.
    Darabonba::Json regionPools_ {};
    // A list of rules to override the default traffic steering policy for specific requests.
    shared_ptr<string> rulesShrink_ {};
    // Specifies the session affinity policy, which consistently routes requests from the same client to the same origin server. Valid values:
    // 
    // - `off`: Disables session affinity.
    // 
    // - `ip`: Routes requests based on the client\\"s IP address.
    // 
    // - `cookie`: Uses a cookie to maintain session affinity.
    shared_ptr<string> sessionAffinity_ {};
    // The site ID. Call the [ListSites](~~ListSites~~) operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The traffic steering policy, which determines how the system distributes traffic among the address pools. Valid values:
    // 
    // - `geo`: Geographic routing.
    // 
    // - `random`: Weighted round-robin.
    // 
    // - `order`: Primary/standby.
    // 
    // This parameter is required.
    shared_ptr<string> steeringPolicy_ {};
    // The mapping of secondary regions to address pools. To map multiple secondary regions to the same address pools, combine their region codes with commas to form the key.
    Darabonba::Json subRegionPools_ {};
    // The time to live (TTL) for the DNS record, in seconds. The default value is 30. The value must be between 10 and 600.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
