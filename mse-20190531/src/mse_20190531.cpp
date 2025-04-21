// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mse_20190531.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Mse20190531;

Alibabacloud_Mse20190531::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mse"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mse20190531::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddAuthPolicyResponse Alibabacloud_Mse20190531::Client::addAuthPolicyWithOptions(shared_ptr<AddAuthPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authRule)) {
    query->insert(pair<string, string>("AuthRule", *request->authRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authType)) {
    query->insert(pair<string, long>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sNamespace)) {
    query->insert(pair<string, string>("K8sNamespace", *request->k8sNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAuthPolicy"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAuthPolicyResponse(callApi(params, req, runtime));
}

AddAuthPolicyResponse Alibabacloud_Mse20190531::Client::addAuthPolicy(shared_ptr<AddAuthPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAuthPolicyWithOptions(request, runtime);
}

AddAuthResourceResponse Alibabacloud_Mse20190531::Client::addAuthResourceWithOptions(shared_ptr<AddAuthResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddAuthResourceShrinkRequest> request = make_shared<AddAuthResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddAuthResourceRequestAuthResourceHeaderList>>(tmpReq->authResourceHeaderList)) {
    request->authResourceHeaderListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authResourceHeaderList, make_shared<string>("AuthResourceHeaderList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authId)) {
    query->insert(pair<string, long>("AuthId", *request->authId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authResourceHeaderListShrink)) {
    query->insert(pair<string, string>("AuthResourceHeaderList", *request->authResourceHeaderListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    query->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreCase)) {
    query->insert(pair<string, bool>("IgnoreCase", *request->ignoreCase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAuthResource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAuthResourceResponse(callApi(params, req, runtime));
}

AddAuthResourceResponse Alibabacloud_Mse20190531::Client::addAuthResource(shared_ptr<AddAuthResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAuthResourceWithOptions(request, runtime);
}

AddBlackWhiteListResponse Alibabacloud_Mse20190531::Client::addBlackWhiteListWithOptions(shared_ptr<AddBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isWhite)) {
    query->insert(pair<string, bool>("IsWhite", *request->isWhite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdJsonList)) {
    query->insert(pair<string, string>("ResourceIdJsonList", *request->resourceIdJsonList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBlackWhiteList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBlackWhiteListResponse(callApi(params, req, runtime));
}

AddBlackWhiteListResponse Alibabacloud_Mse20190531::Client::addBlackWhiteList(shared_ptr<AddBlackWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBlackWhiteListWithOptions(request, runtime);
}

AddGatewayResponse Alibabacloud_Mse20190531::Client::addGatewayWithOptions(shared_ptr<AddGatewayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGatewayShrinkRequest> request = make_shared<AddGatewayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewayRequestZoneInfo>>(tmpReq->zoneInfo)) {
    request->zoneInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->zoneInfo, make_shared<string>("ZoneInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clbNetworkType)) {
    query->insert(pair<string, string>("ClbNetworkType", *request->clbNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableHardwareAcceleration)) {
    query->insert(pair<string, bool>("EnableHardwareAcceleration", *request->enableHardwareAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSls)) {
    query->insert(pair<string, bool>("EnableSls", *request->enableSls));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXtrace)) {
    query->insert(pair<string, bool>("EnableXtrace", *request->enableXtrace));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enterpriseSecurityGroup)) {
    query->insert(pair<string, bool>("EnterpriseSecurityGroup", *request->enterpriseSecurityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbSpec)) {
    query->insert(pair<string, string>("InternetSlbSpec", *request->internetSlbSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managedEntryNetworkType)) {
    query->insert(pair<string, string>("ManagedEntryNetworkType", *request->managedEntryNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mserVersion)) {
    query->insert(pair<string, string>("MserVersion", *request->mserVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nlbNetworkType)) {
    query->insert(pair<string, string>("NlbNetworkType", *request->nlbNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replica)) {
    query->insert(pair<string, long>("Replica", *request->replica));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbSpec)) {
    query->insert(pair<string, string>("SlbSpec", *request->slbSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewayShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<AddGatewayShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId2)) {
    query->insert(pair<string, string>("VSwitchId2", *request->vSwitchId2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpc)) {
    query->insert(pair<string, string>("Vpc", *request->vpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->xtraceRatio)) {
    query->insert(pair<string, string>("XtraceRatio", *request->xtraceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneInfoShrink)) {
    query->insert(pair<string, string>("ZoneInfo", *request->zoneInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGateway"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayResponse(callApi(params, req, runtime));
}

AddGatewayResponse Alibabacloud_Mse20190531::Client::addGateway(shared_ptr<AddGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayWithOptions(request, runtime);
}

AddGatewayAuthResponse Alibabacloud_Mse20190531::Client::addGatewayAuthWithOptions(shared_ptr<AddGatewayAuthRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGatewayAuthShrinkRequest> request = make_shared<AddGatewayAuthShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewayAuthRequestAuthResourceList>>(tmpReq->authResourceList)) {
    request->authResourceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authResourceList, make_shared<string>("AuthResourceList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddGatewayAuthRequestExternalAuthZJSON>(tmpReq->externalAuthZJSON)) {
    request->externalAuthZJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalAuthZJSON, make_shared<string>("ExternalAuthZJSON"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->scopesList)) {
    request->scopesListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scopesList, make_shared<string>("ScopesList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authResourceConfig)) {
    query->insert(pair<string, string>("AuthResourceConfig", *request->authResourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authResourceListShrink)) {
    query->insert(pair<string, string>("AuthResourceList", *request->authResourceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authResourceMode)) {
    query->insert(pair<string, long>("AuthResourceMode", *request->authResourceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSecret)) {
    query->insert(pair<string, string>("ClientSecret", *request->clientSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookieDomain)) {
    query->insert(pair<string, string>("CookieDomain", *request->cookieDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalAuthZJSONShrink)) {
    query->insert(pair<string, string>("ExternalAuthZJSON", *request->externalAuthZJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isWhite)) {
    query->insert(pair<string, bool>("IsWhite", *request->isWhite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issuer)) {
    query->insert(pair<string, string>("Issuer", *request->issuer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwks)) {
    query->insert(pair<string, string>("Jwks", *request->jwks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginUrl)) {
    query->insert(pair<string, string>("LoginUrl", *request->loginUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectUrl)) {
    query->insert(pair<string, string>("RedirectUrl", *request->redirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopesListShrink)) {
    query->insert(pair<string, string>("ScopesList", *request->scopesListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sub)) {
    query->insert(pair<string, string>("Sub", *request->sub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenName)) {
    query->insert(pair<string, string>("TokenName", *request->tokenName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenNamePrefix)) {
    query->insert(pair<string, string>("TokenNamePrefix", *request->tokenNamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tokenPass)) {
    query->insert(pair<string, bool>("TokenPass", *request->tokenPass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenPosition)) {
    query->insert(pair<string, string>("TokenPosition", *request->tokenPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewayAuth"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayAuthResponse(callApi(params, req, runtime));
}

AddGatewayAuthResponse Alibabacloud_Mse20190531::Client::addGatewayAuth(shared_ptr<AddGatewayAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayAuthWithOptions(request, runtime);
}

AddGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::addGatewayAuthConsumerWithOptions(shared_ptr<AddGatewayAuthConsumerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    query->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwks)) {
    query->insert(pair<string, string>("Jwks", *request->jwks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyName)) {
    query->insert(pair<string, string>("KeyName", *request->keyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyValue)) {
    query->insert(pair<string, string>("KeyValue", *request->keyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenName)) {
    query->insert(pair<string, string>("TokenName", *request->tokenName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tokenPass)) {
    query->insert(pair<string, bool>("TokenPass", *request->tokenPass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenPosition)) {
    query->insert(pair<string, string>("TokenPosition", *request->tokenPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenPrefix)) {
    query->insert(pair<string, string>("TokenPrefix", *request->tokenPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewayAuthConsumer"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayAuthConsumerResponse(callApi(params, req, runtime));
}

AddGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::addGatewayAuthConsumer(shared_ptr<AddGatewayAuthConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayAuthConsumerWithOptions(request, runtime);
}

AddGatewayDomainResponse Alibabacloud_Mse20190531::Client::addGatewayDomainWithOptions(shared_ptr<AddGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2)) {
    query->insert(pair<string, string>("Http2", *request->http2));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mustHttps)) {
    query->insert(pair<string, bool>("MustHttps", *request->mustHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMax)) {
    query->insert(pair<string, string>("TlsMax", *request->tlsMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMin)) {
    query->insert(pair<string, string>("TlsMin", *request->tlsMin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewayDomain"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayDomainResponse(callApi(params, req, runtime));
}

AddGatewayDomainResponse Alibabacloud_Mse20190531::Client::addGatewayDomain(shared_ptr<AddGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayDomainWithOptions(request, runtime);
}

AddGatewayRouteResponse Alibabacloud_Mse20190531::Client::addGatewayRouteWithOptions(shared_ptr<AddGatewayRouteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGatewayRouteShrinkRequest> request = make_shared<AddGatewayRouteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddGatewayRouteRequestDirectResponseJSON>(tmpReq->directResponseJSON)) {
    request->directResponseJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->directResponseJSON, make_shared<string>("DirectResponseJSON"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewayRouteRequestFallbackServices>>(tmpReq->fallbackServices)) {
    request->fallbackServicesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fallbackServices, make_shared<string>("FallbackServices"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddGatewayRouteRequestPredicates>(tmpReq->predicates)) {
    request->predicatesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->predicates, make_shared<string>("Predicates"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddGatewayRouteRequestRedirectJSON>(tmpReq->redirectJSON)) {
    request->redirectJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->redirectJSON, make_shared<string>("RedirectJSON"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewayRouteRequestServices>>(tmpReq->services)) {
    request->servicesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->services, make_shared<string>("Services"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directResponseJSONShrink)) {
    query->insert(pair<string, string>("DirectResponseJSON", *request->directResponseJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    query->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainIdListJSON)) {
    query->insert(pair<string, string>("DomainIdListJSON", *request->domainIdListJSON));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableWaf)) {
    query->insert(pair<string, bool>("EnableWaf", *request->enableWaf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fallback)) {
    query->insert(pair<string, bool>("Fallback", *request->fallback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallbackServicesShrink)) {
    query->insert(pair<string, string>("FallbackServices", *request->fallbackServicesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policies)) {
    query->insert(pair<string, string>("Policies", *request->policies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predicatesShrink)) {
    query->insert(pair<string, string>("Predicates", *request->predicatesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectJSONShrink)) {
    query->insert(pair<string, string>("RedirectJSON", *request->redirectJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeOrder)) {
    query->insert(pair<string, long>("RouteOrder", *request->routeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeType)) {
    query->insert(pair<string, string>("RouteType", *request->routeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesShrink)) {
    query->insert(pair<string, string>("Services", *request->servicesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayRouteResponse(callApi(params, req, runtime));
}

AddGatewayRouteResponse Alibabacloud_Mse20190531::Client::addGatewayRoute(shared_ptr<AddGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayRouteWithOptions(request, runtime);
}

AddGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::addGatewayServiceVersionWithOptions(shared_ptr<AddGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    query->insert(pair<string, long>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewayServiceVersion"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewayServiceVersionResponse(callApi(params, req, runtime));
}

AddGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::addGatewayServiceVersion(shared_ptr<AddGatewayServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewayServiceVersionWithOptions(request, runtime);
}

AddGatewaySlbResponse Alibabacloud_Mse20190531::Client::addGatewaySlbWithOptions(shared_ptr<AddGatewaySlbRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGatewaySlbShrinkRequest> request = make_shared<AddGatewaySlbShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddGatewaySlbRequestVServiceList>>(tmpReq->VServiceList)) {
    request->VServiceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->VServiceList, make_shared<string>("VServiceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpPort)) {
    query->insert(pair<string, long>("HttpPort", *request->httpPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpsPort)) {
    query->insert(pair<string, long>("HttpsPort", *request->httpsPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsVServerGroupId)) {
    query->insert(pair<string, string>("HttpsVServerGroupId", *request->httpsVServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceWeight)) {
    query->insert(pair<string, long>("ServiceWeight", *request->serviceWeight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServiceListShrink)) {
    query->insert(pair<string, string>("VServiceList", *request->VServiceListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewaySlb"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewaySlbResponse(callApi(params, req, runtime));
}

AddGatewaySlbResponse Alibabacloud_Mse20190531::Client::addGatewaySlb(shared_ptr<AddGatewaySlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGatewaySlbWithOptions(request, runtime);
}

AddMigrationTaskResponse Alibabacloud_Mse20190531::Client::addMigrationTaskWithOptions(shared_ptr<AddMigrationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceAddress)) {
    query->insert(pair<string, string>("OriginInstanceAddress", *request->originInstanceAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceName)) {
    query->insert(pair<string, string>("OriginInstanceName", *request->originInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceNamespace)) {
    query->insert(pair<string, string>("OriginInstanceNamespace", *request->originInstanceNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectDesc)) {
    query->insert(pair<string, string>("ProjectDesc", *request->projectDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncType)) {
    query->insert(pair<string, string>("SyncType", *request->syncType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterName)) {
    query->insert(pair<string, string>("TargetClusterName", *request->targetClusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterUrl)) {
    query->insert(pair<string, string>("TargetClusterUrl", *request->targetClusterUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMigrationTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMigrationTaskResponse(callApi(params, req, runtime));
}

AddMigrationTaskResponse Alibabacloud_Mse20190531::Client::addMigrationTask(shared_ptr<AddMigrationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMigrationTaskWithOptions(request, runtime);
}

AddMockRuleResponse Alibabacloud_Mse20190531::Client::addMockRuleWithOptions(shared_ptr<AddMockRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppIds)) {
    query->insert(pair<string, string>("ConsumerAppIds", *request->consumerAppIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboMockItems)) {
    query->insert(pair<string, string>("DubboMockItems", *request->dubboMockItems));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraJson)) {
    query->insert(pair<string, string>("ExtraJson", *request->extraJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mockType)) {
    query->insert(pair<string, long>("MockType", *request->mockType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppId)) {
    query->insert(pair<string, string>("ProviderAppId", *request->providerAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppName)) {
    query->insert(pair<string, string>("ProviderAppName", *request->providerAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scMockItems)) {
    query->insert(pair<string, string>("ScMockItems", *request->scMockItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMockRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMockRuleResponse(callApi(params, req, runtime));
}

AddMockRuleResponse Alibabacloud_Mse20190531::Client::addMockRule(shared_ptr<AddMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMockRuleWithOptions(request, runtime);
}

AddSSLCertResponse Alibabacloud_Mse20190531::Client::addSSLCertWithOptions(shared_ptr<AddSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    query->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSSLCert"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSSLCertResponse(callApi(params, req, runtime));
}

AddSSLCertResponse Alibabacloud_Mse20190531::Client::addSSLCert(shared_ptr<AddSSLCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSSLCertWithOptions(request, runtime);
}

AddSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::addSecurityGroupRuleWithOptions(shared_ptr<AddSecurityGroupRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portRange)) {
    query->insert(pair<string, string>("PortRange", *request->portRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSecurityGroupRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSecurityGroupRuleResponse(callApi(params, req, runtime));
}

AddSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::addSecurityGroupRule(shared_ptr<AddSecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSecurityGroupRuleWithOptions(request, runtime);
}

AddServiceSourceResponse Alibabacloud_Mse20190531::Client::addServiceSourceWithOptions(shared_ptr<AddServiceSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddServiceSourceShrinkRequest> request = make_shared<AddServiceSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->groupList)) {
    request->groupListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupList, make_shared<string>("GroupList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddServiceSourceRequestIngressOptionsRequest>(tmpReq->ingressOptionsRequest)) {
    request->ingressOptionsRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ingressOptionsRequest, make_shared<string>("IngressOptionsRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->pathList)) {
    request->pathListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pathList, make_shared<string>("PathList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddServiceSourceRequestToAuthorizeSecurityGroups>>(tmpReq->toAuthorizeSecurityGroups)) {
    request->toAuthorizeSecurityGroupsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->toAuthorizeSecurityGroups, make_shared<string>("ToAuthorizeSecurityGroups"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupListShrink)) {
    query->insert(pair<string, string>("GroupList", *request->groupListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressOptionsRequestShrink)) {
    query->insert(pair<string, string>("IngressOptionsRequest", *request->ingressOptionsRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathListShrink)) {
    query->insert(pair<string, string>("PathList", *request->pathListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toAuthorizeSecurityGroupsShrink)) {
    query->insert(pair<string, string>("ToAuthorizeSecurityGroups", *request->toAuthorizeSecurityGroupsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddServiceSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddServiceSourceResponse(callApi(params, req, runtime));
}

AddServiceSourceResponse Alibabacloud_Mse20190531::Client::addServiceSource(shared_ptr<AddServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addServiceSourceWithOptions(request, runtime);
}

ApplyGatewayRouteResponse Alibabacloud_Mse20190531::Client::applyGatewayRouteWithOptions(shared_ptr<ApplyGatewayRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    query->insert(pair<string, string>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyGatewayRouteResponse(callApi(params, req, runtime));
}

ApplyGatewayRouteResponse Alibabacloud_Mse20190531::Client::applyGatewayRoute(shared_ptr<ApplyGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyGatewayRouteWithOptions(request, runtime);
}

ApplyTagPoliciesResponse Alibabacloud_Mse20190531::Client::applyTagPoliciesWithOptions(shared_ptr<ApplyTagPoliciesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyTagPoliciesShrinkRequest> request = make_shared<ApplyTagPoliciesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, RulesValue>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    query->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyTagPolicies"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyTagPoliciesResponse(callApi(params, req, runtime));
}

ApplyTagPoliciesResponse Alibabacloud_Mse20190531::Client::applyTagPolicies(shared_ptr<ApplyTagPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyTagPoliciesWithOptions(request, runtime);
}

BindSentinelBlockFallbackDefinitionResponse Alibabacloud_Mse20190531::Client::bindSentinelBlockFallbackDefinitionWithOptions(shared_ptr<BindSentinelBlockFallbackDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fallbackId)) {
    query->insert(pair<string, long>("FallbackId", *request->fallbackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindSentinelBlockFallbackDefinition"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindSentinelBlockFallbackDefinitionResponse(callApi(params, req, runtime));
}

BindSentinelBlockFallbackDefinitionResponse Alibabacloud_Mse20190531::Client::bindSentinelBlockFallbackDefinition(shared_ptr<BindSentinelBlockFallbackDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSentinelBlockFallbackDefinitionWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Mse20190531::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Mse20190531::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CloneNacosConfigResponse Alibabacloud_Mse20190531::Client::cloneNacosConfigWithOptions(shared_ptr<CloneNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataIds)) {
    query->insert(pair<string, string>("DataIds", *request->dataIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originNamespaceId)) {
    query->insert(pair<string, string>("OriginNamespaceId", *request->originNamespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetNamespaceId)) {
    query->insert(pair<string, string>("TargetNamespaceId", *request->targetNamespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneNacosConfigResponse(callApi(params, req, runtime));
}

CloneNacosConfigResponse Alibabacloud_Mse20190531::Client::cloneNacosConfig(shared_ptr<CloneNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneNacosConfigWithOptions(request, runtime);
}

CloneSentinelRuleFromAhasResponse Alibabacloud_Mse20190531::Client::cloneSentinelRuleFromAhasWithOptions(shared_ptr<CloneSentinelRuleFromAhasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ahasNamespace)) {
    query->insert(pair<string, string>("AhasNamespace", *request->ahasNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAHASPublicRegion)) {
    query->insert(pair<string, bool>("IsAHASPublicRegion", *request->isAHASPublicRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseAppName)) {
    query->insert(pair<string, string>("MseAppName", *request->mseAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneSentinelRuleFromAhas"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneSentinelRuleFromAhasResponse(callApi(params, req, runtime));
}

CloneSentinelRuleFromAhasResponse Alibabacloud_Mse20190531::Client::cloneSentinelRuleFromAhas(shared_ptr<CloneSentinelRuleFromAhasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneSentinelRuleFromAhasWithOptions(request, runtime);
}

CreateApplicationResponse Alibabacloud_Mse20190531::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateApplicationShrinkRequest> request = make_shared<CreateApplicationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateApplicationRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sentinelEnable)) {
    query->insert(pair<string, string>("SentinelEnable", *request->sentinelEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchEnable)) {
    query->insert(pair<string, string>("SwitchEnable", *request->switchEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplication"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationResponse(callApi(params, req, runtime));
}

CreateApplicationResponse Alibabacloud_Mse20190531::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicationWithOptions(request, runtime);
}

CreateCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::createCircuitBreakerRuleWithOptions(shared_ptr<CreateCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->halfOpenBaseAmountPerStep)) {
    query->insert(pair<string, long>("HalfOpenBaseAmountPerStep", *request->halfOpenBaseAmountPerStep));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->halfOpenRecoveryStepNum)) {
    query->insert(pair<string, long>("HalfOpenRecoveryStepNum", *request->halfOpenRecoveryStepNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAllowedRtMs)) {
    query->insert(pair<string, long>("MaxAllowedRtMs", *request->maxAllowedRtMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minRequestAmount)) {
    query->insert(pair<string, long>("MinRequestAmount", *request->minRequestAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryTimeoutMs)) {
    query->insert(pair<string, long>("RetryTimeoutMs", *request->retryTimeoutMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statIntervalMs)) {
    query->insert(pair<string, long>("StatIntervalMs", *request->statIntervalMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategy)) {
    query->insert(pair<string, long>("Strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

CreateCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::createCircuitBreakerRule(shared_ptr<CreateCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCircuitBreakerRuleWithOptions(request, runtime);
}

CreateClusterResponse Alibabacloud_Mse20190531::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpecification)) {
    query->insert(pair<string, string>("ClusterSpecification", *request->clusterSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVersion)) {
    query->insert(pair<string, string>("ClusterVersion", *request->clusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionType)) {
    query->insert(pair<string, string>("ConnectionType", *request->connectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->eipEnabled)) {
    query->insert(pair<string, bool>("EipEnabled", *request->eipEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceCount)) {
    query->insert(pair<string, long>("InstanceCount", *request->instanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netType)) {
    query->insert(pair<string, string>("NetType", *request->netType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateSlbSpecification)) {
    query->insert(pair<string, string>("PrivateSlbSpecification", *request->privateSlbSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubNetworkFlow)) {
    query->insert(pair<string, string>("PubNetworkFlow", *request->pubNetworkFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubSlbSpecification)) {
    query->insert(pair<string, string>("PubSlbSpecification", *request->pubSlbSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupType)) {
    query->insert(pair<string, string>("SecurityGroupType", *request->securityGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateClusterRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterResponse(callApi(params, req, runtime));
}

CreateClusterResponse Alibabacloud_Mse20190531::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterWithOptions(request, runtime);
}

CreateEngineNamespaceResponse Alibabacloud_Mse20190531::Client::createEngineNamespaceWithOptions(shared_ptr<CreateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceCount)) {
    query->insert(pair<string, long>("ServiceCount", *request->serviceCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEngineNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEngineNamespaceResponse(callApi(params, req, runtime));
}

CreateEngineNamespaceResponse Alibabacloud_Mse20190531::Client::createEngineNamespace(shared_ptr<CreateEngineNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEngineNamespaceWithOptions(request, runtime);
}

CreateFlowRuleResponse Alibabacloud_Mse20190531::Client::createFlowRuleWithOptions(shared_ptr<CreateFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->controlBehavior)) {
    query->insert(pair<string, long>("ControlBehavior", *request->controlBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limitApp)) {
    query->insert(pair<string, string>("LimitApp", *request->limitApp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxQueueingTimeMs)) {
    query->insert(pair<string, long>("MaxQueueingTimeMs", *request->maxQueueingTimeMs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFlowRuleResponse(callApi(params, req, runtime));
}

CreateFlowRuleResponse Alibabacloud_Mse20190531::Client::createFlowRule(shared_ptr<CreateFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowRuleWithOptions(request, runtime);
}

CreateGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::createGatewayCircuitBreakerRuleWithOptions(shared_ptr<CreateGatewayCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAllowedMs)) {
    query->insert(pair<string, long>("MaxAllowedMs", *request->maxAllowedMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minRequestAmount)) {
    query->insert(pair<string, long>("MinRequestAmount", *request->minRequestAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoveryTimeoutSec)) {
    query->insert(pair<string, long>("RecoveryTimeoutSec", *request->recoveryTimeoutSec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statDurationSec)) {
    query->insert(pair<string, long>("StatDurationSec", *request->statDurationSec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategy)) {
    query->insert(pair<string, long>("Strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerRatio)) {
    query->insert(pair<string, long>("TriggerRatio", *request->triggerRatio));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

CreateGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::createGatewayCircuitBreakerRule(shared_ptr<CreateGatewayCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

CreateGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::createGatewayFlowRuleWithOptions(shared_ptr<CreateGatewayFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayFlowRuleResponse(callApi(params, req, runtime));
}

CreateGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::createGatewayFlowRule(shared_ptr<CreateGatewayFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayFlowRuleWithOptions(request, runtime);
}

CreateGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::createGatewayIsolationRuleWithOptions(shared_ptr<CreateGatewayIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrency)) {
    query->insert(pair<string, long>("MaxConcurrency", *request->maxConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayIsolationRuleResponse(callApi(params, req, runtime));
}

CreateGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::createGatewayIsolationRule(shared_ptr<CreateGatewayIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayIsolationRuleWithOptions(request, runtime);
}

CreateIsolationRuleResponse Alibabacloud_Mse20190531::Client::createIsolationRuleWithOptions(shared_ptr<CreateIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limitApp)) {
    query->insert(pair<string, string>("LimitApp", *request->limitApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIsolationRuleResponse(callApi(params, req, runtime));
}

CreateIsolationRuleResponse Alibabacloud_Mse20190531::Client::createIsolationRule(shared_ptr<CreateIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIsolationRuleWithOptions(request, runtime);
}

CreateMseServiceApplicationResponse Alibabacloud_Mse20190531::Client::createMseServiceApplicationWithOptions(shared_ptr<CreateMseServiceApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    query->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sentinelEnable)) {
    query->insert(pair<string, string>("SentinelEnable", *request->sentinelEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchEnable)) {
    query->insert(pair<string, string>("SwitchEnable", *request->switchEnable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMseServiceApplication"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMseServiceApplicationResponse(callApi(params, req, runtime));
}

CreateMseServiceApplicationResponse Alibabacloud_Mse20190531::Client::createMseServiceApplication(shared_ptr<CreateMseServiceApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMseServiceApplicationWithOptions(request, runtime);
}

CreateNacosConfigResponse Alibabacloud_Mse20190531::Client::createNacosConfigWithOptions(shared_ptr<CreateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->betaIps)) {
    query->insert(pair<string, string>("BetaIps", *request->betaIps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNacosConfigResponse(callApi(params, req, runtime));
}

CreateNacosConfigResponse Alibabacloud_Mse20190531::Client::createNacosConfig(shared_ptr<CreateNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNacosConfigWithOptions(request, runtime);
}

CreateNacosInstanceResponse Alibabacloud_Mse20190531::Client::createNacosInstanceWithOptions(shared_ptr<CreateNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ephemeral)) {
    query->insert(pair<string, bool>("Ephemeral", *request->ephemeral));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->weight)) {
    query->insert(pair<string, string>("Weight", *request->weight));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->metadata)) {
    body->insert(pair<string, string>("Metadata", *request->metadata));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNacosInstance"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNacosInstanceResponse(callApi(params, req, runtime));
}

CreateNacosInstanceResponse Alibabacloud_Mse20190531::Client::createNacosInstance(shared_ptr<CreateNacosInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNacosInstanceWithOptions(request, runtime);
}

CreateNacosServiceResponse Alibabacloud_Mse20190531::Client::createNacosServiceWithOptions(shared_ptr<CreateNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ephemeral)) {
    query->insert(pair<string, bool>("Ephemeral", *request->ephemeral));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protectThreshold)) {
    query->insert(pair<string, string>("ProtectThreshold", *request->protectThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNacosService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNacosServiceResponse(callApi(params, req, runtime));
}

CreateNacosServiceResponse Alibabacloud_Mse20190531::Client::createNacosService(shared_ptr<CreateNacosServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNacosServiceWithOptions(request, runtime);
}

CreateNamespaceResponse Alibabacloud_Mse20190531::Client::createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateNamespaceShrinkRequest> request = make_shared<CreateNamespaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateNamespaceRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->describe)) {
    query->insert(pair<string, string>("Describe", *request->describe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNamespaceResponse(callApi(params, req, runtime));
}

CreateNamespaceResponse Alibabacloud_Mse20190531::Client::createNamespace(shared_ptr<CreateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNamespaceWithOptions(request, runtime);
}

CreateOrUpdateSwimmingLaneResponse Alibabacloud_Mse20190531::Client::createOrUpdateSwimmingLaneWithOptions(shared_ptr<CreateOrUpdateSwimmingLaneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOrUpdateSwimmingLaneShrinkRequest> request = make_shared<CreateOrUpdateSwimmingLaneShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson>(tmpReq->gatewaySwimmingLaneRouteJson)) {
    request->gatewaySwimmingLaneRouteJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->gatewaySwimmingLaneRouteJson, make_shared<string>("GatewaySwimmingLaneRouteJson"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRules)) {
    query->insert(pair<string, bool>("EnableRules", *request->enableRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryRule)) {
    query->insert(pair<string, string>("EntryRule", *request->entryRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewaySwimmingLaneRouteJsonShrink)) {
    query->insert(pair<string, string>("GatewaySwimmingLaneRouteJson", *request->gatewaySwimmingLaneRouteJsonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pathIndependentPercentageEnable)) {
    query->insert(pair<string, bool>("PathIndependentPercentageEnable", *request->pathIndependentPercentageEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateOrUpdateSwimmingLaneShrinkRequestEntryRules>>(request->entryRules)) {
    body->insert(pair<string, vector<CreateOrUpdateSwimmingLaneShrinkRequestEntryRules>>("EntryRules", *request->entryRules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateSwimmingLane"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateSwimmingLaneResponse(callApi(params, req, runtime));
}

CreateOrUpdateSwimmingLaneResponse Alibabacloud_Mse20190531::Client::createOrUpdateSwimmingLane(shared_ptr<CreateOrUpdateSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateSwimmingLaneWithOptions(request, runtime);
}

CreateOrUpdateSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::createOrUpdateSwimmingLaneGroupWithOptions(shared_ptr<CreateOrUpdateSwimmingLaneGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOrUpdateSwimmingLaneGroupShrinkRequest> request = make_shared<CreateOrUpdateSwimmingLaneGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->paths)) {
    request->pathsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->paths, make_shared<string>("Paths"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->routeIds)) {
    request->routeIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->routeIds, make_shared<string>("RouteIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->canaryModel)) {
    query->insert(pair<string, long>("CanaryModel", *request->canaryModel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dbGrayEnable)) {
    query->insert(pair<string, bool>("DbGrayEnable", *request->dbGrayEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryApp)) {
    query->insert(pair<string, string>("EntryApp", *request->entryApp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageQueueFilterSide)) {
    query->insert(pair<string, string>("MessageQueueFilterSide", *request->messageQueueFilterSide));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->messageQueueGrayEnable)) {
    query->insert(pair<string, bool>("MessageQueueGrayEnable", *request->messageQueueGrayEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathsShrink)) {
    query->insert(pair<string, string>("Paths", *request->pathsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recordCanaryDetail)) {
    query->insert(pair<string, bool>("RecordCanaryDetail", *request->recordCanaryDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeIdsShrink)) {
    query->insert(pair<string, string>("RouteIds", *request->routeIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->swimVersion)) {
    query->insert(pair<string, long>("SwimVersion", *request->swimVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateSwimmingLaneGroup"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateSwimmingLaneGroupResponse(callApi(params, req, runtime));
}

CreateOrUpdateSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::createOrUpdateSwimmingLaneGroup(shared_ptr<CreateOrUpdateSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateSwimmingLaneGroupWithOptions(request, runtime);
}

CreatePluginConfigResponse Alibabacloud_Mse20190531::Client::createPluginConfigWithOptions(shared_ptr<CreatePluginConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePluginConfigShrinkRequest> request = make_shared<CreatePluginConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->resourceIdList)) {
    request->resourceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIdList, make_shared<string>("ResourceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configLevel)) {
    query->insert(pair<string, long>("ConfigLevel", *request->configLevel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pluginId)) {
    query->insert(pair<string, long>("PluginId", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdListShrink)) {
    query->insert(pair<string, string>("ResourceIdList", *request->resourceIdListShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePluginConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePluginConfigResponse(callApi(params, req, runtime));
}

CreatePluginConfigResponse Alibabacloud_Mse20190531::Client::createPluginConfig(shared_ptr<CreatePluginConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPluginConfigWithOptions(request, runtime);
}

CreateZnodeResponse Alibabacloud_Mse20190531::Client::createZnodeWithOptions(shared_ptr<CreateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateZnode"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateZnodeResponse(callApi(params, req, runtime));
}

CreateZnodeResponse Alibabacloud_Mse20190531::Client::createZnode(shared_ptr<CreateZnodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createZnodeWithOptions(request, runtime);
}

DeleteAuthResourceResponse Alibabacloud_Mse20190531::Client::deleteAuthResourceWithOptions(shared_ptr<DeleteAuthResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAuthResource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAuthResourceResponse(callApi(params, req, runtime));
}

DeleteAuthResourceResponse Alibabacloud_Mse20190531::Client::deleteAuthResource(shared_ptr<DeleteAuthResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAuthResourceWithOptions(request, runtime);
}

DeleteCircuitBreakerRulesResponse Alibabacloud_Mse20190531::Client::deleteCircuitBreakerRulesWithOptions(shared_ptr<DeleteCircuitBreakerRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteCircuitBreakerRulesShrinkRequest> request = make_shared<DeleteCircuitBreakerRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    query->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCircuitBreakerRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCircuitBreakerRulesResponse(callApi(params, req, runtime));
}

DeleteCircuitBreakerRulesResponse Alibabacloud_Mse20190531::Client::deleteCircuitBreakerRules(shared_ptr<DeleteCircuitBreakerRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCircuitBreakerRulesWithOptions(request, runtime);
}

DeleteClusterResponse Alibabacloud_Mse20190531::Client::deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterResponse(callApi(params, req, runtime));
}

DeleteClusterResponse Alibabacloud_Mse20190531::Client::deleteCluster(shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClusterWithOptions(request, runtime);
}

DeleteEngineNamespaceResponse Alibabacloud_Mse20190531::Client::deleteEngineNamespaceWithOptions(shared_ptr<DeleteEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEngineNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEngineNamespaceResponse(callApi(params, req, runtime));
}

DeleteEngineNamespaceResponse Alibabacloud_Mse20190531::Client::deleteEngineNamespace(shared_ptr<DeleteEngineNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEngineNamespaceWithOptions(request, runtime);
}

DeleteFlowRulesResponse Alibabacloud_Mse20190531::Client::deleteFlowRulesWithOptions(shared_ptr<DeleteFlowRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteFlowRulesShrinkRequest> request = make_shared<DeleteFlowRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    query->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFlowRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFlowRulesResponse(callApi(params, req, runtime));
}

DeleteFlowRulesResponse Alibabacloud_Mse20190531::Client::deleteFlowRules(shared_ptr<DeleteFlowRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowRulesWithOptions(request, runtime);
}

DeleteGatewayResponse Alibabacloud_Mse20190531::Client::deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteSlb)) {
    query->insert(pair<string, bool>("DeleteSlb", *request->deleteSlb));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGateway"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayResponse(callApi(params, req, runtime));
}

DeleteGatewayResponse Alibabacloud_Mse20190531::Client::deleteGateway(shared_ptr<DeleteGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayWithOptions(request, runtime);
}

DeleteGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::deleteGatewayAuthConsumerWithOptions(shared_ptr<DeleteGatewayAuthConsumerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayAuthConsumer"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayAuthConsumerResponse(callApi(params, req, runtime));
}

DeleteGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::deleteGatewayAuthConsumer(shared_ptr<DeleteGatewayAuthConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayAuthConsumerWithOptions(request, runtime);
}

DeleteGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::deleteGatewayAuthConsumerResourceWithOptions(shared_ptr<DeleteGatewayAuthConsumerResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerId)) {
    query->insert(pair<string, long>("ConsumerId", *request->consumerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idList)) {
    query->insert(pair<string, string>("IdList", *request->idList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayAuthConsumerResource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayAuthConsumerResourceResponse(callApi(params, req, runtime));
}

DeleteGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::deleteGatewayAuthConsumerResource(shared_ptr<DeleteGatewayAuthConsumerResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayAuthConsumerResourceWithOptions(request, runtime);
}

DeleteGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayCircuitBreakerRuleWithOptions(shared_ptr<DeleteGatewayCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

DeleteGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayCircuitBreakerRule(shared_ptr<DeleteGatewayCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

DeleteGatewayDomainResponse Alibabacloud_Mse20190531::Client::deleteGatewayDomainWithOptions(shared_ptr<DeleteGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayDomain"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayDomainResponse(callApi(params, req, runtime));
}

DeleteGatewayDomainResponse Alibabacloud_Mse20190531::Client::deleteGatewayDomain(shared_ptr<DeleteGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayDomainWithOptions(request, runtime);
}

DeleteGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayFlowRuleWithOptions(shared_ptr<DeleteGatewayFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayFlowRuleResponse(callApi(params, req, runtime));
}

DeleteGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayFlowRule(shared_ptr<DeleteGatewayFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayFlowRuleWithOptions(request, runtime);
}

DeleteGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayIsolationRuleWithOptions(shared_ptr<DeleteGatewayIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayIsolationRuleResponse(callApi(params, req, runtime));
}

DeleteGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::deleteGatewayIsolationRule(shared_ptr<DeleteGatewayIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayIsolationRuleWithOptions(request, runtime);
}

DeleteGatewayRouteResponse Alibabacloud_Mse20190531::Client::deleteGatewayRouteWithOptions(shared_ptr<DeleteGatewayRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    query->insert(pair<string, string>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayRouteResponse(callApi(params, req, runtime));
}

DeleteGatewayRouteResponse Alibabacloud_Mse20190531::Client::deleteGatewayRoute(shared_ptr<DeleteGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayRouteWithOptions(request, runtime);
}

DeleteGatewayServiceResponse Alibabacloud_Mse20190531::Client::deleteGatewayServiceWithOptions(shared_ptr<DeleteGatewayServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayServiceResponse(callApi(params, req, runtime));
}

DeleteGatewayServiceResponse Alibabacloud_Mse20190531::Client::deleteGatewayService(shared_ptr<DeleteGatewayServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayServiceWithOptions(request, runtime);
}

DeleteGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::deleteGatewayServiceVersionWithOptions(shared_ptr<DeleteGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    query->insert(pair<string, long>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayServiceVersion"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayServiceVersionResponse(callApi(params, req, runtime));
}

DeleteGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::deleteGatewayServiceVersion(shared_ptr<DeleteGatewayServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayServiceVersionWithOptions(request, runtime);
}

DeleteGatewaySlbResponse Alibabacloud_Mse20190531::Client::deleteGatewaySlbWithOptions(shared_ptr<DeleteGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteSlb)) {
    query->insert(pair<string, bool>("DeleteSlb", *request->deleteSlb));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewaySlb"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewaySlbResponse(callApi(params, req, runtime));
}

DeleteGatewaySlbResponse Alibabacloud_Mse20190531::Client::deleteGatewaySlb(shared_ptr<DeleteGatewaySlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewaySlbWithOptions(request, runtime);
}

DeleteIsolationRulesResponse Alibabacloud_Mse20190531::Client::deleteIsolationRulesWithOptions(shared_ptr<DeleteIsolationRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteIsolationRulesShrinkRequest> request = make_shared<DeleteIsolationRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    query->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIsolationRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIsolationRulesResponse(callApi(params, req, runtime));
}

DeleteIsolationRulesResponse Alibabacloud_Mse20190531::Client::deleteIsolationRules(shared_ptr<DeleteIsolationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIsolationRulesWithOptions(request, runtime);
}

DeleteMigrationTaskResponse Alibabacloud_Mse20190531::Client::deleteMigrationTaskWithOptions(shared_ptr<DeleteMigrationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMigrationTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMigrationTaskResponse(callApi(params, req, runtime));
}

DeleteMigrationTaskResponse Alibabacloud_Mse20190531::Client::deleteMigrationTask(shared_ptr<DeleteMigrationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMigrationTaskWithOptions(request, runtime);
}

DeleteNacosConfigResponse Alibabacloud_Mse20190531::Client::deleteNacosConfigWithOptions(shared_ptr<DeleteNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->beta)) {
    query->insert(pair<string, bool>("Beta", *request->beta));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNacosConfigResponse(callApi(params, req, runtime));
}

DeleteNacosConfigResponse Alibabacloud_Mse20190531::Client::deleteNacosConfig(shared_ptr<DeleteNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNacosConfigWithOptions(request, runtime);
}

DeleteNacosConfigsResponse Alibabacloud_Mse20190531::Client::deleteNacosConfigsWithOptions(shared_ptr<DeleteNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNacosConfigs"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNacosConfigsResponse(callApi(params, req, runtime));
}

DeleteNacosConfigsResponse Alibabacloud_Mse20190531::Client::deleteNacosConfigs(shared_ptr<DeleteNacosConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNacosConfigsWithOptions(request, runtime);
}

DeleteNacosInstanceResponse Alibabacloud_Mse20190531::Client::deleteNacosInstanceWithOptions(shared_ptr<DeleteNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ephemeral)) {
    query->insert(pair<string, bool>("Ephemeral", *request->ephemeral));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNacosInstance"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNacosInstanceResponse(callApi(params, req, runtime));
}

DeleteNacosInstanceResponse Alibabacloud_Mse20190531::Client::deleteNacosInstance(shared_ptr<DeleteNacosInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNacosInstanceWithOptions(request, runtime);
}

DeleteNacosServiceResponse Alibabacloud_Mse20190531::Client::deleteNacosServiceWithOptions(shared_ptr<DeleteNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNacosService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNacosServiceResponse(callApi(params, req, runtime));
}

DeleteNacosServiceResponse Alibabacloud_Mse20190531::Client::deleteNacosService(shared_ptr<DeleteNacosServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNacosServiceWithOptions(request, runtime);
}

DeleteNamespaceResponse Alibabacloud_Mse20190531::Client::deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNamespaceResponse(callApi(params, req, runtime));
}

DeleteNamespaceResponse Alibabacloud_Mse20190531::Client::deleteNamespace(shared_ptr<DeleteNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNamespaceWithOptions(request, runtime);
}

DeletePluginConfigResponse Alibabacloud_Mse20190531::Client::deletePluginConfigWithOptions(shared_ptr<DeletePluginConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pluginConfigId)) {
    query->insert(pair<string, long>("PluginConfigId", *request->pluginConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePluginConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePluginConfigResponse(callApi(params, req, runtime));
}

DeletePluginConfigResponse Alibabacloud_Mse20190531::Client::deletePluginConfig(shared_ptr<DeletePluginConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePluginConfigWithOptions(request, runtime);
}

DeleteSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::deleteSecurityGroupRuleWithOptions(shared_ptr<DeleteSecurityGroupRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cascadingDelete)) {
    query->insert(pair<string, bool>("CascadingDelete", *request->cascadingDelete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecurityGroupRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecurityGroupRuleResponse(callApi(params, req, runtime));
}

DeleteSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::deleteSecurityGroupRule(shared_ptr<DeleteSecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityGroupRuleWithOptions(request, runtime);
}

DeleteServiceSourceResponse Alibabacloud_Mse20190531::Client::deleteServiceSourceWithOptions(shared_ptr<DeleteServiceSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceId)) {
    query->insert(pair<string, long>("SourceId", *request->sourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceSourceResponse(callApi(params, req, runtime));
}

DeleteServiceSourceResponse Alibabacloud_Mse20190531::Client::deleteServiceSource(shared_ptr<DeleteServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceSourceWithOptions(request, runtime);
}

DeleteSwimmingLaneResponse Alibabacloud_Mse20190531::Client::deleteSwimmingLaneWithOptions(shared_ptr<DeleteSwimmingLaneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->laneId)) {
    query->insert(pair<string, long>("LaneId", *request->laneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSwimmingLane"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSwimmingLaneResponse(callApi(params, req, runtime));
}

DeleteSwimmingLaneResponse Alibabacloud_Mse20190531::Client::deleteSwimmingLane(shared_ptr<DeleteSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSwimmingLaneWithOptions(request, runtime);
}

DeleteSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::deleteSwimmingLaneGroupWithOptions(shared_ptr<DeleteSwimmingLaneGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSwimmingLaneGroup"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSwimmingLaneGroupResponse(callApi(params, req, runtime));
}

DeleteSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::deleteSwimmingLaneGroup(shared_ptr<DeleteSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSwimmingLaneGroupWithOptions(request, runtime);
}

DeleteZnodeResponse Alibabacloud_Mse20190531::Client::deleteZnodeWithOptions(shared_ptr<DeleteZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteZnode"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteZnodeResponse(callApi(params, req, runtime));
}

DeleteZnodeResponse Alibabacloud_Mse20190531::Client::deleteZnode(shared_ptr<DeleteZnodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteZnodeWithOptions(request, runtime);
}

EnableHttp2Response Alibabacloud_Mse20190531::Client::enableHttp2WithOptions(shared_ptr<EnableHttp2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableHttp2)) {
    query->insert(pair<string, bool>("EnableHttp2", *request->enableHttp2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHttp2"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableHttp2Response(callApi(params, req, runtime));
}

EnableHttp2Response Alibabacloud_Mse20190531::Client::enableHttp2(shared_ptr<EnableHttp2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableHttp2WithOptions(request, runtime);
}

EnableProxyProtocolResponse Alibabacloud_Mse20190531::Client::enableProxyProtocolWithOptions(shared_ptr<EnableProxyProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableProxyProtocol)) {
    query->insert(pair<string, bool>("EnableProxyProtocol", *request->enableProxyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableProxyProtocol"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableProxyProtocolResponse(callApi(params, req, runtime));
}

EnableProxyProtocolResponse Alibabacloud_Mse20190531::Client::enableProxyProtocol(shared_ptr<EnableProxyProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableProxyProtocolWithOptions(request, runtime);
}

ExportNacosConfigResponse Alibabacloud_Mse20190531::Client::exportNacosConfigWithOptions(shared_ptr<ExportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataIds)) {
    query->insert(pair<string, string>("DataIds", *request->dataIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportNacosConfigResponse(callApi(params, req, runtime));
}

ExportNacosConfigResponse Alibabacloud_Mse20190531::Client::exportNacosConfig(shared_ptr<ExportNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportNacosConfigWithOptions(request, runtime);
}

ExportZookeeperDataResponse Alibabacloud_Mse20190531::Client::exportZookeeperDataWithOptions(shared_ptr<ExportZookeeperDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportType)) {
    query->insert(pair<string, string>("ExportType", *request->exportType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportZookeeperData"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportZookeeperDataResponse(callApi(params, req, runtime));
}

ExportZookeeperDataResponse Alibabacloud_Mse20190531::Client::exportZookeeperData(shared_ptr<ExportZookeeperDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportZookeeperDataWithOptions(request, runtime);
}

FetchLosslessRuleListResponse Alibabacloud_Mse20190531::Client::fetchLosslessRuleListWithOptions(shared_ptr<FetchLosslessRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FetchLosslessRuleList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FetchLosslessRuleListResponse(callApi(params, req, runtime));
}

FetchLosslessRuleListResponse Alibabacloud_Mse20190531::Client::fetchLosslessRuleList(shared_ptr<FetchLosslessRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchLosslessRuleListWithOptions(request, runtime);
}

GatewayBlackWhiteListResponse Alibabacloud_Mse20190531::Client::gatewayBlackWhiteListWithOptions(shared_ptr<GatewayBlackWhiteListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GatewayBlackWhiteListShrinkRequest> request = make_shared<GatewayBlackWhiteListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GatewayBlackWhiteListRequestFilterParams>(tmpReq->filterParams)) {
    request->filterParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterParams, make_shared<string>("FilterParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->descSort)) {
    query->insert(pair<string, bool>("DescSort", *request->descSort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParamsShrink)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItem)) {
    query->insert(pair<string, string>("OrderItem", *request->orderItem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GatewayBlackWhiteList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GatewayBlackWhiteListResponse(callApi(params, req, runtime));
}

GatewayBlackWhiteListResponse Alibabacloud_Mse20190531::Client::gatewayBlackWhiteList(shared_ptr<GatewayBlackWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return gatewayBlackWhiteListWithOptions(request, runtime);
}

GetAppMessageQueueRouteResponse Alibabacloud_Mse20190531::Client::getAppMessageQueueRouteWithOptions(shared_ptr<GetAppMessageQueueRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppMessageQueueRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppMessageQueueRouteResponse(callApi(params, req, runtime));
}

GetAppMessageQueueRouteResponse Alibabacloud_Mse20190531::Client::getAppMessageQueueRoute(shared_ptr<GetAppMessageQueueRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppMessageQueueRouteWithOptions(request, runtime);
}

GetApplicationInstanceListResponse Alibabacloud_Mse20190531::Client::getApplicationInstanceListWithOptions(shared_ptr<GetApplicationInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplicationInstanceList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationInstanceListResponse(callApi(params, req, runtime));
}

GetApplicationInstanceListResponse Alibabacloud_Mse20190531::Client::getApplicationInstanceList(shared_ptr<GetApplicationInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApplicationInstanceListWithOptions(request, runtime);
}

GetApplicationListResponse Alibabacloud_Mse20190531::Client::getApplicationListWithOptions(shared_ptr<GetApplicationListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetApplicationListShrinkRequest> request = make_shared<GetApplicationListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetApplicationListRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sentinelEnable)) {
    query->insert(pair<string, bool>("SentinelEnable", *request->sentinelEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->switchEnable)) {
    query->insert(pair<string, bool>("SwitchEnable", *request->switchEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplicationList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationListResponse(callApi(params, req, runtime));
}

GetApplicationListResponse Alibabacloud_Mse20190531::Client::getApplicationList(shared_ptr<GetApplicationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApplicationListWithOptions(request, runtime);
}

GetBlackWhiteListResponse Alibabacloud_Mse20190531::Client::getBlackWhiteListWithOptions(shared_ptr<GetBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isWhite)) {
    query->insert(pair<string, bool>("IsWhite", *request->isWhite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBlackWhiteList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBlackWhiteListResponse(callApi(params, req, runtime));
}

GetBlackWhiteListResponse Alibabacloud_Mse20190531::Client::getBlackWhiteList(shared_ptr<GetBlackWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBlackWhiteListWithOptions(request, runtime);
}

GetEngineNamepaceResponse Alibabacloud_Mse20190531::Client::getEngineNamepaceWithOptions(shared_ptr<GetEngineNamepaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEngineNamepace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEngineNamepaceResponse(callApi(params, req, runtime));
}

GetEngineNamepaceResponse Alibabacloud_Mse20190531::Client::getEngineNamepace(shared_ptr<GetEngineNamepaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEngineNamepaceWithOptions(request, runtime);
}

GetGatewayResponse Alibabacloud_Mse20190531::Client::getGatewayWithOptions(shared_ptr<GetGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGateway"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayResponse(callApi(params, req, runtime));
}

GetGatewayResponse Alibabacloud_Mse20190531::Client::getGateway(shared_ptr<GetGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayWithOptions(request, runtime);
}

GetGatewayAuthConsumerDetailResponse Alibabacloud_Mse20190531::Client::getGatewayAuthConsumerDetailWithOptions(shared_ptr<GetGatewayAuthConsumerDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayAuthConsumerDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayAuthConsumerDetailResponse(callApi(params, req, runtime));
}

GetGatewayAuthConsumerDetailResponse Alibabacloud_Mse20190531::Client::getGatewayAuthConsumerDetail(shared_ptr<GetGatewayAuthConsumerDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayAuthConsumerDetailWithOptions(request, runtime);
}

GetGatewayAuthDetailResponse Alibabacloud_Mse20190531::Client::getGatewayAuthDetailWithOptions(shared_ptr<GetGatewayAuthDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayAuthDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayAuthDetailResponse(callApi(params, req, runtime));
}

GetGatewayAuthDetailResponse Alibabacloud_Mse20190531::Client::getGatewayAuthDetail(shared_ptr<GetGatewayAuthDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayAuthDetailWithOptions(request, runtime);
}

GetGatewayConfigResponse Alibabacloud_Mse20190531::Client::getGatewayConfigWithOptions(shared_ptr<GetGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayConfigResponse(callApi(params, req, runtime));
}

GetGatewayConfigResponse Alibabacloud_Mse20190531::Client::getGatewayConfig(shared_ptr<GetGatewayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayConfigWithOptions(request, runtime);
}

GetGatewayDomainDetailResponse Alibabacloud_Mse20190531::Client::getGatewayDomainDetailWithOptions(shared_ptr<GetGatewayDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayDomainDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayDomainDetailResponse(callApi(params, req, runtime));
}

GetGatewayDomainDetailResponse Alibabacloud_Mse20190531::Client::getGatewayDomainDetail(shared_ptr<GetGatewayDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayDomainDetailWithOptions(request, runtime);
}

GetGatewayOptionResponse Alibabacloud_Mse20190531::Client::getGatewayOptionWithOptions(shared_ptr<GetGatewayOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayOption"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayOptionResponse(callApi(params, req, runtime));
}

GetGatewayOptionResponse Alibabacloud_Mse20190531::Client::getGatewayOption(shared_ptr<GetGatewayOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayOptionWithOptions(request, runtime);
}

GetGatewayRouteDetailResponse Alibabacloud_Mse20190531::Client::getGatewayRouteDetailWithOptions(shared_ptr<GetGatewayRouteDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayRouteDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayRouteDetailResponse(callApi(params, req, runtime));
}

GetGatewayRouteDetailResponse Alibabacloud_Mse20190531::Client::getGatewayRouteDetail(shared_ptr<GetGatewayRouteDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayRouteDetailWithOptions(request, runtime);
}

GetGatewayServiceDetailResponse Alibabacloud_Mse20190531::Client::getGatewayServiceDetailWithOptions(shared_ptr<GetGatewayServiceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    query->insert(pair<string, long>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayServiceDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayServiceDetailResponse(callApi(params, req, runtime));
}

GetGatewayServiceDetailResponse Alibabacloud_Mse20190531::Client::getGatewayServiceDetail(shared_ptr<GetGatewayServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayServiceDetailWithOptions(request, runtime);
}

GetGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::getGovernanceKubernetesClusterWithOptions(shared_ptr<GetGovernanceKubernetesClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGovernanceKubernetesCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGovernanceKubernetesClusterResponse(callApi(params, req, runtime));
}

GetGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::getGovernanceKubernetesCluster(shared_ptr<GetGovernanceKubernetesClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGovernanceKubernetesClusterWithOptions(request, runtime);
}

GetImageResponse Alibabacloud_Mse20190531::Client::getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionCode)) {
    query->insert(pair<string, string>("VersionCode", *request->versionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImage"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageResponse(callApi(params, req, runtime));
}

GetImageResponse Alibabacloud_Mse20190531::Client::getImage(shared_ptr<GetImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageWithOptions(request, runtime);
}

GetImportFileUrlResponse Alibabacloud_Mse20190531::Client::getImportFileUrlWithOptions(shared_ptr<GetImportFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImportFileUrl"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImportFileUrlResponse(callApi(params, req, runtime));
}

GetImportFileUrlResponse Alibabacloud_Mse20190531::Client::getImportFileUrl(shared_ptr<GetImportFileUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImportFileUrlWithOptions(request, runtime);
}

GetKubernetesSourceResponse Alibabacloud_Mse20190531::Client::getKubernetesSourceWithOptions(shared_ptr<GetKubernetesSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAll)) {
    query->insert(pair<string, bool>("IsAll", *request->isAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKubernetesSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetKubernetesSourceResponse(callApi(params, req, runtime));
}

GetKubernetesSourceResponse Alibabacloud_Mse20190531::Client::getKubernetesSource(shared_ptr<GetKubernetesSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKubernetesSourceWithOptions(request, runtime);
}

GetLocalityRuleResponse Alibabacloud_Mse20190531::Client::getLocalityRuleWithOptions(shared_ptr<GetLocalityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLocalityRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLocalityRuleResponse(callApi(params, req, runtime));
}

GetLocalityRuleResponse Alibabacloud_Mse20190531::Client::getLocalityRule(shared_ptr<GetLocalityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLocalityRuleWithOptions(request, runtime);
}

GetLosslessRuleByAppResponse Alibabacloud_Mse20190531::Client::getLosslessRuleByAppWithOptions(shared_ptr<GetLosslessRuleByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLosslessRuleByApp"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLosslessRuleByAppResponse(callApi(params, req, runtime));
}

GetLosslessRuleByAppResponse Alibabacloud_Mse20190531::Client::getLosslessRuleByApp(shared_ptr<GetLosslessRuleByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLosslessRuleByAppWithOptions(request, runtime);
}

GetMseFeatureSwitchResponse Alibabacloud_Mse20190531::Client::getMseFeatureSwitchWithOptions(shared_ptr<GetMseFeatureSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMseFeatureSwitch"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMseFeatureSwitchResponse(callApi(params, req, runtime));
}

GetMseFeatureSwitchResponse Alibabacloud_Mse20190531::Client::getMseFeatureSwitch(shared_ptr<GetMseFeatureSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMseFeatureSwitchWithOptions(request, runtime);
}

GetMseSourceResponse Alibabacloud_Mse20190531::Client::getMseSourceWithOptions(shared_ptr<GetMseSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMseSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMseSourceResponse(callApi(params, req, runtime));
}

GetMseSourceResponse Alibabacloud_Mse20190531::Client::getMseSource(shared_ptr<GetMseSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMseSourceWithOptions(request, runtime);
}

GetNacosConfigResponse Alibabacloud_Mse20190531::Client::getNacosConfigWithOptions(shared_ptr<GetNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->beta)) {
    query->insert(pair<string, bool>("Beta", *request->beta));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNacosConfigResponse(callApi(params, req, runtime));
}

GetNacosConfigResponse Alibabacloud_Mse20190531::Client::getNacosConfig(shared_ptr<GetNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNacosConfigWithOptions(request, runtime);
}

GetNacosHistoryConfigResponse Alibabacloud_Mse20190531::Client::getNacosHistoryConfigWithOptions(shared_ptr<GetNacosHistoryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nid)) {
    query->insert(pair<string, string>("Nid", *request->nid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNacosHistoryConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNacosHistoryConfigResponse(callApi(params, req, runtime));
}

GetNacosHistoryConfigResponse Alibabacloud_Mse20190531::Client::getNacosHistoryConfig(shared_ptr<GetNacosHistoryConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNacosHistoryConfigWithOptions(request, runtime);
}

GetOverviewResponse Alibabacloud_Mse20190531::Client::getOverviewWithOptions(shared_ptr<GetOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOverview"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOverviewResponse(callApi(params, req, runtime));
}

GetOverviewResponse Alibabacloud_Mse20190531::Client::getOverview(shared_ptr<GetOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOverviewWithOptions(request, runtime);
}

GetPluginConfigResponse Alibabacloud_Mse20190531::Client::getPluginConfigWithOptions(shared_ptr<GetPluginConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pluginId)) {
    query->insert(pair<string, long>("PluginId", *request->pluginId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPluginConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPluginConfigResponse(callApi(params, req, runtime));
}

GetPluginConfigResponse Alibabacloud_Mse20190531::Client::getPluginConfig(shared_ptr<GetPluginConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPluginConfigWithOptions(request, runtime);
}

GetPluginsResponse Alibabacloud_Mse20190531::Client::getPluginsWithOptions(shared_ptr<GetPluginsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOnly)) {
    query->insert(pair<string, bool>("EnableOnly", *request->enableOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPlugins"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPluginsResponse(callApi(params, req, runtime));
}

GetPluginsResponse Alibabacloud_Mse20190531::Client::getPlugins(shared_ptr<GetPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPluginsWithOptions(request, runtime);
}

GetServiceListResponse Alibabacloud_Mse20190531::Client::getServiceListWithOptions(shared_ptr<GetServiceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceListResponse(callApi(params, req, runtime));
}

GetServiceListResponse Alibabacloud_Mse20190531::Client::getServiceList(shared_ptr<GetServiceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceListWithOptions(request, runtime);
}

GetServiceListPageResponse Alibabacloud_Mse20190531::Client::getServiceListPageWithOptions(shared_ptr<GetServiceListPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceListPage"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceListPageResponse(callApi(params, req, runtime));
}

GetServiceListPageResponse Alibabacloud_Mse20190531::Client::getServiceListPage(shared_ptr<GetServiceListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceListPageWithOptions(request, runtime);
}

GetServiceListenersResponse Alibabacloud_Mse20190531::Client::getServiceListenersWithOptions(shared_ptr<GetServiceListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hasIpCount)) {
    query->insert(pair<string, string>("HasIpCount", *request->hasIpCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceListeners"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceListenersResponse(callApi(params, req, runtime));
}

GetServiceListenersResponse Alibabacloud_Mse20190531::Client::getServiceListeners(shared_ptr<GetServiceListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceListenersWithOptions(request, runtime);
}

GetServiceMethodPageResponse Alibabacloud_Mse20190531::Client::getServiceMethodPageWithOptions(shared_ptr<GetServiceMethodPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodController)) {
    query->insert(pair<string, string>("MethodController", *request->methodController));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroup)) {
    query->insert(pair<string, string>("ServiceGroup", *request->serviceGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceMethodPage"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceMethodPageResponse(callApi(params, req, runtime));
}

GetServiceMethodPageResponse Alibabacloud_Mse20190531::Client::getServiceMethodPage(shared_ptr<GetServiceMethodPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceMethodPageWithOptions(request, runtime);
}

GetTagsBySwimmingLaneGroupIdResponse Alibabacloud_Mse20190531::Client::getTagsBySwimmingLaneGroupIdWithOptions(shared_ptr<GetTagsBySwimmingLaneGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTagsBySwimmingLaneGroupId"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTagsBySwimmingLaneGroupIdResponse(callApi(params, req, runtime));
}

GetTagsBySwimmingLaneGroupIdResponse Alibabacloud_Mse20190531::Client::getTagsBySwimmingLaneGroupId(shared_ptr<GetTagsBySwimmingLaneGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTagsBySwimmingLaneGroupIdWithOptions(request, runtime);
}

GetZookeeperDataImportUrlResponse Alibabacloud_Mse20190531::Client::getZookeeperDataImportUrlWithOptions(shared_ptr<GetZookeeperDataImportUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetZookeeperDataImportUrl"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetZookeeperDataImportUrlResponse(callApi(params, req, runtime));
}

GetZookeeperDataImportUrlResponse Alibabacloud_Mse20190531::Client::getZookeeperDataImportUrl(shared_ptr<GetZookeeperDataImportUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getZookeeperDataImportUrlWithOptions(request, runtime);
}

ImportNacosConfigResponse Alibabacloud_Mse20190531::Client::importNacosConfigWithOptions(shared_ptr<ImportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportNacosConfigResponse(callApi(params, req, runtime));
}

ImportNacosConfigResponse Alibabacloud_Mse20190531::Client::importNacosConfig(shared_ptr<ImportNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importNacosConfigWithOptions(request, runtime);
}

ImportServicesResponse Alibabacloud_Mse20190531::Client::importServicesWithOptions(shared_ptr<ImportServicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportServicesShrinkRequest> request = make_shared<ImportServicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ImportServicesRequestServiceList>>(tmpReq->serviceList)) {
    request->serviceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceList, make_shared<string>("ServiceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcAlias)) {
    query->insert(pair<string, string>("FcAlias", *request->fcAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcServiceName)) {
    query->insert(pair<string, string>("FcServiceName", *request->fcServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcVersion)) {
    query->insert(pair<string, string>("FcVersion", *request->fcVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceListShrink)) {
    query->insert(pair<string, string>("ServiceList", *request->serviceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceId)) {
    query->insert(pair<string, long>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsSetting)) {
    query->insert(pair<string, string>("TlsSetting", *request->tlsSetting));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportServices"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportServicesResponse(callApi(params, req, runtime));
}

ImportServicesResponse Alibabacloud_Mse20190531::Client::importServices(shared_ptr<ImportServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importServicesWithOptions(request, runtime);
}

ImportZookeeperDataResponse Alibabacloud_Mse20190531::Client::importZookeeperDataWithOptions(shared_ptr<ImportZookeeperDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportZookeeperData"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportZookeeperDataResponse(callApi(params, req, runtime));
}

ImportZookeeperDataResponse Alibabacloud_Mse20190531::Client::importZookeeperData(shared_ptr<ImportZookeeperDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importZookeeperDataWithOptions(request, runtime);
}

InitializeServiceLinkRoleResponse Alibabacloud_Mse20190531::Client::initializeServiceLinkRoleWithOptions(shared_ptr<InitializeServiceLinkRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeServiceLinkRole"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeServiceLinkRoleResponse(callApi(params, req, runtime));
}

InitializeServiceLinkRoleResponse Alibabacloud_Mse20190531::Client::initializeServiceLinkRole(shared_ptr<InitializeServiceLinkRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeServiceLinkRoleWithOptions(request, runtime);
}

ListAnsInstancesResponse Alibabacloud_Mse20190531::Client::listAnsInstancesWithOptions(shared_ptr<ListAnsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnsInstances"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnsInstancesResponse(callApi(params, req, runtime));
}

ListAnsInstancesResponse Alibabacloud_Mse20190531::Client::listAnsInstances(shared_ptr<ListAnsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnsInstancesWithOptions(request, runtime);
}

ListAnsServiceClustersResponse Alibabacloud_Mse20190531::Client::listAnsServiceClustersWithOptions(shared_ptr<ListAnsServiceClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnsServiceClusters"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnsServiceClustersResponse(callApi(params, req, runtime));
}

ListAnsServiceClustersResponse Alibabacloud_Mse20190531::Client::listAnsServiceClusters(shared_ptr<ListAnsServiceClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnsServiceClustersWithOptions(request, runtime);
}

ListAnsServicesResponse Alibabacloud_Mse20190531::Client::listAnsServicesWithOptions(shared_ptr<ListAnsServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hasIpCount)) {
    query->insert(pair<string, string>("HasIpCount", *request->hasIpCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnsServices"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnsServicesResponse(callApi(params, req, runtime));
}

ListAnsServicesResponse Alibabacloud_Mse20190531::Client::listAnsServices(shared_ptr<ListAnsServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnsServicesWithOptions(request, runtime);
}

ListAppBySwimmingLaneGroupTagResponse Alibabacloud_Mse20190531::Client::listAppBySwimmingLaneGroupTagWithOptions(shared_ptr<ListAppBySwimmingLaneGroupTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppBySwimmingLaneGroupTag"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppBySwimmingLaneGroupTagResponse(callApi(params, req, runtime));
}

ListAppBySwimmingLaneGroupTagResponse Alibabacloud_Mse20190531::Client::listAppBySwimmingLaneGroupTag(shared_ptr<ListAppBySwimmingLaneGroupTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppBySwimmingLaneGroupTagWithOptions(request, runtime);
}

ListAppBySwimmingLaneGroupTagsResponse Alibabacloud_Mse20190531::Client::listAppBySwimmingLaneGroupTagsWithOptions(shared_ptr<ListAppBySwimmingLaneGroupTagsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAppBySwimmingLaneGroupTagsShrinkRequest> request = make_shared<ListAppBySwimmingLaneGroupTagsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppBySwimmingLaneGroupTags"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppBySwimmingLaneGroupTagsResponse(callApi(params, req, runtime));
}

ListAppBySwimmingLaneGroupTagsResponse Alibabacloud_Mse20190531::Client::listAppBySwimmingLaneGroupTags(shared_ptr<ListAppBySwimmingLaneGroupTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppBySwimmingLaneGroupTagsWithOptions(request, runtime);
}

ListApplicationsWithTagRulesResponse Alibabacloud_Mse20190531::Client::listApplicationsWithTagRulesWithOptions(shared_ptr<ListApplicationsWithTagRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationsWithTagRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsWithTagRulesResponse(callApi(params, req, runtime));
}

ListApplicationsWithTagRulesResponse Alibabacloud_Mse20190531::Client::listApplicationsWithTagRules(shared_ptr<ListApplicationsWithTagRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsWithTagRulesWithOptions(request, runtime);
}

ListAuthPolicyResponse Alibabacloud_Mse20190531::Client::listAuthPolicyWithOptions(shared_ptr<ListAuthPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthPolicy"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthPolicyResponse(callApi(params, req, runtime));
}

ListAuthPolicyResponse Alibabacloud_Mse20190531::Client::listAuthPolicy(shared_ptr<ListAuthPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthPolicyWithOptions(request, runtime);
}

ListCircuitBreakerRulesResponse Alibabacloud_Mse20190531::Client::listCircuitBreakerRulesWithOptions(shared_ptr<ListCircuitBreakerRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSearchKey)) {
    query->insert(pair<string, string>("ResourceSearchKey", *request->resourceSearchKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCircuitBreakerRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCircuitBreakerRulesResponse(callApi(params, req, runtime));
}

ListCircuitBreakerRulesResponse Alibabacloud_Mse20190531::Client::listCircuitBreakerRules(shared_ptr<ListCircuitBreakerRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCircuitBreakerRulesWithOptions(request, runtime);
}

ListClusterConnectionTypesResponse Alibabacloud_Mse20190531::Client::listClusterConnectionTypesWithOptions(shared_ptr<ListClusterConnectionTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterConnectionTypes"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterConnectionTypesResponse(callApi(params, req, runtime));
}

ListClusterConnectionTypesResponse Alibabacloud_Mse20190531::Client::listClusterConnectionTypes(shared_ptr<ListClusterConnectionTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterConnectionTypesWithOptions(request, runtime);
}

ListClusterHealthCheckTaskResponse Alibabacloud_Mse20190531::Client::listClusterHealthCheckTaskWithOptions(shared_ptr<ListClusterHealthCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterHealthCheckTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterHealthCheckTaskResponse(callApi(params, req, runtime));
}

ListClusterHealthCheckTaskResponse Alibabacloud_Mse20190531::Client::listClusterHealthCheckTask(shared_ptr<ListClusterHealthCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterHealthCheckTaskWithOptions(request, runtime);
}

ListClusterTypesResponse Alibabacloud_Mse20190531::Client::listClusterTypesWithOptions(shared_ptr<ListClusterTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectType)) {
    query->insert(pair<string, string>("ConnectType", *request->connectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterTypes"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterTypesResponse(callApi(params, req, runtime));
}

ListClusterTypesResponse Alibabacloud_Mse20190531::Client::listClusterTypes(shared_ptr<ListClusterTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterTypesWithOptions(request, runtime);
}

ListClusterVersionsResponse Alibabacloud_Mse20190531::Client::listClusterVersionsWithOptions(shared_ptr<ListClusterVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterVersions"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterVersionsResponse(callApi(params, req, runtime));
}

ListClusterVersionsResponse Alibabacloud_Mse20190531::Client::listClusterVersions(shared_ptr<ListClusterVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterVersionsWithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_Mse20190531::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterAliasName)) {
    query->insert(pair<string, string>("ClusterAliasName", *request->clusterAliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListClustersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListClustersRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusters"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClustersResponse(callApi(params, req, runtime));
}

ListClustersResponse Alibabacloud_Mse20190531::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersWithOptions(request, runtime);
}

ListConfigTrackResponse Alibabacloud_Mse20190531::Client::listConfigTrackWithOptions(shared_ptr<ListConfigTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigTrack"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigTrackResponse(callApi(params, req, runtime));
}

ListConfigTrackResponse Alibabacloud_Mse20190531::Client::listConfigTrack(shared_ptr<ListConfigTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigTrackWithOptions(request, runtime);
}

ListEngineNamespacesResponse Alibabacloud_Mse20190531::Client::listEngineNamespacesWithOptions(shared_ptr<ListEngineNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEngineNamespaces"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEngineNamespacesResponse(callApi(params, req, runtime));
}

ListEngineNamespacesResponse Alibabacloud_Mse20190531::Client::listEngineNamespaces(shared_ptr<ListEngineNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEngineNamespacesWithOptions(request, runtime);
}

ListEurekaInstancesResponse Alibabacloud_Mse20190531::Client::listEurekaInstancesWithOptions(shared_ptr<ListEurekaInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEurekaInstances"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEurekaInstancesResponse(callApi(params, req, runtime));
}

ListEurekaInstancesResponse Alibabacloud_Mse20190531::Client::listEurekaInstances(shared_ptr<ListEurekaInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEurekaInstancesWithOptions(request, runtime);
}

ListEurekaServicesResponse Alibabacloud_Mse20190531::Client::listEurekaServicesWithOptions(shared_ptr<ListEurekaServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEurekaServices"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEurekaServicesResponse(callApi(params, req, runtime));
}

ListEurekaServicesResponse Alibabacloud_Mse20190531::Client::listEurekaServices(shared_ptr<ListEurekaServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEurekaServicesWithOptions(request, runtime);
}

ListExportZookeeperDataResponse Alibabacloud_Mse20190531::Client::listExportZookeeperDataWithOptions(shared_ptr<ListExportZookeeperDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExportZookeeperData"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExportZookeeperDataResponse(callApi(params, req, runtime));
}

ListExportZookeeperDataResponse Alibabacloud_Mse20190531::Client::listExportZookeeperData(shared_ptr<ListExportZookeeperDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExportZookeeperDataWithOptions(request, runtime);
}

ListFlowRulesResponse Alibabacloud_Mse20190531::Client::listFlowRulesWithOptions(shared_ptr<ListFlowRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSearchKey)) {
    query->insert(pair<string, string>("ResourceSearchKey", *request->resourceSearchKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlowRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFlowRulesResponse(callApi(params, req, runtime));
}

ListFlowRulesResponse Alibabacloud_Mse20190531::Client::listFlowRules(shared_ptr<ListFlowRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowRulesWithOptions(request, runtime);
}

ListGatewayResponse Alibabacloud_Mse20190531::Client::listGatewayWithOptions(shared_ptr<ListGatewayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGatewayShrinkRequest> request = make_shared<ListGatewayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListGatewayRequestFilterParams>(tmpReq->filterParams)) {
    request->filterParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterParams, make_shared<string>("FilterParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->descSort)) {
    query->insert(pair<string, bool>("DescSort", *request->descSort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParamsShrink)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItem)) {
    query->insert(pair<string, string>("OrderItem", *request->orderItem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGateway"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayResponse(callApi(params, req, runtime));
}

ListGatewayResponse Alibabacloud_Mse20190531::Client::listGateway(shared_ptr<ListGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayWithOptions(request, runtime);
}

ListGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::listGatewayAuthConsumerWithOptions(shared_ptr<ListGatewayAuthConsumerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->consumerStatus)) {
    query->insert(pair<string, bool>("ConsumerStatus", *request->consumerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayAuthConsumer"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayAuthConsumerResponse(callApi(params, req, runtime));
}

ListGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::listGatewayAuthConsumer(shared_ptr<ListGatewayAuthConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayAuthConsumerWithOptions(request, runtime);
}

ListGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::listGatewayAuthConsumerResourceWithOptions(shared_ptr<ListGatewayAuthConsumerResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerId)) {
    query->insert(pair<string, long>("ConsumerId", *request->consumerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resourceStatus)) {
    query->insert(pair<string, bool>("ResourceStatus", *request->resourceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayAuthConsumerResource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayAuthConsumerResourceResponse(callApi(params, req, runtime));
}

ListGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::listGatewayAuthConsumerResource(shared_ptr<ListGatewayAuthConsumerResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayAuthConsumerResourceWithOptions(request, runtime);
}

ListGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::listGatewayCircuitBreakerRuleWithOptions(shared_ptr<ListGatewayCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParams)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

ListGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::listGatewayCircuitBreakerRule(shared_ptr<ListGatewayCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

ListGatewayDomainResponse Alibabacloud_Mse20190531::Client::listGatewayDomainWithOptions(shared_ptr<ListGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayDomain"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayDomainResponse(callApi(params, req, runtime));
}

ListGatewayDomainResponse Alibabacloud_Mse20190531::Client::listGatewayDomain(shared_ptr<ListGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayDomainWithOptions(request, runtime);
}

ListGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::listGatewayFlowRuleWithOptions(shared_ptr<ListGatewayFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParams)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayFlowRuleResponse(callApi(params, req, runtime));
}

ListGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::listGatewayFlowRule(shared_ptr<ListGatewayFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayFlowRuleWithOptions(request, runtime);
}

ListGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::listGatewayIsolationRuleWithOptions(shared_ptr<ListGatewayIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParams)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayIsolationRuleResponse(callApi(params, req, runtime));
}

ListGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::listGatewayIsolationRule(shared_ptr<ListGatewayIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayIsolationRuleWithOptions(request, runtime);
}

ListGatewayRouteResponse Alibabacloud_Mse20190531::Client::listGatewayRouteWithOptions(shared_ptr<ListGatewayRouteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGatewayRouteShrinkRequest> request = make_shared<ListGatewayRouteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListGatewayRouteRequestFilterParams>(tmpReq->filterParams)) {
    request->filterParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterParams, make_shared<string>("FilterParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->descSort)) {
    query->insert(pair<string, bool>("DescSort", *request->descSort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParamsShrink)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItem)) {
    query->insert(pair<string, string>("OrderItem", *request->orderItem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayRouteResponse(callApi(params, req, runtime));
}

ListGatewayRouteResponse Alibabacloud_Mse20190531::Client::listGatewayRoute(shared_ptr<ListGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayRouteWithOptions(request, runtime);
}

ListGatewayRouteOnAuthResponse Alibabacloud_Mse20190531::Client::listGatewayRouteOnAuthWithOptions(shared_ptr<ListGatewayRouteOnAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayRouteOnAuth"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayRouteOnAuthResponse(callApi(params, req, runtime));
}

ListGatewayRouteOnAuthResponse Alibabacloud_Mse20190531::Client::listGatewayRouteOnAuth(shared_ptr<ListGatewayRouteOnAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayRouteOnAuthWithOptions(request, runtime);
}

ListGatewayServiceResponse Alibabacloud_Mse20190531::Client::listGatewayServiceWithOptions(shared_ptr<ListGatewayServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGatewayServiceShrinkRequest> request = make_shared<ListGatewayServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListGatewayServiceRequestFilterParams>(tmpReq->filterParams)) {
    request->filterParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterParams, make_shared<string>("FilterParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->descSort)) {
    query->insert(pair<string, bool>("DescSort", *request->descSort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterParamsShrink)) {
    query->insert(pair<string, string>("FilterParams", *request->filterParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItem)) {
    query->insert(pair<string, string>("OrderItem", *request->orderItem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayServiceResponse(callApi(params, req, runtime));
}

ListGatewayServiceResponse Alibabacloud_Mse20190531::Client::listGatewayService(shared_ptr<ListGatewayServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayServiceWithOptions(request, runtime);
}

ListGatewaySlbResponse Alibabacloud_Mse20190531::Client::listGatewaySlbWithOptions(shared_ptr<ListGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewaySlb"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewaySlbResponse(callApi(params, req, runtime));
}

ListGatewaySlbResponse Alibabacloud_Mse20190531::Client::listGatewaySlb(shared_ptr<ListGatewaySlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewaySlbWithOptions(request, runtime);
}

ListGatewayZoneResponse Alibabacloud_Mse20190531::Client::listGatewayZoneWithOptions(shared_ptr<ListGatewayZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayZone"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayZoneResponse(callApi(params, req, runtime));
}

ListGatewayZoneResponse Alibabacloud_Mse20190531::Client::listGatewayZone(shared_ptr<ListGatewayZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGatewayZoneWithOptions(request, runtime);
}

ListInstanceCountResponse Alibabacloud_Mse20190531::Client::listInstanceCountWithOptions(shared_ptr<ListInstanceCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceCount"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceCountResponse(callApi(params, req, runtime));
}

ListInstanceCountResponse Alibabacloud_Mse20190531::Client::listInstanceCount(shared_ptr<ListInstanceCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceCountWithOptions(request, runtime);
}

ListIsolationRulesResponse Alibabacloud_Mse20190531::Client::listIsolationRulesWithOptions(shared_ptr<ListIsolationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSearchKey)) {
    query->insert(pair<string, string>("ResourceSearchKey", *request->resourceSearchKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIsolationRules"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIsolationRulesResponse(callApi(params, req, runtime));
}

ListIsolationRulesResponse Alibabacloud_Mse20190531::Client::listIsolationRules(shared_ptr<ListIsolationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIsolationRulesWithOptions(request, runtime);
}

ListListenersByConfigResponse Alibabacloud_Mse20190531::Client::listListenersByConfigWithOptions(shared_ptr<ListListenersByConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListListenersByConfigShrinkRequest> request = make_shared<ListListenersByConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListListenersByConfigRequestExtGrayRules>>(tmpReq->extGrayRules)) {
    request->extGrayRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extGrayRules, make_shared<string>("ExtGrayRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extGrayRulesShrink)) {
    query->insert(pair<string, string>("ExtGrayRules", *request->extGrayRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListenersByConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenersByConfigResponse(callApi(params, req, runtime));
}

ListListenersByConfigResponse Alibabacloud_Mse20190531::Client::listListenersByConfig(shared_ptr<ListListenersByConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersByConfigWithOptions(request, runtime);
}

ListListenersByIpResponse Alibabacloud_Mse20190531::Client::listListenersByIpWithOptions(shared_ptr<ListListenersByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListenersByIp"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenersByIpResponse(callApi(params, req, runtime));
}

ListListenersByIpResponse Alibabacloud_Mse20190531::Client::listListenersByIp(shared_ptr<ListListenersByIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersByIpWithOptions(request, runtime);
}

ListMigrationTaskResponse Alibabacloud_Mse20190531::Client::listMigrationTaskWithOptions(shared_ptr<ListMigrationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceName)) {
    query->insert(pair<string, string>("OriginInstanceName", *request->originInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMigrationTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMigrationTaskResponse(callApi(params, req, runtime));
}

ListMigrationTaskResponse Alibabacloud_Mse20190531::Client::listMigrationTask(shared_ptr<ListMigrationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMigrationTaskWithOptions(request, runtime);
}

ListNacosConfigsResponse Alibabacloud_Mse20190531::Client::listNacosConfigsWithOptions(shared_ptr<ListNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNacosConfigs"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNacosConfigsResponse(callApi(params, req, runtime));
}

ListNacosConfigsResponse Alibabacloud_Mse20190531::Client::listNacosConfigs(shared_ptr<ListNacosConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNacosConfigsWithOptions(request, runtime);
}

ListNacosHistoryConfigsResponse Alibabacloud_Mse20190531::Client::listNacosHistoryConfigsWithOptions(shared_ptr<ListNacosHistoryConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNacosHistoryConfigs"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNacosHistoryConfigsResponse(callApi(params, req, runtime));
}

ListNacosHistoryConfigsResponse Alibabacloud_Mse20190531::Client::listNacosHistoryConfigs(shared_ptr<ListNacosHistoryConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNacosHistoryConfigsWithOptions(request, runtime);
}

ListNamespacesResponse Alibabacloud_Mse20190531::Client::listNamespacesWithOptions(shared_ptr<ListNamespacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListNamespacesShrinkRequest> request = make_shared<ListNamespacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListNamespacesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamespaces"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamespacesResponse(callApi(params, req, runtime));
}

ListNamespacesResponse Alibabacloud_Mse20190531::Client::listNamespaces(shared_ptr<ListNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNamespacesWithOptions(request, runtime);
}

ListNamingTrackResponse Alibabacloud_Mse20190531::Client::listNamingTrackWithOptions(shared_ptr<ListNamingTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamingTrack"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamingTrackResponse(callApi(params, req, runtime));
}

ListNamingTrackResponse Alibabacloud_Mse20190531::Client::listNamingTrack(shared_ptr<ListNamingTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNamingTrackWithOptions(request, runtime);
}

ListSSLCertResponse Alibabacloud_Mse20190531::Client::listSSLCertWithOptions(shared_ptr<ListSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSSLCert"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSSLCertResponse(callApi(params, req, runtime));
}

ListSSLCertResponse Alibabacloud_Mse20190531::Client::listSSLCert(shared_ptr<ListSSLCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSSLCertWithOptions(request, runtime);
}

ListSecurityGroupResponse Alibabacloud_Mse20190531::Client::listSecurityGroupWithOptions(shared_ptr<ListSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecurityGroup"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecurityGroupResponse(callApi(params, req, runtime));
}

ListSecurityGroupResponse Alibabacloud_Mse20190531::Client::listSecurityGroup(shared_ptr<ListSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityGroupWithOptions(request, runtime);
}

ListSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::listSecurityGroupRuleWithOptions(shared_ptr<ListSecurityGroupRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecurityGroupRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecurityGroupRuleResponse(callApi(params, req, runtime));
}

ListSecurityGroupRuleResponse Alibabacloud_Mse20190531::Client::listSecurityGroupRule(shared_ptr<ListSecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityGroupRuleWithOptions(request, runtime);
}

ListSentinelBlockFallbackDefinitionsResponse Alibabacloud_Mse20190531::Client::listSentinelBlockFallbackDefinitionsWithOptions(shared_ptr<ListSentinelBlockFallbackDefinitionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSentinelBlockFallbackDefinitionsShrinkRequest> request = make_shared<ListSentinelBlockFallbackDefinitionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->classificationSet)) {
    request->classificationSetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->classificationSet, make_shared<string>("ClassificationSet"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationSetShrink)) {
    query->insert(pair<string, string>("ClassificationSet", *request->classificationSetShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSentinelBlockFallbackDefinitions"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSentinelBlockFallbackDefinitionsResponse(callApi(params, req, runtime));
}

ListSentinelBlockFallbackDefinitionsResponse Alibabacloud_Mse20190531::Client::listSentinelBlockFallbackDefinitions(shared_ptr<ListSentinelBlockFallbackDefinitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSentinelBlockFallbackDefinitionsWithOptions(request, runtime);
}

ListServiceSourceResponse Alibabacloud_Mse20190531::Client::listServiceSourceWithOptions(shared_ptr<ListServiceSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceSourceResponse(callApi(params, req, runtime));
}

ListServiceSourceResponse Alibabacloud_Mse20190531::Client::listServiceSource(shared_ptr<ListServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceSourceWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Mse20190531::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Mse20190531::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListZkTrackResponse Alibabacloud_Mse20190531::Client::listZkTrackWithOptions(shared_ptr<ListZkTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListZkTrack"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListZkTrackResponse(callApi(params, req, runtime));
}

ListZkTrackResponse Alibabacloud_Mse20190531::Client::listZkTrack(shared_ptr<ListZkTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listZkTrackWithOptions(request, runtime);
}

ListZnodeChildrenResponse Alibabacloud_Mse20190531::Client::listZnodeChildrenWithOptions(shared_ptr<ListZnodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListZnodeChildren"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListZnodeChildrenResponse(callApi(params, req, runtime));
}

ListZnodeChildrenResponse Alibabacloud_Mse20190531::Client::listZnodeChildren(shared_ptr<ListZnodeChildrenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listZnodeChildrenWithOptions(request, runtime);
}

ModifyGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::modifyGovernanceKubernetesClusterWithOptions(shared_ptr<ModifyGovernanceKubernetesClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyGovernanceKubernetesClusterShrinkRequest> request = make_shared<ModifyGovernanceKubernetesClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyGovernanceKubernetesClusterRequestNamespaceInfos>>(tmpReq->namespaceInfos)) {
    request->namespaceInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->namespaceInfos, make_shared<string>("NamespaceInfos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceInfosShrink)) {
    body->insert(pair<string, string>("NamespaceInfos", *request->namespaceInfosShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGovernanceKubernetesCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGovernanceKubernetesClusterResponse(callApi(params, req, runtime));
}

ModifyGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::modifyGovernanceKubernetesCluster(shared_ptr<ModifyGovernanceKubernetesClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGovernanceKubernetesClusterWithOptions(request, runtime);
}

ModifyLosslessRuleResponse Alibabacloud_Mse20190531::Client::modifyLosslessRuleWithOptions(shared_ptr<ModifyLosslessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->aligned)) {
    query->insert(pair<string, bool>("Aligned", *request->aligned));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayTime)) {
    query->insert(pair<string, long>("DelayTime", *request->delayTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->funcType)) {
    query->insert(pair<string, long>("FuncType", *request->funcType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lossLessDetail)) {
    query->insert(pair<string, bool>("LossLessDetail", *request->lossLessDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->notice)) {
    query->insert(pair<string, bool>("Notice", *request->notice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->related)) {
    query->insert(pair<string, bool>("Related", *request->related));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warmupTime)) {
    query->insert(pair<string, long>("WarmupTime", *request->warmupTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLosslessRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLosslessRuleResponse(callApi(params, req, runtime));
}

ModifyLosslessRuleResponse Alibabacloud_Mse20190531::Client::modifyLosslessRule(shared_ptr<ModifyLosslessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLosslessRuleWithOptions(request, runtime);
}

OfflineGatewayRouteResponse Alibabacloud_Mse20190531::Client::offlineGatewayRouteWithOptions(shared_ptr<OfflineGatewayRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    query->insert(pair<string, string>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineGatewayRouteResponse(callApi(params, req, runtime));
}

OfflineGatewayRouteResponse Alibabacloud_Mse20190531::Client::offlineGatewayRoute(shared_ptr<OfflineGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineGatewayRouteWithOptions(request, runtime);
}

OrderClusterHealthCheckRiskNoticeResponse Alibabacloud_Mse20190531::Client::orderClusterHealthCheckRiskNoticeWithOptions(shared_ptr<OrderClusterHealthCheckRiskNoticeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mute)) {
    query->insert(pair<string, bool>("Mute", *request->mute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noticeType)) {
    query->insert(pair<string, string>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskCode)) {
    query->insert(pair<string, string>("RiskCode", *request->riskCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OrderClusterHealthCheckRiskNotice"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OrderClusterHealthCheckRiskNoticeResponse(callApi(params, req, runtime));
}

OrderClusterHealthCheckRiskNoticeResponse Alibabacloud_Mse20190531::Client::orderClusterHealthCheckRiskNotice(shared_ptr<OrderClusterHealthCheckRiskNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return orderClusterHealthCheckRiskNoticeWithOptions(request, runtime);
}

PreserveHeaderFormatResponse Alibabacloud_Mse20190531::Client::preserveHeaderFormatWithOptions(shared_ptr<PreserveHeaderFormatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->preserveHeaderFormat)) {
    query->insert(pair<string, bool>("PreserveHeaderFormat", *request->preserveHeaderFormat));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreserveHeaderFormat"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreserveHeaderFormatResponse(callApi(params, req, runtime));
}

PreserveHeaderFormatResponse Alibabacloud_Mse20190531::Client::preserveHeaderFormat(shared_ptr<PreserveHeaderFormatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preserveHeaderFormatWithOptions(request, runtime);
}

PullServicesResponse Alibabacloud_Mse20190531::Client::pullServicesWithOptions(shared_ptr<PullServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceId)) {
    query->insert(pair<string, long>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PullServices"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PullServicesResponse(callApi(params, req, runtime));
}

PullServicesResponse Alibabacloud_Mse20190531::Client::pullServices(shared_ptr<PullServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pullServicesWithOptions(request, runtime);
}

PutClusterHealthCheckTaskResponse Alibabacloud_Mse20190531::Client::putClusterHealthCheckTaskWithOptions(shared_ptr<PutClusterHealthCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutClusterHealthCheckTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutClusterHealthCheckTaskResponse(callApi(params, req, runtime));
}

PutClusterHealthCheckTaskResponse Alibabacloud_Mse20190531::Client::putClusterHealthCheckTask(shared_ptr<PutClusterHealthCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putClusterHealthCheckTaskWithOptions(request, runtime);
}

QueryAllSwimmingLaneResponse Alibabacloud_Mse20190531::Client::queryAllSwimmingLaneWithOptions(shared_ptr<QueryAllSwimmingLaneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllSwimmingLane"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllSwimmingLaneResponse(callApi(params, req, runtime));
}

QueryAllSwimmingLaneResponse Alibabacloud_Mse20190531::Client::queryAllSwimmingLane(shared_ptr<QueryAllSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllSwimmingLaneWithOptions(request, runtime);
}

QueryAllSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::queryAllSwimmingLaneGroupWithOptions(shared_ptr<QueryAllSwimmingLaneGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllSwimmingLaneGroup"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllSwimmingLaneGroupResponse(callApi(params, req, runtime));
}

QueryAllSwimmingLaneGroupResponse Alibabacloud_Mse20190531::Client::queryAllSwimmingLaneGroup(shared_ptr<QueryAllSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllSwimmingLaneGroupWithOptions(request, runtime);
}

QueryBusinessLocationsResponse Alibabacloud_Mse20190531::Client::queryBusinessLocationsWithOptions(shared_ptr<QueryBusinessLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBusinessLocations"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBusinessLocationsResponse(callApi(params, req, runtime));
}

QueryBusinessLocationsResponse Alibabacloud_Mse20190531::Client::queryBusinessLocations(shared_ptr<QueryBusinessLocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBusinessLocationsWithOptions(request, runtime);
}

QueryClusterDetailResponse Alibabacloud_Mse20190531::Client::queryClusterDetailWithOptions(shared_ptr<QueryClusterDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->aclSwitch)) {
    query->insert(pair<string, bool>("AclSwitch", *request->aclSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryClusterDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryClusterDetailResponse(callApi(params, req, runtime));
}

QueryClusterDetailResponse Alibabacloud_Mse20190531::Client::queryClusterDetail(shared_ptr<QueryClusterDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryClusterDetailWithOptions(request, runtime);
}

QueryClusterDiskSpecificationResponse Alibabacloud_Mse20190531::Client::queryClusterDiskSpecificationWithOptions(shared_ptr<QueryClusterDiskSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryClusterDiskSpecification"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryClusterDiskSpecificationResponse(callApi(params, req, runtime));
}

QueryClusterDiskSpecificationResponse Alibabacloud_Mse20190531::Client::queryClusterDiskSpecification(shared_ptr<QueryClusterDiskSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryClusterDiskSpecificationWithOptions(request, runtime);
}

QueryClusterInfoResponse Alibabacloud_Mse20190531::Client::queryClusterInfoWithOptions(shared_ptr<QueryClusterInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->aclSwitch)) {
    query->insert(pair<string, bool>("AclSwitch", *request->aclSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryClusterInfo"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryClusterInfoResponse(callApi(params, req, runtime));
}

QueryClusterInfoResponse Alibabacloud_Mse20190531::Client::queryClusterInfo(shared_ptr<QueryClusterInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryClusterInfoWithOptions(request, runtime);
}

QueryClusterSpecificationResponse Alibabacloud_Mse20190531::Client::queryClusterSpecificationWithOptions(shared_ptr<QueryClusterSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectType)) {
    query->insert(pair<string, string>("ConnectType", *request->connectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryClusterSpecification"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryClusterSpecificationResponse(callApi(params, req, runtime));
}

QueryClusterSpecificationResponse Alibabacloud_Mse20190531::Client::queryClusterSpecification(shared_ptr<QueryClusterSpecificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryClusterSpecificationWithOptions(request, runtime);
}

QueryConfigResponse Alibabacloud_Mse20190531::Client::queryConfigWithOptions(shared_ptr<QueryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configType)) {
    query->insert(pair<string, string>("ConfigType", *request->configType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRunningConf)) {
    query->insert(pair<string, bool>("NeedRunningConf", *request->needRunningConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConfigResponse(callApi(params, req, runtime));
}

QueryConfigResponse Alibabacloud_Mse20190531::Client::queryConfig(shared_ptr<QueryConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConfigWithOptions(request, runtime);
}

QueryGatewayRegionResponse Alibabacloud_Mse20190531::Client::queryGatewayRegionWithOptions(shared_ptr<QueryGatewayRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGatewayRegion"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGatewayRegionResponse(callApi(params, req, runtime));
}

QueryGatewayRegionResponse Alibabacloud_Mse20190531::Client::queryGatewayRegion(shared_ptr<QueryGatewayRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGatewayRegionWithOptions(request, runtime);
}

QueryGatewayTypeResponse Alibabacloud_Mse20190531::Client::queryGatewayTypeWithOptions(shared_ptr<QueryGatewayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGatewayType"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGatewayTypeResponse(callApi(params, req, runtime));
}

QueryGatewayTypeResponse Alibabacloud_Mse20190531::Client::queryGatewayType(shared_ptr<QueryGatewayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGatewayTypeWithOptions(request, runtime);
}

QueryGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::queryGovernanceKubernetesClusterWithOptions(shared_ptr<QueryGovernanceKubernetesClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGovernanceKubernetesCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGovernanceKubernetesClusterResponse(callApi(params, req, runtime));
}

QueryGovernanceKubernetesClusterResponse Alibabacloud_Mse20190531::Client::queryGovernanceKubernetesCluster(shared_ptr<QueryGovernanceKubernetesClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGovernanceKubernetesClusterWithOptions(request, runtime);
}

QueryInstancesInfoResponse Alibabacloud_Mse20190531::Client::queryInstancesInfoWithOptions(shared_ptr<QueryInstancesInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInstancesInfo"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInstancesInfoResponse(callApi(params, req, runtime));
}

QueryInstancesInfoResponse Alibabacloud_Mse20190531::Client::queryInstancesInfo(shared_ptr<QueryInstancesInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstancesInfoWithOptions(request, runtime);
}

QueryMonitorResponse Alibabacloud_Mse20190531::Client::queryMonitorWithOptions(shared_ptr<QueryMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorType)) {
    query->insert(pair<string, string>("MonitorType", *request->monitorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->step)) {
    query->insert(pair<string, long>("Step", *request->step));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMonitor"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMonitorResponse(callApi(params, req, runtime));
}

QueryMonitorResponse Alibabacloud_Mse20190531::Client::queryMonitor(shared_ptr<QueryMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonitorWithOptions(request, runtime);
}

QueryNamespaceResponse Alibabacloud_Mse20190531::Client::queryNamespaceWithOptions(shared_ptr<QueryNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryNamespaceResponse(callApi(params, req, runtime));
}

QueryNamespaceResponse Alibabacloud_Mse20190531::Client::queryNamespace(shared_ptr<QueryNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryNamespaceWithOptions(request, runtime);
}

QuerySlbSpecResponse Alibabacloud_Mse20190531::Client::querySlbSpecWithOptions(shared_ptr<QuerySlbSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySlbSpec"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySlbSpecResponse(callApi(params, req, runtime));
}

QuerySlbSpecResponse Alibabacloud_Mse20190531::Client::querySlbSpec(shared_ptr<QuerySlbSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySlbSpecWithOptions(request, runtime);
}

QuerySwimmingLaneByIdResponse Alibabacloud_Mse20190531::Client::querySwimmingLaneByIdWithOptions(shared_ptr<QuerySwimmingLaneByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->laneId)) {
    query->insert(pair<string, long>("LaneId", *request->laneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySwimmingLaneById"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySwimmingLaneByIdResponse(callApi(params, req, runtime));
}

QuerySwimmingLaneByIdResponse Alibabacloud_Mse20190531::Client::querySwimmingLaneById(shared_ptr<QuerySwimmingLaneByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySwimmingLaneByIdWithOptions(request, runtime);
}

QueryZnodeDetailResponse Alibabacloud_Mse20190531::Client::queryZnodeDetailWithOptions(shared_ptr<QueryZnodeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryZnodeDetail"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryZnodeDetailResponse(callApi(params, req, runtime));
}

QueryZnodeDetailResponse Alibabacloud_Mse20190531::Client::queryZnodeDetail(shared_ptr<QueryZnodeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryZnodeDetailWithOptions(request, runtime);
}

RemoveApplicationResponse Alibabacloud_Mse20190531::Client::removeApplicationWithOptions(shared_ptr<RemoveApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApplication"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveApplicationResponse(callApi(params, req, runtime));
}

RemoveApplicationResponse Alibabacloud_Mse20190531::Client::removeApplication(shared_ptr<RemoveApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeApplicationWithOptions(request, runtime);
}

RemoveAuthPolicyResponse Alibabacloud_Mse20190531::Client::removeAuthPolicyWithOptions(shared_ptr<RemoveAuthPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAuthPolicy"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAuthPolicyResponse(callApi(params, req, runtime));
}

RemoveAuthPolicyResponse Alibabacloud_Mse20190531::Client::removeAuthPolicy(shared_ptr<RemoveAuthPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAuthPolicyWithOptions(request, runtime);
}

RestartClusterResponse Alibabacloud_Mse20190531::Client::restartClusterWithOptions(shared_ptr<RestartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podNameList)) {
    query->insert(pair<string, string>("PodNameList", *request->podNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartClusterResponse(callApi(params, req, runtime));
}

RestartClusterResponse Alibabacloud_Mse20190531::Client::restartCluster(shared_ptr<RestartClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartClusterWithOptions(request, runtime);
}

RetryClusterResponse Alibabacloud_Mse20190531::Client::retryClusterWithOptions(shared_ptr<RetryClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryClusterResponse(callApi(params, req, runtime));
}

RetryClusterResponse Alibabacloud_Mse20190531::Client::retryCluster(shared_ptr<RetryClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryClusterWithOptions(request, runtime);
}

SelectGatewaySlbResponse Alibabacloud_Mse20190531::Client::selectGatewaySlbWithOptions(shared_ptr<SelectGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SelectGatewaySlb"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectGatewaySlbResponse(callApi(params, req, runtime));
}

SelectGatewaySlbResponse Alibabacloud_Mse20190531::Client::selectGatewaySlb(shared_ptr<SelectGatewaySlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return selectGatewaySlbWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Mse20190531::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Mse20190531::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Mse20190531::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Mse20190531::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAclResponse Alibabacloud_Mse20190531::Client::updateAclWithOptions(shared_ptr<UpdateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclEntryList)) {
    query->insert(pair<string, string>("AclEntryList", *request->aclEntryList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcl"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAclResponse(callApi(params, req, runtime));
}

UpdateAclResponse Alibabacloud_Mse20190531::Client::updateAcl(shared_ptr<UpdateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclWithOptions(request, runtime);
}

UpdateAuthPolicyResponse Alibabacloud_Mse20190531::Client::updateAuthPolicyWithOptions(shared_ptr<UpdateAuthPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authRule)) {
    query->insert(pair<string, string>("AuthRule", *request->authRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sNamespace)) {
    query->insert(pair<string, string>("K8sNamespace", *request->k8sNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthPolicy"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthPolicyResponse(callApi(params, req, runtime));
}

UpdateAuthPolicyResponse Alibabacloud_Mse20190531::Client::updateAuthPolicy(shared_ptr<UpdateAuthPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthPolicyWithOptions(request, runtime);
}

UpdateBlackWhiteListResponse Alibabacloud_Mse20190531::Client::updateBlackWhiteListWithOptions(shared_ptr<UpdateBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isWhite)) {
    query->insert(pair<string, bool>("IsWhite", *request->isWhite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdJsonList)) {
    query->insert(pair<string, string>("ResourceIdJsonList", *request->resourceIdJsonList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBlackWhiteList"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBlackWhiteListResponse(callApi(params, req, runtime));
}

UpdateBlackWhiteListResponse Alibabacloud_Mse20190531::Client::updateBlackWhiteList(shared_ptr<UpdateBlackWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBlackWhiteListWithOptions(request, runtime);
}

UpdateCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::updateCircuitBreakerRuleWithOptions(shared_ptr<UpdateCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->halfOpenBaseAmountPerStep)) {
    query->insert(pair<string, long>("HalfOpenBaseAmountPerStep", *request->halfOpenBaseAmountPerStep));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->halfOpenRecoveryStepNum)) {
    query->insert(pair<string, long>("HalfOpenRecoveryStepNum", *request->halfOpenRecoveryStepNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAllowedRtMs)) {
    query->insert(pair<string, long>("MaxAllowedRtMs", *request->maxAllowedRtMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minRequestAmount)) {
    query->insert(pair<string, long>("MinRequestAmount", *request->minRequestAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryTimeoutMs)) {
    query->insert(pair<string, long>("RetryTimeoutMs", *request->retryTimeoutMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statIntervalMs)) {
    query->insert(pair<string, long>("StatIntervalMs", *request->statIntervalMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategy)) {
    query->insert(pair<string, long>("Strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

UpdateCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::updateCircuitBreakerRule(shared_ptr<UpdateCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCircuitBreakerRuleWithOptions(request, runtime);
}

UpdateClusterResponse Alibabacloud_Mse20190531::Client::updateClusterWithOptions(shared_ptr<UpdateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterAliasName)) {
    query->insert(pair<string, string>("ClusterAliasName", *request->clusterAliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maintenanceEndTime)) {
    query->insert(pair<string, string>("MaintenanceEndTime", *request->maintenanceEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maintenanceStartTime)) {
    query->insert(pair<string, string>("MaintenanceStartTime", *request->maintenanceStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClusterResponse(callApi(params, req, runtime));
}

UpdateClusterResponse Alibabacloud_Mse20190531::Client::updateCluster(shared_ptr<UpdateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClusterWithOptions(request, runtime);
}

UpdateClusterSpecResponse Alibabacloud_Mse20190531::Client::updateClusterSpecWithOptions(shared_ptr<UpdateClusterSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpecification)) {
    query->insert(pair<string, string>("ClusterSpecification", *request->clusterSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceCount)) {
    query->insert(pair<string, long>("InstanceCount", *request->instanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mseVersion)) {
    query->insert(pair<string, string>("MseVersion", *request->mseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pubNetworkFlow)) {
    query->insert(pair<string, long>("PubNetworkFlow", *request->pubNetworkFlow));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClusterSpec"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClusterSpecResponse(callApi(params, req, runtime));
}

UpdateClusterSpecResponse Alibabacloud_Mse20190531::Client::updateClusterSpec(shared_ptr<UpdateClusterSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClusterSpecWithOptions(request, runtime);
}

UpdateConfigResponse Alibabacloud_Mse20190531::Client::updateConfigWithOptions(shared_ptr<UpdateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->authEnabled)) {
    query->insert(pair<string, bool>("AuthEnabled", *request->authEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autopurgePurgeInterval)) {
    query->insert(pair<string, string>("AutopurgePurgeInterval", *request->autopurgePurgeInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autopurgeSnapRetainCount)) {
    query->insert(pair<string, string>("AutopurgeSnapRetainCount", *request->autopurgeSnapRetainCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configAuthEnabled)) {
    query->insert(pair<string, bool>("ConfigAuthEnabled", *request->configAuthEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configSecretEnabled)) {
    query->insert(pair<string, bool>("ConfigSecretEnabled", *request->configSecretEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configType)) {
    query->insert(pair<string, string>("ConfigType", *request->configType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->consoleUIEnabled)) {
    query->insert(pair<string, bool>("ConsoleUIEnabled", *request->consoleUIEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable4lw)) {
    query->insert(pair<string, bool>("Enable4lw", *request->enable4lw));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->eurekaSupported)) {
    query->insert(pair<string, bool>("EurekaSupported", *request->eurekaSupported));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedTypesEnable)) {
    query->insert(pair<string, string>("ExtendedTypesEnable", *request->extendedTypesEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initLimit)) {
    query->insert(pair<string, string>("InitLimit", *request->initLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->juteMaxbuffer)) {
    query->insert(pair<string, string>("JuteMaxbuffer", *request->juteMaxbuffer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->MCPEnabled)) {
    query->insert(pair<string, bool>("MCPEnabled", *request->MCPEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxClientCnxns)) {
    query->insert(pair<string, string>("MaxClientCnxns", *request->maxClientCnxns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxSessionTimeout)) {
    query->insert(pair<string, string>("MaxSessionTimeout", *request->maxSessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minSessionTimeout)) {
    query->insert(pair<string, string>("MinSessionTimeout", *request->minSessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->namingAuthEnabled)) {
    query->insert(pair<string, bool>("NamingAuthEnabled", *request->namingAuthEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passWord)) {
    query->insert(pair<string, string>("PassWord", *request->passWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotCount)) {
    query->insert(pair<string, string>("SnapshotCount", *request->snapshotCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncLimit)) {
    query->insert(pair<string, string>("SyncLimit", *request->syncLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->TLSEnabled)) {
    query->insert(pair<string, bool>("TLSEnabled", *request->TLSEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tickTime)) {
    query->insert(pair<string, string>("TickTime", *request->tickTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openSuperAcl)) {
    body->insert(pair<string, string>("OpenSuperAcl", *request->openSuperAcl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigResponse(callApi(params, req, runtime));
}

UpdateConfigResponse Alibabacloud_Mse20190531::Client::updateConfig(shared_ptr<UpdateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigWithOptions(request, runtime);
}

UpdateEngineNamespaceResponse Alibabacloud_Mse20190531::Client::updateEngineNamespaceWithOptions(shared_ptr<UpdateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceCount)) {
    query->insert(pair<string, long>("ServiceCount", *request->serviceCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEngineNamespace"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEngineNamespaceResponse(callApi(params, req, runtime));
}

UpdateEngineNamespaceResponse Alibabacloud_Mse20190531::Client::updateEngineNamespace(shared_ptr<UpdateEngineNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEngineNamespaceWithOptions(request, runtime);
}

UpdateFlowRuleResponse Alibabacloud_Mse20190531::Client::updateFlowRuleWithOptions(shared_ptr<UpdateFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->controlBehavior)) {
    query->insert(pair<string, long>("ControlBehavior", *request->controlBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limitApp)) {
    query->insert(pair<string, string>("LimitApp", *request->limitApp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxQueueingTimeMs)) {
    query->insert(pair<string, long>("MaxQueueingTimeMs", *request->maxQueueingTimeMs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFlowRuleResponse(callApi(params, req, runtime));
}

UpdateFlowRuleResponse Alibabacloud_Mse20190531::Client::updateFlowRule(shared_ptr<UpdateFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFlowRuleWithOptions(request, runtime);
}

UpdateGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerWithOptions(shared_ptr<UpdateGatewayAuthConsumerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    query->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwks)) {
    query->insert(pair<string, string>("Jwks", *request->jwks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyName)) {
    query->insert(pair<string, string>("KeyName", *request->keyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyValue)) {
    query->insert(pair<string, string>("KeyValue", *request->keyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenName)) {
    query->insert(pair<string, string>("TokenName", *request->tokenName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tokenPass)) {
    query->insert(pair<string, bool>("TokenPass", *request->tokenPass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenPosition)) {
    query->insert(pair<string, string>("TokenPosition", *request->tokenPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenPrefix)) {
    query->insert(pair<string, string>("TokenPrefix", *request->tokenPrefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayAuthConsumer"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayAuthConsumerResponse(callApi(params, req, runtime));
}

UpdateGatewayAuthConsumerResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumer(shared_ptr<UpdateGatewayAuthConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayAuthConsumerWithOptions(request, runtime);
}

UpdateGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerResourceWithOptions(shared_ptr<UpdateGatewayAuthConsumerResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayAuthConsumerResourceShrinkRequest> request = make_shared<UpdateGatewayAuthConsumerResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateGatewayAuthConsumerResourceRequestResourceList>>(tmpReq->resourceList)) {
    request->resourceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceList, make_shared<string>("ResourceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerId)) {
    query->insert(pair<string, long>("ConsumerId", *request->consumerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceListShrink)) {
    query->insert(pair<string, string>("ResourceList", *request->resourceListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayAuthConsumerResource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayAuthConsumerResourceResponse(callApi(params, req, runtime));
}

UpdateGatewayAuthConsumerResourceResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerResource(shared_ptr<UpdateGatewayAuthConsumerResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayAuthConsumerResourceWithOptions(request, runtime);
}

UpdateGatewayAuthConsumerResourceStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerResourceStatusWithOptions(shared_ptr<UpdateGatewayAuthConsumerResourceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerId)) {
    query->insert(pair<string, long>("ConsumerId", *request->consumerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idList)) {
    query->insert(pair<string, string>("IdList", *request->idList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resourceStatus)) {
    query->insert(pair<string, bool>("ResourceStatus", *request->resourceStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayAuthConsumerResourceStatus"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayAuthConsumerResourceStatusResponse(callApi(params, req, runtime));
}

UpdateGatewayAuthConsumerResourceStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerResourceStatus(shared_ptr<UpdateGatewayAuthConsumerResourceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayAuthConsumerResourceStatusWithOptions(request, runtime);
}

UpdateGatewayAuthConsumerStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerStatusWithOptions(shared_ptr<UpdateGatewayAuthConsumerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->consumerStatus)) {
    query->insert(pair<string, bool>("ConsumerStatus", *request->consumerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayAuthConsumerStatus"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayAuthConsumerStatusResponse(callApi(params, req, runtime));
}

UpdateGatewayAuthConsumerStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayAuthConsumerStatus(shared_ptr<UpdateGatewayAuthConsumerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayAuthConsumerStatusWithOptions(request, runtime);
}

UpdateGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayCircuitBreakerRuleWithOptions(shared_ptr<UpdateGatewayCircuitBreakerRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAllowedMs)) {
    query->insert(pair<string, long>("MaxAllowedMs", *request->maxAllowedMs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minRequestAmount)) {
    query->insert(pair<string, long>("MinRequestAmount", *request->minRequestAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoveryTimeoutSec)) {
    query->insert(pair<string, long>("RecoveryTimeoutSec", *request->recoveryTimeoutSec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statDurationSec)) {
    query->insert(pair<string, long>("StatDurationSec", *request->statDurationSec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategy)) {
    query->insert(pair<string, long>("Strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerRatio)) {
    query->insert(pair<string, long>("TriggerRatio", *request->triggerRatio));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayCircuitBreakerRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayCircuitBreakerRuleResponse(callApi(params, req, runtime));
}

UpdateGatewayCircuitBreakerRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayCircuitBreakerRule(shared_ptr<UpdateGatewayCircuitBreakerRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayCircuitBreakerRuleWithOptions(request, runtime);
}

UpdateGatewayConfigResponse Alibabacloud_Mse20190531::Client::updateGatewayConfigWithOptions(shared_ptr<UpdateGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    query->insert(pair<string, string>("ConfigName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configValue)) {
    query->insert(pair<string, string>("ConfigValue", *request->configValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayConfigResponse(callApi(params, req, runtime));
}

UpdateGatewayConfigResponse Alibabacloud_Mse20190531::Client::updateGatewayConfig(shared_ptr<UpdateGatewayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayConfigWithOptions(request, runtime);
}

UpdateGatewayDomainResponse Alibabacloud_Mse20190531::Client::updateGatewayDomainWithOptions(shared_ptr<UpdateGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2)) {
    query->insert(pair<string, string>("Http2", *request->http2));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mustHttps)) {
    query->insert(pair<string, bool>("MustHttps", *request->mustHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMax)) {
    query->insert(pair<string, string>("TlsMax", *request->tlsMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMin)) {
    query->insert(pair<string, string>("TlsMin", *request->tlsMin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayDomain"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayDomainResponse(callApi(params, req, runtime));
}

UpdateGatewayDomainResponse Alibabacloud_Mse20190531::Client::updateGatewayDomain(shared_ptr<UpdateGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayDomainWithOptions(request, runtime);
}

UpdateGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayFlowRuleWithOptions(shared_ptr<UpdateGatewayFlowRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    query->insert(pair<string, long>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayFlowRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayFlowRuleResponse(callApi(params, req, runtime));
}

UpdateGatewayFlowRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayFlowRule(shared_ptr<UpdateGatewayFlowRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayFlowRuleWithOptions(request, runtime);
}

UpdateGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayIsolationRuleWithOptions(shared_ptr<UpdateGatewayIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->behaviorType)) {
    query->insert(pair<string, long>("BehaviorType", *request->behaviorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bodyEncoding)) {
    query->insert(pair<string, long>("BodyEncoding", *request->bodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrency)) {
    query->insert(pair<string, long>("MaxConcurrency", *request->maxConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseContentBody)) {
    query->insert(pair<string, string>("ResponseContentBody", *request->responseContentBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseRedirectUrl)) {
    query->insert(pair<string, string>("ResponseRedirectUrl", *request->responseRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseStatusCode)) {
    query->insert(pair<string, long>("ResponseStatusCode", *request->responseStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayIsolationRuleResponse(callApi(params, req, runtime));
}

UpdateGatewayIsolationRuleResponse Alibabacloud_Mse20190531::Client::updateGatewayIsolationRule(shared_ptr<UpdateGatewayIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayIsolationRuleWithOptions(request, runtime);
}

UpdateGatewayNameResponse Alibabacloud_Mse20190531::Client::updateGatewayNameWithOptions(shared_ptr<UpdateGatewayNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayName"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayNameResponse(callApi(params, req, runtime));
}

UpdateGatewayNameResponse Alibabacloud_Mse20190531::Client::updateGatewayName(shared_ptr<UpdateGatewayNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayNameWithOptions(request, runtime);
}

UpdateGatewayOptionResponse Alibabacloud_Mse20190531::Client::updateGatewayOptionWithOptions(shared_ptr<UpdateGatewayOptionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayOptionShrinkRequest> request = make_shared<UpdateGatewayOptionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GatewayOption>(tmpReq->gatewayOption)) {
    request->gatewayOptionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->gatewayOption, make_shared<string>("GatewayOption"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayOptionShrink)) {
    query->insert(pair<string, string>("GatewayOption", *request->gatewayOptionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayOption"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayOptionResponse(callApi(params, req, runtime));
}

UpdateGatewayOptionResponse Alibabacloud_Mse20190531::Client::updateGatewayOption(shared_ptr<UpdateGatewayOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayOptionWithOptions(request, runtime);
}

UpdateGatewayRouteResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteWithOptions(shared_ptr<UpdateGatewayRouteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayRouteShrinkRequest> request = make_shared<UpdateGatewayRouteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteRequestDirectResponseJSON>(tmpReq->directResponseJSON)) {
    request->directResponseJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->directResponseJSON, make_shared<string>("DirectResponseJSON"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateGatewayRouteRequestFallbackServices>>(tmpReq->fallbackServices)) {
    request->fallbackServicesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fallbackServices, make_shared<string>("FallbackServices"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteRequestPredicates>(tmpReq->predicates)) {
    request->predicatesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->predicates, make_shared<string>("Predicates"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteRequestRedirectJSON>(tmpReq->redirectJSON)) {
    request->redirectJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->redirectJSON, make_shared<string>("RedirectJSON"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateGatewayRouteRequestServices>>(tmpReq->services)) {
    request->servicesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->services, make_shared<string>("Services"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directResponseJSONShrink)) {
    query->insert(pair<string, string>("DirectResponseJSON", *request->directResponseJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainIdListJSON)) {
    query->insert(pair<string, string>("DomainIdListJSON", *request->domainIdListJSON));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableWaf)) {
    query->insert(pair<string, bool>("EnableWaf", *request->enableWaf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fallback)) {
    query->insert(pair<string, bool>("Fallback", *request->fallback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallbackServicesShrink)) {
    query->insert(pair<string, string>("FallbackServices", *request->fallbackServicesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predicatesShrink)) {
    query->insert(pair<string, string>("Predicates", *request->predicatesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectJSONShrink)) {
    query->insert(pair<string, string>("RedirectJSON", *request->redirectJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeOrder)) {
    query->insert(pair<string, long>("RouteOrder", *request->routeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesShrink)) {
    query->insert(pair<string, string>("Services", *request->servicesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteResponse Alibabacloud_Mse20190531::Client::updateGatewayRoute(shared_ptr<UpdateGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteWithOptions(request, runtime);
}

UpdateGatewayRouteAuthResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteAuthWithOptions(shared_ptr<UpdateGatewayRouteAuthRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayRouteAuthShrinkRequest> request = make_shared<UpdateGatewayRouteAuthShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteAuthRequestAuthJSON>(tmpReq->authJSON)) {
    request->authJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authJSON, make_shared<string>("AuthJSON"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authJSONShrink)) {
    query->insert(pair<string, string>("AuthJSON", *request->authJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteAuth"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteAuthResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteAuthResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteAuth(shared_ptr<UpdateGatewayRouteAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteAuthWithOptions(request, runtime);
}

UpdateGatewayRouteCORSResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteCORSWithOptions(shared_ptr<UpdateGatewayRouteCORSRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayRouteCORSShrinkRequest> request = make_shared<UpdateGatewayRouteCORSShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteCORSRequestCorsJSON>(tmpReq->corsJSON)) {
    request->corsJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->corsJSON, make_shared<string>("CorsJSON"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corsJSONShrink)) {
    query->insert(pair<string, string>("CorsJSON", *request->corsJSONShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteCORS"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteCORSResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteCORSResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteCORS(shared_ptr<UpdateGatewayRouteCORSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteCORSWithOptions(request, runtime);
}

UpdateGatewayRouteHTTPRewriteResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteHTTPRewriteWithOptions(shared_ptr<UpdateGatewayRouteHTTPRewriteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpRewriteJSON)) {
    query->insert(pair<string, string>("HttpRewriteJSON", *request->httpRewriteJSON));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteHTTPRewrite"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteHTTPRewriteResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteHTTPRewriteResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteHTTPRewrite(shared_ptr<UpdateGatewayRouteHTTPRewriteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteHTTPRewriteWithOptions(request, runtime);
}

UpdateGatewayRouteHeaderOpResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteHeaderOpWithOptions(shared_ptr<UpdateGatewayRouteHeaderOpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->headerOpJSON)) {
    query->insert(pair<string, string>("HeaderOpJSON", *request->headerOpJSON));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteHeaderOp"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteHeaderOpResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteHeaderOpResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteHeaderOp(shared_ptr<UpdateGatewayRouteHeaderOpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteHeaderOpWithOptions(request, runtime);
}

UpdateGatewayRouteRetryResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteRetryWithOptions(shared_ptr<UpdateGatewayRouteRetryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayRouteRetryShrinkRequest> request = make_shared<UpdateGatewayRouteRetryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteRetryRequestRetryJSON>(tmpReq->retryJSON)) {
    request->retryJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retryJSON, make_shared<string>("RetryJSON"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retryJSONShrink)) {
    query->insert(pair<string, string>("RetryJSON", *request->retryJSONShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteRetry"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteRetryResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteRetryResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteRetry(shared_ptr<UpdateGatewayRouteRetryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteRetryWithOptions(request, runtime);
}

UpdateGatewayRouteTimeoutResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteTimeoutWithOptions(shared_ptr<UpdateGatewayRouteTimeoutRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayRouteTimeoutShrinkRequest> request = make_shared<UpdateGatewayRouteTimeoutShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGatewayRouteTimeoutRequestTimeoutJSON>(tmpReq->timeoutJSON)) {
    request->timeoutJSONShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timeoutJSON, make_shared<string>("TimeoutJSON"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeoutJSONShrink)) {
    query->insert(pair<string, string>("TimeoutJSON", *request->timeoutJSONShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteTimeout"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteTimeoutResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteTimeoutResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteTimeout(shared_ptr<UpdateGatewayRouteTimeoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteTimeoutWithOptions(request, runtime);
}

UpdateGatewayRouteWafStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteWafStatusWithOptions(shared_ptr<UpdateGatewayRouteWafStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableWaf)) {
    query->insert(pair<string, bool>("EnableWaf", *request->enableWaf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRouteWafStatus"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteWafStatusResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteWafStatusResponse Alibabacloud_Mse20190531::Client::updateGatewayRouteWafStatus(shared_ptr<UpdateGatewayRouteWafStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayRouteWafStatusWithOptions(request, runtime);
}

UpdateGatewayServiceResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceWithOptions(shared_ptr<UpdateGatewayServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayServiceShrinkRequest> request = make_shared<UpdateGatewayServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dnsServerList)) {
    request->dnsServerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dnsServerList, make_shared<string>("DnsServerList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ipList)) {
    request->ipListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ipList, make_shared<string>("IpList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsServerListShrink)) {
    query->insert(pair<string, string>("DnsServerList", *request->dnsServerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipListShrink)) {
    query->insert(pair<string, string>("IpList", *request->ipListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePort)) {
    query->insert(pair<string, string>("ServicePort", *request->servicePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceProtocol)) {
    query->insert(pair<string, string>("ServiceProtocol", *request->serviceProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsSetting)) {
    query->insert(pair<string, string>("TlsSetting", *request->tlsSetting));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceResponse Alibabacloud_Mse20190531::Client::updateGatewayService(shared_ptr<UpdateGatewayServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayServiceWithOptions(request, runtime);
}

UpdateGatewayServiceCheckResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceCheckWithOptions(shared_ptr<UpdateGatewayServiceCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayServiceCheckShrinkRequest> request = make_shared<UpdateGatewayServiceCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->expectedStatuses)) {
    request->expectedStatusesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->expectedStatuses, make_shared<string>("ExpectedStatuses"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->check)) {
    query->insert(pair<string, bool>("Check", *request->check));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectedStatusesShrink)) {
    query->insert(pair<string, string>("ExpectedStatuses", *request->expectedStatusesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpHost)) {
    query->insert(pair<string, string>("HttpHost", *request->httpHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpPath)) {
    query->insert(pair<string, string>("HttpPath", *request->httpPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayServiceCheck"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceCheckResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceCheckResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceCheck(shared_ptr<UpdateGatewayServiceCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayServiceCheckWithOptions(request, runtime);
}

UpdateGatewayServiceTrafficPolicyResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceTrafficPolicyWithOptions(shared_ptr<UpdateGatewayServiceTrafficPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGatewayServiceTrafficPolicyShrinkRequest> request = make_shared<UpdateGatewayServiceTrafficPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TrafficPolicy>(tmpReq->gatewayTrafficPolicy)) {
    request->gatewayTrafficPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->gatewayTrafficPolicy, make_shared<string>("GatewayTrafficPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayTrafficPolicyShrink)) {
    query->insert(pair<string, string>("GatewayTrafficPolicy", *request->gatewayTrafficPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    query->insert(pair<string, long>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayServiceTrafficPolicy"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceTrafficPolicyResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceTrafficPolicyResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceTrafficPolicy(shared_ptr<UpdateGatewayServiceTrafficPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayServiceTrafficPolicyWithOptions(request, runtime);
}

UpdateGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceVersionWithOptions(shared_ptr<UpdateGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceId)) {
    query->insert(pair<string, long>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayServiceVersion"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceVersionResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceVersionResponse Alibabacloud_Mse20190531::Client::updateGatewayServiceVersion(shared_ptr<UpdateGatewayServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewayServiceVersionWithOptions(request, runtime);
}

UpdateGatewaySpecResponse Alibabacloud_Mse20190531::Client::updateGatewaySpecWithOptions(shared_ptr<UpdateGatewaySpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replica)) {
    query->insert(pair<string, long>("Replica", *request->replica));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewaySpec"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewaySpecResponse(callApi(params, req, runtime));
}

UpdateGatewaySpecResponse Alibabacloud_Mse20190531::Client::updateGatewaySpec(shared_ptr<UpdateGatewaySpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGatewaySpecWithOptions(request, runtime);
}

UpdateImageResponse Alibabacloud_Mse20190531::Client::updateImageWithOptions(shared_ptr<UpdateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionCode)) {
    query->insert(pair<string, string>("VersionCode", *request->versionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImage"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateImageResponse(callApi(params, req, runtime));
}

UpdateImageResponse Alibabacloud_Mse20190531::Client::updateImage(shared_ptr<UpdateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageWithOptions(request, runtime);
}

UpdateIsolationRuleResponse Alibabacloud_Mse20190531::Client::updateIsolationRuleWithOptions(shared_ptr<UpdateIsolationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limitApp)) {
    query->insert(pair<string, string>("LimitApp", *request->limitApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIsolationRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIsolationRuleResponse(callApi(params, req, runtime));
}

UpdateIsolationRuleResponse Alibabacloud_Mse20190531::Client::updateIsolationRule(shared_ptr<UpdateIsolationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIsolationRuleWithOptions(request, runtime);
}

UpdateLocalityRuleResponse Alibabacloud_Mse20190531::Client::updateLocalityRuleWithOptions(shared_ptr<UpdateLocalityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    query->insert(pair<string, string>("Rules", *request->rules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLocalityRule"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLocalityRuleResponse(callApi(params, req, runtime));
}

UpdateLocalityRuleResponse Alibabacloud_Mse20190531::Client::updateLocalityRule(shared_ptr<UpdateLocalityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLocalityRuleWithOptions(request, runtime);
}

UpdateMessageQueueRouteResponse Alibabacloud_Mse20190531::Client::updateMessageQueueRouteWithOptions(shared_ptr<UpdateMessageQueueRouteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMessageQueueRouteShrinkRequest> request = make_shared<UpdateMessageQueueRouteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterSide)) {
    query->insert(pair<string, string>("FilterSide", *request->filterSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMessageQueueRoute"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMessageQueueRouteResponse(callApi(params, req, runtime));
}

UpdateMessageQueueRouteResponse Alibabacloud_Mse20190531::Client::updateMessageQueueRoute(shared_ptr<UpdateMessageQueueRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMessageQueueRouteWithOptions(request, runtime);
}

UpdateMigrationTaskResponse Alibabacloud_Mse20190531::Client::updateMigrationTaskWithOptions(shared_ptr<UpdateMigrationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceAddress)) {
    query->insert(pair<string, string>("OriginInstanceAddress", *request->originInstanceAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceName)) {
    query->insert(pair<string, string>("OriginInstanceName", *request->originInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originInstanceNamespace)) {
    query->insert(pair<string, string>("OriginInstanceNamespace", *request->originInstanceNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectDesc)) {
    query->insert(pair<string, string>("ProjectDesc", *request->projectDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncType)) {
    query->insert(pair<string, string>("SyncType", *request->syncType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterName)) {
    query->insert(pair<string, string>("TargetClusterName", *request->targetClusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterUrl)) {
    query->insert(pair<string, string>("TargetClusterUrl", *request->targetClusterUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMigrationTask"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMigrationTaskResponse(callApi(params, req, runtime));
}

UpdateMigrationTaskResponse Alibabacloud_Mse20190531::Client::updateMigrationTask(shared_ptr<UpdateMigrationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMigrationTaskWithOptions(request, runtime);
}

UpdateNacosClusterResponse Alibabacloud_Mse20190531::Client::updateNacosClusterWithOptions(shared_ptr<UpdateNacosClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkPort)) {
    query->insert(pair<string, long>("CheckPort", *request->checkPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthChecker)) {
    query->insert(pair<string, string>("HealthChecker", *request->healthChecker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useInstancePortForCheck)) {
    query->insert(pair<string, bool>("UseInstancePortForCheck", *request->useInstancePortForCheck));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacosCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacosClusterResponse(callApi(params, req, runtime));
}

UpdateNacosClusterResponse Alibabacloud_Mse20190531::Client::updateNacosCluster(shared_ptr<UpdateNacosClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacosClusterWithOptions(request, runtime);
}

UpdateNacosConfigResponse Alibabacloud_Mse20190531::Client::updateNacosConfigWithOptions(shared_ptr<UpdateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->betaIps)) {
    query->insert(pair<string, string>("BetaIps", *request->betaIps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedDataKey)) {
    query->insert(pair<string, string>("EncryptedDataKey", *request->encryptedDataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->md5)) {
    query->insert(pair<string, string>("Md5", *request->md5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacosConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacosConfigResponse(callApi(params, req, runtime));
}

UpdateNacosConfigResponse Alibabacloud_Mse20190531::Client::updateNacosConfig(shared_ptr<UpdateNacosConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacosConfigWithOptions(request, runtime);
}

UpdateNacosGrayConfigResponse Alibabacloud_Mse20190531::Client::updateNacosGrayConfigWithOptions(shared_ptr<UpdateNacosGrayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayRule)) {
    query->insert(pair<string, string>("GrayRule", *request->grayRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayRuleName)) {
    query->insert(pair<string, string>("GrayRuleName", *request->grayRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->grayRulePriority)) {
    query->insert(pair<string, long>("GrayRulePriority", *request->grayRulePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayType)) {
    query->insert(pair<string, string>("GrayType", *request->grayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opType)) {
    query->insert(pair<string, string>("OpType", *request->opType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stopGray)) {
    query->insert(pair<string, bool>("StopGray", *request->stopGray));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacosGrayConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacosGrayConfigResponse(callApi(params, req, runtime));
}

UpdateNacosGrayConfigResponse Alibabacloud_Mse20190531::Client::updateNacosGrayConfig(shared_ptr<UpdateNacosGrayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacosGrayConfigWithOptions(request, runtime);
}

UpdateNacosInstanceResponse Alibabacloud_Mse20190531::Client::updateNacosInstanceWithOptions(shared_ptr<UpdateNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ephemeral)) {
    query->insert(pair<string, bool>("Ephemeral", *request->ephemeral));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->weight)) {
    query->insert(pair<string, string>("Weight", *request->weight));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->metadata)) {
    body->insert(pair<string, string>("Metadata", *request->metadata));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacosInstance"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacosInstanceResponse(callApi(params, req, runtime));
}

UpdateNacosInstanceResponse Alibabacloud_Mse20190531::Client::updateNacosInstance(shared_ptr<UpdateNacosInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacosInstanceWithOptions(request, runtime);
}

UpdateNacosServiceResponse Alibabacloud_Mse20190531::Client::updateNacosServiceWithOptions(shared_ptr<UpdateNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protectThreshold)) {
    query->insert(pair<string, string>("ProtectThreshold", *request->protectThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacosService"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacosServiceResponse(callApi(params, req, runtime));
}

UpdateNacosServiceResponse Alibabacloud_Mse20190531::Client::updateNacosService(shared_ptr<UpdateNacosServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacosServiceWithOptions(request, runtime);
}

UpdatePluginConfigResponse Alibabacloud_Mse20190531::Client::updatePluginConfigWithOptions(shared_ptr<UpdatePluginConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePluginConfigShrinkRequest> request = make_shared<UpdatePluginConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->resourceIdList)) {
    request->resourceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIdList, make_shared<string>("ResourceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configLevel)) {
    query->insert(pair<string, long>("ConfigLevel", *request->configLevel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtCreate)) {
    query->insert(pair<string, string>("GmtCreate", *request->gmtCreate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    query->insert(pair<string, string>("GmtModified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pluginId)) {
    query->insert(pair<string, long>("PluginId", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdListShrink)) {
    query->insert(pair<string, string>("ResourceIdList", *request->resourceIdListShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePluginConfig"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePluginConfigResponse(callApi(params, req, runtime));
}

UpdatePluginConfigResponse Alibabacloud_Mse20190531::Client::updatePluginConfig(shared_ptr<UpdatePluginConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePluginConfigWithOptions(request, runtime);
}

UpdateSSLCertResponse Alibabacloud_Mse20190531::Client::updateSSLCertWithOptions(shared_ptr<UpdateSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    query->insert(pair<string, string>("CertIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    query->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSSLCert"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSSLCertResponse(callApi(params, req, runtime));
}

UpdateSSLCertResponse Alibabacloud_Mse20190531::Client::updateSSLCert(shared_ptr<UpdateSSLCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSSLCertWithOptions(request, runtime);
}

UpdateServiceSourceResponse Alibabacloud_Mse20190531::Client::updateServiceSourceWithOptions(shared_ptr<UpdateServiceSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateServiceSourceShrinkRequest> request = make_shared<UpdateServiceSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateServiceSourceRequestIngressOptionsRequest>(tmpReq->ingressOptionsRequest)) {
    request->ingressOptionsRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ingressOptionsRequest, make_shared<string>("IngressOptionsRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->pathList)) {
    request->pathListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pathList, make_shared<string>("PathList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gatewayId)) {
    query->insert(pair<string, long>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayUniqueId)) {
    query->insert(pair<string, string>("GatewayUniqueId", *request->gatewayUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressOptionsRequestShrink)) {
    query->insert(pair<string, string>("IngressOptionsRequest", *request->ingressOptionsRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathListShrink)) {
    query->insert(pair<string, string>("PathList", *request->pathListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceSource"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceSourceResponse(callApi(params, req, runtime));
}

UpdateServiceSourceResponse Alibabacloud_Mse20190531::Client::updateServiceSource(shared_ptr<UpdateServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceSourceWithOptions(request, runtime);
}

UpdateZnodeResponse Alibabacloud_Mse20190531::Client::updateZnodeWithOptions(shared_ptr<UpdateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateZnode"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateZnodeResponse(callApi(params, req, runtime));
}

UpdateZnodeResponse Alibabacloud_Mse20190531::Client::updateZnode(shared_ptr<UpdateZnodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateZnodeWithOptions(request, runtime);
}

UpgradeClusterResponse Alibabacloud_Mse20190531::Client::upgradeClusterWithOptions(shared_ptr<UpgradeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestPars)) {
    query->insert(pair<string, string>("RequestPars", *request->requestPars));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeVersion)) {
    query->insert(pair<string, string>("UpgradeVersion", *request->upgradeVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeCluster"))},
    {"version", boost::any(string("2019-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeClusterResponse(callApi(params, req, runtime));
}

UpgradeClusterResponse Alibabacloud_Mse20190531::Client::upgradeCluster(shared_ptr<UpgradeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeClusterWithOptions(request, runtime);
}

