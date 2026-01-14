#include <darabonba/Core.hpp>
#include <alibabacloud/Mse20190531.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Mse20190531::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mse20190531
{

AlibabaCloud::Mse20190531::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("mse", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 新增服务鉴权规则
 *
 * @param request AddAuthPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAuthPolicyResponse
 */
AddAuthPolicyResponse Client::addAuthPolicyWithOptions(const AddAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAuthRule()) {
    query["AuthRule"] = request.getAuthRule();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasK8sNamespace()) {
    query["K8sNamespace"] = request.getK8sNamespace();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAuthPolicy"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAuthPolicyResponse>();
}

/**
 * @summary 新增服务鉴权规则
 *
 * @param request AddAuthPolicyRequest
 * @return AddAuthPolicyResponse
 */
AddAuthPolicyResponse Client::addAuthPolicy(const AddAuthPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuthPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates authorization information for a gateway.
 *
 * @param tmpReq AddAuthResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAuthResourceResponse
 */
AddAuthResourceResponse Client::addAuthResourceWithOptions(const AddAuthResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAuthResourceShrinkRequest request = AddAuthResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthResourceHeaderList()) {
    request.setAuthResourceHeaderListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthResourceHeaderList(), "AuthResourceHeaderList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthId()) {
    query["AuthId"] = request.getAuthId();
  }

  if (!!request.hasAuthResourceHeaderListShrink()) {
    query["AuthResourceHeaderList"] = request.getAuthResourceHeaderListShrink();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIgnoreCase()) {
    query["IgnoreCase"] = request.getIgnoreCase();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.getMatchType();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAuthResource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAuthResourceResponse>();
}

/**
 * @summary Creates authorization information for a gateway.
 *
 * @param request AddAuthResourceRequest
 * @return AddAuthResourceResponse
 */
AddAuthResourceResponse Client::addAuthResource(const AddAuthResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuthResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a blacklist or a whitelist.
 *
 * @param request AddBlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBlackWhiteListResponse
 */
AddBlackWhiteListResponse Client::addBlackWhiteListWithOptions(const AddBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIsWhite()) {
    query["IsWhite"] = request.getIsWhite();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasResourceIdJsonList()) {
    query["ResourceIdJsonList"] = request.getResourceIdJsonList();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBlackWhiteList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBlackWhiteListResponse>();
}

/**
 * @summary Creates a blacklist or a whitelist.
 *
 * @param request AddBlackWhiteListRequest
 * @return AddBlackWhiteListResponse
 */
AddBlackWhiteListResponse Client::addBlackWhiteList(const AddBlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary Adds a gateway.
 *
 * @param tmpReq AddGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayResponse
 */
AddGatewayResponse Client::addGatewayWithOptions(const AddGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGatewayShrinkRequest request = AddGatewayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasZoneInfo()) {
    request.setZoneInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getZoneInfo(), "ZoneInfo", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClbNetworkType()) {
    query["ClbNetworkType"] = request.getClbNetworkType();
  }

  if (!!request.hasEnableHardwareAcceleration()) {
    query["EnableHardwareAcceleration"] = request.getEnableHardwareAcceleration();
  }

  if (!!request.hasEnableSls()) {
    query["EnableSls"] = request.getEnableSls();
  }

  if (!!request.hasEnableXtrace()) {
    query["EnableXtrace"] = request.getEnableXtrace();
  }

  if (!!request.hasEnterpriseSecurityGroup()) {
    query["EnterpriseSecurityGroup"] = request.getEnterpriseSecurityGroup();
  }

  if (!!request.hasInternetSlbSpec()) {
    query["InternetSlbSpec"] = request.getInternetSlbSpec();
  }

  if (!!request.hasManagedEntryNetworkType()) {
    query["ManagedEntryNetworkType"] = request.getManagedEntryNetworkType();
  }

  if (!!request.hasMserVersion()) {
    query["MserVersion"] = request.getMserVersion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNlbNetworkType()) {
    query["NlbNetworkType"] = request.getNlbNetworkType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasReplica()) {
    query["Replica"] = request.getReplica();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSlbSpec()) {
    query["SlbSpec"] = request.getSlbSpec();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchId2()) {
    query["VSwitchId2"] = request.getVSwitchId2();
  }

  if (!!request.hasVpc()) {
    query["Vpc"] = request.getVpc();
  }

  if (!!request.hasXtraceRatio()) {
    query["XtraceRatio"] = request.getXtraceRatio();
  }

  if (!!request.hasZoneInfoShrink()) {
    query["ZoneInfo"] = request.getZoneInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGateway"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayResponse>();
}

/**
 * @summary Adds a gateway.
 *
 * @param request AddGatewayRequest
 * @return AddGatewayResponse
 */
AddGatewayResponse Client::addGateway(const AddGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayWithOptions(request, runtime);
}

/**
 * @summary Adds an authentication configuration for a gateway.
 *
 * @param tmpReq AddGatewayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayAuthResponse
 */
AddGatewayAuthResponse Client::addGatewayAuthWithOptions(const AddGatewayAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGatewayAuthShrinkRequest request = AddGatewayAuthShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthResourceList()) {
    request.setAuthResourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthResourceList(), "AuthResourceList", "json"));
  }

  if (!!tmpReq.hasExternalAuthZJSON()) {
    request.setExternalAuthZJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExternalAuthZJSON(), "ExternalAuthZJSON", "json"));
  }

  if (!!tmpReq.hasScopesList()) {
    request.setScopesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScopesList(), "ScopesList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthResourceConfig()) {
    query["AuthResourceConfig"] = request.getAuthResourceConfig();
  }

  if (!!request.hasAuthResourceListShrink()) {
    query["AuthResourceList"] = request.getAuthResourceListShrink();
  }

  if (!!request.hasAuthResourceMode()) {
    query["AuthResourceMode"] = request.getAuthResourceMode();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["ClientSecret"] = request.getClientSecret();
  }

  if (!!request.hasCookieDomain()) {
    query["CookieDomain"] = request.getCookieDomain();
  }

  if (!!request.hasExternalAuthZJSONShrink()) {
    query["ExternalAuthZJSON"] = request.getExternalAuthZJSONShrink();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIsWhite()) {
    query["IsWhite"] = request.getIsWhite();
  }

  if (!!request.hasIssuer()) {
    query["Issuer"] = request.getIssuer();
  }

  if (!!request.hasJwks()) {
    query["Jwks"] = request.getJwks();
  }

  if (!!request.hasLoginUrl()) {
    query["LoginUrl"] = request.getLoginUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRedirectUrl()) {
    query["RedirectUrl"] = request.getRedirectUrl();
  }

  if (!!request.hasScopesListShrink()) {
    query["ScopesList"] = request.getScopesListShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSub()) {
    query["Sub"] = request.getSub();
  }

  if (!!request.hasTokenName()) {
    query["TokenName"] = request.getTokenName();
  }

  if (!!request.hasTokenNamePrefix()) {
    query["TokenNamePrefix"] = request.getTokenNamePrefix();
  }

  if (!!request.hasTokenPass()) {
    query["TokenPass"] = request.getTokenPass();
  }

  if (!!request.hasTokenPosition()) {
    query["TokenPosition"] = request.getTokenPosition();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewayAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayAuthResponse>();
}

/**
 * @summary Adds an authentication configuration for a gateway.
 *
 * @param request AddGatewayAuthRequest
 * @return AddGatewayAuthResponse
 */
AddGatewayAuthResponse Client::addGatewayAuth(const AddGatewayAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayAuthWithOptions(request, runtime);
}

/**
 * @summary Adds a consumer on which a gateway performs authentication operations.
 *
 * @param request AddGatewayAuthConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayAuthConsumerResponse
 */
AddGatewayAuthConsumerResponse Client::addGatewayAuthConsumerWithOptions(const AddGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEncodeType()) {
    query["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasJwks()) {
    query["Jwks"] = request.getJwks();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyValue()) {
    query["KeyValue"] = request.getKeyValue();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTokenName()) {
    query["TokenName"] = request.getTokenName();
  }

  if (!!request.hasTokenPass()) {
    query["TokenPass"] = request.getTokenPass();
  }

  if (!!request.hasTokenPosition()) {
    query["TokenPosition"] = request.getTokenPosition();
  }

  if (!!request.hasTokenPrefix()) {
    query["TokenPrefix"] = request.getTokenPrefix();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewayAuthConsumer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayAuthConsumerResponse>();
}

/**
 * @summary Adds a consumer on which a gateway performs authentication operations.
 *
 * @param request AddGatewayAuthConsumerRequest
 * @return AddGatewayAuthConsumerResponse
 */
AddGatewayAuthConsumerResponse Client::addGatewayAuthConsumer(const AddGatewayAuthConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayAuthConsumerWithOptions(request, runtime);
}

/**
 * @summary Associates a domain name with a gateway.
 *
 * @param tmpReq AddGatewayDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayDomainResponse
 */
AddGatewayDomainResponse Client::addGatewayDomainWithOptions(const AddGatewayDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGatewayDomainShrinkRequest request = AddGatewayDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTlsCipherSuitesConfigJSON()) {
    request.setTlsCipherSuitesConfigJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTlsCipherSuitesConfigJSON(), "TlsCipherSuitesConfigJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.getHttp2();
  }

  if (!!request.hasMustHttps()) {
    query["MustHttps"] = request.getMustHttps();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasTlsCipherSuitesConfigJSONShrink()) {
    query["TlsCipherSuitesConfigJSON"] = request.getTlsCipherSuitesConfigJSONShrink();
  }

  if (!!request.hasTlsMax()) {
    query["TlsMax"] = request.getTlsMax();
  }

  if (!!request.hasTlsMin()) {
    query["TlsMin"] = request.getTlsMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewayDomain"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayDomainResponse>();
}

/**
 * @summary Associates a domain name with a gateway.
 *
 * @param request AddGatewayDomainRequest
 * @return AddGatewayDomainResponse
 */
AddGatewayDomainResponse Client::addGatewayDomain(const AddGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayDomainWithOptions(request, runtime);
}

/**
 * @summary Adds a gateway route.
 *
 * @param tmpReq AddGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayRouteResponse
 */
AddGatewayRouteResponse Client::addGatewayRouteWithOptions(const AddGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGatewayRouteShrinkRequest request = AddGatewayRouteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDirectResponseJSON()) {
    request.setDirectResponseJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDirectResponseJSON(), "DirectResponseJSON", "json"));
  }

  if (!!tmpReq.hasFallbackServices()) {
    request.setFallbackServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFallbackServices(), "FallbackServices", "json"));
  }

  if (!!tmpReq.hasPredicates()) {
    request.setPredicatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPredicates(), "Predicates", "json"));
  }

  if (!!tmpReq.hasRedirectJSON()) {
    request.setRedirectJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirectJSON(), "RedirectJSON", "json"));
  }

  if (!!tmpReq.hasServices()) {
    request.setServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServices(), "Services", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirectResponseJSONShrink()) {
    query["DirectResponseJSON"] = request.getDirectResponseJSONShrink();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDomainIdListJSON()) {
    query["DomainIdListJSON"] = request.getDomainIdListJSON();
  }

  if (!!request.hasEnableWaf()) {
    query["EnableWaf"] = request.getEnableWaf();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.getFallback();
  }

  if (!!request.hasFallbackServicesShrink()) {
    query["FallbackServices"] = request.getFallbackServicesShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPolicies()) {
    query["Policies"] = request.getPolicies();
  }

  if (!!request.hasPredicatesShrink()) {
    query["Predicates"] = request.getPredicatesShrink();
  }

  if (!!request.hasRedirectJSONShrink()) {
    query["RedirectJSON"] = request.getRedirectJSONShrink();
  }

  if (!!request.hasRouteOrder()) {
    query["RouteOrder"] = request.getRouteOrder();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.getRouteType();
  }

  if (!!request.hasServicesShrink()) {
    query["Services"] = request.getServicesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayRouteResponse>();
}

/**
 * @summary Adds a gateway route.
 *
 * @param request AddGatewayRouteRequest
 * @return AddGatewayRouteResponse
 */
AddGatewayRouteResponse Client::addGatewayRoute(const AddGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Adds a service version.
 *
 * @param request AddGatewayServiceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewayServiceVersionResponse
 */
AddGatewayServiceVersionResponse Client::addGatewayServiceVersionWithOptions(const AddGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewayServiceVersion"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewayServiceVersionResponse>();
}

/**
 * @summary Adds a service version.
 *
 * @param request AddGatewayServiceVersionRequest
 * @return AddGatewayServiceVersionResponse
 */
AddGatewayServiceVersionResponse Client::addGatewayServiceVersion(const AddGatewayServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewayServiceVersionWithOptions(request, runtime);
}

/**
 * @summary Associates a Server Load Balancer (SLB) instance with a gateway.
 *
 * @param tmpReq AddGatewaySlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGatewaySlbResponse
 */
AddGatewaySlbResponse Client::addGatewaySlbWithOptions(const AddGatewaySlbRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGatewaySlbShrinkRequest request = AddGatewaySlbShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVServiceList()) {
    request.setVServiceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVServiceList(), "VServiceList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHttpPort()) {
    query["HttpPort"] = request.getHttpPort();
  }

  if (!!request.hasHttpsPort()) {
    query["HttpsPort"] = request.getHttpsPort();
  }

  if (!!request.hasHttpsVServerGroupId()) {
    query["HttpsVServerGroupId"] = request.getHttpsVServerGroupId();
  }

  if (!!request.hasServiceWeight()) {
    query["ServiceWeight"] = request.getServiceWeight();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.getVServerGroupId();
  }

  if (!!request.hasVServiceListShrink()) {
    query["VServiceList"] = request.getVServiceListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGatewaySlb"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGatewaySlbResponse>();
}

/**
 * @summary Associates a Server Load Balancer (SLB) instance with a gateway.
 *
 * @param request AddGatewaySlbRequest
 * @return AddGatewaySlbResponse
 */
AddGatewaySlbResponse Client::addGatewaySlb(const AddGatewaySlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGatewaySlbWithOptions(request, runtime);
}

/**
 * @summary Create a new migration task
 *
 * @param request AddMigrationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMigrationTaskResponse
 */
AddMigrationTaskResponse Client::addMigrationTaskWithOptions(const AddMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasOriginInstanceAddress()) {
    query["OriginInstanceAddress"] = request.getOriginInstanceAddress();
  }

  if (!!request.hasOriginInstanceName()) {
    query["OriginInstanceName"] = request.getOriginInstanceName();
  }

  if (!!request.hasOriginInstanceNamespace()) {
    query["OriginInstanceNamespace"] = request.getOriginInstanceNamespace();
  }

  if (!!request.hasProjectDesc()) {
    query["ProjectDesc"] = request.getProjectDesc();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasSyncType()) {
    query["SyncType"] = request.getSyncType();
  }

  if (!!request.hasTargetClusterName()) {
    query["TargetClusterName"] = request.getTargetClusterName();
  }

  if (!!request.hasTargetClusterUrl()) {
    query["TargetClusterUrl"] = request.getTargetClusterUrl();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.getTargetInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMigrationTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMigrationTaskResponse>();
}

/**
 * @summary Create a new migration task
 *
 * @param request AddMigrationTaskRequest
 * @return AddMigrationTaskResponse
 */
AddMigrationTaskResponse Client::addMigrationTask(const AddMigrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMigrationTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a mock rule.
 *
 * @param request AddMockRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMockRuleResponse
 */
AddMockRuleResponse Client::addMockRuleWithOptions(const AddMockRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerAppIds()) {
    query["ConsumerAppIds"] = request.getConsumerAppIds();
  }

  if (!!request.hasDubboMockItems()) {
    query["DubboMockItems"] = request.getDubboMockItems();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasExtraJson()) {
    query["ExtraJson"] = request.getExtraJson();
  }

  if (!!request.hasMockType()) {
    query["MockType"] = request.getMockType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProviderAppId()) {
    query["ProviderAppId"] = request.getProviderAppId();
  }

  if (!!request.hasProviderAppName()) {
    query["ProviderAppName"] = request.getProviderAppName();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasScMockItems()) {
    query["ScMockItems"] = request.getScMockItems();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMockRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMockRuleResponse>();
}

/**
 * @summary Creates a mock rule.
 *
 * @param request AddMockRuleRequest
 * @return AddMockRuleResponse
 */
AddMockRuleResponse Client::addMockRule(const AddMockRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMockRuleWithOptions(request, runtime);
}

/**
 * @summary Associates a certificate with a domain name of a gateway. You can specify a certificate that is hosted in Alibaba Cloud Security.
 *
 * @param request AddSSLCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSSLCertResponse
 */
AddSSLCertResponse Client::addSSLCertWithOptions(const AddSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSSLCert"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSSLCertResponse>();
}

/**
 * @summary Associates a certificate with a domain name of a gateway. You can specify a certificate that is hosted in Alibaba Cloud Security.
 *
 * @param request AddSSLCertRequest
 * @return AddSSLCertResponse
 */
AddSSLCertResponse Client::addSSLCert(const AddSSLCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSSLCertWithOptions(request, runtime);
}

/**
 * @summary Creates a security group rule for a gateway.
 *
 * @param request AddSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSecurityGroupRuleResponse
 */
AddSecurityGroupRuleResponse Client::addSecurityGroupRuleWithOptions(const AddSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPortRange()) {
    query["PortRange"] = request.getPortRange();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSecurityGroupRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSecurityGroupRuleResponse>();
}

/**
 * @summary Creates a security group rule for a gateway.
 *
 * @param request AddSecurityGroupRuleRequest
 * @return AddSecurityGroupRuleResponse
 */
AddSecurityGroupRuleResponse Client::addSecurityGroupRule(const AddSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a Nacos service source.
 *
 * @param tmpReq AddServiceSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServiceSourceResponse
 */
AddServiceSourceResponse Client::addServiceSourceWithOptions(const AddServiceSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddServiceSourceShrinkRequest request = AddServiceSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupList()) {
    request.setGroupListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupList(), "GroupList", "json"));
  }

  if (!!tmpReq.hasIngressOptionsRequest()) {
    request.setIngressOptionsRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIngressOptionsRequest(), "IngressOptionsRequest", "json"));
  }

  if (!!tmpReq.hasPathList()) {
    request.setPathListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPathList(), "PathList", "json"));
  }

  if (!!tmpReq.hasToAuthorizeSecurityGroups()) {
    request.setToAuthorizeSecurityGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToAuthorizeSecurityGroups(), "ToAuthorizeSecurityGroups", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasGroupListShrink()) {
    query["GroupList"] = request.getGroupListShrink();
  }

  if (!!request.hasIngressOptionsRequestShrink()) {
    query["IngressOptionsRequest"] = request.getIngressOptionsRequestShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPathListShrink()) {
    query["PathList"] = request.getPathListShrink();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasToAuthorizeSecurityGroupsShrink()) {
    query["ToAuthorizeSecurityGroups"] = request.getToAuthorizeSecurityGroupsShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddServiceSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddServiceSourceResponse>();
}

/**
 * @summary Adds a Nacos service source.
 *
 * @param request AddServiceSourceRequest
 * @return AddServiceSourceResponse
 */
AddServiceSourceResponse Client::addServiceSource(const AddServiceSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServiceSourceWithOptions(request, runtime);
}

/**
 * @summary Publishes a route for a gateway.
 *
 * @param request ApplyGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyGatewayRouteResponse
 */
ApplyGatewayRouteResponse Client::applyGatewayRouteWithOptions(const ApplyGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyGatewayRouteResponse>();
}

/**
 * @summary Publishes a route for a gateway.
 *
 * @param request ApplyGatewayRouteRequest
 * @return ApplyGatewayRouteResponse
 */
