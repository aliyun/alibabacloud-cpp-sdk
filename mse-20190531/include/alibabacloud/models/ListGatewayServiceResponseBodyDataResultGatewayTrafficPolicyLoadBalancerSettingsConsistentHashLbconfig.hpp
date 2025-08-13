// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTGATEWAYTRAFFICPOLICYLOADBALANCERSETTINGSCONSISTENTHASHLBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistentHashLBType, consistentHashLBType_);
      DARABONBA_PTR_TO_JSON(HttpCookie, httpCookie_);
      DARABONBA_PTR_TO_JSON(MinimumRingSize, minimumRingSize_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistentHashLBType, consistentHashLBType_);
      DARABONBA_PTR_FROM_JSON(HttpCookie, httpCookie_);
      DARABONBA_PTR_FROM_JSON(MinimumRingSize, minimumRingSize_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &&) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& operator=(const ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &) = default ;
    ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& operator=(ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consistentHashLBType_ != nullptr
        && this->httpCookie_ != nullptr && this->minimumRingSize_ != nullptr && this->parameterName_ != nullptr; };
    // consistentHashLBType Field Functions 
    bool hasConsistentHashLBType() const { return this->consistentHashLBType_ != nullptr;};
    void deleteConsistentHashLBType() { this->consistentHashLBType_ = nullptr;};
    inline string consistentHashLBType() const { DARABONBA_PTR_GET_DEFAULT(consistentHashLBType_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setConsistentHashLBType(string consistentHashLBType) { DARABONBA_PTR_SET_VALUE(consistentHashLBType_, consistentHashLBType) };


    // httpCookie Field Functions 
    bool hasHttpCookie() const { return this->httpCookie_ != nullptr;};
    void deleteHttpCookie() { this->httpCookie_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie & httpCookie() const { DARABONBA_PTR_GET_CONST(httpCookie_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie) };
    inline Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie httpCookie() { DARABONBA_PTR_GET(httpCookie_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setHttpCookie(const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie & httpCookie) { DARABONBA_PTR_SET_VALUE(httpCookie_, httpCookie) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setHttpCookie(Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie && httpCookie) { DARABONBA_PTR_SET_RVALUE(httpCookie_, httpCookie) };


    // minimumRingSize Field Functions 
    bool hasMinimumRingSize() const { return this->minimumRingSize_ != nullptr;};
    void deleteMinimumRingSize() { this->minimumRingSize_ = nullptr;};
    inline int64_t minimumRingSize() const { DARABONBA_PTR_GET_DEFAULT(minimumRingSize_, 0L) };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setMinimumRingSize(int64_t minimumRingSize) { DARABONBA_PTR_SET_VALUE(minimumRingSize_, minimumRingSize) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfig& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


  protected:
    // The type based on which consistent hashing load balancing is performed.
    // 
    // *   HEADER
    // *   COOKIE
    // *   SOURCE_IP
    // *   QUERY_PARAMETER
    std::shared_ptr<string> consistentHashLBType_ = nullptr;
    // The cookie-based load balancing parameters.
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie> httpCookie_ = nullptr;
    // The minimum value of the hash ring.
    std::shared_ptr<int64_t> minimumRingSize_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
