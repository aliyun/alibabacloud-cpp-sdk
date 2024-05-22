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
  if (!Darabonba_Util::Client::isUnset<string>(request->jobRunId)) {
    query->insert(pair<string, string>("jobRunId", *request->jobRunId));
  }
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

ListWorkspacesResponse Alibabacloud_Emr-serverless-spark20230808::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
  if (!Darabonba_Util::Client::isUnset<long>(request->executionTimeoutSeconds)) {
    body->insert(pair<string, long>("executionTimeoutSeconds", *request->executionTimeoutSeconds));
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