ApplyGatewayRouteResponse Client::applyGatewayRoute(const ApplyGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Modifies a tag-based routing rule.
 *
 * @param tmpReq ApplyTagPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyTagPoliciesResponse
 */
ApplyTagPoliciesResponse Client::applyTagPoliciesWithOptions(const ApplyTagPoliciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyTagPoliciesShrinkRequest request = ApplyTagPoliciesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyTagPolicies"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyTagPoliciesResponse>();
}

/**
 * @summary Modifies a tag-based routing rule.
 *
 * @param request ApplyTagPoliciesRequest
 * @return ApplyTagPoliciesResponse
 */
ApplyTagPoliciesResponse Client::applyTagPolicies(const ApplyTagPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyTagPoliciesWithOptions(request, runtime);
}

/**
 * @summary Binds traffic protection behavior.
 *
 * @param request BindSentinelBlockFallbackDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSentinelBlockFallbackDefinitionResponse
 */
BindSentinelBlockFallbackDefinitionResponse Client::bindSentinelBlockFallbackDefinitionWithOptions(const BindSentinelBlockFallbackDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasFallbackId()) {
    query["FallbackId"] = request.getFallbackId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSentinelBlockFallbackDefinition"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSentinelBlockFallbackDefinitionResponse>();
}

/**
 * @summary Binds traffic protection behavior.
 *
 * @param request BindSentinelBlockFallbackDefinitionRequest
 * @return BindSentinelBlockFallbackDefinitionResponse
 */
BindSentinelBlockFallbackDefinitionResponse Client::bindSentinelBlockFallbackDefinition(const BindSentinelBlockFallbackDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSentinelBlockFallbackDefinitionWithOptions(request, runtime);
}

/**
 * @summary Resource Transfer
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Resource Transfer
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Copy Nacos Configuration
 *
 * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CloneNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneNacosConfigResponse
 */
CloneNacosConfigResponse Client::cloneNacosConfigWithOptions(const CloneNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataIds()) {
    query["DataIds"] = request.getDataIds();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOriginNamespaceId()) {
    query["OriginNamespaceId"] = request.getOriginNamespaceId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasTargetNamespaceId()) {
    query["TargetNamespaceId"] = request.getTargetNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneNacosConfigResponse>();
}

/**
 * @summary Copy Nacos Configuration
 *
 * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CloneNacosConfigRequest
 * @return CloneNacosConfigResponse
 */
CloneNacosConfigResponse Client::cloneNacosConfig(const CloneNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Clones rules from Application High Availability Service.
 *
 * @param request CloneSentinelRuleFromAhasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneSentinelRuleFromAhasResponse
 */
CloneSentinelRuleFromAhasResponse Client::cloneSentinelRuleFromAhasWithOptions(const CloneSentinelRuleFromAhasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAhasNamespace()) {
    query["AhasNamespace"] = request.getAhasNamespace();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIsAHASPublicRegion()) {
    query["IsAHASPublicRegion"] = request.getIsAHASPublicRegion();
  }

  if (!!request.hasMseAppName()) {
    query["MseAppName"] = request.getMseAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneSentinelRuleFromAhas"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneSentinelRuleFromAhasResponse>();
}

/**
 * @summary Clones rules from Application High Availability Service.
 *
 * @param request CloneSentinelRuleFromAhasRequest
 * @return CloneSentinelRuleFromAhasResponse
 */
CloneSentinelRuleFromAhasResponse Client::cloneSentinelRuleFromAhas(const CloneSentinelRuleFromAhasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneSentinelRuleFromAhasWithOptions(request, runtime);
}

/**
 * @summary Creates an application.
 *
 * @param tmpReq CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationShrinkRequest request = CreateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSentinelEnable()) {
    query["SentinelEnable"] = request.getSentinelEnable();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSwitchEnable()) {
    query["SwitchEnable"] = request.getSwitchEnable();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a circuit breaking rule.
 *
 * @param request CreateCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCircuitBreakerRuleResponse
 */
CreateCircuitBreakerRuleResponse Client::createCircuitBreakerRuleWithOptions(const CreateCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasHalfOpenBaseAmountPerStep()) {
    query["HalfOpenBaseAmountPerStep"] = request.getHalfOpenBaseAmountPerStep();
  }

  if (!!request.hasHalfOpenRecoveryStepNum()) {
    query["HalfOpenRecoveryStepNum"] = request.getHalfOpenRecoveryStepNum();
  }

  if (!!request.hasMaxAllowedRtMs()) {
    query["MaxAllowedRtMs"] = request.getMaxAllowedRtMs();
  }

  if (!!request.hasMinRequestAmount()) {
    query["MinRequestAmount"] = request.getMinRequestAmount();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRetryTimeoutMs()) {
    query["RetryTimeoutMs"] = request.getRetryTimeoutMs();
  }

  if (!!request.hasStatIntervalMs()) {
    query["StatIntervalMs"] = request.getStatIntervalMs();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCircuitBreakerRuleResponse>();
}

/**
 * @summary Creates a circuit breaking rule.
 *
 * @param request CreateCircuitBreakerRuleRequest
 * @return CreateCircuitBreakerRuleResponse
 */
CreateCircuitBreakerRuleResponse Client::createCircuitBreakerRule(const CreateCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary Create an MSE registration and configuration center instance
 *
 * @description Please ensure that you fully understand the billing method and pricing of the MSE (Microservice Engine) product before using this interface.
 *
 * @param request CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClusterSpecification()) {
    query["ClusterSpecification"] = request.getClusterSpecification();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasClusterVersion()) {
    query["ClusterVersion"] = request.getClusterVersion();
  }

  if (!!request.hasConnectionType()) {
    query["ConnectionType"] = request.getConnectionType();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasEipEnabled()) {
    query["EipEnabled"] = request.getEipEnabled();
  }

  if (!!request.hasInstanceCount()) {
    query["InstanceCount"] = request.getInstanceCount();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  if (!!request.hasNetType()) {
    query["NetType"] = request.getNetType();
  }

  if (!!request.hasPrivateSlbSpecification()) {
    query["PrivateSlbSpecification"] = request.getPrivateSlbSpecification();
  }

  if (!!request.hasPubNetworkFlow()) {
    query["PubNetworkFlow"] = request.getPubNetworkFlow();
  }

  if (!!request.hasPubSlbSpecification()) {
    query["PubSlbSpecification"] = request.getPubSlbSpecification();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityGroupType()) {
    query["SecurityGroupType"] = request.getSecurityGroupType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Create an MSE registration and configuration center instance
 *
 * @description Please ensure that you fully understand the billing method and pricing of the MSE (Microservice Engine) product before using this interface.
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a namespace in a Nacos instance.
 *
 * @param request CreateEngineNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEngineNamespaceResponse
 */
CreateEngineNamespaceResponse Client::createEngineNamespaceWithOptions(const CreateEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasServiceCount()) {
    query["ServiceCount"] = request.getServiceCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEngineNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEngineNamespaceResponse>();
}

/**
 * @summary Creates a namespace in a Nacos instance.
 *
 * @param request CreateEngineNamespaceRequest
 * @return CreateEngineNamespaceResponse
 */
CreateEngineNamespaceResponse Client::createEngineNamespace(const CreateEngineNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEngineNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a throttling rule.
 *
 * @param request CreateFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowRuleResponse
 */
CreateFlowRuleResponse Client::createFlowRuleWithOptions(const CreateFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasControlBehavior()) {
    query["ControlBehavior"] = request.getControlBehavior();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasLimitApp()) {
    query["LimitApp"] = request.getLimitApp();
  }

  if (!!request.hasMaxQueueingTimeMs()) {
    query["MaxQueueingTimeMs"] = request.getMaxQueueingTimeMs();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowRuleResponse>();
}

/**
 * @summary Creates a throttling rule.
 *
 * @param request CreateFlowRuleRequest
 * @return CreateFlowRuleResponse
 */
CreateFlowRuleResponse Client::createFlowRule(const CreateFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 创建网关路由熔断规则
 *
 * @param request CreateGatewayCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayCircuitBreakerRuleResponse
 */
CreateGatewayCircuitBreakerRuleResponse Client::createGatewayCircuitBreakerRuleWithOptions(const CreateGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasMaxAllowedMs()) {
    query["MaxAllowedMs"] = request.getMaxAllowedMs();
  }

  if (!!request.hasMinRequestAmount()) {
    query["MinRequestAmount"] = request.getMinRequestAmount();
  }

  if (!!request.hasRecoveryTimeoutSec()) {
    query["RecoveryTimeoutSec"] = request.getRecoveryTimeoutSec();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasStatDurationSec()) {
    query["StatDurationSec"] = request.getStatDurationSec();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasTriggerRatio()) {
    query["TriggerRatio"] = request.getTriggerRatio();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayCircuitBreakerRuleResponse>();
}

/**
 * @summary 创建网关路由熔断规则
 *
 * @param request CreateGatewayCircuitBreakerRuleRequest
 * @return CreateGatewayCircuitBreakerRuleResponse
 */
CreateGatewayCircuitBreakerRuleResponse Client::createGatewayCircuitBreakerRule(const CreateGatewayCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a throttling rule for a gateway.
 *
 * @param request CreateGatewayFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayFlowRuleResponse
 */
CreateGatewayFlowRuleResponse Client::createGatewayFlowRuleWithOptions(const CreateGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayFlowRuleResponse>();
}

/**
 * @summary Creates a throttling rule for a gateway.
 *
 * @param request CreateGatewayFlowRuleRequest
 * @return CreateGatewayFlowRuleResponse
 */
CreateGatewayFlowRuleResponse Client::createGatewayFlowRule(const CreateGatewayFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewayFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 创建网关路由隔离规则
 *
 * @param request CreateGatewayIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayIsolationRuleResponse
 */
CreateGatewayIsolationRuleResponse Client::createGatewayIsolationRuleWithOptions(const CreateGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayIsolationRuleResponse>();
}

/**
 * @summary 创建网关路由隔离规则
 *
 * @param request CreateGatewayIsolationRuleRequest
 * @return CreateGatewayIsolationRuleResponse
 */
CreateGatewayIsolationRuleResponse Client::createGatewayIsolationRule(const CreateGatewayIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewayIsolationRuleWithOptions(request, runtime);
}

/**
 * @summary 创建隔离规则
 *
 * @param request CreateIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIsolationRuleResponse
 */
CreateIsolationRuleResponse Client::createIsolationRuleWithOptions(const CreateIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasLimitApp()) {
    query["LimitApp"] = request.getLimitApp();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIsolationRuleResponse>();
}

/**
 * @summary 创建隔离规则
 *
 * @param request CreateIsolationRuleRequest
 * @return CreateIsolationRuleResponse
 */
CreateIsolationRuleResponse Client::createIsolationRule(const CreateIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIsolationRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateMseServiceApplication is deprecated, please use mse::2019-05-31::CreateApplication instead.
 *
 * @summary Creates an application.
 *
 * @param request CreateMseServiceApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMseServiceApplicationResponse
 */
CreateMseServiceApplicationResponse Client::createMseServiceApplicationWithOptions(const CreateMseServiceApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSentinelEnable()) {
    query["SentinelEnable"] = request.getSentinelEnable();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSwitchEnable()) {
    query["SwitchEnable"] = request.getSwitchEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMseServiceApplication"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMseServiceApplicationResponse>();
}

/**
 * @deprecated OpenAPI CreateMseServiceApplication is deprecated, please use mse::2019-05-31::CreateApplication instead.
 *
 * @summary Creates an application.
 *
 * @param request CreateMseServiceApplicationRequest
 * @return CreateMseServiceApplicationResponse
 */
CreateMseServiceApplicationResponse Client::createMseServiceApplication(const CreateMseServiceApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMseServiceApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a Nacos configuration.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNacosConfigResponse
 */
CreateNacosConfigResponse Client::createNacosConfigWithOptions(const CreateNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBetaIps()) {
    query["BetaIps"] = request.getBetaIps();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNacosConfigResponse>();
}

/**
 * @summary Creates a Nacos configuration.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosConfigRequest
 * @return CreateNacosConfigResponse
 */
CreateNacosConfigResponse Client::createNacosConfig(const CreateNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNacosInstanceResponse
 */
CreateNacosInstanceResponse Client::createNacosInstanceWithOptions(const CreateNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEphemeral()) {
    query["Ephemeral"] = request.getEphemeral();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  json body = {};
  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateNacosInstance"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNacosInstanceResponse>();
}

/**
 * @summary Creates a Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosInstanceRequest
 * @return CreateNacosInstanceResponse
 */
CreateNacosInstanceResponse Client::createNacosInstance(const CreateNacosInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNacosInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建一个MCP Server
 *
 * @param request CreateNacosMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNacosMcpServerResponse
 */
CreateNacosMcpServerResponse Client::createNacosMcpServerWithOptions(const CreateNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEncryptToolSpec()) {
    query["EncryptToolSpec"] = request.getEncryptToolSpec();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasServerName()) {
    query["ServerName"] = request.getServerName();
  }

  json body = {};
  if (!!request.hasEndpointSpecification()) {
    body["EndpointSpecification"] = request.getEndpointSpecification();
  }

  if (!!request.hasServerSpecification()) {
    body["ServerSpecification"] = request.getServerSpecification();
  }

  if (!!request.hasToolSpecification()) {
    body["ToolSpecification"] = request.getToolSpecification();
  }

  if (!!request.hasYamlConfig()) {
    body["YamlConfig"] = request.getYamlConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateNacosMcpServer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNacosMcpServerResponse>();
}

/**
 * @summary 创建一个MCP Server
 *
 * @param request CreateNacosMcpServerRequest
 * @return CreateNacosMcpServerResponse
 */
CreateNacosMcpServerResponse Client::createNacosMcpServer(const CreateNacosMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNacosMcpServerWithOptions(request, runtime);
}

/**
 * @summary Creates a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNacosServiceResponse
 */
CreateNacosServiceResponse Client::createNacosServiceWithOptions(const CreateNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEphemeral()) {
    query["Ephemeral"] = request.getEphemeral();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasProtectThreshold()) {
    query["ProtectThreshold"] = request.getProtectThreshold();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNacosService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNacosServiceResponse>();
}

/**
 * @summary Creates a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request CreateNacosServiceRequest
 * @return CreateNacosServiceResponse
 */
CreateNacosServiceResponse Client::createNacosService(const CreateNacosServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNacosServiceWithOptions(request, runtime);
}

/**
 * @summary CreateNamespace
 *
 * @param tmpReq CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNamespaceShrinkRequest request = CreateNamespaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescribe()) {
    query["Describe"] = request.getDescribe();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary CreateNamespace
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a lane for end-to-end canary release.
 *
 * @param tmpReq CreateOrUpdateSwimmingLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateSwimmingLaneResponse
 */
CreateOrUpdateSwimmingLaneResponse Client::createOrUpdateSwimmingLaneWithOptions(const CreateOrUpdateSwimmingLaneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrUpdateSwimmingLaneShrinkRequest request = CreateOrUpdateSwimmingLaneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGatewaySwimmingLaneRouteJson()) {
    request.setGatewaySwimmingLaneRouteJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGatewaySwimmingLaneRouteJson(), "GatewaySwimmingLaneRouteJson", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEnableRules()) {
    query["EnableRules"] = request.getEnableRules();
  }

  if (!!request.hasEntryRule()) {
    query["EntryRule"] = request.getEntryRule();
  }

  if (!!request.hasGatewaySwimmingLaneRouteJsonShrink()) {
    query["GatewaySwimmingLaneRouteJson"] = request.getGatewaySwimmingLaneRouteJsonShrink();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPathIndependentPercentageEnable()) {
    query["PathIndependentPercentageEnable"] = request.getPathIndependentPercentageEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasEntryRules()) {
    body["EntryRules"] = request.getEntryRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrUpdateSwimmingLane"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateSwimmingLaneResponse>();
}

/**
 * @summary Creates or updates a lane for end-to-end canary release.
 *
 * @param request CreateOrUpdateSwimmingLaneRequest
 * @return CreateOrUpdateSwimmingLaneResponse
 */
CreateOrUpdateSwimmingLaneResponse Client::createOrUpdateSwimmingLane(const CreateOrUpdateSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateSwimmingLaneWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a lane group for end-to-end canary release.
 *
 * @param tmpReq CreateOrUpdateSwimmingLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateSwimmingLaneGroupResponse
 */
CreateOrUpdateSwimmingLaneGroupResponse Client::createOrUpdateSwimmingLaneGroupWithOptions(const CreateOrUpdateSwimmingLaneGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrUpdateSwimmingLaneGroupShrinkRequest request = CreateOrUpdateSwimmingLaneGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPaths()) {
    request.setPathsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPaths(), "Paths", "json"));
  }

  if (!!tmpReq.hasRouteIds()) {
    request.setRouteIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRouteIds(), "RouteIds", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasCanaryModel()) {
    query["CanaryModel"] = request.getCanaryModel();
  }

  if (!!request.hasDbGrayEnable()) {
    query["DbGrayEnable"] = request.getDbGrayEnable();
  }

  if (!!request.hasEntryApp()) {
    query["EntryApp"] = request.getEntryApp();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMessageQueueFilterSide()) {
    query["MessageQueueFilterSide"] = request.getMessageQueueFilterSide();
  }

  if (!!request.hasMessageQueueGrayEnable()) {
    query["MessageQueueGrayEnable"] = request.getMessageQueueGrayEnable();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPathsShrink()) {
    query["Paths"] = request.getPathsShrink();
  }

  if (!!request.hasRecordCanaryDetail()) {
    query["RecordCanaryDetail"] = request.getRecordCanaryDetail();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRouteIdsShrink()) {
    query["RouteIds"] = request.getRouteIdsShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSwimVersion()) {
    query["SwimVersion"] = request.getSwimVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateSwimmingLaneGroup"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateSwimmingLaneGroupResponse>();
}

/**
 * @summary Creates or updates a lane group for end-to-end canary release.
 *
 * @param request CreateOrUpdateSwimmingLaneGroupRequest
 * @return CreateOrUpdateSwimmingLaneGroupResponse
 */
CreateOrUpdateSwimmingLaneGroupResponse Client::createOrUpdateSwimmingLaneGroup(const CreateOrUpdateSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateSwimmingLaneGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a plug-in configuration.
 *
 * @param tmpReq CreatePluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePluginConfigResponse
 */
CreatePluginConfigResponse Client::createPluginConfigWithOptions(const CreatePluginConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePluginConfigShrinkRequest request = CreatePluginConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIdList()) {
    request.setResourceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIdList(), "ResourceIdList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConfigLevel()) {
    query["ConfigLevel"] = request.getConfigLevel();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasResourceIdListShrink()) {
    query["ResourceIdList"] = request.getResourceIdListShrink();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePluginConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePluginConfigResponse>();
}

/**
 * @summary Creates a plug-in configuration.
 *
 * @param request CreatePluginConfigRequest
 * @return CreatePluginConfigResponse
 */
CreatePluginConfigResponse Client::createPluginConfig(const CreatePluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPluginConfigWithOptions(request, runtime);
}

/**
 * @summary 创建行为管理
 *
 * @param request CreateSentinelBlockFallbackDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSentinelBlockFallbackDefinitionResponse
 */
CreateSentinelBlockFallbackDefinitionResponse Client::createSentinelBlockFallbackDefinitionWithOptions(const CreateSentinelBlockFallbackDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasFallbackBehavior()) {
    query["FallbackBehavior"] = request.getFallbackBehavior();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceClassification()) {
    query["ResourceClassification"] = request.getResourceClassification();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.getScenario();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSentinelBlockFallbackDefinition"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSentinelBlockFallbackDefinitionResponse>();
}

/**
 * @summary 创建行为管理
 *
 * @param request CreateSentinelBlockFallbackDefinitionRequest
 * @return CreateSentinelBlockFallbackDefinitionResponse
 */
CreateSentinelBlockFallbackDefinitionResponse Client::createSentinelBlockFallbackDefinition(const CreateSentinelBlockFallbackDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSentinelBlockFallbackDefinitionWithOptions(request, runtime);
}

/**
 * @summary 创建热点参数防护规则（HTTP 请求）
 *
 * @param request CreateWebFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebFlowRuleResponse
 */
CreateWebFlowRuleResponse Client::createWebFlowRuleWithOptions(const CreateWebFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBurst()) {
    query["Burst"] = request.getBurst();
  }

  if (!!request.hasControlBehavior()) {
    query["ControlBehavior"] = request.getControlBehavior();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasMaxQueueingTimeMs()) {
    query["MaxQueueingTimeMs"] = request.getMaxQueueingTimeMs();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasParamItem()) {
    query["ParamItem"] = request.getParamItem();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceMode()) {
    query["ResourceMode"] = request.getResourceMode();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStatIntervalMs()) {
    query["StatIntervalMs"] = request.getStatIntervalMs();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebFlowRuleResponse>();
}

/**
 * @summary 创建热点参数防护规则（HTTP 请求）
 *
 * @param request CreateWebFlowRuleRequest
 * @return CreateWebFlowRuleResponse
 */
CreateWebFlowRuleResponse Client::createWebFlowRule(const CreateWebFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebFlowRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a znode.
 *
 * @param request CreateZnodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateZnodeResponse
 */
CreateZnodeResponse Client::createZnodeWithOptions(const CreateZnodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateZnode"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateZnodeResponse>();
}

/**
 * @summary Creates a znode.
 *
 * @param request CreateZnodeRequest
 * @return CreateZnodeResponse
 */
CreateZnodeResponse Client::createZnode(const CreateZnodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createZnodeWithOptions(request, runtime);
}

/**
 * @summary Deletes an authorized resource.
 *
 * @param request DeleteAuthResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuthResourceResponse
 */
DeleteAuthResourceResponse Client::deleteAuthResourceWithOptions(const DeleteAuthResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAuthResource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuthResourceResponse>();
}

/**
 * @summary Deletes an authorized resource.
 *
 * @param request DeleteAuthResourceRequest
 * @return DeleteAuthResourceResponse
 */
DeleteAuthResourceResponse Client::deleteAuthResource(const DeleteAuthResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuthResourceWithOptions(request, runtime);
}

/**
 * @summary 删除黑白名单
 *
 * @param request DeleteBlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBlackWhiteListResponse
 */
DeleteBlackWhiteListResponse Client::deleteBlackWhiteListWithOptions(const DeleteBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBlackWhiteList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBlackWhiteListResponse>();
}

/**
 * @summary 删除黑白名单
 *
 * @param request DeleteBlackWhiteListRequest
 * @return DeleteBlackWhiteListResponse
 */
DeleteBlackWhiteListResponse Client::deleteBlackWhiteList(const DeleteBlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary Deletes circuit breaking rules.
 *
 * @param tmpReq DeleteCircuitBreakerRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCircuitBreakerRulesResponse
 */
DeleteCircuitBreakerRulesResponse Client::deleteCircuitBreakerRulesWithOptions(const DeleteCircuitBreakerRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteCircuitBreakerRulesShrinkRequest request = DeleteCircuitBreakerRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCircuitBreakerRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCircuitBreakerRulesResponse>();
}

/**
 * @summary Deletes circuit breaking rules.
 *
 * @param request DeleteCircuitBreakerRulesRequest
 * @return DeleteCircuitBreakerRulesResponse
 */
DeleteCircuitBreakerRulesResponse Client::deleteCircuitBreakerRules(const DeleteCircuitBreakerRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCircuitBreakerRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a Microservices Engine (MSE) instance.
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary Deletes a Microservices Engine (MSE) instance.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace from a Nacos instance.
 *
 * @param request DeleteEngineNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEngineNamespaceResponse
 */
DeleteEngineNamespaceResponse Client::deleteEngineNamespaceWithOptions(const DeleteEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEngineNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEngineNamespaceResponse>();
}

/**
 * @summary Deletes a namespace from a Nacos instance.
 *
 * @param request DeleteEngineNamespaceRequest
 * @return DeleteEngineNamespaceResponse
 */
DeleteEngineNamespaceResponse Client::deleteEngineNamespace(const DeleteEngineNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEngineNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes throttling rules.
 *
 * @param tmpReq DeleteFlowRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowRulesResponse
 */
DeleteFlowRulesResponse Client::deleteFlowRulesWithOptions(const DeleteFlowRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteFlowRulesShrinkRequest request = DeleteFlowRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowRulesResponse>();
}

/**
 * @summary Deletes throttling rules.
 *
 * @param request DeleteFlowRulesRequest
 * @return DeleteFlowRulesResponse
 */
DeleteFlowRulesResponse Client::deleteFlowRules(const DeleteFlowRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a gateway.
 *
 * @param request DeleteGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGatewayWithOptions(const DeleteGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDeleteSlb()) {
    query["DeleteSlb"] = request.getDeleteSlb();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGateway"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayResponse>();
}

/**
 * @summary Deletes a gateway.
 *
 * @param request DeleteGatewayRequest
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const DeleteGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayWithOptions(request, runtime);
}

/**
 * @summary 删除网关认证
 *
 * @param request DeleteGatewayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayAuthResponse
 */
DeleteGatewayAuthResponse Client::deleteGatewayAuthWithOptions(const DeleteGatewayAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayAuthResponse>();
}

/**
 * @summary 删除网关认证
 *
 * @param request DeleteGatewayAuthRequest
 * @return DeleteGatewayAuthResponse
 */
DeleteGatewayAuthResponse Client::deleteGatewayAuth(const DeleteGatewayAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayAuthWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer on which a gateway performs authentication operations.
 *
 * @param request DeleteGatewayAuthConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayAuthConsumerResponse
 */
DeleteGatewayAuthConsumerResponse Client::deleteGatewayAuthConsumerWithOptions(const DeleteGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayAuthConsumer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayAuthConsumerResponse>();
}

/**
 * @summary Deletes a consumer on which a gateway performs authentication operations.
 *
 * @param request DeleteGatewayAuthConsumerRequest
 * @return DeleteGatewayAuthConsumerResponse
 */
DeleteGatewayAuthConsumerResponse Client::deleteGatewayAuthConsumer(const DeleteGatewayAuthConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayAuthConsumerWithOptions(request, runtime);
}

/**
 * @summary Deletes resource permissions from the consumer on which a gateway performs authentication operations.
 *
 * @param request DeleteGatewayAuthConsumerResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayAuthConsumerResourceResponse
 */
DeleteGatewayAuthConsumerResourceResponse Client::deleteGatewayAuthConsumerResourceWithOptions(const DeleteGatewayAuthConsumerResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIdList()) {
    query["IdList"] = request.getIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayAuthConsumerResource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayAuthConsumerResourceResponse>();
}

/**
 * @summary Deletes resource permissions from the consumer on which a gateway performs authentication operations.
 *
 * @param request DeleteGatewayAuthConsumerResourceRequest
 * @return DeleteGatewayAuthConsumerResourceResponse
 */
DeleteGatewayAuthConsumerResourceResponse Client::deleteGatewayAuthConsumerResource(const DeleteGatewayAuthConsumerResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayAuthConsumerResourceWithOptions(request, runtime);
}

/**
 * @summary 删除网关路由熔断规则
 *
 * @param request DeleteGatewayCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayCircuitBreakerRuleResponse
 */
DeleteGatewayCircuitBreakerRuleResponse Client::deleteGatewayCircuitBreakerRuleWithOptions(const DeleteGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayCircuitBreakerRuleResponse>();
}

/**
 * @summary 删除网关路由熔断规则
 *
 * @param request DeleteGatewayCircuitBreakerRuleRequest
 * @return DeleteGatewayCircuitBreakerRuleResponse
 */
DeleteGatewayCircuitBreakerRuleResponse Client::deleteGatewayCircuitBreakerRule(const DeleteGatewayCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary Disassociates a domain name from a gateway.
 *
 * @param request DeleteGatewayDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayDomainResponse
 */
DeleteGatewayDomainResponse Client::deleteGatewayDomainWithOptions(const DeleteGatewayDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayDomain"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayDomainResponse>();
}

/**
 * @summary Disassociates a domain name from a gateway.
 *
 * @param request DeleteGatewayDomainRequest
 * @return DeleteGatewayDomainResponse
 */
DeleteGatewayDomainResponse Client::deleteGatewayDomain(const DeleteGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayDomainWithOptions(request, runtime);
}

/**
 * @summary 删除网关路由流控规则
 *
 * @param request DeleteGatewayFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayFlowRuleResponse
 */
DeleteGatewayFlowRuleResponse Client::deleteGatewayFlowRuleWithOptions(const DeleteGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayFlowRuleResponse>();
}

/**
 * @summary 删除网关路由流控规则
 *
 * @param request DeleteGatewayFlowRuleRequest
 * @return DeleteGatewayFlowRuleResponse
 */
DeleteGatewayFlowRuleResponse Client::deleteGatewayFlowRule(const DeleteGatewayFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 删除网关路由隔离规则
 *
 * @param request DeleteGatewayIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayIsolationRuleResponse
 */
DeleteGatewayIsolationRuleResponse Client::deleteGatewayIsolationRuleWithOptions(const DeleteGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayIsolationRuleResponse>();
}

/**
 * @summary 删除网关路由隔离规则
 *
 * @param request DeleteGatewayIsolationRuleRequest
 * @return DeleteGatewayIsolationRuleResponse
 */
DeleteGatewayIsolationRuleResponse Client::deleteGatewayIsolationRule(const DeleteGatewayIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayIsolationRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a route from a gateway.
 *
 * @param request DeleteGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayRouteResponse
 */
DeleteGatewayRouteResponse Client::deleteGatewayRouteWithOptions(const DeleteGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayRouteResponse>();
}

/**
 * @summary Deletes a route from a gateway.
 *
 * @param request DeleteGatewayRouteRequest
 * @return DeleteGatewayRouteResponse
 */
DeleteGatewayRouteResponse Client::deleteGatewayRoute(const DeleteGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a service from a gateway.
 *
 * @param request DeleteGatewayServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayServiceResponse
 */
DeleteGatewayServiceResponse Client::deleteGatewayServiceWithOptions(const DeleteGatewayServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayServiceResponse>();
}

/**
 * @summary Deletes a service from a gateway.
 *
 * @param request DeleteGatewayServiceRequest
 * @return DeleteGatewayServiceResponse
 */
DeleteGatewayServiceResponse Client::deleteGatewayService(const DeleteGatewayServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a service version from a gateway.
 *
 * @param request DeleteGatewayServiceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayServiceVersionResponse
 */
DeleteGatewayServiceVersionResponse Client::deleteGatewayServiceVersionWithOptions(const DeleteGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayServiceVersion"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayServiceVersionResponse>();
}

/**
 * @summary Deletes a service version from a gateway.
 *
 * @param request DeleteGatewayServiceVersionRequest
 * @return DeleteGatewayServiceVersionResponse
 */
DeleteGatewayServiceVersionResponse Client::deleteGatewayServiceVersion(const DeleteGatewayServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayServiceVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes the Server Load Balancer (SLB) instance that is associated with a gateway.
 *
 * @param request DeleteGatewaySlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewaySlbResponse
 */
DeleteGatewaySlbResponse Client::deleteGatewaySlbWithOptions(const DeleteGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDeleteSlb()) {
    query["DeleteSlb"] = request.getDeleteSlb();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.getSlbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewaySlb"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewaySlbResponse>();
}

/**
 * @summary Deletes the Server Load Balancer (SLB) instance that is associated with a gateway.
 *
 * @param request DeleteGatewaySlbRequest
 * @return DeleteGatewaySlbResponse
 */
DeleteGatewaySlbResponse Client::deleteGatewaySlb(const DeleteGatewaySlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewaySlbWithOptions(request, runtime);
}

/**
 * @summary 删除隔离规则
 *
 * @param tmpReq DeleteIsolationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIsolationRulesResponse
 */
DeleteIsolationRulesResponse Client::deleteIsolationRulesWithOptions(const DeleteIsolationRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteIsolationRulesShrinkRequest request = DeleteIsolationRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIsolationRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIsolationRulesResponse>();
}

/**
 * @summary 删除隔离规则
 *
 * @param request DeleteIsolationRulesRequest
 * @return DeleteIsolationRulesResponse
 */
DeleteIsolationRulesResponse Client::deleteIsolationRules(const DeleteIsolationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIsolationRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a migration task.
 *
 * @param request DeleteMigrationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMigrationTaskResponse
 */
DeleteMigrationTaskResponse Client::deleteMigrationTaskWithOptions(const DeleteMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMigrationTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMigrationTaskResponse>();
}

/**
 * @summary Deletes a migration task.
 *
 * @param request DeleteMigrationTaskRequest
 * @return DeleteMigrationTaskResponse
 */
DeleteMigrationTaskResponse Client::deleteMigrationTask(const DeleteMigrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMigrationTaskWithOptions(request, runtime);
}

/**
 * @summary Delete specified Nacos configuration
 *
 * @description > The current OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNacosConfigResponse
 */
DeleteNacosConfigResponse Client::deleteNacosConfigWithOptions(const DeleteNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBeta()) {
    query["Beta"] = request.getBeta();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNacosConfigResponse>();
}

/**
 * @summary Delete specified Nacos configuration
 *
 * @description > The current OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosConfigRequest
 * @return DeleteNacosConfigResponse
 */
DeleteNacosConfigResponse Client::deleteNacosConfig(const DeleteNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple Nacos configurations at a time.
 *
 * @description >  The current API operation is not provided in Nacos SDK. For more information about the Nacos-SDK API, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNacosConfigsResponse
 */
DeleteNacosConfigsResponse Client::deleteNacosConfigsWithOptions(const DeleteNacosConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNacosConfigs"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNacosConfigsResponse>();
}

/**
 * @summary Deletes multiple Nacos configurations at a time.
 *
 * @description >  The current API operation is not provided in Nacos SDK. For more information about the Nacos-SDK API, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosConfigsRequest
 * @return DeleteNacosConfigsResponse
 */
DeleteNacosConfigsResponse Client::deleteNacosConfigs(const DeleteNacosConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNacosConfigsWithOptions(request, runtime);
}

/**
 * @summary Deletes a persistent application instance from a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNacosInstanceResponse
 */
DeleteNacosInstanceResponse Client::deleteNacosInstanceWithOptions(const DeleteNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasEphemeral()) {
    query["Ephemeral"] = request.getEphemeral();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNacosInstance"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNacosInstanceResponse>();
}

/**
 * @summary Deletes a persistent application instance from a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosInstanceRequest
 * @return DeleteNacosInstanceResponse
 */
DeleteNacosInstanceResponse Client::deleteNacosInstance(const DeleteNacosInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNacosInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除一个MCP Server
 *
 * @param request DeleteNacosMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNacosMcpServerResponse
 */
DeleteNacosMcpServerResponse Client::deleteNacosMcpServerWithOptions(const DeleteNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMcpServerId()) {
    query["McpServerId"] = request.getMcpServerId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNacosMcpServer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNacosMcpServerResponse>();
}

/**
 * @summary 删除一个MCP Server
 *
 * @param request DeleteNacosMcpServerRequest
 * @return DeleteNacosMcpServerResponse
 */
DeleteNacosMcpServerResponse Client::deleteNacosMcpServer(const DeleteNacosMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNacosMcpServerWithOptions(request, runtime);
}

/**
 * @summary Deletes a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNacosServiceResponse
 */
DeleteNacosServiceResponse Client::deleteNacosServiceWithOptions(const DeleteNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNacosService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNacosServiceResponse>();
}

/**
 * @summary Deletes a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request DeleteNacosServiceRequest
 * @return DeleteNacosServiceResponse
 */
DeleteNacosServiceResponse Client::deleteNacosService(const DeleteNacosServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNacosServiceWithOptions(request, runtime);
}

/**
 * @summary 删除MSE命名空间
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary 删除MSE命名空间
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a plug-in configuration.
 *
 * @param request DeletePluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePluginConfigResponse
 */
DeletePluginConfigResponse Client::deletePluginConfigWithOptions(const DeletePluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPluginConfigId()) {
    query["PluginConfigId"] = request.getPluginConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePluginConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePluginConfigResponse>();
}

/**
 * @summary Deletes a plug-in configuration.
 *
 * @param request DeletePluginConfigRequest
 * @return DeletePluginConfigResponse
 */
DeletePluginConfigResponse Client::deletePluginConfig(const DeletePluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePluginConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a security group rule from a gateway.
 *
 * @param request DeleteSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityGroupRuleResponse
 */
DeleteSecurityGroupRuleResponse Client::deleteSecurityGroupRuleWithOptions(const DeleteSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCascadingDelete()) {
    query["CascadingDelete"] = request.getCascadingDelete();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityGroupRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityGroupRuleResponse>();
}

/**
 * @summary Deletes a security group rule from a gateway.
 *
 * @param request DeleteSecurityGroupRuleRequest
 * @return DeleteSecurityGroupRuleResponse
 */
DeleteSecurityGroupRuleResponse Client::deleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a gateway service source.
 *
 * @param request DeleteServiceSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceSourceResponse
 */
DeleteServiceSourceResponse Client::deleteServiceSourceWithOptions(const DeleteServiceSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceSourceResponse>();
}

/**
 * @summary Deletes a gateway service source.
 *
 * @param request DeleteServiceSourceRequest
 * @return DeleteServiceSourceResponse
 */
DeleteServiceSourceResponse Client::deleteServiceSource(const DeleteServiceSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimmingLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimmingLaneResponse
 */
DeleteSwimmingLaneResponse Client::deleteSwimmingLaneWithOptions(const DeleteSwimmingLaneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.getLaneId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSwimmingLane"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimmingLaneResponse>();
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimmingLaneRequest
 * @return DeleteSwimmingLaneResponse
 */
DeleteSwimmingLaneResponse Client::deleteSwimmingLane(const DeleteSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSwimmingLaneWithOptions(request, runtime);
}

/**
 * @summary Deletes a lane group.
 *
 * @param request DeleteSwimmingLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimmingLaneGroupResponse
 */
DeleteSwimmingLaneGroupResponse Client::deleteSwimmingLaneGroupWithOptions(const DeleteSwimmingLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSwimmingLaneGroup"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimmingLaneGroupResponse>();
}

/**
 * @summary Deletes a lane group.
 *
 * @param request DeleteSwimmingLaneGroupRequest
 * @return DeleteSwimmingLaneGroupResponse
 */
DeleteSwimmingLaneGroupResponse Client::deleteSwimmingLaneGroup(const DeleteSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSwimmingLaneGroupWithOptions(request, runtime);
}

/**
 * @summary 删除热点参数防护规则（HTTP 请求）
 *
 * @param request DeleteWebFlowRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebFlowRulesResponse
 */
DeleteWebFlowRulesResponse Client::deleteWebFlowRulesWithOptions(const DeleteWebFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebFlowRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebFlowRulesResponse>();
}

/**
 * @summary 删除热点参数防护规则（HTTP 请求）
 *
 * @param request DeleteWebFlowRulesRequest
 * @return DeleteWebFlowRulesResponse
 */
DeleteWebFlowRulesResponse Client::deleteWebFlowRules(const DeleteWebFlowRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebFlowRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a ZooKeeper node.
 *
 * @param request DeleteZnodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteZnodeResponse
 */
DeleteZnodeResponse Client::deleteZnodeWithOptions(const DeleteZnodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteZnode"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteZnodeResponse>();
}

/**
 * @summary Deletes a ZooKeeper node.
 *
 * @param request DeleteZnodeRequest
 * @return DeleteZnodeResponse
 */
DeleteZnodeResponse Client::deleteZnode(const DeleteZnodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteZnodeWithOptions(request, runtime);
}

/**
 * @summary Enables HTTP/2 for negotiation between the server and client. The modification takes effect in one to two minutes.
 *
 * @param request EnableHttp2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHttp2Response
 */
EnableHttp2Response Client::enableHttp2WithOptions(const EnableHttp2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEnableHttp2()) {
    query["EnableHttp2"] = request.getEnableHttp2();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHttp2"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHttp2Response>();
}

/**
 * @summary Enables HTTP/2 for negotiation between the server and client. The modification takes effect in one to two minutes.
 *
 * @param request EnableHttp2Request
 * @return EnableHttp2Response
 */
EnableHttp2Response Client::enableHttp2(const EnableHttp2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHttp2WithOptions(request, runtime);
}

/**
 * @summary Enables the proxy protocol. When an NLB instance is used as an ingress, you cannot obtain the real IP address of the client if you do not enable the proxy protocol. After you enable the proxy protocol, non-proxy requests are not adversely affected.
 *
 * @param request EnableProxyProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableProxyProtocolResponse
 */
EnableProxyProtocolResponse Client::enableProxyProtocolWithOptions(const EnableProxyProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEnableProxyProtocol()) {
    query["EnableProxyProtocol"] = request.getEnableProxyProtocol();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableProxyProtocol"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableProxyProtocolResponse>();
}

/**
 * @summary Enables the proxy protocol. When an NLB instance is used as an ingress, you cannot obtain the real IP address of the client if you do not enable the proxy protocol. After you enable the proxy protocol, non-proxy requests are not adversely affected.
 *
 * @param request EnableProxyProtocolRequest
 * @return EnableProxyProtocolResponse
 */
EnableProxyProtocolResponse Client::enableProxyProtocol(const EnableProxyProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableProxyProtocolWithOptions(request, runtime);
}

/**
 * @summary Exports specified Nacos configurations.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ExportNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportNacosConfigResponse
 */
ExportNacosConfigResponse Client::exportNacosConfigWithOptions(const ExportNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasDataIds()) {
    query["DataIds"] = request.getDataIds();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportNacosConfigResponse>();
}

/**
 * @summary Exports specified Nacos configurations.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ExportNacosConfigRequest
 * @return ExportNacosConfigResponse
 */
ExportNacosConfigResponse Client::exportNacosConfig(const ExportNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Initiates a task to export ZooKeeper data.
 *
 * @description Only one task can run at a time.
 *
 * @param request ExportZookeeperDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportZookeeperDataResponse
 */
ExportZookeeperDataResponse Client::exportZookeeperDataWithOptions(const ExportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasExportType()) {
    query["ExportType"] = request.getExportType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportZookeeperData"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportZookeeperDataResponse>();
}

/**
 * @summary Initiates a task to export ZooKeeper data.
 *
 * @description Only one task can run at a time.
 *
 * @param request ExportZookeeperDataRequest
 * @return ExportZookeeperDataResponse
 */
ExportZookeeperDataResponse Client::exportZookeeperData(const ExportZookeeperDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportZookeeperDataWithOptions(request, runtime);
}

/**
 * @summary Obtains the rules for graceful start and shutdown.
 *
 * @description You can call this operation to query the rules for graceful start and shutdown.
 *
 * @param request FetchLosslessRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchLosslessRuleListResponse
 */
FetchLosslessRuleListResponse Client::fetchLosslessRuleListWithOptions(const FetchLosslessRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FetchLosslessRuleList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchLosslessRuleListResponse>();
}

/**
 * @summary Obtains the rules for graceful start and shutdown.
 *
 * @description You can call this operation to query the rules for graceful start and shutdown.
 *
 * @param request FetchLosslessRuleListRequest
 * @return FetchLosslessRuleListResponse
 */
FetchLosslessRuleListResponse Client::fetchLosslessRuleList(const FetchLosslessRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchLosslessRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of blacklists and whitelists of a gateway.
 *
 * @param tmpReq GatewayBlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GatewayBlackWhiteListResponse
 */
GatewayBlackWhiteListResponse Client::gatewayBlackWhiteListWithOptions(const GatewayBlackWhiteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GatewayBlackWhiteListShrinkRequest request = GatewayBlackWhiteListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParams()) {
    request.setFilterParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParams(), "FilterParams", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescSort()) {
    query["DescSort"] = request.getDescSort();
  }

  if (!!request.hasFilterParamsShrink()) {
    query["FilterParams"] = request.getFilterParamsShrink();
  }

  if (!!request.hasOrderItem()) {
    query["OrderItem"] = request.getOrderItem();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GatewayBlackWhiteList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GatewayBlackWhiteListResponse>();
}

/**
 * @summary Queries a list of blacklists and whitelists of a gateway.
 *
 * @param request GatewayBlackWhiteListRequest
 * @return GatewayBlackWhiteListResponse
 */
GatewayBlackWhiteListResponse Client::gatewayBlackWhiteList(const GatewayBlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return gatewayBlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary Queries information about canary release for messaging of an application.
 *
 * @param request GetAppMessageQueueRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppMessageQueueRouteResponse
 */
GetAppMessageQueueRouteResponse Client::getAppMessageQueueRouteWithOptions(const GetAppMessageQueueRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppMessageQueueRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppMessageQueueRouteResponse>();
}

/**
 * @summary Queries information about canary release for messaging of an application.
 *
 * @param request GetAppMessageQueueRouteRequest
 * @return GetAppMessageQueueRouteResponse
 */
GetAppMessageQueueRouteResponse Client::getAppMessageQueueRoute(const GetAppMessageQueueRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppMessageQueueRouteWithOptions(request, runtime);
}

/**
 * @summary Queries the list of microservice application instances.
 *
 * @param request GetApplicationInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationInstanceListResponse
 */
GetApplicationInstanceListResponse Client::getApplicationInstanceListWithOptions(const GetApplicationInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationInstanceList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationInstanceListResponse>();
}

/**
 * @summary Queries the list of microservice application instances.
 *
 * @param request GetApplicationInstanceListRequest
 * @return GetApplicationInstanceListResponse
 */
GetApplicationInstanceListResponse Client::getApplicationInstanceList(const GetApplicationInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationInstanceListWithOptions(request, runtime);
}

/**
 * @summary Obtains the list of applications.
 *
 * @param tmpReq GetApplicationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationListResponse
 */
GetApplicationListResponse Client::getApplicationListWithOptions(const GetApplicationListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetApplicationListShrinkRequest request = GetApplicationListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSentinelEnable()) {
    query["SentinelEnable"] = request.getSentinelEnable();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSwitchEnable()) {
    query["SwitchEnable"] = request.getSwitchEnable();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationListResponse>();
}

/**
 * @summary Obtains the list of applications.
 *
 * @param request GetApplicationListRequest
 * @return GetApplicationListResponse
 */
GetApplicationListResponse Client::getApplicationList(const GetApplicationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationListWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetBlackWhiteList is deprecated, please use mse::2019-05-31::GatewayBlackWhiteList instead.
 *
 * @summary Queries the blacklist or whitelist of a gateway.
 *
 * @param request GetBlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBlackWhiteListResponse
 */
GetBlackWhiteListResponse Client::getBlackWhiteListWithOptions(const GetBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIsWhite()) {
    query["IsWhite"] = request.getIsWhite();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBlackWhiteList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBlackWhiteListResponse>();
}

/**
 * @deprecated OpenAPI GetBlackWhiteList is deprecated, please use mse::2019-05-31::GatewayBlackWhiteList instead.
 *
 * @summary Queries the blacklist or whitelist of a gateway.
 *
 * @param request GetBlackWhiteListRequest
 * @return GetBlackWhiteListResponse
 */
GetBlackWhiteListResponse Client::getBlackWhiteList(const GetBlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary Queries the namespaces of a Nacos instance.
 *
 * @param request GetEngineNamepaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEngineNamepaceResponse
 */
GetEngineNamepaceResponse Client::getEngineNamepaceWithOptions(const GetEngineNamepaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEngineNamepace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEngineNamepaceResponse>();
}

/**
 * @summary Queries the namespaces of a Nacos instance.
 *
 * @param request GetEngineNamepaceRequest
 * @return GetEngineNamepaceResponse
 */
GetEngineNamepaceResponse Client::getEngineNamepace(const GetEngineNamepaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEngineNamepaceWithOptions(request, runtime);
}

/**
 * @summary Obtains the basic information about a gateway, such as the virtual private cloud (VPC) and vSwitch to which the gateway belongs.
 *
 * @param request GetGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayResponse
 */
GetGatewayResponse Client::getGatewayWithOptions(const GetGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGateway"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayResponse>();
}

/**
 * @summary Obtains the basic information about a gateway, such as the virtual private cloud (VPC) and vSwitch to which the gateway belongs.
 *
 * @param request GetGatewayRequest
 * @return GetGatewayResponse
 */
GetGatewayResponse Client::getGateway(const GetGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the consumer on which a gateway performs authentication operations.
 *
 * @param request GetGatewayAuthConsumerDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayAuthConsumerDetailResponse
 */
GetGatewayAuthConsumerDetailResponse Client::getGatewayAuthConsumerDetailWithOptions(const GetGatewayAuthConsumerDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayAuthConsumerDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayAuthConsumerDetailResponse>();
}

/**
 * @summary Queries the details of the consumer on which a gateway performs authentication operations.
 *
 * @param request GetGatewayAuthConsumerDetailRequest
 * @return GetGatewayAuthConsumerDetailResponse
 */
GetGatewayAuthConsumerDetailResponse Client::getGatewayAuthConsumerDetail(const GetGatewayAuthConsumerDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayAuthConsumerDetailWithOptions(request, runtime);
}

/**
 * @summary 查询网关认证详情
 *
 * @param request GetGatewayAuthDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayAuthDetailResponse
 */
GetGatewayAuthDetailResponse Client::getGatewayAuthDetailWithOptions(const GetGatewayAuthDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayAuthDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayAuthDetailResponse>();
}

/**
 * @summary 查询网关认证详情
 *
 * @param request GetGatewayAuthDetailRequest
 * @return GetGatewayAuthDetailResponse
 */
GetGatewayAuthDetailResponse Client::getGatewayAuthDetail(const GetGatewayAuthDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayAuthDetailWithOptions(request, runtime);
}

/**
 * @summary 获取网关全局配置
 *
 * @param request GetGatewayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayConfigResponse
 */
GetGatewayConfigResponse Client::getGatewayConfigWithOptions(const GetGatewayConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayConfigResponse>();
}

/**
 * @summary 获取网关全局配置
 *
 * @param request GetGatewayConfigRequest
 * @return GetGatewayConfigResponse
 */
GetGatewayConfigResponse Client::getGatewayConfig(const GetGatewayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a domain name associated with a gateway.
 *
 * @param request GetGatewayDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayDomainDetailResponse
 */
GetGatewayDomainDetailResponse Client::getGatewayDomainDetailWithOptions(const GetGatewayDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayDomainDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayDomainDetailResponse>();
}

/**
 * @summary Queries the details of a domain name associated with a gateway.
 *
 * @param request GetGatewayDomainDetailRequest
 * @return GetGatewayDomainDetailResponse
 */
GetGatewayDomainDetailResponse Client::getGatewayDomainDetail(const GetGatewayDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Obtains the global parameters of a gateway.
 *
 * @param request GetGatewayOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayOptionResponse
 */
GetGatewayOptionResponse Client::getGatewayOptionWithOptions(const GetGatewayOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayOption"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayOptionResponse>();
}

/**
 * @summary Obtains the global parameters of a gateway.
 *
 * @param request GetGatewayOptionRequest
 * @return GetGatewayOptionResponse
 */
GetGatewayOptionResponse Client::getGatewayOption(const GetGatewayOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayOptionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a route for a gateway.
 *
 * @param request GetGatewayRouteDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayRouteDetailResponse
 */
GetGatewayRouteDetailResponse Client::getGatewayRouteDetailWithOptions(const GetGatewayRouteDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayRouteDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayRouteDetailResponse>();
}

/**
 * @summary Queries the details of a route for a gateway.
 *
 * @param request GetGatewayRouteDetailRequest
 * @return GetGatewayRouteDetailResponse
 */
GetGatewayRouteDetailResponse Client::getGatewayRouteDetail(const GetGatewayRouteDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayRouteDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a service.
 *
 * @param request GetGatewayServiceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayServiceDetailResponse
 */
GetGatewayServiceDetailResponse Client::getGatewayServiceDetailWithOptions(const GetGatewayServiceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGatewayServiceDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayServiceDetailResponse>();
}

/**
 * @summary Queries the details of a service.
 *
 * @param request GetGatewayServiceDetailRequest
 * @return GetGatewayServiceDetailResponse
 */
GetGatewayServiceDetailResponse Client::getGatewayServiceDetail(const GetGatewayServiceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayServiceDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Container Service for Kubernetes (ACK) cluster for which Microservices Governance is enabled.
 *
 * @param request GetGovernanceKubernetesClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGovernanceKubernetesClusterResponse
 */
GetGovernanceKubernetesClusterResponse Client::getGovernanceKubernetesClusterWithOptions(const GetGovernanceKubernetesClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGovernanceKubernetesCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGovernanceKubernetesClusterResponse>();
}

/**
 * @summary Queries the information about a Container Service for Kubernetes (ACK) cluster for which Microservices Governance is enabled.
 *
 * @param request GetGovernanceKubernetesClusterRequest
 * @return GetGovernanceKubernetesClusterResponse
 */
GetGovernanceKubernetesClusterResponse Client::getGovernanceKubernetesCluster(const GetGovernanceKubernetesClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceKubernetesClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum version number to which the current version can be upgraded.
 *
 * @param request GetImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageResponse
 */
GetImageResponse Client::getImageWithOptions(const GetImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImage"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageResponse>();
}

/**
 * @summary Queries the maximum version number to which the current version can be upgraded.
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageWithOptions(request, runtime);
}

/**
 * @summary Obtains the URL that is used to upload a configuration file when you import the configuration file into a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).\\n
 *
 * @param request GetImportFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImportFileUrlResponse
 */
GetImportFileUrlResponse Client::getImportFileUrlWithOptions(const GetImportFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImportFileUrl"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImportFileUrlResponse>();
}

/**
 * @summary Obtains the URL that is used to upload a configuration file when you import the configuration file into a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).\\n
 *
 * @param request GetImportFileUrlRequest
 * @return GetImportFileUrlResponse
 */
GetImportFileUrlResponse Client::getImportFileUrl(const GetImportFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImportFileUrlWithOptions(request, runtime);
}

/**
 * @summary Obtains sources of all Container Service for Kubernetes (ACK) services in a gateway.
 *
 * @param request GetKubernetesSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKubernetesSourceResponse
 */
GetKubernetesSourceResponse Client::getKubernetesSourceWithOptions(const GetKubernetesSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIsAll()) {
    query["IsAll"] = request.getIsAll();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKubernetesSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKubernetesSourceResponse>();
}

/**
 * @summary Obtains sources of all Container Service for Kubernetes (ACK) services in a gateway.
 *
 * @param request GetKubernetesSourceRequest
 * @return GetKubernetesSourceResponse
 */
GetKubernetesSourceResponse Client::getKubernetesSource(const GetKubernetesSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKubernetesSourceWithOptions(request, runtime);
}

/**
 * @summary 获取同AZ路由规则
 *
 * @param request GetLocalityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLocalityRuleResponse
 */
GetLocalityRuleResponse Client::getLocalityRuleWithOptions(const GetLocalityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLocalityRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLocalityRuleResponse>();
}

/**
 * @summary 获取同AZ路由规则
 *
 * @param request GetLocalityRuleRequest
 * @return GetLocalityRuleResponse
 */
GetLocalityRuleResponse Client::getLocalityRule(const GetLocalityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLocalityRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the rules for graceful start and shutdown of an application.
 *
 * @description You can call this operation to query the rules for graceful start and shutdown of an application.
 * You can query the rules for graceful start and shutdown of an application preferentially by using the AppId parameter.
 * If the AppId parameter is left empty, you can use the RegionId, Namespace, and AppName parameters to query the rules for graceful start and shutdown of an application.
 *
 * @param request GetLosslessRuleByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLosslessRuleByAppResponse
 */
GetLosslessRuleByAppResponse Client::getLosslessRuleByAppWithOptions(const GetLosslessRuleByAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLosslessRuleByApp"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLosslessRuleByAppResponse>();
}

/**
 * @summary Queries the rules for graceful start and shutdown of an application.
 *
 * @description You can call this operation to query the rules for graceful start and shutdown of an application.
 * You can query the rules for graceful start and shutdown of an application preferentially by using the AppId parameter.
 * If the AppId parameter is left empty, you can use the RegionId, Namespace, and AppName parameters to query the rules for graceful start and shutdown of an application.
 *
 * @param request GetLosslessRuleByAppRequest
 * @return GetLosslessRuleByAppResponse
 */
GetLosslessRuleByAppResponse Client::getLosslessRuleByApp(const GetLosslessRuleByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLosslessRuleByAppWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the MSE feature switch.
 *
 * @param request GetMseFeatureSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMseFeatureSwitchResponse
 */
GetMseFeatureSwitchResponse Client::getMseFeatureSwitchWithOptions(const GetMseFeatureSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMseFeatureSwitch"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMseFeatureSwitchResponse>();
}

/**
 * @summary Queries the information about the MSE feature switch.
 *
 * @param request GetMseFeatureSwitchRequest
 * @return GetMseFeatureSwitchResponse
 */
GetMseFeatureSwitchResponse Client::getMseFeatureSwitch(const GetMseFeatureSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMseFeatureSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the existing Microservices Engine (MSE) Nacos instances that are service sources of a gateway.
 *
 * @param request GetMseSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMseSourceResponse
 */
GetMseSourceResponse Client::getMseSourceWithOptions(const GetMseSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMseSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMseSourceResponse>();
}

/**
 * @summary Queries the existing Microservices Engine (MSE) Nacos instances that are service sources of a gateway.
 *
 * @param request GetMseSourceRequest
 * @return GetMseSourceResponse
 */
GetMseSourceResponse Client::getMseSource(const GetMseSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMseSourceWithOptions(request, runtime);
}

/**
 * @summary Get Nacos Configuration
 *
 * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request GetNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNacosConfigResponse
 */
GetNacosConfigResponse Client::getNacosConfigWithOptions(const GetNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBeta()) {
    query["Beta"] = request.getBeta();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNacosConfigResponse>();
}

/**
 * @summary Get Nacos Configuration
 *
 * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request GetNacosConfigRequest
 * @return GetNacosConfigResponse
 */
GetNacosConfigResponse Client::getNacosConfig(const GetNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the historical details of Nacos configuration changes.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request GetNacosHistoryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNacosHistoryConfigResponse
 */
GetNacosHistoryConfigResponse Client::getNacosHistoryConfigWithOptions(const GetNacosHistoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasNid()) {
    query["Nid"] = request.getNid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNacosHistoryConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNacosHistoryConfigResponse>();
}

/**
 * @summary Queries the historical details of Nacos configuration changes.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request GetNacosHistoryConfigRequest
 * @return GetNacosHistoryConfigResponse
 */
GetNacosHistoryConfigResponse Client::getNacosHistoryConfig(const GetNacosHistoryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNacosHistoryConfigWithOptions(request, runtime);
}

/**
 * @summary 获取MCP Server的详情
 *
 * @param request GetNacosMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNacosMcpServerResponse
 */
GetNacosMcpServerResponse Client::getNacosMcpServerWithOptions(const GetNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMcpServerId()) {
    query["McpServerId"] = request.getMcpServerId();
  }

  if (!!request.hasMcpServerVersion()) {
    query["McpServerVersion"] = request.getMcpServerVersion();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNacosMcpServer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNacosMcpServerResponse>();
}

/**
 * @summary 获取MCP Server的详情
 *
 * @param request GetNacosMcpServerRequest
 * @return GetNacosMcpServerResponse
 */
GetNacosMcpServerResponse Client::getNacosMcpServer(const GetNacosMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNacosMcpServerWithOptions(request, runtime);
}

/**
 * @summary Queries information about service governance.
 *
 * @description You can call this operation to query overview information about service governance.
 *
 * @param request GetOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOverviewResponse
 */
GetOverviewResponse Client::getOverviewWithOptions(const GetOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOverview"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOverviewResponse>();
}

/**
 * @summary Queries information about service governance.
 *
 * @description You can call this operation to query overview information about service governance.
 *
 * @param request GetOverviewRequest
 * @return GetOverviewResponse
 */
GetOverviewResponse Client::getOverview(const GetOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOverviewWithOptions(request, runtime);
}

/**
 * @summary Obtains plug-in configurations.
 *
 * @param request GetPluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPluginConfigResponse
 */
GetPluginConfigResponse Client::getPluginConfigWithOptions(const GetPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPluginConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPluginConfigResponse>();
}

/**
 * @summary Obtains plug-in configurations.
 *
 * @param request GetPluginConfigRequest
 * @return GetPluginConfigResponse
 */
GetPluginConfigResponse Client::getPluginConfig(const GetPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPluginConfigWithOptions(request, runtime);
}

/**
 * @summary Obtains plug-ins.
 *
 * @param request GetPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPluginsResponse
 */
GetPluginsResponse Client::getPluginsWithOptions(const GetPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEnableOnly()) {
    query["EnableOnly"] = request.getEnableOnly();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPlugins"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPluginsResponse>();
}

/**
 * @summary Obtains plug-ins.
 *
 * @param request GetPluginsRequest
 * @return GetPluginsResponse
 */
GetPluginsResponse Client::getPlugins(const GetPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPluginsWithOptions(request, runtime);
}

/**
 * @summary Queries the services of an application.
 *
 * @param request GetServiceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceListResponse
 */
GetServiceListResponse Client::getServiceListWithOptions(const GetServiceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceListResponse>();
}

/**
 * @summary Queries the services of an application.
 *
 * @param request GetServiceListRequest
 * @return GetServiceListResponse
 */
GetServiceListResponse Client::getServiceList(const GetServiceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceListWithOptions(request, runtime);
}

/**
 * @summary Queries the version of a microservices application.
 *
 * @param request GetServiceListPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceListPageResponse
 */
GetServiceListPageResponse Client::getServiceListPageWithOptions(const GetServiceListPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceListPage"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceListPageResponse>();
}

/**
 * @summary Queries the version of a microservices application.
 *
 * @param request GetServiceListPageRequest
 * @return GetServiceListPageResponse
 */
GetServiceListPageResponse Client::getServiceListPage(const GetServiceListPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceListPageWithOptions(request, runtime);
}

/**
 * @summary Queries the list of listeners for the destination service.
 *
 * @param request GetServiceListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceListenersResponse
 */
GetServiceListenersResponse Client::getServiceListenersWithOptions(const GetServiceListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasHasIpCount()) {
    query["HasIpCount"] = request.getHasIpCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceListeners"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceListenersResponse>();
}

/**
 * @summary Queries the list of listeners for the destination service.
 *
 * @param request GetServiceListenersRequest
 * @return GetServiceListenersResponse
 */
GetServiceListenersResponse Client::getServiceListeners(const GetServiceListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceListenersWithOptions(request, runtime);
}

/**
 * @summary 获取服务接口列表
 *
 * @param request GetServiceMethodPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceMethodPageResponse
 */
GetServiceMethodPageResponse Client::getServiceMethodPageWithOptions(const GetServiceMethodPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasMethodController()) {
    query["MethodController"] = request.getMethodController();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasServiceGroup()) {
    query["ServiceGroup"] = request.getServiceGroup();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceMethodPage"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceMethodPageResponse>();
}

/**
 * @summary 获取服务接口列表
 *
 * @param request GetServiceMethodPageRequest
 * @return GetServiceMethodPageResponse
 */
GetServiceMethodPageResponse Client::getServiceMethodPage(const GetServiceMethodPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceMethodPageWithOptions(request, runtime);
}

/**
 * @summary Obtains all tags in the current lane group.
 *
 * @param request GetTagsBySwimmingLaneGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTagsBySwimmingLaneGroupIdResponse
 */
GetTagsBySwimmingLaneGroupIdResponse Client::getTagsBySwimmingLaneGroupIdWithOptions(const GetTagsBySwimmingLaneGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTagsBySwimmingLaneGroupId"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTagsBySwimmingLaneGroupIdResponse>();
}

/**
 * @summary Obtains all tags in the current lane group.
 *
 * @param request GetTagsBySwimmingLaneGroupIdRequest
 * @return GetTagsBySwimmingLaneGroupIdResponse
 */
GetTagsBySwimmingLaneGroupIdResponse Client::getTagsBySwimmingLaneGroupId(const GetTagsBySwimmingLaneGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTagsBySwimmingLaneGroupIdWithOptions(request, runtime);
}

/**
 * @summary mse-200-105
 *
 * @param request GetZookeeperDataImportUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetZookeeperDataImportUrlResponse
 */
GetZookeeperDataImportUrlResponse Client::getZookeeperDataImportUrlWithOptions(const GetZookeeperDataImportUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetZookeeperDataImportUrl"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetZookeeperDataImportUrlResponse>();
}

/**
 * @summary mse-200-105
 *
 * @param request GetZookeeperDataImportUrlRequest
 * @return GetZookeeperDataImportUrlResponse
 */
GetZookeeperDataImportUrlResponse Client::getZookeeperDataImportUrl(const GetZookeeperDataImportUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getZookeeperDataImportUrlWithOptions(request, runtime);
}

/**
 * @summary Imports Nacos configurations as a file.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ImportNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportNacosConfigResponse
 */
ImportNacosConfigResponse Client::importNacosConfigWithOptions(const ImportNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportNacosConfigResponse>();
}

/**
 * @summary Imports Nacos configurations as a file.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ImportNacosConfigRequest
 * @return ImportNacosConfigResponse
 */
ImportNacosConfigResponse Client::importNacosConfig(const ImportNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importNacosConfigWithOptions(request, runtime);
}

/**
 * @summary Imports services to a gateway.
 *
 * @param tmpReq ImportServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportServicesResponse
 */
ImportServicesResponse Client::importServicesWithOptions(const ImportServicesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportServicesShrinkRequest request = ImportServicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServiceList()) {
    request.setServiceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServiceList(), "ServiceList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFcAlias()) {
    query["FcAlias"] = request.getFcAlias();
  }

  if (!!request.hasFcServiceName()) {
    query["FcServiceName"] = request.getFcServiceName();
  }

  if (!!request.hasFcVersion()) {
    query["FcVersion"] = request.getFcVersion();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceListShrink()) {
    query["ServiceList"] = request.getServiceListShrink();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTlsSetting()) {
    query["TlsSetting"] = request.getTlsSetting();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportServices"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportServicesResponse>();
}

/**
 * @summary Imports services to a gateway.
 *
 * @param request ImportServicesRequest
 * @return ImportServicesResponse
 */
ImportServicesResponse Client::importServices(const ImportServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importServicesWithOptions(request, runtime);
}

/**
 * @summary Initiates a task to import data from a destination URL to a Microservices Engine (MSE) ZooKeeper instance.
 *
 * @description **Danger** This operation clears existing data. Exercise caution when you call this API operation.
 *
 * @param request ImportZookeeperDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportZookeeperDataResponse
 */
ImportZookeeperDataResponse Client::importZookeeperDataWithOptions(const ImportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportZookeeperData"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportZookeeperDataResponse>();
}

/**
 * @summary Initiates a task to import data from a destination URL to a Microservices Engine (MSE) ZooKeeper instance.
 *
 * @description **Danger** This operation clears existing data. Exercise caution when you call this API operation.
 *
 * @param request ImportZookeeperDataRequest
 * @return ImportZookeeperDataResponse
 */
ImportZookeeperDataResponse Client::importZookeeperData(const ImportZookeeperDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importZookeeperDataWithOptions(request, runtime);
}

/**
 * @summary 用户授权mseSLR
 *
 * @param request InitializeServiceLinkRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeServiceLinkRoleResponse
 */
InitializeServiceLinkRoleResponse Client::initializeServiceLinkRoleWithOptions(const InitializeServiceLinkRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitializeServiceLinkRole"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeServiceLinkRoleResponse>();
}

/**
 * @summary 用户授权mseSLR
 *
 * @param request InitializeServiceLinkRoleRequest
 * @return InitializeServiceLinkRoleResponse
 */
InitializeServiceLinkRoleResponse Client::initializeServiceLinkRole(const InitializeServiceLinkRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeServiceLinkRoleWithOptions(request, runtime);
}

/**
 * @summary Queries application instances that are registered with a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnsInstancesResponse
 */
ListAnsInstancesResponse Client::listAnsInstancesWithOptions(const ListAnsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnsInstances"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnsInstancesResponse>();
}

/**
 * @summary Queries application instances that are registered with a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsInstancesRequest
 * @return ListAnsInstancesResponse
 */
ListAnsInstancesResponse Client::listAnsInstances(const ListAnsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnsInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the clusters of a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsServiceClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnsServiceClustersResponse
 */
ListAnsServiceClustersResponse Client::listAnsServiceClustersWithOptions(const ListAnsServiceClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnsServiceClusters"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnsServiceClustersResponse>();
}

/**
 * @summary Queries the clusters of a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsServiceClustersRequest
 * @return ListAnsServiceClustersResponse
 */
ListAnsServiceClustersResponse Client::listAnsServiceClusters(const ListAnsServiceClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnsServiceClustersWithOptions(request, runtime);
}

/**
 * @summary Queries Nacos services.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnsServicesResponse
 */
ListAnsServicesResponse Client::listAnsServicesWithOptions(const ListAnsServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasHasIpCount()) {
    query["HasIpCount"] = request.getHasIpCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnsServices"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnsServicesResponse>();
}

/**
 * @summary Queries Nacos services.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListAnsServicesRequest
 * @return ListAnsServicesResponse
 */
ListAnsServicesResponse Client::listAnsServices(const ListAnsServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnsServicesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListAppBySwimmingLaneGroupTag is deprecated, please use mse::2019-05-31::ListAppBySwimmingLaneGroupTags instead.
 *
 * @summary Queries the applications in a lane group by tag.
 *
 * @param request ListAppBySwimmingLaneGroupTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppBySwimmingLaneGroupTagResponse
 */
ListAppBySwimmingLaneGroupTagResponse Client::listAppBySwimmingLaneGroupTagWithOptions(const ListAppBySwimmingLaneGroupTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppBySwimmingLaneGroupTag"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppBySwimmingLaneGroupTagResponse>();
}

/**
 * @deprecated OpenAPI ListAppBySwimmingLaneGroupTag is deprecated, please use mse::2019-05-31::ListAppBySwimmingLaneGroupTags instead.
 *
 * @summary Queries the applications in a lane group by tag.
 *
 * @param request ListAppBySwimmingLaneGroupTagRequest
 * @return ListAppBySwimmingLaneGroupTagResponse
 */
ListAppBySwimmingLaneGroupTagResponse Client::listAppBySwimmingLaneGroupTag(const ListAppBySwimmingLaneGroupTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppBySwimmingLaneGroupTagWithOptions(request, runtime);
}

/**
 * @summary Lists applications by tag in a specified lane group.
 *
 * @param tmpReq ListAppBySwimmingLaneGroupTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppBySwimmingLaneGroupTagsResponse
 */
ListAppBySwimmingLaneGroupTagsResponse Client::listAppBySwimmingLaneGroupTagsWithOptions(const ListAppBySwimmingLaneGroupTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppBySwimmingLaneGroupTagsShrinkRequest request = ListAppBySwimmingLaneGroupTagsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppBySwimmingLaneGroupTags"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppBySwimmingLaneGroupTagsResponse>();
}

/**
 * @summary Lists applications by tag in a specified lane group.
 *
 * @param request ListAppBySwimmingLaneGroupTagsRequest
 * @return ListAppBySwimmingLaneGroupTagsResponse
 */
ListAppBySwimmingLaneGroupTagsResponse Client::listAppBySwimmingLaneGroupTags(const ListAppBySwimmingLaneGroupTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppBySwimmingLaneGroupTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the routing rules of an application.
 *
 * @param request ListApplicationsWithTagRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsWithTagRulesResponse
 */
ListApplicationsWithTagRulesResponse Client::listApplicationsWithTagRulesWithOptions(const ListApplicationsWithTagRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsWithTagRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsWithTagRulesResponse>();
}

/**
 * @summary Queries the routing rules of an application.
 *
 * @param request ListApplicationsWithTagRulesRequest
 * @return ListApplicationsWithTagRulesResponse
 */
ListApplicationsWithTagRulesResponse Client::listApplicationsWithTagRules(const ListApplicationsWithTagRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithTagRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of service authentication rules.
 *
 * @param request ListAuthPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthPolicyResponse
 */
ListAuthPolicyResponse Client::listAuthPolicyWithOptions(const ListAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthPolicy"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthPolicyResponse>();
}

/**
 * @summary Queries a list of service authentication rules.
 *
 * @param request ListAuthPolicyRequest
 * @return ListAuthPolicyResponse
 */
ListAuthPolicyResponse Client::listAuthPolicy(const ListAuthPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries a list of circuit breaking rules.
 *
 * @param request ListCircuitBreakerRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCircuitBreakerRulesResponse
 */
ListCircuitBreakerRulesResponse Client::listCircuitBreakerRulesWithOptions(const ListCircuitBreakerRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceSearchKey()) {
    query["ResourceSearchKey"] = request.getResourceSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCircuitBreakerRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCircuitBreakerRulesResponse>();
}

/**
 * @summary Queries a list of circuit breaking rules.
 *
 * @param request ListCircuitBreakerRulesRequest
 * @return ListCircuitBreakerRulesResponse
 */
ListCircuitBreakerRulesResponse Client::listCircuitBreakerRules(const ListCircuitBreakerRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCircuitBreakerRulesWithOptions(request, runtime);
}

/**
 * @summary Queries available cluster connection types.
 *
 * @param request ListClusterConnectionTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterConnectionTypesResponse
 */
ListClusterConnectionTypesResponse Client::listClusterConnectionTypesWithOptions(const ListClusterConnectionTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterConnectionTypes"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterConnectionTypesResponse>();
}

/**
 * @summary Queries available cluster connection types.
 *
 * @param request ListClusterConnectionTypesRequest
 * @return ListClusterConnectionTypesResponse
 */
ListClusterConnectionTypesResponse Client::listClusterConnectionTypes(const ListClusterConnectionTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterConnectionTypesWithOptions(request, runtime);
}

/**
 * @summary Obtains information about historical health check tasks.
 *
 * @param request ListClusterHealthCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterHealthCheckTaskResponse
 */
ListClusterHealthCheckTaskResponse Client::listClusterHealthCheckTaskWithOptions(const ListClusterHealthCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterHealthCheckTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterHealthCheckTaskResponse>();
}

/**
 * @summary Obtains information about historical health check tasks.
 *
 * @param request ListClusterHealthCheckTaskRequest
 * @return ListClusterHealthCheckTaskResponse
 */
ListClusterHealthCheckTaskResponse Client::listClusterHealthCheckTask(const ListClusterHealthCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterHealthCheckTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the engine types that can be activated.
 *
 * @param request ListClusterTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterTypesResponse
 */
ListClusterTypesResponse Client::listClusterTypesWithOptions(const ListClusterTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.getConnectType();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterTypes"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterTypesResponse>();
}

/**
 * @summary Queries the engine types that can be activated.
 *
 * @param request ListClusterTypesRequest
 * @return ListClusterTypesResponse
 */
ListClusterTypesResponse Client::listClusterTypes(const ListClusterTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about supported instance versions.
 *
 * @param request ListClusterVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterVersionsResponse
 */
ListClusterVersionsResponse Client::listClusterVersionsWithOptions(const ListClusterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterVersions"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterVersionsResponse>();
}

/**
 * @summary Queries the information about supported instance versions.
 *
 * @param request ListClusterVersionsRequest
 * @return ListClusterVersionsResponse
 */
ListClusterVersionsResponse Client::listClusterVersions(const ListClusterVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries Microservices Engine (MSE) instances.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterAliasName()) {
    query["ClusterAliasName"] = request.getClusterAliasName();
  }

  if (!!request.hasKeyId()) {
    query["KeyId"] = request.getKeyId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries Microservices Engine (MSE) instances.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary Obtains the track data of a Nacos configuration center.
 *
 * @param request ListConfigTrackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigTrackResponse
 */
ListConfigTrackResponse Client::listConfigTrackWithOptions(const ListConfigTrackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigTrack"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigTrackResponse>();
}

/**
 * @summary Obtains the track data of a Nacos configuration center.
 *
 * @param request ListConfigTrackRequest
 * @return ListConfigTrackResponse
 */
ListConfigTrackResponse Client::listConfigTrack(const ListConfigTrackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigTrackWithOptions(request, runtime);
}

/**
 * @summary Queries the namespaces of a Nacos instance.
 *
 * @param request ListEngineNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEngineNamespacesResponse
 */
ListEngineNamespacesResponse Client::listEngineNamespacesWithOptions(const ListEngineNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEngineNamespaces"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEngineNamespacesResponse>();
}

/**
 * @summary Queries the namespaces of a Nacos instance.
 *
 * @param request ListEngineNamespacesRequest
 * @return ListEngineNamespacesResponse
 */
ListEngineNamespacesResponse Client::listEngineNamespaces(const ListEngineNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEngineNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries Eureka instances.
 *
 * @param request ListEurekaInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEurekaInstancesResponse
 */
ListEurekaInstancesResponse Client::listEurekaInstancesWithOptions(const ListEurekaInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEurekaInstances"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEurekaInstancesResponse>();
}

/**
 * @summary Queries Eureka instances.
 *
 * @param request ListEurekaInstancesRequest
 * @return ListEurekaInstancesResponse
 */
ListEurekaInstancesResponse Client::listEurekaInstances(const ListEurekaInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEurekaInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries Eureka services.
 *
 * @param request ListEurekaServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEurekaServicesResponse
 */
ListEurekaServicesResponse Client::listEurekaServicesWithOptions(const ListEurekaServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEurekaServices"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEurekaServicesResponse>();
}

/**
 * @summary Queries Eureka services.
 *
 * @param request ListEurekaServicesRequest
 * @return ListEurekaServicesResponse
 */
ListEurekaServicesResponse Client::listEurekaServices(const ListEurekaServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEurekaServicesWithOptions(request, runtime);
}

/**
 * @summary Lists historical data export tasks of a Microservices Engine (MSE) Zookeeper instance.
 *
 * @param request ListExportZookeeperDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExportZookeeperDataResponse
 */
ListExportZookeeperDataResponse Client::listExportZookeeperDataWithOptions(const ListExportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExportZookeeperData"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExportZookeeperDataResponse>();
}

/**
 * @summary Lists historical data export tasks of a Microservices Engine (MSE) Zookeeper instance.
 *
 * @param request ListExportZookeeperDataRequest
 * @return ListExportZookeeperDataResponse
 */
ListExportZookeeperDataResponse Client::listExportZookeeperData(const ListExportZookeeperDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExportZookeeperDataWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of throttling rules.
 *
 * @param request ListFlowRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowRulesResponse
 */
ListFlowRulesResponse Client::listFlowRulesWithOptions(const ListFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceSearchKey()) {
    query["ResourceSearchKey"] = request.getResourceSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowRulesResponse>();
}

/**
 * @summary Obtains a list of throttling rules.
 *
 * @param request ListFlowRulesRequest
 * @return ListFlowRulesResponse
 */
ListFlowRulesResponse Client::listFlowRules(const ListFlowRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of gateways.
 *
 * @param tmpReq ListGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGatewayWithOptions(const ListGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGatewayShrinkRequest request = ListGatewayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParams()) {
    request.setFilterParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParams(), "FilterParams", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescSort()) {
    query["DescSort"] = request.getDescSort();
  }

  if (!!request.hasFilterParamsShrink()) {
    query["FilterParams"] = request.getFilterParamsShrink();
  }

  if (!!request.hasOrderItem()) {
    query["OrderItem"] = request.getOrderItem();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGateway"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayResponse>();
}

/**
 * @summary Queries a list of gateways.
 *
 * @param request ListGatewayRequest
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGateway(const ListGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayWithOptions(request, runtime);
}

/**
 * @summary 查询网关认证
 *
 * @param tmpReq ListGatewayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayAuthResponse
 */
ListGatewayAuthResponse Client::listGatewayAuthWithOptions(const ListGatewayAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGatewayAuthShrinkRequest request = ListGatewayAuthShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParams()) {
    request.setFilterParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParams(), "FilterParams", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescSort()) {
    query["DescSort"] = request.getDescSort();
  }

  if (!!request.hasFilterParamsShrink()) {
    query["FilterParams"] = request.getFilterParamsShrink();
  }

  if (!!request.hasOrderItem()) {
    query["OrderItem"] = request.getOrderItem();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayAuthResponse>();
}

/**
 * @summary 查询网关认证
 *
 * @param request ListGatewayAuthRequest
 * @return ListGatewayAuthResponse
 */
ListGatewayAuthResponse Client::listGatewayAuth(const ListGatewayAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayAuthWithOptions(request, runtime);
}

/**
 * @summary Queries the list of consumers on which a gateway performs authentication operations.
 *
 * @param request ListGatewayAuthConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayAuthConsumerResponse
 */
ListGatewayAuthConsumerResponse Client::listGatewayAuthConsumerWithOptions(const ListGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerStatus()) {
    query["ConsumerStatus"] = request.getConsumerStatus();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayAuthConsumer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayAuthConsumerResponse>();
}

/**
 * @summary Queries the list of consumers on which a gateway performs authentication operations.
 *
 * @param request ListGatewayAuthConsumerRequest
 * @return ListGatewayAuthConsumerResponse
 */
ListGatewayAuthConsumerResponse Client::listGatewayAuthConsumer(const ListGatewayAuthConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayAuthConsumerWithOptions(request, runtime);
}

/**
 * @summary Queries the list of authorized resources for the consumer on which a gateway performs authentication operations.
 *
 * @param request ListGatewayAuthConsumerResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayAuthConsumerResourceResponse
 */
ListGatewayAuthConsumerResourceResponse Client::listGatewayAuthConsumerResourceWithOptions(const ListGatewayAuthConsumerResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceStatus()) {
    query["ResourceStatus"] = request.getResourceStatus();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayAuthConsumerResource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayAuthConsumerResourceResponse>();
}

/**
 * @summary Queries the list of authorized resources for the consumer on which a gateway performs authentication operations.
 *
 * @param request ListGatewayAuthConsumerResourceRequest
 * @return ListGatewayAuthConsumerResourceResponse
 */
ListGatewayAuthConsumerResourceResponse Client::listGatewayAuthConsumerResource(const ListGatewayAuthConsumerResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayAuthConsumerResourceWithOptions(request, runtime);
}

/**
 * @summary 查看网关路由熔断规则
 *
 * @param request ListGatewayCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayCircuitBreakerRuleResponse
 */
ListGatewayCircuitBreakerRuleResponse Client::listGatewayCircuitBreakerRuleWithOptions(const ListGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFilterParams()) {
    query["FilterParams"] = request.getFilterParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayCircuitBreakerRuleResponse>();
}

/**
 * @summary 查看网关路由熔断规则
 *
 * @param request ListGatewayCircuitBreakerRuleRequest
 * @return ListGatewayCircuitBreakerRuleResponse
 */
ListGatewayCircuitBreakerRuleResponse Client::listGatewayCircuitBreakerRule(const ListGatewayCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that are associated with a gateway.
 *
 * @param request ListGatewayDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayDomainResponse
 */
ListGatewayDomainResponse Client::listGatewayDomainWithOptions(const ListGatewayDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayDomain"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayDomainResponse>();
}

/**
 * @summary Queries the domain names that are associated with a gateway.
 *
 * @param request ListGatewayDomainRequest
 * @return ListGatewayDomainResponse
 */
ListGatewayDomainResponse Client::listGatewayDomain(const ListGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayDomainWithOptions(request, runtime);
}

/**
 * @summary 查看网关路由流控规则
 *
 * @param request ListGatewayFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayFlowRuleResponse
 */
ListGatewayFlowRuleResponse Client::listGatewayFlowRuleWithOptions(const ListGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFilterParams()) {
    query["FilterParams"] = request.getFilterParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayFlowRuleResponse>();
}

/**
 * @summary 查看网关路由流控规则
 *
 * @param request ListGatewayFlowRuleRequest
 * @return ListGatewayFlowRuleResponse
 */
ListGatewayFlowRuleResponse Client::listGatewayFlowRule(const ListGatewayFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 查看网关路由隔离规则
 *
 * @param request ListGatewayIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayIsolationRuleResponse
 */
ListGatewayIsolationRuleResponse Client::listGatewayIsolationRuleWithOptions(const ListGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFilterParams()) {
    query["FilterParams"] = request.getFilterParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayIsolationRuleResponse>();
}

/**
 * @summary 查看网关路由隔离规则
 *
 * @param request ListGatewayIsolationRuleRequest
 * @return ListGatewayIsolationRuleResponse
 */
ListGatewayIsolationRuleResponse Client::listGatewayIsolationRule(const ListGatewayIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayIsolationRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the routes of a gateway.
 *
 * @param tmpReq ListGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayRouteResponse
 */
ListGatewayRouteResponse Client::listGatewayRouteWithOptions(const ListGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGatewayRouteShrinkRequest request = ListGatewayRouteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParams()) {
    request.setFilterParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParams(), "FilterParams", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescSort()) {
    query["DescSort"] = request.getDescSort();
  }

  if (!!request.hasFilterParamsShrink()) {
    query["FilterParams"] = request.getFilterParamsShrink();
  }

  if (!!request.hasOrderItem()) {
    query["OrderItem"] = request.getOrderItem();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayRouteResponse>();
}

/**
 * @summary Queries the routes of a gateway.
 *
 * @param request ListGatewayRouteRequest
 * @return ListGatewayRouteResponse
 */
ListGatewayRouteResponse Client::listGatewayRoute(const ListGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Queries a list of routes for which authentication is enabled.
 *
 * @param request ListGatewayRouteOnAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayRouteOnAuthResponse
 */
ListGatewayRouteOnAuthResponse Client::listGatewayRouteOnAuthWithOptions(const ListGatewayRouteOnAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayRouteOnAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayRouteOnAuthResponse>();
}

/**
 * @summary Queries a list of routes for which authentication is enabled.
 *
 * @param request ListGatewayRouteOnAuthRequest
 * @return ListGatewayRouteOnAuthResponse
 */
ListGatewayRouteOnAuthResponse Client::listGatewayRouteOnAuth(const ListGatewayRouteOnAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayRouteOnAuthWithOptions(request, runtime);
}

/**
 * @summary Queries a list of services that are subscribed with a gateway.
 *
 * @param tmpReq ListGatewayServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayServiceResponse
 */
ListGatewayServiceResponse Client::listGatewayServiceWithOptions(const ListGatewayServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGatewayServiceShrinkRequest request = ListGatewayServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParams()) {
    request.setFilterParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParams(), "FilterParams", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescSort()) {
    query["DescSort"] = request.getDescSort();
  }

  if (!!request.hasFilterParamsShrink()) {
    query["FilterParams"] = request.getFilterParamsShrink();
  }

  if (!!request.hasOrderItem()) {
    query["OrderItem"] = request.getOrderItem();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayServiceResponse>();
}

/**
 * @summary Queries a list of services that are subscribed with a gateway.
 *
 * @param request ListGatewayServiceRequest
 * @return ListGatewayServiceResponse
 */
ListGatewayServiceResponse Client::listGatewayService(const ListGatewayServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the Server Load Balancer (SLB) instances that are associated with a gateway.
 *
 * @param request ListGatewaySlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewaySlbResponse
 */
ListGatewaySlbResponse Client::listGatewaySlbWithOptions(const ListGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewaySlb"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewaySlbResponse>();
}

/**
 * @summary Queries the Server Load Balancer (SLB) instances that are associated with a gateway.
 *
 * @param request ListGatewaySlbRequest
 * @return ListGatewaySlbResponse
 */
ListGatewaySlbResponse Client::listGatewaySlb(const ListGatewaySlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewaySlbWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of zones where a gateway is available.
 *
 * @param request ListGatewayZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayZoneResponse
 */
ListGatewayZoneResponse Client::listGatewayZoneWithOptions(const ListGatewayZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayZone"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayZoneResponse>();
}

/**
 * @summary Obtains a list of zones where a gateway is available.
 *
 * @param request ListGatewayZoneRequest
 * @return ListGatewayZoneResponse
 */
ListGatewayZoneResponse Client::listGatewayZone(const ListGatewayZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGatewayZoneWithOptions(request, runtime);
}

/**
 * @summary Displays the number of nodes that can be deployed for an instance.
 *
 * @param request ListInstanceCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceCountResponse
 */
ListInstanceCountResponse Client::listInstanceCountWithOptions(const ListInstanceCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceCount"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceCountResponse>();
}

/**
 * @summary Displays the number of nodes that can be deployed for an instance.
 *
 * @param request ListInstanceCountRequest
 * @return ListInstanceCountResponse
 */
ListInstanceCountResponse Client::listInstanceCount(const ListInstanceCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceCountWithOptions(request, runtime);
}

/**
 * @summary 查询隔离规则
 *
 * @param request ListIsolationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIsolationRulesResponse
 */
ListIsolationRulesResponse Client::listIsolationRulesWithOptions(const ListIsolationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceSearchKey()) {
    query["ResourceSearchKey"] = request.getResourceSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIsolationRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIsolationRulesResponse>();
}

/**
 * @summary 查询隔离规则
 *
 * @param request ListIsolationRulesRequest
 * @return ListIsolationRulesResponse
 */
ListIsolationRulesResponse Client::listIsolationRules(const ListIsolationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIsolationRulesWithOptions(request, runtime);
}

/**
 * @summary Queries listeners based on configuration information.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param tmpReq ListListenersByConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersByConfigResponse
 */
ListListenersByConfigResponse Client::listListenersByConfigWithOptions(const ListListenersByConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListListenersByConfigShrinkRequest request = ListListenersByConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtGrayRules()) {
    request.setExtGrayRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtGrayRules(), "ExtGrayRules", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasExtGrayRulesShrink()) {
    query["ExtGrayRules"] = request.getExtGrayRulesShrink();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListenersByConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListenersByConfigResponse>();
}

/**
 * @summary Queries listeners based on configuration information.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListListenersByConfigRequest
 * @return ListListenersByConfigResponse
 */
ListListenersByConfigResponse Client::listListenersByConfig(const ListListenersByConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersByConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the information about listeners based on IP addresses.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListListenersByIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersByIpResponse
 */
ListListenersByIpResponse Client::listListenersByIpWithOptions(const ListListenersByIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListenersByIp"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListenersByIpResponse>();
}

/**
 * @summary Queries the information about listeners based on IP addresses.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListListenersByIpRequest
 * @return ListListenersByIpResponse
 */
ListListenersByIpResponse Client::listListenersByIp(const ListListenersByIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersByIpWithOptions(request, runtime);
}

/**
 * @summary Queries information about a migration task.
 *
 * @param request ListMigrationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMigrationTaskResponse
 */
ListMigrationTaskResponse Client::listMigrationTaskWithOptions(const ListMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasOriginInstanceName()) {
    query["OriginInstanceName"] = request.getOriginInstanceName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMigrationTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMigrationTaskResponse>();
}

/**
 * @summary Queries information about a migration task.
 *
 * @param request ListMigrationTaskRequest
 * @return ListMigrationTaskResponse
 */
ListMigrationTaskResponse Client::listMigrationTask(const ListMigrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMigrationTaskWithOptions(request, runtime);
}

/**
 * @summary Queries Nacos configurations.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListNacosConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNacosConfigsResponse
 */
ListNacosConfigsResponse Client::listNacosConfigsWithOptions(const ListNacosConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNacosConfigs"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNacosConfigsResponse>();
}

/**
 * @summary Queries Nacos configurations.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListNacosConfigsRequest
 * @return ListNacosConfigsResponse
 */
ListNacosConfigsResponse Client::listNacosConfigs(const ListNacosConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNacosConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration history of a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListNacosHistoryConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNacosHistoryConfigsResponse
 */
ListNacosHistoryConfigsResponse Client::listNacosHistoryConfigsWithOptions(const ListNacosHistoryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNacosHistoryConfigs"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNacosHistoryConfigsResponse>();
}

/**
 * @summary Queries the configuration history of a Microservices Engine (MSE) Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request ListNacosHistoryConfigsRequest
 * @return ListNacosHistoryConfigsResponse
 */
ListNacosHistoryConfigsResponse Client::listNacosHistoryConfigs(const ListNacosHistoryConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNacosHistoryConfigsWithOptions(request, runtime);
}

/**
 * @summary 获取McpServer列表
 *
 * @param request ListNacosMcpServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNacosMcpServersResponse
 */
ListNacosMcpServersResponse Client::listNacosMcpServersWithOptions(const ListNacosMcpServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNacosMcpServers"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNacosMcpServersResponse>();
}

/**
 * @summary 获取McpServer列表
 *
 * @param request ListNacosMcpServersRequest
 * @return ListNacosMcpServersResponse
 */
ListNacosMcpServersResponse Client::listNacosMcpServers(const ListNacosMcpServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNacosMcpServersWithOptions(request, runtime);
}

/**
 * @summary 展示命名空间列表
 *
 * @param tmpReq ListNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespacesWithOptions(const ListNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNamespacesShrinkRequest request = ListNamespacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespaces"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespacesResponse>();
}

/**
 * @summary 展示命名空间列表
 *
 * @param request ListNamespacesRequest
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespaces(const ListNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamespacesWithOptions(request, runtime);
}

/**
 * @summary Obtains the trajectory data of a Nacos registry.
 *
 * @param request ListNamingTrackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamingTrackResponse
 */
ListNamingTrackResponse Client::listNamingTrackWithOptions(const ListNamingTrackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamingTrack"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamingTrackResponse>();
}

/**
 * @summary Obtains the trajectory data of a Nacos registry.
 *
 * @param request ListNamingTrackRequest
 * @return ListNamingTrackResponse
 */
ListNamingTrackResponse Client::listNamingTrack(const ListNamingTrackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamingTrackWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of gateway certificates.
 *
 * @param request ListSSLCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSSLCertResponse
 */
ListSSLCertResponse Client::listSSLCertWithOptions(const ListSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSSLCert"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSSLCertResponse>();
}

/**
 * @summary Obtains a list of gateway certificates.
 *
 * @param request ListSSLCertRequest
 * @return ListSSLCertResponse
 */
ListSSLCertResponse Client::listSSLCert(const ListSSLCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSSLCertWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about security groups.
 *
 * @param request ListSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityGroupResponse
 */
ListSecurityGroupResponse Client::listSecurityGroupWithOptions(const ListSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecurityGroup"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityGroupResponse>();
}

/**
 * @summary Obtains the information about security groups.
 *
 * @param request ListSecurityGroupRequest
 * @return ListSecurityGroupResponse
 */
ListSecurityGroupResponse Client::listSecurityGroup(const ListSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the security group rules of a gateway.
 *
 * @param request ListSecurityGroupRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityGroupRuleResponse
 */
ListSecurityGroupRuleResponse Client::listSecurityGroupRuleWithOptions(const ListSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecurityGroupRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityGroupRuleResponse>();
}

/**
 * @summary Queries the security group rules of a gateway.
 *
 * @param request ListSecurityGroupRuleRequest
 * @return ListSecurityGroupRuleResponse
 */
ListSecurityGroupRuleResponse Client::listSecurityGroupRule(const ListSecurityGroupRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityGroupRuleWithOptions(request, runtime);
}

/**
 * @summary Obtains the custom behavior of traffic protection.
 *
 * @param tmpReq ListSentinelBlockFallbackDefinitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSentinelBlockFallbackDefinitionsResponse
 */
ListSentinelBlockFallbackDefinitionsResponse Client::listSentinelBlockFallbackDefinitionsWithOptions(const ListSentinelBlockFallbackDefinitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSentinelBlockFallbackDefinitionsShrinkRequest request = ListSentinelBlockFallbackDefinitionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClassificationSet()) {
    request.setClassificationSetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClassificationSet(), "ClassificationSet", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClassificationSetShrink()) {
    query["ClassificationSet"] = request.getClassificationSetShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSentinelBlockFallbackDefinitions"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSentinelBlockFallbackDefinitionsResponse>();
}

/**
 * @summary Obtains the custom behavior of traffic protection.
 *
 * @param request ListSentinelBlockFallbackDefinitionsRequest
 * @return ListSentinelBlockFallbackDefinitionsResponse
 */
ListSentinelBlockFallbackDefinitionsResponse Client::listSentinelBlockFallbackDefinitions(const ListSentinelBlockFallbackDefinitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSentinelBlockFallbackDefinitionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of associated sources.
 *
 * @param request ListServiceSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceSourceResponse
 */
ListServiceSourceResponse Client::listServiceSourceWithOptions(const ListServiceSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceSourceResponse>();
}

/**
 * @summary Queries a list of associated sources.
 *
 * @param request ListServiceSourceRequest
 * @return ListServiceSourceResponse
 */
ListServiceSourceResponse Client::listServiceSource(const ListServiceSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceSourceWithOptions(request, runtime);
}

/**
 * @summary Queries tagged resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries tagged resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询热点参数防护规则（HTTP 请求）
 *
 * @param request ListWebFlowRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebFlowRulesResponse
 */
ListWebFlowRulesResponse Client::listWebFlowRulesWithOptions(const ListWebFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceSearchKey()) {
    query["ResourceSearchKey"] = request.getResourceSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebFlowRules"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebFlowRulesResponse>();
}

/**
 * @summary 查询热点参数防护规则（HTTP 请求）
 *
 * @param request ListWebFlowRulesRequest
 * @return ListWebFlowRulesResponse
 */
ListWebFlowRulesResponse Client::listWebFlowRules(const ListWebFlowRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWebFlowRulesWithOptions(request, runtime);
}

/**
 * @summary Obtains the track data of a ZooKeeper instance.
 *
 * @param request ListZkTrackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListZkTrackResponse
 */
ListZkTrackResponse Client::listZkTrackWithOptions(const ListZkTrackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListZkTrack"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListZkTrackResponse>();
}

/**
 * @summary Obtains the track data of a ZooKeeper instance.
 *
 * @param request ListZkTrackRequest
 * @return ListZkTrackResponse
 */
ListZkTrackResponse Client::listZkTrack(const ListZkTrackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listZkTrackWithOptions(request, runtime);
}

/**
 * @summary Queries the child nodes of a ZooKeeper node.
 *
 * @param request ListZnodeChildrenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListZnodeChildrenResponse
 */
ListZnodeChildrenResponse Client::listZnodeChildrenWithOptions(const ListZnodeChildrenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListZnodeChildren"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListZnodeChildrenResponse>();
}

/**
 * @summary Queries the child nodes of a ZooKeeper node.
 *
 * @param request ListZnodeChildrenRequest
 * @return ListZnodeChildrenResponse
 */
ListZnodeChildrenResponse Client::listZnodeChildren(const ListZnodeChildrenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listZnodeChildrenWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a cluster for which Microservice Governance is enabled.
 *
 * @param tmpReq ModifyGovernanceKubernetesClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGovernanceKubernetesClusterResponse
 */
ModifyGovernanceKubernetesClusterResponse Client::modifyGovernanceKubernetesClusterWithOptions(const ModifyGovernanceKubernetesClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyGovernanceKubernetesClusterShrinkRequest request = ModifyGovernanceKubernetesClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNamespaceInfos()) {
    request.setNamespaceInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNamespaceInfos(), "NamespaceInfos", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasNamespaceInfosShrink()) {
    body["NamespaceInfos"] = request.getNamespaceInfosShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyGovernanceKubernetesCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGovernanceKubernetesClusterResponse>();
}

/**
 * @summary Modifies the information about a cluster for which Microservice Governance is enabled.
 *
 * @param request ModifyGovernanceKubernetesClusterRequest
 * @return ModifyGovernanceKubernetesClusterResponse
 */
ModifyGovernanceKubernetesClusterResponse Client::modifyGovernanceKubernetesCluster(const ModifyGovernanceKubernetesClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGovernanceKubernetesClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies configurations of the lossless online and offline feature.
 *
 * @param request ModifyLosslessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLosslessRuleResponse
 */
ModifyLosslessRuleResponse Client::modifyLosslessRuleWithOptions(const ModifyLosslessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAligned()) {
    query["Aligned"] = request.getAligned();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDelayTime()) {
    query["DelayTime"] = request.getDelayTime();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasFuncType()) {
    query["FuncType"] = request.getFuncType();
  }

  if (!!request.hasLossLessDetail()) {
    query["LossLessDetail"] = request.getLossLessDetail();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNotice()) {
    query["Notice"] = request.getNotice();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRelated()) {
    query["Related"] = request.getRelated();
  }

  if (!!request.hasWarmupTime()) {
    query["WarmupTime"] = request.getWarmupTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLosslessRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLosslessRuleResponse>();
}

/**
 * @summary Modifies configurations of the lossless online and offline feature.
 *
 * @param request ModifyLosslessRuleRequest
 * @return ModifyLosslessRuleResponse
 */
ModifyLosslessRuleResponse Client::modifyLosslessRule(const ModifyLosslessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLosslessRuleWithOptions(request, runtime);
}

/**
 * @summary Unpublishes a route for a gateway.
 *
 * @param request OfflineGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineGatewayRouteResponse
 */
OfflineGatewayRouteResponse Client::offlineGatewayRouteWithOptions(const OfflineGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineGatewayRouteResponse>();
}

/**
 * @summary Unpublishes a route for a gateway.
 *
 * @param request OfflineGatewayRouteRequest
 * @return OfflineGatewayRouteResponse
 */
OfflineGatewayRouteResponse Client::offlineGatewayRoute(const OfflineGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Subscribes to the notification feature if a risk is detected during a health check.
 *
 * @param request OrderClusterHealthCheckRiskNoticeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OrderClusterHealthCheckRiskNoticeResponse
 */
OrderClusterHealthCheckRiskNoticeResponse Client::orderClusterHealthCheckRiskNoticeWithOptions(const OrderClusterHealthCheckRiskNoticeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMute()) {
    query["Mute"] = request.getMute();
  }

  if (!!request.hasNoticeType()) {
    query["NoticeType"] = request.getNoticeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasRiskCode()) {
    query["RiskCode"] = request.getRiskCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OrderClusterHealthCheckRiskNotice"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OrderClusterHealthCheckRiskNoticeResponse>();
}

/**
 * @summary Subscribes to the notification feature if a risk is detected during a health check.
 *
 * @param request OrderClusterHealthCheckRiskNoticeRequest
 * @return OrderClusterHealthCheckRiskNoticeResponse
 */
OrderClusterHealthCheckRiskNoticeResponse Client::orderClusterHealthCheckRiskNotice(const OrderClusterHealthCheckRiskNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return orderClusterHealthCheckRiskNoticeWithOptions(request, runtime);
}

/**
 * @summary Specifies whether to convert all letters of a header into lowercase letters. For requests and responses, HTTP/1.1 headers are not case-sensitive. By default, all letters of headers are converted into lowercase letters.
 *
 * @param request PreserveHeaderFormatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreserveHeaderFormatResponse
 */
PreserveHeaderFormatResponse Client::preserveHeaderFormatWithOptions(const PreserveHeaderFormatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasPreserveHeaderFormat()) {
    query["PreserveHeaderFormat"] = request.getPreserveHeaderFormat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreserveHeaderFormat"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreserveHeaderFormatResponse>();
}

/**
 * @summary Specifies whether to convert all letters of a header into lowercase letters. For requests and responses, HTTP/1.1 headers are not case-sensitive. By default, all letters of headers are converted into lowercase letters.
 *
 * @param request PreserveHeaderFormatRequest
 * @return PreserveHeaderFormatResponse
 */
PreserveHeaderFormatResponse Client::preserveHeaderFormat(const PreserveHeaderFormatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preserveHeaderFormatWithOptions(request, runtime);
}

/**
 * @summary Queries all the microservices of a service source.
 *
 * @param request PullServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PullServicesResponse
 */
PullServicesResponse Client::pullServicesWithOptions(const PullServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PullServices"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PullServicesResponse>();
}

/**
 * @summary Queries all the microservices of a service source.
 *
 * @param request PullServicesRequest
 * @return PullServicesResponse
 */
PullServicesResponse Client::pullServices(const PullServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pullServicesWithOptions(request, runtime);
}

/**
 * @summary Initiates a task to check risk evaluation for an instance.
 *
 * @param request PutClusterHealthCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutClusterHealthCheckTaskResponse
 */
PutClusterHealthCheckTaskResponse Client::putClusterHealthCheckTaskWithOptions(const PutClusterHealthCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutClusterHealthCheckTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutClusterHealthCheckTaskResponse>();
}

/**
 * @summary Initiates a task to check risk evaluation for an instance.
 *
 * @param request PutClusterHealthCheckTaskRequest
 * @return PutClusterHealthCheckTaskResponse
 */
PutClusterHealthCheckTaskResponse Client::putClusterHealthCheckTask(const PutClusterHealthCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putClusterHealthCheckTaskWithOptions(request, runtime);
}

/**
 * @summary Queries all the lanes in a lane group.
 *
 * @param request QueryAllSwimmingLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAllSwimmingLaneResponse
 */
QueryAllSwimmingLaneResponse Client::queryAllSwimmingLaneWithOptions(const QueryAllSwimmingLaneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAllSwimmingLane"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAllSwimmingLaneResponse>();
}

/**
 * @summary Queries all the lanes in a lane group.
 *
 * @param request QueryAllSwimmingLaneRequest
 * @return QueryAllSwimmingLaneResponse
 */
QueryAllSwimmingLaneResponse Client::queryAllSwimmingLane(const QueryAllSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAllSwimmingLaneWithOptions(request, runtime);
}

/**
 * @summary Queries all lane groups.
 *
 * @param request QueryAllSwimmingLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAllSwimmingLaneGroupResponse
 */
QueryAllSwimmingLaneGroupResponse Client::queryAllSwimmingLaneGroupWithOptions(const QueryAllSwimmingLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAllSwimmingLaneGroup"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAllSwimmingLaneGroupResponse>();
}

/**
 * @summary Queries all lane groups.
 *
 * @param request QueryAllSwimmingLaneGroupRequest
 * @return QueryAllSwimmingLaneGroupResponse
 */
QueryAllSwimmingLaneGroupResponse Client::queryAllSwimmingLaneGroup(const QueryAllSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAllSwimmingLaneGroupWithOptions(request, runtime);
}

/**
 * @summary Queries information about regions.
 *
 * @param request QueryBusinessLocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBusinessLocationsResponse
 */
QueryBusinessLocationsResponse Client::queryBusinessLocationsWithOptions(const QueryBusinessLocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBusinessLocations"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBusinessLocationsResponse>();
}

/**
 * @summary Queries information about regions.
 *
 * @param request QueryBusinessLocationsRequest
 * @return QueryBusinessLocationsResponse
 */
QueryBusinessLocationsResponse Client::queryBusinessLocations(const QueryBusinessLocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBusinessLocationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an instance.
 *
 * @param request QueryClusterDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryClusterDetailResponse
 */
QueryClusterDetailResponse Client::queryClusterDetailWithOptions(const QueryClusterDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAclSwitch()) {
    query["AclSwitch"] = request.getAclSwitch();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryClusterDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryClusterDetailResponse>();
}

/**
 * @summary Queries the details of an instance.
 *
 * @param request QueryClusterDetailRequest
 * @return QueryClusterDetailResponse
 */
QueryClusterDetailResponse Client::queryClusterDetail(const QueryClusterDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryClusterDetailWithOptions(request, runtime);
}

/**
 * @summary Queries disk specifications that are supported by an instance.
 *
 * @param request QueryClusterDiskSpecificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryClusterDiskSpecificationResponse
 */
QueryClusterDiskSpecificationResponse Client::queryClusterDiskSpecificationWithOptions(const QueryClusterDiskSpecificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryClusterDiskSpecification"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryClusterDiskSpecificationResponse>();
}

/**
 * @summary Queries disk specifications that are supported by an instance.
 *
 * @param request QueryClusterDiskSpecificationRequest
 * @return QueryClusterDiskSpecificationResponse
 */
QueryClusterDiskSpecificationResponse Client::queryClusterDiskSpecification(const QueryClusterDiskSpecificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryClusterDiskSpecificationWithOptions(request, runtime);
}

/**
 * @summary Queries the static information of an instance.
 *
 * @param request QueryClusterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryClusterInfoResponse
 */
QueryClusterInfoResponse Client::queryClusterInfoWithOptions(const QueryClusterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAclSwitch()) {
    query["AclSwitch"] = request.getAclSwitch();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryClusterInfo"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryClusterInfoResponse>();
}

/**
 * @summary Queries the static information of an instance.
 *
 * @param request QueryClusterInfoRequest
 * @return QueryClusterInfoResponse
 */
QueryClusterInfoResponse Client::queryClusterInfo(const QueryClusterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryClusterInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information of supported instance specifications.
 *
 * @param request QueryClusterSpecificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryClusterSpecificationResponse
 */
QueryClusterSpecificationResponse Client::queryClusterSpecificationWithOptions(const QueryClusterSpecificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.getConnectType();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryClusterSpecification"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryClusterSpecificationResponse>();
}

/**
 * @summary Queries the information of supported instance specifications.
 *
 * @param request QueryClusterSpecificationRequest
 * @return QueryClusterSpecificationResponse
 */
QueryClusterSpecificationResponse Client::queryClusterSpecification(const QueryClusterSpecificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryClusterSpecificationWithOptions(request, runtime);
}

/**
 * @summary Queries configuration information of an instance.
 *
 * @param request QueryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConfigResponse
 */
QueryConfigResponse Client::queryConfigWithOptions(const QueryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedRunningConf()) {
    query["NeedRunningConf"] = request.getNeedRunningConf();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConfigResponse>();
}

/**
 * @summary Queries configuration information of an instance.
 *
 * @param request QueryConfigRequest
 * @return QueryConfigResponse
 */
QueryConfigResponse Client::queryConfig(const QueryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the regions supported by a gateway.
 *
 * @param request QueryGatewayRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGatewayRegionResponse
 */
QueryGatewayRegionResponse Client::queryGatewayRegionWithOptions(const QueryGatewayRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGatewayRegion"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGatewayRegionResponse>();
}

/**
 * @summary Queries the regions supported by a gateway.
 *
 * @param request QueryGatewayRegionRequest
 * @return QueryGatewayRegionResponse
 */
QueryGatewayRegionResponse Client::queryGatewayRegion(const QueryGatewayRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGatewayRegionWithOptions(request, runtime);
}

/**
 * @summary Queries available gateway types.
 *
 * @param request QueryGatewayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGatewayTypeResponse
 */
QueryGatewayTypeResponse Client::queryGatewayTypeWithOptions(const QueryGatewayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGatewayType"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGatewayTypeResponse>();
}

/**
 * @summary Queries available gateway types.
 *
 * @param request QueryGatewayTypeRequest
 * @return QueryGatewayTypeResponse
 */
QueryGatewayTypeResponse Client::queryGatewayType(const QueryGatewayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGatewayTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the Kubernetes clusters for which Microservices Governance is activated.
 *
 * @param request QueryGovernanceKubernetesClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGovernanceKubernetesClusterResponse
 */
QueryGovernanceKubernetesClusterResponse Client::queryGovernanceKubernetesClusterWithOptions(const QueryGovernanceKubernetesClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGovernanceKubernetesCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGovernanceKubernetesClusterResponse>();
}

/**
 * @summary Queries the Kubernetes clusters for which Microservices Governance is activated.
 *
 * @param request QueryGovernanceKubernetesClusterRequest
 * @return QueryGovernanceKubernetesClusterResponse
 */
QueryGovernanceKubernetesClusterResponse Client::queryGovernanceKubernetesCluster(const QueryGovernanceKubernetesClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGovernanceKubernetesClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the runtime data of a specified cluster.
 *
 * @param request QueryInstancesInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstancesInfoResponse
 */
QueryInstancesInfoResponse Client::queryInstancesInfoWithOptions(const QueryInstancesInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstancesInfo"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstancesInfoResponse>();
}

/**
 * @summary Queries the runtime data of a specified cluster.
 *
 * @param request QueryInstancesInfoRequest
 * @return QueryInstancesInfoResponse
 */
QueryInstancesInfoResponse Client::queryInstancesInfo(const QueryInstancesInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstancesInfoWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring information.
 *
 * @param request QueryMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMonitorResponse
 */
QueryMonitorResponse Client::queryMonitorWithOptions(const QueryMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMonitorType()) {
    query["MonitorType"] = request.getMonitorType();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStep()) {
    query["Step"] = request.getStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMonitor"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMonitorResponse>();
}

/**
 * @summary Queries monitoring information.
 *
 * @param request QueryMonitorRequest
 * @return QueryMonitorResponse
 */
QueryMonitorResponse Client::queryMonitor(const QueryMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMonitorWithOptions(request, runtime);
}

/**
 * @summary 查询nacos灰度配置
 *
 * @param request QueryNacosGrayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryNacosGrayConfigResponse
 */
QueryNacosGrayConfigResponse Client::queryNacosGrayConfigWithOptions(const QueryNacosGrayConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGrayName()) {
    query["GrayName"] = request.getGrayName();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryNacosGrayConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryNacosGrayConfigResponse>();
}

/**
 * @summary 查询nacos灰度配置
 *
 * @param request QueryNacosGrayConfigRequest
 * @return QueryNacosGrayConfigResponse
 */
QueryNacosGrayConfigResponse Client::queryNacosGrayConfig(const QueryNacosGrayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryNacosGrayConfigWithOptions(request, runtime);
}

/**
 * @summary 查询MSE命名空间
 *
 * @param request QueryNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryNamespaceResponse
 */
QueryNamespaceResponse Client::queryNamespaceWithOptions(const QueryNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryNamespaceResponse>();
}

/**
 * @summary 查询MSE命名空间
 *
 * @param request QueryNamespaceRequest
 * @return QueryNamespaceResponse
 */
QueryNamespaceResponse Client::queryNamespace(const QueryNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the type of a Server Load Balancer (SLB) instance.
 *
 * @param request QuerySlbSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySlbSpecResponse
 */
QuerySlbSpecResponse Client::querySlbSpecWithOptions(const QuerySlbSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySlbSpec"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySlbSpecResponse>();
}

/**
 * @summary Queries the type of a Server Load Balancer (SLB) instance.
 *
 * @param request QuerySlbSpecRequest
 * @return QuerySlbSpecResponse
 */
QuerySlbSpecResponse Client::querySlbSpec(const QuerySlbSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySlbSpecWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a lane based on the lane ID.
 *
 * @param request QuerySwimmingLaneByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySwimmingLaneByIdResponse
 */
QuerySwimmingLaneByIdResponse Client::querySwimmingLaneByIdWithOptions(const QuerySwimmingLaneByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.getLaneId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySwimmingLaneById"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySwimmingLaneByIdResponse>();
}

/**
 * @summary Queries the information about a lane based on the lane ID.
 *
 * @param request QuerySwimmingLaneByIdRequest
 * @return QuerySwimmingLaneByIdResponse
 */
QuerySwimmingLaneByIdResponse Client::querySwimmingLaneById(const QuerySwimmingLaneByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySwimmingLaneByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a ZooKeeper node.
 *
 * @param request QueryZnodeDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryZnodeDetailResponse
 */
QueryZnodeDetailResponse Client::queryZnodeDetailWithOptions(const QueryZnodeDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryZnodeDetail"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryZnodeDetailResponse>();
}

/**
 * @summary Queries the information about a ZooKeeper node.
 *
 * @param request QueryZnodeDetailRequest
 * @return QueryZnodeDetailResponse
 */
QueryZnodeDetailResponse Client::queryZnodeDetail(const QueryZnodeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryZnodeDetailWithOptions(request, runtime);
}

/**
 * @summary 删除单个应用
 *
 * @param request RemoveApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApplicationResponse
 */
RemoveApplicationResponse Client::removeApplicationWithOptions(const RemoveApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApplication"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApplicationResponse>();
}

/**
 * @summary 删除单个应用
 *
 * @param request RemoveApplicationRequest
 * @return RemoveApplicationResponse
 */
RemoveApplicationResponse Client::removeApplication(const RemoveApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApplicationWithOptions(request, runtime);
}

/**
 * @param request RemoveAuthPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAuthPolicyResponse
 */
RemoveAuthPolicyResponse Client::removeAuthPolicyWithOptions(const RemoveAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAuthPolicy"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAuthPolicyResponse>();
}

/**
 * @param request RemoveAuthPolicyRequest
 * @return RemoveAuthPolicyResponse
 */
RemoveAuthPolicyResponse Client::removeAuthPolicy(const RemoveAuthPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAuthPolicyWithOptions(request, runtime);
}

/**
 * @summary Restarts a registry.
 *
 * @param request RestartClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartClusterResponse
 */
RestartClusterResponse Client::restartClusterWithOptions(const RestartClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPodNameList()) {
    query["PodNameList"] = request.getPodNameList();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartClusterResponse>();
}

/**
 * @summary Restarts a registry.
 *
 * @param request RestartClusterRequest
 * @return RestartClusterResponse
 */
RestartClusterResponse Client::restartCluster(const RestartClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartClusterWithOptions(request, runtime);
}

/**
 * @summary Retries a cluster.
 *
 * @param request RetryClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryClusterResponse
 */
RetryClusterResponse Client::retryClusterWithOptions(const RetryClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryClusterResponse>();
}

/**
 * @summary Retries a cluster.
 *
 * @param request RetryClusterRequest
 * @return RetryClusterResponse
 */
RetryClusterResponse Client::retryCluster(const RetryClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryClusterWithOptions(request, runtime);
}

/**
 * @summary Queries an idle Server Load Balancer (SLB) instance that is associated with a gateway.
 *
 * @param request SelectGatewaySlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectGatewaySlbResponse
 */
SelectGatewaySlbResponse Client::selectGatewaySlbWithOptions(const SelectGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SelectGatewaySlb"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectGatewaySlbResponse>();
}

/**
 * @summary Queries an idle Server Load Balancer (SLB) instance that is associated with a gateway.
 *
 * @param request SelectGatewaySlbRequest
 * @return SelectGatewaySlbResponse
 */
SelectGatewaySlbResponse Client::selectGatewaySlb(const SelectGatewaySlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return selectGatewaySlbWithOptions(request, runtime);
}

/**
 * @summary Tags a specified resource.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Tags a specified resource.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Untags resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Untags resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies an IP address whitelist.
 *
 * @param request UpdateAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAclResponse
 */
UpdateAclResponse Client::updateAclWithOptions(const UpdateAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAclEntryList()) {
    query["AclEntryList"] = request.getAclEntryList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAcl"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAclResponse>();
}

/**
 * @summary Modifies an IP address whitelist.
 *
 * @param request UpdateAclRequest
 * @return UpdateAclResponse
 */
UpdateAclResponse Client::updateAcl(const UpdateAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAclWithOptions(request, runtime);
}

/**
 * @summary Updates a service authentication rule.
 *
 * @param request UpdateAuthPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthPolicyResponse
 */
UpdateAuthPolicyResponse Client::updateAuthPolicyWithOptions(const UpdateAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAuthRule()) {
    query["AuthRule"] = request.getAuthRule();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasK8sNamespace()) {
    query["K8sNamespace"] = request.getK8sNamespace();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAuthPolicy"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthPolicyResponse>();
}

/**
 * @summary Updates a service authentication rule.
 *
 * @param request UpdateAuthPolicyRequest
 * @return UpdateAuthPolicyResponse
 */
UpdateAuthPolicyResponse Client::updateAuthPolicy(const UpdateAuthPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the blacklist or whitelist of a gateway.
 *
 * @param request UpdateBlackWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBlackWhiteListResponse
 */
UpdateBlackWhiteListResponse Client::updateBlackWhiteListWithOptions(const UpdateBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIsWhite()) {
    query["IsWhite"] = request.getIsWhite();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasResourceIdJsonList()) {
    query["ResourceIdJsonList"] = request.getResourceIdJsonList();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBlackWhiteList"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBlackWhiteListResponse>();
}

/**
 * @summary Modifies the blacklist or whitelist of a gateway.
 *
 * @param request UpdateBlackWhiteListRequest
 * @return UpdateBlackWhiteListResponse
 */
UpdateBlackWhiteListResponse Client::updateBlackWhiteList(const UpdateBlackWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBlackWhiteListWithOptions(request, runtime);
}

/**
 * @summary Updates a circuit breaking rule.
 *
 * @param request UpdateCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCircuitBreakerRuleResponse
 */
UpdateCircuitBreakerRuleResponse Client::updateCircuitBreakerRuleWithOptions(const UpdateCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasHalfOpenBaseAmountPerStep()) {
    query["HalfOpenBaseAmountPerStep"] = request.getHalfOpenBaseAmountPerStep();
  }

  if (!!request.hasHalfOpenRecoveryStepNum()) {
    query["HalfOpenRecoveryStepNum"] = request.getHalfOpenRecoveryStepNum();
  }

  if (!!request.hasMaxAllowedRtMs()) {
    query["MaxAllowedRtMs"] = request.getMaxAllowedRtMs();
  }

  if (!!request.hasMinRequestAmount()) {
    query["MinRequestAmount"] = request.getMinRequestAmount();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRetryTimeoutMs()) {
    query["RetryTimeoutMs"] = request.getRetryTimeoutMs();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasStatIntervalMs()) {
    query["StatIntervalMs"] = request.getStatIntervalMs();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCircuitBreakerRuleResponse>();
}

/**
 * @summary Updates a circuit breaking rule.
 *
 * @param request UpdateCircuitBreakerRuleRequest
 * @return UpdateCircuitBreakerRuleResponse
 */
UpdateCircuitBreakerRuleResponse Client::updateCircuitBreakerRule(const UpdateCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an instance.
 *
 * @param request UpdateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateClusterWithOptions(const UpdateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterAliasName()) {
    query["ClusterAliasName"] = request.getClusterAliasName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaintenanceEndTime()) {
    query["MaintenanceEndTime"] = request.getMaintenanceEndTime();
  }

  if (!!request.hasMaintenanceStartTime()) {
    query["MaintenanceStartTime"] = request.getMaintenanceStartTime();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterResponse>();
}

/**
 * @summary Modifies the information about an instance.
 *
 * @param request UpdateClusterRequest
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateCluster(const UpdateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterWithOptions(request, runtime);
}

/**
 * @summary Updates the number or specifications of nodes in a pay-as-you-go Microservices Engine (MSE) instance.
 *
 * @description You can call this operation to update the number or specifications of nodes in a pay-as-you-go MSE instance. You are charged when you add nodes or upgrade node specifications. For more information, see [Pricing] (`~~1806469~~`).
 *
 * @param request UpdateClusterSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterSpecResponse
 */
UpdateClusterSpecResponse Client::updateClusterSpecWithOptions(const UpdateClusterSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterSpecification()) {
    query["ClusterSpecification"] = request.getClusterSpecification();
  }

  if (!!request.hasInstanceCount()) {
    query["InstanceCount"] = request.getInstanceCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMseVersion()) {
    query["MseVersion"] = request.getMseVersion();
  }

  if (!!request.hasPubNetworkFlow()) {
    query["PubNetworkFlow"] = request.getPubNetworkFlow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClusterSpec"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterSpecResponse>();
}

/**
 * @summary Updates the number or specifications of nodes in a pay-as-you-go Microservices Engine (MSE) instance.
 *
 * @description You can call this operation to update the number or specifications of nodes in a pay-as-you-go MSE instance. You are charged when you add nodes or upgrade node specifications. For more information, see [Pricing] (`~~1806469~~`).
 *
 * @param request UpdateClusterSpecRequest
 * @return UpdateClusterSpecResponse
 */
UpdateClusterSpecResponse Client::updateClusterSpec(const UpdateClusterSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterSpecWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of an instance.
 *
 * @param request UpdateConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfigWithOptions(const UpdateConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthEnabled()) {
    query["AuthEnabled"] = request.getAuthEnabled();
  }

  if (!!request.hasAutopurgePurgeInterval()) {
    query["AutopurgePurgeInterval"] = request.getAutopurgePurgeInterval();
  }

  if (!!request.hasAutopurgeSnapRetainCount()) {
    query["AutopurgeSnapRetainCount"] = request.getAutopurgeSnapRetainCount();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigAuthEnabled()) {
    query["ConfigAuthEnabled"] = request.getConfigAuthEnabled();
  }

  if (!!request.hasConfigSecretEnabled()) {
    query["ConfigSecretEnabled"] = request.getConfigSecretEnabled();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasConsoleUIEnabled()) {
    query["ConsoleUIEnabled"] = request.getConsoleUIEnabled();
  }

  if (!!request.hasEnable4lw()) {
    query["Enable4lw"] = request.getEnable4lw();
  }

  if (!!request.hasEurekaSupported()) {
    query["EurekaSupported"] = request.getEurekaSupported();
  }

  if (!!request.hasExtendedTypesEnable()) {
    query["ExtendedTypesEnable"] = request.getExtendedTypesEnable();
  }

  if (!!request.hasInitLimit()) {
    query["InitLimit"] = request.getInitLimit();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJuteMaxbuffer()) {
    query["JuteMaxbuffer"] = request.getJuteMaxbuffer();
  }

  if (!!request.hasMCPEnabled()) {
    query["MCPEnabled"] = request.getMCPEnabled();
  }

  if (!!request.hasMaxClientCnxns()) {
    query["MaxClientCnxns"] = request.getMaxClientCnxns();
  }

  if (!!request.hasMaxSessionTimeout()) {
    query["MaxSessionTimeout"] = request.getMaxSessionTimeout();
  }

  if (!!request.hasMinSessionTimeout()) {
    query["MinSessionTimeout"] = request.getMinSessionTimeout();
  }

  if (!!request.hasNamingAuthEnabled()) {
    query["NamingAuthEnabled"] = request.getNamingAuthEnabled();
  }

  if (!!request.hasPassWord()) {
    query["PassWord"] = request.getPassWord();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasSnapshotCount()) {
    query["SnapshotCount"] = request.getSnapshotCount();
  }

  if (!!request.hasSyncLimit()) {
    query["SyncLimit"] = request.getSyncLimit();
  }

  if (!!request.hasTLSEnabled()) {
    query["TLSEnabled"] = request.getTLSEnabled();
  }

  if (!!request.hasTickTime()) {
    query["TickTime"] = request.getTickTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  json body = {};
  if (!!request.hasOpenSuperAcl()) {
    body["OpenSuperAcl"] = request.getOpenSuperAcl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigResponse>();
}

/**
 * @summary Updates the configurations of an instance.
 *
 * @param request UpdateConfigRequest
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfig(const UpdateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a namespace for the Nacos engine.
 *
 * @param request UpdateEngineNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEngineNamespaceResponse
 */
UpdateEngineNamespaceResponse Client::updateEngineNamespaceWithOptions(const UpdateEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasServiceCount()) {
    query["ServiceCount"] = request.getServiceCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEngineNamespace"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEngineNamespaceResponse>();
}

/**
 * @summary Updates a namespace for the Nacos engine.
 *
 * @param request UpdateEngineNamespaceRequest
 * @return UpdateEngineNamespaceResponse
 */
UpdateEngineNamespaceResponse Client::updateEngineNamespace(const UpdateEngineNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEngineNamespaceWithOptions(request, runtime);
}

/**
 * @summary Updates a throttling rule.
 *
 * @param request UpdateFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowRuleResponse
 */
UpdateFlowRuleResponse Client::updateFlowRuleWithOptions(const UpdateFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasControlBehavior()) {
    query["ControlBehavior"] = request.getControlBehavior();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasLimitApp()) {
    query["LimitApp"] = request.getLimitApp();
  }

  if (!!request.hasMaxQueueingTimeMs()) {
    query["MaxQueueingTimeMs"] = request.getMaxQueueingTimeMs();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowRuleResponse>();
}

/**
 * @summary Updates a throttling rule.
 *
 * @param request UpdateFlowRuleRequest
 * @return UpdateFlowRuleResponse
 */
UpdateFlowRuleResponse Client::updateFlowRule(const UpdateFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 更新网关认证
 *
 * @param tmpReq UpdateGatewayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayAuthResponse
 */
UpdateGatewayAuthResponse Client::updateGatewayAuthWithOptions(const UpdateGatewayAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayAuthShrinkRequest request = UpdateGatewayAuthShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthResourceList()) {
    request.setAuthResourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthResourceList(), "AuthResourceList", "json"));
  }

  if (!!tmpReq.hasDeleteResourceIdList()) {
    request.setDeleteResourceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteResourceIdList(), "DeleteResourceIdList", "json"));
  }

  if (!!tmpReq.hasExternalAuthZJSON()) {
    request.setExternalAuthZJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExternalAuthZJSON(), "ExternalAuthZJSON", "json"));
  }

  if (!!tmpReq.hasScopesList()) {
    request.setScopesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScopesList(), "ScopesList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthResourceConfig()) {
    query["AuthResourceConfig"] = request.getAuthResourceConfig();
  }

  if (!!request.hasAuthResourceListShrink()) {
    query["AuthResourceList"] = request.getAuthResourceListShrink();
  }

  if (!!request.hasAuthResourceMode()) {
    query["AuthResourceMode"] = request.getAuthResourceMode();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["ClientSecret"] = request.getClientSecret();
  }

  if (!!request.hasCookieDomain()) {
    query["CookieDomain"] = request.getCookieDomain();
  }

  if (!!request.hasDeleteResourceIdListShrink()) {
    query["DeleteResourceIdList"] = request.getDeleteResourceIdListShrink();
  }

  if (!!request.hasExternalAuthZJSONShrink()) {
    query["ExternalAuthZJSON"] = request.getExternalAuthZJSONShrink();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIsWhite()) {
    query["IsWhite"] = request.getIsWhite();
  }

  if (!!request.hasIssuer()) {
    query["Issuer"] = request.getIssuer();
  }

  if (!!request.hasJwks()) {
    query["Jwks"] = request.getJwks();
  }

  if (!!request.hasLoginUrl()) {
    query["LoginUrl"] = request.getLoginUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRedirectUrl()) {
    query["RedirectUrl"] = request.getRedirectUrl();
  }

  if (!!request.hasScopesListShrink()) {
    query["ScopesList"] = request.getScopesListShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSub()) {
    query["Sub"] = request.getSub();
  }

  if (!!request.hasTokenName()) {
    query["TokenName"] = request.getTokenName();
  }

  if (!!request.hasTokenNamePrefix()) {
    query["TokenNamePrefix"] = request.getTokenNamePrefix();
  }

  if (!!request.hasTokenPass()) {
    query["TokenPass"] = request.getTokenPass();
  }

  if (!!request.hasTokenPosition()) {
    query["TokenPosition"] = request.getTokenPosition();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayAuthResponse>();
}

/**
 * @summary 更新网关认证
 *
 * @param request UpdateGatewayAuthRequest
 * @return UpdateGatewayAuthResponse
 */
UpdateGatewayAuthResponse Client::updateGatewayAuth(const UpdateGatewayAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayAuthWithOptions(request, runtime);
}

/**
 * @summary Updates the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayAuthConsumerResponse
 */
UpdateGatewayAuthConsumerResponse Client::updateGatewayAuthConsumerWithOptions(const UpdateGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEncodeType()) {
    query["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasJwks()) {
    query["Jwks"] = request.getJwks();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasKeyValue()) {
    query["KeyValue"] = request.getKeyValue();
  }

  if (!!request.hasTokenName()) {
    query["TokenName"] = request.getTokenName();
  }

  if (!!request.hasTokenPass()) {
    query["TokenPass"] = request.getTokenPass();
  }

  if (!!request.hasTokenPosition()) {
    query["TokenPosition"] = request.getTokenPosition();
  }

  if (!!request.hasTokenPrefix()) {
    query["TokenPrefix"] = request.getTokenPrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayAuthConsumer"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayAuthConsumerResponse>();
}

/**
 * @summary Updates the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerRequest
 * @return UpdateGatewayAuthConsumerResponse
 */
UpdateGatewayAuthConsumerResponse Client::updateGatewayAuthConsumer(const UpdateGatewayAuthConsumerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayAuthConsumerWithOptions(request, runtime);
}

/**
 * @summary Updates a list of resources on which permissions are granted to a gateway authentication consumer.
 *
 * @param tmpReq UpdateGatewayAuthConsumerResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayAuthConsumerResourceResponse
 */
UpdateGatewayAuthConsumerResourceResponse Client::updateGatewayAuthConsumerResourceWithOptions(const UpdateGatewayAuthConsumerResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayAuthConsumerResourceShrinkRequest request = UpdateGatewayAuthConsumerResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceList()) {
    request.setResourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceList(), "ResourceList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasResourceListShrink()) {
    query["ResourceList"] = request.getResourceListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayAuthConsumerResource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayAuthConsumerResourceResponse>();
}

/**
 * @summary Updates a list of resources on which permissions are granted to a gateway authentication consumer.
 *
 * @param request UpdateGatewayAuthConsumerResourceRequest
 * @return UpdateGatewayAuthConsumerResourceResponse
 */
UpdateGatewayAuthConsumerResourceResponse Client::updateGatewayAuthConsumerResource(const UpdateGatewayAuthConsumerResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayAuthConsumerResourceWithOptions(request, runtime);
}

/**
 * @summary Updates the resource authorization status for the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerResourceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayAuthConsumerResourceStatusResponse
 */
UpdateGatewayAuthConsumerResourceStatusResponse Client::updateGatewayAuthConsumerResourceStatusWithOptions(const UpdateGatewayAuthConsumerResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerId()) {
    query["ConsumerId"] = request.getConsumerId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasIdList()) {
    query["IdList"] = request.getIdList();
  }

  if (!!request.hasResourceStatus()) {
    query["ResourceStatus"] = request.getResourceStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayAuthConsumerResourceStatus"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayAuthConsumerResourceStatusResponse>();
}

/**
 * @summary Updates the resource authorization status for the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerResourceStatusRequest
 * @return UpdateGatewayAuthConsumerResourceStatusResponse
 */
UpdateGatewayAuthConsumerResourceStatusResponse Client::updateGatewayAuthConsumerResourceStatus(const UpdateGatewayAuthConsumerResourceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayAuthConsumerResourceStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayAuthConsumerStatusResponse
 */
UpdateGatewayAuthConsumerStatusResponse Client::updateGatewayAuthConsumerStatusWithOptions(const UpdateGatewayAuthConsumerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConsumerStatus()) {
    query["ConsumerStatus"] = request.getConsumerStatus();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayAuthConsumerStatus"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayAuthConsumerStatusResponse>();
}

/**
 * @summary Updates the status of the consumer on which a gateway performs authentication operations.
 *
 * @param request UpdateGatewayAuthConsumerStatusRequest
 * @return UpdateGatewayAuthConsumerStatusResponse
 */
UpdateGatewayAuthConsumerStatusResponse Client::updateGatewayAuthConsumerStatus(const UpdateGatewayAuthConsumerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayAuthConsumerStatusWithOptions(request, runtime);
}

/**
 * @summary 更新网关路由熔断规则
 *
 * @param request UpdateGatewayCircuitBreakerRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayCircuitBreakerRuleResponse
 */
UpdateGatewayCircuitBreakerRuleResponse Client::updateGatewayCircuitBreakerRuleWithOptions(const UpdateGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMaxAllowedMs()) {
    query["MaxAllowedMs"] = request.getMaxAllowedMs();
  }

  if (!!request.hasMinRequestAmount()) {
    query["MinRequestAmount"] = request.getMinRequestAmount();
  }

  if (!!request.hasRecoveryTimeoutSec()) {
    query["RecoveryTimeoutSec"] = request.getRecoveryTimeoutSec();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasStatDurationSec()) {
    query["StatDurationSec"] = request.getStatDurationSec();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasTriggerRatio()) {
    query["TriggerRatio"] = request.getTriggerRatio();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayCircuitBreakerRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayCircuitBreakerRuleResponse>();
}

/**
 * @summary 更新网关路由熔断规则
 *
 * @param request UpdateGatewayCircuitBreakerRuleRequest
 * @return UpdateGatewayCircuitBreakerRuleResponse
 */
UpdateGatewayCircuitBreakerRuleResponse Client::updateGatewayCircuitBreakerRule(const UpdateGatewayCircuitBreakerRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

/**
 * @summary 更新网关配置
 *
 * @param request UpdateGatewayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayConfigResponse
 */
UpdateGatewayConfigResponse Client::updateGatewayConfigWithOptions(const UpdateGatewayConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayConfigResponse>();
}

/**
 * @summary 更新网关配置
 *
 * @param request UpdateGatewayConfigRequest
 * @return UpdateGatewayConfigResponse
 */
UpdateGatewayConfigResponse Client::updateGatewayConfig(const UpdateGatewayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about the domain name associated with a gateway.
 *
 * @param tmpReq UpdateGatewayDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayDomainResponse
 */
UpdateGatewayDomainResponse Client::updateGatewayDomainWithOptions(const UpdateGatewayDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayDomainShrinkRequest request = UpdateGatewayDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTlsCipherSuitesConfigJSON()) {
    request.setTlsCipherSuitesConfigJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTlsCipherSuitesConfigJSON(), "TlsCipherSuitesConfigJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.getHttp2();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMustHttps()) {
    query["MustHttps"] = request.getMustHttps();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasTlsCipherSuitesConfigJSONShrink()) {
    query["TlsCipherSuitesConfigJSON"] = request.getTlsCipherSuitesConfigJSONShrink();
  }

  if (!!request.hasTlsMax()) {
    query["TlsMax"] = request.getTlsMax();
  }

  if (!!request.hasTlsMin()) {
    query["TlsMin"] = request.getTlsMin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayDomain"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayDomainResponse>();
}

/**
 * @summary Modifies the information about the domain name associated with a gateway.
 *
 * @param request UpdateGatewayDomainRequest
 * @return UpdateGatewayDomainResponse
 */
UpdateGatewayDomainResponse Client::updateGatewayDomain(const UpdateGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayDomainWithOptions(request, runtime);
}

/**
 * @summary 更新网关路由流控规则
 *
 * @param request UpdateGatewayFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayFlowRuleResponse
 */
UpdateGatewayFlowRuleResponse Client::updateGatewayFlowRuleWithOptions(const UpdateGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayFlowRuleResponse>();
}

/**
 * @summary 更新网关路由流控规则
 *
 * @param request UpdateGatewayFlowRuleRequest
 * @return UpdateGatewayFlowRuleResponse
 */
UpdateGatewayFlowRuleResponse Client::updateGatewayFlowRule(const UpdateGatewayFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayFlowRuleWithOptions(request, runtime);
}

/**
 * @summary 更新网关路由隔离规则
 *
 * @param request UpdateGatewayIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayIsolationRuleResponse
 */
UpdateGatewayIsolationRuleResponse Client::updateGatewayIsolationRuleWithOptions(const UpdateGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasBehaviorType()) {
    query["BehaviorType"] = request.getBehaviorType();
  }

  if (!!request.hasBodyEncoding()) {
    query["BodyEncoding"] = request.getBodyEncoding();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasResponseContentBody()) {
    query["ResponseContentBody"] = request.getResponseContentBody();
  }

  if (!!request.hasResponseRedirectUrl()) {
    query["ResponseRedirectUrl"] = request.getResponseRedirectUrl();
  }

  if (!!request.hasResponseStatusCode()) {
    query["ResponseStatusCode"] = request.getResponseStatusCode();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayIsolationRuleResponse>();
}

/**
 * @summary 更新网关路由隔离规则
 *
 * @param request UpdateGatewayIsolationRuleRequest
 * @return UpdateGatewayIsolationRuleResponse
 */
UpdateGatewayIsolationRuleResponse Client::updateGatewayIsolationRule(const UpdateGatewayIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayIsolationRuleWithOptions(request, runtime);
}

/**
 * @summary Renames a gateway.
 *
 * @param request UpdateGatewayNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayNameResponse
 */
UpdateGatewayNameResponse Client::updateGatewayNameWithOptions(const UpdateGatewayNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayName"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayNameResponse>();
}

/**
 * @summary Renames a gateway.
 *
 * @param request UpdateGatewayNameRequest
 * @return UpdateGatewayNameResponse
 */
UpdateGatewayNameResponse Client::updateGatewayName(const UpdateGatewayNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayNameWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of a gateway.
 *
 * @param tmpReq UpdateGatewayOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayOptionResponse
 */
UpdateGatewayOptionResponse Client::updateGatewayOptionWithOptions(const UpdateGatewayOptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayOptionShrinkRequest request = UpdateGatewayOptionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGatewayOption()) {
    request.setGatewayOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGatewayOption(), "GatewayOption", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayOptionShrink()) {
    query["GatewayOption"] = request.getGatewayOptionShrink();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayOption"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayOptionResponse>();
}

/**
 * @summary Updates the configurations of a gateway.
 *
 * @param request UpdateGatewayOptionRequest
 * @return UpdateGatewayOptionResponse
 */
UpdateGatewayOptionResponse Client::updateGatewayOption(const UpdateGatewayOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayOptionWithOptions(request, runtime);
}

/**
 * @summary Updates a route for a gateway.
 *
 * @param tmpReq UpdateGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteResponse
 */
UpdateGatewayRouteResponse Client::updateGatewayRouteWithOptions(const UpdateGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayRouteShrinkRequest request = UpdateGatewayRouteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDirectResponseJSON()) {
    request.setDirectResponseJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDirectResponseJSON(), "DirectResponseJSON", "json"));
  }

  if (!!tmpReq.hasFallbackServices()) {
    request.setFallbackServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFallbackServices(), "FallbackServices", "json"));
  }

  if (!!tmpReq.hasPredicates()) {
    request.setPredicatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPredicates(), "Predicates", "json"));
  }

  if (!!tmpReq.hasRedirectJSON()) {
    request.setRedirectJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirectJSON(), "RedirectJSON", "json"));
  }

  if (!!tmpReq.hasServices()) {
    request.setServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServices(), "Services", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirectResponseJSONShrink()) {
    query["DirectResponseJSON"] = request.getDirectResponseJSONShrink();
  }

  if (!!request.hasDomainIdListJSON()) {
    query["DomainIdListJSON"] = request.getDomainIdListJSON();
  }

  if (!!request.hasEnableWaf()) {
    query["EnableWaf"] = request.getEnableWaf();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.getFallback();
  }

  if (!!request.hasFallbackServicesShrink()) {
    query["FallbackServices"] = request.getFallbackServicesShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPredicatesShrink()) {
    query["Predicates"] = request.getPredicatesShrink();
  }

  if (!!request.hasRedirectJSONShrink()) {
    query["RedirectJSON"] = request.getRedirectJSONShrink();
  }

  if (!!request.hasRouteOrder()) {
    query["RouteOrder"] = request.getRouteOrder();
  }

  if (!!request.hasServicesShrink()) {
    query["Services"] = request.getServicesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteResponse>();
}

/**
 * @summary Updates a route for a gateway.
 *
 * @param request UpdateGatewayRouteRequest
 * @return UpdateGatewayRouteResponse
 */
UpdateGatewayRouteResponse Client::updateGatewayRoute(const UpdateGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Updates the authentication configurations of a route.
 *
 * @param tmpReq UpdateGatewayRouteAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteAuthResponse
 */
UpdateGatewayRouteAuthResponse Client::updateGatewayRouteAuthWithOptions(const UpdateGatewayRouteAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayRouteAuthShrinkRequest request = UpdateGatewayRouteAuthShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthJSON()) {
    request.setAuthJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthJSON(), "AuthJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAuthJSONShrink()) {
    query["AuthJSON"] = request.getAuthJSONShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteAuth"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteAuthResponse>();
}

/**
 * @summary Updates the authentication configurations of a route.
 *
 * @param request UpdateGatewayRouteAuthRequest
 * @return UpdateGatewayRouteAuthResponse
 */
UpdateGatewayRouteAuthResponse Client::updateGatewayRouteAuth(const UpdateGatewayRouteAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteAuthWithOptions(request, runtime);
}

/**
 * @summary Modifies the cross-origin resource sharing (CORS) policy of a route.
 *
 * @param tmpReq UpdateGatewayRouteCORSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteCORSResponse
 */
UpdateGatewayRouteCORSResponse Client::updateGatewayRouteCORSWithOptions(const UpdateGatewayRouteCORSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayRouteCORSShrinkRequest request = UpdateGatewayRouteCORSShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCorsJSON()) {
    request.setCorsJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCorsJSON(), "CorsJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCorsJSONShrink()) {
    query["CorsJSON"] = request.getCorsJSONShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteCORS"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteCORSResponse>();
}

/**
 * @summary Modifies the cross-origin resource sharing (CORS) policy of a route.
 *
 * @param request UpdateGatewayRouteCORSRequest
 * @return UpdateGatewayRouteCORSResponse
 */
UpdateGatewayRouteCORSResponse Client::updateGatewayRouteCORS(const UpdateGatewayRouteCORSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteCORSWithOptions(request, runtime);
}

/**
 * @summary Updates the rewrite policy of a route for a gateway.
 *
 * @param request UpdateGatewayRouteHTTPRewriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteHTTPRewriteResponse
 */
UpdateGatewayRouteHTTPRewriteResponse Client::updateGatewayRouteHTTPRewriteWithOptions(const UpdateGatewayRouteHTTPRewriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHttpRewriteJSON()) {
    query["HttpRewriteJSON"] = request.getHttpRewriteJSON();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteHTTPRewrite"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteHTTPRewriteResponse>();
}

/**
 * @summary Updates the rewrite policy of a route for a gateway.
 *
 * @param request UpdateGatewayRouteHTTPRewriteRequest
 * @return UpdateGatewayRouteHTTPRewriteResponse
 */
UpdateGatewayRouteHTTPRewriteResponse Client::updateGatewayRouteHTTPRewrite(const UpdateGatewayRouteHTTPRewriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteHTTPRewriteWithOptions(request, runtime);
}

/**
 * @summary Modifies the header configuration policy of a route.
 *
 * @param request UpdateGatewayRouteHeaderOpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteHeaderOpResponse
 */
UpdateGatewayRouteHeaderOpResponse Client::updateGatewayRouteHeaderOpWithOptions(const UpdateGatewayRouteHeaderOpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHeaderOpJSON()) {
    query["HeaderOpJSON"] = request.getHeaderOpJSON();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteHeaderOp"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteHeaderOpResponse>();
}

/**
 * @summary Modifies the header configuration policy of a route.
 *
 * @param request UpdateGatewayRouteHeaderOpRequest
 * @return UpdateGatewayRouteHeaderOpResponse
 */
UpdateGatewayRouteHeaderOpResponse Client::updateGatewayRouteHeaderOp(const UpdateGatewayRouteHeaderOpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteHeaderOpWithOptions(request, runtime);
}

/**
 * @summary Modifies the retry policy of a route.
 *
 * @param tmpReq UpdateGatewayRouteRetryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteRetryResponse
 */
UpdateGatewayRouteRetryResponse Client::updateGatewayRouteRetryWithOptions(const UpdateGatewayRouteRetryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayRouteRetryShrinkRequest request = UpdateGatewayRouteRetryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRetryJSON()) {
    request.setRetryJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRetryJSON(), "RetryJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasRetryJSONShrink()) {
    query["RetryJSON"] = request.getRetryJSONShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteRetry"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteRetryResponse>();
}

/**
 * @summary Modifies the retry policy of a route.
 *
 * @param request UpdateGatewayRouteRetryRequest
 * @return UpdateGatewayRouteRetryResponse
 */
UpdateGatewayRouteRetryResponse Client::updateGatewayRouteRetry(const UpdateGatewayRouteRetryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteRetryWithOptions(request, runtime);
}

/**
 * @summary Modifies the timeout policy of a route.
 *
 * @param tmpReq UpdateGatewayRouteTimeoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteTimeoutResponse
 */
UpdateGatewayRouteTimeoutResponse Client::updateGatewayRouteTimeoutWithOptions(const UpdateGatewayRouteTimeoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayRouteTimeoutShrinkRequest request = UpdateGatewayRouteTimeoutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTimeoutJSON()) {
    request.setTimeoutJSONShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTimeoutJSON(), "TimeoutJSON", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasTimeoutJSONShrink()) {
    query["TimeoutJSON"] = request.getTimeoutJSONShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteTimeout"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteTimeoutResponse>();
}

/**
 * @summary Modifies the timeout policy of a route.
 *
 * @param request UpdateGatewayRouteTimeoutRequest
 * @return UpdateGatewayRouteTimeoutResponse
 */
UpdateGatewayRouteTimeoutResponse Client::updateGatewayRouteTimeout(const UpdateGatewayRouteTimeoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteTimeoutWithOptions(request, runtime);
}

/**
 * @summary Updates the WAF status of a route.
 *
 * @param request UpdateGatewayRouteWafStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayRouteWafStatusResponse
 */
UpdateGatewayRouteWafStatusResponse Client::updateGatewayRouteWafStatusWithOptions(const UpdateGatewayRouteWafStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasEnableWaf()) {
    query["EnableWaf"] = request.getEnableWaf();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasRouteId()) {
    query["RouteId"] = request.getRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayRouteWafStatus"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayRouteWafStatusResponse>();
}

/**
 * @summary Updates the WAF status of a route.
 *
 * @param request UpdateGatewayRouteWafStatusRequest
 * @return UpdateGatewayRouteWafStatusResponse
 */
UpdateGatewayRouteWafStatusResponse Client::updateGatewayRouteWafStatus(const UpdateGatewayRouteWafStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayRouteWafStatusWithOptions(request, runtime);
}

/**
 * @summary 更新服务
 *
 * @param tmpReq UpdateGatewayServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayServiceResponse
 */
UpdateGatewayServiceResponse Client::updateGatewayServiceWithOptions(const UpdateGatewayServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayServiceShrinkRequest request = UpdateGatewayServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDnsServerList()) {
    request.setDnsServerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDnsServerList(), "DnsServerList", "json"));
  }

  if (!!tmpReq.hasIpList()) {
    request.setIpListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpList(), "IpList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasDnsServerListShrink()) {
    query["DnsServerList"] = request.getDnsServerListShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIpListShrink()) {
    query["IpList"] = request.getIpListShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasServicePort()) {
    query["ServicePort"] = request.getServicePort();
  }

  if (!!request.hasServiceProtocol()) {
    query["ServiceProtocol"] = request.getServiceProtocol();
  }

  if (!!request.hasTlsSetting()) {
    query["TlsSetting"] = request.getTlsSetting();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayServiceResponse>();
}

/**
 * @summary 更新服务
 *
 * @param request UpdateGatewayServiceRequest
 * @return UpdateGatewayServiceResponse
 */
UpdateGatewayServiceResponse Client::updateGatewayService(const UpdateGatewayServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the health check policy of a specified service in a cloud-native gateway.
 *
 * @param tmpReq UpdateGatewayServiceCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayServiceCheckResponse
 */
UpdateGatewayServiceCheckResponse Client::updateGatewayServiceCheckWithOptions(const UpdateGatewayServiceCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayServiceCheckShrinkRequest request = UpdateGatewayServiceCheckShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExpectedStatuses()) {
    request.setExpectedStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExpectedStatuses(), "ExpectedStatuses", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCheck()) {
    query["Check"] = request.getCheck();
  }

  if (!!request.hasExpectedStatusesShrink()) {
    query["ExpectedStatuses"] = request.getExpectedStatusesShrink();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.getHealthyThreshold();
  }

  if (!!request.hasHttpHost()) {
    query["HttpHost"] = request.getHttpHost();
  }

  if (!!request.hasHttpPath()) {
    query["HttpPath"] = request.getHttpPath();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.getUnhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayServiceCheck"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayServiceCheckResponse>();
}

/**
 * @summary Updates the health check policy of a specified service in a cloud-native gateway.
 *
 * @param request UpdateGatewayServiceCheckRequest
 * @return UpdateGatewayServiceCheckResponse
 */
UpdateGatewayServiceCheckResponse Client::updateGatewayServiceCheck(const UpdateGatewayServiceCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayServiceCheckWithOptions(request, runtime);
}

/**
 * @summary Updates the traffic policy of a service.
 *
 * @param tmpReq UpdateGatewayServiceTrafficPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayServiceTrafficPolicyResponse
 */
UpdateGatewayServiceTrafficPolicyResponse Client::updateGatewayServiceTrafficPolicyWithOptions(const UpdateGatewayServiceTrafficPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateGatewayServiceTrafficPolicyShrinkRequest request = UpdateGatewayServiceTrafficPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGatewayTrafficPolicy()) {
    request.setGatewayTrafficPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGatewayTrafficPolicy(), "GatewayTrafficPolicy", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayTrafficPolicyShrink()) {
    query["GatewayTrafficPolicy"] = request.getGatewayTrafficPolicyShrink();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayServiceTrafficPolicy"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayServiceTrafficPolicyResponse>();
}

/**
 * @summary Updates the traffic policy of a service.
 *
 * @param request UpdateGatewayServiceTrafficPolicyRequest
 * @return UpdateGatewayServiceTrafficPolicyResponse
 */
UpdateGatewayServiceTrafficPolicyResponse Client::updateGatewayServiceTrafficPolicy(const UpdateGatewayServiceTrafficPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayServiceTrafficPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the version of a service.
 *
 * @param request UpdateGatewayServiceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayServiceVersionResponse
 */
UpdateGatewayServiceVersionResponse Client::updateGatewayServiceVersionWithOptions(const UpdateGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayServiceVersion"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayServiceVersionResponse>();
}

/**
 * @summary Modifies the version of a service.
 *
 * @param request UpdateGatewayServiceVersionRequest
 * @return UpdateGatewayServiceVersionResponse
 */
UpdateGatewayServiceVersionResponse Client::updateGatewayServiceVersion(const UpdateGatewayServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayServiceVersionWithOptions(request, runtime);
}

/**
 * @summary Updates the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway.
 *
 * @description You can call this operation to update the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway. If you add nodes or increase the specifications, you will incur fees. For more information, see [Pricing](https://help.aliyun.com/document_detail/250950.html).
 *
 * @param request UpdateGatewaySpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewaySpecResponse
 */
UpdateGatewaySpecResponse Client::updateGatewaySpecWithOptions(const UpdateGatewaySpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasReplica()) {
    query["Replica"] = request.getReplica();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGatewaySpec"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewaySpecResponse>();
}

/**
 * @summary Updates the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway.
 *
 * @description You can call this operation to update the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway. If you add nodes or increase the specifications, you will incur fees. For more information, see [Pricing](https://help.aliyun.com/document_detail/250950.html).
 *
 * @param request UpdateGatewaySpecRequest
 * @return UpdateGatewaySpecResponse
 */
UpdateGatewaySpecResponse Client::updateGatewaySpec(const UpdateGatewaySpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewaySpecWithOptions(request, runtime);
}

/**
 * @summary Updates the version number of the destination cluster.
 *
 * @param request UpdateImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageResponse
 */
UpdateImageResponse Client::updateImageWithOptions(const UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateImage"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageResponse>();
}

/**
 * @summary Updates the version number of the destination cluster.
 *
 * @param request UpdateImageRequest
 * @return UpdateImageResponse
 */
UpdateImageResponse Client::updateImage(const UpdateImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageWithOptions(request, runtime);
}

/**
 * @summary 更新隔离规则
 *
 * @param request UpdateIsolationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIsolationRuleResponse
 */
UpdateIsolationRuleResponse Client::updateIsolationRuleWithOptions(const UpdateIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasLimitApp()) {
    query["LimitApp"] = request.getLimitApp();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIsolationRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIsolationRuleResponse>();
}

/**
 * @summary 更新隔离规则
 *
 * @param request UpdateIsolationRuleRequest
 * @return UpdateIsolationRuleResponse
 */
UpdateIsolationRuleResponse Client::updateIsolationRule(const UpdateIsolationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIsolationRuleWithOptions(request, runtime);
}

/**
 * @summary 更新同AZ路由规则
 *
 * @param request UpdateLocalityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLocalityRuleResponse
 */
UpdateLocalityRuleResponse Client::updateLocalityRuleWithOptions(const UpdateLocalityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLocalityRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLocalityRuleResponse>();
}

/**
 * @summary 更新同AZ路由规则
 *
 * @param request UpdateLocalityRuleRequest
 * @return UpdateLocalityRuleResponse
 */
UpdateLocalityRuleResponse Client::updateLocalityRule(const UpdateLocalityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLocalityRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a canary release for messaging of an application.
 *
 * @param tmpReq UpdateMessageQueueRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMessageQueueRouteResponse
 */
UpdateMessageQueueRouteResponse Client::updateMessageQueueRouteWithOptions(const UpdateMessageQueueRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMessageQueueRouteShrinkRequest request = UpdateMessageQueueRouteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGrayBaseTags()) {
    request.setGrayBaseTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGrayBaseTags(), "GrayBaseTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasFilterSide()) {
    query["FilterSide"] = request.getFilterSide();
  }

  if (!!request.hasGrayBaseTagsShrink()) {
    query["GrayBaseTags"] = request.getGrayBaseTagsShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMessageQueueRoute"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMessageQueueRouteResponse>();
}

/**
 * @summary Updates the configuration of a canary release for messaging of an application.
 *
 * @param request UpdateMessageQueueRouteRequest
 * @return UpdateMessageQueueRouteResponse
 */
UpdateMessageQueueRouteResponse Client::updateMessageQueueRoute(const UpdateMessageQueueRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMessageQueueRouteWithOptions(request, runtime);
}

/**
 * @summary Updates a migration task.
 *
 * @param request UpdateMigrationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMigrationTaskResponse
 */
UpdateMigrationTaskResponse Client::updateMigrationTaskWithOptions(const UpdateMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOriginInstanceAddress()) {
    query["OriginInstanceAddress"] = request.getOriginInstanceAddress();
  }

  if (!!request.hasOriginInstanceName()) {
    query["OriginInstanceName"] = request.getOriginInstanceName();
  }

  if (!!request.hasOriginInstanceNamespace()) {
    query["OriginInstanceNamespace"] = request.getOriginInstanceNamespace();
  }

  if (!!request.hasProjectDesc()) {
    query["ProjectDesc"] = request.getProjectDesc();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasSyncType()) {
    query["SyncType"] = request.getSyncType();
  }

  if (!!request.hasTargetClusterName()) {
    query["TargetClusterName"] = request.getTargetClusterName();
  }

  if (!!request.hasTargetClusterUrl()) {
    query["TargetClusterUrl"] = request.getTargetClusterUrl();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.getTargetInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMigrationTask"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMigrationTaskResponse>();
}

/**
 * @summary Updates a migration task.
 *
 * @param request UpdateMigrationTaskRequest
 * @return UpdateMigrationTaskResponse
 */
UpdateMigrationTaskResponse Client::updateMigrationTask(const UpdateMigrationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMigrationTaskWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Nacos cluster.
 *
 * @param request UpdateNacosClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacosClusterResponse
 */
UpdateNacosClusterResponse Client::updateNacosClusterWithOptions(const UpdateNacosClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCheckPort()) {
    query["CheckPort"] = request.getCheckPort();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasHealthChecker()) {
    query["HealthChecker"] = request.getHealthChecker();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasUseInstancePortForCheck()) {
    query["UseInstancePortForCheck"] = request.getUseInstancePortForCheck();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNacosCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacosClusterResponse>();
}

/**
 * @summary Updates the information about a Nacos cluster.
 *
 * @param request UpdateNacosClusterRequest
 * @return UpdateNacosClusterResponse
 */
UpdateNacosClusterResponse Client::updateNacosCluster(const UpdateNacosClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacosClusterWithOptions(request, runtime);
}

/**
 * @summary Updates a Nacos configuration.
 *
 * @description >  The current API operation is not provided in Nacos SDK. For more information about Nacos SDK, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacosConfigResponse
 */
UpdateNacosConfigResponse Client::updateNacosConfigWithOptions(const UpdateNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBetaIps()) {
    query["BetaIps"] = request.getBetaIps();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasEncryptedDataKey()) {
    query["EncryptedDataKey"] = request.getEncryptedDataKey();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateNacosConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacosConfigResponse>();
}

/**
 * @summary Updates a Nacos configuration.
 *
 * @description >  The current API operation is not provided in Nacos SDK. For more information about Nacos SDK, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosConfigRequest
 * @return UpdateNacosConfigResponse
 */
UpdateNacosConfigResponse Client::updateNacosConfig(const UpdateNacosConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacosConfigWithOptions(request, runtime);
}

/**
 * @summary 更新nacos灰度配置
 *
 * @param request UpdateNacosGrayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacosGrayConfigResponse
 */
UpdateNacosGrayConfigResponse Client::updateNacosGrayConfigWithOptions(const UpdateNacosGrayConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasGrayRule()) {
    query["GrayRule"] = request.getGrayRule();
  }

  if (!!request.hasGrayRuleName()) {
    query["GrayRuleName"] = request.getGrayRuleName();
  }

  if (!!request.hasGrayRulePriority()) {
    query["GrayRulePriority"] = request.getGrayRulePriority();
  }

  if (!!request.hasGrayType()) {
    query["GrayType"] = request.getGrayType();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasOpType()) {
    query["OpType"] = request.getOpType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasStopGray()) {
    query["StopGray"] = request.getStopGray();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNacosGrayConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacosGrayConfigResponse>();
}

/**
 * @summary 更新nacos灰度配置
 *
 * @param request UpdateNacosGrayConfigRequest
 * @return UpdateNacosGrayConfigResponse
 */
UpdateNacosGrayConfigResponse Client::updateNacosGrayConfig(const UpdateNacosGrayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacosGrayConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the information about application instances that are registered with a Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacosInstanceResponse
 */
UpdateNacosInstanceResponse Client::updateNacosInstanceWithOptions(const UpdateNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasEphemeral()) {
    query["Ephemeral"] = request.getEphemeral();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  json body = {};
  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateNacosInstance"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacosInstanceResponse>();
}

/**
 * @summary Updates the information about application instances that are registered with a Nacos instance.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosInstanceRequest
 * @return UpdateNacosInstanceResponse
 */
UpdateNacosInstanceResponse Client::updateNacosInstance(const UpdateNacosInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacosInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacosServiceResponse
 */
UpdateNacosServiceResponse Client::updateNacosServiceWithOptions(const UpdateNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasProtectThreshold()) {
    query["ProtectThreshold"] = request.getProtectThreshold();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNacosService"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacosServiceResponse>();
}

/**
 * @summary Updates the information about a Nacos service.
 *
 * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
 *
 * @param request UpdateNacosServiceRequest
 * @return UpdateNacosServiceResponse
 */
UpdateNacosServiceResponse Client::updateNacosService(const UpdateNacosServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacosServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a plug-in.
 *
 * @param tmpReq UpdatePluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePluginConfigResponse
 */
UpdatePluginConfigResponse Client::updatePluginConfigWithOptions(const UpdatePluginConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePluginConfigShrinkRequest request = UpdatePluginConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIdList()) {
    request.setResourceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceIdList(), "ResourceIdList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasConfigLevel()) {
    query["ConfigLevel"] = request.getConfigLevel();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasGmtCreate()) {
    query["GmtCreate"] = request.getGmtCreate();
  }

  if (!!request.hasGmtModified()) {
    query["GmtModified"] = request.getGmtModified();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasResourceIdListShrink()) {
    query["ResourceIdList"] = request.getResourceIdListShrink();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePluginConfig"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePluginConfigResponse>();
}

/**
 * @summary Updates the configuration of a plug-in.
 *
 * @param request UpdatePluginConfigRequest
 * @return UpdatePluginConfigResponse
 */
UpdatePluginConfigResponse Client::updatePluginConfig(const UpdatePluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePluginConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a certificate.
 *
 * @param request UpdateSSLCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSSLCertResponse
 */
UpdateSSLCertResponse Client::updateSSLCertWithOptions(const UpdateSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSSLCert"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSSLCertResponse>();
}

/**
 * @summary Updates a certificate.
 *
 * @param request UpdateSSLCertRequest
 * @return UpdateSSLCertResponse
 */
UpdateSSLCertResponse Client::updateSSLCert(const UpdateSSLCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSSLCertWithOptions(request, runtime);
}

/**
 * @summary Modifies service sources of a cloud-native gateway. You can modify only Container Service for Kubernetes (ACK) service sources that contain configurations related to Ingress resource monitoring.
 *
 * @param tmpReq UpdateServiceSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceSourceResponse
 */
UpdateServiceSourceResponse Client::updateServiceSourceWithOptions(const UpdateServiceSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateServiceSourceShrinkRequest request = UpdateServiceSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIngressOptionsRequest()) {
    request.setIngressOptionsRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIngressOptionsRequest(), "IngressOptionsRequest", "json"));
  }

  if (!!tmpReq.hasPathList()) {
    request.setPathListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPathList(), "PathList", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
  }

  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.getGatewayUniqueId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIngressOptionsRequestShrink()) {
    query["IngressOptionsRequest"] = request.getIngressOptionsRequestShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPathListShrink()) {
    query["PathList"] = request.getPathListShrink();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceSource"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceSourceResponse>();
}

/**
 * @summary Modifies service sources of a cloud-native gateway. You can modify only Container Service for Kubernetes (ACK) service sources that contain configurations related to Ingress resource monitoring.
 *
 * @param request UpdateServiceSourceRequest
 * @return UpdateServiceSourceResponse
 */
UpdateServiceSourceResponse Client::updateServiceSource(const UpdateServiceSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceSourceWithOptions(request, runtime);
}

/**
 * @summary 更新热点参数防护规则（HTTP 请求）
 *
 * @param request UpdateWebFlowRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebFlowRuleResponse
 */
UpdateWebFlowRuleResponse Client::updateWebFlowRuleWithOptions(const UpdateWebFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBurst()) {
    query["Burst"] = request.getBurst();
  }

  if (!!request.hasControlBehavior()) {
    query["ControlBehavior"] = request.getControlBehavior();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasMaxQueueingTimeMs()) {
    query["MaxQueueingTimeMs"] = request.getMaxQueueingTimeMs();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasParamItem()) {
    query["ParamItem"] = request.getParamItem();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceMode()) {
    query["ResourceMode"] = request.getResourceMode();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasStatIntervalMs()) {
    query["StatIntervalMs"] = request.getStatIntervalMs();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWebFlowRule"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebFlowRuleResponse>();
}

/**
 * @summary 更新热点参数防护规则（HTTP 请求）
 *
 * @param request UpdateWebFlowRuleRequest
 * @return UpdateWebFlowRuleResponse
 */
UpdateWebFlowRuleResponse Client::updateWebFlowRule(const UpdateWebFlowRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebFlowRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a ZooKeeper node.
 *
 * @param request UpdateZnodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateZnodeResponse
 */
UpdateZnodeResponse Client::updateZnodeWithOptions(const UpdateZnodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateZnode"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateZnodeResponse>();
}

/**
 * @summary Updates the information about a ZooKeeper node.
 *
 * @param request UpdateZnodeRequest
 * @return UpdateZnodeResponse
 */
UpdateZnodeResponse Client::updateZnode(const UpdateZnodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateZnodeWithOptions(request, runtime);
}

/**
 * @summary Upgrades the version of a cluster.
 *
 * @param request UpgradeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeClusterResponse
 */
UpgradeClusterResponse Client::upgradeClusterWithOptions(const UpgradeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestPars()) {
    query["RequestPars"] = request.getRequestPars();
  }

  if (!!request.hasUpgradeVersion()) {
    query["UpgradeVersion"] = request.getUpgradeVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeCluster"},
    {"version" , "2019-05-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeClusterResponse>();
}

/**
 * @summary Upgrades the version of a cluster.
 *
 * @param request UpgradeClusterRequest
 * @return UpgradeClusterResponse
 */
UpgradeClusterResponse Client::upgradeCluster(const UpgradeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeClusterWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mse20190531