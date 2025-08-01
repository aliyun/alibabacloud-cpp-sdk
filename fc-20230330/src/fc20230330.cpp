// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/fc20230330.hpp>
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

using namespace Alibabacloud_FC20230330;

Alibabacloud_FC20230330::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("fc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_FC20230330::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAliasResponse Alibabacloud_FC20230330::Client::createAliasWithOptions(shared_ptr<string> functionName,
                                                                            shared_ptr<CreateAliasRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlias"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/aliases"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAliasResponse(callApi(params, req, runtime));
}

CreateAliasResponse Alibabacloud_FC20230330::Client::createAlias(shared_ptr<string> functionName, shared_ptr<CreateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAliasWithOptions(functionName, request, headers, runtime);
}

CreateCustomDomainResponse Alibabacloud_FC20230330::Client::createCustomDomainWithOptions(shared_ptr<CreateCustomDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomDomain"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/custom-domains"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomDomainResponse(callApi(params, req, runtime));
}

CreateCustomDomainResponse Alibabacloud_FC20230330::Client::createCustomDomain(shared_ptr<CreateCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCustomDomainWithOptions(request, headers, runtime);
}

CreateFunctionResponse Alibabacloud_FC20230330::Client::createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunction"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionResponse(callApi(params, req, runtime));
}

CreateFunctionResponse Alibabacloud_FC20230330::Client::createFunction(shared_ptr<CreateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionWithOptions(request, headers, runtime);
}

CreateLayerVersionResponse Alibabacloud_FC20230330::Client::createLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                          shared_ptr<CreateLayerVersionRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLayerVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName)) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLayerVersionResponse(callApi(params, req, runtime));
}

CreateLayerVersionResponse Alibabacloud_FC20230330::Client::createLayerVersion(shared_ptr<string> layerName, shared_ptr<CreateLayerVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLayerVersionWithOptions(layerName, request, headers, runtime);
}

CreateTriggerResponse Alibabacloud_FC20230330::Client::createTriggerWithOptions(shared_ptr<string> functionName,
                                                                                shared_ptr<CreateTriggerRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/triggers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
}

CreateTriggerResponse Alibabacloud_FC20230330::Client::createTrigger(shared_ptr<string> functionName, shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTriggerWithOptions(functionName, request, headers, runtime);
}

CreateVpcBindingResponse Alibabacloud_FC20230330::Client::createVpcBindingWithOptions(shared_ptr<string> functionName,
                                                                                      shared_ptr<CreateVpcBindingRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcBinding"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/vpc-bindings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateVpcBindingResponse(callApi(params, req, runtime));
}

CreateVpcBindingResponse Alibabacloud_FC20230330::Client::createVpcBinding(shared_ptr<string> functionName, shared_ptr<CreateVpcBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVpcBindingWithOptions(functionName, request, headers, runtime);
}

DeleteAliasResponse Alibabacloud_FC20230330::Client::deleteAliasWithOptions(shared_ptr<string> functionName,
                                                                            shared_ptr<string> aliasName,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlias"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/aliases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAliasResponse(callApi(params, req, runtime));
}

DeleteAliasResponse Alibabacloud_FC20230330::Client::deleteAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAliasWithOptions(functionName, aliasName, headers, runtime);
}

DeleteAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::deleteAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                                                                    shared_ptr<DeleteAsyncInvokeConfigRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAsyncInvokeConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-invoke-config"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

DeleteAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::deleteAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<DeleteAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

DeleteConcurrencyConfigResponse Alibabacloud_FC20230330::Client::deleteConcurrencyConfigWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConcurrencyConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/concurrency"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteConcurrencyConfigResponse(callApi(params, req, runtime));
}

DeleteConcurrencyConfigResponse Alibabacloud_FC20230330::Client::deleteConcurrencyConfig(shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConcurrencyConfigWithOptions(functionName, headers, runtime);
}

