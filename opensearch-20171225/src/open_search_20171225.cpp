// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/open_search_20171225.hpp>
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

BindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::bindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> esInstanceId,
                                                                                                  shared_ptr<BindESUserAnalyzerRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindESUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/es/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(esInstanceId)) + string("/actions/bind-analyzer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindESUserAnalyzerResponse(callApi(params, req, runtime));
}

BindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::bindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId, shared_ptr<BindESUserAnalyzerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, request, headers, runtime);
}

BindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::bindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                          shared_ptr<BindEsInstanceRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindEsInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/actions/bind-es-instance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindEsInstanceResponse(callApi(params, req, runtime));
}

BindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::bindEsInstance(shared_ptr<string> appGroupIdentity, shared_ptr<BindEsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindEsInstanceWithOptions(appGroupIdentity, request, headers, runtime);
}

CompileSortScriptResponse Alibabacloud_OpenSearch20171225::Client::compileSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompileSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/actions/compiling"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompileSortScriptResponse(callApi(params, req, runtime));
}

CompileSortScriptResponse Alibabacloud_OpenSearch20171225::Client::compileSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return compileSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

CreateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::createABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<CreateABTestExperimentRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestExperimentResponse(callApi(params, req, runtime));
}

CreateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::createABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> sceneId,
                                                                                               shared_ptr<string> groupId,
                                                                                               shared_ptr<CreateABTestExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, request, headers, runtime);
}

CreateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::createABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<CreateABTestGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestGroupResponse(callApi(params, req, runtime));
}

CreateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::createABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<CreateABTestGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestGroupWithOptions(appGroupIdentity, sceneId, request, headers, runtime);
}

CreateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::createABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<CreateABTestSceneRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABTestSceneResponse(callApi(params, req, runtime));
}

CreateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::createABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<CreateABTestSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABTestSceneWithOptions(appGroupIdentity, request, headers, runtime);
}

CreateAppResponse Alibabacloud_OpenSearch20171225::Client::createAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                shared_ptr<CreateAppRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoSwitch)) {
    body->insert(pair<string, bool>("autoSwitch", *request->autoSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestCluster>(request->cluster)) {
    body->insert(pair<string, CreateAppRequestCluster>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestDataSources>>(request->dataSources)) {
    body->insert(pair<string, vector<CreateAppRequestDataSources>>("dataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestDomain>(request->domain)) {
    body->insert(pair<string, CreateAppRequestDomain>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fetchFields)) {
    body->insert(pair<string, vector<string>>("fetchFields", *request->fetchFields));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestFirstRanks>>(request->firstRanks)) {
    body->insert(pair<string, vector<CreateAppRequestFirstRanks>>("firstRanks", *request->firstRanks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestQueryProcessors>>(request->queryProcessors)) {
    body->insert(pair<string, vector<CreateAppRequestQueryProcessors>>("queryProcessors", *request->queryProcessors));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestSchema>(request->schema)) {
    body->insert(pair<string, CreateAppRequestSchema>("schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestSchemas>>(request->schemas)) {
    body->insert(pair<string, vector<CreateAppRequestSchemas>>("schemas", *request->schemas));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestSecondRanks>>(request->secondRanks)) {
    body->insert(pair<string, vector<CreateAppRequestSecondRanks>>("secondRanks", *request->secondRanks));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestSummaries>>(request->summaries)) {
    body->insert(pair<string, vector<CreateAppRequestSummaries>>("summaries", *request->summaries));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_OpenSearch20171225::Client::createApp(shared_ptr<string> appGroupIdentity, shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppWithOptions(appGroupIdentity, request, headers, runtime);
}

CreateAppGroupResponse Alibabacloud_OpenSearch20171225::Client::createAppGroupWithOptions(shared_ptr<CreateAppGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("chargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppGroupRequestQuota>(request->quota)) {
    body->insert(pair<string, CreateAppGroupRequestQuota>("quota", *request->quota));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppGroupRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateAppGroupRequestTags>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
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

CreateAppGroupResponse Alibabacloud_OpenSearch20171225::Client::createAppGroup(shared_ptr<CreateAppGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppGroupWithOptions(request, headers, runtime);
}

CreateAppGroupCredentialsResponse Alibabacloud_OpenSearch20171225::Client::createAppGroupCredentialsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                shared_ptr<CreateAppGroupCredentialsRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppGroupCredentials"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/credentials"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppGroupCredentialsResponse(callApi(params, req, runtime));
}

CreateAppGroupCredentialsResponse Alibabacloud_OpenSearch20171225::Client::createAppGroupCredentials(shared_ptr<string> appGroupIdentity, shared_ptr<CreateAppGroupCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppGroupCredentialsWithOptions(appGroupIdentity, request, headers, runtime);
}

CreateFirstRankResponse Alibabacloud_OpenSearch20171225::Client::createFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<CreateFirstRankRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/first-ranks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFirstRankResponse(callApi(params, req, runtime));
}

CreateFirstRankResponse Alibabacloud_OpenSearch20171225::Client::createFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateFirstRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFirstRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<CreateFunctionInstanceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionInstanceResponse(callApi(params, req, runtime));
}

CreateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<CreateFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

CreateFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionResourceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<CreateFunctionResourceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateFunctionResourceRequestData>(request->data)) {
    body->insert(pair<string, CreateFunctionResourceRequestData>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    body->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunctionResource"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionResourceResponse(callApi(params, req, runtime));
}

CreateFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::createFunctionResource(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<CreateFunctionResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionResourceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

CreateFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::createFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> instanceName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)) + string("/tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionTaskResponse(callApi(params, req, runtime));
}

CreateFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::createFunctionTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

CreateInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::createInterventionDictionaryWithOptions(shared_ptr<CreateInterventionDictionaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analyzerType)) {
    body->insert(pair<string, string>("analyzerType", *request->analyzerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
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

CreateInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::createInterventionDictionary(shared_ptr<CreateInterventionDictionaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInterventionDictionaryWithOptions(request, headers, runtime);
}

CreateQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::createQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<CreateQueryProcessorRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueryProcessorResponse(callApi(params, req, runtime));
}

CreateQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::createQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateQueryProcessorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createQueryProcessorWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::createScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<CreateScheduledTaskRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scheduled-tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduledTaskResponse(callApi(params, req, runtime));
}

CreateScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::createScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<CreateScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createScheduledTaskWithOptions(appGroupIdentity, request, headers, runtime);
}

CreateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::createSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<CreateSearchStrategyRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/search-strategies"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchStrategyResponse(callApi(params, req, runtime));
}

CreateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::createSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateSearchStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSearchStrategyWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateSecondRankResponse Alibabacloud_OpenSearch20171225::Client::createSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<CreateSecondRankRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/second-ranks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecondRankResponse(callApi(params, req, runtime));
}

CreateSecondRankResponse Alibabacloud_OpenSearch20171225::Client::createSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateSecondRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSecondRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

CreateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::createSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<CreateSortScriptRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    body->insert(pair<string, string>("scriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSortScriptResponse(callApi(params, req, runtime));
}

CreateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::createSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<CreateSortScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSortScriptWithOptions(appGroupIdentity, appVersionId, request, headers, runtime);
}

CreateUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::createUserAnalyzerWithOptions(shared_ptr<CreateUserAnalyzerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->business)) {
    body->insert(pair<string, string>("business", *request->business));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessAppGroupId)) {
    body->insert(pair<string, string>("businessAppGroupId", *request->businessAppGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("businessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
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

CreateUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::createUserAnalyzer(shared_ptr<CreateUserAnalyzerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserAnalyzerWithOptions(request, headers, runtime);
}

DeleteABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<string> experimentId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestExperimentResponse(callApi(params, req, runtime));
}

DeleteABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> sceneId,
                                                                                               shared_ptr<string> groupId,
                                                                                               shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

DeleteABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestGroupResponse(callApi(params, req, runtime));
}

DeleteABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

DeleteABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABTestSceneResponse(callApi(params, req, runtime));
}

DeleteABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::deleteABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

DeleteFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> instanceName,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionInstanceResponse(callApi(params, req, runtime));
}

DeleteFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

DeleteFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionResourceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> resourceName,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionResource"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionResourceResponse(callApi(params, req, runtime));
}

DeleteFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionResource(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> resourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, headers, runtime);
}

DeleteFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> instanceName,
                                                                                                  shared_ptr<string> generation,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(generation)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionTaskResponse(callApi(params, req, runtime));
}

DeleteFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::deleteFunctionTask(shared_ptr<string> appGroupIdentity,
                                                                                       shared_ptr<string> functionName,
                                                                                       shared_ptr<string> instanceName,
                                                                                       shared_ptr<string> generation) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

DeleteSortScriptResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> scriptName,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSortScriptResponse(callApi(params, req, runtime));
}

DeleteSortScriptResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

DeleteSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appVersionId,
                                                                                                      shared_ptr<string> scriptName,
                                                                                                      shared_ptr<string> fileName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/files/src/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSortScriptFileResponse(callApi(params, req, runtime));
}

DeleteSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::deleteSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                           shared_ptr<string> appVersionId,
                                                                                           shared_ptr<string> scriptName,
                                                                                           shared_ptr<string> fileName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSortScriptFileWithOptions(appGroupIdentity, appVersionId, scriptName, fileName, headers, runtime);
}

DescribeABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::describeABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                              shared_ptr<string> sceneId,
                                                                                                              shared_ptr<string> groupId,
                                                                                                              shared_ptr<string> experimentId,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestExperimentResponse(callApi(params, req, runtime));
}

DescribeABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::describeABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                                   shared_ptr<string> sceneId,
                                                                                                   shared_ptr<string> groupId,
                                                                                                   shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

DescribeABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::describeABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> sceneId,
                                                                                                    shared_ptr<string> groupId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestGroupResponse(callApi(params, req, runtime));
}

DescribeABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::describeABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

DescribeABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::describeABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> sceneId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeABTestSceneResponse(callApi(params, req, runtime));
}

DescribeABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::describeABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

DescribeAppResponse Alibabacloud_OpenSearch20171225::Client::describeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                    shared_ptr<string> appId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppResponse(callApi(params, req, runtime));
}

DescribeAppResponse Alibabacloud_OpenSearch20171225::Client::describeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

DescribeAppGroupResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppGroupResponse(callApi(params, req, runtime));
}

DescribeAppGroupResponse Alibabacloud_OpenSearch20171225::Client::describeAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

DescribeAppStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppStatisticsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> appId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppStatistics"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/statistics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppStatisticsResponse(callApi(params, req, runtime));
}

DescribeAppStatisticsResponse Alibabacloud_OpenSearch20171225::Client::describeAppStatistics(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppStatisticsWithOptions(appGroupIdentity, appId, headers, runtime);
}

DescribeAppsResponse Alibabacloud_OpenSearch20171225::Client::describeAppsWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsResponse(callApi(params, req, runtime));
}

DescribeAppsResponse Alibabacloud_OpenSearch20171225::Client::describeApps(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppsWithOptions(appGroupIdentity, headers, runtime);
}

DescribeDataCollctionResponse Alibabacloud_OpenSearch20171225::Client::describeDataCollctionWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> dataCollectionIdentity,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCollction"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/data-collections/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataCollectionIdentity)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCollctionResponse(callApi(params, req, runtime));
}

DescribeDataCollctionResponse Alibabacloud_OpenSearch20171225::Client::describeDataCollction(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDataCollctionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

DescribeFirstRankResponse Alibabacloud_OpenSearch20171225::Client::describeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<string> name,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/first-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFirstRankResponse(callApi(params, req, runtime));
}

