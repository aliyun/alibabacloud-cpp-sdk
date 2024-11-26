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

CreateHttpApiResponse Alibabacloud_APIG20240327::Client::createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aiProtocols)) {
    body->insert(pair<string, vector<string>>("aiProtocols", *request->aiProtocols));
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
  if (!Darabonba_Util::Client::isUnset<vector<ListGatewaysRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->withConsumerInfoById)) {
    query->insert(pair<string, string>("withConsumerInfoById", *request->withConsumerInfoById));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withEnvironmentInfo)) {
    query->insert(pair<string, bool>("withEnvironmentInfo", *request->withEnvironmentInfo));
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

UpdateHttpApiResponse Alibabacloud_APIG20240327::Client::updateHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                                                  shared_ptr<UpdateHttpApiRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aiProtocols)) {
    body->insert(pair<string, vector<string>>("aiProtocols", *request->aiProtocols));
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

