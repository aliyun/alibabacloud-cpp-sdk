// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoadBalancerResponseBodyAdaptiveRouting.hpp>
#include <vector>
#include <alibabacloud/models/GetLoadBalancerResponseBodyMonitor.hpp>
#include <alibabacloud/models/GetLoadBalancerResponseBodyRandomSteering.hpp>
#include <alibabacloud/models/GetLoadBalancerResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    GetLoadBalancerResponseBody() = default ;
    GetLoadBalancerResponseBody(const GetLoadBalancerResponseBody &) = default ;
    GetLoadBalancerResponseBody(GetLoadBalancerResponseBody &&) = default ;
    GetLoadBalancerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerResponseBody() = default ;
    GetLoadBalancerResponseBody& operator=(const GetLoadBalancerResponseBody &) = default ;
    GetLoadBalancerResponseBody& operator=(GetLoadBalancerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adaptiveRouting_ != nullptr
        && this->defaultPools_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr && this->fallbackPool_ != nullptr && this->id_ != nullptr
        && this->monitor_ != nullptr && this->name_ != nullptr && this->randomSteering_ != nullptr && this->regionPools_ != nullptr && this->requestId_ != nullptr
        && this->rules_ != nullptr && this->sessionAffinity_ != nullptr && this->siteId_ != nullptr && this->status_ != nullptr && this->steeringPolicy_ != nullptr
        && this->subRegionPools_ != nullptr && this->ttl_ != nullptr; };
    // adaptiveRouting Field Functions 
    bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
    void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
    inline const GetLoadBalancerResponseBodyAdaptiveRouting & adaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, GetLoadBalancerResponseBodyAdaptiveRouting) };
    inline GetLoadBalancerResponseBodyAdaptiveRouting adaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, GetLoadBalancerResponseBodyAdaptiveRouting) };
    inline GetLoadBalancerResponseBody& setAdaptiveRouting(const GetLoadBalancerResponseBodyAdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
    inline GetLoadBalancerResponseBody& setAdaptiveRouting(GetLoadBalancerResponseBodyAdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


    // defaultPools Field Functions 
    bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
    void deleteDefaultPools() { this->defaultPools_ = nullptr;};
    inline const vector<int64_t> & defaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
    inline vector<int64_t> defaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
    inline GetLoadBalancerResponseBody& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
    inline GetLoadBalancerResponseBody& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLoadBalancerResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetLoadBalancerResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t fallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline GetLoadBalancerResponseBody& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetLoadBalancerResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitor Field Functions 
    bool hasMonitor() const { return this->monitor_ != nullptr;};
    void deleteMonitor() { this->monitor_ = nullptr;};
    inline const GetLoadBalancerResponseBodyMonitor & monitor() const { DARABONBA_PTR_GET_CONST(monitor_, GetLoadBalancerResponseBodyMonitor) };
    inline GetLoadBalancerResponseBodyMonitor monitor() { DARABONBA_PTR_GET(monitor_, GetLoadBalancerResponseBodyMonitor) };
    inline GetLoadBalancerResponseBody& setMonitor(const GetLoadBalancerResponseBodyMonitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
    inline GetLoadBalancerResponseBody& setMonitor(GetLoadBalancerResponseBodyMonitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLoadBalancerResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // randomSteering Field Functions 
    bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
    void deleteRandomSteering() { this->randomSteering_ = nullptr;};
    inline const GetLoadBalancerResponseBodyRandomSteering & randomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, GetLoadBalancerResponseBodyRandomSteering) };
    inline GetLoadBalancerResponseBodyRandomSteering randomSteering() { DARABONBA_PTR_GET(randomSteering_, GetLoadBalancerResponseBodyRandomSteering) };
    inline GetLoadBalancerResponseBody& setRandomSteering(const GetLoadBalancerResponseBodyRandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
    inline GetLoadBalancerResponseBody& setRandomSteering(GetLoadBalancerResponseBodyRandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & regionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & regionPools() { DARABONBA_GET(regionPools_) };
    inline GetLoadBalancerResponseBody& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline GetLoadBalancerResponseBody& setRegionPools(Darabonba::Json & regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoadBalancerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<GetLoadBalancerResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<GetLoadBalancerResponseBodyRules>) };
    inline vector<GetLoadBalancerResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<GetLoadBalancerResponseBodyRules>) };
    inline GetLoadBalancerResponseBody& setRules(const vector<GetLoadBalancerResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetLoadBalancerResponseBody& setRules(vector<GetLoadBalancerResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline GetLoadBalancerResponseBody& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetLoadBalancerResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLoadBalancerResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string steeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline GetLoadBalancerResponseBody& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & subRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & subRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline GetLoadBalancerResponseBody& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline GetLoadBalancerResponseBody& setSubRegionPools(Darabonba::Json & subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline GetLoadBalancerResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Cross-pool failover configuration.
    std::shared_ptr<GetLoadBalancerResponseBodyAdaptiveRouting> adaptiveRouting_ = nullptr;
    // List of default pool IDs.
    std::shared_ptr<vector<int64_t>> defaultPools_ = nullptr;
    // Description of the load balancer.
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
    std::shared_ptr<GetLoadBalancerResponseBodyMonitor> monitor_ = nullptr;
    // The name of the load balancer.
    std::shared_ptr<string> name_ = nullptr;
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    std::shared_ptr<GetLoadBalancerResponseBodyRandomSteering> randomSteering_ = nullptr;
    // Address pools corresponding to primary regions.
    Darabonba::Json regionPools_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of rule configurations, used to define behavior under specific conditions.
    std::shared_ptr<vector<GetLoadBalancerResponseBodyRules>> rules_ = nullptr;
    // Session persistence, with values:
    // - off: Not enabled.
    // - ip: Session persistence by IP.
    // - cookie: Session persistence by cookie.
    std::shared_ptr<string> sessionAffinity_ = nullptr;
    // The site ID to which the load balancer belongs.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The status of the load balancer.
    std::shared_ptr<string> status_ = nullptr;
    // Load balancing policy.
    std::shared_ptr<string> steeringPolicy_ = nullptr;
    // Address pools corresponding to secondary regions. When multiple secondary regions share a set of address pools, the keys can be concatenated with commas.
    Darabonba::Json subRegionPools_ = nullptr;
    // TTL value, the time-to-live for DNS records, with a default of 30 seconds.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