DescribeFirstRankResponse Alibabacloud_OpenSearch20171225::Client::describeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

DescribeInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::describeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInterventionDictionary"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInterventionDictionaryResponse(callApi(params, req, runtime));
}

DescribeInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::describeInterventionDictionary(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInterventionDictionaryWithOptions(name, headers, runtime);
}

DescribeQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::describeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> appId,
                                                                                                          shared_ptr<string> name,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQueryProcessorResponse(callApi(params, req, runtime));
}

DescribeQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::describeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
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

DescribeRegionsResponse Alibabacloud_OpenSearch20171225::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::describeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> taskId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scheduled-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScheduledTaskResponse(callApi(params, req, runtime));
}

DescribeScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::describeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

DescribeSecondRankResponse Alibabacloud_OpenSearch20171225::Client::describeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> appId,
                                                                                                  shared_ptr<string> name,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/second-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecondRankResponse(callApi(params, req, runtime));
}

DescribeSecondRankResponse Alibabacloud_OpenSearch20171225::Client::describeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

DescribeSlowQueryStatusResponse Alibabacloud_OpenSearch20171225::Client::describeSlowQueryStatusWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowQueryStatus"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowQueryStatusResponse(callApi(params, req, runtime));
}

DescribeSlowQueryStatusResponse Alibabacloud_OpenSearch20171225::Client::describeSlowQueryStatus(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSlowQueryStatusWithOptions(appGroupIdentity, headers, runtime);
}

DescribeUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::describeUserAnalyzerWithOptions(shared_ptr<string> name,
                                                                                                      shared_ptr<DescribeUserAnalyzerRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserAnalyzerResponse(callApi(params, req, runtime));
}

DescribeUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::describeUserAnalyzer(shared_ptr<string> name, shared_ptr<DescribeUserAnalyzerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserAnalyzerWithOptions(name, request, headers, runtime);
}

DisableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::disableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSlowQuery"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query/actions/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSlowQueryResponse(callApi(params, req, runtime));
}

DisableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::disableSlowQuery(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

EnableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::enableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSlowQuery"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query/actions/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSlowQueryResponse(callApi(params, req, runtime));
}

EnableSlowQueryResponse Alibabacloud_OpenSearch20171225::Client::enableSlowQuery(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

GenerateMergedTableResponse Alibabacloud_OpenSearch20171225::Client::generateMergedTableWithOptions(shared_ptr<GenerateMergedTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
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

GenerateMergedTableResponse Alibabacloud_OpenSearch20171225::Client::generateMergedTable(shared_ptr<GenerateMergedTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateMergedTableWithOptions(request, headers, runtime);
}

GetDomainResponse Alibabacloud_OpenSearch20171225::Client::getDomainWithOptions(shared_ptr<string> domainName,
                                                                                shared_ptr<GetDomainRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDomainResponse(callApi(params, req, runtime));
}

GetDomainResponse Alibabacloud_OpenSearch20171225::Client::getDomain(shared_ptr<string> domainName, shared_ptr<GetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDomainWithOptions(domainName, request, headers, runtime);
}

GetFunctionCurrentVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionCurrentVersionWithOptions(shared_ptr<string> functionName,
                                                                                                                shared_ptr<GetFunctionCurrentVersionRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/current-version"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionCurrentVersionResponse(callApi(params, req, runtime));
}

GetFunctionCurrentVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionCurrentVersion(shared_ptr<string> functionName, shared_ptr<GetFunctionCurrentVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionCurrentVersionWithOptions(functionName, request, headers, runtime);
}

GetFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                  shared_ptr<string> functionName,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionDefaultInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/default-instance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionDefaultInstanceResponse(callApi(params, req, runtime));
}

GetFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, headers, runtime);
}

GetFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> functionName,
                                                                                                    shared_ptr<string> instanceName,
                                                                                                    shared_ptr<GetFunctionInstanceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionInstanceResponse(callApi(params, req, runtime));
}

GetFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                                                         shared_ptr<string> functionName,
                                                                                         shared_ptr<string> instanceName,
                                                                                         shared_ptr<GetFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

GetFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionResourceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> functionName,
                                                                                                    shared_ptr<string> resourceName,
                                                                                                    shared_ptr<GetFunctionResourceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("output", *request->output));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionResource"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionResourceResponse(callApi(params, req, runtime));
}

GetFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::getFunctionResource(shared_ptr<string> appGroupIdentity,
                                                                                         shared_ptr<string> functionName,
                                                                                         shared_ptr<string> resourceName,
                                                                                         shared_ptr<GetFunctionResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, request, headers, runtime);
}

GetFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::getFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> functionName,
                                                                                            shared_ptr<string> instanceName,
                                                                                            shared_ptr<string> generation,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(generation)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionTaskResponse(callApi(params, req, runtime));
}

GetFunctionTaskResponse Alibabacloud_OpenSearch20171225::Client::getFunctionTask(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> functionName,
                                                                                 shared_ptr<string> instanceName,
                                                                                 shared_ptr<string> generation) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

GetFunctionVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                                                  shared_ptr<string> versionId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionVersion"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionVersionResponse(callApi(params, req, runtime));
}

GetFunctionVersionResponse Alibabacloud_OpenSearch20171225::Client::getFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionVersionWithOptions(functionName, versionId, headers, runtime);
}

GetScriptFileNamesResponse Alibabacloud_OpenSearch20171225::Client::getScriptFileNamesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> appVersionId,
                                                                                                  shared_ptr<string> scriptName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScriptFileNames"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/file-names"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScriptFileNamesResponse(callApi(params, req, runtime));
}

GetScriptFileNamesResponse Alibabacloud_OpenSearch20171225::Client::getScriptFileNames(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getScriptFileNamesWithOptions(appGroupIdentity, appVersionId, scriptName, headers, runtime);
}

GetSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::getSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<string> strategyName,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/search-strategies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSearchStrategyResponse(callApi(params, req, runtime));
}

GetSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::getSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

GetSortScriptResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                        shared_ptr<string> scriptName,
                                                                                        shared_ptr<string> appVersionId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSortScriptResponse(callApi(params, req, runtime));
}

GetSortScriptResponse Alibabacloud_OpenSearch20171225::Client::getSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

GetSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<string> fileName,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/files/src/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSortScriptFileResponse(callApi(params, req, runtime));
}

GetSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::getSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                     shared_ptr<string> scriptName,
                                                                                     shared_ptr<string> appVersionId,
                                                                                     shared_ptr<string> fileName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, headers, runtime);
}

ListABTestExperimentsResponse Alibabacloud_OpenSearch20171225::Client::listABTestExperimentsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> sceneId,
                                                                                                        shared_ptr<string> groupId,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestExperiments"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestExperimentsResponse(callApi(params, req, runtime));
}

ListABTestExperimentsResponse Alibabacloud_OpenSearch20171225::Client::listABTestExperiments(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestExperimentsWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

ListABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::listABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                    shared_ptr<string> sceneId,
                                                                                                                    shared_ptr<string> groupId,
                                                                                                                    shared_ptr<string> experimentId,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestFixedFlowDividers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId)) + string("/fixed-flow-dividers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestFixedFlowDividersResponse(callApi(params, req, runtime));
}

ListABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::listABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                                                         shared_ptr<string> sceneId,
                                                                                                         shared_ptr<string> groupId,
                                                                                                         shared_ptr<string> experimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

ListABTestGroupsResponse Alibabacloud_OpenSearch20171225::Client::listABTestGroupsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> sceneId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestGroups"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestGroupsResponse(callApi(params, req, runtime));
}

ListABTestGroupsResponse Alibabacloud_OpenSearch20171225::Client::listABTestGroups(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestGroupsWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

ListABTestScenesResponse Alibabacloud_OpenSearch20171225::Client::listABTestScenesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABTestScenes"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABTestScenesResponse(callApi(params, req, runtime));
}

ListABTestScenesResponse Alibabacloud_OpenSearch20171225::Client::listABTestScenes(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABTestScenesWithOptions(appGroupIdentity, headers, runtime);
}

ListAppGroupsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroupsWithOptions(shared_ptr<ListAppGroupsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAppGroupsShrinkRequest> request = make_shared<ListAppGroupsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListAppGroupsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
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

ListAppGroupsResponse Alibabacloud_OpenSearch20171225::Client::listAppGroups(shared_ptr<ListAppGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppGroupsWithOptions(request, headers, runtime);
}

ListDataCollectionsResponse Alibabacloud_OpenSearch20171225::Client::listDataCollectionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<ListDataCollectionsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListDataCollections"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/data-collections"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataCollectionsResponse(callApi(params, req, runtime));
}

ListDataCollectionsResponse Alibabacloud_OpenSearch20171225::Client::listDataCollections(shared_ptr<string> appGroupIdentity, shared_ptr<ListDataCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataCollectionsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListDataSourceTableFieldsResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTableFieldsWithOptions(shared_ptr<string> dataSourceType,
                                                                                                                shared_ptr<ListDataSourceTableFieldsRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->rawType)) {
    query->insert(pair<string, bool>("rawType", *request->rawType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceTableFields"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/assist/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceType)) + string("/fields"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTableFieldsResponse(callApi(params, req, runtime));
}

ListDataSourceTableFieldsResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTableFields(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTableFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceTableFieldsWithOptions(dataSourceType, request, headers, runtime);
}

ListDataSourceTablesResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTablesWithOptions(shared_ptr<string> dataSourceType,
                                                                                                      shared_ptr<ListDataSourceTablesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/assist/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceType)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTablesResponse(callApi(params, req, runtime));
}

ListDataSourceTablesResponse Alibabacloud_OpenSearch20171225::Client::listDataSourceTables(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceTablesWithOptions(dataSourceType, request, headers, runtime);
}

ListFirstRanksResponse Alibabacloud_OpenSearch20171225::Client::listFirstRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                          shared_ptr<string> appId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFirstRanks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/first-ranks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFirstRanksResponse(callApi(params, req, runtime));
}

ListFirstRanksResponse Alibabacloud_OpenSearch20171225::Client::listFirstRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFirstRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListFunctionInstancesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionInstancesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> functionName,
                                                                                                        shared_ptr<ListFunctionInstancesRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionInstancesResponse(callApi(params, req, runtime));
}

ListFunctionInstancesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionInstances(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<ListFunctionInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionInstancesWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

ListFunctionResourcesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionResourcesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                        shared_ptr<string> functionName,
                                                                                                        shared_ptr<ListFunctionResourcesRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionResources"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionResourcesResponse(callApi(params, req, runtime));
}

ListFunctionResourcesResponse Alibabacloud_OpenSearch20171225::Client::listFunctionResources(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<ListFunctionResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionResourcesWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

ListFunctionTasksResponse Alibabacloud_OpenSearch20171225::Client::listFunctionTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> functionName,
                                                                                                shared_ptr<string> instanceName,
                                                                                                shared_ptr<ListFunctionTasksRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionTasksResponse(callApi(params, req, runtime));
}

