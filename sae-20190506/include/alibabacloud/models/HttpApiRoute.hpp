// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTE_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiRouteDomains.hpp>
#include <alibabacloud/models/HttpApiRoutePolicies.hpp>
#include <alibabacloud/models/HttpApiRoutePredicates.hpp>
#include <alibabacloud/models/HttpApiRouteServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoute& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(HttpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(HttpApiName, httpApiName_);
      DARABONBA_PTR_TO_JSON(HttpApiType, httpApiType_);
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
      DARABONBA_PTR_TO_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_TO_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(HttpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(HttpApiName, httpApiName_);
      DARABONBA_PTR_FROM_JSON(HttpApiType, httpApiType_);
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
      DARABONBA_PTR_FROM_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_FROM_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    HttpApiRoute() = default ;
    HttpApiRoute(const HttpApiRoute &) = default ;
    HttpApiRoute(HttpApiRoute &&) = default ;
    HttpApiRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoute() = default ;
    HttpApiRoute& operator=(const HttpApiRoute &) = default ;
    HttpApiRoute& operator=(HttpApiRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressType_ != nullptr
        && this->deployStatus_ != nullptr && this->destinationType_ != nullptr && this->domains_ != nullptr && this->environmentId_ != nullptr && this->gatewayId_ != nullptr
        && this->httpApiId_ != nullptr && this->httpApiName_ != nullptr && this->httpApiType_ != nullptr && this->ingressId_ != nullptr && this->nacosInstanceId_ != nullptr
        && this->nacosNamespaceId_ != nullptr && this->name_ != nullptr && this->namespaceId_ != nullptr && this->policies_ != nullptr && this->predicates_ != nullptr
        && this->routeId_ != nullptr && this->services_ != nullptr && this->sourceType_ != nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline HttpApiRoute& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline HttpApiRoute& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline HttpApiRoute& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<HttpApiRouteDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<HttpApiRouteDomains>) };
    inline vector<HttpApiRouteDomains> domains() { DARABONBA_PTR_GET(domains_, vector<HttpApiRouteDomains>) };
    inline HttpApiRoute& setDomains(const vector<HttpApiRouteDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline HttpApiRoute& setDomains(vector<HttpApiRouteDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiRoute& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiRoute& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string httpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline HttpApiRoute& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // httpApiName Field Functions 
    bool hasHttpApiName() const { return this->httpApiName_ != nullptr;};
    void deleteHttpApiName() { this->httpApiName_ = nullptr;};
    inline string httpApiName() const { DARABONBA_PTR_GET_DEFAULT(httpApiName_, "") };
    inline HttpApiRoute& setHttpApiName(string httpApiName) { DARABONBA_PTR_SET_VALUE(httpApiName_, httpApiName) };


    // httpApiType Field Functions 
    bool hasHttpApiType() const { return this->httpApiType_ != nullptr;};
    void deleteHttpApiType() { this->httpApiType_ = nullptr;};
    inline string httpApiType() const { DARABONBA_PTR_GET_DEFAULT(httpApiType_, "") };
    inline HttpApiRoute& setHttpApiType(string httpApiType) { DARABONBA_PTR_SET_VALUE(httpApiType_, httpApiType) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline HttpApiRoute& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // nacosInstanceId Field Functions 
    bool hasNacosInstanceId() const { return this->nacosInstanceId_ != nullptr;};
    void deleteNacosInstanceId() { this->nacosInstanceId_ = nullptr;};
    inline string nacosInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nacosInstanceId_, "") };
    inline HttpApiRoute& setNacosInstanceId(string nacosInstanceId) { DARABONBA_PTR_SET_VALUE(nacosInstanceId_, nacosInstanceId) };


    // nacosNamespaceId Field Functions 
    bool hasNacosNamespaceId() const { return this->nacosNamespaceId_ != nullptr;};
    void deleteNacosNamespaceId() { this->nacosNamespaceId_ = nullptr;};
    inline string nacosNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(nacosNamespaceId_, "") };
    inline HttpApiRoute& setNacosNamespaceId(string nacosNamespaceId) { DARABONBA_PTR_SET_VALUE(nacosNamespaceId_, nacosNamespaceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiRoute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline HttpApiRoute& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const HttpApiRoutePolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, HttpApiRoutePolicies) };
    inline HttpApiRoutePolicies policies() { DARABONBA_PTR_GET(policies_, HttpApiRoutePolicies) };
    inline HttpApiRoute& setPolicies(const HttpApiRoutePolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline HttpApiRoute& setPolicies(HttpApiRoutePolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline const HttpApiRoutePredicates & predicates() const { DARABONBA_PTR_GET_CONST(predicates_, HttpApiRoutePredicates) };
    inline HttpApiRoutePredicates predicates() { DARABONBA_PTR_GET(predicates_, HttpApiRoutePredicates) };
    inline HttpApiRoute& setPredicates(const HttpApiRoutePredicates & predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };
    inline HttpApiRoute& setPredicates(HttpApiRoutePredicates && predicates) { DARABONBA_PTR_SET_RVALUE(predicates_, predicates) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline HttpApiRoute& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<HttpApiRouteServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<HttpApiRouteServices>) };
    inline vector<HttpApiRouteServices> services() { DARABONBA_PTR_GET(services_, vector<HttpApiRouteServices>) };
    inline HttpApiRoute& setServices(const vector<HttpApiRouteServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline HttpApiRoute& setServices(vector<HttpApiRouteServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline HttpApiRoute& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> addressType_ = nullptr;
    std::shared_ptr<string> deployStatus_ = nullptr;
    std::shared_ptr<string> destinationType_ = nullptr;
    std::shared_ptr<vector<HttpApiRouteDomains>> domains_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> httpApiId_ = nullptr;
    std::shared_ptr<string> httpApiName_ = nullptr;
    std::shared_ptr<string> httpApiType_ = nullptr;
    std::shared_ptr<int64_t> ingressId_ = nullptr;
    std::shared_ptr<string> nacosInstanceId_ = nullptr;
    std::shared_ptr<string> nacosNamespaceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<HttpApiRoutePolicies> policies_ = nullptr;
    std::shared_ptr<HttpApiRoutePredicates> predicates_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
    std::shared_ptr<vector<HttpApiRouteServices>> services_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