DeleteCustomDomainResponse Alibabacloud_FC20230330::Client::deleteCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomDomain"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteCustomDomainResponse(callApi(params, req, runtime));
}

DeleteCustomDomainResponse Alibabacloud_FC20230330::Client::deleteCustomDomain(shared_ptr<string> domainName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCustomDomainWithOptions(domainName, headers, runtime);
}

DeleteFunctionResponse Alibabacloud_FC20230330::Client::deleteFunctionWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunction"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionResponse(callApi(params, req, runtime));
}

DeleteFunctionResponse Alibabacloud_FC20230330::Client::deleteFunction(shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionWithOptions(functionName, headers, runtime);
}

DeleteFunctionVersionResponse Alibabacloud_FC20230330::Client::deleteFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                                                shared_ptr<string> versionId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionVersionResponse(callApi(params, req, runtime));
}

DeleteFunctionVersionResponse Alibabacloud_FC20230330::Client::deleteFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionVersionWithOptions(functionName, versionId, headers, runtime);
}

DeleteLayerVersionResponse Alibabacloud_FC20230330::Client::deleteLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                          shared_ptr<string> version,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLayerVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteLayerVersionResponse(callApi(params, req, runtime));
}

DeleteLayerVersionResponse Alibabacloud_FC20230330::Client::deleteLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLayerVersionWithOptions(layerName, version, headers, runtime);
}

DeleteProvisionConfigResponse Alibabacloud_FC20230330::Client::deleteProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                                                                shared_ptr<DeleteProvisionConfigRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProvisionConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/provision-config"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteProvisionConfigResponse(callApi(params, req, runtime));
}

DeleteProvisionConfigResponse Alibabacloud_FC20230330::Client::deleteProvisionConfig(shared_ptr<string> functionName, shared_ptr<DeleteProvisionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProvisionConfigWithOptions(functionName, request, headers, runtime);
}

DeleteTriggerResponse Alibabacloud_FC20230330::Client::deleteTriggerWithOptions(shared_ptr<string> functionName,
                                                                                shared_ptr<string> triggerName,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/triggers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_FC20230330::Client::deleteTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTriggerWithOptions(functionName, triggerName, headers, runtime);
}

DeleteVpcBindingResponse Alibabacloud_FC20230330::Client::deleteVpcBindingWithOptions(shared_ptr<string> functionName,
                                                                                      shared_ptr<string> vpcId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcBinding"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/vpc-bindings/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(vpcId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteVpcBindingResponse(callApi(params, req, runtime));
}

DeleteVpcBindingResponse Alibabacloud_FC20230330::Client::deleteVpcBinding(shared_ptr<string> functionName, shared_ptr<string> vpcId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVpcBindingWithOptions(functionName, vpcId, headers, runtime);
}

DescribeRegionsResponse Alibabacloud_FC20230330::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_FC20230330::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(request, headers, runtime);
}

DisableFunctionInvocationResponse Alibabacloud_FC20230330::Client::disableFunctionInvocationWithOptions(shared_ptr<string> functionName,
                                                                                                        shared_ptr<DisableFunctionInvocationRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->abortOngoingRequest)) {
    body->insert(pair<string, bool>("abortOngoingRequest", *request->abortOngoingRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableFunctionInvocation"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/invoke/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableFunctionInvocationResponse(callApi(params, req, runtime));
}

DisableFunctionInvocationResponse Alibabacloud_FC20230330::Client::disableFunctionInvocation(shared_ptr<string> functionName, shared_ptr<DisableFunctionInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableFunctionInvocationWithOptions(functionName, request, headers, runtime);
}

EnableFunctionInvocationResponse Alibabacloud_FC20230330::Client::enableFunctionInvocationWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableFunctionInvocation"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/invoke/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableFunctionInvocationResponse(callApi(params, req, runtime));
}

EnableFunctionInvocationResponse Alibabacloud_FC20230330::Client::enableFunctionInvocation(shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableFunctionInvocationWithOptions(functionName, headers, runtime);
}

GetAliasResponse Alibabacloud_FC20230330::Client::getAliasWithOptions(shared_ptr<string> functionName,
                                                                      shared_ptr<string> aliasName,
                                                                      shared_ptr<map<string, string>> headers,
                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlias"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/aliases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAliasResponse(callApi(params, req, runtime));
}

GetAliasResponse Alibabacloud_FC20230330::Client::getAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAliasWithOptions(functionName, aliasName, headers, runtime);
}

GetAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::getAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                                                              shared_ptr<GetAsyncInvokeConfigRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncInvokeConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-invoke-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

GetAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::getAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<GetAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

GetAsyncTaskResponse Alibabacloud_FC20230330::Client::getAsyncTaskWithOptions(shared_ptr<string> functionName,
                                                                              shared_ptr<string> taskId,
                                                                              shared_ptr<GetAsyncTaskRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncTask"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncTaskResponse(callApi(params, req, runtime));
}

GetAsyncTaskResponse Alibabacloud_FC20230330::Client::getAsyncTask(shared_ptr<string> functionName, shared_ptr<string> taskId, shared_ptr<GetAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAsyncTaskWithOptions(functionName, taskId, request, headers, runtime);
}

GetConcurrencyConfigResponse Alibabacloud_FC20230330::Client::getConcurrencyConfigWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConcurrencyConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/concurrency"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConcurrencyConfigResponse(callApi(params, req, runtime));
}

GetConcurrencyConfigResponse Alibabacloud_FC20230330::Client::getConcurrencyConfig(shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getConcurrencyConfigWithOptions(functionName, headers, runtime);
}

GetCustomDomainResponse Alibabacloud_FC20230330::Client::getCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomDomain"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomDomainResponse(callApi(params, req, runtime));
}

GetCustomDomainResponse Alibabacloud_FC20230330::Client::getCustomDomain(shared_ptr<string> domainName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

GetFunctionResponse Alibabacloud_FC20230330::Client::getFunctionWithOptions(shared_ptr<string> functionName,
                                                                            shared_ptr<GetFunctionRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunction"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionResponse(callApi(params, req, runtime));
}

GetFunctionResponse Alibabacloud_FC20230330::Client::getFunction(shared_ptr<string> functionName, shared_ptr<GetFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionWithOptions(functionName, request, headers, runtime);
}

GetFunctionCodeResponse Alibabacloud_FC20230330::Client::getFunctionCodeWithOptions(shared_ptr<string> functionName,
                                                                                    shared_ptr<GetFunctionCodeRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionCode"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/code"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionCodeResponse(callApi(params, req, runtime));
}

GetFunctionCodeResponse Alibabacloud_FC20230330::Client::getFunctionCode(shared_ptr<string> functionName, shared_ptr<GetFunctionCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionCodeWithOptions(functionName, request, headers, runtime);
}

GetLayerVersionResponse Alibabacloud_FC20230330::Client::getLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                    shared_ptr<string> version,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayerVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayerVersionResponse(callApi(params, req, runtime));
}

GetLayerVersionResponse Alibabacloud_FC20230330::Client::getLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLayerVersionWithOptions(layerName, version, headers, runtime);
}

GetLayerVersionByArnResponse Alibabacloud_FC20230330::Client::getLayerVersionByArnWithOptions(shared_ptr<string> arn, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayerVersionByArn"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layerarn/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(arn)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayerVersionByArnResponse(callApi(params, req, runtime));
}

GetLayerVersionByArnResponse Alibabacloud_FC20230330::Client::getLayerVersionByArn(shared_ptr<string> arn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLayerVersionByArnWithOptions(arn, headers, runtime);
}

GetProvisionConfigResponse Alibabacloud_FC20230330::Client::getProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                                                          shared_ptr<GetProvisionConfigRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProvisionConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/provision-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProvisionConfigResponse(callApi(params, req, runtime));
}