ListFunctionTasksResponse Alibabacloud_OpenSearch20171225::Client::listFunctionTasks(shared_ptr<string> appGroupIdentity,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<string> instanceName,
                                                                                     shared_ptr<ListFunctionTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionTasksWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
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

ListInterventionDictionariesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaries(shared_ptr<ListInterventionDictionariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionariesWithOptions(request, headers, runtime);
}

ListInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryEntriesWithOptions(shared_ptr<string> name,
                                                                                                                                shared_ptr<ListInterventionDictionaryEntriesRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/entries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryEntriesResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryEntries(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryEntriesWithOptions(name, request, headers, runtime);
}

ListInterventionDictionaryNerResultsResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryNerResultsWithOptions(shared_ptr<string> name,
                                                                                                                                      shared_ptr<ListInterventionDictionaryNerResultsRequest> request,
                                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/ner-results"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryNerResultsResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryNerResultsResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryNerResults(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryNerResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryNerResultsWithOptions(name, request, headers, runtime);
}

ListInterventionDictionaryRelatedEntitiesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryRelatedEntitiesWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterventionDictionaryRelatedEntities"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/related"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterventionDictionaryRelatedEntitiesResponse(callApi(params, req, runtime));
}

ListInterventionDictionaryRelatedEntitiesResponse Alibabacloud_OpenSearch20171225::Client::listInterventionDictionaryRelatedEntities(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInterventionDictionaryRelatedEntitiesWithOptions(name, headers, runtime);
}

ListProceedingsResponse Alibabacloud_OpenSearch20171225::Client::listProceedingsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<ListProceedingsRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/proceedings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProceedingsResponse(callApi(params, req, runtime));
}

ListProceedingsResponse Alibabacloud_OpenSearch20171225::Client::listProceedings(shared_ptr<string> appGroupIdentity, shared_ptr<ListProceedingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProceedingsWithOptions(appGroupIdentity, request, headers, runtime);
}

ListQueryProcessorAnalyzerResultsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorAnalyzerResultsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                                shared_ptr<string> appId,
                                                                                                                                shared_ptr<string> name,
                                                                                                                                shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/analyze"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryProcessorAnalyzerResultsResponse(callApi(params, req, runtime));
}

ListQueryProcessorAnalyzerResultsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorAnalyzerResults(shared_ptr<string> appGroupIdentity,
                                                                                                                     shared_ptr<string> appId,
                                                                                                                     shared_ptr<string> name,
                                                                                                                     shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorAnalyzerResultsWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
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

ListQueryProcessorNersResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorNers(shared_ptr<ListQueryProcessorNersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorNersWithOptions(request, headers, runtime);
}

ListQueryProcessorsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessorsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> appId,
                                                                                                    shared_ptr<ListQueryProcessorsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryProcessorsResponse(callApi(params, req, runtime));
}

ListQueryProcessorsResponse Alibabacloud_OpenSearch20171225::Client::listQueryProcessors(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<ListQueryProcessorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryProcessorsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

ListQuotaReviewTasksResponse Alibabacloud_OpenSearch20171225::Client::listQuotaReviewTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<ListQuotaReviewTasksRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListQuotaReviewTasks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/quota-review-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaReviewTasksResponse(callApi(params, req, runtime));
}

ListQuotaReviewTasksResponse Alibabacloud_OpenSearch20171225::Client::listQuotaReviewTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListQuotaReviewTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotaReviewTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

ListScheduledTasksResponse Alibabacloud_OpenSearch20171225::Client::listScheduledTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<ListScheduledTasksRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scheduled-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScheduledTasksResponse(callApi(params, req, runtime));
}

ListScheduledTasksResponse Alibabacloud_OpenSearch20171225::Client::listScheduledTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListScheduledTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listScheduledTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

ListSearchStrategiesResponse Alibabacloud_OpenSearch20171225::Client::listSearchStrategiesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchStrategies"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/search-strategies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchStrategiesResponse(callApi(params, req, runtime));
}

ListSearchStrategiesResponse Alibabacloud_OpenSearch20171225::Client::listSearchStrategies(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchStrategiesWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSecondRanksResponse Alibabacloud_OpenSearch20171225::Client::listSecondRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecondRanks"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/second-ranks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecondRanksResponse(callApi(params, req, runtime));
}

ListSecondRanksResponse Alibabacloud_OpenSearch20171225::Client::listSecondRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSecondRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSlowQueryCategoriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryCategoriesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlowQueryCategories"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query/categories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlowQueryCategoriesResponse(callApi(params, req, runtime));
}

ListSlowQueryCategoriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryCategories(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSlowQueryCategoriesWithOptions(appGroupIdentity, headers, runtime);
}

ListSlowQueryQueriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryQueriesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> categoryIndex,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlowQueryQueries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query/categories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(categoryIndex)) + string("/queries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlowQueryQueriesResponse(callApi(params, req, runtime));
}

ListSlowQueryQueriesResponse Alibabacloud_OpenSearch20171225::Client::listSlowQueryQueries(shared_ptr<string> appGroupIdentity, shared_ptr<string> categoryIndex) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSlowQueryQueriesWithOptions(appGroupIdentity, categoryIndex, headers, runtime);
}

ListSortExpressionsResponse Alibabacloud_OpenSearch20171225::Client::listSortExpressionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> appId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSortExpressions"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/sort-expressions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSortExpressionsResponse(callApi(params, req, runtime));
}

ListSortExpressionsResponse Alibabacloud_OpenSearch20171225::Client::listSortExpressions(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSortExpressionsWithOptions(appGroupIdentity, appId, headers, runtime);
}

ListSortScriptsResponse Alibabacloud_OpenSearch20171225::Client::listSortScriptsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appVersionId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSortScripts"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSortScriptsResponse(callApi(params, req, runtime));
}

ListSortScriptsResponse Alibabacloud_OpenSearch20171225::Client::listSortScripts(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSortScriptsWithOptions(appGroupIdentity, appVersionId, headers, runtime);
}

ListStatisticLogsResponse Alibabacloud_OpenSearch20171225::Client::listStatisticLogsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> moduleName,
                                                                                                shared_ptr<ListStatisticLogsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/statistic-logs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStatisticLogsResponse(callApi(params, req, runtime));
}

