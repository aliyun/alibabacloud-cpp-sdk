// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRoute& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_TO_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_ANY_TO_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_TO_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_FROM_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_ANY_FROM_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_FROM_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRoute() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRoute(const UpdateIstioGatewayRoutesRequestGatewayRoute &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRoute(UpdateIstioGatewayRoutesRequestGatewayRoute &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRoute() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRoute& operator=(const UpdateIstioGatewayRoutesRequestGatewayRoute &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRoute& operator=(UpdateIstioGatewayRoutesRequestGatewayRoute &&) = default ;
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
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // HTTPAdvancedOptions Field Functions 
    bool hasHTTPAdvancedOptions() const { return this->HTTPAdvancedOptions_ != nullptr;};
    void deleteHTTPAdvancedOptions() { this->HTTPAdvancedOptions_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions & HTTPAdvancedOptions() const { DARABONBA_PTR_GET_CONST(HTTPAdvancedOptions_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions HTTPAdvancedOptions() { DARABONBA_PTR_GET(HTTPAdvancedOptions_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setHTTPAdvancedOptions(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions & HTTPAdvancedOptions) { DARABONBA_PTR_SET_VALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setHTTPAdvancedOptions(Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions && HTTPAdvancedOptions) { DARABONBA_PTR_SET_RVALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };


    // matchRequest Field Functions 
    bool hasMatchRequest() const { return this->matchRequest_ != nullptr;};
    void deleteMatchRequest() { this->matchRequest_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest & matchRequest() const { DARABONBA_PTR_GET_CONST(matchRequest_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest matchRequest() { DARABONBA_PTR_GET(matchRequest_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setMatchRequest(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest & matchRequest) { DARABONBA_PTR_SET_VALUE(matchRequest_, matchRequest) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setMatchRequest(Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest && matchRequest) { DARABONBA_PTR_SET_RVALUE(matchRequest_, matchRequest) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // rawVSRoute Field Functions 
    bool hasRawVSRoute() const { return this->rawVSRoute_ != nullptr;};
    void deleteRawVSRoute() { this->rawVSRoute_ = nullptr;};
    inline     const Darabonba::Json & rawVSRoute() const { DARABONBA_GET(rawVSRoute_) };
    Darabonba::Json & rawVSRoute() { DARABONBA_GET(rawVSRoute_) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRawVSRoute(const Darabonba::Json & rawVSRoute) { DARABONBA_SET_VALUE(rawVSRoute_, rawVSRoute) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRawVSRoute(Darabonba::Json & rawVSRoute) { DARABONBA_SET_RVALUE(rawVSRoute_, rawVSRoute) };


    // routeDestinations Field Functions 
    bool hasRouteDestinations() const { return this->routeDestinations_ != nullptr;};
    void deleteRouteDestinations() { this->routeDestinations_ = nullptr;};
    inline const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> & routeDestinations() const { DARABONBA_PTR_GET_CONST(routeDestinations_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>) };
    inline vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> routeDestinations() { DARABONBA_PTR_GET(routeDestinations_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRouteDestinations(const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> & routeDestinations) { DARABONBA_PTR_SET_VALUE(routeDestinations_, routeDestinations) };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRouteDestinations(vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations> && routeDestinations) { DARABONBA_PTR_SET_RVALUE(routeDestinations_, routeDestinations) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRoute& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


  protected:
    // The list of requested domain names.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The advanced settings for routing HTTP traffic.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteHTTPAdvancedOptions> HTTPAdvancedOptions_ = nullptr;
    // The matching rules for traffic routing.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest> matchRequest_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The original YAML file of the virtual service that is serialized in a JSON string.
    Darabonba::Json rawVSRoute_ = nullptr;
    // The endpoints of destination services for Layer 4 weighted routing.
    std::shared_ptr<vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinations>> routeDestinations_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> routeName_ = nullptr;
    // The type of the traffic to be routed. Valid values: `HTTP`, `TLS`, and `TCP`.
    std::shared_ptr<string> routeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
