// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/open_search_20171225.hpp>
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

using namespace Alibabacloud_OpenSearch20171225;

Alibabacloud_OpenSearch20171225::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("opensearch"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_OpenSearch20171225::Client::getEndpoint(shared_ptr<string> productId,
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

BindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::bindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, headers, runtime);
}

BindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::bindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> esInstanceId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  esInstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(esInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindESUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/es/") + string(*esInstanceId) + string("/actions/bind-analyzer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindESUserAnalyzerResponse(callApi(params, req, runtime));
}

BindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::bindEsInstance(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindEsInstanceWithOptions(appGroupIdentity, headers, runtime);
}

BindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::bindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindEsInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/actions/bind-es-instance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindEsInstanceResponse(callApi(params, req, runtime));
}

CompileSortScriptResponse Alibabacloud_OpenSearch20171225::Client::compileSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return compileSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

CompileSortScriptResponse Alibabacloud_OpenSearch20171225::Client::compileSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompileSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/actions/compiling"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompileSortScriptResponse(callApi(params, req, runtime));
}

CreateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::createABTestExperiment(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

CreateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::createABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestExperimentResponse(callApi(params, req, runtime));
}

CreateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::createABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestGroupWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

CreateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::createABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestGroupResponse(callApi(params, req, runtime));
}

CreateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::createABTestScene(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestSceneWithOptions(appGroupIdentity, headers, runtime);
}

CreateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::createABTestSceneWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestSceneResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_OpenSearch20171225::Client::createApp(shared_ptr<string> appGroupIdentity, shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppWithOptions(appGroupIdentity, request, headers, runtime);
}

CreateAppResponse Alibabacloud_OpenSearch20171225::Client::createAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                shared_ptr<CreateAppRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppGroupResponse Alibabacloud_OpenSearch20171225::Client::createAppGroup() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppGroupWithOptions(headers, runtime);
}

CreateAppGroupResponse Alibabacloud_OpenSearch20171225::Client::createAppGroupWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppGroupResponse(callApi(params, req, runtime));
}

CreateDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::createDataCollection(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataCollectionWithOptions(appGroupIdentity, headers, runtime);
}

CreateDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::createDataCollectionWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataCollection"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/data-collections"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataCollectionResponse(callApi(params, req, runtime));
}

CreateFirstRankResponse Alibabacloud_OpenSearch20171225::Client::createFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateFirstRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFirstRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateFirstRankResponse Alibabacloud_OpenSearch20171225::Client::createFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<CreateFirstRankRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/first-ranks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFirstRankResponse(callApi(params, req, runtime));
}

CreateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<CreateFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

CreateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<CreateFunctionInstanceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateFunctionInstanceRequestCreateParameters>>(request->createParameters)) {
    body->insert(pair<string, vector<CreateFunctionInstanceRequestCreateParameters>>("createParameters", *request->createParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cron)) {
    body->insert(pair<string, string>("cron", *request->cron));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    body->insert(pair<string, string>("functionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("instanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    body->insert(pair<string, string>("modelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFunctionInstanceRequestUsageParameters>>(request->usageParameters)) {
    body->insert(pair<string, vector<CreateFunctionInstanceRequestUsageParameters>>("usageParameters", *request->usageParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunctionInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionInstanceResponse(callApi(params, req, runtime));
}

CreateFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::createFunctionTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

CreateFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::createFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> instanceName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName) + string("/tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionTaskResponse(callApi(params, req, runtime));
}

CreateInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::createInterventionDictionary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInterventionDictionaryWithOptions(headers, runtime);
}

CreateInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::createInterventionDictionaryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInterventionDictionary"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInterventionDictionaryResponse(callApi(params, req, runtime));
}

CreateModelResponse Alibabacloud_OpenSearch20171225::Client::createModel(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelWithOptions(appGroupIdentity, headers, runtime);
}

CreateModelResponse Alibabacloud_OpenSearch20171225::Client::createModelWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelResponse(callApi(params, req, runtime));
}

CreateQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::createQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateQueryProcessorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createQueryProcessorWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::createQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<CreateQueryProcessorRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueryProcessorResponse(callApi(params, req, runtime));
}

CreateScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::createScheduledTask(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createScheduledTaskWithOptions(appGroupIdentity, headers, runtime);
}

CreateScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::createScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scheduled-tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduledTaskResponse(callApi(params, req, runtime));
}

CreateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::createSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSearchStrategyWithOptions(appGroupIdentity, appId, headers, runtime);
}

CreateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::createSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/search-strategies"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchStrategyResponse(callApi(params, req, runtime));
}

CreateSecondRankResponse Alibabacloud_OpenSearch20171225::Client::createSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateSecondRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSecondRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateSecondRankResponse Alibabacloud_OpenSearch20171225::Client::createSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<CreateSecondRankRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/second-ranks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecondRankResponse(callApi(params, req, runtime));
}

CreateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::createSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSortScriptWithOptions(appGroupIdentity, appVersionId, headers, runtime);
}

CreateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::createSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSortScriptResponse(callApi(params, req, runtime));
}

CreateUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::createUserAnalyzer() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserAnalyzerWithOptions(headers, runtime);
}

CreateUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::createUserAnalyzerWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserAnalyzerResponse(callApi(params, req, runtime));
}

DeleteABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> sceneId,
                                                                                               shared_ptr<string> groupId,
                                                                                               shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

DeleteABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<string> experimentId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  experimentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments/") + string(*experimentId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestExperimentResponse(callApi(params, req, runtime));
}

DeleteABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

DeleteABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestGroupResponse(callApi(params, req, runtime));
}

DeleteABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

DeleteABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestSceneResponse(callApi(params, req, runtime));
}

DeleteFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

DeleteFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> instanceName,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionInstanceResponse(callApi(params, req, runtime));
}

DeleteFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionTask(shared_ptr<string> appGroupIdentity,
                                                                                       shared_ptr<string> functionName,
                                                                                       shared_ptr<string> instanceName,
                                                                                       shared_ptr<string> generation) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

DeleteFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> instanceName,
                                                                                                  shared_ptr<string> generation,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  generation = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(generation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName) + string("/tasks/") + string(*generation))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionTaskResponse(callApi(params, req, runtime));
}

DeleteModelResponse Alibabacloud_OpenSearch20171225::Client::deleteModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelWithOptions(appGroupIdentity, modelName, headers, runtime);
}

DeleteModelResponse Alibabacloud_OpenSearch20171225::Client::deleteModelWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                    shared_ptr<string> modelName,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelResponse(callApi(params, req, runtime));
}

DeleteSortScriptResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

DeleteSortScriptResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> scriptName,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSortScriptResponse(callApi(params, req, runtime));
}

DeleteSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                           shared_ptr<string> appVersionId,
                                                                                           shared_ptr<string> scriptName,
                                                                                           shared_ptr<string> fileName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSortScriptFileWithOptions(appGroupIdentity, appVersionId, scriptName, fileName, headers, runtime);
}

DeleteSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appVersionId,
                                                                                                      shared_ptr<string> scriptName,
                                                                                                      shared_ptr<string> fileName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  fileName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/files/src/") + string(*fileName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSortScriptFileResponse(callApi(params, req, runtime));
}

DescribeABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::describeABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                                   shared_ptr<string> sceneId,
                                                                                                   shared_ptr<string> groupId,
                                                                                                   shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

DescribeABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::describeABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                              shared_ptr<string> sceneId,
                                                                                                              shared_ptr<string> groupId,
                                                                                                              shared_ptr<string> experimentId,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  experimentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments/") + string(*experimentId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestExperimentResponse(callApi(params, req, runtime));
}

DescribeABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::describeABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

DescribeABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::describeABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> sceneId,
                                                                                                    shared_ptr<string> groupId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestGroupResponse(callApi(params, req, runtime));
}

DescribeABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::describeABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

DescribeABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::describeABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> sceneId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestSceneResponse(callApi(params, req, runtime));
}

DescribeAppResponse Alibabacloud_OpenSearch20171225::Client::describeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

DescribeAppResponse Alibabacloud_OpenSearch20171225::Client::describeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                    shared_ptr<string> appId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppResponse(callApi(params, req, runtime));
}

DescribeAppGroupResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

DescribeAppGroupResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppGroupResponse(callApi(params, req, runtime));
}

DescribeAppGroupDataReportResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupDataReport(shared_ptr<string> appGroupIdentity, shared_ptr<DescribeAppGroupDataReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppGroupDataReportWithOptions(appGroupIdentity, request, headers, runtime);
}

DescribeAppGroupDataReportResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupDataReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                  shared_ptr<DescribeAppGroupDataReportRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppGroupDataReport"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/data-report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppGroupDataReportResponse(callApi(params, req, runtime));
}

DescribeAppGroupStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupStatistics(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppGroupStatisticsWithOptions(appGroupIdentity, headers, runtime);
}

DescribeAppGroupStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupStatisticsWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppGroupStatistics"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppGroupStatisticsResponse(callApi(params, req, runtime));
}

DescribeAppStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppStatistics(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppStatisticsWithOptions(appGroupIdentity, appId, headers, runtime);
}

DescribeAppStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppStatisticsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> appId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppStatistics"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppStatisticsResponse(callApi(params, req, runtime));
}

DescribeAppsResponse Alibabacloud_OpenSearch20171225::Client::describeApps(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppsWithOptions(appGroupIdentity, headers, runtime);
}

DescribeAppsResponse Alibabacloud_OpenSearch20171225::Client::describeAppsWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsResponse(callApi(params, req, runtime));
}

DescribeDataCollctionResponse Alibabacloud_OpenSearch20171225::Client::describeDataCollction(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDataCollctionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

DescribeDataCollctionResponse Alibabacloud_OpenSearch20171225::Client::describeDataCollctionWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> dataCollectionIdentity,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  dataCollectionIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataCollectionIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCollction"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/data-collections/") + string(*dataCollectionIdentity))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCollctionResponse(callApi(params, req, runtime));
}

DescribeFirstRankResponse Alibabacloud_OpenSearch20171225::Client::describeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

DescribeFirstRankResponse Alibabacloud_OpenSearch20171225::Client::describeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<string> name,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/first-ranks/") + string(*name))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFirstRankResponse(callApi(params, req, runtime));
}

DescribeInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::describeInterventionDictionary(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInterventionDictionaryWithOptions(name, headers, runtime);
}

DescribeInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::describeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInterventionDictionary"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInterventionDictionaryResponse(callApi(params, req, runtime));
}

DescribeModelResponse Alibabacloud_OpenSearch20171225::Client::describeModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeModelWithOptions(appGroupIdentity, modelName, headers, runtime);
}

DescribeModelResponse Alibabacloud_OpenSearch20171225::Client::describeModelWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                        shared_ptr<string> modelName,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeModelResponse(callApi(params, req, runtime));
}

DescribeQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::describeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

DescribeQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::describeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> appId,
                                                                                                          shared_ptr<string> name,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors/") + string(*name))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQueryProcessorResponse(callApi(params, req, runtime));
}

DescribeRegionResponse Alibabacloud_OpenSearch20171225::Client::describeRegion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionWithOptions(headers, runtime);
}

DescribeRegionResponse Alibabacloud_OpenSearch20171225::Client::describeRegionWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegion"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/region"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_OpenSearch20171225::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeRegionsResponse Alibabacloud_OpenSearch20171225::Client::describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::describeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

DescribeScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::describeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> taskId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  taskId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scheduled-tasks/") + string(*taskId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScheduledTaskResponse(callApi(params, req, runtime));
}

DescribeSecondRankResponse Alibabacloud_OpenSearch20171225::Client::describeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

DescribeSecondRankResponse Alibabacloud_OpenSearch20171225::Client::describeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> appId,
                                                                                                  shared_ptr<string> name,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/second-ranks/") + string(*name))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecondRankResponse(callApi(params, req, runtime));
}