ListStatisticLogsResponse Alibabacloud_OpenSearch20171225::Client::listStatisticLogs(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatisticLogsWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

ListStatisticReportResponse Alibabacloud_OpenSearch20171225::Client::listStatisticReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> moduleName,
                                                                                                    shared_ptr<ListStatisticReportRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/statistic-report/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(moduleName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStatisticReportResponse(callApi(params, req, runtime));
}

ListStatisticReportResponse Alibabacloud_OpenSearch20171225::Client::listStatisticReport(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatisticReportWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_OpenSearch20171225::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("resourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("resourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/resource-tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_OpenSearch20171225::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzerEntriesWithOptions(shared_ptr<string> name,
                                                                                                            shared_ptr<ListUserAnalyzerEntriesRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/entries"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserAnalyzerEntriesResponse(callApi(params, req, runtime));
}

ListUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzerEntries(shared_ptr<string> name, shared_ptr<ListUserAnalyzerEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserAnalyzerEntriesWithOptions(name, request, headers, runtime);
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

ListUserAnalyzersResponse Alibabacloud_OpenSearch20171225::Client::listUserAnalyzers(shared_ptr<ListUserAnalyzersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserAnalyzersWithOptions(request, headers, runtime);
}

ModifyAppGroupResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                          shared_ptr<ModifyAppGroupRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentVersion)) {
    body->insert(pair<string, string>("currentVersion", *request->currentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppGroupResponse(callApi(params, req, runtime));
}

ModifyAppGroupResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroup(shared_ptr<string> appGroupIdentity, shared_ptr<ModifyAppGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAppGroupWithOptions(appGroupIdentity, request, headers, runtime);
}

ModifyAppGroupQuotaResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupQuotaWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<ModifyAppGroupQuotaRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppGroupQuota"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/quota"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppGroupQuotaResponse(callApi(params, req, runtime));
}

ModifyAppGroupQuotaResponse Alibabacloud_OpenSearch20171225::Client::modifyAppGroupQuota(shared_ptr<string> appGroupIdentity, shared_ptr<ModifyAppGroupQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAppGroupQuotaWithOptions(appGroupIdentity, request, headers, runtime);
}

ModifyFirstRankResponse Alibabacloud_OpenSearch20171225::Client::modifyFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<string> name,
                                                                                            shared_ptr<ModifyFirstRankRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/first-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFirstRankResponse(callApi(params, req, runtime));
}

ModifyFirstRankResponse Alibabacloud_OpenSearch20171225::Client::modifyFirstRank(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> appId,
                                                                                 shared_ptr<string> name,
                                                                                 shared_ptr<ModifyFirstRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyFirstRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ModifyQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::modifyQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> name,
                                                                                                      shared_ptr<ModifyQueryProcessorRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyQueryProcessorResponse(callApi(params, req, runtime));
}

ModifyQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::modifyQueryProcessor(shared_ptr<string> appGroupIdentity,
                                                                                           shared_ptr<string> appId,
                                                                                           shared_ptr<string> name,
                                                                                           shared_ptr<ModifyQueryProcessorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyQueryProcessorWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

ModifyScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::modifyScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> taskId,
                                                                                                    shared_ptr<ModifyScheduledTaskRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scheduled-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScheduledTaskResponse(callApi(params, req, runtime));
}

ModifyScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::modifyScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId, shared_ptr<ModifyScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyScheduledTaskWithOptions(appGroupIdentity, taskId, request, headers, runtime);
}

ModifySecondRankResponse Alibabacloud_OpenSearch20171225::Client::modifySecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<string> name,
                                                                                              shared_ptr<ModifySecondRankRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/second-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecondRankResponse(callApi(params, req, runtime));
}

ModifySecondRankResponse Alibabacloud_OpenSearch20171225::Client::modifySecondRank(shared_ptr<string> appGroupIdentity,
                                                                                   shared_ptr<string> appId,
                                                                                   shared_ptr<string> name,
                                                                                   shared_ptr<ModifySecondRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifySecondRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

PushInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushInterventionDictionaryEntriesWithOptions(shared_ptr<string> name,
                                                                                                                                shared_ptr<PushInterventionDictionaryEntriesRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<map<string, boost::any>>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushInterventionDictionaryEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/entries/actions/bulk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushInterventionDictionaryEntriesResponse(callApi(params, req, runtime));
}

PushInterventionDictionaryEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushInterventionDictionaryEntries(shared_ptr<string> name, shared_ptr<PushInterventionDictionaryEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushInterventionDictionaryEntriesWithOptions(name, request, headers, runtime);
}

PushUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushUserAnalyzerEntriesWithOptions(shared_ptr<string> name,
                                                                                                            shared_ptr<PushUserAnalyzerEntriesRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<PushUserAnalyzerEntriesRequestEntries>>(request->entries)) {
    body->insert(pair<string, vector<PushUserAnalyzerEntriesRequestEntries>>("entries", *request->entries));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushUserAnalyzerEntries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)) + string("/entries/actions/bulk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushUserAnalyzerEntriesResponse(callApi(params, req, runtime));
}

PushUserAnalyzerEntriesResponse Alibabacloud_OpenSearch20171225::Client::pushUserAnalyzerEntries(shared_ptr<string> name, shared_ptr<PushUserAnalyzerEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushUserAnalyzerEntriesWithOptions(name, request, headers, runtime);
}

ReleaseSortScriptResponse Alibabacloud_OpenSearch20171225::Client::releaseSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> scriptName,
                                                                                                shared_ptr<string> appVersionId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/actions/release"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseSortScriptResponse(callApi(params, req, runtime));
}

ReleaseSortScriptResponse Alibabacloud_OpenSearch20171225::Client::releaseSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

RemoveAppResponse Alibabacloud_OpenSearch20171225::Client::removeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                shared_ptr<string> appId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApp"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppResponse(callApi(params, req, runtime));
}

RemoveAppResponse Alibabacloud_OpenSearch20171225::Client::removeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

RemoveAppGroupResponse Alibabacloud_OpenSearch20171225::Client::removeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppGroupResponse(callApi(params, req, runtime));
}

