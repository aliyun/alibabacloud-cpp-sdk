// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistentHashLBType, consistentHashLBType_);
      DARABONBA_PTR_TO_JSON(HttpCookie, httpCookie_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistentHashLBType, consistentHashLBType_);
      DARABONBA_PTR_FROM_JSON(HttpCookie, httpCookie_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &&) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& operator=(const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& operator=(TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consistentHashLBType_ == nullptr
        && return this->httpCookie_ == nullptr && return this->parameterName_ == nullptr; };
    // consistentHashLBType Field Functions 
    bool hasConsistentHashLBType() const { return this->consistentHashLBType_ != nullptr;};
    void deleteConsistentHashLBType() { this->consistentHashLBType_ = nullptr;};
    inline string consistentHashLBType() const { DARABONBA_PTR_GET_DEFAULT(consistentHashLBType_, "") };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setConsistentHashLBType(string consistentHashLBType) { DARABONBA_PTR_SET_VALUE(consistentHashLBType_, consistentHashLBType) };


    // httpCookie Field Functions 
    bool hasHttpCookie() const { return this->httpCookie_ != nullptr;};
    void deleteHttpCookie() { this->httpCookie_ = nullptr;};
    inline const Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie & httpCookie() const { DARABONBA_PTR_GET_CONST(httpCookie_, Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie) };
    inline Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie httpCookie() { DARABONBA_PTR_GET(httpCookie_, Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie) };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setHttpCookie(const Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie & httpCookie) { DARABONBA_PTR_SET_VALUE(httpCookie_, httpCookie) };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setHttpCookie(Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie && httpCookie) { DARABONBA_PTR_SET_RVALUE(httpCookie_, httpCookie) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


  protected:
    std::shared_ptr<string> consistentHashLBType_ = nullptr;
    std::shared_ptr<Models::TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie> httpCookie_ = nullptr;
    std::shared_ptr<string> parameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