DescribeSlowQueryStatusResponse Alibabacloud_OpenSearch20171225::Client::describeSlowQueryStatus(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSlowQueryStatusWithOptions(appGroupIdentity, headers, runtime);
}

DescribeSlowQueryStatusResponse Alibabacloud_OpenSearch20171225::Client::describeSlowQueryStatusWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowQueryStatus"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowQueryStatusResponse(callApi(params, req, runtime));
}

DescribeUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::describeUserAnalyzer(shared_ptr<string> name, shared_ptr<DescribeUserAnalyzerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserAnalyzerWithOptions(name, request, headers, runtime);
}

DescribeUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::describeUserAnalyzerWithOptions(shared_ptr<string> name,
                                                                                                      shared_ptr<DescribeUserAnalyzerRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->with)) {
    query->insert(pair<string, string>("with", *request->with));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(*name))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserAnalyzerResponse(callApi(params, req, runtime));
}

DisableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::disableSlowQuery(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

DisableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::disableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSlowQuery"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query/actions/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSlowQueryResponse(callApi(params, req, runtime));
}

EnableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::enableSlowQuery(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

EnableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::enableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSlowQuery"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query/actions/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSlowQueryResponse(callApi(params, req, runtime));
}

GenerateMergedTableResponse Alibabacloud_OpenSearch20171225::Client::generateMergedTable(shared_ptr<GenerateMergedTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateMergedTableWithOptions(request, headers, runtime);
}

GenerateMergedTableResponse Alibabacloud_OpenSearch20171225::Client::generateMergedTableWithOptions(shared_ptr<GenerateMergedTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateMergedTable"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/schema/actions/merge"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateMergedTableResponse(callApi(params, req, runtime));
}

GetDomainResponse Alibabacloud_OpenSearch20171225::Client::getDomain(shared_ptr<string> domainName, shared_ptr<GetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDomainWithOptions(domainName, request, headers, runtime);
}

GetDomainResponse Alibabacloud_OpenSearch20171225::Client::getDomainWithOptions(shared_ptr<string> domainName,
                                                                                shared_ptr<GetDomainRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  domainName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroupIdentity)) {
    query->insert(pair<string, string>("appGroupIdentity", *request->appGroupIdentity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDomain"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/domains/") + string(*domainName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDomainResponse(callApi(params, req, runtime));
}

GetFunctionCurrentVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionCurrentVersion(shared_ptr<string> functionName, shared_ptr<GetFunctionCurrentVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionCurrentVersionWithOptions(functionName, request, headers, runtime);
}

GetFunctionCurrentVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionCurrentVersionWithOptions(shared_ptr<string> functionName,
                                                                                                                shared_ptr<GetFunctionCurrentVersionRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    query->insert(pair<string, string>("functionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    query->insert(pair<string, string>("modelType", *request->modelType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionCurrentVersion"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/functions/") + string(*functionName) + string("/current-version"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionCurrentVersionResponse(callApi(params, req, runtime));
}

GetFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, headers, runtime);
}

GetFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                  shared_ptr<string> functionName,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionDefaultInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/default-instance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionDefaultInstanceResponse(callApi(params, req, runtime));
}

GetFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                                                         shared_ptr<string> functionName,
                                                                                         shared_ptr<string> instanceName,
                                                                                         shared_ptr<GetFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

GetFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> functionName,
                                                                                                    shared_ptr<string> instanceName,
                                                                                                    shared_ptr<GetFunctionInstanceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("output", *request->output));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionInstanceResponse(callApi(params, req, runtime));
}

GetFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::getFunctionTask(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> functionName,
                                                                                 shared_ptr<string> instanceName,
                                                                                 shared_ptr<string> generation) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

GetFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::getFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> functionName,
                                                                                            shared_ptr<string> instanceName,
                                                                                            shared_ptr<string> generation,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  generation = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(generation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName) + string("/tasks/") + string(*generation))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionTaskResponse(callApi(params, req, runtime));
}

GetFunctionVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionVersionWithOptions(functionName, versionId, headers, runtime);
}

GetFunctionVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> versionId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  versionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionVersion"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/functions/") + string(*functionName) + string("/versions/") + string(*versionId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionVersionResponse(callApi(params, req, runtime));
}

GetModelProgressResponse Alibabacloud_OpenSearch20171225::Client::getModelProgress(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModelProgressWithOptions(appGroupIdentity, modelName, headers, runtime);
}

GetModelProgressResponse Alibabacloud_OpenSearch20171225::Client::getModelProgressWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> modelName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelProgress"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName) + string("/progress"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModelProgressResponse(callApi(params, req, runtime));
}

GetModelReportResponse Alibabacloud_OpenSearch20171225::Client::getModelReport(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModelReportWithOptions(appGroupIdentity, modelName, headers, runtime);
}

GetModelReportResponse Alibabacloud_OpenSearch20171225::Client::getModelReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                          shared_ptr<string> modelName,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelReport"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName) + string("/report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModelReportResponse(callApi(params, req, runtime));
}

GetScriptFileNamesResponse Alibabacloud_OpenSearch20171225::Client::getScriptFileNames(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getScriptFileNamesWithOptions(appGroupIdentity, appVersionId, scriptName, headers, runtime);
}

GetScriptFileNamesResponse Alibabacloud_OpenSearch20171225::Client::getScriptFileNamesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> appVersionId,
                                                                                                  shared_ptr<string> scriptName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScriptFileNames"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/file-names"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScriptFileNamesResponse(callApi(params, req, runtime));
}

GetSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::getSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

GetSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::getSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<string> strategyName,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  strategyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/search-strategies/") + string(*strategyName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSearchStrategyResponse(callApi(params, req, runtime));
}

GetSortScriptResponse Alibabacloud_OpenSearch20171225::Client::getSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

GetSortScriptResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                        shared_ptr<string> scriptName,
                                                                                        shared_ptr<string> appVersionId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSortScriptResponse(callApi(params, req, runtime));
}

GetSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                     shared_ptr<string> scriptName,
                                                                                     shared_ptr<string> appVersionId,
                                                                                     shared_ptr<string> fileName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, headers, runtime);
}

GetSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<string> fileName,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  fileName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/files/src/") + string(*fileName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSortScriptFileResponse(callApi(params, req, runtime));
}

GetValidationErrorResponse Alibabacloud_OpenSearch20171225::Client::getValidationError(shared_ptr<string> appGroupIdentity, shared_ptr<GetValidationErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getValidationErrorWithOptions(appGroupIdentity, request, headers, runtime);
}

GetValidationErrorResponse Alibabacloud_OpenSearch20171225::Client::getValidationErrorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<GetValidationErrorRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->errorCode)) {
    query->insert(pair<string, string>("errorCode", *request->errorCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetValidationError"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/data/validation-error"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetValidationErrorResponse(callApi(params, req, runtime));
}

GetValidationReportResponse Alibabacloud_OpenSearch20171225::Client::getValidationReport(shared_ptr<string> appGroupIdentity, shared_ptr<GetValidationReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getValidationReportWithOptions(appGroupIdentity, request, headers, runtime);
}

GetValidationReportResponse Alibabacloud_OpenSearch20171225::Client::getValidationReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<GetValidationReportRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetValidationReport"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/data/validation-report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetValidationReportResponse(callApi(params, req, runtime));
}

ListABTestExperimentsResponse Alibabacloud_OpenSearch20171225::Client::listABTestExperiments(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestExperimentsWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

ListABTestExperimentsResponse Alibabacloud_OpenSearch20171225::Client::listABTestExperimentsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> sceneId,
                                                                                                        shared_ptr<string> groupId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestExperiments"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestExperimentsResponse(callApi(params, req, runtime));
}

ListABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::listABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                                                         shared_ptr<string> sceneId,
                                                                                                         shared_ptr<string> groupId,
                                                                                                         shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

ListABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::listABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                    shared_ptr<string> sceneId,
                                                                                                                    shared_ptr<string> groupId,
                                                                                                                    shared_ptr<string> experimentId,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  experimentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestFixedFlowDividers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments/") + string(*experimentId) + string("/fixed-flow-dividers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestFixedFlowDividersResponse(callApi(params, req, runtime));
}

ListABTestGroupsResponse Alibabacloud_OpenSearch20171225::Client::listABTestGroups(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestGroupsWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

ListABTestGroupsResponse Alibabacloud_OpenSearch20171225::Client::listABTestGroupsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> sceneId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestGroups"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestGroupsResponse(callApi(params, req, runtime));
}

ListABTestMetricsResponse Alibabacloud_OpenSearch20171225::Client::listABTestMetrics(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestMetricsWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

ListABTestMetricsResponse Alibabacloud_OpenSearch20171225::Client::listABTestMetricsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestMetrics"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestMetricsResponse(callApi(params, req, runtime));
}

ListABTestScenesResponse Alibabacloud_OpenSearch20171225::Client::listABTestScenes(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestScenesWithOptions(appGroupIdentity, headers, runtime);
}

ListABTestScenesResponse Alibabacloud_OpenSearch20171225::Client::listABTestScenesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestScenes"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestScenesResponse(callApi(params, req, runtime));
}

ListAppGroupErrorsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupErrors(shared_ptr<string> appGroupIdentity, shared_ptr<ListAppGroupErrorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppGroupErrorsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListAppGroupErrorsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupErrorsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<ListAppGroupErrorsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopTime)) {
    query->insert(pair<string, long>("stopTime", *request->stopTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppGroupErrors"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/errors"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppGroupErrorsResponse(callApi(params, req, runtime));
}

ListAppGroupMetricsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupMetrics(shared_ptr<string> appGroupIdentity, shared_ptr<ListAppGroupMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppGroupMetricsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListAppGroupMetricsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupMetricsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<ListAppGroupMetricsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexes)) {
    query->insert(pair<string, string>("indexes", *request->indexes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("metricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppGroupMetrics"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppGroupMetricsResponse(callApi(params, req, runtime));
}

ListAppGroupsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroups(shared_ptr<ListAppGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppGroupsWithOptions(request, headers, runtime);
}

ListAppGroupsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupsWithOptions(shared_ptr<ListAppGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->sortBy)) {
    query->insert(pair<string, long>("sortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppGroups"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppGroupsResponse(callApi(params, req, runtime));
}

ListAppsResponse Alibabacloud_OpenSearch20171225::Client::listApps(shared_ptr<ListAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppsWithOptions(request, headers, runtime);
}

ListAppsResponse Alibabacloud_OpenSearch20171225::Client::listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->group)) {
    query->insert(pair<string, bool>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApps"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/apps"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ListAppsResponse(callApi(params, req, runtime));
}

ListDataCollectionsResponse Alibabacloud_OpenSearch20171225::Client::listDataCollections(shared_ptr<string> appGroupIdentity, shared_ptr<ListDataCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataCollectionsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListDataCollectionsResponse Alibabacloud_OpenSearch20171225::Client::listDataCollectionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<ListDataCollectionsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListDataCollections"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/data-collections"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataCollectionsResponse(callApi(params, req, runtime));
}

ListDataSourceTableFieldsResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTableFields(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTableFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceTableFieldsWithOptions(dataSourceType, request, headers, runtime);
}

ListDataSourceTableFieldsResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTableFieldsWithOptions(shared_ptr<string> dataSourceType,
                                                                                                                shared_ptr<ListDataSourceTableFieldsRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  dataSourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceType));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceTableFields"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/data-sources/") + string(*dataSourceType) + string("/fields"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTableFieldsResponse(callApi(params, req, runtime));
}

ListDataSourceTablesResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTables(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceTablesWithOptions(dataSourceType, request, headers, runtime);
}

ListDataSourceTablesResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTablesWithOptions(shared_ptr<string> dataSourceType,
                                                                                                      shared_ptr<ListDataSourceTablesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  dataSourceType = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceType));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceTables"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/data-sources/") + string(*dataSourceType) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTablesResponse(callApi(params, req, runtime));
}

