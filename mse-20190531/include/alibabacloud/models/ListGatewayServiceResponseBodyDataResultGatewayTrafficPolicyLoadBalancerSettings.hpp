// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
      DARABONBA_PTR_TO_JSON(LoadbalancerType, loadbalancerType_);
      DARABONBA_PTR_TO_JSON(WarmupDuration, warmupDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
      DARABONBA_PTR_FROM_JSON(LoadbalancerType, loadbalancerType_);
      DARABONBA_PTR_FROM_JSON(WarmupDuration, warmupDuration_);
    };
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings &&) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& operator=(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& operator=(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consistentHashLBConfig_ == nullptr
        && return this->loadbalancerType_ == nullptr && return this->warmupDuration_ == nullptr; };
    // consistentHashLBConfig Field Functions 
    bool hasConsistentHashLBConfig() const { return this->consistentHashLBConfig_ != nullptr;};
    void deleteConsistentHashLBConfig() { this->consistentHashLBConfig_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig & consistentHashLBConfig() const { DARABONBA_PTR_GET_CONST(consistentHashLBConfig_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig) };
    inline Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig consistentHashLBConfig() { DARABONBA_PTR_GET(consistentHashLBConfig_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& setConsistentHashLBConfig(const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig & consistentHashLBConfig) { DARABONBA_PTR_SET_VALUE(consistentHashLBConfig_, consistentHashLBConfig) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& setConsistentHashLBConfig(Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig && consistentHashLBConfig) { DARABONBA_PTR_SET_RVALUE(consistentHashLBConfig_, consistentHashLBConfig) };


    // loadbalancerType Field Functions 
    bool hasLoadbalancerType() const { return this->loadbalancerType_ != nullptr;};
    void deleteLoadbalancerType() { this->loadbalancerType_ = nullptr;};
    inline string loadbalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadbalancerType_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& setLoadbalancerType(string loadbalancerType) { DARABONBA_PTR_SET_VALUE(loadbalancerType_, loadbalancerType) };


    // warmupDuration Field Functions 
    bool hasWarmupDuration() const { return this->warmupDuration_ != nullptr;};
    void deleteWarmupDuration() { this->warmupDuration_ = nullptr;};
    inline int32_t warmupDuration() const { DARABONBA_PTR_GET_DEFAULT(warmupDuration_, 0) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings& setWarmupDuration(int32_t warmupDuration) { DARABONBA_PTR_SET_VALUE(warmupDuration_, warmupDuration) };


  protected:
    // The consistent hashing settings.
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig> consistentHashLBConfig_ = nullptr;
    // The load balancing type.
    // 
    // *   ROUND_ROBIN
    // *   LEAST_CONN
    // *   RANDOM
    // *   CONSISTENT_HASH
    std::shared_ptr<string> loadbalancerType_ = nullptr;
    // The prefetch time of the least connection load balancing.
    std::shared_ptr<int32_t> warmupDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
