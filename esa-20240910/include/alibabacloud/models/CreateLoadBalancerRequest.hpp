// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestAdaptiveRouting.hpp>
#include <vector>
#include <alibabacloud/models/CreateLoadBalancerRequestMonitor.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestRandomSteering.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Monitor, monitor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adaptiveRouting_ != nullptr
        && this->defaultPools_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr && this->fallbackPool_ != nullptr && this->monitor_ != nullptr
        && this->name_ != nullptr && this->randomSteering_ != nullptr && this->regionPools_ != nullptr && this->rules_ != nullptr && this->sessionAffinity_ != nullptr
        && this->siteId_ != nullptr && this->steeringPolicy_ != nullptr && this->subRegionPools_ != nullptr && this->ttl_ != nullptr; };
    // adaptiveRouting Field Functions 
    bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
    void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
    inline const CreateLoadBalancerRequestAdaptiveRouting & adaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, CreateLoadBalancerRequestAdaptiveRouting) };
    inline CreateLoadBalancerRequestAdaptiveRouting adaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, CreateLoadBalancerRequestAdaptiveRouting) };
    inline CreateLoadBalancerRequest& setAdaptiveRouting(const CreateLoadBalancerRequestAdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
    inline CreateLoadBalancerRequest& setAdaptiveRouting(CreateLoadBalancerRequestAdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


    // defaultPools Field Functions 
    bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
    void deleteDefaultPools() { this->defaultPools_ = nullptr;};
    inline const vector<int64_t> & defaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
    inline vector<int64_t> defaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
    inline CreateLoadBalancerRequest& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
    inline CreateLoadBalancerRequest& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLoadBalancerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateLoadBalancerRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t fallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline CreateLoadBalancerRequest& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // monitor Field Functions 
    bool hasMonitor() const { return this->monitor_ != nullptr;};
    void deleteMonitor() { this->monitor_ = nullptr;};
    inline const CreateLoadBalancerRequestMonitor & monitor() const { DARABONBA_PTR_GET_CONST(monitor_, CreateLoadBalancerRequestMonitor) };
    inline CreateLoadBalancerRequestMonitor monitor() { DARABONBA_PTR_GET(monitor_, CreateLoadBalancerRequestMonitor) };
    inline CreateLoadBalancerRequest& setMonitor(const CreateLoadBalancerRequestMonitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
    inline CreateLoadBalancerRequest& setMonitor(CreateLoadBalancerRequestMonitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLoadBalancerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // randomSteering Field Functions 
    bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
    void deleteRandomSteering() { this->randomSteering_ = nullptr;};
    inline const CreateLoadBalancerRequestRandomSteering & randomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, CreateLoadBalancerRequestRandomSteering) };
    inline CreateLoadBalancerRequestRandomSteering randomSteering() { DARABONBA_PTR_GET(randomSteering_, CreateLoadBalancerRequestRandomSteering) };
    inline CreateLoadBalancerRequest& setRandomSteering(const CreateLoadBalancerRequestRandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
    inline CreateLoadBalancerRequest& setRandomSteering(CreateLoadBalancerRequestRandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & regionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & regionPools() { DARABONBA_GET(regionPools_) };
    inline CreateLoadBalancerRequest& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline CreateLoadBalancerRequest& setRegionPools(Darabonba::Json & regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateLoadBalancerRequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateLoadBalancerRequestRules>) };
    inline vector<CreateLoadBalancerRequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<CreateLoadBalancerRequestRules>) };
    inline CreateLoadBalancerRequest& setRules(const vector<CreateLoadBalancerRequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateLoadBalancerRequest& setRules(vector<CreateLoadBalancerRequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline CreateLoadBalancerRequest& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateLoadBalancerRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string steeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline CreateLoadBalancerRequest& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & subRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & subRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline CreateLoadBalancerRequest& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline CreateLoadBalancerRequest& setSubRegionPools(Darabonba::Json & subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateLoadBalancerRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Configuration for failover across pools.
    std::shared_ptr<CreateLoadBalancerRequestAdaptiveRouting> adaptiveRouting_ = nullptr;
    // List of default pools.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> defaultPools_ = nullptr;
    // Detailed description of the load balancer, for easier management and identification.
    std::shared_ptr<string> description_ = nullptr;
    // Whether the load balancer is enabled.
    // 
    // - true: Enabled.
    // - false: Not enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Fallback pool ID, where traffic will be directed when all other pools are unavailable.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fallbackPool_ = nullptr;
    // Monitor configuration, used for health checks.
    // 
    // This parameter is required.
    std::shared_ptr<CreateLoadBalancerRequestMonitor> monitor_ = nullptr;
    // The name of the load balancer, which must meet the domain name format validation and be a subdomain under the site.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    std::shared_ptr<CreateLoadBalancerRequestRandomSteering> randomSteering_ = nullptr;
    // Address pools corresponding to primary regions.
    Darabonba::Json regionPools_ = nullptr;
    // Rule information.
    std::shared_ptr<vector<CreateLoadBalancerRequestRules>> rules_ = nullptr;
    // Session persistence, with possible values:
    // - off: Not enabled.
    // - ip: Session persistence by IP.
    // - cookie: Session persistence by cookie.
    std::shared_ptr<string> sessionAffinity_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Load balancing strategy.
    // 
    // - geo: Geographical strategy.
    // - random: Weighted round-robin.
    // - order: Primary and backup method.
    // 
    // This parameter is required.
    std::shared_ptr<string> steeringPolicy_ = nullptr;
    // Address pools corresponding to secondary regions. When multiple secondary regions share the same set of address pools, the keys can be concatenated with commas.
    Darabonba::Json subRegionPools_ = nullptr;
    // TTL value, the time-to-live for DNS records, with a default of 30 seconds. The value range is 10-600.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
