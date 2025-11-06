// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicyLoadBalancerSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicyLoadBalancerSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
      DARABONBA_PTR_TO_JSON(LoadbalancerType, loadbalancerType_);
      DARABONBA_PTR_TO_JSON(WarmupDuration, warmupDuration_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicyLoadBalancerSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
      DARABONBA_PTR_FROM_JSON(LoadbalancerType, loadbalancerType_);
      DARABONBA_PTR_FROM_JSON(WarmupDuration, warmupDuration_);
    };
    TrafficPolicyLoadBalancerSettings() = default ;
    TrafficPolicyLoadBalancerSettings(const TrafficPolicyLoadBalancerSettings &) = default ;
    TrafficPolicyLoadBalancerSettings(TrafficPolicyLoadBalancerSettings &&) = default ;
    TrafficPolicyLoadBalancerSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicyLoadBalancerSettings() = default ;
    TrafficPolicyLoadBalancerSettings& operator=(const TrafficPolicyLoadBalancerSettings &) = default ;
    TrafficPolicyLoadBalancerSettings& operator=(TrafficPolicyLoadBalancerSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consistentHashLBConfig_ == nullptr
        && return this->loadbalancerType_ == nullptr && return this->warmupDuration_ == nullptr; };
    // consistentHashLBConfig Field Functions 
    bool hasConsistentHashLBConfig() const { return this->consistentHashLBConfig_ != nullptr;};
    void deleteConsistentHashLBConfig() { this->consistentHashLBConfig_ = nullptr;};
    inline const Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig & consistentHashLBConfig() const { DARABONBA_PTR_GET_CONST(consistentHashLBConfig_, Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig) };
    inline Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig consistentHashLBConfig() { DARABONBA_PTR_GET(consistentHashLBConfig_, Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig) };
    inline TrafficPolicyLoadBalancerSettings& setConsistentHashLBConfig(const Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig & consistentHashLBConfig) { DARABONBA_PTR_SET_VALUE(consistentHashLBConfig_, consistentHashLBConfig) };
    inline TrafficPolicyLoadBalancerSettings& setConsistentHashLBConfig(Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig && consistentHashLBConfig) { DARABONBA_PTR_SET_RVALUE(consistentHashLBConfig_, consistentHashLBConfig) };


    // loadbalancerType Field Functions 
    bool hasLoadbalancerType() const { return this->loadbalancerType_ != nullptr;};
    void deleteLoadbalancerType() { this->loadbalancerType_ = nullptr;};
    inline string loadbalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadbalancerType_, "") };
    inline TrafficPolicyLoadBalancerSettings& setLoadbalancerType(string loadbalancerType) { DARABONBA_PTR_SET_VALUE(loadbalancerType_, loadbalancerType) };


    // warmupDuration Field Functions 
    bool hasWarmupDuration() const { return this->warmupDuration_ != nullptr;};
    void deleteWarmupDuration() { this->warmupDuration_ = nullptr;};
    inline int64_t warmupDuration() const { DARABONBA_PTR_GET_DEFAULT(warmupDuration_, 0L) };
    inline TrafficPolicyLoadBalancerSettings& setWarmupDuration(int64_t warmupDuration) { DARABONBA_PTR_SET_VALUE(warmupDuration_, warmupDuration) };


  protected:
    std::shared_ptr<Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig> consistentHashLBConfig_ = nullptr;
    std::shared_ptr<string> loadbalancerType_ = nullptr;
    std::shared_ptr<int64_t> warmupDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