RemoveAppGroupResponse Alibabacloud_OpenSearch20171225::Client::removeAppGroup(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

RemoveDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::removeDataCollectionWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> dataCollectionIdentity,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDataCollection"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/data-collections/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataCollectionIdentity)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDataCollectionResponse(callApi(params, req, runtime));
}

RemoveDataCollectionResponse Alibabacloud_OpenSearch20171225::Client::removeDataCollection(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeDataCollectionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

RemoveFirstRankResponse Alibabacloud_OpenSearch20171225::Client::removeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<string> name,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFirstRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/first-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFirstRankResponse(callApi(params, req, runtime));
}

RemoveFirstRankResponse Alibabacloud_OpenSearch20171225::Client::removeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::removeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInterventionDictionary"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/intervention-dictionaries/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveInterventionDictionaryResponse(callApi(params, req, runtime));
}

RemoveInterventionDictionaryResponse Alibabacloud_OpenSearch20171225::Client::removeInterventionDictionary(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeInterventionDictionaryWithOptions(name, headers, runtime);
}

RemoveQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::removeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> name,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveQueryProcessor"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/query-processors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveQueryProcessorResponse(callApi(params, req, runtime));
}

RemoveQueryProcessorResponse Alibabacloud_OpenSearch20171225::Client::removeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::removeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                    shared_ptr<string> taskId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveScheduledTask"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scheduled-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveScheduledTaskResponse(callApi(params, req, runtime));
}

RemoveScheduledTaskResponse Alibabacloud_OpenSearch20171225::Client::removeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

RemoveSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::removeSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> strategyName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/search-strategies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSearchStrategyResponse(callApi(params, req, runtime));
}

RemoveSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::removeSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

RemoveSecondRankResponse Alibabacloud_OpenSearch20171225::Client::removeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appId,
                                                                                              shared_ptr<string> name,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSecondRank"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/second-ranks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSecondRankResponse(callApi(params, req, runtime));
}

RemoveSecondRankResponse Alibabacloud_OpenSearch20171225::Client::removeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

RemoveUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::removeUserAnalyzerWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/user-analyzers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserAnalyzerResponse(callApi(params, req, runtime));
}

RemoveUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::removeUserAnalyzer(shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeUserAnalyzerWithOptions(name, headers, runtime);
}

RenewAppGroupResponse Alibabacloud_OpenSearch20171225::Client::renewAppGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                        shared_ptr<RenewAppGroupRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewAppGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/actions/renew"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewAppGroupResponse(callApi(params, req, runtime));
}

RenewAppGroupResponse Alibabacloud_OpenSearch20171225::Client::renewAppGroup(shared_ptr<string> appGroupIdentity, shared_ptr<RenewAppGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewAppGroupWithOptions(appGroupIdentity, request, headers, runtime);
}

ReplaceAppGroupCommodityCodeResponse Alibabacloud_OpenSearch20171225::Client::replaceAppGroupCommodityCodeWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceAppGroupCommodityCode"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/actions/to-instance-typed"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceAppGroupCommodityCodeResponse(callApi(params, req, runtime));
}

ReplaceAppGroupCommodityCodeResponse Alibabacloud_OpenSearch20171225::Client::replaceAppGroupCommodityCode(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return replaceAppGroupCommodityCodeWithOptions(appGroupIdentity, headers, runtime);
}

SaveSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::saveSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                  shared_ptr<string> scriptName,
                                                                                                  shared_ptr<string> appVersionId,
                                                                                                  shared_ptr<string> fileName,
                                                                                                  shared_ptr<SaveSortScriptFileRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    body->insert(pair<string, long>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSortScriptFile"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)) + string("/files/src/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fileName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSortScriptFileResponse(callApi(params, req, runtime));
}

SaveSortScriptFileResponse Alibabacloud_OpenSearch20171225::Client::saveSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                                                       shared_ptr<string> scriptName,
                                                                                       shared_ptr<string> appVersionId,
                                                                                       shared_ptr<string> fileName,
                                                                                       shared_ptr<SaveSortScriptFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return saveSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, request, headers, runtime);
}

StartSlowQueryAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::startSlowQueryAnalyzerWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSlowQueryAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/optimizers/slow-query/actions/run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSlowQueryAnalyzerResponse(callApi(params, req, runtime));
}

StartSlowQueryAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::startSlowQueryAnalyzer(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startSlowQueryAnalyzerWithOptions(appGroupIdentity, headers, runtime);
}

TagResourcesResponse Alibabacloud_OpenSearch20171225::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<TagResourcesRequestTag>>("tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/resource-tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_OpenSearch20171225::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UnbindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::unbindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> esInstanceId,
                                                                                                      shared_ptr<UnbindESUserAnalyzerRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindESUserAnalyzer"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/es/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(esInstanceId)) + string("/actions/unbind-analyzer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindESUserAnalyzerResponse(callApi(params, req, runtime));
}

UnbindESUserAnalyzerResponse Alibabacloud_OpenSearch20171225::Client::unbindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId, shared_ptr<UnbindESUserAnalyzerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, request, headers, runtime);
}

UnbindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::unbindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindEsInstance"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/actions/unbind-es-instance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindEsInstanceResponse(callApi(params, req, runtime));
}

UnbindEsInstanceResponse Alibabacloud_OpenSearch20171225::Client::unbindEsInstance(shared_ptr<string> appGroupIdentity) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindEsInstanceWithOptions(appGroupIdentity, headers, runtime);
}

