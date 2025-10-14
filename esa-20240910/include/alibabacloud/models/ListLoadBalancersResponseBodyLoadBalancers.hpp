// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersMonitor.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersRandomSteering.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Monitor, monitor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ListLoadBalancersResponseBodyLoadBalancers() = default ;
    ListLoadBalancersResponseBodyLoadBalancers(const ListLoadBalancersResponseBodyLoadBalancers &) = default ;
    ListLoadBalancersResponseBodyLoadBalancers(ListLoadBalancersResponseBodyLoadBalancers &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancers() = default ;
    ListLoadBalancersResponseBodyLoadBalancers& operator=(const ListLoadBalancersResponseBodyLoadBalancers &) = default ;
    ListLoadBalancersResponseBodyLoadBalancers& operator=(ListLoadBalancersResponseBodyLoadBalancers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptiveRouting_ == nullptr
        && return this->defaultPools_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->fallbackPool_ == nullptr && return this->id_ == nullptr
        && return this->monitor_ == nullptr && return this->name_ == nullptr && return this->randomSteering_ == nullptr && return this->regionPools_ == nullptr && return this->rules_ == nullptr
        && return this->sessionAffinity_ == nullptr && return this->siteId_ == nullptr && return this->status_ == nullptr && return this->steeringPolicy_ == nullptr && return this->subRegionPools_ == nullptr
        && return this->ttl_ == nullptr; };
    // adaptiveRouting Field Functions 
    bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
    void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting & adaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting adaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAdaptiveRouting(const Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAdaptiveRouting(Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


    // defaultPools Field Functions 
    bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
    void deleteDefaultPools() { this->defaultPools_ = nullptr;};
    inline const vector<int64_t> & defaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
    inline vector<int64_t> defaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t fallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitor Field Functions 
    bool hasMonitor() const { return this->monitor_ != nullptr;};
    void deleteMonitor() { this->monitor_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersMonitor & monitor() const { DARABONBA_PTR_GET_CONST(monitor_, Models::ListLoadBalancersResponseBodyLoadBalancersMonitor) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersMonitor monitor() { DARABONBA_PTR_GET(monitor_, Models::ListLoadBalancersResponseBodyLoadBalancersMonitor) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setMonitor(const Models::ListLoadBalancersResponseBodyLoadBalancersMonitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setMonitor(Models::ListLoadBalancersResponseBodyLoadBalancersMonitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // randomSteering Field Functions 
    bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
    void deleteRandomSteering() { this->randomSteering_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering & randomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering randomSteering() { DARABONBA_PTR_GET(randomSteering_, Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRandomSteering(const Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRandomSteering(Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & regionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & regionPools() { DARABONBA_GET(regionPools_) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRegionPools(Darabonba::Json & regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRules(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRules(vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string steeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & subRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & subRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSubRegionPools(Darabonba::Json & subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Cross-pool failover configuration.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting> adaptiveRouting_ = nullptr;
    // List of default address pool IDs.
    std::shared_ptr<vector<int64_t>> defaultPools_ = nullptr;
    // The description of the load balancer.
    std::shared_ptr<string> description_ = nullptr;
    // Whether the load balancer is enabled.
    // 
    // - true: Enabled.
    // - false: Not enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The fallback pool ID, to which traffic will be redirected if all other pools are unavailable.
    std::shared_ptr<int64_t> fallbackPool_ = nullptr;
    // The unique identifier ID of the load balancer.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Monitor configuration.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersMonitor> monitor_ = nullptr;
    // The name of the load balancer.
    std::shared_ptr<string> name_ = nullptr;
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersRandomSteering> randomSteering_ = nullptr;
    // Address pools corresponding to primary regions.
    Darabonba::Json regionPools_ = nullptr;
    // List of rule configurations, used to define behaviors under specific conditions.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersRules>> rules_ = nullptr;
    // Session persistence, with possible values:
    // - off: Not enabled.
    // - ip: Session persistence by IP.
    // - cookie: Session persistence by cookie.
    std::shared_ptr<string> sessionAffinity_ = nullptr;
    // The site ID to which the load balancer belongs.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The status of the load balancer.
    std::shared_ptr<string> status_ = nullptr;
    // The load balancing policy.
    std::shared_ptr<string> steeringPolicy_ = nullptr;
    // Address pools corresponding to secondary regions. When multiple secondary regions share a set of address pools, the keys can be concatenated with commas.
    Darabonba::Json subRegionPools_ = nullptr;
    // The TTL value, which is the DNS record\\"s time to live, with a default value of 30.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