GetProvisionConfigResponse Alibabacloud_FC20230330::Client::getProvisionConfig(shared_ptr<string> functionName, shared_ptr<GetProvisionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProvisionConfigWithOptions(functionName, request, headers, runtime);
}

GetTriggerResponse Alibabacloud_FC20230330::Client::getTriggerWithOptions(shared_ptr<string> functionName,
                                                                          shared_ptr<string> triggerName,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrigger"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/triggers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTriggerResponse(callApi(params, req, runtime));
}

GetTriggerResponse Alibabacloud_FC20230330::Client::getTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTriggerWithOptions(functionName, triggerName, headers, runtime);
}

InvokeFunctionResponse Alibabacloud_FC20230330::Client::invokeFunctionWithOptions(shared_ptr<string> functionName,
                                                                                  shared_ptr<InvokeFunctionRequest> request,
                                                                                  shared_ptr<InvokeFunctionHeaders> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAsyncTaskId)) {
    realHeaders->insert(pair<string, string>("x-fc-async-task-id", Darabonba_Util::Client::toJSONString(headers->xFcAsyncTaskId)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcInvocationType)) {
    realHeaders->insert(pair<string, string>("x-fc-invocation-type", Darabonba_Util::Client::toJSONString(headers->xFcInvocationType)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcLogType)) {
    realHeaders->insert(pair<string, string>("x-fc-log-type", Darabonba_Util::Client::toJSONString(headers->xFcLogType)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeFunction"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/invocations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("binary"))}
  }));
  shared_ptr<InvokeFunctionResponse> res = make_shared<InvokeFunctionResponse>();
  shared_ptr<map<string, boost::any>> tmp = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<map<string, boost::any>>(callApi(params, req, runtime))));
  if (!Darabonba_Util::Client::isUnset<boost::any>((*tmp)["body"])) {
    shared_ptr<Darabonba::Stream> respBody = Darabonba::Converter::toStream(Darabonba_Util::Client::assertAsReadable(make_shared<boost::any>((*tmp)["body"])));
    res->body = Darabonba::Converter::toStream(*respBody);
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>((*tmp)["headers"])) {
    shared_ptr<map<string, boost::any>> respHeaders = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*tmp)["headers"])));
    res->headers = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(respHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>((*tmp)["statusCode"])) {
    shared_ptr<int> statusCode = make_shared<int>(Darabonba_Util::Client::assertAsInteger(make_shared<boost::any>((*tmp)["statusCode"])));
    res->statusCode = statusCode;
  }
  return *res;
}

InvokeFunctionResponse Alibabacloud_FC20230330::Client::invokeFunction(shared_ptr<string> functionName, shared_ptr<InvokeFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvokeFunctionHeaders> headers = make_shared<InvokeFunctionHeaders>();
  return invokeFunctionWithOptions(functionName, request, headers, runtime);
}

ListAliasesResponse Alibabacloud_FC20230330::Client::listAliasesWithOptions(shared_ptr<string> functionName,
                                                                            shared_ptr<ListAliasesRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAliases"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/aliases"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliasesResponse(callApi(params, req, runtime));
}

ListAliasesResponse Alibabacloud_FC20230330::Client::listAliases(shared_ptr<string> functionName, shared_ptr<ListAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAliasesWithOptions(functionName, request, headers, runtime);
}

