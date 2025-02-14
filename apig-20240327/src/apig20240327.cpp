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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddGatewaySecurityGroupRuleResponse(callApi(params, req, runtime));
  }
  else {
    return AddGatewaySecurityGroupRuleResponse(execute(params, req, runtime));
  }
}

AddGatewaySecurityGroupRuleResponse Alibabacloud_APIG20240327::Client::addGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<AddGatewaySecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addGatewaySecurityGroupRuleWithOptions(gatewayId, request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeResourceGroupResponse(execute(params, req, runtime));
  }
}

ChangeResourceGroupResponse Alibabacloud_APIG20240327::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceHttps)) {
    body->insert(pair<string, bool>("forceHttps", *request->forceHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Option)) {
    body->insert(pair<string, string>("http2Option", *request->http2Option));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDomainResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDomainResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEnvironmentResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEnvironmentResponse(execute(params, req, runtime));
  }
}

CreateEnvironmentResponse Alibabacloud_APIG20240327::Client::createEnvironment(shared_ptr<CreateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEnvironmentWithOptions(request, headers, runtime);
}

CreateHttpApiResponse Alibabacloud_APIG20240327::Client::createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protocols)) {
    body->insert(pair<string, vector<string>>("protocols", *request->protocols));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpApiResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpApiOperationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpApiOperationResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpApiRouteResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpApiRouteResponse(execute(params, req, runtime));
  }
}

CreateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::createHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHttpApiRouteWithOptions(httpApiId, request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePolicyResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePolicyAttachmentResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePolicyAttachmentResponse(execute(params, req, runtime));
  }
}

CreatePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::createPolicyAttachment(shared_ptr<CreatePolicyAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPolicyAttachmentWithOptions(request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDomainResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDomainResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEnvironmentResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEnvironmentResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGatewayResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGatewaySecurityGroupRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGatewaySecurityGroupRuleResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpApiResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpApiOperationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpApiOperationResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpApiRouteResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpApiRouteResponse(execute(params, req, runtime));
  }
}

DeleteHttpApiRouteResponse Alibabacloud_APIG20240327::Client::deleteHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePolicyResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePolicyAttachmentResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePolicyAttachmentResponse(execute(params, req, runtime));
  }
}

DeletePolicyAttachmentResponse Alibabacloud_APIG20240327::Client::deletePolicyAttachment(shared_ptr<string> policyAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

DeployHttpApiResponse Alibabacloud_APIG20240327::Client::deployHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                  shared_ptr<DeployHttpApiRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeployHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return DeployHttpApiResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return ExportHttpApiResponse(execute(params, req, runtime));
  }
}

ExportHttpApiResponse Alibabacloud_APIG20240327::Client::exportHttpApi(shared_ptr<string> httpApiId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportHttpApiWithOptions(httpApiId, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDashboardResponse(callApi(params, req, runtime));
  }
  else {
    return GetDashboardResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDomainResponse(callApi(params, req, runtime));
  }
  else {
    return GetDomainResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEnvironmentResponse(callApi(params, req, runtime));
  }
  else {
    return GetEnvironmentResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return GetGatewayResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpApiResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpApiOperationResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpApiOperationResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpApiRouteResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpApiRouteResponse(execute(params, req, runtime));
  }
}

GetHttpApiRouteResponse Alibabacloud_APIG20240327::Client::getHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHttpApiRouteWithOptions(httpApiId, routeId, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return GetPolicyResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPolicyAttachmentResponse(callApi(params, req, runtime));
  }
  else {
    return GetPolicyAttachmentResponse(execute(params, req, runtime));
  }
}

GetPolicyAttachmentResponse Alibabacloud_APIG20240327::Client::getPolicyAttachment(shared_ptr<string> policyAttachmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPolicyAttachmentWithOptions(policyAttachmentId, headers, runtime);
}

GetResourceOverviewResponse Alibabacloud_APIG20240327::Client::getResourceOverviewWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceOverviewResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceOverviewResponse(execute(params, req, runtime));
  }
}

