// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIGHTTPCOOKIE_HPP_
#define ALIBABACLOUD_MODELS_TRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIGHTTPCOOKIE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
    };
    friend void from_json(const Darabonba::Json& j, TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
    };
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &&) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& operator=(const TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &) = default ;
    TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& operator=(TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->path_ != nullptr && this->TTL_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline string TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, "") };
    inline TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setTTL(string TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> TTL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
