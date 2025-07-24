// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/apig20240327.hpp>
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

using namespace Alibabacloud_APIG20240327;

Alibabacloud_APIG20240327::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("apig"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_APIG20240327::Client::getEndpoint(shared_ptr<string> productId,
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

AddGatewaySecurityGroupRuleResponse Alibabacloud_APIG20240327::Client::addGatewaySecurityGroupRuleWithOptions(shared_ptr<string> gatewayId,
                                                                                                              shared_ptr<AddGatewaySecurityGroupRuleRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->portRanges)) {
    body->insert(pair<string, vector<string>>("portRanges", *request->portRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("securityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGatewaySecurityGroupRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/security-group-rules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGatewaySecurityGroupRuleResponse(callApi(params, req, runtime));
}

AddGatewaySecurityGroupRuleResponse Alibabacloud_APIG20240327::Client::addGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<AddGatewaySecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addGatewaySecurityGroupRuleWithOptions(gatewayId, request, headers, runtime);
}

BatchDeleteConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::batchDeleteConsumerAuthorizationRuleWithOptions(shared_ptr<BatchDeleteConsumerAuthorizationRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAuthorizationRuleIds)) {
    query->insert(pair<string, string>("consumerAuthorizationRuleIds", *request->consumerAuthorizationRuleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/authorization-rules"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

BatchDeleteConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::batchDeleteConsumerAuthorizationRule(shared_ptr<BatchDeleteConsumerAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchDeleteConsumerAuthorizationRuleWithOptions(request, headers, runtime);
}

ChangeResourceGroupResponse Alibabacloud_APIG20240327::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/move-resource-group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_APIG20240327::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(request, headers, runtime);
}

CreateConsumerResponse Alibabacloud_APIG20240327::Client::createConsumerWithOptions(shared_ptr<CreateConsumerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AkSkIdentityConfig>>(request->akSkIdentityConfigs)) {
    body->insert(pair<string, vector<AkSkIdentityConfig>>("akSkIdentityConfigs", *request->akSkIdentityConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<ApiKeyIdentityConfig>(request->apikeyIdentityConfig)) {
    body->insert(pair<string, ApiKeyIdentityConfig>("apikeyIdentityConfig", *request->apikeyIdentityConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    body->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<JwtIdentityConfig>(request->jwtIdentityConfig)) {
    body->insert(pair<string, JwtIdentityConfig>("jwtIdentityConfig", *request->jwtIdentityConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumer"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerResponse(callApi(params, req, runtime));
}

CreateConsumerResponse Alibabacloud_APIG20240327::Client::createConsumer(shared_ptr<CreateConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConsumerWithOptions(request, headers, runtime);
}

CreateConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::createConsumerAuthorizationRuleWithOptions(shared_ptr<string> consumerId,
                                                                                                                      shared_ptr<CreateConsumerAuthorizationRuleRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AuthorizationResourceInfo>>(request->authorizationResourceInfos)) {
    body->insert(pair<string, vector<AuthorizationResourceInfo>>("authorizationResourceInfos", *request->authorizationResourceInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireMode)) {
    body->insert(pair<string, string>("expireMode", *request->expireMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTimestamp)) {
    body->insert(pair<string, long>("expireTimestamp", *request->expireTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentResourceType)) {
    body->insert(pair<string, string>("parentResourceType", *request->parentResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)) + string("/authorization-rules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

CreateConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::createConsumerAuthorizationRule(shared_ptr<string> consumerId, shared_ptr<CreateConsumerAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConsumerAuthorizationRuleWithOptions(consumerId, request, headers, runtime);
}

CreateConsumerAuthorizationRulesResponse Alibabacloud_APIG20240327::Client::createConsumerAuthorizationRulesWithOptions(shared_ptr<CreateConsumerAuthorizationRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules>>(request->authorizationRules)) {
    body->insert(pair<string, vector<CreateConsumerAuthorizationRulesRequestAuthorizationRules>>("authorizationRules", *request->authorizationRules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerAuthorizationRules"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/authorization-rules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerAuthorizationRulesResponse(callApi(params, req, runtime));
}

CreateConsumerAuthorizationRulesResponse Alibabacloud_APIG20240327::Client::createConsumerAuthorizationRules(shared_ptr<CreateConsumerAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConsumerAuthorizationRulesWithOptions(request, headers, runtime);
}

CreateDomainResponse Alibabacloud_APIG20240327::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caCertIdentifier)) {
    body->insert(pair<string, string>("caCertIdentifier", *request->caCertIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    body->insert(pair<string, string>("certIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientCACert)) {
    body->insert(pair<string, string>("clientCACert", *request->clientCACert));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceHttps)) {
    body->insert(pair<string, bool>("forceHttps", *request->forceHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    body->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Option)) {
    body->insert(pair<string, string>("http2Option", *request->http2Option));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mTLSEnabled)) {
    body->insert(pair<string, bool>("mTLSEnabled", *request->mTLSEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<TlsCipherSuitesConfig>(request->tlsCipherSuitesConfig)) {
    body->insert(pair<string, TlsCipherSuitesConfig>("tlsCipherSuitesConfig", *request->tlsCipherSuitesConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMax)) {
    body->insert(pair<string, string>("tlsMax", *request->tlsMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMin)) {
    body->insert(pair<string, string>("tlsMin", *request->tlsMin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomain"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/domains"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainResponse(callApi(params, req, runtime));
}

CreateDomainResponse Alibabacloud_APIG20240327::Client::createDomain(shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDomainWithOptions(request, headers, runtime);
}

CreateEnvironmentResponse Alibabacloud_APIG20240327::Client::createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvironment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/environments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvironmentResponse(callApi(params, req, runtime));
}

CreateEnvironmentResponse Alibabacloud_APIG20240327::Client::createEnvironment(shared_ptr<CreateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEnvironmentWithOptions(request, headers, runtime);
}

CreateGatewayResponse Alibabacloud_APIG20240327::Client::createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("chargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    body->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateGatewayRequestLogConfig>(request->logConfig)) {
    body->insert(pair<string, CreateGatewayRequestLogConfig>("logConfig", *request->logConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateGatewayRequestNetworkAccessConfig>(request->networkAccessConfig)) {
    body->insert(pair<string, CreateGatewayRequestNetworkAccessConfig>("networkAccessConfig", *request->networkAccessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateGatewayRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateGatewayRequestTag>>("tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<CreateGatewayRequestZoneConfig>(request->zoneConfig)) {
    body->insert(pair<string, CreateGatewayRequestZoneConfig>("zoneConfig", *request->zoneConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGateway"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayResponse(callApi(params, req, runtime));
}

CreateGatewayResponse Alibabacloud_APIG20240327::Client::createGateway(shared_ptr<CreateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayWithOptions(request, headers, runtime);
}

CreateHttpApiResponse Alibabacloud_APIG20240327::Client::createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->agentProtocols)) {
    body->insert(pair<string, vector<string>>("agentProtocols", *request->agentProtocols));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aiProtocols)) {
    body->insert(pair<string, vector<string>>("aiProtocols", *request->aiProtocols));
  }
  if (!Darabonba_Util::Client::isUnset<AuthConfig>(request->authConfig)) {
    body->insert(pair<string, AuthConfig>("authConfig", *request->authConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->basePath)) {
    body->insert(pair<string, string>("basePath", *request->basePath));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HttpApiDeployConfig>>(request->deployConfigs)) {
    body->insert(pair<string, vector<HttpApiDeployConfig>>("deployConfigs", *request->deployConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuth)) {
    body->insert(pair<string, bool>("enableAuth", *request->enableAuth));
  }
  if (!Darabonba_Util::Client::isUnset<CreateHttpApiRequestIngressConfig>(request->ingressConfig)) {
    body->insert(pair<string, CreateHttpApiRequestIngressConfig>("ingressConfig", *request->ingressConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCategory)) {
    body->insert(pair<string, string>("modelCategory", *request->modelCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protocols)) {
    body->insert(pair<string, vector<string>>("protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeBasePathOnForward)) {
    body->insert(pair<string, bool>("removeBasePathOnForward", *request->removeBasePathOnForward));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<HttpApiVersionConfig>(request->versionConfig)) {
    body->insert(pair<string, HttpApiVersionConfig>("versionConfig", *request->versionConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHttpApiResponse(callApi(params, req, runtime));
}

CreateHttpApiResponse Alibabacloud_APIG20240327::Client::createHttpApi(shared_ptr<CreateHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHttpApiWithOptions(request, headers, runtime);
}

CreateHttpApiOperationResponse Alibabacloud_APIG20240327::Client::createHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                                                    shared_ptr<CreateHttpApiOperationRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<HttpApiOperation>>(request->operations)) {
    body->insert(pair<string, vector<HttpApiOperation>>("operations", *request->operations));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpApiOperation"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/operations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHttpApiOperationResponse(callApi(params, req, runtime));
}

CreateHttpApiOperationResponse Alibabacloud_APIG20240327::Client::createHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHttpApiOperationWithOptions(httpApiId, request, headers, runtime);
}

CreateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::createHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                                                            shared_ptr<CreateHttpApiRouteRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateHttpApiRouteRequestBackendConfig>(request->backendConfig)) {
    body->insert(pair<string, CreateHttpApiRouteRequestBackendConfig>("backendConfig", *request->backendConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HttpApiDeployConfig>>(request->deployConfigs)) {
    body->insert(pair<string, vector<HttpApiDeployConfig>>("deployConfigs", *request->deployConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainIds)) {
    body->insert(pair<string, vector<string>>("domainIds", *request->domainIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<HttpRouteMatch>(request->match)) {
    body->insert(pair<string, HttpRouteMatch>("match", *request->match));
  }
  if (!Darabonba_Util::Client::isUnset<CreateHttpApiRouteRequestMcpRouteConfig>(request->mcpRouteConfig)) {
    body->insert(pair<string, CreateHttpApiRouteRequestMcpRouteConfig>("mcpRouteConfig", *request->mcpRouteConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpApiRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/routes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHttpApiRouteResponse(callApi(params, req, runtime));
}

CreateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::createHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHttpApiRouteWithOptions(httpApiId, request, headers, runtime);
}

CreatePluginAttachmentResponse Alibabacloud_APIG20240327::Client::createPluginAttachmentWithOptions(shared_ptr<CreatePluginAttachmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->attachResourceIds)) {
    body->insert(pair<string, vector<string>>("attachResourceIds", *request->attachResourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceType)) {
    body->insert(pair<string, string>("attachResourceType", *request->attachResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginConfig)) {
    body->insert(pair<string, string>("pluginConfig", *request->pluginConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    body->insert(pair<string, string>("pluginId", *request->pluginId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePluginAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugin-attachments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePluginAttachmentResponse(callApi(params, req, runtime));
}

CreatePluginAttachmentResponse Alibabacloud_APIG20240327::Client::createPluginAttachment(shared_ptr<CreatePluginAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPluginAttachmentWithOptions(request, headers, runtime);
}

CreatePolicyResponse Alibabacloud_APIG20240327::Client::createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    body->insert(pair<string, string>("className", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicy"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/policies"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyResponse(callApi(params, req, runtime));
}

CreatePolicyResponse Alibabacloud_APIG20240327::Client::createPolicy(shared_ptr<CreatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPolicyWithOptions(request, headers, runtime);
}

CreatePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::createPolicyAttachmentWithOptions(shared_ptr<CreatePolicyAttachmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceId)) {
    body->insert(pair<string, string>("attachResourceId", *request->attachResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceType)) {
    body->insert(pair<string, string>("attachResourceType", *request->attachResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("policyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicyAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/policy-attachments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyAttachmentResponse(callApi(params, req, runtime));
}

CreatePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::createPolicyAttachment(shared_ptr<CreatePolicyAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPolicyAttachmentWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_APIG20240327::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceRequestServiceConfigs>>(request->serviceConfigs)) {
    body->insert(pair<string, vector<CreateServiceRequestServiceConfigs>>("serviceConfigs", *request->serviceConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_APIG20240327::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

DeleteConsumerResponse Alibabacloud_APIG20240327::Client::deleteConsumerWithOptions(shared_ptr<string> consumerId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumer"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerResponse(callApi(params, req, runtime));
}

DeleteConsumerResponse Alibabacloud_APIG20240327::Client::deleteConsumer(shared_ptr<string> consumerId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConsumerWithOptions(consumerId, headers, runtime);
}

DeleteConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::deleteConsumerAuthorizationRuleWithOptions(shared_ptr<string> consumerAuthorizationRuleId,
                                                                                                                      shared_ptr<string> consumerId,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)) + string("/authorization-rules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerAuthorizationRuleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

DeleteConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::deleteConsumerAuthorizationRule(shared_ptr<string> consumerAuthorizationRuleId, shared_ptr<string> consumerId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

DeleteDomainResponse Alibabacloud_APIG20240327::Client::deleteDomainWithOptions(shared_ptr<string> domainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainResponse(callApi(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_APIG20240327::Client::deleteDomain(shared_ptr<string> domainId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDomainWithOptions(domainId, headers, runtime);
}

DeleteEnvironmentResponse Alibabacloud_APIG20240327::Client::deleteEnvironmentWithOptions(shared_ptr<string> environmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(environmentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentResponse(callApi(params, req, runtime));
}

DeleteEnvironmentResponse Alibabacloud_APIG20240327::Client::deleteEnvironment(shared_ptr<string> environmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEnvironmentWithOptions(environmentId, headers, runtime);
}

DeleteGatewayResponse Alibabacloud_APIG20240327::Client::deleteGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGateway"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayResponse(callApi(params, req, runtime));
}

DeleteGatewayResponse Alibabacloud_APIG20240327::Client::deleteGateway(shared_ptr<string> gatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayWithOptions(gatewayId, headers, runtime);
}

DeleteGatewaySecurityGroupRuleResponse Alibabacloud_APIG20240327::Client::deleteGatewaySecurityGroupRuleWithOptions(shared_ptr<string> gatewayId,
                                                                                                                    shared_ptr<string> securityGroupRuleId,
                                                                                                                    shared_ptr<DeleteGatewaySecurityGroupRuleRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cascadingDelete)) {
    query->insert(pair<string, bool>("cascadingDelete", *request->cascadingDelete));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewaySecurityGroupRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/security-group-rules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(securityGroupRuleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewaySecurityGroupRuleResponse(callApi(params, req, runtime));
}

DeleteGatewaySecurityGroupRuleResponse Alibabacloud_APIG20240327::Client::deleteGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<string> securityGroupRuleId, shared_ptr<DeleteGatewaySecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewaySecurityGroupRuleWithOptions(gatewayId, securityGroupRuleId, request, headers, runtime);
}

DeleteHttpApiResponse Alibabacloud_APIG20240327::Client::deleteHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHttpApiResponse(callApi(params, req, runtime));
}

DeleteHttpApiResponse Alibabacloud_APIG20240327::Client::deleteHttpApi(shared_ptr<string> httpApiId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHttpApiWithOptions(httpApiId, headers, runtime);
}

DeleteHttpApiOperationResponse Alibabacloud_APIG20240327::Client::deleteHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                                                    shared_ptr<string> operationId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpApiOperation"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/operations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(operationId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHttpApiOperationResponse(callApi(params, req, runtime));
}

DeleteHttpApiOperationResponse Alibabacloud_APIG20240327::Client::deleteHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

DeleteHttpApiRouteResponse Alibabacloud_APIG20240327::Client::deleteHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                                                            shared_ptr<string> routeId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpApiRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(routeId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHttpApiRouteResponse(callApi(params, req, runtime));
}

DeleteHttpApiRouteResponse Alibabacloud_APIG20240327::Client::deleteHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

DeletePluginAttachmentResponse Alibabacloud_APIG20240327::Client::deletePluginAttachmentWithOptions(shared_ptr<string> pluginAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePluginAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugin-attachments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pluginAttachmentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePluginAttachmentResponse(callApi(params, req, runtime));
}

DeletePluginAttachmentResponse Alibabacloud_APIG20240327::Client::deletePluginAttachment(shared_ptr<string> pluginAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

DeletePolicyResponse Alibabacloud_APIG20240327::Client::deletePolicyWithOptions(shared_ptr<string> policyId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicy"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyResponse(callApi(params, req, runtime));
}

DeletePolicyResponse Alibabacloud_APIG20240327::Client::deletePolicy(shared_ptr<string> policyId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePolicyWithOptions(policyId, headers, runtime);
}

DeletePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::deletePolicyAttachmentWithOptions(shared_ptr<string> policyAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/policy-attachments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyAttachmentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyAttachmentResponse(callApi(params, req, runtime));
}

DeletePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::deletePolicyAttachment(shared_ptr<string> policyAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

DeleteServiceResponse Alibabacloud_APIG20240327::Client::deleteServiceWithOptions(shared_ptr<string> serviceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_APIG20240327::Client::deleteService(shared_ptr<string> serviceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(serviceId, headers, runtime);
}

DeployHttpApiResponse Alibabacloud_APIG20240327::Client::deployHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                  shared_ptr<DeployHttpApiRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<DeployHttpApiRequestHttpApiConfig>(request->httpApiConfig)) {
    body->insert(pair<string, DeployHttpApiRequestHttpApiConfig>("httpApiConfig", *request->httpApiConfig));
  }
  if (!Darabonba_Util::Client::isUnset<DeployHttpApiRequestRestApiConfig>(request->restApiConfig)) {
    body->insert(pair<string, DeployHttpApiRequestRestApiConfig>("restApiConfig", *request->restApiConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    body->insert(pair<string, string>("routeId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/deploy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployHttpApiResponse(callApi(params, req, runtime));
}

DeployHttpApiResponse Alibabacloud_APIG20240327::Client::deployHttpApi(shared_ptr<string> httpApiId, shared_ptr<DeployHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployHttpApiWithOptions(httpApiId, request, headers, runtime);
}

ExportHttpApiResponse Alibabacloud_APIG20240327::Client::exportHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/export"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportHttpApiResponse(callApi(params, req, runtime));
}

ExportHttpApiResponse Alibabacloud_APIG20240327::Client::exportHttpApi(shared_ptr<string> httpApiId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportHttpApiWithOptions(httpApiId, headers, runtime);
}

GetConsumerResponse Alibabacloud_APIG20240327::Client::getConsumerWithOptions(shared_ptr<string> consumerId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConsumer"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConsumerResponse(callApi(params, req, runtime));
}

GetConsumerResponse Alibabacloud_APIG20240327::Client::getConsumer(shared_ptr<string> consumerId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getConsumerWithOptions(consumerId, headers, runtime);
}

GetConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::getConsumerAuthorizationRuleWithOptions(shared_ptr<string> consumerAuthorizationRuleId,
                                                                                                                shared_ptr<string> consumerId,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)) + string("/authorization-rules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerAuthorizationRuleId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

GetConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::getConsumerAuthorizationRule(shared_ptr<string> consumerAuthorizationRuleId, shared_ptr<string> consumerId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, consumerId, headers, runtime);
}

GetDashboardResponse Alibabacloud_APIG20240327::Client::getDashboardWithOptions(shared_ptr<string> gatewayId,
                                                                                shared_ptr<GetDashboardRequest> tmpReq,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDashboardShrinkRequest> request = make_shared<GetDashboardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDashboardRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("acceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("apiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    query->insert(pair<string, string>("filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginClassId)) {
    query->insert(pair<string, string>("pluginClassId", *request->pluginClassId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("pluginId", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    query->insert(pair<string, string>("routeId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamCluster)) {
    query->insert(pair<string, string>("upstreamCluster", *request->upstreamCluster));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDashboard"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/dashboards"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDashboardResponse(callApi(params, req, runtime));
}

GetDashboardResponse Alibabacloud_APIG20240327::Client::getDashboard(shared_ptr<string> gatewayId, shared_ptr<GetDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDashboardWithOptions(gatewayId, request, headers, runtime);
}

GetDomainResponse Alibabacloud_APIG20240327::Client::getDomainWithOptions(shared_ptr<string> domainId,
                                                                          shared_ptr<GetDomainRequest> request,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withStatistics)) {
    query->insert(pair<string, bool>("withStatistics", *request->withStatistics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDomain"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDomainResponse(callApi(params, req, runtime));
}

GetDomainResponse Alibabacloud_APIG20240327::Client::getDomain(shared_ptr<string> domainId, shared_ptr<GetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDomainWithOptions(domainId, request, headers, runtime);
}

GetEnvironmentResponse Alibabacloud_APIG20240327::Client::getEnvironmentWithOptions(shared_ptr<string> environmentId,
                                                                                    shared_ptr<GetEnvironmentRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withStatistics)) {
    query->insert(pair<string, bool>("withStatistics", *request->withStatistics));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withVpcInfo)) {
    query->insert(pair<string, bool>("withVpcInfo", *request->withVpcInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnvironment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(environmentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnvironmentResponse(callApi(params, req, runtime));
}

GetEnvironmentResponse Alibabacloud_APIG20240327::Client::getEnvironment(shared_ptr<string> environmentId, shared_ptr<GetEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentWithOptions(environmentId, request, headers, runtime);
}

GetGatewayResponse Alibabacloud_APIG20240327::Client::getGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGateway"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayResponse(callApi(params, req, runtime));
}

GetGatewayResponse Alibabacloud_APIG20240327::Client::getGateway(shared_ptr<string> gatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGatewayWithOptions(gatewayId, headers, runtime);
}

GetHttpApiResponse Alibabacloud_APIG20240327::Client::getHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHttpApiResponse(callApi(params, req, runtime));
}

GetHttpApiResponse Alibabacloud_APIG20240327::Client::getHttpApi(shared_ptr<string> httpApiId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHttpApiWithOptions(httpApiId, headers, runtime);
}

GetHttpApiOperationResponse Alibabacloud_APIG20240327::Client::getHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                                              shared_ptr<string> operationId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpApiOperation"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/operations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(operationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHttpApiOperationResponse(callApi(params, req, runtime));
}

GetHttpApiOperationResponse Alibabacloud_APIG20240327::Client::getHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHttpApiOperationWithOptions(httpApiId, operationId, headers, runtime);
}

GetHttpApiRouteResponse Alibabacloud_APIG20240327::Client::getHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                                                      shared_ptr<string> routeId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpApiRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(routeId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHttpApiRouteResponse(callApi(params, req, runtime));
}

GetHttpApiRouteResponse Alibabacloud_APIG20240327::Client::getHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
}

GetPluginAttachmentResponse Alibabacloud_APIG20240327::Client::getPluginAttachmentWithOptions(shared_ptr<string> pluginAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPluginAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugin-attachments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pluginAttachmentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPluginAttachmentResponse(callApi(params, req, runtime));
}

GetPluginAttachmentResponse Alibabacloud_APIG20240327::Client::getPluginAttachment(shared_ptr<string> pluginAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPluginAttachmentWithOptions(pluginAttachmentId, headers, runtime);
}

GetPolicyResponse Alibabacloud_APIG20240327::Client::getPolicyWithOptions(shared_ptr<string> policyId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPolicy"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPolicyResponse(callApi(params, req, runtime));
}

GetPolicyResponse Alibabacloud_APIG20240327::Client::getPolicy(shared_ptr<string> policyId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPolicyWithOptions(policyId, headers, runtime);
}

GetPolicyAttachmentResponse Alibabacloud_APIG20240327::Client::getPolicyAttachmentWithOptions(shared_ptr<string> policyAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPolicyAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/policy-attachments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyAttachmentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPolicyAttachmentResponse(callApi(params, req, runtime));
}

GetPolicyAttachmentResponse Alibabacloud_APIG20240327::Client::getPolicyAttachment(shared_ptr<string> policyAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

GetResourceOverviewResponse Alibabacloud_APIG20240327::Client::getResourceOverviewWithOptions(shared_ptr<GetResourceOverviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceOverview"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/overview/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceOverviewResponse(callApi(params, req, runtime));
}

GetResourceOverviewResponse Alibabacloud_APIG20240327::Client::getResourceOverview(shared_ptr<GetResourceOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceOverviewWithOptions(request, headers, runtime);
}

GetServiceResponse Alibabacloud_APIG20240327::Client::getServiceWithOptions(shared_ptr<string> serviceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceResponse(callApi(params, req, runtime));
}

GetServiceResponse Alibabacloud_APIG20240327::Client::getService(shared_ptr<string> serviceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceWithOptions(serviceId, headers, runtime);
}

GetTraceConfigResponse Alibabacloud_APIG20240327::Client::getTraceConfigWithOptions(shared_ptr<string> gatewayId,
                                                                                    shared_ptr<GetTraceConfigRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("acceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTraceConfig"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/trace"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTraceConfigResponse(callApi(params, req, runtime));
}

GetTraceConfigResponse Alibabacloud_APIG20240327::Client::getTraceConfig(shared_ptr<string> gatewayId, shared_ptr<GetTraceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTraceConfigWithOptions(gatewayId, request, headers, runtime);
}

ImportHttpApiResponse Alibabacloud_APIG20240327::Client::importHttpApiWithOptions(shared_ptr<ImportHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<HttpApiDeployConfig>(request->deployConfigs)) {
    body->insert(pair<string, HttpApiDeployConfig>("deployConfigs", *request->deployConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mcpRouteId)) {
    body->insert(pair<string, string>("mcpRouteId", *request->mcpRouteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specContentBase64)) {
    body->insert(pair<string, string>("specContentBase64", *request->specContentBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specFileUrl)) {
    body->insert(pair<string, string>("specFileUrl", *request->specFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<ImportHttpApiRequestSpecOssConfig>(request->specOssConfig)) {
    body->insert(pair<string, ImportHttpApiRequestSpecOssConfig>("specOssConfig", *request->specOssConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategy)) {
    body->insert(pair<string, string>("strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetHttpApiId)) {
    body->insert(pair<string, string>("targetHttpApiId", *request->targetHttpApiId));
  }
  if (!Darabonba_Util::Client::isUnset<HttpApiVersionConfig>(request->versionConfig)) {
    body->insert(pair<string, HttpApiVersionConfig>("versionConfig", *request->versionConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/import"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportHttpApiResponse(callApi(params, req, runtime));
}

ImportHttpApiResponse Alibabacloud_APIG20240327::Client::importHttpApi(shared_ptr<ImportHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return importHttpApiWithOptions(request, headers, runtime);
}

ListConsumersResponse Alibabacloud_APIG20240327::Client::listConsumersWithOptions(shared_ptr<ListConsumersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameLike)) {
    query->insert(pair<string, string>("nameLike", *request->nameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConsumers"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConsumersResponse(callApi(params, req, runtime));
}

ListConsumersResponse Alibabacloud_APIG20240327::Client::listConsumers(shared_ptr<ListConsumersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConsumersWithOptions(request, headers, runtime);
}

ListDomainsResponse Alibabacloud_APIG20240327::Client::listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameLike)) {
    query->insert(pair<string, string>("nameLike", *request->nameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDomains"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDomainsResponse(callApi(params, req, runtime));
}

ListDomainsResponse Alibabacloud_APIG20240327::Client::listDomains(shared_ptr<ListDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDomainsWithOptions(request, headers, runtime);
}

ListEnvironmentsResponse Alibabacloud_APIG20240327::Client::listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasLike)) {
    query->insert(pair<string, string>("aliasLike", *request->aliasLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayNameLike)) {
    query->insert(pair<string, string>("gatewayNameLike", *request->gatewayNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameLike)) {
    query->insert(pair<string, string>("nameLike", *request->nameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironments"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/environments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentsResponse(callApi(params, req, runtime));
}

ListEnvironmentsResponse Alibabacloud_APIG20240327::Client::listEnvironments(shared_ptr<ListEnvironmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnvironmentsWithOptions(request, headers, runtime);
}

ListGatewaysResponse Alibabacloud_APIG20240327::Client::listGatewaysWithOptions(shared_ptr<ListGatewaysRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGatewaysShrinkRequest> request = make_shared<ListGatewaysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListGatewaysRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGateways"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewaysResponse(callApi(params, req, runtime));
}

ListGatewaysResponse Alibabacloud_APIG20240327::Client::listGateways(shared_ptr<ListGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewaysWithOptions(request, headers, runtime);
}

ListHttpApiOperationsResponse Alibabacloud_APIG20240327::Client::listHttpApiOperationsWithOptions(shared_ptr<string> httpApiId,
                                                                                                  shared_ptr<ListHttpApiOperationsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAuthorizationRuleId)) {
    query->insert(pair<string, string>("consumerAuthorizationRuleId", *request->consumerAuthorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forDeploy)) {
    query->insert(pair<string, bool>("forDeploy", *request->forDeploy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameLike)) {
    query->insert(pair<string, string>("nameLike", *request->nameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathLike)) {
    query->insert(pair<string, string>("pathLike", *request->pathLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withConsumerInEnvironmentId)) {
    query->insert(pair<string, string>("withConsumerInEnvironmentId", *request->withConsumerInEnvironmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withConsumerInfoById)) {
    query->insert(pair<string, string>("withConsumerInfoById", *request->withConsumerInfoById));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withPluginAttachmentByPluginId)) {
    query->insert(pair<string, string>("withPluginAttachmentByPluginId", *request->withPluginAttachmentByPluginId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpApiOperations"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/operations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHttpApiOperationsResponse(callApi(params, req, runtime));
}

ListHttpApiOperationsResponse Alibabacloud_APIG20240327::Client::listHttpApiOperations(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHttpApiOperationsWithOptions(httpApiId, request, headers, runtime);
}

ListHttpApiRoutesResponse Alibabacloud_APIG20240327::Client::listHttpApiRoutesWithOptions(shared_ptr<string> httpApiId,
                                                                                          shared_ptr<ListHttpApiRoutesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAuthorizationRuleId)) {
    query->insert(pair<string, string>("consumerAuthorizationRuleId", *request->consumerAuthorizationRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployStatuses)) {
    query->insert(pair<string, string>("deployStatuses", *request->deployStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainId)) {
    query->insert(pair<string, string>("domainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forDeploy)) {
    query->insert(pair<string, bool>("forDeploy", *request->forDeploy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameLike)) {
    query->insert(pair<string, string>("nameLike", *request->nameLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathLike)) {
    query->insert(pair<string, string>("pathLike", *request->pathLike));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAuthPolicyInfo)) {
    query->insert(pair<string, bool>("withAuthPolicyInfo", *request->withAuthPolicyInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withConsumerInfoById)) {
    query->insert(pair<string, string>("withConsumerInfoById", *request->withConsumerInfoById));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withPluginAttachmentByPluginId)) {
    query->insert(pair<string, string>("withPluginAttachmentByPluginId", *request->withPluginAttachmentByPluginId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpApiRoutes"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/routes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHttpApiRoutesResponse(callApi(params, req, runtime));
}

ListHttpApiRoutesResponse Alibabacloud_APIG20240327::Client::listHttpApiRoutes(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHttpApiRoutesWithOptions(httpApiId, request, headers, runtime);
}

ListHttpApisResponse Alibabacloud_APIG20240327::Client::listHttpApisWithOptions(shared_ptr<ListHttpApisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAPIsPublishedToEnvironment)) {
    query->insert(pair<string, bool>("withAPIsPublishedToEnvironment", *request->withAPIsPublishedToEnvironment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withAuthPolicyInEnvironmentId)) {
    query->insert(pair<string, string>("withAuthPolicyInEnvironmentId", *request->withAuthPolicyInEnvironmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAuthPolicyList)) {
    query->insert(pair<string, bool>("withAuthPolicyList", *request->withAuthPolicyList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withConsumerInfoById)) {
    query->insert(pair<string, string>("withConsumerInfoById", *request->withConsumerInfoById));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withEnvironmentInfo)) {
    query->insert(pair<string, bool>("withEnvironmentInfo", *request->withEnvironmentInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withEnvironmentInfoById)) {
    query->insert(pair<string, string>("withEnvironmentInfoById", *request->withEnvironmentInfoById));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withIngressInfo)) {
    query->insert(pair<string, bool>("withIngressInfo", *request->withIngressInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withPluginAttachmentByPluginId)) {
    query->insert(pair<string, string>("withPluginAttachmentByPluginId", *request->withPluginAttachmentByPluginId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withPolicyConfigs)) {
    query->insert(pair<string, bool>("withPolicyConfigs", *request->withPolicyConfigs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpApis"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHttpApisResponse(callApi(params, req, runtime));
}

ListHttpApisResponse Alibabacloud_APIG20240327::Client::listHttpApis(shared_ptr<ListHttpApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHttpApisWithOptions(request, headers, runtime);
}

ListPluginAttachmentsResponse Alibabacloud_APIG20240327::Client::listPluginAttachmentsWithOptions(shared_ptr<ListPluginAttachmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceId)) {
    query->insert(pair<string, string>("attachResourceId", *request->attachResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceType)) {
    query->insert(pair<string, string>("attachResourceType", *request->attachResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceTypes)) {
    query->insert(pair<string, string>("attachResourceTypes", *request->attachResourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("pluginId", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withParentResource)) {
    query->insert(pair<string, bool>("withParentResource", *request->withParentResource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPluginAttachments"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugin-attachments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPluginAttachmentsResponse(callApi(params, req, runtime));
}

ListPluginAttachmentsResponse Alibabacloud_APIG20240327::Client::listPluginAttachments(shared_ptr<ListPluginAttachmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPluginAttachmentsWithOptions(request, headers, runtime);
}

ListPluginsResponse Alibabacloud_APIG20240327::Client::listPluginsWithOptions(shared_ptr<ListPluginsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceId)) {
    query->insert(pair<string, string>("attachResourceId", *request->attachResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceType)) {
    query->insert(pair<string, string>("attachResourceType", *request->attachResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayType)) {
    query->insert(pair<string, string>("gatewayType", *request->gatewayType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeBuiltinAiGateway)) {
    query->insert(pair<string, bool>("includeBuiltinAiGateway", *request->includeBuiltinAiGateway));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginClassId)) {
    query->insert(pair<string, string>("pluginClassId", *request->pluginClassId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginClassName)) {
    query->insert(pair<string, string>("pluginClassName", *request->pluginClassName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAttachmentInfo)) {
    query->insert(pair<string, bool>("withAttachmentInfo", *request->withAttachmentInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlugins"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugins"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPluginsResponse(callApi(params, req, runtime));
}

ListPluginsResponse Alibabacloud_APIG20240327::Client::listPlugins(shared_ptr<ListPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPluginsWithOptions(request, headers, runtime);
}

ListPolicyClassesResponse Alibabacloud_APIG20240327::Client::listPolicyClassesWithOptions(shared_ptr<ListPolicyClassesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachResourceType)) {
    query->insert(pair<string, string>("attachResourceType", *request->attachResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicyClasses"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/policy-classes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPolicyClassesResponse(callApi(params, req, runtime));
}

ListPolicyClassesResponse Alibabacloud_APIG20240327::Client::listPolicyClasses(shared_ptr<ListPolicyClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPolicyClassesWithOptions(request, headers, runtime);
}

ListServicesResponse Alibabacloud_APIG20240327::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTypes)) {
    query->insert(pair<string, string>("sourceTypes", *request->sourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_APIG20240327::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListSslCertsResponse Alibabacloud_APIG20240327::Client::listSslCertsWithOptions(shared_ptr<ListSslCertsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certNameLike)) {
    query->insert(pair<string, string>("certNameLike", *request->certNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("domainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSslCerts"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/ssl/certs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSslCertsResponse(callApi(params, req, runtime));
}

ListSslCertsResponse Alibabacloud_APIG20240327::Client::listSslCerts(shared_ptr<ListSslCertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSslCertsWithOptions(request, headers, runtime);
}

ListZonesResponse Alibabacloud_APIG20240327::Client::listZonesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListZones"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/zones"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListZonesResponse(callApi(params, req, runtime));
}

ListZonesResponse Alibabacloud_APIG20240327::Client::listZones() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listZonesWithOptions(headers, runtime);
}

QueryConsumerAuthorizationRulesResponse Alibabacloud_APIG20240327::Client::queryConsumerAuthorizationRulesWithOptions(shared_ptr<QueryConsumerAuthorizationRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiNameLike)) {
    query->insert(pair<string, string>("apiNameLike", *request->apiNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerId)) {
    query->insert(pair<string, string>("consumerId", *request->consumerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerNameLike)) {
    query->insert(pair<string, string>("consumerNameLike", *request->consumerNameLike));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->groupByApi)) {
    query->insert(pair<string, bool>("groupByApi", *request->groupByApi));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentResourceId)) {
    query->insert(pair<string, string>("parentResourceId", *request->parentResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("resourceTypes", *request->resourceTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConsumerAuthorizationRules"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/authorization-rules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConsumerAuthorizationRulesResponse(callApi(params, req, runtime));
}

QueryConsumerAuthorizationRulesResponse Alibabacloud_APIG20240327::Client::queryConsumerAuthorizationRules(shared_ptr<QueryConsumerAuthorizationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryConsumerAuthorizationRulesWithOptions(request, headers, runtime);
}

RemoveConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::removeConsumerAuthorizationRuleWithOptions(shared_ptr<string> consumerAuthorizationRuleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/authorization-rules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerAuthorizationRuleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

RemoveConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::removeConsumerAuthorizationRule(shared_ptr<string> consumerAuthorizationRuleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeConsumerAuthorizationRuleWithOptions(consumerAuthorizationRuleId, headers, runtime);
}

RestartGatewayResponse Alibabacloud_APIG20240327::Client::restartGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartGateway"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartGatewayResponse(callApi(params, req, runtime));
}

RestartGatewayResponse Alibabacloud_APIG20240327::Client::restartGateway(shared_ptr<string> gatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartGatewayWithOptions(gatewayId, headers, runtime);
}

UndeployHttpApiResponse Alibabacloud_APIG20240327::Client::undeployHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                      shared_ptr<UndeployHttpApiRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("gatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationId)) {
    body->insert(pair<string, string>("operationId", *request->operationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    body->insert(pair<string, string>("routeId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UndeployHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/undeploy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UndeployHttpApiResponse(callApi(params, req, runtime));
}

UndeployHttpApiResponse Alibabacloud_APIG20240327::Client::undeployHttpApi(shared_ptr<string> httpApiId, shared_ptr<UndeployHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return undeployHttpApiWithOptions(httpApiId, request, headers, runtime);
}

UpdateConsumerResponse Alibabacloud_APIG20240327::Client::updateConsumerWithOptions(shared_ptr<string> consumerId,
                                                                                    shared_ptr<UpdateConsumerRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AkSkIdentityConfig>>(request->akSkIdentityConfigs)) {
    body->insert(pair<string, vector<AkSkIdentityConfig>>("akSkIdentityConfigs", *request->akSkIdentityConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<ApiKeyIdentityConfig>(request->apikeyIdentityConfig)) {
    body->insert(pair<string, ApiKeyIdentityConfig>("apikeyIdentityConfig", *request->apikeyIdentityConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<JwtIdentityConfig>(request->jwtIdentityConfig)) {
    body->insert(pair<string, JwtIdentityConfig>("jwtIdentityConfig", *request->jwtIdentityConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConsumer"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConsumerResponse(callApi(params, req, runtime));
}

UpdateConsumerResponse Alibabacloud_APIG20240327::Client::updateConsumer(shared_ptr<string> consumerId, shared_ptr<UpdateConsumerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConsumerWithOptions(consumerId, request, headers, runtime);
}

UpdateConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::updateConsumerAuthorizationRuleWithOptions(shared_ptr<string> consumerId,
                                                                                                                      shared_ptr<string> consumerAuthorizationRuleId,
                                                                                                                      shared_ptr<UpdateConsumerAuthorizationRuleRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AuthorizationResourceInfo>>(request->authorizationResourceInfos)) {
    body->insert(pair<string, vector<AuthorizationResourceInfo>>("authorizationResourceInfos", *request->authorizationResourceInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireMode)) {
    body->insert(pair<string, string>("expireMode", *request->expireMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTimestamp)) {
    body->insert(pair<string, long>("expireTimestamp", *request->expireTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConsumerAuthorizationRule"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/consumers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerId)) + string("/authorization-rules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(consumerAuthorizationRuleId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConsumerAuthorizationRuleResponse(callApi(params, req, runtime));
}

UpdateConsumerAuthorizationRuleResponse Alibabacloud_APIG20240327::Client::updateConsumerAuthorizationRule(shared_ptr<string> consumerId, shared_ptr<string> consumerAuthorizationRuleId, shared_ptr<UpdateConsumerAuthorizationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConsumerAuthorizationRuleWithOptions(consumerId, consumerAuthorizationRuleId, request, headers, runtime);
}

UpdateDomainResponse Alibabacloud_APIG20240327::Client::updateDomainWithOptions(shared_ptr<string> domainId,
                                                                                shared_ptr<UpdateDomainRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caCertIdentifier)) {
    body->insert(pair<string, string>("caCertIdentifier", *request->caCertIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIdentifier)) {
    body->insert(pair<string, string>("certIdentifier", *request->certIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientCACert)) {
    body->insert(pair<string, string>("clientCACert", *request->clientCACert));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceHttps)) {
    body->insert(pair<string, bool>("forceHttps", *request->forceHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Option)) {
    body->insert(pair<string, string>("http2Option", *request->http2Option));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mTLSEnabled)) {
    body->insert(pair<string, bool>("mTLSEnabled", *request->mTLSEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<TlsCipherSuitesConfig>(request->tlsCipherSuitesConfig)) {
    body->insert(pair<string, TlsCipherSuitesConfig>("tlsCipherSuitesConfig", *request->tlsCipherSuitesConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMax)) {
    body->insert(pair<string, string>("tlsMax", *request->tlsMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsMin)) {
    body->insert(pair<string, string>("tlsMin", *request->tlsMin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDomain"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDomainResponse(callApi(params, req, runtime));
}

UpdateDomainResponse Alibabacloud_APIG20240327::Client::updateDomain(shared_ptr<string> domainId, shared_ptr<UpdateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDomainWithOptions(domainId, request, headers, runtime);
}

UpdateEnvironmentResponse Alibabacloud_APIG20240327::Client::updateEnvironmentWithOptions(shared_ptr<string> environmentId,
                                                                                          shared_ptr<UpdateEnvironmentRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvironment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(environmentId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvironmentResponse(callApi(params, req, runtime));
}

UpdateEnvironmentResponse Alibabacloud_APIG20240327::Client::updateEnvironment(shared_ptr<string> environmentId, shared_ptr<UpdateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEnvironmentWithOptions(environmentId, request, headers, runtime);
}

UpdateGatewayFeatureResponse Alibabacloud_APIG20240327::Client::updateGatewayFeatureWithOptions(shared_ptr<string> gatewayId,
                                                                                                shared_ptr<string> name,
                                                                                                shared_ptr<UpdateGatewayFeatureRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayFeature"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-features/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayFeatureResponse(callApi(params, req, runtime));
}

UpdateGatewayFeatureResponse Alibabacloud_APIG20240327::Client::updateGatewayFeature(shared_ptr<string> gatewayId, shared_ptr<string> name, shared_ptr<UpdateGatewayFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayFeatureWithOptions(gatewayId, name, request, headers, runtime);
}

UpdateGatewayNameResponse Alibabacloud_APIG20240327::Client::updateGatewayNameWithOptions(shared_ptr<string> gatewayId,
                                                                                          shared_ptr<UpdateGatewayNameRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayName"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/name"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayNameResponse(callApi(params, req, runtime));
}

UpdateGatewayNameResponse Alibabacloud_APIG20240327::Client::updateGatewayName(shared_ptr<string> gatewayId, shared_ptr<UpdateGatewayNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayNameWithOptions(gatewayId, request, headers, runtime);
}

UpdateHttpApiResponse Alibabacloud_APIG20240327::Client::updateHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                  shared_ptr<UpdateHttpApiRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->agentProtocols)) {
    body->insert(pair<string, vector<string>>("agentProtocols", *request->agentProtocols));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aiProtocols)) {
    body->insert(pair<string, vector<string>>("aiProtocols", *request->aiProtocols));
  }
  if (!Darabonba_Util::Client::isUnset<AuthConfig>(request->authConfig)) {
    body->insert(pair<string, AuthConfig>("authConfig", *request->authConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->basePath)) {
    body->insert(pair<string, string>("basePath", *request->basePath));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HttpApiDeployConfig>>(request->deployConfigs)) {
    body->insert(pair<string, vector<HttpApiDeployConfig>>("deployConfigs", *request->deployConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuth)) {
    body->insert(pair<string, bool>("enableAuth", *request->enableAuth));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateHttpApiRequestIngressConfig>(request->ingressConfig)) {
    body->insert(pair<string, UpdateHttpApiRequestIngressConfig>("ingressConfig", *request->ingressConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyChangeConfig)) {
    body->insert(pair<string, bool>("onlyChangeConfig", *request->onlyChangeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protocols)) {
    body->insert(pair<string, vector<string>>("protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeBasePathOnForward)) {
    body->insert(pair<string, bool>("removeBasePathOnForward", *request->removeBasePathOnForward));
  }
  if (!Darabonba_Util::Client::isUnset<HttpApiVersionConfig>(request->versionConfig)) {
    body->insert(pair<string, HttpApiVersionConfig>("versionConfig", *request->versionConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHttpApiResponse(callApi(params, req, runtime));
}

UpdateHttpApiResponse Alibabacloud_APIG20240327::Client::updateHttpApi(shared_ptr<string> httpApiId, shared_ptr<UpdateHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHttpApiWithOptions(httpApiId, request, headers, runtime);
}

UpdateHttpApiOperationResponse Alibabacloud_APIG20240327::Client::updateHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                                                    shared_ptr<string> operationId,
                                                                                                    shared_ptr<UpdateHttpApiOperationRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<HttpApiOperation>(request->operation)) {
    body->insert(pair<string, HttpApiOperation>("operation", *request->operation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpApiOperation"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/operations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(operationId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHttpApiOperationResponse(callApi(params, req, runtime));
}

UpdateHttpApiOperationResponse Alibabacloud_APIG20240327::Client::updateHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId, shared_ptr<UpdateHttpApiOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHttpApiOperationWithOptions(httpApiId, operationId, request, headers, runtime);
}

UpdateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::updateHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                                                            shared_ptr<string> routeId,
                                                                                            shared_ptr<UpdateHttpApiRouteRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateHttpApiRouteRequestBackendConfig>(request->backendConfig)) {
    body->insert(pair<string, UpdateHttpApiRouteRequestBackendConfig>("backendConfig", *request->backendConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HttpApiDeployConfig>>(request->deployConfigs)) {
    body->insert(pair<string, vector<HttpApiDeployConfig>>("deployConfigs", *request->deployConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainIds)) {
    body->insert(pair<string, vector<string>>("domainIds", *request->domainIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<HttpRouteMatch>(request->match)) {
    body->insert(pair<string, HttpRouteMatch>("match", *request->match));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateHttpApiRouteRequestMcpRouteConfig>(request->mcpRouteConfig)) {
    body->insert(pair<string, UpdateHttpApiRouteRequestMcpRouteConfig>("mcpRouteConfig", *request->mcpRouteConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpApiRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(routeId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHttpApiRouteResponse(callApi(params, req, runtime));
}

UpdateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::updateHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId, shared_ptr<UpdateHttpApiRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHttpApiRouteWithOptions(httpApiId, routeId, request, headers, runtime);
}

UpdatePluginAttachmentResponse Alibabacloud_APIG20240327::Client::updatePluginAttachmentWithOptions(shared_ptr<string> pluginAttachmentId,
                                                                                                    shared_ptr<UpdatePluginAttachmentRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->attachResourceIds)) {
    body->insert(pair<string, vector<string>>("attachResourceIds", *request->attachResourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginConfig)) {
    body->insert(pair<string, string>("pluginConfig", *request->pluginConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePluginAttachment"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/plugin-attachments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(pluginAttachmentId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePluginAttachmentResponse(callApi(params, req, runtime));
}

UpdatePluginAttachmentResponse Alibabacloud_APIG20240327::Client::updatePluginAttachment(shared_ptr<string> pluginAttachmentId, shared_ptr<UpdatePluginAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePluginAttachmentWithOptions(pluginAttachmentId, request, headers, runtime);
}

UpdatePolicyResponse Alibabacloud_APIG20240327::Client::updatePolicyWithOptions(shared_ptr<string> policyId,
                                                                                shared_ptr<UpdatePolicyRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePolicy"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePolicyResponse(callApi(params, req, runtime));
}

UpdatePolicyResponse Alibabacloud_APIG20240327::Client::updatePolicy(shared_ptr<string> policyId, shared_ptr<UpdatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePolicyWithOptions(policyId, request, headers, runtime);
}

UpgradeGatewayResponse Alibabacloud_APIG20240327::Client::upgradeGatewayWithOptions(shared_ptr<string> gatewayId,
                                                                                    shared_ptr<UpgradeGatewayRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeGateway"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeGatewayResponse(callApi(params, req, runtime));
}

UpgradeGatewayResponse Alibabacloud_APIG20240327::Client::upgradeGateway(shared_ptr<string> gatewayId, shared_ptr<UpgradeGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeGatewayWithOptions(gatewayId, request, headers, runtime);
}