GetResourceOverviewResponse Alibabacloud_APIG20240327::Client::getResourceOverview() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceOverviewWithOptions(headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTraceConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetTraceConfigResponse(execute(params, req, runtime));
  }
}

GetTraceConfigResponse Alibabacloud_APIG20240327::Client::getTraceConfig(shared_ptr<string> gatewayId, shared_ptr<GetTraceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTraceConfigWithOptions(gatewayId, request, headers, runtime);
}

ImportHttpApiResponse Alibabacloud_APIG20240327::Client::importHttpApiWithOptions(shared_ptr<ImportHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("dryRun", *request->dryRun));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return ImportHttpApiResponse(execute(params, req, runtime));
  }
}

ImportHttpApiResponse Alibabacloud_APIG20240327::Client::importHttpApi(shared_ptr<ImportHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return importHttpApiWithOptions(request, headers, runtime);
}

ListDomainsResponse Alibabacloud_APIG20240327::Client::listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDomainsResponse(callApi(params, req, runtime));
  }
  else {
    return ListDomainsResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEnvironmentsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEnvironmentsResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewaysResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewaysResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpApiOperationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpApiOperationsResponse(execute(params, req, runtime));
  }
}

ListHttpApiOperationsResponse Alibabacloud_APIG20240327::Client::listHttpApiOperations(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHttpApiOperationsWithOptions(httpApiId, request, headers, runtime);
}

ListHttpApisResponse Alibabacloud_APIG20240327::Client::listHttpApisWithOptions(shared_ptr<ListHttpApisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("gatewayId", *request->gatewayId));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpApisResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpApisResponse(execute(params, req, runtime));
  }
}

ListHttpApisResponse Alibabacloud_APIG20240327::Client::listHttpApis(shared_ptr<ListHttpApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHttpApisWithOptions(request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPolicyClassesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPolicyClassesResponse(execute(params, req, runtime));
  }
}

ListPolicyClassesResponse Alibabacloud_APIG20240327::Client::listPolicyClasses(shared_ptr<ListPolicyClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPolicyClassesWithOptions(request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSslCertsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSslCertsResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListZonesResponse(callApi(params, req, runtime));
  }
  else {
    return ListZonesResponse(execute(params, req, runtime));
  }
}

ListZonesResponse Alibabacloud_APIG20240327::Client::listZones() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listZonesWithOptions(headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RestartGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return RestartGatewayResponse(execute(params, req, runtime));
  }
}

RestartGatewayResponse Alibabacloud_APIG20240327::Client::restartGateway(shared_ptr<string> gatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartGatewayWithOptions(gatewayId, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceHttps)) {
    body->insert(pair<string, bool>("forceHttps", *request->forceHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Option)) {
    body->insert(pair<string, string>("http2Option", *request->http2Option));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateDomainResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateDomainResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEnvironmentResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEnvironmentResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateGatewayFeatureResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateGatewayFeatureResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateGatewayNameResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateGatewayNameResponse(execute(params, req, runtime));
  }
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protocols)) {
    body->insert(pair<string, vector<string>>("protocols", *request->protocols));
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpApiResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpApiResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpApiOperationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpApiOperationResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpApiRouteResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpApiRouteResponse(execute(params, req, runtime));
  }
}

UpdateHttpApiRouteResponse Alibabacloud_APIG20240327::Client::updateHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId, shared_ptr<UpdateHttpApiRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHttpApiRouteWithOptions(httpApiId, routeId, request, headers, runtime);
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePolicyResponse(execute(params, req, runtime));
  }
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
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeGatewayResponse(execute(params, req, runtime));
  }
}

UpgradeGatewayResponse Alibabacloud_APIG20240327::Client::upgradeGateway(shared_ptr<string> gatewayId, shared_ptr<UpgradeGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeGatewayWithOptions(gatewayId, request, headers, runtime);
}

