// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICY_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrafficPolicyLoadBalancerSettings.hpp>
#include <alibabacloud/models/TrafficPolicyTlsSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    TrafficPolicy() = default ;
    TrafficPolicy(const TrafficPolicy &) = default ;
    TrafficPolicy(TrafficPolicy &&) = default ;
    TrafficPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicy() = default ;
    TrafficPolicy& operator=(const TrafficPolicy &) = default ;
    TrafficPolicy& operator=(TrafficPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerSettings_ == nullptr
        && return this->tlsSetting_ == nullptr; };
    // loadBalancerSettings Field Functions 
    bool hasLoadBalancerSettings() const { return this->loadBalancerSettings_ != nullptr;};
    void deleteLoadBalancerSettings() { this->loadBalancerSettings_ = nullptr;};
    inline const TrafficPolicyLoadBalancerSettings & loadBalancerSettings() const { DARABONBA_PTR_GET_CONST(loadBalancerSettings_, TrafficPolicyLoadBalancerSettings) };
    inline TrafficPolicyLoadBalancerSettings loadBalancerSettings() { DARABONBA_PTR_GET(loadBalancerSettings_, TrafficPolicyLoadBalancerSettings) };
    inline TrafficPolicy& setLoadBalancerSettings(const TrafficPolicyLoadBalancerSettings & loadBalancerSettings) { DARABONBA_PTR_SET_VALUE(loadBalancerSettings_, loadBalancerSettings) };
    inline TrafficPolicy& setLoadBalancerSettings(TrafficPolicyLoadBalancerSettings && loadBalancerSettings) { DARABONBA_PTR_SET_RVALUE(loadBalancerSettings_, loadBalancerSettings) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline const TrafficPolicyTlsSetting & tlsSetting() const { DARABONBA_PTR_GET_CONST(tlsSetting_, TrafficPolicyTlsSetting) };
    inline TrafficPolicyTlsSetting tlsSetting() { DARABONBA_PTR_GET(tlsSetting_, TrafficPolicyTlsSetting) };
    inline TrafficPolicy& setTlsSetting(const TrafficPolicyTlsSetting & tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };
    inline TrafficPolicy& setTlsSetting(TrafficPolicyTlsSetting && tlsSetting) { DARABONBA_PTR_SET_RVALUE(tlsSetting_, tlsSetting) };


  protected:
    std::shared_ptr<TrafficPolicyLoadBalancerSettings> loadBalancerSettings_ = nullptr;
    std::shared_ptr<TrafficPolicyTlsSetting> tlsSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
