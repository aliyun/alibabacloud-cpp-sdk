// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_TO_JSON(HasUnsafeFeatures, hasUnsafeFeatures_);
      DARABONBA_PTR_TO_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_TO_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_TO_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(HTTPAdvancedOptions, HTTPAdvancedOptions_);
      DARABONBA_PTR_FROM_JSON(HasUnsafeFeatures, hasUnsafeFeatures_);
      DARABONBA_PTR_FROM_JSON(MatchRequest, matchRequest_);
      DARABONBA_PTR_FROM_JSON(RawVSRoute, rawVSRoute_);
      DARABONBA_PTR_FROM_JSON(RouteDestinations, routeDestinations_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetail &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail(DescribeIstioGatewayRouteDetailResponseBodyRouteDetail &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetail() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetail &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->HTTPAdvancedOptions_ == nullptr && return this->hasUnsafeFeatures_ == nullptr && return this->matchRequest_ == nullptr && return this->rawVSRoute_ == nullptr && return this->routeDestinations_ == nullptr
        && return this->routeName_ == nullptr && return this->routeType_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // HTTPAdvancedOptions Field Functions 
    bool hasHTTPAdvancedOptions() const { return this->HTTPAdvancedOptions_ != nullptr;};
    void deleteHTTPAdvancedOptions() { this->HTTPAdvancedOptions_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions & HTTPAdvancedOptions() const { DARABONBA_PTR_GET_CONST(HTTPAdvancedOptions_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions HTTPAdvancedOptions() { DARABONBA_PTR_GET(HTTPAdvancedOptions_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setHTTPAdvancedOptions(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions & HTTPAdvancedOptions) { DARABONBA_PTR_SET_VALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setHTTPAdvancedOptions(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions && HTTPAdvancedOptions) { DARABONBA_PTR_SET_RVALUE(HTTPAdvancedOptions_, HTTPAdvancedOptions) };


    // hasUnsafeFeatures Field Functions 
    bool hasHasUnsafeFeatures() const { return this->hasUnsafeFeatures_ != nullptr;};
    void deleteHasUnsafeFeatures() { this->hasUnsafeFeatures_ = nullptr;};
    inline bool hasUnsafeFeatures() const { DARABONBA_PTR_GET_DEFAULT(hasUnsafeFeatures_, false) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setHasUnsafeFeatures(bool hasUnsafeFeatures) { DARABONBA_PTR_SET_VALUE(hasUnsafeFeatures_, hasUnsafeFeatures) };


    // matchRequest Field Functions 
    bool hasMatchRequest() const { return this->matchRequest_ != nullptr;};
    void deleteMatchRequest() { this->matchRequest_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest & matchRequest() const { DARABONBA_PTR_GET_CONST(matchRequest_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest matchRequest() { DARABONBA_PTR_GET(matchRequest_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setMatchRequest(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest & matchRequest) { DARABONBA_PTR_SET_VALUE(matchRequest_, matchRequest) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setMatchRequest(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest && matchRequest) { DARABONBA_PTR_SET_RVALUE(matchRequest_, matchRequest) };


    // rawVSRoute Field Functions 
    bool hasRawVSRoute() const { return this->rawVSRoute_ != nullptr;};
    void deleteRawVSRoute() { this->rawVSRoute_ = nullptr;};
    inline string rawVSRoute() const { DARABONBA_PTR_GET_DEFAULT(rawVSRoute_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setRawVSRoute(string rawVSRoute) { DARABONBA_PTR_SET_VALUE(rawVSRoute_, rawVSRoute) };


    // routeDestinations Field Functions 
    bool hasRouteDestinations() const { return this->routeDestinations_ != nullptr;};
    void deleteRouteDestinations() { this->routeDestinations_ = nullptr;};
    inline const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations> & routeDestinations() const { DARABONBA_PTR_GET_CONST(routeDestinations_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations>) };
    inline vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations> routeDestinations() { DARABONBA_PTR_GET(routeDestinations_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setRouteDestinations(const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations> & routeDestinations) { DARABONBA_PTR_SET_VALUE(routeDestinations_, routeDestinations) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setRouteDestinations(vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations> && routeDestinations) { DARABONBA_PTR_SET_RVALUE(routeDestinations_, routeDestinations) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


  protected:
    // Domain list.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The advanced settings for routing HTTP traffic.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailHTTPAdvancedOptions> HTTPAdvancedOptions_ = nullptr;
    // If the value is true, the original YAML file contains features that are not supported on the current interface.
    std::shared_ptr<bool> hasUnsafeFeatures_ = nullptr;
    // The matching rules for traffic routing.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest> matchRequest_ = nullptr;
    // The original YAML file of the virtual service that is serialized into a JSON string.
    std::shared_ptr<string> rawVSRoute_ = nullptr;
    // The endpoints of destination services for Layer 4 weighted routing.
    std::shared_ptr<vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations>> routeDestinations_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> routeName_ = nullptr;
    // The type of the traffic to be routed. Valid values: `HTTP`, `TLS`, and `TCP`.
    std::shared_ptr<string> routeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