ListDeployedAlgorithmModelsResponse Alibabacloud_OpenSearch20171225::Client::listDeployedAlgorithmModels(shared_ptr<string> appGroupIdentity, shared_ptr<ListDeployedAlgorithmModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDeployedAlgorithmModelsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListDeployedAlgorithmModelsResponse Alibabacloud_OpenSearch20171225::Client::listDeployedAlgorithmModelsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                    shared_ptr<ListDeployedAlgorithmModelsRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmType)) {
    query->insert(pair<string, string>("algorithmType", *request->algorithmType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inServiceOnly)) {
    query->insert(pair<string, bool>("inServiceOnly", *request->inServiceOnly));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeployedAlgorithmModels"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/deployed-algorithm-models"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeployedAlgorithmModelsResponse(callApi(params, req, runtime));
}

ListFirstRanksResponse Alibabacloud_OpenSearch20171225::Client::listFirstRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFirstRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListFirstRanksResponse Alibabacloud_OpenSearch20171225::Client::listFirstRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                          shared_ptr<string> appId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFirstRanks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/first-ranks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFirstRanksResponse(callApi(params, req, runtime));
}

ListFunctionInstancesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionInstances(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<ListFunctionInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionInstancesWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

ListFunctionInstancesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionInstancesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> functionName,
                                                                                                        shared_ptr<ListFunctionInstancesRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    query->insert(pair<string, string>("functionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    query->insert(pair<string, string>("modelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionInstances"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionInstancesResponse(callApi(params, req, runtime));
}

ListFunctionTasksResponse Alibabacloud_OpenSearch20171225::Client::listFunctionTasks(shared_ptr<string> appGroupIdentity,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<string> instanceName,
                                                                                     shared_ptr<ListFunctionTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionTasksWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

ListFunctionTasksResponse Alibabacloud_OpenSearch20171225::Client::listFunctionTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> functionName,
                                                                                                shared_ptr<string> instanceName,
                                                                                                shared_ptr<ListFunctionTasksRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionTasks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionTasksResponse(callApi(params, req, runtime));
}

ListInterventionDictionariesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaries(shared_ptr<ListInterventionDictionariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionariesWithOptions(request, headers, runtime);
}

ListInterventionDictionariesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionariesWithOptions(shared_ptr<ListInterventionDictionariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterventionDictionaries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionariesResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryEntries(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryEntriesWithOptions(name, request, headers, runtime);
}

ListInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryEntriesWithOptions(shared_ptr<string> name,
                                                                                                                                shared_ptr<ListInterventionDictionaryEntriesRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->word)) {
    query->insert(pair<string, string>("word", *request->word));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterventionDictionaryEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name) + string("/entries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryEntriesResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryNerResultsResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryNerResults(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryNerResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryNerResultsWithOptions(name, request, headers, runtime);
}

ListInterventionDictionaryNerResultsResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryNerResultsWithOptions(shared_ptr<string> name,
                                                                                                                                      shared_ptr<ListInterventionDictionaryNerResultsRequest> request,
                                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterventionDictionaryNerResults"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name) + string("/ner-results"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryNerResultsResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryRelatedEntitiesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryRelatedEntities(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryRelatedEntitiesWithOptions(name, headers, runtime);
}

ListInterventionDictionaryRelatedEntitiesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryRelatedEntitiesWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterventionDictionaryRelatedEntities"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name) + string("/related"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryRelatedEntitiesResponse(callApi(params, req, runtime));
}

ListModelsResponse Alibabacloud_OpenSearch20171225::Client::listModels(shared_ptr<string> appGroupIdentity, shared_ptr<ListModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModelsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListModelsResponse Alibabacloud_OpenSearch20171225::Client::listModelsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                  shared_ptr<ListModelsRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListModels"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModelsResponse(callApi(params, req, runtime));
}

ListProceedingsResponse Alibabacloud_OpenSearch20171225::Client::listProceedings(shared_ptr<string> appGroupIdentity, shared_ptr<ListProceedingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProceedingsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListProceedingsResponse Alibabacloud_OpenSearch20171225::Client::listProceedingsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<ListProceedingsRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterFinished)) {
    query->insert(pair<string, bool>("filterFinished", *request->filterFinished));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProceedings"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/proceedings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProceedingsResponse(callApi(params, req, runtime));
}

ListQueryProcessorAnalyzerResultsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorAnalyzerResults(shared_ptr<string> appGroupIdentity,
                                                                                                                     shared_ptr<string> appId,
                                                                                                                     shared_ptr<string> name,
                                                                                                                     shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorAnalyzerResultsWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ListQueryProcessorAnalyzerResultsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorAnalyzerResultsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                                shared_ptr<string> appId,
                                                                                                                                shared_ptr<string> name,
                                                                                                                                shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueryProcessorAnalyzerResults"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors/") + string(*name) + string("/analyze"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryProcessorAnalyzerResultsResponse(callApi(params, req, runtime));
}

ListQueryProcessorNersResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorNers(shared_ptr<ListQueryProcessorNersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorNersWithOptions(request, headers, runtime);
}

ListQueryProcessorNersResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorNersWithOptions(shared_ptr<ListQueryProcessorNersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("domain", *request->domain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueryProcessorNers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/query-processor/ner/default-priorities"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryProcessorNersResponse(callApi(params, req, runtime));
}

ListQueryProcessorsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessors(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<ListQueryProcessorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

ListQueryProcessorsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> appId,
                                                                                                    shared_ptr<ListQueryProcessorsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->isActive)) {
    query->insert(pair<string, long>("isActive", *request->isActive));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueryProcessors"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryProcessorsResponse(callApi(params, req, runtime));
}

ListQuotaReviewTasksResponse Alibabacloud_OpenSearch20171225::Client::listQuotaReviewTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListQuotaReviewTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotaReviewTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

ListQuotaReviewTasksResponse Alibabacloud_OpenSearch20171225::Client::listQuotaReviewTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<ListQuotaReviewTasksRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListQuotaReviewTasks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/quota-review-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaReviewTasksResponse(callApi(params, req, runtime));
}

ListRamRolesResponse Alibabacloud_OpenSearch20171225::Client::listRamRoles() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRamRolesWithOptions(headers, runtime);
}

