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

CreateDomainResponse Alibabacloud_APIG20240327::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caCertIndentifier)) {
    body->insert(pair<string, string>("caCertIndentifier", *request->caCertIndentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIndentifier)) {
    body->insert(pair<string, string>("certIndentifier", *request->certIndentifier));
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

CreateGatewayRouteResponse Alibabacloud_APIG20240327::Client::createGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                            shared_ptr<CreateGatewayRouteRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GatewayRouteBackendConfig>(request->backendConfig)) {
    body->insert(pair<string, GatewayRouteBackendConfig>("backendConfig", *request->backendConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<GatewayRouteDomainConfig>(request->domainConfig)) {
    body->insert(pair<string, GatewayRouteDomainConfig>("domainConfig", *request->domainConfig));
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
    {"action", boost::any(string("CreateGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayRouteResponse(callApi(params, req, runtime));
}

CreateGatewayRouteResponse Alibabacloud_APIG20240327::Client::createGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<CreateGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayRouteWithOptions(gatewayId, request, headers, runtime);
}

CreateGatewayServiceResponse Alibabacloud_APIG20240327::Client::createGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                                                                shared_ptr<CreateGatewayServiceRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateGatewayServiceRequestGatewayServiceConfigs>>(request->gatewayServiceConfigs)) {
    body->insert(pair<string, vector<CreateGatewayServiceRequestGatewayServiceConfigs>>("gatewayServiceConfigs", *request->gatewayServiceConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayServiceResponse(callApi(params, req, runtime));
}

CreateGatewayServiceResponse Alibabacloud_APIG20240327::Client::createGatewayService(shared_ptr<string> gatewayId, shared_ptr<CreateGatewayServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayServiceWithOptions(gatewayId, request, headers, runtime);
}

CreateGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::createGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                                                              shared_ptr<string> gatewayServiceId,
                                                                                                              shared_ptr<CreateGatewayServiceVersionRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateGatewayServiceVersionRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<CreateGatewayServiceVersionRequestLabels>>("labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayServiceVersion"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)) + string("/service-versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayServiceVersionResponse(callApi(params, req, runtime));
}

CreateGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::createGatewayServiceVersion(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<CreateGatewayServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayServiceVersionWithOptions(gatewayId, gatewayServiceId, request, headers, runtime);
}

CreateHttpApiResponse Alibabacloud_APIG20240327::Client::createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->basePath)) {
    body->insert(pair<string, string>("basePath", *request->basePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
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

CreateServiceSourceResponse Alibabacloud_APIG20240327::Client::createServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<CreateServiceSourceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateServiceSourceRequestK8sServiceSourceConfig>(request->k8sServiceSourceConfig)) {
    body->insert(pair<string, CreateServiceSourceRequestK8sServiceSourceConfig>("k8sServiceSourceConfig", *request->k8sServiceSourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceSourceRequestNacosServiceSourceConfig>(request->nacosServiceSourceConfig)) {
    body->insert(pair<string, CreateServiceSourceRequestNacosServiceSourceConfig>("nacosServiceSourceConfig", *request->nacosServiceSourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceSource"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/service-sources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceSourceResponse(callApi(params, req, runtime));
}

CreateServiceSourceResponse Alibabacloud_APIG20240327::Client::createServiceSource(shared_ptr<string> gatewayId, shared_ptr<CreateServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceSourceWithOptions(gatewayId, request, headers, runtime);
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

DeleteGatewayRouteResponse Alibabacloud_APIG20240327::Client::deleteGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                            shared_ptr<string> gatewayRouteId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayRouteId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayRouteResponse(callApi(params, req, runtime));
}

DeleteGatewayRouteResponse Alibabacloud_APIG20240327::Client::deleteGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayRouteWithOptions(gatewayId, gatewayRouteId, headers, runtime);
}

DeleteGatewayServiceResponse Alibabacloud_APIG20240327::Client::deleteGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                                                                shared_ptr<string> gatewayServiceId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayServiceResponse(callApi(params, req, runtime));
}

DeleteGatewayServiceResponse Alibabacloud_APIG20240327::Client::deleteGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayServiceWithOptions(gatewayId, gatewayServiceId, headers, runtime);
}

DeleteGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::deleteGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                                                              shared_ptr<string> gatewayServiceId,
                                                                                                              shared_ptr<string> name,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayServiceVersion"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)) + string("/service-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayServiceVersionResponse(callApi(params, req, runtime));
}

DeleteGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::deleteGatewayServiceVersion(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayServiceVersionWithOptions(gatewayId, gatewayServiceId, name, headers, runtime);
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

DeleteServiceSourceResponse Alibabacloud_APIG20240327::Client::deleteServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<string> serviceSourceId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceSource"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/service-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceSourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceSourceResponse(callApi(params, req, runtime));
}

DeleteServiceSourceResponse Alibabacloud_APIG20240327::Client::deleteServiceSource(shared_ptr<string> gatewayId, shared_ptr<string> serviceSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceSourceWithOptions(gatewayId, serviceSourceId, headers, runtime);
}

GetDomainResponse Alibabacloud_APIG20240327::Client::getDomainWithOptions(shared_ptr<string> domainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
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

GetDomainResponse Alibabacloud_APIG20240327::Client::getDomain(shared_ptr<string> domainId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDomainWithOptions(domainId, headers, runtime);
}

GetEnvironmentResponse Alibabacloud_APIG20240327::Client::getEnvironmentWithOptions(shared_ptr<string> environmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
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

GetEnvironmentResponse Alibabacloud_APIG20240327::Client::getEnvironment(shared_ptr<string> environmentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentWithOptions(environmentId, headers, runtime);
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

GetGatewayRouteResponse Alibabacloud_APIG20240327::Client::getGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                      shared_ptr<string> gatewayRouteId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayRouteId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayRouteResponse(callApi(params, req, runtime));
}

GetGatewayRouteResponse Alibabacloud_APIG20240327::Client::getGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGatewayRouteWithOptions(gatewayId, gatewayRouteId, headers, runtime);
}

GetGatewayServiceResponse Alibabacloud_APIG20240327::Client::getGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                                                          shared_ptr<string> gatewayServiceId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayServiceResponse(callApi(params, req, runtime));
}

GetGatewayServiceResponse Alibabacloud_APIG20240327::Client::getGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGatewayServiceWithOptions(gatewayId, gatewayServiceId, headers, runtime);
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

ListDomainsResponse Alibabacloud_APIG20240327::Client::listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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

ListGatewayRoutesResponse Alibabacloud_APIG20240327::Client::listGatewayRoutesWithOptions(shared_ptr<string> gatewayId,
                                                                                          shared_ptr<ListGatewayRoutesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayRoutes"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayRoutesResponse(callApi(params, req, runtime));
}

ListGatewayRoutesResponse Alibabacloud_APIG20240327::Client::listGatewayRoutes(shared_ptr<string> gatewayId, shared_ptr<ListGatewayRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayRoutesWithOptions(gatewayId, request, headers, runtime);
}

ListGatewayServicesResponse Alibabacloud_APIG20240327::Client::listGatewayServicesWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<ListGatewayServicesRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayServices"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGatewayServicesResponse(callApi(params, req, runtime));
}

ListGatewayServicesResponse Alibabacloud_APIG20240327::Client::listGatewayServices(shared_ptr<string> gatewayId, shared_ptr<ListGatewayServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayServicesWithOptions(gatewayId, request, headers, runtime);
}

ListGatewaysResponse Alibabacloud_APIG20240327::Client::listGatewaysWithOptions(shared_ptr<ListGatewaysRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("method", *request->method));
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

ListHttpApisResponse Alibabacloud_APIG20240327::Client::listHttpApisWithOptions(shared_ptr<ListHttpApisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
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

OfflineGatewayRouteResponse Alibabacloud_APIG20240327::Client::offlineGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<string> gatewayRouteId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayRouteId)) + string("/offline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineGatewayRouteResponse(callApi(params, req, runtime));
}

OfflineGatewayRouteResponse Alibabacloud_APIG20240327::Client::offlineGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return offlineGatewayRouteWithOptions(gatewayId, gatewayRouteId, headers, runtime);
}

OfflineHttpApiResponse Alibabacloud_APIG20240327::Client::offlineHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                    shared_ptr<OfflineHttpApiRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/offline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineHttpApiResponse(callApi(params, req, runtime));
}

OfflineHttpApiResponse Alibabacloud_APIG20240327::Client::offlineHttpApi(shared_ptr<string> httpApiId, shared_ptr<OfflineHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return offlineHttpApiWithOptions(httpApiId, request, headers, runtime);
}

PublishGatewayRouteResponse Alibabacloud_APIG20240327::Client::publishGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<string> gatewayRouteId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayRouteId)) + string("/publish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishGatewayRouteResponse(callApi(params, req, runtime));
}

