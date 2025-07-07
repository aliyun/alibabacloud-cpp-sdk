// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/emr_serverless_spark_20230808.hpp>
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

using namespace Alibabacloud_Emr-serverless-spark20230808;

Alibabacloud_Emr-serverless-spark20230808::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("emr-serverless-spark"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Emr-serverless-spark20230808::Client::getEndpoint(shared_ptr<string> productId,
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

AddMembersResponse Alibabacloud_Emr-serverless-spark20230808::Client::addMembersWithOptions(shared_ptr<AddMembersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->memberArns)) {
    body->insert(pair<string, vector<string>>("memberArns", *request->memberArns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMembers"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/auth/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMembersResponse(callApi(params, req, runtime));
}

AddMembersResponse Alibabacloud_Emr-serverless-spark20230808::Client::addMembers(shared_ptr<AddMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addMembersWithOptions(request, headers, runtime);
}

CancelJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::cancelJobRunWithOptions(shared_ptr<string> workspaceId,
                                                                                                shared_ptr<string> jobRunId,
                                                                                                shared_ptr<CancelJobRunRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelJobRun"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/jobRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobRunId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelJobRunResponse(callApi(params, req, runtime));
}

CancelJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::cancelJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<CancelJobRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelJobRunWithOptions(workspaceId, jobRunId, request, headers, runtime);
}

CreateLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::createLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                          shared_ptr<CreateLivyComputeRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    body->insert(pair<string, string>("authType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLivyComputeRequestAutoStartConfiguration>(request->autoStartConfiguration)) {
    body->insert(pair<string, CreateLivyComputeRequestAutoStartConfiguration>("autoStartConfiguration", *request->autoStartConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLivyComputeRequestAutoStopConfiguration>(request->autoStopConfiguration)) {
    body->insert(pair<string, CreateLivyComputeRequestAutoStopConfiguration>("autoStopConfiguration", *request->autoStopConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuLimit)) {
    body->insert(pair<string, string>("cpuLimit", *request->cpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayReleaseVersion)) {
    body->insert(pair<string, string>("displayReleaseVersion", *request->displayReleaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePublic)) {
    body->insert(pair<string, bool>("enablePublic", *request->enablePublic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fusion)) {
    body->insert(pair<string, bool>("fusion", *request->fusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->livyServerConf)) {
    body->insert(pair<string, string>("livyServerConf", *request->livyServerConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->livyVersion)) {
    body->insert(pair<string, string>("livyVersion", *request->livyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryLimit)) {
    body->insert(pair<string, string>("memoryLimit", *request->memoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    body->insert(pair<string, string>("networkName", *request->networkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    body->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("releaseVersion", *request->releaseVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLivyComputeResponse(callApi(params, req, runtime));
}

CreateLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::createLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<CreateLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLivyComputeWithOptions(workspaceBizId, request, headers, runtime);
}

CreateLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::createLivyComputeTokenWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                                    shared_ptr<string> livyComputeId,
                                                                                                                    shared_ptr<CreateLivyComputeTokenRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateLivyComputeTokenRequestAutoExpireConfiguration>(request->autoExpireConfiguration)) {
    body->insert(pair<string, CreateLivyComputeTokenRequestAutoExpireConfiguration>("autoExpireConfiguration", *request->autoExpireConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivyComputeToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/token"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLivyComputeTokenResponse(callApi(params, req, runtime));
}

CreateLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::createLivyComputeToken(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<CreateLivyComputeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

CreateProcessDefinitionWithScheduleResponse Alibabacloud_Emr-serverless-spark20230808::Client::createProcessDefinitionWithScheduleWithOptions(shared_ptr<string> bizId,
                                                                                                                                              shared_ptr<CreateProcessDefinitionWithScheduleRequest> tmpReq,
                                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProcessDefinitionWithScheduleShrinkRequest> request = make_shared<CreateProcessDefinitionWithScheduleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateProcessDefinitionWithScheduleRequestGlobalParams>>(tmpReq->globalParams)) {
    request->globalParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalParams, make_shared<string>("globalParams"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProcessDefinitionWithScheduleRequestSchedule>(tmpReq->schedule)) {
    request->scheduleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedule, make_shared<string>("schedule"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProcessDefinitionWithScheduleRequestTaskDefinitionJson>>(tmpReq->taskDefinitionJson)) {
    request->taskDefinitionJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskDefinitionJson, make_shared<string>("taskDefinitionJson"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProcessDefinitionWithScheduleRequestTaskRelationJson>>(tmpReq->taskRelationJson)) {
    request->taskRelationJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskRelationJson, make_shared<string>("taskRelationJson"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertEmailAddress)) {
    query->insert(pair<string, string>("alertEmailAddress", *request->alertEmailAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionType)) {
    query->insert(pair<string, string>("executionType", *request->executionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalParamsShrink)) {
    query->insert(pair<string, string>("globalParams", *request->globalParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productNamespace)) {
    query->insert(pair<string, string>("productNamespace", *request->productNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publish)) {
    query->insert(pair<string, bool>("publish", *request->publish));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQueue)) {
    query->insert(pair<string, string>("resourceQueue", *request->resourceQueue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryTimes)) {
    query->insert(pair<string, long>("retryTimes", *request->retryTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runAs)) {
    query->insert(pair<string, string>("runAs", *request->runAs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleShrink)) {
    query->insert(pair<string, string>("schedule", *request->scheduleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJsonShrink)) {
    query->insert(pair<string, string>("taskDefinitionJson", *request->taskDefinitionJsonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskParallelism)) {
    query->insert(pair<string, long>("taskParallelism", *request->taskParallelism));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJsonShrink)) {
    query->insert(pair<string, string>("taskRelationJson", *request->taskRelationJsonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProcessDefinitionWithSchedule"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(bizId)) + string("/process-definition"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProcessDefinitionWithScheduleResponse(callApi(params, req, runtime));
}

CreateProcessDefinitionWithScheduleResponse Alibabacloud_Emr-serverless-spark20230808::Client::createProcessDefinitionWithSchedule(shared_ptr<string> bizId, shared_ptr<CreateProcessDefinitionWithScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProcessDefinitionWithScheduleWithOptions(bizId, request, headers, runtime);
}

CreateSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::createSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                                                                                shared_ptr<CreateSessionClusterRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateSessionClusterRequestApplicationConfigs>>(request->applicationConfigs)) {
    body->insert(pair<string, vector<CreateSessionClusterRequestApplicationConfigs>>("applicationConfigs", *request->applicationConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSessionClusterRequestAutoStartConfiguration>(request->autoStartConfiguration)) {
    body->insert(pair<string, CreateSessionClusterRequestAutoStartConfiguration>("autoStartConfiguration", *request->autoStartConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSessionClusterRequestAutoStopConfiguration>(request->autoStopConfiguration)) {
    body->insert(pair<string, CreateSessionClusterRequestAutoStopConfiguration>("autoStopConfiguration", *request->autoStopConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayReleaseVersion)) {
    body->insert(pair<string, string>("displayReleaseVersion", *request->displayReleaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    body->insert(pair<string, string>("envId", *request->envId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fusion)) {
    body->insert(pair<string, bool>("fusion", *request->fusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    body->insert(pair<string, string>("kind", *request->kind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publicEndpointEnabled)) {
    body->insert(pair<string, bool>("publicEndpointEnabled", *request->publicEndpointEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    body->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("releaseVersion", *request->releaseVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSessionCluster"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/sessionClusters"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSessionClusterResponse(callApi(params, req, runtime));
}

CreateSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::createSessionCluster(shared_ptr<string> workspaceId, shared_ptr<CreateSessionClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

CreateSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::createSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                                                                            shared_ptr<CreateSqlStatementRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeContent)) {
    body->insert(pair<string, string>("codeContent", *request->codeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultCatalog)) {
    body->insert(pair<string, string>("defaultCatalog", *request->defaultCatalog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDatabase)) {
    body->insert(pair<string, string>("defaultDatabase", *request->defaultDatabase));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlComputeId)) {
    body->insert(pair<string, string>("sqlComputeId", *request->sqlComputeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSqlStatement"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/statement"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSqlStatementResponse(callApi(params, req, runtime));
}

CreateSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::createSqlStatement(shared_ptr<string> workspaceId, shared_ptr<CreateSqlStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSqlStatementWithOptions(workspaceId, request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_Emr-serverless-spark20230808::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenew)) {
    body->insert(pair<string, string>("autoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenewPeriod)) {
    body->insert(pair<string, string>("autoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenewPeriodUnit)) {
    body->insert(pair<string, string>("autoRenewPeriodUnit", *request->autoRenewPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoStartSessionCluster)) {
    body->insert(pair<string, bool>("autoStartSessionCluster", *request->autoStartSessionCluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dlfCatalogId)) {
    body->insert(pair<string, string>("dlfCatalogId", *request->dlfCatalogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dlfType)) {
    body->insert(pair<string, string>("dlfType", *request->dlfType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    body->insert(pair<string, string>("duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    body->insert(pair<string, string>("ossBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDurationUnit)) {
    body->insert(pair<string, string>("paymentDurationUnit", *request->paymentDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    body->insert(pair<string, string>("paymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    body->insert(pair<string, string>("ramRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseType)) {
    body->insert(pair<string, string>("releaseType", *request->releaseType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceRequestResourceSpec>(request->resourceSpec)) {
    body->insert(pair<string, CreateWorkspaceRequestResourceSpec>("resourceSpec", *request->resourceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateWorkspaceRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateWorkspaceRequestTag>>("tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceName)) {
    body->insert(pair<string, string>("workspaceName", *request->workspaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_Emr-serverless-spark20230808::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkspaceWithOptions(request, headers, runtime);
}

DeleteLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::deleteLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                          shared_ptr<string> livyComputeId,
                                                                                                          shared_ptr<DeleteLivyComputeRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLivyComputeResponse(callApi(params, req, runtime));
}

DeleteLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::deleteLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<DeleteLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

DeleteLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::deleteLivyComputeTokenWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                                    shared_ptr<string> livyComputeId,
                                                                                                                    shared_ptr<string> tokenId,
                                                                                                                    shared_ptr<DeleteLivyComputeTokenRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivyComputeToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/token/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tokenId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLivyComputeTokenResponse(callApi(params, req, runtime));
}

DeleteLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::deleteLivyComputeToken(shared_ptr<string> workspaceBizId,
                                                                                                         shared_ptr<string> livyComputeId,
                                                                                                         shared_ptr<string> tokenId,
                                                                                                         shared_ptr<DeleteLivyComputeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

EditWorkspaceQueueResponse Alibabacloud_Emr-serverless-spark20230808::Client::editWorkspaceQueueWithOptions(shared_ptr<EditWorkspaceQueueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->environments)) {
    body->insert(pair<string, vector<string>>("environments", *request->environments));
  }
  if (!Darabonba_Util::Client::isUnset<EditWorkspaceQueueRequestResourceSpec>(request->resourceSpec)) {
    body->insert(pair<string, EditWorkspaceQueueRequestResourceSpec>("resourceSpec", *request->resourceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceQueueName)) {
    body->insert(pair<string, string>("workspaceQueueName", *request->workspaceQueueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditWorkspaceQueue"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/queues/action/edit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditWorkspaceQueueResponse(callApi(params, req, runtime));
}

EditWorkspaceQueueResponse Alibabacloud_Emr-serverless-spark20230808::Client::editWorkspaceQueue(shared_ptr<EditWorkspaceQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return editWorkspaceQueueWithOptions(request, headers, runtime);
}

GetCuHoursResponse Alibabacloud_Emr-serverless-spark20230808::Client::getCuHoursWithOptions(shared_ptr<string> workspaceId,
                                                                                            shared_ptr<string> queue,
                                                                                            shared_ptr<GetCuHoursRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
    {"action", boost::any(string("GetCuHours"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/metric/cuHours/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(queue)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCuHoursResponse(callApi(params, req, runtime));
}

GetCuHoursResponse Alibabacloud_Emr-serverless-spark20230808::Client::getCuHours(shared_ptr<string> workspaceId, shared_ptr<string> queue, shared_ptr<GetCuHoursRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCuHoursWithOptions(workspaceId, queue, request, headers, runtime);
}

GetDoctorApplicationResponse Alibabacloud_Emr-serverless-spark20230808::Client::getDoctorApplicationWithOptions(shared_ptr<string> workspaceId,
                                                                                                                shared_ptr<string> runId,
                                                                                                                shared_ptr<GetDoctorApplicationRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    query->insert(pair<string, string>("locale", *request->locale));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryTime)) {
    query->insert(pair<string, string>("queryTime", *request->queryTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDoctorApplication"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/runs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(runId)) + string("/action/getDoctorApplication"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDoctorApplicationResponse(callApi(params, req, runtime));
}

GetDoctorApplicationResponse Alibabacloud_Emr-serverless-spark20230808::Client::getDoctorApplication(shared_ptr<string> workspaceId, shared_ptr<string> runId, shared_ptr<GetDoctorApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDoctorApplicationWithOptions(workspaceId, runId, request, headers, runtime);
}

GetJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::getJobRunWithOptions(shared_ptr<string> workspaceId,
                                                                                          shared_ptr<string> jobRunId,
                                                                                          shared_ptr<GetJobRunRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobRun"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/jobRuns/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobRunId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobRunResponse(callApi(params, req, runtime));
}

GetJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::getJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<GetJobRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobRunWithOptions(workspaceId, jobRunId, request, headers, runtime);
}

GetLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::getLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                    shared_ptr<string> livyComputeId,
                                                                                                    shared_ptr<GetLivyComputeRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLivyComputeResponse(callApi(params, req, runtime));
}

GetLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::getLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<GetLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

GetLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::getLivyComputeTokenWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                              shared_ptr<string> livyComputeId,
                                                                                                              shared_ptr<string> tokenId,
                                                                                                              shared_ptr<GetLivyComputeTokenRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLivyComputeToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/token/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tokenId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLivyComputeTokenResponse(callApi(params, req, runtime));
}

GetLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::getLivyComputeToken(shared_ptr<string> workspaceBizId,
                                                                                                   shared_ptr<string> livyComputeId,
                                                                                                   shared_ptr<string> tokenId,
                                                                                                   shared_ptr<GetLivyComputeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

GetSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::getSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                                                                          shared_ptr<string> sessionClusterId,
                                                                                                          shared_ptr<GetSessionClusterRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSessionCluster"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/sessionClusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sessionClusterId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSessionClusterResponse(callApi(params, req, runtime));
}

GetSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::getSessionCluster(shared_ptr<string> workspaceId, shared_ptr<string> sessionClusterId, shared_ptr<GetSessionClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSessionClusterWithOptions(workspaceId, sessionClusterId, request, headers, runtime);
}

GetSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::getSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                                                                      shared_ptr<string> statementId,
                                                                                                      shared_ptr<GetSqlStatementRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSqlStatement"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/statement/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(statementId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSqlStatementResponse(callApi(params, req, runtime));
}

GetSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::getSqlStatement(shared_ptr<string> workspaceId, shared_ptr<string> statementId, shared_ptr<GetSqlStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSqlStatementWithOptions(workspaceId, statementId, request, headers, runtime);
}

GetTemplateResponse Alibabacloud_Emr-serverless-spark20230808::Client::getTemplateWithOptions(shared_ptr<string> workspaceBizId,
                                                                                              shared_ptr<GetTemplateRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBizId)) {
    query->insert(pair<string, string>("templateBizId", *request->templateBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("templateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/template"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_Emr-serverless-spark20230808::Client::getTemplate(shared_ptr<string> workspaceBizId, shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateWithOptions(workspaceBizId, request, headers, runtime);
}

GrantRoleToUsersResponse Alibabacloud_Emr-serverless-spark20230808::Client::grantRoleToUsersWithOptions(shared_ptr<GrantRoleToUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    body->insert(pair<string, string>("roleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userArns)) {
    body->insert(pair<string, vector<string>>("userArns", *request->userArns));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantRoleToUsers"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/auth/roles/grant"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantRoleToUsersResponse(callApi(params, req, runtime));
}

GrantRoleToUsersResponse Alibabacloud_Emr-serverless-spark20230808::Client::grantRoleToUsers(shared_ptr<GrantRoleToUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return grantRoleToUsersWithOptions(request, headers, runtime);
}

ListJobRunsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listJobRunsWithOptions(shared_ptr<string> workspaceId,
                                                                                              shared_ptr<ListJobRunsRequest> tmpReq,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobRunsShrinkRequest> request = make_shared<ListJobRunsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListJobRunsRequestEndTime>(tmpReq->endTime)) {
    request->endTimeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->endTime, make_shared<string>("endTime"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListJobRunsRequestStartTime>(tmpReq->startTime)) {
    request->startTimeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startTime, make_shared<string>("startTime"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->states)) {
    request->statesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->states, make_shared<string>("states"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListJobRunsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeShrink)) {
    query->insert(pair<string, string>("endTime", *request->endTimeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isWorkflow)) {
    query->insert(pair<string, string>("isWorkflow", *request->isWorkflow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobRunDeploymentId)) {
    query->insert(pair<string, string>("jobRunDeploymentId", *request->jobRunDeploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobRunId)) {
    query->insert(pair<string, string>("jobRunId", *request->jobRunId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDuration)) {
    query->insert(pair<string, long>("minDuration", *request->minDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQueueId)) {
    query->insert(pair<string, string>("resourceQueueId", *request->resourceQueueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeShrink)) {
    query->insert(pair<string, string>("startTime", *request->startTimeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statesShrink)) {
    query->insert(pair<string, string>("states", *request->statesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobRuns"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/jobRuns"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobRunsResponse(callApi(params, req, runtime));
}

ListJobRunsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listJobRuns(shared_ptr<string> workspaceId, shared_ptr<ListJobRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobRunsWithOptions(workspaceId, request, headers, runtime);
}

ListKyuubiServicesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiServicesWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKyuubiServices"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/kyuubi/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKyuubiServicesResponse(callApi(params, req, runtime));
}

ListKyuubiServicesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiServices(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKyuubiServicesWithOptions(workspaceId, headers, runtime);
}

ListKyuubiSparkApplicationsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiSparkApplicationsWithOptions(shared_ptr<string> workspaceId,
                                                                                                                              shared_ptr<string> kyuubiServiceId,
                                                                                                                              shared_ptr<ListKyuubiSparkApplicationsRequest> tmpReq,
                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListKyuubiSparkApplicationsShrinkRequest> request = make_shared<ListKyuubiSparkApplicationsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->orderBy)) {
    request->orderByShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderBy, make_shared<string>("orderBy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListKyuubiSparkApplicationsRequestStartTime>(tmpReq->startTime)) {
    request->startTimeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->startTime, make_shared<string>("startTime"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("applicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("applicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDuration)) {
    query->insert(pair<string, long>("minDuration", *request->minDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByShrink)) {
    query->insert(pair<string, string>("orderBy", *request->orderByShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQueueId)) {
    query->insert(pair<string, string>("resourceQueueId", *request->resourceQueueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeShrink)) {
    query->insert(pair<string, string>("startTime", *request->startTimeShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKyuubiSparkApplications"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/kyuubi/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(kyuubiServiceId)) + string("/applications"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKyuubiSparkApplicationsResponse(callApi(params, req, runtime));
}

ListKyuubiSparkApplicationsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiSparkApplications(shared_ptr<string> workspaceId, shared_ptr<string> kyuubiServiceId, shared_ptr<ListKyuubiSparkApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKyuubiSparkApplicationsWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

ListKyuubiTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiTokenWithOptions(shared_ptr<string> workspaceId,
                                                                                                      shared_ptr<string> kyuubiServiceId,
                                                                                                      shared_ptr<ListKyuubiTokenRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKyuubiToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/kyuubiService/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(kyuubiServiceId)) + string("/token"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKyuubiTokenResponse(callApi(params, req, runtime));
}

ListKyuubiTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::listKyuubiToken(shared_ptr<string> workspaceId, shared_ptr<string> kyuubiServiceId, shared_ptr<ListKyuubiTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKyuubiTokenWithOptions(workspaceId, kyuubiServiceId, request, headers, runtime);
}

ListLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                      shared_ptr<ListLivyComputeRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLivyComputeResponse(callApi(params, req, runtime));
}

ListLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<ListLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLivyComputeWithOptions(workspaceBizId, request, headers, runtime);
}

ListLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLivyComputeTokenWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                                shared_ptr<string> livyComputeId,
                                                                                                                shared_ptr<ListLivyComputeTokenRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLivyComputeToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/token"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLivyComputeTokenResponse(callApi(params, req, runtime));
}

ListLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLivyComputeToken(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<ListLivyComputeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

ListLogContentsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLogContentsWithOptions(shared_ptr<string> workspaceId,
                                                                                                      shared_ptr<ListLogContentsRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->length)) {
    query->insert(pair<string, long>("length", *request->length));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogContents"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/action/listLogContents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogContentsResponse(callApi(params, req, runtime));
}

ListLogContentsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listLogContents(shared_ptr<string> workspaceId, shared_ptr<ListLogContentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogContentsWithOptions(workspaceId, request, headers, runtime);
}

ListReleaseVersionsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listReleaseVersionsWithOptions(shared_ptr<ListReleaseVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseType)) {
    query->insert(pair<string, string>("releaseType", *request->releaseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    query->insert(pair<string, string>("releaseVersion", *request->releaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersionStatus)) {
    query->insert(pair<string, string>("releaseVersionStatus", *request->releaseVersionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceFilter)) {
    query->insert(pair<string, string>("serviceFilter", *request->serviceFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReleaseVersions"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/releaseVersions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListReleaseVersionsResponse(callApi(params, req, runtime));
}

ListReleaseVersionsResponse Alibabacloud_Emr-serverless-spark20230808::Client::listReleaseVersions(shared_ptr<ListReleaseVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listReleaseVersionsWithOptions(request, headers, runtime);
}

ListSessionClustersResponse Alibabacloud_Emr-serverless-spark20230808::Client::listSessionClustersWithOptions(shared_ptr<string> workspaceId,
                                                                                                              shared_ptr<ListSessionClustersRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    query->insert(pair<string, string>("kind", *request->kind));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionClusterId)) {
    query->insert(pair<string, string>("sessionClusterId", *request->sessionClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSessionClusters"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/sessionClusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSessionClustersResponse(callApi(params, req, runtime));
}

ListSessionClustersResponse Alibabacloud_Emr-serverless-spark20230808::Client::listSessionClusters(shared_ptr<string> workspaceId, shared_ptr<ListSessionClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSessionClustersWithOptions(workspaceId, request, headers, runtime);
}

ListWorkspaceQueuesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listWorkspaceQueuesWithOptions(shared_ptr<string> workspaceId,
                                                                                                              shared_ptr<ListWorkspaceQueuesRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaceQueues"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/queues"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspaceQueuesResponse(callApi(params, req, runtime));
}

ListWorkspaceQueuesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listWorkspaceQueues(shared_ptr<string> workspaceId, shared_ptr<ListWorkspaceQueuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspaceQueuesWithOptions(workspaceId, request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkspacesShrinkRequest> request = make_shared<ListWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListWorkspacesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("state", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

ListWorkspacesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspacesWithOptions(request, headers, runtime);
}

RefreshLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::refreshLivyComputeTokenWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                                      shared_ptr<string> livyComputeId,
                                                                                                                      shared_ptr<string> tokenId,
                                                                                                                      shared_ptr<RefreshLivyComputeTokenRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<RefreshLivyComputeTokenRequestAutoExpireConfiguration>(request->autoExpireConfiguration)) {
    body->insert(pair<string, RefreshLivyComputeTokenRequestAutoExpireConfiguration>("autoExpireConfiguration", *request->autoExpireConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshLivyComputeToken"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/token/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tokenId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshLivyComputeTokenResponse(callApi(params, req, runtime));
}

RefreshLivyComputeTokenResponse Alibabacloud_Emr-serverless-spark20230808::Client::refreshLivyComputeToken(shared_ptr<string> workspaceBizId,
                                                                                                           shared_ptr<string> livyComputeId,
                                                                                                           shared_ptr<string> tokenId,
                                                                                                           shared_ptr<RefreshLivyComputeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return refreshLivyComputeTokenWithOptions(workspaceBizId, livyComputeId, tokenId, request, headers, runtime);
}

StartJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::startJobRunWithOptions(shared_ptr<string> workspaceId,
                                                                                              shared_ptr<StartJobRunRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeType)) {
    body->insert(pair<string, string>("codeType", *request->codeType));
  }
  if (!Darabonba_Util::Client::isUnset<StartJobRunRequestConfigurationOverrides>(request->configurationOverrides)) {
    body->insert(pair<string, StartJobRunRequestConfigurationOverrides>("configurationOverrides", *request->configurationOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayReleaseVersion)) {
    body->insert(pair<string, string>("displayReleaseVersion", *request->displayReleaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->executionTimeoutSeconds)) {
    body->insert(pair<string, long>("executionTimeoutSeconds", *request->executionTimeoutSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fusion)) {
    body->insert(pair<string, bool>("fusion", *request->fusion));
  }
  if (!Darabonba_Util::Client::isUnset<JobDriver>(request->jobDriver)) {
    body->insert(pair<string, JobDriver>("jobDriver", *request->jobDriver));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("jobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("releaseVersion", *request->releaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQueueId)) {
    body->insert(pair<string, string>("resourceQueueId", *request->resourceQueueId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    body->insert(pair<string, vector<Tag>>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartJobRun"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/jobRuns"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartJobRunResponse(callApi(params, req, runtime));
}

StartJobRunResponse Alibabacloud_Emr-serverless-spark20230808::Client::startJobRun(shared_ptr<string> workspaceId, shared_ptr<StartJobRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startJobRunWithOptions(workspaceId, request, headers, runtime);
}

StartLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::startLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                        shared_ptr<string> livyComputeId,
                                                                                                        shared_ptr<StartLivyComputeRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLivyComputeResponse(callApi(params, req, runtime));
}

StartLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::startLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<StartLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

StartProcessInstanceResponse Alibabacloud_Emr-serverless-spark20230808::Client::startProcessInstanceWithOptions(shared_ptr<string> bizId,
                                                                                                                shared_ptr<StartProcessInstanceRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    query->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isProd)) {
    query->insert(pair<string, bool>("isProd", *request->isProd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processDefinitionCode)) {
    query->insert(pair<string, long>("processDefinitionCode", *request->processDefinitionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productNamespace)) {
    query->insert(pair<string, string>("productNamespace", *request->productNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeQueue)) {
    query->insert(pair<string, string>("runtimeQueue", *request->runtimeQueue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionHashCode)) {
    query->insert(pair<string, string>("versionHashCode", *request->versionHashCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionNumber)) {
    query->insert(pair<string, long>("versionNumber", *request->versionNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartProcessInstance"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(bizId)) + string("/executors/start-process-instance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartProcessInstanceResponse(callApi(params, req, runtime));
}

StartProcessInstanceResponse Alibabacloud_Emr-serverless-spark20230808::Client::startProcessInstance(shared_ptr<string> bizId, shared_ptr<StartProcessInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startProcessInstanceWithOptions(bizId, request, headers, runtime);
}

StartSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::startSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                                                                              shared_ptr<StartSessionClusterRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    body->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionClusterId)) {
    body->insert(pair<string, string>("sessionClusterId", *request->sessionClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSessionCluster"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/sessionClusters/action/startSessionCluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSessionClusterResponse(callApi(params, req, runtime));
}

StartSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::startSessionCluster(shared_ptr<string> workspaceId, shared_ptr<StartSessionClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

StopLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::stopLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                      shared_ptr<string> livyComputeId,
                                                                                                      shared_ptr<StopLivyComputeRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLivyComputeResponse(callApi(params, req, runtime));
}

StopLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::stopLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<StopLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

StopSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::stopSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                                                                            shared_ptr<StopSessionClusterRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    body->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionClusterId)) {
    body->insert(pair<string, string>("sessionClusterId", *request->sessionClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSessionCluster"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/sessionClusters/action/stopSessionCluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopSessionClusterResponse(callApi(params, req, runtime));
}

StopSessionClusterResponse Alibabacloud_Emr-serverless-spark20230808::Client::stopSessionCluster(shared_ptr<string> workspaceId, shared_ptr<StopSessionClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopSessionClusterWithOptions(workspaceId, request, headers, runtime);
}

TerminateSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::terminateSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                                                                                  shared_ptr<string> statementId,
                                                                                                                  shared_ptr<TerminateSqlStatementRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateSqlStatement"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/statement/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(statementId)) + string("/terminate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateSqlStatementResponse(callApi(params, req, runtime));
}

TerminateSqlStatementResponse Alibabacloud_Emr-serverless-spark20230808::Client::terminateSqlStatement(shared_ptr<string> workspaceId, shared_ptr<string> statementId, shared_ptr<TerminateSqlStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return terminateSqlStatementWithOptions(workspaceId, statementId, request, headers, runtime);
}

UpdateLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::updateLivyComputeWithOptions(shared_ptr<string> workspaceBizId,
                                                                                                          shared_ptr<string> livyComputeId,
                                                                                                          shared_ptr<UpdateLivyComputeRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    body->insert(pair<string, string>("authType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLivyComputeRequestAutoStartConfiguration>(request->autoStartConfiguration)) {
    body->insert(pair<string, UpdateLivyComputeRequestAutoStartConfiguration>("autoStartConfiguration", *request->autoStartConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLivyComputeRequestAutoStopConfiguration>(request->autoStopConfiguration)) {
    body->insert(pair<string, UpdateLivyComputeRequestAutoStopConfiguration>("autoStopConfiguration", *request->autoStopConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuLimit)) {
    body->insert(pair<string, string>("cpuLimit", *request->cpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayReleaseVersion)) {
    body->insert(pair<string, string>("displayReleaseVersion", *request->displayReleaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePublic)) {
    body->insert(pair<string, bool>("enablePublic", *request->enablePublic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    body->insert(pair<string, string>("environmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fusion)) {
    body->insert(pair<string, bool>("fusion", *request->fusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->livyServerConf)) {
    body->insert(pair<string, string>("livyServerConf", *request->livyServerConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->livyVersion)) {
    body->insert(pair<string, string>("livyVersion", *request->livyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryLimit)) {
    body->insert(pair<string, string>("memoryLimit", *request->memoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkName)) {
    body->insert(pair<string, string>("networkName", *request->networkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    body->insert(pair<string, string>("queueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("releaseVersion", *request->releaseVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivyCompute"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/interactive/v1/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceBizId)) + string("/livycompute/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(livyComputeId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLivyComputeResponse(callApi(params, req, runtime));
}

UpdateLivyComputeResponse Alibabacloud_Emr-serverless-spark20230808::Client::updateLivyCompute(shared_ptr<string> workspaceBizId, shared_ptr<string> livyComputeId, shared_ptr<UpdateLivyComputeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLivyComputeWithOptions(workspaceBizId, livyComputeId, request, headers, runtime);
}

UpdateProcessDefinitionWithScheduleResponse Alibabacloud_Emr-serverless-spark20230808::Client::updateProcessDefinitionWithScheduleWithOptions(shared_ptr<string> bizId,
                                                                                                                                              shared_ptr<string> code,
                                                                                                                                              shared_ptr<UpdateProcessDefinitionWithScheduleRequest> tmpReq,
                                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateProcessDefinitionWithScheduleShrinkRequest> request = make_shared<UpdateProcessDefinitionWithScheduleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams>>(tmpReq->globalParams)) {
    request->globalParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalParams, make_shared<string>("globalParams"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProcessDefinitionWithScheduleRequestSchedule>(tmpReq->schedule)) {
    request->scheduleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedule, make_shared<string>("schedule"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson>>(tmpReq->taskDefinitionJson)) {
    request->taskDefinitionJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskDefinitionJson, make_shared<string>("taskDefinitionJson"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson>>(tmpReq->taskRelationJson)) {
    request->taskRelationJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskRelationJson, make_shared<string>("taskRelationJson"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertEmailAddress)) {
    query->insert(pair<string, string>("alertEmailAddress", *request->alertEmailAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionType)) {
    query->insert(pair<string, string>("executionType", *request->executionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalParamsShrink)) {
    query->insert(pair<string, string>("globalParams", *request->globalParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productNamespace)) {
    query->insert(pair<string, string>("productNamespace", *request->productNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publish)) {
    query->insert(pair<string, bool>("publish", *request->publish));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseState)) {
    query->insert(pair<string, string>("releaseState", *request->releaseState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQueue)) {
    query->insert(pair<string, string>("resourceQueue", *request->resourceQueue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryTimes)) {
    query->insert(pair<string, long>("retryTimes", *request->retryTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runAs)) {
    query->insert(pair<string, string>("runAs", *request->runAs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleShrink)) {
    query->insert(pair<string, string>("schedule", *request->scheduleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDefinitionJsonShrink)) {
    query->insert(pair<string, string>("taskDefinitionJson", *request->taskDefinitionJsonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskParallelism)) {
    query->insert(pair<string, long>("taskParallelism", *request->taskParallelism));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskRelationJsonShrink)) {
    query->insert(pair<string, string>("taskRelationJson", *request->taskRelationJsonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProcessDefinitionWithSchedule"))},
    {"version", boost::any(string("2023-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dolphinscheduler/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(bizId)) + string("/process-definition/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(code)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProcessDefinitionWithScheduleResponse(callApi(params, req, runtime));
}

UpdateProcessDefinitionWithScheduleResponse Alibabacloud_Emr-serverless-spark20230808::Client::updateProcessDefinitionWithSchedule(shared_ptr<string> bizId, shared_ptr<string> code, shared_ptr<UpdateProcessDefinitionWithScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProcessDefinitionWithScheduleWithOptions(bizId, code, request, headers, runtime);
}

