// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTE_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRoute& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_TO_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_ANY_TO_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_TO_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_FROM_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_ANY_FROM_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_FROM_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    CreateIstioGatewayRoutesRequestGatewayRoute() = default ;
    CreateIstioGatewayRoutesRequestGatewayRoute(const CreateIstioGatewayRoutesRequestGatewayRoute &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRoute(CreateIstioGatewayRoutesRequestGatewayRoute &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRoute() = default ;
    CreateIstioGatewayRoutesRequestGatewayRoute& operator=(const CreateIstioGatewayRoutesRequestGatewayRoute &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRoute& operator=(CreateIstioGatewayRoutesRequestGatewayRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->HTTPAdvancedOptions_ == nullptr && return this->matchRequest_ == nullptr && return this->namespace_ == nullptr && return this->rawVSRoute_ == nullptr && return this->routeDestinations_ == nullptr
        && return this->routeName_ == nullptr && return this->routeType_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // HTTPAdvancedOptions Field Functions 
    bool hasHTTPAdvancedOptions() const { return this->HTTPAdvancedOptions_ != nullptr;};
    void deleteHTTPAdvancedOptions() { this->HTTPAdvancedOptions_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions & HTTPAdvancedOptions() const { DARABONBA_PTR_GET_CONST(HTTPAdvancedOptions_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions HTTPAdvancedOptions() { DARABONBA_PTR_GET(HTTPAdvancedOptions_, Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setHTTPAdvancedOptions(const Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions & HTTPAdvancedOptions) { DARABONBA_PTR_SET_VALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setHTTPAdvancedOptions(Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions && HTTPAdvancedOptions) { DARABONBA_PTR_SET_RVALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };


    // matchRequest Field Functions 
    bool hasMatchRequest() const { return this->matchRequest_ != nullptr;};
    void deleteMatchRequest() { this->matchRequest_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest & matchRequest() const { DARABONBA_PTR_GET_CONST(matchRequest_, Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest matchRequest() { DARABONBA_PTR_GET(matchRequest_, Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setMatchRequest(const Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest & matchRequest) { DARABONBA_PTR_SET_VALUE(matchRequest_, matchRequest) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setMatchRequest(Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest && matchRequest) { DARABONBA_PTR_SET_RVALUE(matchRequest_, matchRequest) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // rawVSRoute Field Functions 
    bool hasRawVSRoute() const { return this->rawVSRoute_ != nullptr;};
    void deleteRawVSRoute() { this->rawVSRoute_ = nullptr;};
    inline     const Darabonba::Json & rawVSRoute() const { DARABONBA_GET(rawVSRoute_) };
    Darabonba::Json & rawVSRoute() { DARABONBA_GET(rawVSRoute_) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRawVSRoute(const Darabonba::Json & rawVSRoute) { DARABONBA_SET_VALUE(rawVSRoute_, rawVSRoute) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRawVSRoute(Darabonba::Json & rawVSRoute) { DARABONBA_SET_RVALUE(rawVSRoute_, rawVSRoute) };


    // routeDestinations Field Functions 
    bool hasRouteDestinations() const { return this->routeDestinations_ != nullptr;};
    void deleteRouteDestinations() { this->routeDestinations_ = nullptr;};
    inline const vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> & routeDestinations() const { DARABONBA_PTR_GET_CONST(routeDestinations_, vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>) };
    inline vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> routeDestinations() { DARABONBA_PTR_GET(routeDestinations_, vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRouteDestinations(const vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> & routeDestinations) { DARABONBA_PTR_SET_VALUE(routeDestinations_, routeDestinations) };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRouteDestinations(vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> && routeDestinations) { DARABONBA_PTR_SET_RVALUE(routeDestinations_, routeDestinations) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRoute& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


  protected:
    // The requested domain names.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The advanced settings for routing HTTP traffic.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions> HTTPAdvancedOptions_ = nullptr;
    // The matching rules for traffic routing.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteMatchRequest> matchRequest_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // A JSON string. This parameter corresponds to the three routing types in virtual services and provides configuration entries for advanced features. The value of this parameter overwrites the configurations in RouteName, RouteType, MatchRequest, and HTTPAdvancedOptions.
    Darabonba::Json rawVSRoute_ = nullptr;
    // The endpoints of destination services for Layer 4 weighted routing.
    std::shared_ptr<vector<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>> routeDestinations_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> routeName_ = nullptr;
    // The type of the traffic to be routed. Valid values: `HTTP`, `TLS`, and `TCP`.
    std::shared_ptr<string> routeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
