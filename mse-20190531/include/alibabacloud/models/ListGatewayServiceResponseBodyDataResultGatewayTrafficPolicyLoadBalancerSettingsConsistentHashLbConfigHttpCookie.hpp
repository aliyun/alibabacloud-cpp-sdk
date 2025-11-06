// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIGHTTPCOOKIE_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIGHTTPCOOKIE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &&) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& operator=(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& operator=(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->path_ == nullptr && return this->ttl_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline string ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The name of the cookie.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the cookie.
    std::shared_ptr<string> path_ = nullptr;
    // The lifecycle of the cookie.
    std::shared_ptr<string> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
