// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLoadBalancerRequestAdaptiveRouting.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLoadBalancerRequestMonitor.hpp>
#include <alibabacloud/models/UpdateLoadBalancerRequestRandomSteering.hpp>
#include <alibabacloud/models/UpdateLoadBalancerRequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Monitor, monitor_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitor_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateLoadBalancerRequest() = default ;
    UpdateLoadBalancerRequest(const UpdateLoadBalancerRequest &) = default ;
    UpdateLoadBalancerRequest(UpdateLoadBalancerRequest &&) = default ;
    UpdateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerRequest() = default ;
    UpdateLoadBalancerRequest& operator=(const UpdateLoadBalancerRequest &) = default ;
    UpdateLoadBalancerRequest& operator=(UpdateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptiveRouting_ == nullptr
        && return this->defaultPools_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->fallbackPool_ == nullptr && return this->id_ == nullptr
        && return this->monitor_ == nullptr && return this->randomSteering_ == nullptr && return this->regionPools_ == nullptr && return this->rules_ == nullptr && return this->sessionAffinity_ == nullptr
        && return this->siteId_ == nullptr && return this->steeringPolicy_ == nullptr && return this->subRegionPools_ == nullptr && return this->ttl_ == nullptr; };
    // adaptiveRouting Field Functions 
    bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
    void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
    inline const UpdateLoadBalancerRequestAdaptiveRouting & adaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, UpdateLoadBalancerRequestAdaptiveRouting) };
    inline UpdateLoadBalancerRequestAdaptiveRouting adaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, UpdateLoadBalancerRequestAdaptiveRouting) };
    inline UpdateLoadBalancerRequest& setAdaptiveRouting(const UpdateLoadBalancerRequestAdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
    inline UpdateLoadBalancerRequest& setAdaptiveRouting(UpdateLoadBalancerRequestAdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


    // defaultPools Field Functions 
    bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
    void deleteDefaultPools() { this->defaultPools_ = nullptr;};
    inline const vector<int64_t> & defaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
    inline vector<int64_t> defaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
    inline UpdateLoadBalancerRequest& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
    inline UpdateLoadBalancerRequest& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLoadBalancerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateLoadBalancerRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t fallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline UpdateLoadBalancerRequest& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateLoadBalancerRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitor Field Functions 
    bool hasMonitor() const { return this->monitor_ != nullptr;};
    void deleteMonitor() { this->monitor_ = nullptr;};
    inline const UpdateLoadBalancerRequestMonitor & monitor() const { DARABONBA_PTR_GET_CONST(monitor_, UpdateLoadBalancerRequestMonitor) };
    inline UpdateLoadBalancerRequestMonitor monitor() { DARABONBA_PTR_GET(monitor_, UpdateLoadBalancerRequestMonitor) };
    inline UpdateLoadBalancerRequest& setMonitor(const UpdateLoadBalancerRequestMonitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
    inline UpdateLoadBalancerRequest& setMonitor(UpdateLoadBalancerRequestMonitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


    // randomSteering Field Functions 
    bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
    void deleteRandomSteering() { this->randomSteering_ = nullptr;};
    inline const UpdateLoadBalancerRequestRandomSteering & randomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, UpdateLoadBalancerRequestRandomSteering) };
    inline UpdateLoadBalancerRequestRandomSteering randomSteering() { DARABONBA_PTR_GET(randomSteering_, UpdateLoadBalancerRequestRandomSteering) };
    inline UpdateLoadBalancerRequest& setRandomSteering(const UpdateLoadBalancerRequestRandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
    inline UpdateLoadBalancerRequest& setRandomSteering(UpdateLoadBalancerRequestRandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & regionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & regionPools() { DARABONBA_GET(regionPools_) };
    inline UpdateLoadBalancerRequest& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline UpdateLoadBalancerRequest& setRegionPools(Darabonba::Json & regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<UpdateLoadBalancerRequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UpdateLoadBalancerRequestRules>) };
    inline vector<UpdateLoadBalancerRequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<UpdateLoadBalancerRequestRules>) };
    inline UpdateLoadBalancerRequest& setRules(const vector<UpdateLoadBalancerRequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdateLoadBalancerRequest& setRules(vector<UpdateLoadBalancerRequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline UpdateLoadBalancerRequest& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateLoadBalancerRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string steeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline UpdateLoadBalancerRequest& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & subRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & subRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline UpdateLoadBalancerRequest& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline UpdateLoadBalancerRequest& setSubRegionPools(Darabonba::Json & subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateLoadBalancerRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Configuration for fallback across pools.
    std::shared_ptr<UpdateLoadBalancerRequestAdaptiveRouting> adaptiveRouting_ = nullptr;
    // List of default pool IDs.
    std::shared_ptr<vector<int64_t>> defaultPools_ = nullptr;
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
    std::shared_ptr<UpdateLoadBalancerRequestMonitor> monitor_ = nullptr;
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    std::shared_ptr<UpdateLoadBalancerRequestRandomSteering> randomSteering_ = nullptr;
    // Address pool corresponding to the primary region.
    Darabonba::Json regionPools_ = nullptr;
    // Rule configuration list, used to define behavior overrides under specific conditions.
    std::shared_ptr<vector<UpdateLoadBalancerRequestRules>> rules_ = nullptr;
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