ListRamRolesResponse Alibabacloud_OpenSearch20171225::Client::listRamRolesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRamRoles"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/ram/roles"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRamRolesResponse(callApi(params, req, runtime));
}

ListScheduledTasksResponse Alibabacloud_OpenSearch20171225::Client::listScheduledTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListScheduledTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listScheduledTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

ListScheduledTasksResponse Alibabacloud_OpenSearch20171225::Client::listScheduledTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<ListScheduledTasksRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListScheduledTasks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scheduled-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScheduledTasksResponse(callApi(params, req, runtime));
}

ListSearchStrategiesResponse Alibabacloud_OpenSearch20171225::Client::listSearchStrategies(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchStrategiesWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSearchStrategiesResponse Alibabacloud_OpenSearch20171225::Client::listSearchStrategiesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchStrategies"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/search-strategies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchStrategiesResponse(callApi(params, req, runtime));
}

ListSecondRanksResponse Alibabacloud_OpenSearch20171225::Client::listSecondRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSecondRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSecondRanksResponse Alibabacloud_OpenSearch20171225::Client::listSecondRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecondRanks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/second-ranks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecondRanksResponse(callApi(params, req, runtime));
}

ListSlowQueryCategoriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryCategories(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSlowQueryCategoriesWithOptions(appGroupIdentity, headers, runtime);
}

ListSlowQueryCategoriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryCategoriesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlowQueryCategories"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query/categories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlowQueryCategoriesResponse(callApi(params, req, runtime));
}

ListSlowQueryQueriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryQueries(shared_ptr<string> appGroupIdentity, shared_ptr<string> categoryIndex) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSlowQueryQueriesWithOptions(appGroupIdentity, categoryIndex, headers, runtime);
}

ListSlowQueryQueriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryQueriesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> categoryIndex,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  categoryIndex = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(categoryIndex));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlowQueryQueries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query/categories/") + string(*categoryIndex) + string("/queries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlowQueryQueriesResponse(callApi(params, req, runtime));
}

ListSortExpressionsResponse Alibabacloud_OpenSearch20171225::Client::listSortExpressions(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSortExpressionsWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSortExpressionsResponse Alibabacloud_OpenSearch20171225::Client::listSortExpressionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> appId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSortExpressions"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/sort-expressions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSortExpressionsResponse(callApi(params, req, runtime));
}

ListSortScriptsResponse Alibabacloud_OpenSearch20171225::Client::listSortScripts(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSortScriptsWithOptions(appGroupIdentity, appVersionId, headers, runtime);
}

ListSortScriptsResponse Alibabacloud_OpenSearch20171225::Client::listSortScriptsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appVersionId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSortScripts"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSortScriptsResponse(callApi(params, req, runtime));
}

ListStatisticLogsResponse Alibabacloud_OpenSearch20171225::Client::listStatisticLogs(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatisticLogsWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

ListStatisticLogsResponse Alibabacloud_OpenSearch20171225::Client::listStatisticLogsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> moduleName,
                                                                                                shared_ptr<ListStatisticLogsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  moduleName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columns)) {
    query->insert(pair<string, string>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->distinct)) {
    query->insert(pair<string, bool>("distinct", *request->distinct));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("sortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopTime)) {
    query->insert(pair<string, long>("stopTime", *request->stopTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStatisticLogs"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/statistic-logs/") + string(*moduleName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStatisticLogsResponse(callApi(params, req, runtime));
}

ListStatisticReportResponse Alibabacloud_OpenSearch20171225::Client::listStatisticReport(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatisticReportWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

ListStatisticReportResponse Alibabacloud_OpenSearch20171225::Client::listStatisticReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> moduleName,
                                                                                                    shared_ptr<ListStatisticReportRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  moduleName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columns)) {
    query->insert(pair<string, string>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStatisticReport"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/statistic-report/") + string(*moduleName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStatisticReportResponse(callApi(params, req, runtime));
}

ListUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzerEntries(shared_ptr<string> name, shared_ptr<ListUserAnalyzerEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserAnalyzerEntriesWithOptions(name, request, headers, runtime);
}

ListUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzerEntriesWithOptions(shared_ptr<string> name,
                                                                                                            shared_ptr<ListUserAnalyzerEntriesRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->word)) {
    query->insert(pair<string, string>("word", *request->word));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserAnalyzerEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(*name) + string("/entries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserAnalyzerEntriesResponse(callApi(params, req, runtime));
}

ListUserAnalyzersResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzers(shared_ptr<ListUserAnalyzersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserAnalyzersWithOptions(request, headers, runtime);
}

ListUserAnalyzersResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzersWithOptions(shared_ptr<ListUserAnalyzersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListUserAnalyzers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserAnalyzersResponse(callApi(params, req, runtime));
}

ModifyAppGroupResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

ModifyAppGroupResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppGroupResponse(callApi(params, req, runtime));
}

ModifyAppGroupQuotaResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupQuota(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAppGroupQuotaWithOptions(appGroupIdentity, headers, runtime);
}

ModifyAppGroupQuotaResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupQuotaWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppGroupQuota"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/quota"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppGroupQuotaResponse(callApi(params, req, runtime));
}

ModifyFirstRankResponse Alibabacloud_OpenSearch20171225::Client::modifyFirstRank(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> appId,
                                                                                 shared_ptr<string> name,
                                                                                 shared_ptr<ModifyFirstRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyFirstRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ModifyFirstRankResponse Alibabacloud_OpenSearch20171225::Client::modifyFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<string> name,
                                                                                            shared_ptr<ModifyFirstRankRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/first-ranks/") + string(*name))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFirstRankResponse(callApi(params, req, runtime));
}

ModifyModelResponse Alibabacloud_OpenSearch20171225::Client::modifyModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyModelWithOptions(appGroupIdentity, modelName, headers, runtime);
}

ModifyModelResponse Alibabacloud_OpenSearch20171225::Client::modifyModelWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                    shared_ptr<string> modelName,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyModelResponse(callApi(params, req, runtime));
}

ModifyQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::modifyQueryProcessor(shared_ptr<string> appGroupIdentity,
                                                                                           shared_ptr<string> appId,
                                                                                           shared_ptr<string> name,
                                                                                           shared_ptr<ModifyQueryProcessorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyQueryProcessorWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ModifyQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::modifyQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> name,
                                                                                                      shared_ptr<ModifyQueryProcessorRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors/") + string(*name))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyQueryProcessorResponse(callApi(params, req, runtime));
}

ModifyScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::modifyScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

ModifyScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::modifyScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> taskId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  taskId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scheduled-tasks/") + string(*taskId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScheduledTaskResponse(callApi(params, req, runtime));
}

ModifySecondRankResponse Alibabacloud_OpenSearch20171225::Client::modifySecondRank(shared_ptr<string> appGroupIdentity,
                                                                                   shared_ptr<string> appId,
                                                                                   shared_ptr<string> name,
                                                                                   shared_ptr<ModifySecondRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifySecondRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ModifySecondRankResponse Alibabacloud_OpenSearch20171225::Client::modifySecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<string> name,
                                                                                              shared_ptr<ModifySecondRankRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/second-ranks/") + string(*name))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecondRankResponse(callApi(params, req, runtime));
}

PreviewModelResponse Alibabacloud_OpenSearch20171225::Client::previewModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName, shared_ptr<PreviewModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return previewModelWithOptions(appGroupIdentity, modelName, request, headers, runtime);
}

PreviewModelResponse Alibabacloud_OpenSearch20171225::Client::previewModelWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                      shared_ptr<string> modelName,
                                                                                      shared_ptr<PreviewModelRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreviewModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName) + string("/actions/preview"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreviewModelResponse(callApi(params, req, runtime));
}

PushInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushInterventionDictionaryEntries(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushInterventionDictionaryEntriesWithOptions(name, headers, runtime);
}

PushInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushInterventionDictionaryEntriesWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushInterventionDictionaryEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name) + string("/entries/actions/bulk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushInterventionDictionaryEntriesResponse(callApi(params, req, runtime));
}

PushUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushUserAnalyzerEntries(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushUserAnalyzerEntriesWithOptions(name, headers, runtime);
}

PushUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushUserAnalyzerEntriesWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushUserAnalyzerEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(*name) + string("/entries/actions/bulk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushUserAnalyzerEntriesResponse(callApi(params, req, runtime));
}

RankPreviewQueryResponse Alibabacloud_OpenSearch20171225::Client::rankPreviewQuery(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rankPreviewQueryWithOptions(appGroupIdentity, modelName, headers, runtime);
}

RankPreviewQueryResponse Alibabacloud_OpenSearch20171225::Client::rankPreviewQueryWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> modelName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RankPreviewQuery"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName) + string("/actions/query-rank"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RankPreviewQueryResponse(callApi(params, req, runtime));
}

ReleaseSortScriptResponse Alibabacloud_OpenSearch20171225::Client::releaseSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

ReleaseSortScriptResponse Alibabacloud_OpenSearch20171225::Client::releaseSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/actions/release"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseSortScriptResponse(callApi(params, req, runtime));
}

RemoveAppResponse Alibabacloud_OpenSearch20171225::Client::removeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

RemoveAppResponse Alibabacloud_OpenSearch20171225::Client::removeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                shared_ptr<string> appId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppResponse(callApi(params, req, runtime));
}

RemoveAppGroupResponse Alibabacloud_OpenSearch20171225::Client::removeAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

RemoveAppGroupResponse Alibabacloud_OpenSearch20171225::Client::removeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppGroupResponse(callApi(params, req, runtime));
}

RemoveDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::removeDataCollection(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeDataCollectionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

RemoveDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::removeDataCollectionWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> dataCollectionIdentity,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  dataCollectionIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataCollectionIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDataCollection"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/data-collections/") + string(*dataCollectionIdentity))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDataCollectionResponse(callApi(params, req, runtime));
}

RemoveFirstRankResponse Alibabacloud_OpenSearch20171225::Client::removeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveFirstRankResponse Alibabacloud_OpenSearch20171225::Client::removeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<string> name,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/first-ranks/") + string(*name))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFirstRankResponse(callApi(params, req, runtime));
}

RemoveInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::removeInterventionDictionary(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeInterventionDictionaryWithOptions(name, headers, runtime);
}

RemoveInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::removeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInterventionDictionary"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(*name))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveInterventionDictionaryResponse(callApi(params, req, runtime));
}

RemoveQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::removeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::removeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> name,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/query-processors/") + string(*name))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveQueryProcessorResponse(callApi(params, req, runtime));
}

RemoveScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::removeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

RemoveScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::removeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> taskId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  taskId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scheduled-tasks/") + string(*taskId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveScheduledTaskResponse(callApi(params, req, runtime));
}

RemoveSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::removeSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

RemoveSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::removeSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> strategyName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  strategyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/search-strategies/") + string(*strategyName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSearchStrategyResponse(callApi(params, req, runtime));
}

RemoveSecondRankResponse Alibabacloud_OpenSearch20171225::Client::removeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveSecondRankResponse Alibabacloud_OpenSearch20171225::Client::removeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<string> name,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/second-ranks/") + string(*name))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSecondRankResponse(callApi(params, req, runtime));
}

RemoveUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::removeUserAnalyzer(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeUserAnalyzerWithOptions(name, headers, runtime);
}

RemoveUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::removeUserAnalyzerWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  name = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(*name))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserAnalyzerResponse(callApi(params, req, runtime));
}

RenewAppGroupResponse Alibabacloud_OpenSearch20171225::Client::renewAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

RenewAppGroupResponse Alibabacloud_OpenSearch20171225::Client::renewAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/actions/renew"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewAppGroupResponse(callApi(params, req, runtime));
}

ReplaceAppGroupCommodityCodeResponse Alibabacloud_OpenSearch20171225::Client::replaceAppGroupCommodityCode(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return replaceAppGroupCommodityCodeWithOptions(appGroupIdentity, headers, runtime);
}

