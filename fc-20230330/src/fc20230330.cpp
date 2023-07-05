// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/fc20230330.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
                                                                                                shared_ptr<string> versionID,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionVersion"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionVersionResponse(callApi(params, req, runtime));
}

DeleteFunctionVersionResponse Alibabacloud_FC20230330::Client::deleteFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionVersionWithOptions(functionName, versionID, headers, runtime);
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

GetResourceTagsResponse Alibabacloud_FC20230330::Client::getResourceTagsWithOptions(shared_ptr<GetResourceTagsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arn)) {
    query->insert(pair<string, string>("arn", *request->arn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceTags"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tag"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTagsResponse(callApi(params, req, runtime));
}

GetResourceTagsResponse Alibabacloud_FC20230330::Client::getResourceTags(shared_ptr<GetResourceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceTagsWithOptions(request, headers, runtime);
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

ListFunctionsResponse Alibabacloud_FC20230330::Client::listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
                                                                                shared_ptr<ListInstancesRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    query->insert(pair<string, string>("qualifier", *request->qualifier));
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

ListTaggedResourcesResponse Alibabacloud_FC20230330::Client::listTaggedResourcesWithOptions(shared_ptr<ListTaggedResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListTaggedResources"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaggedResourcesResponse(callApi(params, req, runtime));
}

ListTaggedResourcesResponse Alibabacloud_FC20230330::Client::listTaggedResources(shared_ptr<ListTaggedResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaggedResourcesWithOptions(request, headers, runtime);
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

TagResourceResponse Alibabacloud_FC20230330::Client::tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResource"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tag"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourceResponse(callApi(params, req, runtime));
}

TagResourceResponse Alibabacloud_FC20230330::Client::tagResource(shared_ptr<TagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourceWithOptions(request, headers, runtime);
}

UntagResourceResponse Alibabacloud_FC20230330::Client::untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arn)) {
    query->insert(pair<string, string>("arn", *request->arn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    query->insert(pair<string, string>("tagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResource"))},
    {"version", boost::any(string("2023-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2023-03-30/tag"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UntagResourceResponse(callApi(params, req, runtime));
}

UntagResourceResponse Alibabacloud_FC20230330::Client::untagResource(shared_ptr<UntagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourceWithOptions(request, headers, runtime);
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

