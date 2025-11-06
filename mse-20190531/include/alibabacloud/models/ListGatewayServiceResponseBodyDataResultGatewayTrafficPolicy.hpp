// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_TO_JSON(Tls, tls_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSettings, loadBalancerSettings_);
      DARABONBA_PTR_FROM_JSON(Tls, tls_);
    };
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy &&) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& operator=(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& operator=(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerSettings_ == nullptr
        && return this->tls_ == nullptr; };
    // loadBalancerSettings Field Functions 
    bool hasLoadBalancerSettings() const { return this->loadBalancerSettings_ != nullptr;};
    void deleteLoadBalancerSettings() { this->loadBalancerSettings_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings & loadBalancerSettings() const { DARABONBA_PTR_GET_CONST(loadBalancerSettings_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings) };
    inline Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings loadBalancerSettings() { DARABONBA_PTR_GET(loadBalancerSettings_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& setLoadBalancerSettings(const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings & loadBalancerSettings) { DARABONBA_PTR_SET_VALUE(loadBalancerSettings_, loadBalancerSettings) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& setLoadBalancerSettings(Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings && loadBalancerSettings) { DARABONBA_PTR_SET_RVALUE(loadBalancerSettings_, loadBalancerSettings) };


    // tls Field Functions 
    bool hasTls() const { return this->tls_ != nullptr;};
    void deleteTls() { this->tls_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls & tls() const { DARABONBA_PTR_GET_CONST(tls_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls) };
    inline Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls tls() { DARABONBA_PTR_GET(tls_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& setTls(const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls & tls) { DARABONBA_PTR_SET_VALUE(tls_, tls) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy& setTls(Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls && tls) { DARABONBA_PTR_SET_RVALUE(tls_, tls) };


  protected:
    // The load balancing settings.
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettings> loadBalancerSettings_ = nullptr;
    // The Transport Layer Security (TLS).
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyTls> tls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