ListAsyncInvokeConfigsResponse Alibabacloud_FC20230330::Client::listAsyncInvokeConfigsWithOptions(shared_ptr<ListAsyncInvokeConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("functionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsyncInvokeConfigs"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/async-invoke-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAsyncInvokeConfigsResponse(callApi(params, req, runtime));
}

ListAsyncInvokeConfigsResponse Alibabacloud_FC20230330::Client::listAsyncInvokeConfigs(shared_ptr<ListAsyncInvokeConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAsyncInvokeConfigsWithOptions(request, headers, runtime);
}

ListAsyncTasksResponse Alibabacloud_FC20230330::Client::listAsyncTasksWithOptions(shared_ptr<string> functionName,
                                                                                  shared_ptr<ListAsyncTasksRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePayload)) {
    query->insert(pair<string, bool>("includePayload", *request->includePayload));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrderByTime)) {
    query->insert(pair<string, string>("sortOrderByTime", *request->sortOrderByTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startedTimeBegin)) {
    query->insert(pair<string, long>("startedTimeBegin", *request->startedTimeBegin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startedTimeEnd)) {
    query->insert(pair<string, long>("startedTimeEnd", *request->startedTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsyncTasks"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAsyncTasksResponse(callApi(params, req, runtime));
}

ListAsyncTasksResponse Alibabacloud_FC20230330::Client::listAsyncTasks(shared_ptr<string> functionName, shared_ptr<ListAsyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAsyncTasksWithOptions(functionName, request, headers, runtime);
}

ListConcurrencyConfigsResponse Alibabacloud_FC20230330::Client::listConcurrencyConfigsWithOptions(shared_ptr<ListConcurrencyConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("functionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConcurrencyConfigs"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/concurrency-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConcurrencyConfigsResponse(callApi(params, req, runtime));
}

ListConcurrencyConfigsResponse Alibabacloud_FC20230330::Client::listConcurrencyConfigs(shared_ptr<ListConcurrencyConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConcurrencyConfigsWithOptions(request, headers, runtime);
}

ListCustomDomainsResponse Alibabacloud_FC20230330::Client::listCustomDomainsWithOptions(shared_ptr<ListCustomDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomDomains"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/custom-domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomDomainsResponse(callApi(params, req, runtime));
}

ListCustomDomainsResponse Alibabacloud_FC20230330::Client::listCustomDomains(shared_ptr<ListCustomDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCustomDomainsWithOptions(request, headers, runtime);
}

ListFunctionVersionsResponse Alibabacloud_FC20230330::Client::listFunctionVersionsWithOptions(shared_ptr<string> functionName,
                                                                                              shared_ptr<ListFunctionVersionsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionVersions"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionVersionsResponse(callApi(params, req, runtime));
}

ListFunctionVersionsResponse Alibabacloud_FC20230330::Client::listFunctionVersions(shared_ptr<string> functionName, shared_ptr<ListFunctionVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionVersionsWithOptions(functionName, request, headers, runtime);
}

ListFunctionsResponse Alibabacloud_FC20230330::Client::listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFunctionsShrinkRequest> request = make_shared<ListFunctionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcVersion)) {
    query->insert(pair<string, string>("fcVersion", *request->fcVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("functionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuType)) {
    query->insert(pair<string, string>("gpuType", *request->gpuType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    query->insert(pair<string, string>("runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctions"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionsResponse(callApi(params, req, runtime));
}

ListFunctionsResponse Alibabacloud_FC20230330::Client::listFunctions(shared_ptr<ListFunctionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionsWithOptions(request, headers, runtime);
}

ListInstancesResponse Alibabacloud_FC20230330::Client::listInstancesWithOptions(shared_ptr<string> functionName,
                                                                                shared_ptr<ListInstancesRequest> tmpReq,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInstancesShrinkRequest> request = make_shared<ListInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("instanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceStatus)) {
    request->instanceStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceStatus, make_shared<string>("instanceStatus"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimeMs)) {
    query->insert(pair<string, long>("endTimeMs", *request->endTimeMs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("instanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatusShrink)) {
    query->insert(pair<string, string>("instanceStatus", *request->instanceStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    query->insert(pair<string, string>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    query->insert(pair<string, string>("startKey", *request->startKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimeMs)) {
    query->insert(pair<string, long>("startTimeMs", *request->startTimeMs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAllActive)) {
    query->insert(pair<string, bool>("withAllActive", *request->withAllActive));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_FC20230330::Client::listInstances(shared_ptr<string> functionName, shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(functionName, request, headers, runtime);
}

ListLayerVersionsResponse Alibabacloud_FC20230330::Client::listLayerVersionsWithOptions(shared_ptr<string> layerName,
                                                                                        shared_ptr<ListLayerVersionsRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startVersion)) {
    query->insert(pair<string, string>("startVersion", *request->startVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLayerVersions"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLayerVersionsResponse(callApi(params, req, runtime));
}

ListLayerVersionsResponse Alibabacloud_FC20230330::Client::listLayerVersions(shared_ptr<string> layerName, shared_ptr<ListLayerVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLayerVersionsWithOptions(layerName, request, headers, runtime);
}

ListLayersResponse Alibabacloud_FC20230330::Client::listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->official)) {
    query->insert(pair<string, string>("official", *request->official));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->public_)) {
    query->insert(pair<string, string>("public_", *request->public_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLayers"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLayersResponse(callApi(params, req, runtime));
}

ListLayersResponse Alibabacloud_FC20230330::Client::listLayers(shared_ptr<ListLayersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLayersWithOptions(request, headers, runtime);
}

ListProvisionConfigsResponse Alibabacloud_FC20230330::Client::listProvisionConfigsWithOptions(shared_ptr<ListProvisionConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("functionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProvisionConfigs"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/provision-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProvisionConfigsResponse(callApi(params, req, runtime));
}

ListProvisionConfigsResponse Alibabacloud_FC20230330::Client::listProvisionConfigs(shared_ptr<ListProvisionConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProvisionConfigsWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_FC20230330::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("ResourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tags-v2"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_FC20230330::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTriggersResponse Alibabacloud_FC20230330::Client::listTriggersWithOptions(shared_ptr<string> functionName,
                                                                              shared_ptr<ListTriggersRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTriggers"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/triggers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTriggersResponse(callApi(params, req, runtime));
}

ListTriggersResponse Alibabacloud_FC20230330::Client::listTriggers(shared_ptr<string> functionName, shared_ptr<ListTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTriggersWithOptions(functionName, request, headers, runtime);
}

ListVpcBindingsResponse Alibabacloud_FC20230330::Client::listVpcBindingsWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpcBindings"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/vpc-bindings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpcBindingsResponse(callApi(params, req, runtime));
}

ListVpcBindingsResponse Alibabacloud_FC20230330::Client::listVpcBindings(shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcBindingsWithOptions(functionName, headers, runtime);
}

PublishFunctionVersionResponse Alibabacloud_FC20230330::Client::publishFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                                                  shared_ptr<PublishFunctionVersionRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishFunctionVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishFunctionVersionResponse(callApi(params, req, runtime));
}

PublishFunctionVersionResponse Alibabacloud_FC20230330::Client::publishFunctionVersion(shared_ptr<string> functionName, shared_ptr<PublishFunctionVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishFunctionVersionWithOptions(functionName, request, headers, runtime);
}

PutAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::putAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                                                              shared_ptr<PutAsyncInvokeConfigRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAsyncInvokeConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-invoke-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

PutAsyncInvokeConfigResponse Alibabacloud_FC20230330::Client::putAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<PutAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

PutConcurrencyConfigResponse Alibabacloud_FC20230330::Client::putConcurrencyConfigWithOptions(shared_ptr<string> functionName,
                                                                                              shared_ptr<PutConcurrencyConfigRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutConcurrencyConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/concurrency"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutConcurrencyConfigResponse(callApi(params, req, runtime));
}

PutConcurrencyConfigResponse Alibabacloud_FC20230330::Client::putConcurrencyConfig(shared_ptr<string> functionName, shared_ptr<PutConcurrencyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putConcurrencyConfigWithOptions(functionName, request, headers, runtime);
}

PutLayerACLResponse Alibabacloud_FC20230330::Client::putLayerACLWithOptions(shared_ptr<string> layerName,
                                                                            shared_ptr<PutLayerACLRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acl)) {
    query->insert(pair<string, string>("acl", *request->acl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->public_)) {
    query->insert(pair<string, string>("public_", *request->public_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutLayerACL"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName)) + string("/acl"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PutLayerACLResponse(callApi(params, req, runtime));
}

PutLayerACLResponse Alibabacloud_FC20230330::Client::putLayerACL(shared_ptr<string> layerName, shared_ptr<PutLayerACLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putLayerACLWithOptions(layerName, request, headers, runtime);
}

PutProvisionConfigResponse Alibabacloud_FC20230330::Client::putProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                                                          shared_ptr<PutProvisionConfigRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutProvisionConfig"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/provision-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutProvisionConfigResponse(callApi(params, req, runtime));
}

PutProvisionConfigResponse Alibabacloud_FC20230330::Client::putProvisionConfig(shared_ptr<string> functionName, shared_ptr<PutProvisionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putProvisionConfigWithOptions(functionName, request, headers, runtime);
}

StopAsyncTaskResponse Alibabacloud_FC20230330::Client::stopAsyncTaskWithOptions(shared_ptr<string> functionName,
                                                                                shared_ptr<string> taskId,
                                                                                shared_ptr<StopAsyncTaskRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAsyncTask"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/async-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return StopAsyncTaskResponse(callApi(params, req, runtime));
}

StopAsyncTaskResponse Alibabacloud_FC20230330::Client::stopAsyncTask(shared_ptr<string> functionName, shared_ptr<string> taskId, shared_ptr<StopAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopAsyncTaskWithOptions(functionName, taskId, request, headers, runtime);
}

TagResourcesResponse Alibabacloud_FC20230330::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tags-v2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_FC20230330::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_FC20230330::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UntagResourcesShrinkRequest> request = make_shared<UntagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("ResourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKey)) {
    request->tagKeyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKey, make_shared<string>("TagKey"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyShrink)) {
    query->insert(pair<string, string>("TagKey", *request->tagKeyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tags-v2"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_FC20230330::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateAliasResponse Alibabacloud_FC20230330::Client::updateAliasWithOptions(shared_ptr<string> functionName,
                                                                            shared_ptr<string> aliasName,
                                                                            shared_ptr<UpdateAliasRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlias"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/aliases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAliasResponse(callApi(params, req, runtime));
}

UpdateAliasResponse Alibabacloud_FC20230330::Client::updateAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName, shared_ptr<UpdateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAliasWithOptions(functionName, aliasName, request, headers, runtime);
}

UpdateCustomDomainResponse Alibabacloud_FC20230330::Client::updateCustomDomainWithOptions(shared_ptr<string> domainName,
                                                                                          shared_ptr<UpdateCustomDomainRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomDomain"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomDomainResponse(callApi(params, req, runtime));
}

UpdateCustomDomainResponse Alibabacloud_FC20230330::Client::updateCustomDomain(shared_ptr<string> domainName, shared_ptr<UpdateCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCustomDomainWithOptions(domainName, request, headers, runtime);
}

UpdateFunctionResponse Alibabacloud_FC20230330::Client::updateFunctionWithOptions(shared_ptr<string> functionName,
                                                                                  shared_ptr<UpdateFunctionRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunction"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionResponse(callApi(params, req, runtime));
}

UpdateFunctionResponse Alibabacloud_FC20230330::Client::updateFunction(shared_ptr<string> functionName, shared_ptr<UpdateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionWithOptions(functionName, request, headers, runtime);
}

UpdateTriggerResponse Alibabacloud_FC20230330::Client::updateTriggerWithOptions(shared_ptr<string> functionName,
                                                                                shared_ptr<string> triggerName,
                                                                                shared_ptr<UpdateTriggerRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrigger"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/triggers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTriggerResponse(callApi(params, req, runtime));
}

UpdateTriggerResponse Alibabacloud_FC20230330::Client::updateTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName, shared_ptr<UpdateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTriggerWithOptions(functionName, triggerName, request, headers, runtime);
}