PublishGatewayRouteResponse Alibabacloud_APIG20240327::Client::publishGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishGatewayRouteWithOptions(gatewayId, gatewayRouteId, headers, runtime);
}

PublishHttpApiResponse Alibabacloud_APIG20240327::Client::publishHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                    shared_ptr<PublishHttpApiRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowOverwrite)) {
    body->insert(pair<string, bool>("allowOverwrite", *request->allowOverwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<PublishHttpApiRequestEnvironment>(request->environment)) {
    body->insert(pair<string, PublishHttpApiRequestEnvironment>("environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionId)) {
    body->insert(pair<string, string>("revisionId", *request->revisionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishHttpApi"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/http-apis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(httpApiId)) + string("/publish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishHttpApiResponse(callApi(params, req, runtime));
}

PublishHttpApiResponse Alibabacloud_APIG20240327::Client::publishHttpApi(shared_ptr<string> httpApiId, shared_ptr<PublishHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishHttpApiWithOptions(httpApiId, request, headers, runtime);
}

UpdateDomainResponse Alibabacloud_APIG20240327::Client::updateDomainWithOptions(shared_ptr<string> domainId,
                                                                                shared_ptr<UpdateDomainRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caCertIndentifier)) {
    body->insert(pair<string, string>("caCertIndentifier", *request->caCertIndentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIndentifier)) {
    body->insert(pair<string, string>("certIndentifier", *request->certIndentifier));
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

UpdateGatewayRouteResponse Alibabacloud_APIG20240327::Client::updateGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                                                            shared_ptr<string> gatewayRouteId,
                                                                                            shared_ptr<UpdateGatewayRouteRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GatewayRouteBackendConfig>(request->backendConfig)) {
    body->insert(pair<string, GatewayRouteBackendConfig>("backendConfig", *request->backendConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<GatewayRouteDomainConfig>(request->domainConfig)) {
    body->insert(pair<string, GatewayRouteDomainConfig>("domainConfig", *request->domainConfig));
  }
  if (!Darabonba_Util::Client::isUnset<HttpRouteMatch>(request->match)) {
    body->insert(pair<string, HttpRouteMatch>("match", *request->match));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayRoute"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/http-routes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayRouteId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayRouteResponse(callApi(params, req, runtime));
}

UpdateGatewayRouteResponse Alibabacloud_APIG20240327::Client::updateGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId, shared_ptr<UpdateGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayRouteWithOptions(gatewayId, gatewayRouteId, request, headers, runtime);
}

UpdateGatewayServiceResponse Alibabacloud_APIG20240327::Client::updateGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                                                                shared_ptr<string> gatewayServiceId,
                                                                                                shared_ptr<UpdateGatewayServiceRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->addresses)) {
    body->insert(pair<string, vector<string>>("addresses", *request->addresses));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("port", *request->port));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayService"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceResponse Alibabacloud_APIG20240327::Client::updateGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<UpdateGatewayServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayServiceWithOptions(gatewayId, gatewayServiceId, request, headers, runtime);
}

UpdateGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::updateGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                                                              shared_ptr<string> gatewayServiceId,
                                                                                                              shared_ptr<string> name,
                                                                                                              shared_ptr<UpdateGatewayServiceVersionRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateGatewayServiceVersionRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<UpdateGatewayServiceVersionRequestLabels>>("labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGatewayServiceVersion"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/gateway-services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayServiceId)) + string("/service-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGatewayServiceVersionResponse(callApi(params, req, runtime));
}

UpdateGatewayServiceVersionResponse Alibabacloud_APIG20240327::Client::updateGatewayServiceVersion(shared_ptr<string> gatewayId,
                                                                                                   shared_ptr<string> gatewayServiceId,
                                                                                                   shared_ptr<string> name,
                                                                                                   shared_ptr<UpdateGatewayServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayServiceVersionWithOptions(gatewayId, gatewayServiceId, name, request, headers, runtime);
}

UpdateHttpApiResponse Alibabacloud_APIG20240327::Client::updateHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                  shared_ptr<UpdateHttpApiRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->basePath)) {
    body->insert(pair<string, string>("basePath", *request->basePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
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

UpdateServiceSourceResponse Alibabacloud_APIG20240327::Client::updateServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                                                              shared_ptr<string> serviceSourceId,
                                                                                              shared_ptr<UpdateServiceSourceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateServiceSourceRequestK8sServiceSourceConfig>(request->k8sServiceSourceConfig)) {
    body->insert(pair<string, UpdateServiceSourceRequestK8sServiceSourceConfig>("k8sServiceSourceConfig", *request->k8sServiceSourceConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceSource"))},
    {"version", boost::any(string("2024-03-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(gatewayId)) + string("/service-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceSourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceSourceResponse(callApi(params, req, runtime));
}

UpdateServiceSourceResponse Alibabacloud_APIG20240327::Client::updateServiceSource(shared_ptr<string> gatewayId, shared_ptr<string> serviceSourceId, shared_ptr<UpdateServiceSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceSourceWithOptions(gatewayId, serviceSourceId, request, headers, runtime);
}