ReplaceAppGroupCommodityCodeResponse Alibabacloud_OpenSearch20171225::Client::replaceAppGroupCommodityCodeWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceAppGroupCommodityCode"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/actions/to-instance-typed"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceAppGroupCommodityCodeResponse(callApi(params, req, runtime));
}

SaveSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::saveSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                       shared_ptr<string> scriptName,
                                                                                       shared_ptr<string> appVersionId,
                                                                                       shared_ptr<string> fileName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return saveSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, headers, runtime);
}

SaveSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::saveSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> scriptName,
                                                                                                  shared_ptr<string> appVersionId,
                                                                                                  shared_ptr<string> fileName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  fileName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName) + string("/files/src/") + string(*fileName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSortScriptFileResponse(callApi(params, req, runtime));
}

StartSlowQueryAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::startSlowQueryAnalyzer(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startSlowQueryAnalyzerWithOptions(appGroupIdentity, headers, runtime);
}

StartSlowQueryAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::startSlowQueryAnalyzerWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSlowQueryAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/optimizers/slow-query/actions/run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSlowQueryAnalyzerResponse(callApi(params, req, runtime));
}

TrainModelResponse Alibabacloud_OpenSearch20171225::Client::trainModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return trainModelWithOptions(appGroupIdentity, modelName, headers, runtime);
}

TrainModelResponse Alibabacloud_OpenSearch20171225::Client::trainModelWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                  shared_ptr<string> modelName,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  modelName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainModel"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/algorithm/models/") + string(*modelName) + string("/actions/train"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainModelResponse(callApi(params, req, runtime));
}

UnbindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::unbindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, headers, runtime);
}

UnbindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::unbindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> esInstanceId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  esInstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(esInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindESUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/es/") + string(*esInstanceId) + string("/actions/unbind-analyzer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindESUserAnalyzerResponse(callApi(params, req, runtime));
}

UnbindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::unbindEsInstance(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindEsInstanceWithOptions(appGroupIdentity, headers, runtime);
}

UnbindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::unbindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindEsInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/actions/unbind-es-instance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindEsInstanceResponse(callApi(params, req, runtime));
}

UpdateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::updateABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> sceneId,
                                                                                               shared_ptr<string> groupId,
                                                                                               shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

UpdateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::updateABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<string> experimentId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  experimentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments/") + string(*experimentId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestExperimentResponse(callApi(params, req, runtime));
}

UpdateABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::updateABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                                                             shared_ptr<string> sceneId,
                                                                                                             shared_ptr<string> groupId,
                                                                                                             shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

UpdateABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::updateABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                        shared_ptr<string> sceneId,
                                                                                                                        shared_ptr<string> groupId,
                                                                                                                        shared_ptr<string> experimentId,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  experimentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestFixedFlowDividers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId) + string("/experiments/") + string(*experimentId) + string("/fixed-flow-dividers"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestFixedFlowDividersResponse(callApi(params, req, runtime));
}

UpdateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::updateABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

UpdateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::updateABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  groupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId) + string("/groups/") + string(*groupId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestGroupResponse(callApi(params, req, runtime));
}

UpdateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::updateABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

UpdateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::updateABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  sceneId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/scenes/") + string(*sceneId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestSceneResponse(callApi(params, req, runtime));
}

UpdateFetchFieldsResponse Alibabacloud_OpenSearch20171225::Client::updateFetchFields(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateFetchFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFetchFieldsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

UpdateFetchFieldsResponse Alibabacloud_OpenSearch20171225::Client::updateFetchFieldsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<UpdateFetchFieldsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFetchFields"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/fetch-fields"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFetchFieldsResponse(callApi(params, req, runtime));
}

UpdateFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<UpdateFunctionDefaultInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

UpdateFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                        shared_ptr<string> functionName,
                                                                                                                        shared_ptr<UpdateFunctionDefaultInstanceRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("instanceName", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunctionDefaultInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/default-instance"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionDefaultInstanceResponse(callApi(params, req, runtime));
}

UpdateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<string> instanceName,
                                                                                               shared_ptr<UpdateFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

UpdateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> instanceName,
                                                                                                          shared_ptr<UpdateFunctionInstanceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  instanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateFunctionInstanceRequestCreateParameters>>(request->createParameters)) {
    body->insert(pair<string, vector<UpdateFunctionInstanceRequestCreateParameters>>("createParameters", *request->createParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cron)) {
    body->insert(pair<string, string>("cron", *request->cron));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateFunctionInstanceRequestUsageParameters>>(request->usageParameters)) {
    body->insert(pair<string, vector<UpdateFunctionInstanceRequestUsageParameters>>("usageParameters", *request->usageParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunctionInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/functions/") + string(*functionName) + string("/instances/") + string(*instanceName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionInstanceResponse(callApi(params, req, runtime));
}

UpdateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::updateSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

UpdateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::updateSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> strategyName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  strategyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/search-strategies/") + string(*strategyName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSearchStrategyResponse(callApi(params, req, runtime));
}

UpdateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::updateSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSortScriptWithOptions(appGroupIdentity, appVersionId, scriptName, headers, runtime);
}

UpdateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::updateSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<string> scriptName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appVersionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId));
  scriptName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appVersionId) + string("/sort-scripts/") + string(*scriptName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSortScriptResponse(callApi(params, req, runtime));
}

UpdateSummariesResponse Alibabacloud_OpenSearch20171225::Client::updateSummaries(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateSummariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSummariesWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

UpdateSummariesResponse Alibabacloud_OpenSearch20171225::Client::updateSummariesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<UpdateSummariesRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  appGroupIdentity = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity));
  appId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSummaries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(*appGroupIdentity) + string("/apps/") + string(*appId) + string("/summaries"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSummariesResponse(callApi(params, req, runtime));
}

ValidateDataSourcesResponse Alibabacloud_OpenSearch20171225::Client::validateDataSources() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateDataSourcesWithOptions(headers, runtime);
}

ValidateDataSourcesResponse Alibabacloud_OpenSearch20171225::Client::validateDataSourcesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateDataSources"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/data-sources/validations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateDataSourcesResponse(callApi(params, req, runtime));
}