UntagResourcesResponse Alibabacloud_OpenSearch20171225::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UntagResourcesShrinkRequest> request = make_shared<UntagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("resourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKey)) {
    request->tagKeyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKey, make_shared<string>("tagKey"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("resourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyShrink)) {
    query->insert(pair<string, string>("tagKey", *request->tagKeyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/resource-tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_OpenSearch20171225::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::updateABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> sceneId,
                                                                                                          shared_ptr<string> groupId,
                                                                                                          shared_ptr<string> experimentId,
                                                                                                          shared_ptr<UpdateABTestExperimentRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestExperiment"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestExperimentResponse(callApi(params, req, runtime));
}

UpdateABTestExperimentResponse Alibabacloud_OpenSearch20171225::Client::updateABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> sceneId,
                                                                                               shared_ptr<string> groupId,
                                                                                               shared_ptr<string> experimentId,
                                                                                               shared_ptr<UpdateABTestExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, request, headers, runtime);
}

UpdateABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::updateABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                        shared_ptr<string> sceneId,
                                                                                                                        shared_ptr<string> groupId,
                                                                                                                        shared_ptr<string> experimentId,
                                                                                                                        shared_ptr<UpdateABTestFixedFlowDividersRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestFixedFlowDividers"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)) + string("/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(experimentId)) + string("/fixed-flow-dividers"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestFixedFlowDividersResponse(callApi(params, req, runtime));
}

UpdateABTestFixedFlowDividersResponse Alibabacloud_OpenSearch20171225::Client::updateABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                                                             shared_ptr<string> sceneId,
                                                                                                             shared_ptr<string> groupId,
                                                                                                             shared_ptr<string> experimentId,
                                                                                                             shared_ptr<UpdateABTestFixedFlowDividersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, request, headers, runtime);
}

UpdateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::updateABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<string> groupId,
                                                                                                shared_ptr<UpdateABTestGroupRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestGroup"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)) + string("/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(groupId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestGroupResponse(callApi(params, req, runtime));
}

UpdateABTestGroupResponse Alibabacloud_OpenSearch20171225::Client::updateABTestGroup(shared_ptr<string> appGroupIdentity,
                                                                                     shared_ptr<string> sceneId,
                                                                                     shared_ptr<string> groupId,
                                                                                     shared_ptr<UpdateABTestGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, request, headers, runtime);
}

UpdateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::updateABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> sceneId,
                                                                                                shared_ptr<UpdateABTestSceneRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABTestScene"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sceneId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABTestSceneResponse(callApi(params, req, runtime));
}

UpdateABTestSceneResponse Alibabacloud_OpenSearch20171225::Client::updateABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<UpdateABTestSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABTestSceneWithOptions(appGroupIdentity, sceneId, request, headers, runtime);
}

UpdateFetchFieldsResponse Alibabacloud_OpenSearch20171225::Client::updateFetchFieldsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                shared_ptr<string> appId,
                                                                                                shared_ptr<UpdateFetchFieldsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFetchFields"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/fetch-fields"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFetchFieldsResponse(callApi(params, req, runtime));
}

UpdateFetchFieldsResponse Alibabacloud_OpenSearch20171225::Client::updateFetchFields(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateFetchFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFetchFieldsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

UpdateFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                                        shared_ptr<string> functionName,
                                                                                                                        shared_ptr<UpdateFunctionDefaultInstanceRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/default-instance"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionDefaultInstanceResponse(callApi(params, req, runtime));
}

UpdateFunctionDefaultInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<UpdateFunctionDefaultInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

UpdateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> instanceName,
                                                                                                          shared_ptr<UpdateFunctionInstanceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionInstanceResponse(callApi(params, req, runtime));
}

UpdateFunctionInstanceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<string> instanceName,
                                                                                               shared_ptr<UpdateFunctionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

UpdateFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionResourceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                          shared_ptr<string> functionName,
                                                                                                          shared_ptr<string> resourceName,
                                                                                                          shared_ptr<UpdateFunctionResourceRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateFunctionResourceRequestData>(request->data)) {
    body->insert(pair<string, UpdateFunctionResourceRequestData>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunctionResource"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/functions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(resourceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionResourceResponse(callApi(params, req, runtime));
}

UpdateFunctionResourceResponse Alibabacloud_OpenSearch20171225::Client::updateFunctionResource(shared_ptr<string> appGroupIdentity,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<string> resourceName,
                                                                                               shared_ptr<UpdateFunctionResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, request, headers, runtime);
}

UpdateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::updateSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                                      shared_ptr<string> appId,
                                                                                                      shared_ptr<string> strategyName,
                                                                                                      shared_ptr<UpdateSearchStrategyRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSearchStrategy"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/search-strategies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(strategyName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSearchStrategyResponse(callApi(params, req, runtime));
}

UpdateSearchStrategyResponse Alibabacloud_OpenSearch20171225::Client::updateSearchStrategy(shared_ptr<string> appGroupIdentity,
                                                                                           shared_ptr<string> appId,
                                                                                           shared_ptr<string> strategyName,
                                                                                           shared_ptr<UpdateSearchStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, request, headers, runtime);
}

UpdateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::updateSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                              shared_ptr<string> appVersionId,
                                                                                              shared_ptr<string> scriptName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSortScript"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appVersionId)) + string("/sort-scripts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scriptName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSortScriptResponse(callApi(params, req, runtime));
}

UpdateSortScriptResponse Alibabacloud_OpenSearch20171225::Client::updateSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSortScriptWithOptions(appGroupIdentity, appVersionId, scriptName, headers, runtime);
}

UpdateSummariesResponse Alibabacloud_OpenSearch20171225::Client::updateSummariesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                            shared_ptr<string> appId,
                                                                                            shared_ptr<UpdateSummariesRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpdateSummariesRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSummaries"))},
    {"version", boost::any(string("2017-12-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v4/openapi/app-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appGroupIdentity)) + string("/apps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/summaries"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSummariesResponse(callApi(params, req, runtime));
}

UpdateSummariesResponse Alibabacloud_OpenSearch20171225::Client::updateSummaries(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateSummariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSummariesWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

ValidateDataSourcesResponse Alibabacloud_OpenSearch20171225::Client::validateDataSourcesWithOptions(shared_ptr<ValidateDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
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

ValidateDataSourcesResponse Alibabacloud_OpenSearch20171225::Client::validateDataSources(shared_ptr<ValidateDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateDataSourcesWithOptions(request, headers, runtime);
}

